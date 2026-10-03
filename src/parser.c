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
#define STATE_COUNT 1391
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 265
#define ALIAS_COUNT 0
#define TOKEN_COUNT 128
#define EXTERNAL_TOKEN_COUNT 24
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 92

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
  sym_flow_gather_keyword = 57,
  sym_flow_settle_keyword = 58,
  sym_flow_map_keyword = 59,
  sym_flow_keep_keyword = 60,
  sym_flow_drop_keyword = 61,
  sym_flow_sort_keyword = 62,
  sym_flow_rank_keyword = 63,
  sym_flow_repeat_keyword = 64,
  sym_flow_until_keyword = 65,
  sym_flow_from_keyword = 66,
  sym_flow_windowing_keyword = 67,
  sym_flow_using_keyword = 68,
  sym_flow_if_keyword = 69,
  sym_flow_by_keyword = 70,
  sym_flow_in_keyword = 71,
  sym_flow_lane_keyword = 72,
  sym_flow_ascending_keyword = 73,
  sym_flow_descending_keyword = 74,
  sym_flow_time_keyword = 75,
  sym_flow_times_keyword = 76,
  sym_flow_par_keyword = 77,
  sym_flow_first_keyword = 78,
  sym_flow_last_keyword = 79,
  sym_flow_top_keyword = 80,
  sym_flow_bottom_keyword = 81,
  sym_flow_think_keyword = 82,
  sym_flow_use_keyword = 83,
  sym_thunk_keyword = 84,
  sym_recall_keyword = 85,
  anon_sym_call = 86,
  anon_sym_do = 87,
  anon_sym_unfold = 88,
  anon_sym_each = 89,
  anon_sym_fold = 90,
  anon_sym_head = 91,
  anon_sym_tail = 92,
  sym_optional_marker = 93,
  sym_arrow = 94,
  sym_colon = 95,
  sym_lparen = 96,
  sym_rparen = 97,
  sym_comma = 98,
  sym_cap_kind = 99,
  sym_pascal_name = 100,
  sym_snake_name = 101,
  sym__snake_kebab_name = 102,
  sym_text_line = 103,
  sym_newline = 104,
  sym_blank_line = 105,
  sym__comment_start = 106,
  sym_plain_comment = 107,
  sym_shebang_comment = 108,
  sym__module_doc_start = 109,
  sym__item_doc_start = 110,
  sym__param_item_doc_start = 111,
  sym__comment_end = 112,
  sym__indent = 113,
  sym__dedent = 114,
  sym__line_start = 115,
  sym__directive_start = 116,
  sym__until_start = 117,
  sym__from_start = 118,
  sym__settle_indent = 119,
  sym__settle_text_start = 120,
  sym__text_indent = 121,
  sym__cap_text_start = 122,
  sym_indented_raw_text = 123,
  sym__flow_raw_text = 124,
  sym__agic_raw_text = 125,
  sym__error_line = 126,
  sym__exec_binding_start = 127,
  sym_source_file = 128,
  sym_item = 129,
  sym_line_end = 130,
  sym_module_doc_comment = 131,
  sym_item_doc_comment = 132,
  sym_param_doc_tag = 133,
  sym__trivia = 134,
  sym_with = 135,
  sym_type = 136,
  sym_base_type = 137,
  sym_builtin_type = 138,
  sym_user_type = 139,
  sym_type_suffix = 140,
  sym_struct = 141,
  sym_struct_name = 142,
  sym_struct_body = 143,
  sym_field = 144,
  sym_field_name = 145,
  sym_psyche = 146,
  sym_skill = 147,
  sym_service = 148,
  sym_prompt = 149,
  sym__cap_definition = 150,
  sym_cap_body = 151,
  sym__cap_text_body = 152,
  sym_task = 153,
  sym_chore = 154,
  sym_cap_name = 155,
  sym_cap_ref = 156,
  sym_job_name = 157,
  sym_job_body = 158,
  sym_property = 159,
  sym_property_key = 160,
  sym_property_value = 161,
  sym_instruct = 162,
  sym_instruct_name = 163,
  sym_instruct_body = 164,
  sym_context = 165,
  sym_context_name = 166,
  sym_context_body = 167,
  sym_text_inline = 168,
  sym_text_block = 169,
  sym_text_body = 170,
  sym_text_body_line = 171,
  sym_agic = 172,
  sym_agic_name = 173,
  sym_agic_body = 174,
  sym_params = 175,
  sym_param = 176,
  sym_param_name = 177,
  sym_flow = 178,
  sym_flow_name = 179,
  sym_flow_body = 180,
  sym_statements = 181,
  sym__flow_statement = 182,
  sym__flow_operation = 183,
  sym_let_statement = 184,
  sym_exec_statement = 185,
  sym__invalid_exec_binding = 186,
  sym_run_statement = 187,
  sym_implicit_run_statement = 188,
  sym__implicit_run_line = 189,
  sym_seek_statement = 190,
  sym_ask_statement = 191,
  sym_scatter_statement = 192,
  sym_storm_statement = 193,
  sym_gather_statement = 194,
  sym_settle_statement = 195,
  sym__settle_inline_line = 196,
  sym__settle_line = 197,
  sym__settle_inline_block = 198,
  sym__settle_text_body = 199,
  sym__from_complement = 200,
  sym_map_statement = 201,
  sym_keep_statement = 202,
  sym_drop_statement = 203,
  sym_sort_statement = 204,
  sym__named_using_complement = 205,
  sym__inline_using_complement = 206,
  sym__named_if_complement = 207,
  sym__inline_if_complement = 208,
  sym__named_by_complement = 209,
  sym__inline_by_complement = 210,
  sym__using_complements = 211,
  sym__if_complements = 212,
  sym__by_complements = 213,
  sym__lanes_complement = 214,
  sym__order_complement = 215,
  sym_repeat_statement = 216,
  sym__window_complement = 217,
  sym__repeat_count_complement = 218,
  sym__until_complement = 219,
  sym_invalid_flow_reserved_statement = 220,
  sym_inline_agic = 221,
  sym_inline_agic_body = 222,
  sym_position = 223,
  sym_runnable = 224,
  sym_agent = 225,
  sym_local_name = 226,
  sym_directive = 227,
  sym__query_directive_key = 228,
  sym__route_directive_key = 229,
  sym_directive_key = 230,
  sym_directive_op = 231,
  sym_route_value = 232,
  sym_recall_value = 233,
  sym_recall_source = 234,
  sym__directives = 235,
  sym_text_ref = 236,
  sym_messages = 237,
  sym_message = 238,
  sym_unroled_message = 239,
  sym__unroled_message_line = 240,
  sym_invalid_agic_reserved_message = 241,
  sym_role = 242,
  sym__pass_statement = 243,
  sym_flow_lanes_keyword = 244,
  sym__flow_reserved_word = 245,
  sym__agic_reserved_word = 246,
  sym_assign_operator = 247,
  sym_type_name = 248,
  aux_sym_source_file_repeat1 = 249,
  aux_sym_type_repeat1 = 250,
  aux_sym_struct_body_repeat1 = 251,
  aux_sym_struct_body_repeat2 = 252,
  aux_sym__cap_definition_repeat1 = 253,
  aux_sym__cap_text_body_repeat1 = 254,
  aux_sym_job_body_repeat1 = 255,
  aux_sym_text_body_repeat1 = 256,
  aux_sym_params_repeat1 = 257,
  aux_sym_statements_repeat1 = 258,
  aux_sym_implicit_run_statement_repeat1 = 259,
  aux_sym_route_value_repeat1 = 260,
  aux_sym_recall_value_repeat1 = 261,
  aux_sym__directives_repeat1 = 262,
  aux_sym_messages_repeat1 = 263,
  aux_sym_unroled_message_repeat1 = 264,
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
  [sym_flow_gather_keyword] = "flow_gather_keyword",
  [sym_flow_settle_keyword] = "flow_settle_keyword",
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
  [sym__settle_indent] = "_settle_indent",
  [sym__settle_text_start] = "_settle_text_start",
  [sym__text_indent] = "_text_indent",
  [sym__cap_text_start] = "_cap_text_start",
  [sym_indented_raw_text] = "indented_raw_text",
  [sym__flow_raw_text] = "indented_raw_text",
  [sym__agic_raw_text] = "indented_raw_text",
  [sym__error_line] = "_error_line",
  [sym__exec_binding_start] = "_exec_binding_start",
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
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
  [sym_run_statement] = "run_statement",
  [sym_implicit_run_statement] = "implicit_run_statement",
  [sym__implicit_run_line] = "text_body_line",
  [sym_seek_statement] = "seek_statement",
  [sym_ask_statement] = "ask_statement",
  [sym_scatter_statement] = "scatter_statement",
  [sym_storm_statement] = "storm_statement",
  [sym_gather_statement] = "gather_statement",
  [sym_settle_statement] = "settle_statement",
  [sym__settle_inline_line] = "inline_agic",
  [sym__settle_line] = "text_inline",
  [sym__settle_inline_block] = "inline_agic",
  [sym__settle_text_body] = "text_body",
  [sym__from_complement] = "_from_complement",
  [sym_map_statement] = "map_statement",
  [sym_keep_statement] = "keep_statement",
  [sym_drop_statement] = "drop_statement",
  [sym_sort_statement] = "sort_statement",
  [sym__named_using_complement] = "_named_using_complement",
  [sym__inline_using_complement] = "_inline_using_complement",
  [sym__named_if_complement] = "_named_if_complement",
  [sym__inline_if_complement] = "_inline_if_complement",
  [sym__named_by_complement] = "_named_by_complement",
  [sym__inline_by_complement] = "_inline_by_complement",
  [sym__using_complements] = "_using_complements",
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
  [sym_flow_gather_keyword] = sym_flow_gather_keyword,
  [sym_flow_settle_keyword] = sym_flow_settle_keyword,
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
  [sym__settle_indent] = sym__settle_indent,
  [sym__settle_text_start] = sym__settle_text_start,
  [sym__text_indent] = sym__text_indent,
  [sym__cap_text_start] = sym__cap_text_start,
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym__flow_raw_text] = sym_indented_raw_text,
  [sym__agic_raw_text] = sym_indented_raw_text,
  [sym__error_line] = sym__error_line,
  [sym__exec_binding_start] = sym__exec_binding_start,
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
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
  [sym_run_statement] = sym_run_statement,
  [sym_implicit_run_statement] = sym_implicit_run_statement,
  [sym__implicit_run_line] = sym_text_body_line,
  [sym_seek_statement] = sym_seek_statement,
  [sym_ask_statement] = sym_ask_statement,
  [sym_scatter_statement] = sym_scatter_statement,
  [sym_storm_statement] = sym_storm_statement,
  [sym_gather_statement] = sym_gather_statement,
  [sym_settle_statement] = sym_settle_statement,
  [sym__settle_inline_line] = sym_inline_agic,
  [sym__settle_line] = sym_text_inline,
  [sym__settle_inline_block] = sym_inline_agic,
  [sym__settle_text_body] = sym_text_body,
  [sym__from_complement] = sym__from_complement,
  [sym_map_statement] = sym_map_statement,
  [sym_keep_statement] = sym_keep_statement,
  [sym_drop_statement] = sym_drop_statement,
  [sym_sort_statement] = sym_sort_statement,
  [sym__named_using_complement] = sym__named_using_complement,
  [sym__inline_using_complement] = sym__inline_using_complement,
  [sym__named_if_complement] = sym__named_if_complement,
  [sym__inline_if_complement] = sym__inline_if_complement,
  [sym__named_by_complement] = sym__named_by_complement,
  [sym__inline_by_complement] = sym__inline_by_complement,
  [sym__using_complements] = sym__using_complements,
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
  [sym_flow_gather_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_settle_keyword] = {
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
  [sym__settle_indent] = {
    .visible = false,
    .named = true,
  },
  [sym__settle_text_start] = {
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
  [sym_scatter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_storm_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_gather_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_settle_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__settle_inline_line] = {
    .visible = true,
    .named = true,
  },
  [sym__settle_line] = {
    .visible = true,
    .named = true,
  },
  [sym__settle_inline_block] = {
    .visible = true,
    .named = true,
  },
  [sym__settle_text_body] = {
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
  [sym__inline_using_complement] = {
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
  [sym__using_complements] = {
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
  [37] = {.index = 88, .length = 1},
  [38] = {.index = 89, .length = 1},
  [39] = {.index = 90, .length = 4},
  [40] = {.index = 94, .length = 1},
  [41] = {.index = 95, .length = 2},
  [42] = {.index = 97, .length = 1},
  [43] = {.index = 98, .length = 2},
  [44] = {.index = 100, .length = 1},
  [45] = {.index = 101, .length = 1},
  [46] = {.index = 102, .length = 1},
  [47] = {.index = 103, .length = 7},
  [48] = {.index = 110, .length = 1},
  [49] = {.index = 111, .length = 2},
  [50] = {.index = 113, .length = 1},
  [51] = {.index = 114, .length = 3},
  [52] = {.index = 117, .length = 4},
  [53] = {.index = 121, .length = 2},
  [54] = {.index = 123, .length = 2},
  [55] = {.index = 125, .length = 1},
  [56] = {.index = 126, .length = 3},
  [57] = {.index = 129, .length = 1},
  [58] = {.index = 130, .length = 1},
  [59] = {.index = 131, .length = 2},
  [60] = {.index = 133, .length = 3},
  [61] = {.index = 133, .length = 3},
  [62] = {.index = 136, .length = 2},
  [63] = {.index = 138, .length = 2},
  [64] = {.index = 140, .length = 2},
  [65] = {.index = 142, .length = 5},
  [66] = {.index = 147, .length = 1},
  [67] = {.index = 148, .length = 2},
  [68] = {.index = 150, .length = 3},
  [69] = {.index = 153, .length = 3},
  [70] = {.index = 156, .length = 5},
  [71] = {.index = 161, .length = 4},
  [72] = {.index = 165, .length = 1},
  [73] = {.index = 166, .length = 1},
  [74] = {.index = 167, .length = 1},
  [75] = {.index = 168, .length = 3},
  [76] = {.index = 171, .length = 2},
  [77] = {.index = 173, .length = 2},
  [78] = {.index = 175, .length = 2},
  [79] = {.index = 177, .length = 3},
  [80] = {.index = 180, .length = 2},
  [81] = {.index = 182, .length = 1},
  [82] = {.index = 183, .length = 2},
  [83] = {.index = 185, .length = 3},
  [84] = {.index = 188, .length = 3},
  [85] = {.index = 191, .length = 2},
  [86] = {.index = 193, .length = 3},
  [87] = {.index = 196, .length = 3},
  [88] = {.index = 199, .length = 3},
  [89] = {.index = 202, .length = 4},
  [90] = {.index = 206, .length = 3},
  [91] = {.index = 209, .length = 4},
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
    {field_runnable, 1},
  [89] =
    {field_runnable, 1, .inherited = true},
  [90] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [94] =
    {field_runnable, 0, .inherited = true},
  [95] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [97] =
    {field_order, 0},
  [98] =
    {field_body, 3},
    {field_property, 2, .inherited = true},
  [100] =
    {field_body, 3},
  [101] =
    {field_property, 3, .inherited = true},
  [102] =
    {field_content, 1, .inherited = true},
  [103] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [110] =
    {field_body, 1},
  [111] =
    {field_agent, 1},
    {field_agic, 2},
  [113] =
    {field_runnable, 2},
  [114] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [117] =
    {field_arrow, 2, .inherited = true},
    {field_body, 2, .inherited = true},
    {field_return, 2, .inherited = true},
    {field_runnable, 2},
  [121] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [123] =
    {field_count, 1},
    {field_side, 0},
  [125] =
    {field_selection, 1},
  [126] =
    {field_lanes, 2, .inherited = true},
    {field_order, 1, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [129] =
    {field_count, 0},
  [130] =
    {field_window, 1},
  [131] =
    {field_body, 4},
    {field_property, 3, .inherited = true},
  [133] =
    {field_key, 1},
    {field_operator, 2},
    {field_value, 3},
  [136] =
    {field_name, 1},
    {field_value, 3},
  [138] =
    {field_name, 1},
    {field_statement, 3},
  [140] =
    {field_agent, 1},
    {field_runnable, 2},
  [142] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_from, 2, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [147] =
    {field_lanes, 1},
  [148] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [150] =
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [153] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [156] =
    {field_arrow, 2, .inherited = true},
    {field_body, 2, .inherited = true},
    {field_from, 3, .inherited = true},
    {field_return, 2, .inherited = true},
    {field_runnable, 2},
  [161] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [165] =
    {field_name, 1},
  [166] =
    {field_body, 4},
  [167] =
    {field_from, 3},
  [168] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [171] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [173] =
    {field_body, 4},
    {field_until, 5, .inherited = true},
  [175] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
  [177] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [180] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [182] =
    {field_until, 2},
  [183] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
  [185] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
    {field_window, 1, .inherited = true},
  [188] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_until, 6, .inherited = true},
  [191] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
  [193] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [196] =
    {field_body, 6},
    {field_until, 7, .inherited = true},
    {field_window, 1, .inherited = true},
  [199] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
  [202] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
    {field_window, 2, .inherited = true},
  [206] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [209] =
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
  [10] = 9,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 18,
  [23] = 19,
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
  [36] = 36,
  [37] = 31,
  [38] = 38,
  [39] = 29,
  [40] = 29,
  [41] = 31,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 49,
  [57] = 50,
  [58] = 49,
  [59] = 59,
  [60] = 53,
  [61] = 54,
  [62] = 50,
  [63] = 63,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 66,
  [77] = 66,
  [78] = 67,
  [79] = 69,
  [80] = 80,
  [81] = 81,
  [82] = 67,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 71,
  [91] = 72,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 73,
  [97] = 83,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 75,
  [103] = 103,
  [104] = 83,
  [105] = 68,
  [106] = 65,
  [107] = 84,
  [108] = 80,
  [109] = 71,
  [110] = 72,
  [111] = 73,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 89,
  [125] = 125,
  [126] = 98,
  [127] = 99,
  [128] = 100,
  [129] = 101,
  [130] = 119,
  [131] = 131,
  [132] = 132,
  [133] = 65,
  [134] = 84,
  [135] = 135,
  [136] = 136,
  [137] = 89,
  [138] = 85,
  [139] = 98,
  [140] = 99,
  [141] = 100,
  [142] = 101,
  [143] = 119,
  [144] = 119,
  [145] = 119,
  [146] = 119,
  [147] = 119,
  [148] = 119,
  [149] = 119,
  [150] = 119,
  [151] = 119,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 152,
  [156] = 156,
  [157] = 157,
  [158] = 85,
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
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 164,
  [173] = 114,
  [174] = 174,
  [175] = 175,
  [176] = 117,
  [177] = 177,
  [178] = 178,
  [179] = 117,
  [180] = 161,
  [181] = 165,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 160,
  [189] = 186,
  [190] = 190,
  [191] = 163,
  [192] = 164,
  [193] = 165,
  [194] = 194,
  [195] = 187,
  [196] = 196,
  [197] = 170,
  [198] = 170,
  [199] = 199,
  [200] = 200,
  [201] = 187,
  [202] = 202,
  [203] = 167,
  [204] = 204,
  [205] = 114,
  [206] = 206,
  [207] = 160,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 161,
  [212] = 178,
  [213] = 213,
  [214] = 178,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 186,
  [222] = 166,
  [223] = 223,
  [224] = 166,
  [225] = 167,
  [226] = 226,
  [227] = 103,
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
  [275] = 202,
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
  [339] = 103,
  [340] = 340,
  [341] = 331,
  [342] = 332,
  [343] = 333,
  [344] = 334,
  [345] = 335,
  [346] = 336,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 15,
  [353] = 337,
  [354] = 338,
  [355] = 337,
  [356] = 338,
  [357] = 331,
  [358] = 332,
  [359] = 333,
  [360] = 334,
  [361] = 335,
  [362] = 336,
  [363] = 337,
  [364] = 338,
  [365] = 226,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 366,
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
  [385] = 340,
  [386] = 386,
  [387] = 368,
  [388] = 388,
  [389] = 388,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 246,
  [400] = 247,
  [401] = 249,
  [402] = 273,
  [403] = 403,
  [404] = 372,
  [405] = 373,
  [406] = 374,
  [407] = 376,
  [408] = 384,
  [409] = 409,
  [410] = 336,
  [411] = 409,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
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
  [436] = 436,
  [437] = 412,
  [438] = 366,
  [439] = 367,
  [440] = 413,
  [441] = 414,
  [442] = 415,
  [443] = 416,
  [444] = 417,
  [445] = 418,
  [446] = 446,
  [447] = 391,
  [448] = 421,
  [449] = 449,
  [450] = 422,
  [451] = 379,
  [452] = 380,
  [453] = 423,
  [454] = 424,
  [455] = 425,
  [456] = 426,
  [457] = 340,
  [458] = 427,
  [459] = 368,
  [460] = 428,
  [461] = 388,
  [462] = 429,
  [463] = 391,
  [464] = 393,
  [465] = 393,
  [466] = 394,
  [467] = 395,
  [468] = 431,
  [469] = 432,
  [470] = 433,
  [471] = 246,
  [472] = 247,
  [473] = 249,
  [474] = 273,
  [475] = 434,
  [476] = 372,
  [477] = 373,
  [478] = 374,
  [479] = 376,
  [480] = 384,
  [481] = 409,
  [482] = 419,
  [483] = 435,
  [484] = 412,
  [485] = 413,
  [486] = 414,
  [487] = 415,
  [488] = 416,
  [489] = 417,
  [490] = 418,
  [491] = 436,
  [492] = 177,
  [493] = 421,
  [494] = 422,
  [495] = 423,
  [496] = 424,
  [497] = 425,
  [498] = 426,
  [499] = 427,
  [500] = 428,
  [501] = 429,
  [502] = 204,
  [503] = 431,
  [504] = 432,
  [505] = 433,
  [506] = 434,
  [507] = 435,
  [508] = 436,
  [509] = 196,
  [510] = 366,
  [511] = 367,
  [512] = 394,
  [513] = 366,
  [514] = 367,
  [515] = 395,
  [516] = 103,
  [517] = 517,
  [518] = 199,
  [519] = 194,
  [520] = 520,
  [521] = 194,
  [522] = 367,
  [523] = 199,
  [524] = 226,
  [525] = 379,
  [526] = 380,
  [527] = 202,
  [528] = 528,
  [529] = 377,
  [530] = 382,
  [531] = 390,
  [532] = 396,
  [533] = 397,
  [534] = 430,
  [535] = 535,
  [536] = 536,
  [537] = 377,
  [538] = 382,
  [539] = 390,
  [540] = 396,
  [541] = 397,
  [542] = 430,
  [543] = 331,
  [544] = 274,
  [545] = 378,
  [546] = 381,
  [547] = 392,
  [548] = 274,
  [549] = 378,
  [550] = 381,
  [551] = 392,
  [552] = 332,
  [553] = 333,
  [554] = 334,
  [555] = 335,
  [556] = 419,
  [557] = 318,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 250,
  [566] = 251,
  [567] = 252,
  [568] = 568,
  [569] = 569,
  [570] = 253,
  [571] = 254,
  [572] = 255,
  [573] = 573,
  [574] = 256,
  [575] = 257,
  [576] = 258,
  [577] = 259,
  [578] = 260,
  [579] = 579,
  [580] = 580,
  [581] = 261,
  [582] = 262,
  [583] = 583,
  [584] = 584,
  [585] = 263,
  [586] = 264,
  [587] = 265,
  [588] = 266,
  [589] = 267,
  [590] = 268,
  [591] = 269,
  [592] = 270,
  [593] = 331,
  [594] = 594,
  [595] = 271,
  [596] = 272,
  [597] = 332,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 276,
  [602] = 602,
  [603] = 603,
  [604] = 229,
  [605] = 605,
  [606] = 606,
  [607] = 230,
  [608] = 333,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 277,
  [614] = 278,
  [615] = 279,
  [616] = 280,
  [617] = 281,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 282,
  [622] = 622,
  [623] = 283,
  [624] = 624,
  [625] = 284,
  [626] = 626,
  [627] = 285,
  [628] = 286,
  [629] = 287,
  [630] = 288,
  [631] = 289,
  [632] = 290,
  [633] = 291,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 292,
  [642] = 293,
  [643] = 643,
  [644] = 294,
  [645] = 645,
  [646] = 295,
  [647] = 647,
  [648] = 296,
  [649] = 649,
  [650] = 650,
  [651] = 347,
  [652] = 652,
  [653] = 348,
  [654] = 349,
  [655] = 297,
  [656] = 350,
  [657] = 351,
  [658] = 658,
  [659] = 298,
  [660] = 299,
  [661] = 661,
  [662] = 351,
  [663] = 334,
  [664] = 664,
  [665] = 300,
  [666] = 301,
  [667] = 335,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 331,
  [672] = 332,
  [673] = 333,
  [674] = 334,
  [675] = 335,
  [676] = 336,
  [677] = 337,
  [678] = 338,
  [679] = 331,
  [680] = 332,
  [681] = 333,
  [682] = 334,
  [683] = 335,
  [684] = 336,
  [685] = 336,
  [686] = 686,
  [687] = 337,
  [688] = 338,
  [689] = 331,
  [690] = 332,
  [691] = 333,
  [692] = 334,
  [693] = 335,
  [694] = 336,
  [695] = 695,
  [696] = 302,
  [697] = 697,
  [698] = 698,
  [699] = 303,
  [700] = 15,
  [701] = 701,
  [702] = 304,
  [703] = 337,
  [704] = 338,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 305,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 306,
  [716] = 307,
  [717] = 717,
  [718] = 718,
  [719] = 308,
  [720] = 612,
  [721] = 309,
  [722] = 722,
  [723] = 310,
  [724] = 348,
  [725] = 725,
  [726] = 311,
  [727] = 727,
  [728] = 312,
  [729] = 313,
  [730] = 730,
  [731] = 731,
  [732] = 314,
  [733] = 234,
  [734] = 235,
  [735] = 349,
  [736] = 315,
  [737] = 737,
  [738] = 316,
  [739] = 317,
  [740] = 318,
  [741] = 741,
  [742] = 568,
  [743] = 319,
  [744] = 320,
  [745] = 745,
  [746] = 321,
  [747] = 322,
  [748] = 748,
  [749] = 323,
  [750] = 324,
  [751] = 751,
  [752] = 752,
  [753] = 325,
  [754] = 643,
  [755] = 326,
  [756] = 327,
  [757] = 328,
  [758] = 350,
  [759] = 329,
  [760] = 330,
  [761] = 761,
  [762] = 236,
  [763] = 348,
  [764] = 349,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 237,
  [769] = 769,
  [770] = 350,
  [771] = 771,
  [772] = 229,
  [773] = 230,
  [774] = 238,
  [775] = 775,
  [776] = 351,
  [777] = 777,
  [778] = 778,
  [779] = 234,
  [780] = 235,
  [781] = 236,
  [782] = 237,
  [783] = 238,
  [784] = 239,
  [785] = 708,
  [786] = 240,
  [787] = 241,
  [788] = 242,
  [789] = 243,
  [790] = 244,
  [791] = 239,
  [792] = 792,
  [793] = 737,
  [794] = 248,
  [795] = 795,
  [796] = 250,
  [797] = 612,
  [798] = 251,
  [799] = 252,
  [800] = 253,
  [801] = 254,
  [802] = 255,
  [803] = 256,
  [804] = 257,
  [805] = 258,
  [806] = 259,
  [807] = 260,
  [808] = 261,
  [809] = 262,
  [810] = 263,
  [811] = 264,
  [812] = 265,
  [813] = 266,
  [814] = 737,
  [815] = 267,
  [816] = 268,
  [817] = 269,
  [818] = 270,
  [819] = 568,
  [820] = 271,
  [821] = 272,
  [822] = 240,
  [823] = 241,
  [824] = 824,
  [825] = 276,
  [826] = 369,
  [827] = 370,
  [828] = 277,
  [829] = 278,
  [830] = 279,
  [831] = 643,
  [832] = 280,
  [833] = 281,
  [834] = 282,
  [835] = 283,
  [836] = 284,
  [837] = 285,
  [838] = 286,
  [839] = 287,
  [840] = 288,
  [841] = 289,
  [842] = 290,
  [843] = 291,
  [844] = 292,
  [845] = 293,
  [846] = 294,
  [847] = 295,
  [848] = 296,
  [849] = 297,
  [850] = 298,
  [851] = 299,
  [852] = 300,
  [853] = 301,
  [854] = 302,
  [855] = 303,
  [856] = 304,
  [857] = 305,
  [858] = 306,
  [859] = 307,
  [860] = 308,
  [861] = 309,
  [862] = 708,
  [863] = 310,
  [864] = 311,
  [865] = 312,
  [866] = 708,
  [867] = 313,
  [868] = 314,
  [869] = 315,
  [870] = 316,
  [871] = 317,
  [872] = 872,
  [873] = 319,
  [874] = 320,
  [875] = 730,
  [876] = 620,
  [877] = 321,
  [878] = 579,
  [879] = 583,
  [880] = 322,
  [881] = 701,
  [882] = 323,
  [883] = 706,
  [884] = 730,
  [885] = 620,
  [886] = 324,
  [887] = 579,
  [888] = 583,
  [889] = 325,
  [890] = 326,
  [891] = 730,
  [892] = 620,
  [893] = 730,
  [894] = 620,
  [895] = 795,
  [896] = 327,
  [897] = 328,
  [898] = 329,
  [899] = 330,
  [900] = 242,
  [901] = 243,
  [902] = 244,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 337,
  [907] = 338,
  [908] = 708,
  [909] = 248,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 347,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 347,
  [926] = 926,
  [927] = 15,
  [928] = 928,
  [929] = 929,
  [930] = 930,
  [931] = 931,
  [932] = 337,
  [933] = 338,
  [934] = 331,
  [935] = 332,
  [936] = 333,
  [937] = 334,
  [938] = 335,
  [939] = 336,
  [940] = 331,
  [941] = 332,
  [942] = 333,
  [943] = 334,
  [944] = 335,
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
  [955] = 955,
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
  [984] = 928,
  [985] = 985,
  [986] = 946,
  [987] = 947,
  [988] = 949,
  [989] = 950,
  [990] = 990,
  [991] = 991,
  [992] = 953,
  [993] = 970,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 997,
  [998] = 962,
  [999] = 999,
  [1000] = 963,
  [1001] = 1001,
  [1002] = 996,
  [1003] = 997,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 965,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 347,
  [1014] = 955,
  [1015] = 348,
  [1016] = 349,
  [1017] = 1017,
  [1018] = 350,
  [1019] = 1019,
  [1020] = 968,
  [1021] = 351,
  [1022] = 1022,
  [1023] = 962,
  [1024] = 963,
  [1025] = 1025,
  [1026] = 1026,
  [1027] = 965,
  [1028] = 971,
  [1029] = 926,
  [1030] = 1030,
  [1031] = 999,
  [1032] = 1032,
  [1033] = 968,
  [1034] = 1034,
  [1035] = 971,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 975,
  [1040] = 976,
  [1041] = 977,
  [1042] = 978,
  [1043] = 980,
  [1044] = 983,
  [1045] = 1045,
  [1046] = 928,
  [1047] = 1047,
  [1048] = 946,
  [1049] = 947,
  [1050] = 949,
  [1051] = 950,
  [1052] = 1052,
  [1053] = 975,
  [1054] = 953,
  [1055] = 1055,
  [1056] = 970,
  [1057] = 996,
  [1058] = 997,
  [1059] = 976,
  [1060] = 999,
  [1061] = 977,
  [1062] = 1062,
  [1063] = 978,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 980,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 955,
  [1074] = 955,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 955,
  [1078] = 1078,
  [1079] = 981,
  [1080] = 982,
  [1081] = 1081,
  [1082] = 1010,
  [1083] = 926,
  [1084] = 1047,
  [1085] = 1052,
  [1086] = 1065,
  [1087] = 1010,
  [1088] = 331,
  [1089] = 1047,
  [1090] = 1052,
  [1091] = 1065,
  [1092] = 332,
  [1093] = 333,
  [1094] = 635,
  [1095] = 334,
  [1096] = 1022,
  [1097] = 335,
  [1098] = 336,
  [1099] = 337,
  [1100] = 1004,
  [1101] = 594,
  [1102] = 1025,
  [1103] = 1026,
  [1104] = 599,
  [1105] = 600,
  [1106] = 1045,
  [1107] = 1022,
  [1108] = 338,
  [1109] = 1109,
  [1110] = 1004,
  [1111] = 752,
  [1112] = 765,
  [1113] = 1025,
  [1114] = 1026,
  [1115] = 1045,
  [1116] = 983,
  [1117] = 1022,
  [1118] = 1022,
  [1119] = 930,
  [1120] = 956,
  [1121] = 1032,
  [1122] = 1005,
  [1123] = 337,
  [1124] = 930,
  [1125] = 956,
  [1126] = 338,
  [1127] = 769,
  [1128] = 1005,
  [1129] = 1064,
  [1130] = 1066,
  [1131] = 954,
  [1132] = 1064,
  [1133] = 1066,
  [1134] = 954,
  [1135] = 1135,
  [1136] = 336,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1142,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1148,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1151,
  [1152] = 1146,
  [1153] = 1153,
  [1154] = 1154,
  [1155] = 1155,
  [1156] = 1156,
  [1157] = 1157,
  [1158] = 1158,
  [1159] = 1159,
  [1160] = 1160,
  [1161] = 1161,
  [1162] = 1162,
  [1163] = 1163,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1146,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1169,
  [1170] = 337,
  [1171] = 1171,
  [1172] = 1168,
  [1173] = 1169,
  [1174] = 994,
  [1175] = 995,
  [1176] = 1168,
  [1177] = 1169,
  [1178] = 1168,
  [1179] = 1169,
  [1180] = 1168,
  [1181] = 1169,
  [1182] = 1182,
  [1183] = 1168,
  [1184] = 1169,
  [1185] = 1168,
  [1186] = 1169,
  [1187] = 1168,
  [1188] = 1169,
  [1189] = 1162,
  [1190] = 1190,
  [1191] = 1155,
  [1192] = 1192,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1161,
  [1196] = 1169,
  [1197] = 1197,
  [1198] = 1198,
  [1199] = 1199,
  [1200] = 1200,
  [1201] = 1138,
  [1202] = 1139,
  [1203] = 1137,
  [1204] = 1159,
  [1205] = 1162,
  [1206] = 1206,
  [1207] = 1161,
  [1208] = 1168,
  [1209] = 1137,
  [1210] = 1198,
  [1211] = 1199,
  [1212] = 1169,
  [1213] = 1200,
  [1214] = 1138,
  [1215] = 1139,
  [1216] = 1159,
  [1217] = 1162,
  [1218] = 1162,
  [1219] = 338,
  [1220] = 1220,
  [1221] = 1162,
  [1222] = 1162,
  [1223] = 1162,
  [1224] = 1162,
  [1225] = 1162,
  [1226] = 1162,
  [1227] = 1149,
  [1228] = 1150,
  [1229] = 1153,
  [1230] = 1160,
  [1231] = 1231,
  [1232] = 1232,
  [1233] = 1198,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1199,
  [1238] = 1168,
  [1239] = 1169,
  [1240] = 1240,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1244,
  [1245] = 1245,
  [1246] = 1246,
  [1247] = 1247,
  [1248] = 1168,
  [1249] = 1249,
  [1250] = 1244,
  [1251] = 1200,
  [1252] = 1252,
  [1253] = 1249,
  [1254] = 1254,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1256,
  [1258] = 1258,
  [1259] = 1259,
  [1260] = 1255,
  [1261] = 1261,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1266,
  [1267] = 1267,
  [1268] = 1263,
  [1269] = 1269,
  [1270] = 1270,
  [1271] = 1271,
  [1272] = 1272,
  [1273] = 1266,
  [1274] = 1274,
  [1275] = 1275,
  [1276] = 1255,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1279,
  [1280] = 1256,
  [1281] = 1281,
  [1282] = 1282,
  [1283] = 1283,
  [1284] = 1284,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1287,
  [1288] = 1288,
  [1289] = 1278,
  [1290] = 1290,
  [1291] = 1271,
  [1292] = 1292,
  [1293] = 1293,
  [1294] = 1294,
  [1295] = 1295,
  [1296] = 1277,
  [1297] = 1270,
  [1298] = 1275,
  [1299] = 1272,
  [1300] = 1266,
  [1301] = 1255,
  [1302] = 1256,
  [1303] = 1277,
  [1304] = 1278,
  [1305] = 1279,
  [1306] = 1306,
  [1307] = 1307,
  [1308] = 1308,
  [1309] = 1309,
  [1310] = 1256,
  [1311] = 1311,
  [1312] = 1271,
  [1313] = 1275,
  [1314] = 1314,
  [1315] = 1255,
  [1316] = 1271,
  [1317] = 1256,
  [1318] = 1318,
  [1319] = 1275,
  [1320] = 1255,
  [1321] = 1256,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1324,
  [1325] = 1271,
  [1326] = 1275,
  [1327] = 1255,
  [1328] = 1279,
  [1329] = 1256,
  [1330] = 1275,
  [1331] = 1331,
  [1332] = 1332,
  [1333] = 1272,
  [1334] = 1334,
  [1335] = 1271,
  [1336] = 1336,
  [1337] = 1275,
  [1338] = 1338,
  [1339] = 1339,
  [1340] = 1340,
  [1341] = 1255,
  [1342] = 1256,
  [1343] = 1343,
  [1344] = 15,
  [1345] = 619,
  [1346] = 1346,
  [1347] = 1347,
  [1348] = 1270,
  [1349] = 1349,
  [1350] = 1271,
  [1351] = 1275,
  [1352] = 1271,
  [1353] = 1275,
  [1354] = 1255,
  [1355] = 1255,
  [1356] = 1356,
  [1357] = 1256,
  [1358] = 1256,
  [1359] = 1275,
  [1360] = 1360,
  [1361] = 1361,
  [1362] = 1362,
  [1363] = 1363,
  [1364] = 1364,
  [1365] = 1365,
  [1366] = 1366,
  [1367] = 1271,
  [1368] = 1368,
  [1369] = 1275,
  [1370] = 1034,
  [1371] = 1255,
  [1372] = 1256,
  [1373] = 1373,
  [1374] = 1374,
  [1375] = 1375,
  [1376] = 1340,
  [1377] = 1377,
  [1378] = 1332,
  [1379] = 1368,
  [1380] = 1271,
  [1381] = 1381,
  [1382] = 1382,
  [1383] = 1368,
  [1384] = 1384,
  [1385] = 1385,
  [1386] = 1311,
  [1387] = 1387,
  [1388] = 1271,
  [1389] = 1311,
  [1390] = 1332,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(279);
      ADVANCE_MAP(
        '#', 280,
        '(', 601,
        ')', 602,
        '*', 518,
        '+', 308,
        ',', 603,
        '-', 309,
        '0', 291,
        '1', 292,
        ':', 600,
        '=', 305,
        '?', 598,
        '@', 452,
        'B', 617,
        'J', 620,
        'N', 623,
        'P', 605,
        'T', 608,
        '[', 310,
        '_', 290,
        'a', 379,
        'b', 437,
        'c', 311,
        'd', 349,
        'e', 312,
        'f', 313,
        'g', 318,
        'h', 319,
        'i', 370,
        'k', 360,
        'l', 317,
        'm', 316,
        'n', 366,
        'p', 314,
        'r', 321,
        's', 338,
        't', 315,
        'u', 420,
        'w', 384,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(498);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 280,
        '(', 601,
        ')', 602,
        '*', 518,
        '+', 20,
        ',', 603,
        '-', 21,
        '0', 294,
        '1', 293,
        ':', 600,
        '=', 305,
        '?', 598,
        '@', 209,
        'B', 617,
        'J', 620,
        'N', 623,
        'P', 605,
        'T', 608,
        '[', 23,
        'a', 114,
        'b', 192,
        'c', 24,
        'd', 81,
        'e', 25,
        'f', 26,
        'g', 33,
        'h', 34,
        'i', 103,
        'k', 89,
        'l', 32,
        'm', 31,
        'n', 97,
        'p', 27,
        'r', 36,
        's', 59,
        't', 28,
        'u', 174,
        'w', 122,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(625);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '0') ADVANCE(294);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == 'w') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 280,
        ':', 600,
        'b', 270,
        'f', 124,
        'i', 102,
        'l', 48,
        'p', 226,
        's', 101,
        'u', 237,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 280,
        'a', 748,
        'd', 744,
        'g', 688,
        'k', 700,
        'm', 689,
        'r', 702,
        's', 694,
        '\t', 678,
        ' ', 678,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 280,
        'a', 663,
        'd', 658,
        'g', 626,
        'k', 635,
        'm', 627,
        'r', 637,
        's', 631,
        '\t', 679,
        ' ', 679,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(601);
      if (lookahead == ')') ADVANCE(602);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(518);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'f') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'f') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'f') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'a', 113,
        'c', 117,
        'd', 90,
        'f', 155,
        'i', 191,
        'l', 46,
        'p', 225,
        's', 96,
        't', 40,
        'w', 134,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(625);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(534);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(633);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'k') ADVANCE(137);
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(569);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(578);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(594);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(522);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(563);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(543);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(535);
      END_STATE();
    case 143:
      if (lookahead == 'k') ADVANCE(587);
      END_STATE();
    case 144:
      if (lookahead == 'k') ADVANCE(589);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(571);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(585);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 265:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 266:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 267:
      if (lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 268:
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 269:
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(571);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 275:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(283);
      END_STATE();
    case 276:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 277:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 278:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__doc_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(291);
      if (lookahead == '1') ADVANCE(292);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(294);
      if (lookahead == '1') ADVANCE(293);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'x') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'k') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 't') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'f') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'h') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'k') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'k') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'l') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'l') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'o') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 's') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 't') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '0') ADVANCE(294);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == 'w') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 280,
        'a', 748,
        'd', 744,
        'g', 688,
        'k', 700,
        'm', 689,
        'r', 702,
        's', 694,
        '\t', 678,
        ' ', 678,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 280,
        'a', 663,
        'd', 658,
        'g', 626,
        'k', 635,
        'm', 627,
        'r', 637,
        's', 631,
        '\t', 679,
        ' ', 679,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead == 't') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'u') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(703);
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
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(717);
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
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 7, .external_lex_state = 4},
  [7] = {.lex_state = 7, .external_lex_state = 4},
  [8] = {.lex_state = 7, .external_lex_state = 4},
  [9] = {.lex_state = 8, .external_lex_state = 4},
  [10] = {.lex_state = 8, .external_lex_state = 4},
  [11] = {.lex_state = 8, .external_lex_state = 4},
  [12] = {.lex_state = 1, .external_lex_state = 5},
  [13] = {.lex_state = 1, .external_lex_state = 5},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 7, .external_lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 10, .external_lex_state = 6},
  [19] = {.lex_state = 10, .external_lex_state = 6},
  [20] = {.lex_state = 10, .external_lex_state = 6},
  [21] = {.lex_state = 10, .external_lex_state = 6},
  [22] = {.lex_state = 10, .external_lex_state = 6},
  [23] = {.lex_state = 10, .external_lex_state = 6},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
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
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 7},
  [43] = {.lex_state = 0, .external_lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 7},
  [46] = {.lex_state = 0, .external_lex_state = 7},
  [47] = {.lex_state = 4, .external_lex_state = 6},
  [48] = {.lex_state = 4, .external_lex_state = 6},
  [49] = {.lex_state = 2, .external_lex_state = 6},
  [50] = {.lex_state = 11, .external_lex_state = 6},
  [51] = {.lex_state = 0, .external_lex_state = 7},
  [52] = {.lex_state = 4, .external_lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 6},
  [57] = {.lex_state = 11, .external_lex_state = 6},
  [58] = {.lex_state = 2, .external_lex_state = 6},
  [59] = {.lex_state = 0, .external_lex_state = 7},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 11, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 3, .external_lex_state = 6},
  [67] = {.lex_state = 3, .external_lex_state = 6},
  [68] = {.lex_state = 0, .external_lex_state = 9},
  [69] = {.lex_state = 2, .external_lex_state = 6},
  [70] = {.lex_state = 2, .external_lex_state = 6},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 0, .external_lex_state = 10},
  [73] = {.lex_state = 0, .external_lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 9},
  [76] = {.lex_state = 3, .external_lex_state = 6},
  [77] = {.lex_state = 3, .external_lex_state = 6},
  [78] = {.lex_state = 3, .external_lex_state = 6},
  [79] = {.lex_state = 2, .external_lex_state = 6},
  [80] = {.lex_state = 0, .external_lex_state = 9},
  [81] = {.lex_state = 0, .external_lex_state = 7},
  [82] = {.lex_state = 3, .external_lex_state = 6},
  [83] = {.lex_state = 0, .external_lex_state = 10},
  [84] = {.lex_state = 0, .external_lex_state = 10},
  [85] = {.lex_state = 0, .external_lex_state = 11},
  [86] = {.lex_state = 0, .external_lex_state = 12},
  [87] = {.lex_state = 0, .external_lex_state = 13},
  [88] = {.lex_state = 13, .external_lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 11},
  [90] = {.lex_state = 0, .external_lex_state = 14},
  [91] = {.lex_state = 0, .external_lex_state = 12},
  [92] = {.lex_state = 0, .external_lex_state = 15},
  [93] = {.lex_state = 0, .external_lex_state = 12},
  [94] = {.lex_state = 0, .external_lex_state = 12},
  [95] = {.lex_state = 0, .external_lex_state = 16},
  [96] = {.lex_state = 0, .external_lex_state = 14},
  [97] = {.lex_state = 0, .external_lex_state = 12},
  [98] = {.lex_state = 0, .external_lex_state = 17},
  [99] = {.lex_state = 0, .external_lex_state = 17},
  [100] = {.lex_state = 0, .external_lex_state = 17},
  [101] = {.lex_state = 0, .external_lex_state = 17},
  [102] = {.lex_state = 0, .external_lex_state = 18},
  [103] = {.lex_state = 0, .external_lex_state = 15},
  [104] = {.lex_state = 0, .external_lex_state = 19},
  [105] = {.lex_state = 0, .external_lex_state = 18},
  [106] = {.lex_state = 0, .external_lex_state = 20},
  [107] = {.lex_state = 0, .external_lex_state = 19},
  [108] = {.lex_state = 0, .external_lex_state = 18},
  [109] = {.lex_state = 0, .external_lex_state = 20},
  [110] = {.lex_state = 0, .external_lex_state = 19},
  [111] = {.lex_state = 0, .external_lex_state = 20},
  [112] = {.lex_state = 0, .external_lex_state = 13},
  [113] = {.lex_state = 0, .external_lex_state = 12},
  [114] = {.lex_state = 0, .external_lex_state = 8},
  [115] = {.lex_state = 0, .external_lex_state = 15},
  [116] = {.lex_state = 0, .external_lex_state = 16},
  [117] = {.lex_state = 0, .external_lex_state = 8},
  [118] = {.lex_state = 0, .external_lex_state = 13},
  [119] = {.lex_state = 0, .external_lex_state = 21},
  [120] = {.lex_state = 0, .external_lex_state = 12},
  [121] = {.lex_state = 13, .external_lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 15},
  [123] = {.lex_state = 0, .external_lex_state = 13},
  [124] = {.lex_state = 0, .external_lex_state = 11},
  [125] = {.lex_state = 13, .external_lex_state = 6},
  [126] = {.lex_state = 0, .external_lex_state = 17},
  [127] = {.lex_state = 0, .external_lex_state = 17},
  [128] = {.lex_state = 0, .external_lex_state = 17},
  [129] = {.lex_state = 0, .external_lex_state = 17},
  [130] = {.lex_state = 0, .external_lex_state = 21},
  [131] = {.lex_state = 13, .external_lex_state = 6},
  [132] = {.lex_state = 0, .external_lex_state = 15},
  [133] = {.lex_state = 0, .external_lex_state = 14},
  [134] = {.lex_state = 0, .external_lex_state = 12},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 12},
  [137] = {.lex_state = 0, .external_lex_state = 11},
  [138] = {.lex_state = 0, .external_lex_state = 11},
  [139] = {.lex_state = 0, .external_lex_state = 17},
  [140] = {.lex_state = 0, .external_lex_state = 17},
  [141] = {.lex_state = 0, .external_lex_state = 17},
  [142] = {.lex_state = 0, .external_lex_state = 17},
  [143] = {.lex_state = 0, .external_lex_state = 21},
  [144] = {.lex_state = 0, .external_lex_state = 21},
  [145] = {.lex_state = 0, .external_lex_state = 21},
  [146] = {.lex_state = 0, .external_lex_state = 21},
  [147] = {.lex_state = 0, .external_lex_state = 21},
  [148] = {.lex_state = 0, .external_lex_state = 21},
  [149] = {.lex_state = 0, .external_lex_state = 21},
  [150] = {.lex_state = 0, .external_lex_state = 21},
  [151] = {.lex_state = 0, .external_lex_state = 21},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 16},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 12},
  [158] = {.lex_state = 0, .external_lex_state = 11},
  [159] = {.lex_state = 13, .external_lex_state = 6},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 12, .external_lex_state = 6},
  [162] = {.lex_state = 0, .external_lex_state = 22},
  [163] = {.lex_state = 13, .external_lex_state = 6},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 22},
  [169] = {.lex_state = 13, .external_lex_state = 6},
  [170] = {.lex_state = 13, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 16},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0, .external_lex_state = 20},
  [174] = {.lex_state = 0, .external_lex_state = 22},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 0, .external_lex_state = 20},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 9, .external_lex_state = 6},
  [179] = {.lex_state = 0, .external_lex_state = 14},
  [180] = {.lex_state = 12, .external_lex_state = 6},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 0, .external_lex_state = 22},
  [183] = {.lex_state = 0, .external_lex_state = 22},
  [184] = {.lex_state = 0, .external_lex_state = 22},
  [185] = {.lex_state = 0, .external_lex_state = 22},
  [186] = {.lex_state = 13, .external_lex_state = 6},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 13, .external_lex_state = 6},
  [190] = {.lex_state = 0, .external_lex_state = 22},
  [191] = {.lex_state = 13, .external_lex_state = 6},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 0, .external_lex_state = 8},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 13, .external_lex_state = 6},
  [198] = {.lex_state = 13, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 8},
  [200] = {.lex_state = 13, .external_lex_state = 6},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 14},
  [206] = {.lex_state = 13, .external_lex_state = 6},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 22},
  [209] = {.lex_state = 0, .external_lex_state = 22},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 12, .external_lex_state = 6},
  [212] = {.lex_state = 9, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 22},
  [214] = {.lex_state = 9, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 22},
  [216] = {.lex_state = 0, .external_lex_state = 16},
  [217] = {.lex_state = 0, .external_lex_state = 22},
  [218] = {.lex_state = 0, .external_lex_state = 22},
  [219] = {.lex_state = 0, .external_lex_state = 22},
  [220] = {.lex_state = 0, .external_lex_state = 22},
  [221] = {.lex_state = 13, .external_lex_state = 6},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0, .external_lex_state = 22},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 14, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 23},
  [228] = {.lex_state = 0, .external_lex_state = 23},
  [229] = {.lex_state = 0, .external_lex_state = 10},
  [230] = {.lex_state = 0, .external_lex_state = 10},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 0, .external_lex_state = 16},
  [233] = {.lex_state = 0, .external_lex_state = 22},
  [234] = {.lex_state = 0, .external_lex_state = 10},
  [235] = {.lex_state = 0, .external_lex_state = 10},
  [236] = {.lex_state = 0, .external_lex_state = 10},
  [237] = {.lex_state = 0, .external_lex_state = 10},
  [238] = {.lex_state = 0, .external_lex_state = 10},
  [239] = {.lex_state = 0, .external_lex_state = 10},
  [240] = {.lex_state = 0, .external_lex_state = 10},
  [241] = {.lex_state = 0, .external_lex_state = 10},
  [242] = {.lex_state = 0, .external_lex_state = 10},
  [243] = {.lex_state = 0, .external_lex_state = 10},
  [244] = {.lex_state = 0, .external_lex_state = 10},
  [245] = {.lex_state = 0, .external_lex_state = 24},
  [246] = {.lex_state = 0, .external_lex_state = 23},
  [247] = {.lex_state = 0, .external_lex_state = 23},
  [248] = {.lex_state = 0, .external_lex_state = 10},
  [249] = {.lex_state = 16},
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
  [269] = {.lex_state = 0, .external_lex_state = 10},
  [270] = {.lex_state = 0, .external_lex_state = 10},
  [271] = {.lex_state = 0, .external_lex_state = 10},
  [272] = {.lex_state = 0, .external_lex_state = 10},
  [273] = {.lex_state = 5, .external_lex_state = 6},
  [274] = {.lex_state = 0, .external_lex_state = 22},
  [275] = {.lex_state = 0, .external_lex_state = 14},
  [276] = {.lex_state = 0, .external_lex_state = 10},
  [277] = {.lex_state = 0, .external_lex_state = 10},
  [278] = {.lex_state = 0, .external_lex_state = 10},
  [279] = {.lex_state = 0, .external_lex_state = 10},
  [280] = {.lex_state = 0, .external_lex_state = 10},
  [281] = {.lex_state = 0, .external_lex_state = 10},
  [282] = {.lex_state = 0, .external_lex_state = 10},
  [283] = {.lex_state = 0, .external_lex_state = 10},
  [284] = {.lex_state = 0, .external_lex_state = 10},
  [285] = {.lex_state = 0, .external_lex_state = 10},
  [286] = {.lex_state = 0, .external_lex_state = 10},
  [287] = {.lex_state = 0, .external_lex_state = 10},
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
  [304] = {.lex_state = 0, .external_lex_state = 10},
  [305] = {.lex_state = 0, .external_lex_state = 10},
  [306] = {.lex_state = 0, .external_lex_state = 10},
  [307] = {.lex_state = 0, .external_lex_state = 10},
  [308] = {.lex_state = 0, .external_lex_state = 10},
  [309] = {.lex_state = 0, .external_lex_state = 10},
  [310] = {.lex_state = 0, .external_lex_state = 10},
  [311] = {.lex_state = 0, .external_lex_state = 10},
  [312] = {.lex_state = 0, .external_lex_state = 10},
  [313] = {.lex_state = 0, .external_lex_state = 10},
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
  [329] = {.lex_state = 0, .external_lex_state = 10},
  [330] = {.lex_state = 0, .external_lex_state = 10},
  [331] = {.lex_state = 0, .external_lex_state = 7},
  [332] = {.lex_state = 0, .external_lex_state = 7},
  [333] = {.lex_state = 0, .external_lex_state = 7},
  [334] = {.lex_state = 0, .external_lex_state = 7},
  [335] = {.lex_state = 0, .external_lex_state = 7},
  [336] = {.lex_state = 0, .external_lex_state = 7},
  [337] = {.lex_state = 0, .external_lex_state = 15},
  [338] = {.lex_state = 0, .external_lex_state = 15},
  [339] = {.lex_state = 0, .external_lex_state = 24},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 0, .external_lex_state = 9},
  [345] = {.lex_state = 0, .external_lex_state = 9},
  [346] = {.lex_state = 0, .external_lex_state = 9},
  [347] = {.lex_state = 0, .external_lex_state = 10},
  [348] = {.lex_state = 0, .external_lex_state = 10},
  [349] = {.lex_state = 0, .external_lex_state = 10},
  [350] = {.lex_state = 0, .external_lex_state = 10},
  [351] = {.lex_state = 0, .external_lex_state = 10},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 9},
  [354] = {.lex_state = 0, .external_lex_state = 9},
  [355] = {.lex_state = 0, .external_lex_state = 7},
  [356] = {.lex_state = 0, .external_lex_state = 7},
  [357] = {.lex_state = 0, .external_lex_state = 10},
  [358] = {.lex_state = 0, .external_lex_state = 10},
  [359] = {.lex_state = 0, .external_lex_state = 10},
  [360] = {.lex_state = 0, .external_lex_state = 10},
  [361] = {.lex_state = 0, .external_lex_state = 10},
  [362] = {.lex_state = 0, .external_lex_state = 10},
  [363] = {.lex_state = 0, .external_lex_state = 10},
  [364] = {.lex_state = 0, .external_lex_state = 10},
  [365] = {.lex_state = 14, .external_lex_state = 6},
  [366] = {.lex_state = 0, .external_lex_state = 25},
  [367] = {.lex_state = 0, .external_lex_state = 25},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 0, .external_lex_state = 9},
  [370] = {.lex_state = 0, .external_lex_state = 9},
  [371] = {.lex_state = 0, .external_lex_state = 25},
  [372] = {.lex_state = 0, .external_lex_state = 23},
  [373] = {.lex_state = 0, .external_lex_state = 23},
  [374] = {.lex_state = 13, .external_lex_state = 6},
  [375] = {.lex_state = 0, .external_lex_state = 24},
  [376] = {.lex_state = 0, .external_lex_state = 23},
  [377] = {.lex_state = 0, .external_lex_state = 22},
  [378] = {.lex_state = 0, .external_lex_state = 22},
  [379] = {.lex_state = 16},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 0, .external_lex_state = 22},
  [382] = {.lex_state = 0, .external_lex_state = 22},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 23},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 0, .external_lex_state = 24},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 0, .external_lex_state = 22},
  [391] = {.lex_state = 13, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 22},
  [393] = {.lex_state = 5, .external_lex_state = 6},
  [394] = {.lex_state = 16},
  [395] = {.lex_state = 5, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 22},
  [397] = {.lex_state = 0, .external_lex_state = 22},
  [398] = {.lex_state = 0, .external_lex_state = 24},
  [399] = {.lex_state = 0, .external_lex_state = 23},
  [400] = {.lex_state = 0, .external_lex_state = 23},
  [401] = {.lex_state = 16},
  [402] = {.lex_state = 5, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 25},
  [404] = {.lex_state = 0, .external_lex_state = 23},
  [405] = {.lex_state = 0, .external_lex_state = 23},
  [406] = {.lex_state = 13, .external_lex_state = 6},
  [407] = {.lex_state = 0, .external_lex_state = 23},
  [408] = {.lex_state = 0, .external_lex_state = 23},
  [409] = {.lex_state = 0, .external_lex_state = 23},
  [410] = {.lex_state = 0, .external_lex_state = 15},
  [411] = {.lex_state = 0, .external_lex_state = 23},
  [412] = {.lex_state = 0, .external_lex_state = 23},
  [413] = {.lex_state = 0, .external_lex_state = 23},
  [414] = {.lex_state = 0, .external_lex_state = 23},
  [415] = {.lex_state = 0, .external_lex_state = 23},
  [416] = {.lex_state = 0, .external_lex_state = 23},
  [417] = {.lex_state = 0, .external_lex_state = 23},
  [418] = {.lex_state = 0, .external_lex_state = 23},
  [419] = {.lex_state = 0, .external_lex_state = 23},
  [420] = {.lex_state = 0, .external_lex_state = 22},
  [421] = {.lex_state = 0, .external_lex_state = 23},
  [422] = {.lex_state = 0, .external_lex_state = 23},
  [423] = {.lex_state = 0, .external_lex_state = 23},
  [424] = {.lex_state = 0, .external_lex_state = 23},
  [425] = {.lex_state = 0, .external_lex_state = 23},
  [426] = {.lex_state = 0, .external_lex_state = 23},
  [427] = {.lex_state = 0, .external_lex_state = 23},
  [428] = {.lex_state = 0, .external_lex_state = 23},
  [429] = {.lex_state = 0, .external_lex_state = 23},
  [430] = {.lex_state = 0, .external_lex_state = 22},
  [431] = {.lex_state = 0, .external_lex_state = 23},
  [432] = {.lex_state = 0, .external_lex_state = 23},
  [433] = {.lex_state = 0, .external_lex_state = 23},
  [434] = {.lex_state = 0, .external_lex_state = 23},
  [435] = {.lex_state = 0, .external_lex_state = 23},
  [436] = {.lex_state = 0, .external_lex_state = 23},
  [437] = {.lex_state = 0, .external_lex_state = 23},
  [438] = {.lex_state = 0, .external_lex_state = 25},
  [439] = {.lex_state = 0, .external_lex_state = 25},
  [440] = {.lex_state = 0, .external_lex_state = 23},
  [441] = {.lex_state = 0, .external_lex_state = 23},
  [442] = {.lex_state = 0, .external_lex_state = 23},
  [443] = {.lex_state = 0, .external_lex_state = 23},
  [444] = {.lex_state = 0, .external_lex_state = 23},
  [445] = {.lex_state = 0, .external_lex_state = 23},
  [446] = {.lex_state = 0, .external_lex_state = 7},
  [447] = {.lex_state = 13, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 23},
  [449] = {.lex_state = 0, .external_lex_state = 22},
  [450] = {.lex_state = 0, .external_lex_state = 23},
  [451] = {.lex_state = 16},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 23},
  [454] = {.lex_state = 0, .external_lex_state = 23},
  [455] = {.lex_state = 0, .external_lex_state = 23},
  [456] = {.lex_state = 0, .external_lex_state = 23},
  [457] = {.lex_state = 16},
  [458] = {.lex_state = 0, .external_lex_state = 23},
  [459] = {.lex_state = 16},
  [460] = {.lex_state = 0, .external_lex_state = 23},
  [461] = {.lex_state = 16},
  [462] = {.lex_state = 0, .external_lex_state = 23},
  [463] = {.lex_state = 13, .external_lex_state = 6},
  [464] = {.lex_state = 5, .external_lex_state = 6},
  [465] = {.lex_state = 5, .external_lex_state = 6},
  [466] = {.lex_state = 16},
  [467] = {.lex_state = 5, .external_lex_state = 6},
  [468] = {.lex_state = 0, .external_lex_state = 23},
  [469] = {.lex_state = 0, .external_lex_state = 23},
  [470] = {.lex_state = 0, .external_lex_state = 23},
  [471] = {.lex_state = 0, .external_lex_state = 23},
  [472] = {.lex_state = 0, .external_lex_state = 23},
  [473] = {.lex_state = 16},
  [474] = {.lex_state = 5, .external_lex_state = 6},
  [475] = {.lex_state = 0, .external_lex_state = 23},
  [476] = {.lex_state = 0, .external_lex_state = 23},
  [477] = {.lex_state = 0, .external_lex_state = 23},
  [478] = {.lex_state = 13, .external_lex_state = 6},
  [479] = {.lex_state = 0, .external_lex_state = 23},
  [480] = {.lex_state = 0, .external_lex_state = 23},
  [481] = {.lex_state = 0, .external_lex_state = 23},
  [482] = {.lex_state = 0, .external_lex_state = 23},
  [483] = {.lex_state = 0, .external_lex_state = 23},
  [484] = {.lex_state = 0, .external_lex_state = 23},
  [485] = {.lex_state = 0, .external_lex_state = 23},
  [486] = {.lex_state = 0, .external_lex_state = 23},
  [487] = {.lex_state = 0, .external_lex_state = 23},
  [488] = {.lex_state = 0, .external_lex_state = 23},
  [489] = {.lex_state = 0, .external_lex_state = 23},
  [490] = {.lex_state = 0, .external_lex_state = 23},
  [491] = {.lex_state = 0, .external_lex_state = 23},
  [492] = {.lex_state = 1, .external_lex_state = 6},
  [493] = {.lex_state = 0, .external_lex_state = 23},
  [494] = {.lex_state = 0, .external_lex_state = 23},
  [495] = {.lex_state = 0, .external_lex_state = 23},
  [496] = {.lex_state = 0, .external_lex_state = 23},
  [497] = {.lex_state = 0, .external_lex_state = 23},
  [498] = {.lex_state = 0, .external_lex_state = 23},
  [499] = {.lex_state = 0, .external_lex_state = 23},
  [500] = {.lex_state = 0, .external_lex_state = 23},
  [501] = {.lex_state = 0, .external_lex_state = 23},
  [502] = {.lex_state = 1, .external_lex_state = 6},
  [503] = {.lex_state = 0, .external_lex_state = 23},
  [504] = {.lex_state = 0, .external_lex_state = 23},
  [505] = {.lex_state = 0, .external_lex_state = 23},
  [506] = {.lex_state = 0, .external_lex_state = 23},
  [507] = {.lex_state = 0, .external_lex_state = 23},
  [508] = {.lex_state = 0, .external_lex_state = 23},
  [509] = {.lex_state = 1, .external_lex_state = 6},
  [510] = {.lex_state = 0, .external_lex_state = 25},
  [511] = {.lex_state = 0, .external_lex_state = 25},
  [512] = {.lex_state = 16},
  [513] = {.lex_state = 0, .external_lex_state = 25},
  [514] = {.lex_state = 0, .external_lex_state = 25},
  [515] = {.lex_state = 5, .external_lex_state = 6},
  [516] = {.lex_state = 0, .external_lex_state = 22},
  [517] = {.lex_state = 0, .external_lex_state = 25},
  [518] = {.lex_state = 0, .external_lex_state = 14},
  [519] = {.lex_state = 0, .external_lex_state = 14},
  [520] = {.lex_state = 0, .external_lex_state = 25},
  [521] = {.lex_state = 0, .external_lex_state = 20},
  [522] = {.lex_state = 0, .external_lex_state = 25},
  [523] = {.lex_state = 0, .external_lex_state = 20},
  [524] = {.lex_state = 14, .external_lex_state = 6},
  [525] = {.lex_state = 16},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 0, .external_lex_state = 20},
  [528] = {.lex_state = 0, .external_lex_state = 16},
  [529] = {.lex_state = 0, .external_lex_state = 22},
  [530] = {.lex_state = 0, .external_lex_state = 22},
  [531] = {.lex_state = 0, .external_lex_state = 22},
  [532] = {.lex_state = 0, .external_lex_state = 22},
  [533] = {.lex_state = 0, .external_lex_state = 22},
  [534] = {.lex_state = 0, .external_lex_state = 22},
  [535] = {.lex_state = 0, .external_lex_state = 23},
  [536] = {.lex_state = 0, .external_lex_state = 16},
  [537] = {.lex_state = 0, .external_lex_state = 22},
  [538] = {.lex_state = 0, .external_lex_state = 22},
  [539] = {.lex_state = 0, .external_lex_state = 22},
  [540] = {.lex_state = 0, .external_lex_state = 22},
  [541] = {.lex_state = 0, .external_lex_state = 22},
  [542] = {.lex_state = 0, .external_lex_state = 22},
  [543] = {.lex_state = 0, .external_lex_state = 15},
  [544] = {.lex_state = 0, .external_lex_state = 22},
  [545] = {.lex_state = 0, .external_lex_state = 22},
  [546] = {.lex_state = 0, .external_lex_state = 22},
  [547] = {.lex_state = 0, .external_lex_state = 22},
  [548] = {.lex_state = 0, .external_lex_state = 22},
  [549] = {.lex_state = 0, .external_lex_state = 22},
  [550] = {.lex_state = 0, .external_lex_state = 22},
  [551] = {.lex_state = 0, .external_lex_state = 22},
  [552] = {.lex_state = 0, .external_lex_state = 15},
  [553] = {.lex_state = 0, .external_lex_state = 15},
  [554] = {.lex_state = 0, .external_lex_state = 15},
  [555] = {.lex_state = 0, .external_lex_state = 15},
  [556] = {.lex_state = 0, .external_lex_state = 23},
  [557] = {.lex_state = 0, .external_lex_state = 19},
  [558] = {.lex_state = 0, .external_lex_state = 12},
  [559] = {.lex_state = 0, .external_lex_state = 12},
  [560] = {.lex_state = 1, .external_lex_state = 6},
  [561] = {.lex_state = 1, .external_lex_state = 6},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 2},
  [565] = {.lex_state = 0, .external_lex_state = 12},
  [566] = {.lex_state = 0, .external_lex_state = 12},
  [567] = {.lex_state = 0, .external_lex_state = 12},
  [568] = {.lex_state = 13, .external_lex_state = 6},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 12},
  [571] = {.lex_state = 0, .external_lex_state = 12},
  [572] = {.lex_state = 0, .external_lex_state = 12},
  [573] = {.lex_state = 5, .external_lex_state = 6},
  [574] = {.lex_state = 0, .external_lex_state = 12},
  [575] = {.lex_state = 0, .external_lex_state = 12},
  [576] = {.lex_state = 0, .external_lex_state = 12},
  [577] = {.lex_state = 0, .external_lex_state = 12},
  [578] = {.lex_state = 0, .external_lex_state = 12},
  [579] = {.lex_state = 6, .external_lex_state = 6},
  [580] = {.lex_state = 0, .external_lex_state = 2},
  [581] = {.lex_state = 0, .external_lex_state = 12},
  [582] = {.lex_state = 0, .external_lex_state = 12},
  [583] = {.lex_state = 15, .external_lex_state = 6},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 12},
  [586] = {.lex_state = 0, .external_lex_state = 12},
  [587] = {.lex_state = 0, .external_lex_state = 12},
  [588] = {.lex_state = 0, .external_lex_state = 12},
  [589] = {.lex_state = 0, .external_lex_state = 12},
  [590] = {.lex_state = 0, .external_lex_state = 12},
  [591] = {.lex_state = 0, .external_lex_state = 12},
  [592] = {.lex_state = 0, .external_lex_state = 12},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 0, .external_lex_state = 12},
  [596] = {.lex_state = 0, .external_lex_state = 12},
  [597] = {.lex_state = 0, .external_lex_state = 2},
  [598] = {.lex_state = 0, .external_lex_state = 2},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 12},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 12},
  [605] = {.lex_state = 0, .external_lex_state = 2},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 12},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 1, .external_lex_state = 6},
  [610] = {.lex_state = 1, .external_lex_state = 6},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 13, .external_lex_state = 6},
  [613] = {.lex_state = 0, .external_lex_state = 12},
  [614] = {.lex_state = 0, .external_lex_state = 12},
  [615] = {.lex_state = 0, .external_lex_state = 12},
  [616] = {.lex_state = 0, .external_lex_state = 12},
  [617] = {.lex_state = 0, .external_lex_state = 12},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 0, .external_lex_state = 26},
  [621] = {.lex_state = 0, .external_lex_state = 12},
  [622] = {.lex_state = 1},
  [623] = {.lex_state = 0, .external_lex_state = 12},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 12},
  [626] = {.lex_state = 0, .external_lex_state = 2},
  [627] = {.lex_state = 0, .external_lex_state = 12},
  [628] = {.lex_state = 0, .external_lex_state = 12},
  [629] = {.lex_state = 0, .external_lex_state = 12},
  [630] = {.lex_state = 0, .external_lex_state = 12},
  [631] = {.lex_state = 0, .external_lex_state = 12},
  [632] = {.lex_state = 0, .external_lex_state = 12},
  [633] = {.lex_state = 0, .external_lex_state = 12},
  [634] = {.lex_state = 0, .external_lex_state = 2},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 6},
  [637] = {.lex_state = 0, .external_lex_state = 12},
  [638] = {.lex_state = 0, .external_lex_state = 6},
  [639] = {.lex_state = 1, .external_lex_state = 6},
  [640] = {.lex_state = 1, .external_lex_state = 6},
  [641] = {.lex_state = 0, .external_lex_state = 12},
  [642] = {.lex_state = 0, .external_lex_state = 12},
  [643] = {.lex_state = 13, .external_lex_state = 6},
  [644] = {.lex_state = 0, .external_lex_state = 12},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 12},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 12},
  [649] = {.lex_state = 0, .external_lex_state = 26},
  [650] = {.lex_state = 0, .external_lex_state = 11},
  [651] = {.lex_state = 0, .external_lex_state = 19},
  [652] = {.lex_state = 0, .external_lex_state = 27},
  [653] = {.lex_state = 0, .external_lex_state = 19},
  [654] = {.lex_state = 0, .external_lex_state = 19},
  [655] = {.lex_state = 0, .external_lex_state = 12},
  [656] = {.lex_state = 0, .external_lex_state = 19},
  [657] = {.lex_state = 0, .external_lex_state = 19},
  [658] = {.lex_state = 0, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 12},
  [660] = {.lex_state = 0, .external_lex_state = 12},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 12},
  [665] = {.lex_state = 0, .external_lex_state = 12},
  [666] = {.lex_state = 0, .external_lex_state = 12},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 11},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 12},
  [672] = {.lex_state = 0, .external_lex_state = 12},
  [673] = {.lex_state = 0, .external_lex_state = 12},
  [674] = {.lex_state = 0, .external_lex_state = 12},
  [675] = {.lex_state = 0, .external_lex_state = 12},
  [676] = {.lex_state = 0, .external_lex_state = 12},
  [677] = {.lex_state = 0, .external_lex_state = 12},
  [678] = {.lex_state = 0, .external_lex_state = 12},
  [679] = {.lex_state = 0, .external_lex_state = 18},
  [680] = {.lex_state = 0, .external_lex_state = 18},
  [681] = {.lex_state = 0, .external_lex_state = 18},
  [682] = {.lex_state = 0, .external_lex_state = 18},
  [683] = {.lex_state = 0, .external_lex_state = 18},
  [684] = {.lex_state = 0, .external_lex_state = 18},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 0, .external_lex_state = 18},
  [688] = {.lex_state = 0, .external_lex_state = 18},
  [689] = {.lex_state = 0, .external_lex_state = 19},
  [690] = {.lex_state = 0, .external_lex_state = 19},
  [691] = {.lex_state = 0, .external_lex_state = 19},
  [692] = {.lex_state = 0, .external_lex_state = 19},
  [693] = {.lex_state = 0, .external_lex_state = 19},
  [694] = {.lex_state = 0, .external_lex_state = 19},
  [695] = {.lex_state = 0, .external_lex_state = 12},
  [696] = {.lex_state = 0, .external_lex_state = 12},
  [697] = {.lex_state = 0, .external_lex_state = 11},
  [698] = {.lex_state = 0, .external_lex_state = 11},
  [699] = {.lex_state = 0, .external_lex_state = 12},
  [700] = {.lex_state = 70},
  [701] = {.lex_state = 70},
  [702] = {.lex_state = 0, .external_lex_state = 12},
  [703] = {.lex_state = 0, .external_lex_state = 19},
  [704] = {.lex_state = 0, .external_lex_state = 19},
  [705] = {.lex_state = 0, .external_lex_state = 6},
  [706] = {.lex_state = 17},
  [707] = {.lex_state = 0, .external_lex_state = 2},
  [708] = {.lex_state = 0, .external_lex_state = 28},
  [709] = {.lex_state = 0, .external_lex_state = 12},
  [710] = {.lex_state = 0, .external_lex_state = 2},
  [711] = {.lex_state = 0, .external_lex_state = 2},
  [712] = {.lex_state = 0, .external_lex_state = 2},
  [713] = {.lex_state = 0, .external_lex_state = 2},
  [714] = {.lex_state = 0, .external_lex_state = 11},
  [715] = {.lex_state = 0, .external_lex_state = 12},
  [716] = {.lex_state = 0, .external_lex_state = 12},
  [717] = {.lex_state = 0, .external_lex_state = 2},
  [718] = {.lex_state = 0, .external_lex_state = 2},
  [719] = {.lex_state = 0, .external_lex_state = 12},
  [720] = {.lex_state = 13, .external_lex_state = 6},
  [721] = {.lex_state = 0, .external_lex_state = 12},
  [722] = {.lex_state = 0, .external_lex_state = 2},
  [723] = {.lex_state = 0, .external_lex_state = 12},
  [724] = {.lex_state = 0, .external_lex_state = 2},
  [725] = {.lex_state = 0, .external_lex_state = 2},
  [726] = {.lex_state = 0, .external_lex_state = 12},
  [727] = {.lex_state = 0, .external_lex_state = 2},
  [728] = {.lex_state = 0, .external_lex_state = 12},
  [729] = {.lex_state = 0, .external_lex_state = 12},
  [730] = {.lex_state = 0, .external_lex_state = 26},
  [731] = {.lex_state = 5, .external_lex_state = 6},
  [732] = {.lex_state = 0, .external_lex_state = 12},
  [733] = {.lex_state = 0, .external_lex_state = 12},
  [734] = {.lex_state = 0, .external_lex_state = 12},
  [735] = {.lex_state = 0, .external_lex_state = 2},
  [736] = {.lex_state = 0, .external_lex_state = 12},
  [737] = {.lex_state = 1, .external_lex_state = 6},
  [738] = {.lex_state = 0, .external_lex_state = 12},
  [739] = {.lex_state = 0, .external_lex_state = 12},
  [740] = {.lex_state = 0, .external_lex_state = 12},
  [741] = {.lex_state = 0, .external_lex_state = 2},
  [742] = {.lex_state = 13, .external_lex_state = 6},
  [743] = {.lex_state = 0, .external_lex_state = 12},
  [744] = {.lex_state = 0, .external_lex_state = 12},
  [745] = {.lex_state = 0, .external_lex_state = 26},
  [746] = {.lex_state = 0, .external_lex_state = 12},
  [747] = {.lex_state = 0, .external_lex_state = 12},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 0, .external_lex_state = 12},
  [750] = {.lex_state = 0, .external_lex_state = 12},
  [751] = {.lex_state = 0, .external_lex_state = 2},
  [752] = {.lex_state = 1},
  [753] = {.lex_state = 0, .external_lex_state = 12},
  [754] = {.lex_state = 13, .external_lex_state = 6},
  [755] = {.lex_state = 0, .external_lex_state = 12},
  [756] = {.lex_state = 0, .external_lex_state = 12},
  [757] = {.lex_state = 0, .external_lex_state = 12},
  [758] = {.lex_state = 0, .external_lex_state = 2},
  [759] = {.lex_state = 0, .external_lex_state = 12},
  [760] = {.lex_state = 0, .external_lex_state = 12},
  [761] = {.lex_state = 0, .external_lex_state = 2},
  [762] = {.lex_state = 0, .external_lex_state = 12},
  [763] = {.lex_state = 0, .external_lex_state = 12},
  [764] = {.lex_state = 0, .external_lex_state = 12},
  [765] = {.lex_state = 1},
  [766] = {.lex_state = 0, .external_lex_state = 6},
  [767] = {.lex_state = 0, .external_lex_state = 2},
  [768] = {.lex_state = 0, .external_lex_state = 12},
  [769] = {.lex_state = 6, .external_lex_state = 6},
  [770] = {.lex_state = 0, .external_lex_state = 12},
  [771] = {.lex_state = 13, .external_lex_state = 6},
  [772] = {.lex_state = 0, .external_lex_state = 19},
  [773] = {.lex_state = 0, .external_lex_state = 19},
  [774] = {.lex_state = 0, .external_lex_state = 12},
  [775] = {.lex_state = 0, .external_lex_state = 12},
  [776] = {.lex_state = 0, .external_lex_state = 12},
  [777] = {.lex_state = 0, .external_lex_state = 6},
  [778] = {.lex_state = 6, .external_lex_state = 6},
  [779] = {.lex_state = 0, .external_lex_state = 19},
  [780] = {.lex_state = 0, .external_lex_state = 19},
  [781] = {.lex_state = 0, .external_lex_state = 19},
  [782] = {.lex_state = 0, .external_lex_state = 19},
  [783] = {.lex_state = 0, .external_lex_state = 19},
  [784] = {.lex_state = 0, .external_lex_state = 19},
  [785] = {.lex_state = 0, .external_lex_state = 28},
  [786] = {.lex_state = 0, .external_lex_state = 19},
  [787] = {.lex_state = 0, .external_lex_state = 19},
  [788] = {.lex_state = 0, .external_lex_state = 19},
  [789] = {.lex_state = 0, .external_lex_state = 19},
  [790] = {.lex_state = 0, .external_lex_state = 19},
  [791] = {.lex_state = 0, .external_lex_state = 12},
  [792] = {.lex_state = 13, .external_lex_state = 6},
  [793] = {.lex_state = 1, .external_lex_state = 6},
  [794] = {.lex_state = 0, .external_lex_state = 19},
  [795] = {.lex_state = 1},
  [796] = {.lex_state = 0, .external_lex_state = 19},
  [797] = {.lex_state = 13, .external_lex_state = 6},
  [798] = {.lex_state = 0, .external_lex_state = 19},
  [799] = {.lex_state = 0, .external_lex_state = 19},
  [800] = {.lex_state = 0, .external_lex_state = 19},
  [801] = {.lex_state = 0, .external_lex_state = 19},
  [802] = {.lex_state = 0, .external_lex_state = 19},
  [803] = {.lex_state = 0, .external_lex_state = 19},
  [804] = {.lex_state = 0, .external_lex_state = 19},
  [805] = {.lex_state = 0, .external_lex_state = 19},
  [806] = {.lex_state = 0, .external_lex_state = 19},
  [807] = {.lex_state = 0, .external_lex_state = 19},
  [808] = {.lex_state = 0, .external_lex_state = 19},
  [809] = {.lex_state = 0, .external_lex_state = 19},
  [810] = {.lex_state = 0, .external_lex_state = 19},
  [811] = {.lex_state = 0, .external_lex_state = 19},
  [812] = {.lex_state = 0, .external_lex_state = 19},
  [813] = {.lex_state = 0, .external_lex_state = 19},
  [814] = {.lex_state = 1, .external_lex_state = 6},
  [815] = {.lex_state = 0, .external_lex_state = 19},
  [816] = {.lex_state = 0, .external_lex_state = 19},
  [817] = {.lex_state = 0, .external_lex_state = 19},
  [818] = {.lex_state = 0, .external_lex_state = 19},
  [819] = {.lex_state = 13, .external_lex_state = 6},
  [820] = {.lex_state = 0, .external_lex_state = 19},
  [821] = {.lex_state = 0, .external_lex_state = 19},
  [822] = {.lex_state = 0, .external_lex_state = 12},
  [823] = {.lex_state = 0, .external_lex_state = 12},
  [824] = {.lex_state = 0, .external_lex_state = 2},
  [825] = {.lex_state = 0, .external_lex_state = 19},
  [826] = {.lex_state = 0, .external_lex_state = 18},
  [827] = {.lex_state = 0, .external_lex_state = 18},
  [828] = {.lex_state = 0, .external_lex_state = 19},
  [829] = {.lex_state = 0, .external_lex_state = 19},
  [830] = {.lex_state = 0, .external_lex_state = 19},
  [831] = {.lex_state = 13, .external_lex_state = 6},
  [832] = {.lex_state = 0, .external_lex_state = 19},
  [833] = {.lex_state = 0, .external_lex_state = 19},
  [834] = {.lex_state = 0, .external_lex_state = 19},
  [835] = {.lex_state = 0, .external_lex_state = 19},
  [836] = {.lex_state = 0, .external_lex_state = 19},
  [837] = {.lex_state = 0, .external_lex_state = 19},
  [838] = {.lex_state = 0, .external_lex_state = 19},
  [839] = {.lex_state = 0, .external_lex_state = 19},
  [840] = {.lex_state = 0, .external_lex_state = 19},
  [841] = {.lex_state = 0, .external_lex_state = 19},
  [842] = {.lex_state = 0, .external_lex_state = 19},
  [843] = {.lex_state = 0, .external_lex_state = 19},
  [844] = {.lex_state = 0, .external_lex_state = 19},
  [845] = {.lex_state = 0, .external_lex_state = 19},
  [846] = {.lex_state = 0, .external_lex_state = 19},
  [847] = {.lex_state = 0, .external_lex_state = 19},
  [848] = {.lex_state = 0, .external_lex_state = 19},
  [849] = {.lex_state = 0, .external_lex_state = 19},
  [850] = {.lex_state = 0, .external_lex_state = 19},
  [851] = {.lex_state = 0, .external_lex_state = 19},
  [852] = {.lex_state = 0, .external_lex_state = 19},
  [853] = {.lex_state = 0, .external_lex_state = 19},
  [854] = {.lex_state = 0, .external_lex_state = 19},
  [855] = {.lex_state = 0, .external_lex_state = 19},
  [856] = {.lex_state = 0, .external_lex_state = 19},
  [857] = {.lex_state = 0, .external_lex_state = 19},
  [858] = {.lex_state = 0, .external_lex_state = 19},
  [859] = {.lex_state = 0, .external_lex_state = 19},
  [860] = {.lex_state = 0, .external_lex_state = 19},
  [861] = {.lex_state = 0, .external_lex_state = 19},
  [862] = {.lex_state = 0, .external_lex_state = 28},
  [863] = {.lex_state = 0, .external_lex_state = 19},
  [864] = {.lex_state = 0, .external_lex_state = 19},
  [865] = {.lex_state = 0, .external_lex_state = 19},
  [866] = {.lex_state = 0, .external_lex_state = 28},
  [867] = {.lex_state = 0, .external_lex_state = 19},
  [868] = {.lex_state = 0, .external_lex_state = 19},
  [869] = {.lex_state = 0, .external_lex_state = 19},
  [870] = {.lex_state = 0, .external_lex_state = 19},
  [871] = {.lex_state = 0, .external_lex_state = 19},
  [872] = {.lex_state = 0, .external_lex_state = 2},
  [873] = {.lex_state = 0, .external_lex_state = 19},
  [874] = {.lex_state = 0, .external_lex_state = 19},
  [875] = {.lex_state = 0, .external_lex_state = 26},
  [876] = {.lex_state = 0, .external_lex_state = 26},
  [877] = {.lex_state = 0, .external_lex_state = 19},
  [878] = {.lex_state = 6, .external_lex_state = 6},
  [879] = {.lex_state = 15, .external_lex_state = 6},
  [880] = {.lex_state = 0, .external_lex_state = 19},
  [881] = {.lex_state = 70},
  [882] = {.lex_state = 0, .external_lex_state = 19},
  [883] = {.lex_state = 17},
  [884] = {.lex_state = 0, .external_lex_state = 26},
  [885] = {.lex_state = 0, .external_lex_state = 26},
  [886] = {.lex_state = 0, .external_lex_state = 19},
  [887] = {.lex_state = 6, .external_lex_state = 6},
  [888] = {.lex_state = 15, .external_lex_state = 6},
  [889] = {.lex_state = 0, .external_lex_state = 19},
  [890] = {.lex_state = 0, .external_lex_state = 19},
  [891] = {.lex_state = 0, .external_lex_state = 26},
  [892] = {.lex_state = 0, .external_lex_state = 26},
  [893] = {.lex_state = 0, .external_lex_state = 26},
  [894] = {.lex_state = 0, .external_lex_state = 26},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 0, .external_lex_state = 19},
  [897] = {.lex_state = 0, .external_lex_state = 19},
  [898] = {.lex_state = 0, .external_lex_state = 19},
  [899] = {.lex_state = 0, .external_lex_state = 19},
  [900] = {.lex_state = 0, .external_lex_state = 12},
  [901] = {.lex_state = 0, .external_lex_state = 12},
  [902] = {.lex_state = 0, .external_lex_state = 12},
  [903] = {.lex_state = 0, .external_lex_state = 6},
  [904] = {.lex_state = 16},
  [905] = {.lex_state = 0, .external_lex_state = 27},
  [906] = {.lex_state = 0, .external_lex_state = 2},
  [907] = {.lex_state = 0, .external_lex_state = 2},
  [908] = {.lex_state = 0, .external_lex_state = 28},
  [909] = {.lex_state = 0, .external_lex_state = 12},
  [910] = {.lex_state = 0, .external_lex_state = 2},
  [911] = {.lex_state = 0, .external_lex_state = 2},
  [912] = {.lex_state = 0, .external_lex_state = 2},
  [913] = {.lex_state = 0, .external_lex_state = 2},
  [914] = {.lex_state = 0, .external_lex_state = 2},
  [915] = {.lex_state = 0, .external_lex_state = 2},
  [916] = {.lex_state = 0, .external_lex_state = 2},
  [917] = {.lex_state = 0, .external_lex_state = 2},
  [918] = {.lex_state = 0, .external_lex_state = 2},
  [919] = {.lex_state = 0, .external_lex_state = 2},
  [920] = {.lex_state = 0, .external_lex_state = 2},
  [921] = {.lex_state = 0, .external_lex_state = 2},
  [922] = {.lex_state = 0, .external_lex_state = 2},
  [923] = {.lex_state = 0, .external_lex_state = 2},
  [924] = {.lex_state = 0, .external_lex_state = 2},
  [925] = {.lex_state = 0, .external_lex_state = 12},
  [926] = {.lex_state = 0, .external_lex_state = 29},
  [927] = {.lex_state = 17},
  [928] = {.lex_state = 0, .external_lex_state = 6},
  [929] = {.lex_state = 0, .external_lex_state = 6},
  [930] = {.lex_state = 0, .external_lex_state = 6},
  [931] = {.lex_state = 1},
  [932] = {.lex_state = 0, .external_lex_state = 24},
  [933] = {.lex_state = 0, .external_lex_state = 24},
  [934] = {.lex_state = 0, .external_lex_state = 23},
  [935] = {.lex_state = 0, .external_lex_state = 23},
  [936] = {.lex_state = 0, .external_lex_state = 23},
  [937] = {.lex_state = 0, .external_lex_state = 23},
  [938] = {.lex_state = 0, .external_lex_state = 23},
  [939] = {.lex_state = 0, .external_lex_state = 23},
  [940] = {.lex_state = 0, .external_lex_state = 24},
  [941] = {.lex_state = 0, .external_lex_state = 24},
  [942] = {.lex_state = 0, .external_lex_state = 24},
  [943] = {.lex_state = 0, .external_lex_state = 24},
  [944] = {.lex_state = 0, .external_lex_state = 24},
  [945] = {.lex_state = 0, .external_lex_state = 28},
  [946] = {.lex_state = 0, .external_lex_state = 6},
  [947] = {.lex_state = 0, .external_lex_state = 6},
  [948] = {.lex_state = 5, .external_lex_state = 6},
  [949] = {.lex_state = 0, .external_lex_state = 6},
  [950] = {.lex_state = 0, .external_lex_state = 6},
  [951] = {.lex_state = 0, .external_lex_state = 6},
  [952] = {.lex_state = 0, .external_lex_state = 6},
  [953] = {.lex_state = 1},
  [954] = {.lex_state = 0, .external_lex_state = 6},
  [955] = {.lex_state = 0, .external_lex_state = 6},
  [956] = {.lex_state = 0, .external_lex_state = 6},
  [957] = {.lex_state = 1},
  [958] = {.lex_state = 0, .external_lex_state = 6},
  [959] = {.lex_state = 0, .external_lex_state = 6},
  [960] = {.lex_state = 0, .external_lex_state = 6},
  [961] = {.lex_state = 0, .external_lex_state = 6},
  [962] = {.lex_state = 0, .external_lex_state = 6},
  [963] = {.lex_state = 0, .external_lex_state = 6},
  [964] = {.lex_state = 0, .external_lex_state = 6},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 0, .external_lex_state = 6},
  [968] = {.lex_state = 0, .external_lex_state = 6},
  [969] = {.lex_state = 16},
  [970] = {.lex_state = 0, .external_lex_state = 6},
  [971] = {.lex_state = 0, .external_lex_state = 6},
  [972] = {.lex_state = 0, .external_lex_state = 6},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 0, .external_lex_state = 6},
  [975] = {.lex_state = 1},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 0, .external_lex_state = 6},
  [978] = {.lex_state = 0, .external_lex_state = 6},
  [979] = {.lex_state = 0, .external_lex_state = 29},
  [980] = {.lex_state = 0, .external_lex_state = 6},
  [981] = {.lex_state = 0, .external_lex_state = 6},
  [982] = {.lex_state = 0, .external_lex_state = 6},
  [983] = {.lex_state = 0, .external_lex_state = 6},
  [984] = {.lex_state = 0, .external_lex_state = 6},
  [985] = {.lex_state = 0, .external_lex_state = 6},
  [986] = {.lex_state = 0, .external_lex_state = 6},
  [987] = {.lex_state = 0, .external_lex_state = 6},
  [988] = {.lex_state = 0, .external_lex_state = 6},
  [989] = {.lex_state = 0, .external_lex_state = 6},
  [990] = {.lex_state = 16},
  [991] = {.lex_state = 0, .external_lex_state = 6},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 0, .external_lex_state = 6},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 1},
  [996] = {.lex_state = 0, .external_lex_state = 6},
  [997] = {.lex_state = 0, .external_lex_state = 6},
  [998] = {.lex_state = 0, .external_lex_state = 6},
  [999] = {.lex_state = 0, .external_lex_state = 6},
  [1000] = {.lex_state = 0, .external_lex_state = 6},
  [1001] = {.lex_state = 5, .external_lex_state = 6},
  [1002] = {.lex_state = 0, .external_lex_state = 6},
  [1003] = {.lex_state = 0, .external_lex_state = 6},
  [1004] = {.lex_state = 0, .external_lex_state = 29},
  [1005] = {.lex_state = 0, .external_lex_state = 6},
  [1006] = {.lex_state = 0, .external_lex_state = 6},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 1, .external_lex_state = 6},
  [1009] = {.lex_state = 1, .external_lex_state = 6},
  [1010] = {.lex_state = 1},
  [1011] = {.lex_state = 0, .external_lex_state = 6},
  [1012] = {.lex_state = 16},
  [1013] = {.lex_state = 0, .external_lex_state = 23},
  [1014] = {.lex_state = 0, .external_lex_state = 6},
  [1015] = {.lex_state = 0, .external_lex_state = 23},
  [1016] = {.lex_state = 0, .external_lex_state = 23},
  [1017] = {.lex_state = 1},
  [1018] = {.lex_state = 0, .external_lex_state = 23},
  [1019] = {.lex_state = 0, .external_lex_state = 25},
  [1020] = {.lex_state = 0, .external_lex_state = 6},
  [1021] = {.lex_state = 0, .external_lex_state = 23},
  [1022] = {.lex_state = 0, .external_lex_state = 28},
  [1023] = {.lex_state = 0, .external_lex_state = 6},
  [1024] = {.lex_state = 0, .external_lex_state = 6},
  [1025] = {.lex_state = 0, .external_lex_state = 29},
  [1026] = {.lex_state = 0, .external_lex_state = 29},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 0, .external_lex_state = 6},
  [1029] = {.lex_state = 0, .external_lex_state = 29},
  [1030] = {.lex_state = 13, .external_lex_state = 6},
  [1031] = {.lex_state = 0, .external_lex_state = 6},
  [1032] = {.lex_state = 13, .external_lex_state = 6},
  [1033] = {.lex_state = 0, .external_lex_state = 6},
  [1034] = {.lex_state = 13, .external_lex_state = 6},
  [1035] = {.lex_state = 0, .external_lex_state = 6},
  [1036] = {.lex_state = 0, .external_lex_state = 6},
  [1037] = {.lex_state = 0, .external_lex_state = 23},
  [1038] = {.lex_state = 16},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 1},
  [1041] = {.lex_state = 0, .external_lex_state = 6},
  [1042] = {.lex_state = 0, .external_lex_state = 6},
  [1043] = {.lex_state = 0, .external_lex_state = 6},
  [1044] = {.lex_state = 0, .external_lex_state = 6},
  [1045] = {.lex_state = 0, .external_lex_state = 29},
  [1046] = {.lex_state = 0, .external_lex_state = 6},
  [1047] = {.lex_state = 0, .external_lex_state = 29},
  [1048] = {.lex_state = 0, .external_lex_state = 6},
  [1049] = {.lex_state = 0, .external_lex_state = 6},
  [1050] = {.lex_state = 0, .external_lex_state = 6},
  [1051] = {.lex_state = 0, .external_lex_state = 6},
  [1052] = {.lex_state = 0, .external_lex_state = 29},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 1},
  [1055] = {.lex_state = 0, .external_lex_state = 6},
  [1056] = {.lex_state = 0, .external_lex_state = 6},
  [1057] = {.lex_state = 0, .external_lex_state = 6},
  [1058] = {.lex_state = 0, .external_lex_state = 6},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 0, .external_lex_state = 6},
  [1061] = {.lex_state = 0, .external_lex_state = 6},
  [1062] = {.lex_state = 0, .external_lex_state = 6},
  [1063] = {.lex_state = 0, .external_lex_state = 6},
  [1064] = {.lex_state = 0, .external_lex_state = 6},
  [1065] = {.lex_state = 0, .external_lex_state = 29},
  [1066] = {.lex_state = 1},
  [1067] = {.lex_state = 0, .external_lex_state = 23},
  [1068] = {.lex_state = 0, .external_lex_state = 6},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 0, .external_lex_state = 6},
  [1072] = {.lex_state = 41},
  [1073] = {.lex_state = 0, .external_lex_state = 6},
  [1074] = {.lex_state = 0, .external_lex_state = 6},
  [1075] = {.lex_state = 0, .external_lex_state = 6},
  [1076] = {.lex_state = 0, .external_lex_state = 23},
  [1077] = {.lex_state = 0, .external_lex_state = 6},
  [1078] = {.lex_state = 0, .external_lex_state = 6},
  [1079] = {.lex_state = 0, .external_lex_state = 6},
  [1080] = {.lex_state = 0, .external_lex_state = 6},
  [1081] = {.lex_state = 1, .external_lex_state = 6},
  [1082] = {.lex_state = 1},
  [1083] = {.lex_state = 0, .external_lex_state = 29},
  [1084] = {.lex_state = 0, .external_lex_state = 29},
  [1085] = {.lex_state = 0, .external_lex_state = 29},
  [1086] = {.lex_state = 0, .external_lex_state = 29},
  [1087] = {.lex_state = 1},
  [1088] = {.lex_state = 0, .external_lex_state = 22},
  [1089] = {.lex_state = 0, .external_lex_state = 29},
  [1090] = {.lex_state = 0, .external_lex_state = 29},
  [1091] = {.lex_state = 0, .external_lex_state = 29},
  [1092] = {.lex_state = 0, .external_lex_state = 22},
  [1093] = {.lex_state = 0, .external_lex_state = 22},
  [1094] = {.lex_state = 1, .external_lex_state = 6},
  [1095] = {.lex_state = 0, .external_lex_state = 22},
  [1096] = {.lex_state = 0, .external_lex_state = 28},
  [1097] = {.lex_state = 0, .external_lex_state = 22},
  [1098] = {.lex_state = 0, .external_lex_state = 22},
  [1099] = {.lex_state = 0, .external_lex_state = 22},
  [1100] = {.lex_state = 0, .external_lex_state = 29},
  [1101] = {.lex_state = 1, .external_lex_state = 6},
  [1102] = {.lex_state = 0, .external_lex_state = 29},
  [1103] = {.lex_state = 0, .external_lex_state = 29},
  [1104] = {.lex_state = 1, .external_lex_state = 6},
  [1105] = {.lex_state = 1, .external_lex_state = 6},
  [1106] = {.lex_state = 0, .external_lex_state = 29},
  [1107] = {.lex_state = 0, .external_lex_state = 28},
  [1108] = {.lex_state = 0, .external_lex_state = 22},
  [1109] = {.lex_state = 0, .external_lex_state = 6},
  [1110] = {.lex_state = 0, .external_lex_state = 29},
  [1111] = {.lex_state = 1, .external_lex_state = 6},
  [1112] = {.lex_state = 1, .external_lex_state = 6},
  [1113] = {.lex_state = 0, .external_lex_state = 29},
  [1114] = {.lex_state = 0, .external_lex_state = 29},
  [1115] = {.lex_state = 0, .external_lex_state = 29},
  [1116] = {.lex_state = 0, .external_lex_state = 6},
  [1117] = {.lex_state = 0, .external_lex_state = 28},
  [1118] = {.lex_state = 0, .external_lex_state = 28},
  [1119] = {.lex_state = 0, .external_lex_state = 6},
  [1120] = {.lex_state = 0, .external_lex_state = 6},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 0, .external_lex_state = 6},
  [1123] = {.lex_state = 0, .external_lex_state = 23},
  [1124] = {.lex_state = 0, .external_lex_state = 6},
  [1125] = {.lex_state = 0, .external_lex_state = 6},
  [1126] = {.lex_state = 0, .external_lex_state = 23},
  [1127] = {.lex_state = 13, .external_lex_state = 6},
  [1128] = {.lex_state = 0, .external_lex_state = 6},
  [1129] = {.lex_state = 0, .external_lex_state = 6},
  [1130] = {.lex_state = 1},
  [1131] = {.lex_state = 0, .external_lex_state = 6},
  [1132] = {.lex_state = 0, .external_lex_state = 6},
  [1133] = {.lex_state = 1},
  [1134] = {.lex_state = 0, .external_lex_state = 6},
  [1135] = {.lex_state = 0, .external_lex_state = 29},
  [1136] = {.lex_state = 0, .external_lex_state = 24},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 0, .external_lex_state = 30},
  [1139] = {.lex_state = 0, .external_lex_state = 30},
  [1140] = {.lex_state = 274},
  [1141] = {.lex_state = 1},
  [1142] = {.lex_state = 0, .external_lex_state = 6},
  [1143] = {.lex_state = 0, .external_lex_state = 6},
  [1144] = {.lex_state = 0, .external_lex_state = 6},
  [1145] = {.lex_state = 274},
  [1146] = {.lex_state = 0, .external_lex_state = 3},
  [1147] = {.lex_state = 0, .external_lex_state = 5},
  [1148] = {.lex_state = 0, .external_lex_state = 31},
  [1149] = {.lex_state = 1},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 16},
  [1152] = {.lex_state = 0, .external_lex_state = 3},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 1},
  [1155] = {.lex_state = 41},
  [1156] = {.lex_state = 1},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 5},
  [1159] = {.lex_state = 0, .external_lex_state = 30},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 16},
  [1162] = {.lex_state = 1},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 0, .external_lex_state = 29},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 0, .external_lex_state = 3},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 275, .external_lex_state = 32},
  [1169] = {.lex_state = 275, .external_lex_state = 32},
  [1170] = {.lex_state = 0, .external_lex_state = 28},
  [1171] = {.lex_state = 276},
  [1172] = {.lex_state = 275, .external_lex_state = 32},
  [1173] = {.lex_state = 275, .external_lex_state = 32},
  [1174] = {.lex_state = 0, .external_lex_state = 6},
  [1175] = {.lex_state = 0, .external_lex_state = 6},
  [1176] = {.lex_state = 275, .external_lex_state = 32},
  [1177] = {.lex_state = 275, .external_lex_state = 32},
  [1178] = {.lex_state = 275, .external_lex_state = 32},
  [1179] = {.lex_state = 275, .external_lex_state = 32},
  [1180] = {.lex_state = 275, .external_lex_state = 32},
  [1181] = {.lex_state = 275, .external_lex_state = 32},
  [1182] = {.lex_state = 16},
  [1183] = {.lex_state = 275, .external_lex_state = 32},
  [1184] = {.lex_state = 275, .external_lex_state = 32},
  [1185] = {.lex_state = 275, .external_lex_state = 32},
  [1186] = {.lex_state = 275, .external_lex_state = 32},
  [1187] = {.lex_state = 275, .external_lex_state = 32},
  [1188] = {.lex_state = 275, .external_lex_state = 32},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 0, .external_lex_state = 6},
  [1191] = {.lex_state = 41},
  [1192] = {.lex_state = 0, .external_lex_state = 6},
  [1193] = {.lex_state = 276},
  [1194] = {.lex_state = 274},
  [1195] = {.lex_state = 16},
  [1196] = {.lex_state = 275, .external_lex_state = 32},
  [1197] = {.lex_state = 1},
  [1198] = {.lex_state = 0, .external_lex_state = 33},
  [1199] = {.lex_state = 0, .external_lex_state = 30},
  [1200] = {.lex_state = 0, .external_lex_state = 33},
  [1201] = {.lex_state = 0, .external_lex_state = 30},
  [1202] = {.lex_state = 0, .external_lex_state = 30},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 0, .external_lex_state = 30},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 0, .external_lex_state = 6},
  [1207] = {.lex_state = 16},
  [1208] = {.lex_state = 275, .external_lex_state = 32},
  [1209] = {.lex_state = 1},
  [1210] = {.lex_state = 0, .external_lex_state = 33},
  [1211] = {.lex_state = 0, .external_lex_state = 30},
  [1212] = {.lex_state = 275, .external_lex_state = 32},
  [1213] = {.lex_state = 0, .external_lex_state = 33},
  [1214] = {.lex_state = 0, .external_lex_state = 30},
  [1215] = {.lex_state = 0, .external_lex_state = 30},
  [1216] = {.lex_state = 0, .external_lex_state = 30},
  [1217] = {.lex_state = 1},
  [1218] = {.lex_state = 1},
  [1219] = {.lex_state = 0, .external_lex_state = 28},
  [1220] = {.lex_state = 1},
  [1221] = {.lex_state = 1},
  [1222] = {.lex_state = 1},
  [1223] = {.lex_state = 1},
  [1224] = {.lex_state = 1},
  [1225] = {.lex_state = 1},
  [1226] = {.lex_state = 1},
  [1227] = {.lex_state = 1},
  [1228] = {.lex_state = 1},
  [1229] = {.lex_state = 1},
  [1230] = {.lex_state = 1},
  [1231] = {.lex_state = 0, .external_lex_state = 31},
  [1232] = {.lex_state = 1},
  [1233] = {.lex_state = 0, .external_lex_state = 33},
  [1234] = {.lex_state = 1},
  [1235] = {.lex_state = 274},
  [1236] = {.lex_state = 1},
  [1237] = {.lex_state = 0, .external_lex_state = 30},
  [1238] = {.lex_state = 275, .external_lex_state = 32},
  [1239] = {.lex_state = 275, .external_lex_state = 32},
  [1240] = {.lex_state = 0, .external_lex_state = 29},
  [1241] = {.lex_state = 1},
  [1242] = {.lex_state = 274},
  [1243] = {.lex_state = 1},
  [1244] = {.lex_state = 1},
  [1245] = {.lex_state = 0, .external_lex_state = 31},
  [1246] = {.lex_state = 0, .external_lex_state = 31},
  [1247] = {.lex_state = 1},
  [1248] = {.lex_state = 275, .external_lex_state = 32},
  [1249] = {.lex_state = 1},
  [1250] = {.lex_state = 1},
  [1251] = {.lex_state = 0, .external_lex_state = 33},
  [1252] = {.lex_state = 274},
  [1253] = {.lex_state = 1},
  [1254] = {.lex_state = 1},
  [1255] = {.lex_state = 0, .external_lex_state = 32},
  [1256] = {.lex_state = 0, .external_lex_state = 6},
  [1257] = {.lex_state = 0, .external_lex_state = 6},
  [1258] = {.lex_state = 29},
  [1259] = {.lex_state = 0},
  [1260] = {.lex_state = 0, .external_lex_state = 32},
  [1261] = {.lex_state = 0, .external_lex_state = 34},
  [1262] = {.lex_state = 1},
  [1263] = {.lex_state = 277},
  [1264] = {.lex_state = 0, .external_lex_state = 34},
  [1265] = {.lex_state = 1},
  [1266] = {.lex_state = 41},
  [1267] = {.lex_state = 1},
  [1268] = {.lex_state = 277},
  [1269] = {.lex_state = 1},
  [1270] = {.lex_state = 1},
  [1271] = {.lex_state = 0, .external_lex_state = 32},
  [1272] = {.lex_state = 1},
  [1273] = {.lex_state = 41},
  [1274] = {.lex_state = 1},
  [1275] = {.lex_state = 0, .external_lex_state = 32},
  [1276] = {.lex_state = 0, .external_lex_state = 32},
  [1277] = {.lex_state = 1},
  [1278] = {.lex_state = 1},
  [1279] = {.lex_state = 1},
  [1280] = {.lex_state = 0, .external_lex_state = 6},
  [1281] = {.lex_state = 277},
  [1282] = {.lex_state = 1},
  [1283] = {.lex_state = 0, .external_lex_state = 32},
  [1284] = {.lex_state = 0, .external_lex_state = 34},
  [1285] = {.lex_state = 41},
  [1286] = {.lex_state = 0, .external_lex_state = 34},
  [1287] = {.lex_state = 0, .external_lex_state = 34},
  [1288] = {.lex_state = 1},
  [1289] = {.lex_state = 1},
  [1290] = {.lex_state = 41},
  [1291] = {.lex_state = 0, .external_lex_state = 32},
  [1292] = {.lex_state = 1},
  [1293] = {.lex_state = 1},
  [1294] = {.lex_state = 1},
  [1295] = {.lex_state = 0, .external_lex_state = 34},
  [1296] = {.lex_state = 1},
  [1297] = {.lex_state = 1},
  [1298] = {.lex_state = 0, .external_lex_state = 32},
  [1299] = {.lex_state = 1},
  [1300] = {.lex_state = 41},
  [1301] = {.lex_state = 0, .external_lex_state = 32},
  [1302] = {.lex_state = 0, .external_lex_state = 6},
  [1303] = {.lex_state = 1},
  [1304] = {.lex_state = 1},
  [1305] = {.lex_state = 1},
  [1306] = {.lex_state = 1},
  [1307] = {.lex_state = 1},
  [1308] = {.lex_state = 1},
  [1309] = {.lex_state = 0, .external_lex_state = 34},
  [1310] = {.lex_state = 0, .external_lex_state = 6},
  [1311] = {.lex_state = 1},
  [1312] = {.lex_state = 0, .external_lex_state = 32},
  [1313] = {.lex_state = 0, .external_lex_state = 32},
  [1314] = {.lex_state = 1},
  [1315] = {.lex_state = 0, .external_lex_state = 32},
  [1316] = {.lex_state = 0, .external_lex_state = 32},
  [1317] = {.lex_state = 0, .external_lex_state = 6},
  [1318] = {.lex_state = 1},
  [1319] = {.lex_state = 0, .external_lex_state = 32},
  [1320] = {.lex_state = 0, .external_lex_state = 32},
  [1321] = {.lex_state = 0, .external_lex_state = 6},
  [1322] = {.lex_state = 0, .external_lex_state = 34},
  [1323] = {.lex_state = 41},
  [1324] = {.lex_state = 1},
  [1325] = {.lex_state = 0, .external_lex_state = 32},
  [1326] = {.lex_state = 0, .external_lex_state = 32},
  [1327] = {.lex_state = 0, .external_lex_state = 32},
  [1328] = {.lex_state = 1},
  [1329] = {.lex_state = 0, .external_lex_state = 6},
  [1330] = {.lex_state = 0, .external_lex_state = 32},
  [1331] = {.lex_state = 5},
  [1332] = {.lex_state = 0, .external_lex_state = 6},
  [1333] = {.lex_state = 1},
  [1334] = {.lex_state = 1},
  [1335] = {.lex_state = 0, .external_lex_state = 32},
  [1336] = {.lex_state = 1},
  [1337] = {.lex_state = 0, .external_lex_state = 32},
  [1338] = {.lex_state = 0, .external_lex_state = 34},
  [1339] = {.lex_state = 1},
  [1340] = {.lex_state = 41},
  [1341] = {.lex_state = 0, .external_lex_state = 32},
  [1342] = {.lex_state = 0, .external_lex_state = 6},
  [1343] = {.lex_state = 0, .external_lex_state = 34},
  [1344] = {.lex_state = 276},
  [1345] = {.lex_state = 278},
  [1346] = {.lex_state = 1},
  [1347] = {.lex_state = 0, .external_lex_state = 34},
  [1348] = {.lex_state = 1},
  [1349] = {.lex_state = 275},
  [1350] = {.lex_state = 0, .external_lex_state = 32},
  [1351] = {.lex_state = 0, .external_lex_state = 32},
  [1352] = {.lex_state = 0, .external_lex_state = 32},
  [1353] = {.lex_state = 0, .external_lex_state = 32},
  [1354] = {.lex_state = 0, .external_lex_state = 32},
  [1355] = {.lex_state = 0, .external_lex_state = 32},
  [1356] = {.lex_state = 1},
  [1357] = {.lex_state = 0, .external_lex_state = 6},
  [1358] = {.lex_state = 0, .external_lex_state = 6},
  [1359] = {.lex_state = 0, .external_lex_state = 32},
  [1360] = {.lex_state = 0, .external_lex_state = 6},
  [1361] = {.lex_state = 1},
  [1362] = {.lex_state = 278},
  [1363] = {.lex_state = 1},
  [1364] = {.lex_state = 0, .external_lex_state = 34},
  [1365] = {.lex_state = 1},
  [1366] = {.lex_state = 0, .external_lex_state = 34},
  [1367] = {.lex_state = 0, .external_lex_state = 32},
  [1368] = {.lex_state = 1},
  [1369] = {.lex_state = 0, .external_lex_state = 32},
  [1370] = {.lex_state = 1},
  [1371] = {.lex_state = 0, .external_lex_state = 32},
  [1372] = {.lex_state = 0, .external_lex_state = 6},
  [1373] = {.lex_state = 1},
  [1374] = {.lex_state = 278},
  [1375] = {.lex_state = 0, .external_lex_state = 6},
  [1376] = {.lex_state = 41},
  [1377] = {.lex_state = 0, .external_lex_state = 34},
  [1378] = {.lex_state = 0, .external_lex_state = 6},
  [1379] = {.lex_state = 1},
  [1380] = {.lex_state = 0, .external_lex_state = 32},
  [1381] = {.lex_state = 1},
  [1382] = {.lex_state = 1},
  [1383] = {.lex_state = 1},
  [1384] = {.lex_state = 1},
  [1385] = {.lex_state = 0, .external_lex_state = 34},
  [1386] = {.lex_state = 1},
  [1387] = {.lex_state = 1},
  [1388] = {.lex_state = 0, .external_lex_state = 32},
  [1389] = {.lex_state = 1},
  [1390] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_flow_gather_keyword] = ACTIONS(1),
    [sym_flow_settle_keyword] = ACTIONS(1),
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
    [sym__settle_indent] = ACTIONS(1),
    [sym__settle_text_start] = ACTIONS(1),
    [sym__text_indent] = ACTIONS(1),
    [sym__cap_text_start] = ACTIONS(1),
    [sym_indented_raw_text] = ACTIONS(1),
    [sym__flow_raw_text] = ACTIONS(1),
    [sym__agic_raw_text] = ACTIONS(1),
    [sym__error_line] = ACTIONS(1),
    [sym__exec_binding_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1259),
    [sym_item] = STATE(154),
    [sym__trivia] = STATE(154),
    [aux_sym_source_file_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(604),
    [sym_let_statement] = STATE(604),
    [sym_exec_statement] = STATE(604),
    [sym__invalid_exec_binding] = STATE(607),
    [sym_run_statement] = STATE(604),
    [sym_implicit_run_statement] = STATE(604),
    [sym__implicit_run_line] = STATE(133),
    [sym_seek_statement] = STATE(604),
    [sym_ask_statement] = STATE(604),
    [sym_scatter_statement] = STATE(604),
    [sym_storm_statement] = STATE(604),
    [sym_gather_statement] = STATE(604),
    [sym_settle_statement] = STATE(604),
    [sym_map_statement] = STATE(604),
    [sym_keep_statement] = STATE(604),
    [sym_drop_statement] = STATE(604),
    [sym_sort_statement] = STATE(604),
    [sym_repeat_statement] = STATE(604),
    [sym_invalid_flow_reserved_statement] = STATE(604),
    [sym__query_directive_key] = STATE(1030),
    [sym__route_directive_key] = STATE(1030),
    [sym_directive_key] = STATE(612),
    [sym_role] = STATE(612),
    [sym__flow_reserved_word] = STATE(612),
    [sym__agic_reserved_word] = STATE(612),
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
    [sym_flow_scatter_keyword] = ACTIONS(37),
    [sym_flow_storm_keyword] = ACTIONS(39),
    [sym_flow_gather_keyword] = ACTIONS(41),
    [sym_flow_settle_keyword] = ACTIONS(43),
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
    [sym__flow_operation] = STATE(604),
    [sym_let_statement] = STATE(604),
    [sym_exec_statement] = STATE(604),
    [sym__invalid_exec_binding] = STATE(607),
    [sym_run_statement] = STATE(604),
    [sym_implicit_run_statement] = STATE(604),
    [sym__implicit_run_line] = STATE(133),
    [sym_seek_statement] = STATE(604),
    [sym_ask_statement] = STATE(604),
    [sym_scatter_statement] = STATE(604),
    [sym_storm_statement] = STATE(604),
    [sym_gather_statement] = STATE(604),
    [sym_settle_statement] = STATE(604),
    [sym_map_statement] = STATE(604),
    [sym_keep_statement] = STATE(604),
    [sym_drop_statement] = STATE(604),
    [sym_sort_statement] = STATE(604),
    [sym_repeat_statement] = STATE(604),
    [sym_invalid_flow_reserved_statement] = STATE(604),
    [sym__query_directive_key] = STATE(1030),
    [sym__route_directive_key] = STATE(1030),
    [sym_directive_key] = STATE(612),
    [sym_role] = STATE(612),
    [sym__flow_reserved_word] = STATE(612),
    [sym__agic_reserved_word] = STATE(612),
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
    [sym_flow_scatter_keyword] = ACTIONS(37),
    [sym_flow_storm_keyword] = ACTIONS(39),
    [sym_flow_gather_keyword] = ACTIONS(41),
    [sym_flow_settle_keyword] = ACTIONS(43),
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
    [sym__flow_operation] = STATE(772),
    [sym_let_statement] = STATE(772),
    [sym_exec_statement] = STATE(772),
    [sym__invalid_exec_binding] = STATE(773),
    [sym_run_statement] = STATE(772),
    [sym_implicit_run_statement] = STATE(772),
    [sym__implicit_run_line] = STATE(106),
    [sym_seek_statement] = STATE(772),
    [sym_ask_statement] = STATE(772),
    [sym_scatter_statement] = STATE(772),
    [sym_storm_statement] = STATE(772),
    [sym_gather_statement] = STATE(772),
    [sym_settle_statement] = STATE(772),
    [sym_map_statement] = STATE(772),
    [sym_keep_statement] = STATE(772),
    [sym_drop_statement] = STATE(772),
    [sym_sort_statement] = STATE(772),
    [sym_repeat_statement] = STATE(772),
    [sym_invalid_flow_reserved_statement] = STATE(772),
    [sym__query_directive_key] = STATE(1030),
    [sym__route_directive_key] = STATE(1030),
    [sym_directive_key] = STATE(720),
    [sym_role] = STATE(720),
    [sym__flow_reserved_word] = STATE(720),
    [sym__agic_reserved_word] = STATE(720),
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
    [sym_with_keyword] = ACTIONS(57),
    [sym_struct_keyword] = ACTIONS(57),
    [sym_psyche_keyword] = ACTIONS(59),
    [sym_skill_keyword] = ACTIONS(59),
    [sym_service_keyword] = ACTIONS(59),
    [sym_prompt_keyword] = ACTIONS(59),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(57),
    [sym_task_keyword] = ACTIONS(57),
    [sym_chore_keyword] = ACTIONS(57),
    [sym_flow_keyword] = ACTIONS(57),
    [sym_pass_keyword] = ACTIONS(57),
    [sym_flow_run_keyword] = ACTIONS(61),
    [sym_flow_exec_keyword] = ACTIONS(63),
    [sym_flow_let_keyword] = ACTIONS(65),
    [sym_flow_seek_keyword] = ACTIONS(67),
    [sym_flow_ask_keyword] = ACTIONS(69),
    [sym_flow_scatter_keyword] = ACTIONS(71),
    [sym_flow_storm_keyword] = ACTIONS(73),
    [sym_flow_gather_keyword] = ACTIONS(75),
    [sym_flow_settle_keyword] = ACTIONS(77),
    [sym_flow_map_keyword] = ACTIONS(79),
    [sym_flow_keep_keyword] = ACTIONS(81),
    [sym_flow_drop_keyword] = ACTIONS(83),
    [sym_flow_sort_keyword] = ACTIONS(85),
    [sym_flow_rank_keyword] = ACTIONS(57),
    [sym_flow_repeat_keyword] = ACTIONS(87),
    [sym_flow_until_keyword] = ACTIONS(57),
    [sym_flow_from_keyword] = ACTIONS(57),
    [sym_flow_windowing_keyword] = ACTIONS(57),
    [sym_flow_using_keyword] = ACTIONS(57),
    [sym_flow_if_keyword] = ACTIONS(57),
    [sym_flow_by_keyword] = ACTIONS(57),
    [sym_flow_in_keyword] = ACTIONS(59),
    [sym_flow_lane_keyword] = ACTIONS(59),
    [sym_flow_ascending_keyword] = ACTIONS(57),
    [sym_flow_descending_keyword] = ACTIONS(57),
    [sym_flow_time_keyword] = ACTIONS(59),
    [sym_flow_times_keyword] = ACTIONS(57),
    [sym_flow_par_keyword] = ACTIONS(57),
    [sym_flow_first_keyword] = ACTIONS(57),
    [sym_flow_last_keyword] = ACTIONS(57),
    [sym_flow_top_keyword] = ACTIONS(57),
    [sym_flow_bottom_keyword] = ACTIONS(57),
    [sym_flow_think_keyword] = ACTIONS(57),
    [sym_flow_use_keyword] = ACTIONS(59),
    [sym_thunk_keyword] = ACTIONS(57),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_unfold] = ACTIONS(57),
    [anon_sym_each] = ACTIONS(57),
    [anon_sym_fold] = ACTIONS(57),
    [anon_sym_head] = ACTIONS(57),
    [anon_sym_tail] = ACTIONS(57),
    [sym__flow_raw_text] = ACTIONS(89),
  },
  [5] = {
    [sym__flow_operation] = STATE(229),
    [sym_let_statement] = STATE(229),
    [sym_exec_statement] = STATE(229),
    [sym__invalid_exec_binding] = STATE(230),
    [sym_run_statement] = STATE(229),
    [sym_implicit_run_statement] = STATE(229),
    [sym__implicit_run_line] = STATE(65),
    [sym_seek_statement] = STATE(229),
    [sym_ask_statement] = STATE(229),
    [sym_scatter_statement] = STATE(229),
    [sym_storm_statement] = STATE(229),
    [sym_gather_statement] = STATE(229),
    [sym_settle_statement] = STATE(229),
    [sym_map_statement] = STATE(229),
    [sym_keep_statement] = STATE(229),
    [sym_drop_statement] = STATE(229),
    [sym_sort_statement] = STATE(229),
    [sym_repeat_statement] = STATE(229),
    [sym_invalid_flow_reserved_statement] = STATE(229),
    [sym__query_directive_key] = STATE(1030),
    [sym__route_directive_key] = STATE(1030),
    [sym_directive_key] = STATE(797),
    [sym_role] = STATE(797),
    [sym__flow_reserved_word] = STATE(797),
    [sym__agic_reserved_word] = STATE(797),
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
    [sym_with_keyword] = ACTIONS(91),
    [sym_struct_keyword] = ACTIONS(91),
    [sym_psyche_keyword] = ACTIONS(93),
    [sym_skill_keyword] = ACTIONS(93),
    [sym_service_keyword] = ACTIONS(93),
    [sym_prompt_keyword] = ACTIONS(93),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(91),
    [sym_task_keyword] = ACTIONS(91),
    [sym_chore_keyword] = ACTIONS(91),
    [sym_flow_keyword] = ACTIONS(91),
    [sym_pass_keyword] = ACTIONS(91),
    [sym_flow_run_keyword] = ACTIONS(95),
    [sym_flow_exec_keyword] = ACTIONS(97),
    [sym_flow_let_keyword] = ACTIONS(99),
    [sym_flow_seek_keyword] = ACTIONS(101),
    [sym_flow_ask_keyword] = ACTIONS(103),
    [sym_flow_scatter_keyword] = ACTIONS(105),
    [sym_flow_storm_keyword] = ACTIONS(107),
    [sym_flow_gather_keyword] = ACTIONS(109),
    [sym_flow_settle_keyword] = ACTIONS(111),
    [sym_flow_map_keyword] = ACTIONS(113),
    [sym_flow_keep_keyword] = ACTIONS(115),
    [sym_flow_drop_keyword] = ACTIONS(117),
    [sym_flow_sort_keyword] = ACTIONS(119),
    [sym_flow_rank_keyword] = ACTIONS(91),
    [sym_flow_repeat_keyword] = ACTIONS(121),
    [sym_flow_until_keyword] = ACTIONS(91),
    [sym_flow_from_keyword] = ACTIONS(91),
    [sym_flow_windowing_keyword] = ACTIONS(91),
    [sym_flow_using_keyword] = ACTIONS(91),
    [sym_flow_if_keyword] = ACTIONS(91),
    [sym_flow_by_keyword] = ACTIONS(91),
    [sym_flow_in_keyword] = ACTIONS(93),
    [sym_flow_lane_keyword] = ACTIONS(93),
    [sym_flow_ascending_keyword] = ACTIONS(91),
    [sym_flow_descending_keyword] = ACTIONS(91),
    [sym_flow_time_keyword] = ACTIONS(93),
    [sym_flow_times_keyword] = ACTIONS(91),
    [sym_flow_par_keyword] = ACTIONS(91),
    [sym_flow_first_keyword] = ACTIONS(91),
    [sym_flow_last_keyword] = ACTIONS(91),
    [sym_flow_top_keyword] = ACTIONS(91),
    [sym_flow_bottom_keyword] = ACTIONS(91),
    [sym_flow_think_keyword] = ACTIONS(91),
    [sym_flow_use_keyword] = ACTIONS(93),
    [sym_thunk_keyword] = ACTIONS(91),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(91),
    [anon_sym_do] = ACTIONS(91),
    [anon_sym_unfold] = ACTIONS(91),
    [anon_sym_each] = ACTIONS(91),
    [anon_sym_fold] = ACTIONS(91),
    [anon_sym_head] = ACTIONS(91),
    [anon_sym_tail] = ACTIONS(91),
    [sym__flow_raw_text] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(127), 1,
      sym_flow_run_keyword,
    ACTIONS(129), 1,
      sym_flow_seek_keyword,
    ACTIONS(131), 1,
      sym_flow_ask_keyword,
    ACTIONS(133), 1,
      sym_flow_scatter_keyword,
    ACTIONS(135), 1,
      sym_flow_storm_keyword,
    ACTIONS(137), 1,
      sym_flow_gather_keyword,
    ACTIONS(139), 1,
      sym_flow_settle_keyword,
    ACTIONS(141), 1,
      sym_flow_map_keyword,
    ACTIONS(143), 1,
      sym_flow_keep_keyword,
    ACTIONS(145), 1,
      sym_flow_drop_keyword,
    ACTIONS(147), 1,
      sym_flow_sort_keyword,
    ACTIONS(149), 1,
      sym_flow_repeat_keyword,
    ACTIONS(151), 1,
      sym_text_line,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(155), 1,
      sym__exec_binding_start,
    STATE(614), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
    STATE(925), 1,
      sym_text_block,
    STATE(615), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [73] = 20,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(157), 1,
      sym_flow_run_keyword,
    ACTIONS(159), 1,
      sym_flow_seek_keyword,
    ACTIONS(161), 1,
      sym_flow_ask_keyword,
    ACTIONS(163), 1,
      sym_flow_scatter_keyword,
    ACTIONS(165), 1,
      sym_flow_storm_keyword,
    ACTIONS(167), 1,
      sym_flow_gather_keyword,
    ACTIONS(169), 1,
      sym_flow_settle_keyword,
    ACTIONS(171), 1,
      sym_flow_map_keyword,
    ACTIONS(173), 1,
      sym_flow_keep_keyword,
    ACTIONS(175), 1,
      sym_flow_drop_keyword,
    ACTIONS(177), 1,
      sym_flow_sort_keyword,
    ACTIONS(179), 1,
      sym_flow_repeat_keyword,
    ACTIONS(181), 1,
      sym_text_line,
    ACTIONS(183), 1,
      sym__exec_binding_start,
    STATE(651), 1,
      sym_text_block,
    STATE(829), 1,
      sym_text_inline,
    STATE(862), 1,
      sym_line_end,
    STATE(830), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [146] = 20,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(185), 1,
      sym_flow_run_keyword,
    ACTIONS(187), 1,
      sym_flow_seek_keyword,
    ACTIONS(189), 1,
      sym_flow_ask_keyword,
    ACTIONS(191), 1,
      sym_flow_scatter_keyword,
    ACTIONS(193), 1,
      sym_flow_storm_keyword,
    ACTIONS(195), 1,
      sym_flow_gather_keyword,
    ACTIONS(197), 1,
      sym_flow_settle_keyword,
    ACTIONS(199), 1,
      sym_flow_map_keyword,
    ACTIONS(201), 1,
      sym_flow_keep_keyword,
    ACTIONS(203), 1,
      sym_flow_drop_keyword,
    ACTIONS(205), 1,
      sym_flow_sort_keyword,
    ACTIONS(207), 1,
      sym_flow_repeat_keyword,
    ACTIONS(209), 1,
      sym_text_line,
    ACTIONS(211), 1,
      sym__exec_binding_start,
    STATE(278), 1,
      sym_text_inline,
    STATE(347), 1,
      sym_text_block,
    STATE(866), 1,
      sym_line_end,
    STATE(279), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [219] = 18,
    ACTIONS(127), 1,
      sym_flow_run_keyword,
    ACTIONS(129), 1,
      sym_flow_seek_keyword,
    ACTIONS(131), 1,
      sym_flow_ask_keyword,
    ACTIONS(133), 1,
      sym_flow_scatter_keyword,
    ACTIONS(135), 1,
      sym_flow_storm_keyword,
    ACTIONS(137), 1,
      sym_flow_gather_keyword,
    ACTIONS(139), 1,
      sym_flow_settle_keyword,
    ACTIONS(141), 1,
      sym_flow_map_keyword,
    ACTIONS(143), 1,
      sym_flow_keep_keyword,
    ACTIONS(145), 1,
      sym_flow_drop_keyword,
    ACTIONS(147), 1,
      sym_flow_sort_keyword,
    ACTIONS(149), 1,
      sym_flow_repeat_keyword,
    ACTIONS(215), 1,
      sym_snake_name,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(219), 1,
      sym__exec_binding_start,
    STATE(1203), 1,
      sym_local_name,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(762), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [287] = 18,
    ACTIONS(157), 1,
      sym_flow_run_keyword,
    ACTIONS(159), 1,
      sym_flow_seek_keyword,
    ACTIONS(161), 1,
      sym_flow_ask_keyword,
    ACTIONS(163), 1,
      sym_flow_scatter_keyword,
    ACTIONS(165), 1,
      sym_flow_storm_keyword,
    ACTIONS(167), 1,
      sym_flow_gather_keyword,
    ACTIONS(169), 1,
      sym_flow_settle_keyword,
    ACTIONS(171), 1,
      sym_flow_map_keyword,
    ACTIONS(173), 1,
      sym_flow_keep_keyword,
    ACTIONS(175), 1,
      sym_flow_drop_keyword,
    ACTIONS(177), 1,
      sym_flow_sort_keyword,
    ACTIONS(179), 1,
      sym_flow_repeat_keyword,
    ACTIONS(215), 1,
      sym_snake_name,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(221), 1,
      sym__exec_binding_start,
    STATE(1137), 1,
      sym_local_name,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(781), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [355] = 18,
    ACTIONS(185), 1,
      sym_flow_run_keyword,
    ACTIONS(187), 1,
      sym_flow_seek_keyword,
    ACTIONS(189), 1,
      sym_flow_ask_keyword,
    ACTIONS(191), 1,
      sym_flow_scatter_keyword,
    ACTIONS(193), 1,
      sym_flow_storm_keyword,
    ACTIONS(195), 1,
      sym_flow_gather_keyword,
    ACTIONS(197), 1,
      sym_flow_settle_keyword,
    ACTIONS(199), 1,
      sym_flow_map_keyword,
    ACTIONS(201), 1,
      sym_flow_keep_keyword,
    ACTIONS(203), 1,
      sym_flow_drop_keyword,
    ACTIONS(205), 1,
      sym_flow_sort_keyword,
    ACTIONS(207), 1,
      sym_flow_repeat_keyword,
    ACTIONS(215), 1,
      sym_snake_name,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(223), 1,
      sym__exec_binding_start,
    STATE(1209), 1,
      sym_local_name,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(236), 13,
      sym__flow_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [423] = 12,
    ACTIONS(227), 1,
      anon_sym_tool,
    ACTIONS(229), 1,
      sym_pass_keyword,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    STATE(116), 1,
      sym__unroled_message_line,
    STATE(778), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(225), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(775), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(792), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1030), 2,
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
  [473] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(227), 1,
      anon_sym_tool,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    STATE(116), 1,
      sym__unroled_message_line,
    STATE(778), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(225), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(775), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(792), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1030), 2,
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
  [523] = 13,
    ACTIONS(233), 1,
      sym_with_keyword,
    ACTIONS(235), 1,
      sym_struct_keyword,
    ACTIONS(237), 1,
      sym_psyche_keyword,
    ACTIONS(239), 1,
      sym_skill_keyword,
    ACTIONS(241), 1,
      sym_service_keyword,
    ACTIONS(243), 1,
      sym_prompt_keyword,
    ACTIONS(245), 1,
      sym_context_keyword,
    ACTIONS(247), 1,
      sym_instruct_keyword,
    ACTIONS(249), 1,
      sym_agic_keyword,
    ACTIONS(251), 1,
      sym_task_keyword,
    ACTIONS(253), 1,
      sym_chore_keyword,
    ACTIONS(255), 1,
      sym_flow_keyword,
    STATE(923), 12,
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
  [574] = 2,
    ACTIONS(259), 2,
      sym_newline,
      sym__exec_binding_start,
    ACTIONS(257), 14,
      sym__inline_comment,
      sym_flow_run_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_sort_keyword,
      sym_flow_repeat_keyword,
      sym_text_line,
  [595] = 7,
    ACTIONS(261), 1,
      anon_sym_lanes,
    ACTIONS(269), 1,
      sym_recall_keyword,
    STATE(795), 1,
      sym__query_directive_key,
    STATE(1160), 1,
      sym__route_directive_key,
    ACTIONS(265), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(267), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(263), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [624] = 7,
    ACTIONS(271), 1,
      anon_sym_lanes,
    ACTIONS(275), 1,
      sym_recall_keyword,
    STATE(895), 1,
      sym__query_directive_key,
    STATE(1230), 1,
      sym__route_directive_key,
    ACTIONS(265), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(273), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(263), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [653] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(277), 1,
      sym_flow_if_keyword,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    STATE(515), 1,
      sym__named_if_complement,
    STATE(900), 1,
      sym__inline_if_complement,
    STATE(901), 1,
      sym__if_complements,
    STATE(1059), 1,
      sym__lanes_complement,
    STATE(1061), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [686] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(277), 1,
      sym_flow_if_keyword,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    STATE(515), 1,
      sym__named_if_complement,
    STATE(900), 1,
      sym__inline_if_complement,
    STATE(902), 1,
      sym__if_complements,
    STATE(1059), 1,
      sym__lanes_complement,
    STATE(1063), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [719] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(283), 1,
      sym_flow_if_keyword,
    STATE(395), 1,
      sym__named_if_complement,
    STATE(788), 1,
      sym__inline_if_complement,
    STATE(790), 1,
      sym__if_complements,
    STATE(976), 1,
      sym__lanes_complement,
    STATE(978), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [752] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(283), 1,
      sym_flow_if_keyword,
    STATE(395), 1,
      sym__named_if_complement,
    STATE(788), 1,
      sym__inline_if_complement,
    STATE(789), 1,
      sym__if_complements,
    STATE(976), 1,
      sym__lanes_complement,
    STATE(977), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [785] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_if_keyword,
    STATE(242), 1,
      sym__inline_if_complement,
    STATE(243), 1,
      sym__if_complements,
    STATE(467), 1,
      sym__named_if_complement,
    STATE(1040), 1,
      sym__lanes_complement,
    STATE(1041), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [818] = 10,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_if_keyword,
    STATE(242), 1,
      sym__inline_if_complement,
    STATE(244), 1,
      sym__if_complements,
    STATE(467), 1,
      sym__named_if_complement,
    STATE(1040), 1,
      sym__lanes_complement,
    STATE(1042), 1,
      sym_position,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(281), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [851] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1308), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [875] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1294), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [899] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1243), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [923] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1269), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [947] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1346), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [971] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1296), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [995] = 6,
    ACTIONS(293), 1,
      sym_pascal_name,
    STATE(492), 1,
      sym_base_type,
    STATE(960), 1,
      sym_type,
    STATE(1105), 1,
      sym_type_name,
    STATE(1104), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(291), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1019] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1289), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1043] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1365), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1067] = 6,
    ACTIONS(293), 1,
      sym_pascal_name,
    STATE(492), 1,
      sym_base_type,
    STATE(1006), 1,
      sym_type,
    STATE(1105), 1,
      sym_type_name,
    STATE(1104), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(291), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1091] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1265), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1115] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1167), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1139] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1361), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1163] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1278), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1187] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1292), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1211] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1277), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1235] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1303), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1259] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(177), 1,
      sym_base_type,
    STATE(600), 1,
      sym_type_name,
    STATE(1304), 1,
      sym_type,
    STATE(599), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1283] = 9,
    ACTIONS(295), 1,
      sym_blank_line,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(299), 1,
      sym__dedent,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    STATE(446), 1,
      sym_property,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(1322), 1,
      sym_cap_body,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1312] = 9,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(305), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(446), 1,
      sym_property,
    STATE(1261), 1,
      sym_cap_body,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(44), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1341] = 9,
    ACTIONS(295), 1,
      sym_blank_line,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(309), 1,
      sym__dedent,
    STATE(446), 1,
      sym_property,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(1309), 1,
      sym_cap_body,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1370] = 9,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(311), 1,
      sym_blank_line,
    ACTIONS(313), 1,
      sym__dedent,
    STATE(446), 1,
      sym_property,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(1287), 1,
      sym_cap_body,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1399] = 7,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(1364), 1,
      sym__cap_text_body,
    STATE(63), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1423] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(321), 1,
      sym__other_integer_literal,
    ACTIONS(323), 1,
      sym_flow_windowing_keyword,
    ACTIONS(325), 1,
      sym_colon,
    STATE(1130), 1,
      sym__repeat_count_complement,
    STATE(1386), 1,
      sym__window_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1449] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(321), 1,
      sym__other_integer_literal,
    ACTIONS(323), 1,
      sym_flow_windowing_keyword,
    ACTIONS(327), 1,
      sym_colon,
    STATE(1066), 1,
      sym__repeat_count_complement,
    STATE(1311), 1,
      sym__window_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1475] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(329), 1,
      sym_flow_using_keyword,
    ACTIONS(331), 1,
      sym_arrow,
    ACTIONS(333), 1,
      sym_colon,
    STATE(124), 1,
      sym__settle_inline_block,
    STATE(737), 1,
      sym__named_using_complement,
    STATE(784), 1,
      sym__settle_inline_line,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1501] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(335), 1,
      sym_flow_using_keyword,
    STATE(393), 1,
      sym__named_using_complement,
    STATE(786), 1,
      sym__inline_using_complement,
    STATE(787), 1,
      sym__using_complements,
    STATE(975), 1,
      sym__lanes_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1527] = 7,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(337), 1,
      sym_blank_line,
    ACTIONS(339), 1,
      sym__dedent,
    STATE(1284), 1,
      sym__cap_text_body,
    STATE(59), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1551] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(321), 1,
      sym__other_integer_literal,
    ACTIONS(323), 1,
      sym_flow_windowing_keyword,
    ACTIONS(341), 1,
      sym_colon,
    STATE(1133), 1,
      sym__repeat_count_complement,
    STATE(1389), 1,
      sym__window_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1577] = 8,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    STATE(515), 1,
      sym__named_if_complement,
    STATE(900), 1,
      sym__inline_if_complement,
    STATE(901), 1,
      sym__if_complements,
    STATE(1059), 1,
      sym__lanes_complement,
    STATE(1061), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1603] = 8,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    STATE(395), 1,
      sym__named_if_complement,
    STATE(788), 1,
      sym__inline_if_complement,
    STATE(790), 1,
      sym__if_complements,
    STATE(976), 1,
      sym__lanes_complement,
    STATE(978), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1629] = 8,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    STATE(515), 1,
      sym__named_if_complement,
    STATE(900), 1,
      sym__inline_if_complement,
    STATE(902), 1,
      sym__if_complements,
    STATE(1059), 1,
      sym__lanes_complement,
    STATE(1063), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1655] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(351), 1,
      sym_flow_using_keyword,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_colon,
    STATE(137), 1,
      sym__settle_inline_block,
    STATE(239), 1,
      sym__settle_inline_line,
    STATE(814), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1681] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(357), 1,
      sym_flow_using_keyword,
    STATE(240), 1,
      sym__inline_using_complement,
    STATE(241), 1,
      sym__using_complements,
    STATE(465), 1,
      sym__named_using_complement,
    STATE(1039), 1,
      sym__lanes_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1707] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_flow_using_keyword,
    ACTIONS(361), 1,
      sym_arrow,
    ACTIONS(363), 1,
      sym_colon,
    STATE(89), 1,
      sym__settle_inline_block,
    STATE(791), 1,
      sym__settle_inline_line,
    STATE(793), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1733] = 7,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(317), 1,
      sym__dedent,
    ACTIONS(365), 1,
      sym_blank_line,
    STATE(1364), 1,
      sym__cap_text_body,
    STATE(81), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1757] = 8,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_if_keyword,
    STATE(242), 1,
      sym__inline_if_complement,
    STATE(243), 1,
      sym__if_complements,
    STATE(467), 1,
      sym__named_if_complement,
    STATE(1040), 1,
      sym__lanes_complement,
    STATE(1041), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1783] = 8,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_if_keyword,
    STATE(242), 1,
      sym__inline_if_complement,
    STATE(244), 1,
      sym__if_complements,
    STATE(467), 1,
      sym__named_if_complement,
    STATE(1040), 1,
      sym__lanes_complement,
    STATE(1042), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1809] = 8,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(279), 1,
      sym_flow_in_keyword,
    ACTIONS(369), 1,
      sym_flow_using_keyword,
    STATE(464), 1,
      sym__named_using_complement,
    STATE(822), 1,
      sym__inline_using_complement,
    STATE(823), 1,
      sym__using_complements,
    STATE(1053), 1,
      sym__lanes_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1835] = 7,
    ACTIONS(297), 1,
      sym__comment_start,
    ACTIONS(301), 1,
      sym__line_start,
    ACTIONS(303), 1,
      sym__cap_text_start,
    ACTIONS(365), 1,
      sym_blank_line,
    ACTIONS(371), 1,
      sym__dedent,
    STATE(1295), 1,
      sym__cap_text_body,
    STATE(81), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1859] = 8,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    STATE(395), 1,
      sym__named_if_complement,
    STATE(788), 1,
      sym__inline_if_complement,
    STATE(789), 1,
      sym__if_complements,
    STATE(976), 1,
      sym__lanes_complement,
    STATE(977), 1,
      sym_position,
    ACTIONS(347), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1885] = 5,
    ACTIONS(123), 1,
      sym__flow_raw_text,
    ACTIONS(373), 1,
      sym_blank_line,
    STATE(71), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(375), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1904] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(377), 1,
      sym_arrow,
    ACTIONS(379), 1,
      sym_colon,
    ACTIONS(381), 1,
      sym_snake_name,
    STATE(234), 1,
      sym_inline_agic,
    STATE(1023), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1927] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(377), 1,
      sym_arrow,
    ACTIONS(379), 1,
      sym_colon,
    ACTIONS(381), 1,
      sym_snake_name,
    STATE(235), 1,
      sym_inline_agic,
    STATE(1024), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1950] = 5,
    ACTIONS(383), 1,
      sym_blank_line,
    ACTIONS(385), 1,
      sym__comment_start,
    ACTIONS(389), 1,
      sym__directive_start,
    ACTIONS(387), 2,
      sym__dedent,
      sym__line_start,
    STATE(80), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1969] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(377), 1,
      sym_arrow,
    ACTIONS(379), 1,
      sym_colon,
    ACTIONS(391), 1,
      sym_flow_using_keyword,
    STATE(237), 1,
      sym_inline_agic,
    STATE(1033), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [1992] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(393), 1,
      sym_flow_using_keyword,
    ACTIONS(395), 1,
      sym_arrow,
    ACTIONS(397), 1,
      sym_colon,
    STATE(782), 1,
      sym_inline_agic,
    STATE(968), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2015] = 5,
    ACTIONS(123), 1,
      sym__flow_raw_text,
    ACTIONS(399), 1,
      sym_blank_line,
    STATE(73), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(401), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2034] = 5,
    ACTIONS(403), 1,
      sym_blank_line,
    ACTIONS(406), 1,
      sym__comment_start,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(409), 2,
      sym__dedent,
      sym__until_start,
    STATE(72), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2053] = 5,
    ACTIONS(414), 1,
      sym_blank_line,
    ACTIONS(419), 1,
      sym__flow_raw_text,
    STATE(73), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(417), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2072] = 6,
    ACTIONS(422), 1,
      sym_blank_line,
    ACTIONS(425), 1,
      sym__comment_start,
    ACTIONS(430), 1,
      sym__line_start,
    STATE(446), 1,
      sym_property,
    ACTIONS(428), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2093] = 5,
    ACTIONS(385), 1,
      sym__comment_start,
    ACTIONS(389), 1,
      sym__directive_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(435), 2,
      sym__dedent,
      sym__line_start,
    STATE(68), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2112] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(381), 1,
      sym_snake_name,
    ACTIONS(395), 1,
      sym_arrow,
    ACTIONS(397), 1,
      sym_colon,
    STATE(779), 1,
      sym_inline_agic,
    STATE(962), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2135] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(381), 1,
      sym_snake_name,
    ACTIONS(437), 1,
      sym_arrow,
    ACTIONS(439), 1,
      sym_colon,
    STATE(733), 1,
      sym_inline_agic,
    STATE(998), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2158] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(381), 1,
      sym_snake_name,
    ACTIONS(437), 1,
      sym_arrow,
    ACTIONS(439), 1,
      sym_colon,
    STATE(734), 1,
      sym_inline_agic,
    STATE(1000), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2181] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(437), 1,
      sym_arrow,
    ACTIONS(439), 1,
      sym_colon,
    ACTIONS(441), 1,
      sym_flow_using_keyword,
    STATE(768), 1,
      sym_inline_agic,
    STATE(1020), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2204] = 5,
    ACTIONS(443), 1,
      sym_blank_line,
    ACTIONS(446), 1,
      sym__comment_start,
    ACTIONS(451), 1,
      sym__directive_start,
    ACTIONS(449), 2,
      sym__dedent,
      sym__line_start,
    STATE(80), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2223] = 5,
    ACTIONS(454), 1,
      sym_blank_line,
    ACTIONS(457), 1,
      sym__comment_start,
    ACTIONS(462), 1,
      sym__line_start,
    ACTIONS(460), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(81), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2242] = 7,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(381), 1,
      sym_snake_name,
    ACTIONS(395), 1,
      sym_arrow,
    ACTIONS(397), 1,
      sym_colon,
    STATE(780), 1,
      sym_inline_agic,
    STATE(963), 1,
      sym_runnable,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [2265] = 5,
    ACTIONS(465), 1,
      sym_blank_line,
    ACTIONS(467), 1,
      sym__comment_start,
    ACTIONS(471), 1,
      sym__line_start,
    ACTIONS(469), 2,
      sym__dedent,
      sym__until_start,
    STATE(84), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2284] = 5,
    ACTIONS(467), 1,
      sym__comment_start,
    ACTIONS(471), 1,
      sym__line_start,
    ACTIONS(473), 1,
      sym_blank_line,
    ACTIONS(475), 2,
      sym__dedent,
      sym__until_start,
    STATE(72), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2303] = 6,
    ACTIONS(477), 1,
      sym_blank_line,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(481), 1,
      sym__dedent,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(372), 1,
      sym__from_complement,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2323] = 5,
    ACTIONS(485), 1,
      sym_blank_line,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(489), 1,
      sym__dedent,
    ACTIONS(491), 1,
      sym__line_start,
    STATE(120), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2341] = 6,
    ACTIONS(389), 1,
      sym__directive_start,
    ACTIONS(493), 1,
      sym__line_start,
    STATE(75), 1,
      sym_directive,
    STATE(86), 1,
      sym_message,
    STATE(905), 1,
      sym__directives,
    STATE(1347), 2,
      sym_messages,
      sym__pass_statement,
  [2361] = 7,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(495), 1,
      sym_text_line,
    STATE(569), 1,
      sym_instruct_body,
    STATE(584), 1,
      sym_text_inline,
    STATE(908), 1,
      sym_line_end,
    STATE(918), 1,
      sym_text_block,
  [2383] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(483), 1,
      sym__from_start,
    ACTIONS(497), 1,
      sym_blank_line,
    ACTIONS(499), 1,
      sym__dedent,
    STATE(246), 1,
      sym__from_complement,
    STATE(247), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2403] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(501), 1,
      sym_blank_line,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(518), 1,
      sym__implicit_run_line,
    ACTIONS(401), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2421] = 5,
    ACTIONS(409), 1,
      sym__dedent,
    ACTIONS(503), 1,
      sym_blank_line,
    ACTIONS(506), 1,
      sym__comment_start,
    ACTIONS(509), 1,
      sym__line_start,
    STATE(91), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2439] = 5,
    ACTIONS(514), 1,
      sym_blank_line,
    ACTIONS(516), 1,
      sym__comment_start,
    ACTIONS(518), 1,
      sym__indent,
    ACTIONS(512), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2457] = 5,
    ACTIONS(520), 1,
      sym_blank_line,
    ACTIONS(523), 1,
      sym__comment_start,
    ACTIONS(526), 1,
      sym__dedent,
    ACTIONS(528), 1,
      sym__line_start,
    STATE(93), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2475] = 5,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym_blank_line,
    ACTIONS(533), 1,
      sym__dedent,
    ACTIONS(535), 1,
      sym__line_start,
    STATE(93), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2493] = 5,
    ACTIONS(537), 1,
      sym_blank_line,
    ACTIONS(542), 1,
      sym__agic_raw_text,
    STATE(95), 1,
      aux_sym_unroled_message_repeat1,
    STATE(232), 1,
      sym__unroled_message_line,
    ACTIONS(540), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2511] = 5,
    ACTIONS(545), 1,
      sym_blank_line,
    ACTIONS(548), 1,
      sym__flow_raw_text,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(518), 1,
      sym__implicit_run_line,
    ACTIONS(417), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2529] = 5,
    ACTIONS(469), 1,
      sym__dedent,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(551), 1,
      sym_blank_line,
    ACTIONS(553), 1,
      sym__line_start,
    STATE(134), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2547] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(555), 1,
      sym_blank_line,
    ACTIONS(557), 1,
      sym__dedent,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(444), 1,
      sym__until_complement,
    STATE(445), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2567] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(561), 1,
      sym_blank_line,
    ACTIONS(563), 1,
      sym__dedent,
    STATE(456), 1,
      sym__until_complement,
    STATE(458), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2587] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(565), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym__dedent,
    STATE(460), 1,
      sym__until_complement,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2607] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(569), 1,
      sym_blank_line,
    ACTIONS(571), 1,
      sym__dedent,
    STATE(475), 1,
      sym__until_complement,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2627] = 5,
    ACTIONS(435), 1,
      sym__line_start,
    ACTIONS(573), 1,
      sym_blank_line,
    ACTIONS(575), 1,
      sym__comment_start,
    ACTIONS(577), 1,
      sym__directive_start,
    STATE(105), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2645] = 4,
    ACTIONS(581), 1,
      sym_blank_line,
    ACTIONS(584), 1,
      sym__comment_start,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(579), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2661] = 5,
    ACTIONS(469), 1,
      sym__until_start,
    ACTIONS(587), 1,
      sym_blank_line,
    ACTIONS(589), 1,
      sym__comment_start,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2679] = 5,
    ACTIONS(387), 1,
      sym__line_start,
    ACTIONS(575), 1,
      sym__comment_start,
    ACTIONS(577), 1,
      sym__directive_start,
    ACTIONS(593), 1,
      sym_blank_line,
    STATE(108), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2697] = 5,
    ACTIONS(89), 1,
      sym__flow_raw_text,
    ACTIONS(595), 1,
      sym_blank_line,
    STATE(109), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(375), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2715] = 5,
    ACTIONS(475), 1,
      sym__until_start,
    ACTIONS(589), 1,
      sym__comment_start,
    ACTIONS(591), 1,
      sym__line_start,
    ACTIONS(597), 1,
      sym_blank_line,
    STATE(110), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2733] = 5,
    ACTIONS(449), 1,
      sym__line_start,
    ACTIONS(599), 1,
      sym_blank_line,
    ACTIONS(602), 1,
      sym__comment_start,
    ACTIONS(605), 1,
      sym__directive_start,
    STATE(108), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2751] = 5,
    ACTIONS(89), 1,
      sym__flow_raw_text,
    ACTIONS(608), 1,
      sym_blank_line,
    STATE(111), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(401), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2769] = 5,
    ACTIONS(409), 1,
      sym__until_start,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(616), 1,
      sym__line_start,
    STATE(110), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2787] = 5,
    ACTIONS(619), 1,
      sym_blank_line,
    ACTIONS(622), 1,
      sym__flow_raw_text,
    STATE(111), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(417), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2805] = 6,
    ACTIONS(577), 1,
      sym__directive_start,
    ACTIONS(625), 1,
      sym__line_start,
    STATE(97), 1,
      sym__flow_statement,
    STATE(102), 1,
      sym_directive,
    STATE(1135), 1,
      sym__directives,
    STATE(1385), 2,
      sym_statements,
      sym__pass_statement,
  [2825] = 5,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym__line_start,
    ACTIONS(627), 1,
      sym_blank_line,
    ACTIONS(629), 1,
      sym__dedent,
    STATE(135), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2843] = 3,
    ACTIONS(123), 1,
      sym__flow_raw_text,
    STATE(202), 1,
      sym__implicit_run_line,
    ACTIONS(401), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2857] = 5,
    ACTIONS(516), 1,
      sym__comment_start,
    ACTIONS(633), 1,
      sym_blank_line,
    ACTIONS(635), 1,
      sym__indent,
    ACTIONS(631), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(132), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2875] = 5,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    ACTIONS(637), 1,
      sym_blank_line,
    STATE(153), 1,
      aux_sym_unroled_message_repeat1,
    STATE(232), 1,
      sym__unroled_message_line,
    ACTIONS(639), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2893] = 3,
    ACTIONS(123), 1,
      sym__flow_raw_text,
    STATE(202), 1,
      sym__implicit_run_line,
    ACTIONS(641), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2907] = 6,
    ACTIONS(389), 1,
      sym__directive_start,
    ACTIONS(493), 1,
      sym__line_start,
    STATE(75), 1,
      sym_directive,
    STATE(86), 1,
      sym_message,
    STATE(652), 1,
      sym__directives,
    STATE(1377), 2,
      sym_messages,
      sym__pass_statement,
  [2927] = 5,
    ACTIONS(645), 1,
      sym__module_doc_start,
    ACTIONS(647), 1,
      sym__item_doc_start,
    ACTIONS(649), 1,
      sym__param_item_doc_start,
    ACTIONS(643), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(1088), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2945] = 5,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(651), 1,
      sym_blank_line,
    ACTIONS(653), 1,
      sym__dedent,
    STATE(157), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2963] = 7,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(495), 1,
      sym_text_line,
    STATE(748), 1,
      sym_context_body,
    STATE(908), 1,
      sym_line_end,
    STATE(917), 1,
      sym_text_inline,
    STATE(918), 1,
      sym_text_block,
  [2985] = 5,
    ACTIONS(516), 1,
      sym__comment_start,
    ACTIONS(657), 1,
      sym_blank_line,
    ACTIONS(659), 1,
      sym__indent,
    ACTIONS(655), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3003] = 6,
    ACTIONS(577), 1,
      sym__directive_start,
    ACTIONS(625), 1,
      sym__line_start,
    STATE(97), 1,
      sym__flow_statement,
    STATE(102), 1,
      sym_directive,
    STATE(979), 1,
      sym__directives,
    STATE(1343), 2,
      sym_statements,
      sym__pass_statement,
  [3023] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(483), 1,
      sym__from_start,
    ACTIONS(661), 1,
      sym_blank_line,
    ACTIONS(663), 1,
      sym__dedent,
    STATE(399), 1,
      sym__from_complement,
    STATE(400), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3043] = 7,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(495), 1,
      sym_text_line,
    STATE(908), 1,
      sym_line_end,
    STATE(914), 1,
      sym_context_body,
    STATE(917), 1,
      sym_text_inline,
    STATE(918), 1,
      sym_text_block,
  [3065] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(665), 1,
      sym_blank_line,
    ACTIONS(667), 1,
      sym__dedent,
    STATE(417), 1,
      sym__until_complement,
    STATE(418), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3085] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(669), 1,
      sym_blank_line,
    ACTIONS(671), 1,
      sym__dedent,
    STATE(426), 1,
      sym__until_complement,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3105] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(673), 1,
      sym_blank_line,
    ACTIONS(675), 1,
      sym__dedent,
    STATE(428), 1,
      sym__until_complement,
    STATE(429), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3125] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(677), 1,
      sym_blank_line,
    ACTIONS(679), 1,
      sym__dedent,
    STATE(434), 1,
      sym__until_complement,
    STATE(435), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3145] = 5,
    ACTIONS(683), 1,
      sym__module_doc_start,
    ACTIONS(685), 1,
      sym__item_doc_start,
    ACTIONS(687), 1,
      sym__param_item_doc_start,
    ACTIONS(681), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(543), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3163] = 7,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(495), 1,
      sym_text_line,
    STATE(584), 1,
      sym_text_inline,
    STATE(751), 1,
      sym_instruct_body,
    STATE(908), 1,
      sym_line_end,
    STATE(918), 1,
      sym_text_block,
  [3185] = 5,
    ACTIONS(514), 1,
      sym_blank_line,
    ACTIONS(516), 1,
      sym__comment_start,
    ACTIONS(691), 1,
      sym__indent,
    ACTIONS(689), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3203] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(693), 1,
      sym_blank_line,
    STATE(90), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(518), 1,
      sym__implicit_run_line,
    ACTIONS(375), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3221] = 5,
    ACTIONS(475), 1,
      sym__dedent,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(553), 1,
      sym__line_start,
    ACTIONS(695), 1,
      sym_blank_line,
    STATE(91), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3239] = 5,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym_blank_line,
    ACTIONS(535), 1,
      sym__line_start,
    ACTIONS(697), 1,
      sym__dedent,
    STATE(93), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3257] = 5,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym__line_start,
    ACTIONS(697), 1,
      sym__dedent,
    ACTIONS(699), 1,
      sym_blank_line,
    STATE(94), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3275] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(483), 1,
      sym__from_start,
    ACTIONS(701), 1,
      sym_blank_line,
    ACTIONS(703), 1,
      sym__dedent,
    STATE(471), 1,
      sym__from_complement,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3295] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(483), 1,
      sym__from_start,
    ACTIONS(705), 1,
      sym_blank_line,
    ACTIONS(707), 1,
      sym__dedent,
    STATE(476), 1,
      sym__from_complement,
    STATE(477), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3315] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(709), 1,
      sym_blank_line,
    ACTIONS(711), 1,
      sym__dedent,
    STATE(489), 1,
      sym__until_complement,
    STATE(490), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3335] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(713), 1,
      sym_blank_line,
    ACTIONS(715), 1,
      sym__dedent,
    STATE(498), 1,
      sym__until_complement,
    STATE(499), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3355] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(717), 1,
      sym_blank_line,
    ACTIONS(719), 1,
      sym__dedent,
    STATE(500), 1,
      sym__until_complement,
    STATE(501), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3375] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__until_start,
    ACTIONS(721), 1,
      sym_blank_line,
    ACTIONS(723), 1,
      sym__dedent,
    STATE(506), 1,
      sym__until_complement,
    STATE(507), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3395] = 5,
    ACTIONS(727), 1,
      sym__module_doc_start,
    ACTIONS(729), 1,
      sym__item_doc_start,
    ACTIONS(731), 1,
      sym__param_item_doc_start,
    ACTIONS(725), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(331), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3413] = 5,
    ACTIONS(735), 1,
      sym__module_doc_start,
    ACTIONS(737), 1,
      sym__item_doc_start,
    ACTIONS(739), 1,
      sym__param_item_doc_start,
    ACTIONS(733), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(341), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3431] = 5,
    ACTIONS(743), 1,
      sym__module_doc_start,
    ACTIONS(745), 1,
      sym__item_doc_start,
    ACTIONS(747), 1,
      sym__param_item_doc_start,
    ACTIONS(741), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(671), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3449] = 5,
    ACTIONS(751), 1,
      sym__module_doc_start,
    ACTIONS(753), 1,
      sym__item_doc_start,
    ACTIONS(755), 1,
      sym__param_item_doc_start,
    ACTIONS(749), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(679), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3467] = 5,
    ACTIONS(759), 1,
      sym__module_doc_start,
    ACTIONS(761), 1,
      sym__item_doc_start,
    ACTIONS(763), 1,
      sym__param_item_doc_start,
    ACTIONS(757), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(934), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3485] = 5,
    ACTIONS(767), 1,
      sym__module_doc_start,
    ACTIONS(769), 1,
      sym__item_doc_start,
    ACTIONS(771), 1,
      sym__param_item_doc_start,
    ACTIONS(765), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(940), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3503] = 5,
    ACTIONS(775), 1,
      sym__module_doc_start,
    ACTIONS(777), 1,
      sym__item_doc_start,
    ACTIONS(779), 1,
      sym__param_item_doc_start,
    ACTIONS(773), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(689), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3521] = 5,
    ACTIONS(783), 1,
      sym__module_doc_start,
    ACTIONS(785), 1,
      sym__item_doc_start,
    ACTIONS(787), 1,
      sym__param_item_doc_start,
    ACTIONS(781), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(357), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3539] = 5,
    ACTIONS(791), 1,
      sym__module_doc_start,
    ACTIONS(793), 1,
      sym__item_doc_start,
    ACTIONS(795), 1,
      sym__param_item_doc_start,
    ACTIONS(789), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(593), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3557] = 4,
    STATE(560), 1,
      sym_recall_source,
    STATE(982), 1,
      sym_recall_value,
    ACTIONS(797), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(799), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3573] = 5,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    ACTIONS(801), 1,
      sym_blank_line,
    STATE(95), 1,
      aux_sym_unroled_message_repeat1,
    STATE(232), 1,
      sym__unroled_message_line,
    ACTIONS(803), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3591] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 1,
      sym_blank_line,
    STATE(156), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3609] = 4,
    STATE(560), 1,
      sym_recall_source,
    STATE(1080), 1,
      sym_recall_value,
    ACTIONS(797), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(799), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3625] = 5,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      sym_blank_line,
    ACTIONS(814), 1,
      sym__comment_start,
    ACTIONS(817), 1,
      sym__line_start,
    STATE(156), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3643] = 5,
    ACTIONS(820), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(826), 1,
      sym__dedent,
    ACTIONS(828), 1,
      sym__line_start,
    STATE(157), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3661] = 6,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(483), 1,
      sym__from_start,
    ACTIONS(831), 1,
      sym_blank_line,
    ACTIONS(833), 1,
      sym__dedent,
    STATE(404), 1,
      sym__from_complement,
    STATE(405), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3681] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(151), 1,
      sym_text_line,
    ACTIONS(153), 1,
      sym_newline,
    STATE(558), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
    STATE(925), 1,
      sym_text_block,
  [3700] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(835), 1,
      sym_flow_using_keyword,
    STATE(393), 1,
      sym__named_using_complement,
    STATE(786), 1,
      sym__inline_using_complement,
    STATE(787), 1,
      sym__using_complements,
    STATE(975), 1,
      sym__lanes_complement,
  [3719] = 5,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(369), 1,
      sym_flow_using_keyword,
    STATE(774), 1,
      sym__inline_using_complement,
    STATE(1028), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [3736] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(725), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3753] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(181), 1,
      sym_text_line,
    STATE(651), 1,
      sym_text_block,
    STATE(801), 1,
      sym_text_inline,
    STATE(862), 1,
      sym_line_end,
  [3772] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(835), 1,
      sym_flow_using_keyword,
    STATE(393), 1,
      sym__named_using_complement,
    STATE(786), 1,
      sym__inline_using_complement,
    STATE(804), 1,
      sym__using_complements,
    STATE(975), 1,
      sym__lanes_complement,
  [3791] = 6,
    ACTIONS(843), 1,
      sym_arrow,
    ACTIONS(845), 1,
      sym_colon,
    ACTIONS(847), 1,
      sym_snake_name,
    STATE(158), 1,
      sym__settle_inline_block,
    STATE(573), 1,
      sym_runnable,
    STATE(807), 1,
      sym__settle_inline_line,
  [3810] = 6,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(853), 1,
      sym_colon,
    STATE(1066), 1,
      sym__repeat_count_complement,
    STATE(1311), 1,
      sym__window_complement,
  [3829] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(855), 1,
      sym_flow_by_keyword,
    STATE(402), 1,
      sym__named_by_complement,
    STATE(820), 1,
      sym__inline_by_complement,
    STATE(821), 1,
      sym__by_complements,
    STATE(992), 1,
      sym__lanes_complement,
  [3848] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(727), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3865] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(151), 1,
      sym_text_line,
    ACTIONS(153), 1,
      sym_newline,
    STATE(571), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
    STATE(925), 1,
      sym_text_block,
  [3884] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(181), 1,
      sym_text_line,
    STATE(651), 1,
      sym_text_block,
    STATE(844), 1,
      sym_text_inline,
    STATE(862), 1,
      sym_line_end,
  [3903] = 3,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    STATE(536), 1,
      sym__unroled_message_line,
    ACTIONS(857), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3916] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(859), 1,
      sym_flow_using_keyword,
    STATE(464), 1,
      sym__named_using_complement,
    STATE(575), 1,
      sym__using_complements,
    STATE(822), 1,
      sym__inline_using_complement,
    STATE(1053), 1,
      sym__lanes_complement,
  [3935] = 3,
    ACTIONS(89), 1,
      sym__flow_raw_text,
    STATE(527), 1,
      sym__implicit_run_line,
    ACTIONS(401), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3948] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(922), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3965] = 6,
    ACTIONS(861), 1,
      sym_arrow,
    ACTIONS(863), 1,
      sym_colon,
    ACTIONS(865), 1,
      sym_lparen,
    ACTIONS(867), 1,
      sym_snake_name,
    STATE(624), 1,
      sym_agic_name,
    STATE(1141), 1,
      sym_params,
  [3984] = 3,
    ACTIONS(89), 1,
      sym__flow_raw_text,
    STATE(527), 1,
      sym__implicit_run_line,
    ACTIONS(641), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3997] = 4,
    ACTIONS(869), 1,
      sym_array_suffix,
    STATE(204), 1,
      aux_sym_type_repeat1,
    STATE(765), 1,
      sym_type_suffix,
    ACTIONS(871), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4012] = 4,
    ACTIONS(217), 1,
      sym_newline,
    STATE(203), 1,
      sym__order_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(873), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4027] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(275), 1,
      sym__implicit_run_line,
    ACTIONS(641), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4040] = 5,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(357), 1,
      sym_flow_using_keyword,
    STATE(238), 1,
      sym__inline_using_complement,
    STATE(1035), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [4057] = 6,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(875), 1,
      sym_arrow,
    ACTIONS(877), 1,
      sym_colon,
    STATE(85), 1,
      sym__settle_inline_block,
    STATE(573), 1,
      sym_runnable,
    STATE(578), 1,
      sym__settle_inline_line,
  [4076] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(767), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4093] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(626), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4110] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(912), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4127] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(913), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4144] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(209), 1,
      sym_text_line,
    STATE(250), 1,
      sym_text_inline,
    STATE(347), 1,
      sym_text_block,
    STATE(866), 1,
      sym_line_end,
  [4163] = 6,
    ACTIONS(883), 1,
      sym_flow_using_keyword,
    ACTIONS(885), 1,
      sym_arrow,
    ACTIONS(887), 1,
      sym_colon,
    STATE(137), 1,
      sym__settle_inline_block,
    STATE(239), 1,
      sym__settle_inline_line,
    STATE(814), 1,
      sym__named_using_complement,
  [4182] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(889), 1,
      sym_flow_using_keyword,
    STATE(240), 1,
      sym__inline_using_complement,
    STATE(241), 1,
      sym__using_complements,
    STATE(465), 1,
      sym__named_using_complement,
    STATE(1039), 1,
      sym__lanes_complement,
  [4201] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(151), 1,
      sym_text_line,
    ACTIONS(153), 1,
      sym_newline,
    STATE(565), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
    STATE(925), 1,
      sym_text_block,
  [4220] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(891), 1,
      sym_blank_line,
    ACTIONS(893), 1,
      sym__indent,
    STATE(598), 1,
      sym_struct_body,
    STATE(449), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4237] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(209), 1,
      sym_text_line,
    STATE(254), 1,
      sym_text_inline,
    STATE(347), 1,
      sym_text_block,
    STATE(866), 1,
      sym_line_end,
  [4256] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(889), 1,
      sym_flow_using_keyword,
    STATE(240), 1,
      sym__inline_using_complement,
    STATE(257), 1,
      sym__using_complements,
    STATE(465), 1,
      sym__named_using_complement,
    STATE(1039), 1,
      sym__lanes_complement,
  [4275] = 6,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(885), 1,
      sym_arrow,
    ACTIONS(887), 1,
      sym_colon,
    STATE(138), 1,
      sym__settle_inline_block,
    STATE(260), 1,
      sym__settle_inline_line,
    STATE(573), 1,
      sym_runnable,
  [4294] = 1,
    ACTIONS(895), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4303] = 6,
    ACTIONS(843), 1,
      sym_arrow,
    ACTIONS(845), 1,
      sym_colon,
    ACTIONS(897), 1,
      sym_flow_using_keyword,
    STATE(124), 1,
      sym__settle_inline_block,
    STATE(737), 1,
      sym__named_using_complement,
    STATE(784), 1,
      sym__settle_inline_line,
  [4322] = 4,
    ACTIONS(899), 1,
      sym_array_suffix,
    STATE(196), 1,
      aux_sym_type_repeat1,
    STATE(765), 1,
      sym_type_suffix,
    ACTIONS(902), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4337] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(151), 1,
      sym_text_line,
    ACTIONS(153), 1,
      sym_newline,
    STATE(641), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
    STATE(925), 1,
      sym_text_block,
  [4356] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(209), 1,
      sym_text_line,
    STATE(292), 1,
      sym_text_inline,
    STATE(347), 1,
      sym_text_block,
    STATE(866), 1,
      sym_line_end,
  [4375] = 1,
    ACTIONS(904), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4384] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(906), 1,
      sym_text_line,
    STATE(785), 1,
      sym_line_end,
    STATE(1013), 1,
      sym_text_block,
    STATE(1037), 1,
      sym_text_inline,
  [4403] = 6,
    ACTIONS(875), 1,
      sym_arrow,
    ACTIONS(877), 1,
      sym_colon,
    ACTIONS(908), 1,
      sym_flow_using_keyword,
    STATE(89), 1,
      sym__settle_inline_block,
    STATE(791), 1,
      sym__settle_inline_line,
    STATE(793), 1,
      sym__named_using_complement,
  [4422] = 1,
    ACTIONS(910), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4431] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(912), 1,
      sym_flow_by_keyword,
    STATE(273), 1,
      sym__named_by_complement,
    STATE(595), 1,
      sym__inline_by_complement,
    STATE(596), 1,
      sym__by_complements,
    STATE(953), 1,
      sym__lanes_complement,
  [4450] = 4,
    ACTIONS(869), 1,
      sym_array_suffix,
    STATE(196), 1,
      aux_sym_type_repeat1,
    STATE(765), 1,
      sym_type_suffix,
    ACTIONS(914), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4465] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(275), 1,
      sym__implicit_run_line,
    ACTIONS(401), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4478] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(906), 1,
      sym_text_line,
    STATE(785), 1,
      sym_line_end,
    STATE(1013), 1,
      sym_text_block,
    STATE(1076), 1,
      sym_text_inline,
  [4497] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(859), 1,
      sym_flow_using_keyword,
    STATE(464), 1,
      sym__named_using_complement,
    STATE(822), 1,
      sym__inline_using_complement,
    STATE(823), 1,
      sym__using_complements,
    STATE(1053), 1,
      sym__lanes_complement,
  [4516] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(712), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4533] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(717), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4550] = 6,
    ACTIONS(865), 1,
      sym_lparen,
    ACTIONS(916), 1,
      sym_arrow,
    ACTIONS(918), 1,
      sym_colon,
    ACTIONS(920), 1,
      sym_snake_name,
    STATE(661), 1,
      sym_flow_name,
    STATE(1234), 1,
      sym_params,
  [4569] = 5,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(335), 1,
      sym_flow_using_keyword,
    STATE(783), 1,
      sym__inline_using_complement,
    STATE(971), 1,
      sym__named_using_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [4586] = 4,
    ACTIONS(217), 1,
      sym_newline,
    STATE(167), 1,
      sym__order_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(873), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4601] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(670), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4618] = 4,
    ACTIONS(217), 1,
      sym_newline,
    STATE(225), 1,
      sym__order_complement,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(873), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4633] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(824), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4650] = 3,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    STATE(536), 1,
      sym__unroled_message_line,
    ACTIONS(803), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4663] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(580), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4680] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(686), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4697] = 5,
    ACTIONS(837), 1,
      sym_blank_line,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(841), 1,
      sym__indent,
    STATE(603), 1,
      sym_flow_body,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4714] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(910), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4731] = 6,
    ACTIONS(125), 1,
      sym__inline_comment,
    ACTIONS(153), 1,
      sym_newline,
    ACTIONS(181), 1,
      sym_text_line,
    STATE(651), 1,
      sym_text_block,
    STATE(796), 1,
      sym_text_inline,
    STATE(862), 1,
      sym_line_end,
  [4750] = 6,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(922), 1,
      sym_colon,
    STATE(1130), 1,
      sym__repeat_count_complement,
    STATE(1386), 1,
      sym__window_complement,
  [4769] = 5,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(881), 1,
      sym__indent,
    STATE(563), 1,
      sym_agic_body,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4786] = 6,
    ACTIONS(319), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(924), 1,
      sym_colon,
    STATE(1133), 1,
      sym__repeat_count_complement,
    STATE(1389), 1,
      sym__window_complement,
  [4805] = 6,
    ACTIONS(345), 1,
      sym_flow_in_keyword,
    ACTIONS(926), 1,
      sym_flow_by_keyword,
    STATE(271), 1,
      sym__inline_by_complement,
    STATE(272), 1,
      sym__by_complements,
    STATE(474), 1,
      sym__named_by_complement,
    STATE(1054), 1,
      sym__lanes_complement,
  [4824] = 4,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(928), 1,
      sym_snake_name,
    STATE(385), 1,
      sym_agent,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [4838] = 4,
    ACTIONS(579), 1,
      sym__dedent,
    ACTIONS(930), 1,
      sym_blank_line,
    ACTIONS(933), 1,
      sym__comment_start,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4852] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(936), 1,
      sym_blank_line,
    ACTIONS(938), 1,
      sym__dedent,
    STATE(535), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4866] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4874] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4882] = 4,
    ACTIONS(946), 1,
      sym_rparen,
    STATE(622), 1,
      sym_param_name,
    STATE(931), 1,
      sym_param,
    ACTIONS(944), 2,
      anon_sym__,
      sym_snake_name,
  [4896] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [4904] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(952), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4918] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4926] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4934] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4942] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4950] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4958] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4966] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4974] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4982] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4990] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4998] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5006] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(978), 1,
      sym__comment_start,
    ACTIONS(980), 1,
      sym__settle_indent,
    STATE(375), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5020] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(982), 1,
      sym_blank_line,
    ACTIONS(984), 1,
      sym__dedent,
    STATE(376), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5034] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(988), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5048] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5056] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(631), 1,
      sym_inline_agic,
    STATE(1001), 1,
      sym_runnable,
  [5072] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5080] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5088] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5096] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5104] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5112] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5120] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5168] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5176] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(1024), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 1,
    ACTIONS(1026), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5200] = 1,
    ACTIONS(1028), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5208] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5216] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5224] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5232] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5240] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5248] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5256] = 5,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(632), 1,
      sym_line_end,
    STATE(1002), 1,
      sym__lanes_complement,
  [5272] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1048), 1,
      sym_blank_line,
    ACTIONS(1050), 1,
      sym__indent,
    STATE(378), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5286] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5294] = 1,
    ACTIONS(1052), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(1054), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5414] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5494] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5502] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5526] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5534] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5542] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5550] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5558] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5566] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5574] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5582] = 1,
    ACTIONS(1124), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5590] = 1,
    ACTIONS(1126), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5598] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5606] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5614] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5622] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5630] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5638] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5646] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5654] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5662] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5670] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5678] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5686] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5694] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5702] = 1,
    ACTIONS(1154), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5710] = 1,
    ACTIONS(1156), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5718] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5726] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5734] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5742] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5750] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5758] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5766] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5774] = 1,
    ACTIONS(1172), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5782] = 1,
    ACTIONS(1174), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5790] = 1,
    ACTIONS(1176), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5798] = 4,
    ACTIONS(579), 1,
      sym__settle_indent,
    ACTIONS(1178), 1,
      sym_blank_line,
    ACTIONS(1181), 1,
      sym__comment_start,
    STATE(339), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5812] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(570), 1,
      sym_inline_agic,
    STATE(1116), 1,
      sym_runnable,
  [5828] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5836] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5844] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5852] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5860] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5868] = 1,
    ACTIONS(1172), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5876] = 1,
    ACTIONS(1184), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5884] = 1,
    ACTIONS(1186), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5892] = 1,
    ACTIONS(1188), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5900] = 1,
    ACTIONS(1190), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5908] = 1,
    ACTIONS(1192), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5916] = 1,
    ACTIONS(259), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5924] = 1,
    ACTIONS(1174), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5932] = 1,
    ACTIONS(1176), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5940] = 1,
    ACTIONS(1174), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5948] = 1,
    ACTIONS(1176), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5956] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5964] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5972] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5980] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5988] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5996] = 1,
    ACTIONS(1172), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6004] = 1,
    ACTIONS(1174), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6012] = 1,
    ACTIONS(1176), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6020] = 4,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(928), 1,
      sym_snake_name,
    STATE(340), 1,
      sym_agent,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [6034] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1196), 1,
      sym__dedent,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6048] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1200), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6062] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(572), 1,
      sym_inline_agic,
    STATE(573), 1,
      sym_runnable,
  [6078] = 1,
    ACTIONS(1202), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6086] = 1,
    ACTIONS(1204), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6094] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1206), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6108] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1208), 1,
      sym_blank_line,
    ACTIONS(1210), 1,
      sym__dedent,
    STATE(384), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6122] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1212), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6136] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1216), 1,
      sym_text_line,
    ACTIONS(1218), 1,
      sym_newline,
    STATE(386), 1,
      sym_line_end,
    STATE(648), 1,
      sym__settle_line,
  [6152] = 4,
    ACTIONS(978), 1,
      sym__comment_start,
    ACTIONS(1220), 1,
      sym_blank_line,
    ACTIONS(1222), 1,
      sym__settle_indent,
    STATE(339), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6166] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1224), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6180] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1226), 1,
      sym_blank_line,
    ACTIONS(1228), 1,
      sym__indent,
    STATE(390), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6194] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6208] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(779), 1,
      sym_inline_agic,
    STATE(962), 1,
      sym_runnable,
  [6224] = 5,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    ACTIONS(1236), 1,
      sym_flow_using_keyword,
    STATE(782), 1,
      sym_inline_agic,
    STATE(968), 1,
      sym__named_using_complement,
  [6240] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1238), 1,
      sym_blank_line,
    ACTIONS(1240), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6254] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1242), 1,
      sym_blank_line,
    ACTIONS(1244), 1,
      sym__indent,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6268] = 1,
    ACTIONS(1246), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6276] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1248), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6290] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(800), 1,
      sym_inline_agic,
    STATE(983), 1,
      sym_runnable,
  [6306] = 4,
    ACTIONS(978), 1,
      sym__comment_start,
    ACTIONS(1250), 1,
      sym_blank_line,
    ACTIONS(1252), 1,
      sym__settle_indent,
    STATE(398), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6320] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(573), 1,
      sym_runnable,
    STATE(802), 1,
      sym_inline_agic,
  [6336] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(573), 1,
      sym_runnable,
    STATE(576), 1,
      sym_inline_agic,
  [6352] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(573), 1,
      sym_runnable,
    STATE(805), 1,
      sym_inline_agic,
  [6368] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1254), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6382] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1218), 1,
      sym_newline,
    ACTIONS(1256), 1,
      sym_text_line,
    STATE(245), 1,
      sym_line_end,
    STATE(808), 1,
      sym__settle_line,
  [6398] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1258), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6412] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(811), 1,
      sym_line_end,
    STATE(986), 1,
      sym__lanes_complement,
  [6428] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(813), 1,
      sym_inline_agic,
    STATE(948), 1,
      sym_runnable,
  [6444] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(815), 1,
      sym_line_end,
    STATE(988), 1,
      sym__lanes_complement,
  [6460] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1264), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6474] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1266), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__indent,
    STATE(430), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6488] = 4,
    ACTIONS(978), 1,
      sym__comment_start,
    ACTIONS(1220), 1,
      sym_blank_line,
    ACTIONS(1270), 1,
      sym__settle_indent,
    STATE(339), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6502] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1272), 1,
      sym_blank_line,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(407), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6516] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1276), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6530] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
    STATE(841), 1,
      sym_inline_agic,
    STATE(1001), 1,
      sym_runnable,
  [6546] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(842), 1,
      sym_line_end,
    STATE(996), 1,
      sym__lanes_complement,
  [6562] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1278), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6576] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1280), 1,
      sym_blank_line,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(408), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6590] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1284), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6604] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1218), 1,
      sym_newline,
    ACTIONS(1256), 1,
      sym_text_line,
    STATE(386), 1,
      sym_line_end,
    STATE(848), 1,
      sym__settle_line,
  [6620] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1286), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6634] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6648] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1290), 1,
      sym_blank_line,
    ACTIONS(1292), 1,
      sym__dedent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6662] = 1,
    ACTIONS(1172), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6670] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1294), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6684] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1298), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6698] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1300), 1,
      sym_blank_line,
    ACTIONS(1302), 1,
      sym__dedent,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6712] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6726] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1306), 1,
      sym_blank_line,
    ACTIONS(1308), 1,
      sym__dedent,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6740] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1310), 1,
      sym_blank_line,
    ACTIONS(1312), 1,
      sym__dedent,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6754] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1314), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(425), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6768] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6782] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1320), 1,
      sym_blank_line,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(441), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6796] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1324), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6810] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6824] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1328), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6838] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6852] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1332), 1,
      sym_blank_line,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(431), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6866] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6880] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1338), 1,
      sym_blank_line,
    ACTIONS(1340), 1,
      sym__dedent,
    STATE(432), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6894] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6908] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1344), 1,
      sym_blank_line,
    ACTIONS(1346), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6922] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1348), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6936] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6950] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1352), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6964] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1354), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6978] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6992] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1358), 1,
      sym_blank_line,
    ACTIONS(1360), 1,
      sym__dedent,
    STATE(436), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7006] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1362), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7020] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1364), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7034] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1366), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7048] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1368), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7062] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1370), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7076] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1372), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(448), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7090] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7104] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1378), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(450), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7118] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1382), 1,
      sym_blank_line,
    ACTIONS(1384), 1,
      sym__dedent,
    STATE(453), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7132] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1386), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(455), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7146] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1390), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7160] = 1,
    ACTIONS(1392), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7168] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1216), 1,
      sym_text_line,
    ACTIONS(1218), 1,
      sym_newline,
    STATE(245), 1,
      sym_line_end,
    STATE(581), 1,
      sym__settle_line,
  [7184] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7198] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1396), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7212] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1398), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7226] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(234), 1,
      sym_inline_agic,
    STATE(1023), 1,
      sym_runnable,
  [7242] = 5,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    ACTIONS(1404), 1,
      sym_flow_using_keyword,
    STATE(237), 1,
      sym_inline_agic,
    STATE(1033), 1,
      sym__named_using_complement,
  [7258] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1406), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7272] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1408), 1,
      sym_blank_line,
    ACTIONS(1410), 1,
      sym__dedent,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7286] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1412), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7300] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1414), 1,
      sym_blank_line,
    ACTIONS(1416), 1,
      sym__dedent,
    STATE(469), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7314] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(253), 1,
      sym_inline_agic,
    STATE(1044), 1,
      sym_runnable,
  [7330] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1418), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7344] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(255), 1,
      sym_inline_agic,
    STATE(573), 1,
      sym_runnable,
  [7360] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1420), 1,
      sym_blank_line,
    ACTIONS(1422), 1,
      sym__dedent,
    STATE(470), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7374] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(258), 1,
      sym_inline_agic,
    STATE(573), 1,
      sym_runnable,
  [7390] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1424), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7404] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1218), 1,
      sym_newline,
    ACTIONS(1426), 1,
      sym_text_line,
    STATE(245), 1,
      sym_line_end,
    STATE(261), 1,
      sym__settle_line,
  [7420] = 5,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(586), 1,
      sym_line_end,
    STATE(946), 1,
      sym__lanes_complement,
  [7436] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(264), 1,
      sym_line_end,
    STATE(1048), 1,
      sym__lanes_complement,
  [7452] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(266), 1,
      sym_inline_agic,
    STATE(948), 1,
      sym_runnable,
  [7468] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
    STATE(1050), 1,
      sym__lanes_complement,
  [7484] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1432), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7498] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1434), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7512] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7526] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1438), 1,
      sym_blank_line,
    ACTIONS(1440), 1,
      sym__dedent,
    STATE(479), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7540] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1442), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7554] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(1400), 1,
      sym_arrow,
    ACTIONS(1402), 1,
      sym_colon,
    STATE(289), 1,
      sym_inline_agic,
    STATE(1001), 1,
      sym_runnable,
  [7570] = 5,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(290), 1,
      sym_line_end,
    STATE(1057), 1,
      sym__lanes_complement,
  [7586] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1444), 1,
      sym_blank_line,
    ACTIONS(1446), 1,
      sym__dedent,
    STATE(491), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7600] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1448), 1,
      sym_blank_line,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7614] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1452), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7628] = 5,
    ACTIONS(1214), 1,
      sym__inline_comment,
    ACTIONS(1218), 1,
      sym_newline,
    ACTIONS(1426), 1,
      sym_text_line,
    STATE(296), 1,
      sym__settle_line,
    STATE(386), 1,
      sym_line_end,
  [7644] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1454), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7658] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1456), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7672] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1458), 1,
      sym_blank_line,
    ACTIONS(1460), 1,
      sym__dedent,
    STATE(484), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7686] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1462), 1,
      sym_blank_line,
    ACTIONS(1464), 1,
      sym__dedent,
    STATE(486), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7700] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1466), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7714] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1468), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7728] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1470), 1,
      sym_blank_line,
    ACTIONS(1472), 1,
      sym__dedent,
    STATE(493), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7742] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1474), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7756] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1476), 1,
      sym_blank_line,
    ACTIONS(1478), 1,
      sym__dedent,
    STATE(494), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7770] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1480), 1,
      sym_blank_line,
    ACTIONS(1482), 1,
      sym__dedent,
    STATE(495), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7784] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1484), 1,
      sym_blank_line,
    ACTIONS(1486), 1,
      sym__dedent,
    STATE(497), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7798] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1488), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7812] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1490), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7826] = 4,
    ACTIONS(1492), 1,
      sym_array_suffix,
    STATE(502), 1,
      aux_sym_type_repeat1,
    STATE(1112), 1,
      sym_type_suffix,
    ACTIONS(871), 2,
      sym_newline,
      sym__inline_comment,
  [7840] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7854] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1496), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7868] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1498), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7882] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1500), 1,
      sym_blank_line,
    ACTIONS(1502), 1,
      sym__dedent,
    STATE(503), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7896] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1504), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7910] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1506), 1,
      sym_blank_line,
    ACTIONS(1508), 1,
      sym__dedent,
    STATE(504), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7924] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1510), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7938] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1512), 1,
      sym_blank_line,
    ACTIONS(1514), 1,
      sym__dedent,
    STATE(505), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7952] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1516), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7966] = 4,
    ACTIONS(1492), 1,
      sym_array_suffix,
    STATE(509), 1,
      aux_sym_type_repeat1,
    STATE(1112), 1,
      sym_type_suffix,
    ACTIONS(914), 2,
      sym_newline,
      sym__inline_comment,
  [7980] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1518), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7994] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1520), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8008] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1522), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8022] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1524), 1,
      sym_blank_line,
    ACTIONS(1526), 1,
      sym__dedent,
    STATE(508), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8036] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1528), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8050] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1530), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8064] = 4,
    ACTIONS(1532), 1,
      sym_array_suffix,
    STATE(509), 1,
      aux_sym_type_repeat1,
    STATE(1112), 1,
      sym_type_suffix,
    ACTIONS(902), 2,
      sym_newline,
      sym__inline_comment,
  [8078] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1535), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8092] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1537), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8106] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(588), 1,
      sym_inline_agic,
    STATE(948), 1,
      sym_runnable,
  [8122] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1539), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8136] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1541), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8150] = 5,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1044), 1,
      sym_flow_in_keyword,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(589), 1,
      sym_line_end,
    STATE(949), 1,
      sym__lanes_complement,
  [8166] = 4,
    ACTIONS(579), 1,
      sym__indent,
    ACTIONS(1543), 1,
      sym_blank_line,
    ACTIONS(1546), 1,
      sym__comment_start,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8180] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1549), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8194] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8202] = 1,
    ACTIONS(895), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8210] = 4,
    ACTIONS(1551), 1,
      sym_blank_line,
    ACTIONS(1554), 1,
      sym__dedent,
    ACTIONS(1556), 1,
      sym_indented_raw_text,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8224] = 1,
    ACTIONS(895), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8232] = 4,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1559), 1,
      sym__dedent,
    STATE(520), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8246] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8254] = 4,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(928), 1,
      sym_snake_name,
    STATE(457), 1,
      sym_agent,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [8268] = 5,
    ACTIONS(847), 1,
      sym_snake_name,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    STATE(733), 1,
      sym_inline_agic,
    STATE(998), 1,
      sym_runnable,
  [8284] = 5,
    ACTIONS(992), 1,
      sym_arrow,
    ACTIONS(994), 1,
      sym_colon,
    ACTIONS(1561), 1,
      sym_flow_using_keyword,
    STATE(768), 1,
      sym_inline_agic,
    STATE(1020), 1,
      sym__named_using_complement,
  [8300] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8308] = 1,
    ACTIONS(1563), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8316] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1565), 1,
      sym_blank_line,
    ACTIONS(1567), 1,
      sym__indent,
    STATE(531), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8330] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1569), 1,
      sym_blank_line,
    ACTIONS(1571), 1,
      sym__indent,
    STATE(532), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8344] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1573), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8358] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1575), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8372] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1577), 1,
      sym_blank_line,
    ACTIONS(1579), 1,
      sym__indent,
    STATE(534), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8386] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1581), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8400] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(986), 1,
      sym_blank_line,
    ACTIONS(1583), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8414] = 1,
    ACTIONS(1585), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8422] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1587), 1,
      sym_blank_line,
    ACTIONS(1589), 1,
      sym__indent,
    STATE(539), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8436] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1591), 1,
      sym_blank_line,
    ACTIONS(1593), 1,
      sym__indent,
    STATE(540), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8450] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1595), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8464] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1597), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8478] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1599), 1,
      sym_blank_line,
    ACTIONS(1601), 1,
      sym__indent,
    STATE(542), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8492] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1603), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8506] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8514] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1605), 1,
      sym_blank_line,
    ACTIONS(1607), 1,
      sym__indent,
    STATE(545), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8528] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1609), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8542] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1611), 1,
      sym_blank_line,
    ACTIONS(1613), 1,
      sym__indent,
    STATE(547), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8556] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1615), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8570] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1617), 1,
      sym_blank_line,
    ACTIONS(1619), 1,
      sym__indent,
    STATE(549), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8584] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1621), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8598] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(1623), 1,
      sym_blank_line,
    ACTIONS(1625), 1,
      sym__indent,
    STATE(551), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8612] = 4,
    ACTIONS(839), 1,
      sym__comment_start,
    ACTIONS(950), 1,
      sym_blank_line,
    ACTIONS(1627), 1,
      sym__indent,
    STATE(516), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8626] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8634] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8642] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8650] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8658] = 4,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(1629), 1,
      sym_blank_line,
    ACTIONS(1631), 1,
      sym__dedent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8672] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8679] = 1,
    ACTIONS(1633), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8686] = 1,
    ACTIONS(1635), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8693] = 3,
    ACTIONS(1639), 1,
      sym_comma,
    STATE(609), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1637), 2,
      sym_newline,
      sym__inline_comment,
  [8704] = 3,
    ACTIONS(1643), 1,
      sym_comma,
    STATE(610), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1641), 2,
      sym_newline,
      sym__inline_comment,
  [8715] = 1,
    ACTIONS(1645), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8722] = 1,
    ACTIONS(1647), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8729] = 1,
    ACTIONS(1649), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8736] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8743] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8750] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8757] = 4,
    ACTIONS(1046), 1,
      sym_newline,
    ACTIONS(1651), 1,
      sym__inline_comment,
    ACTIONS(1653), 1,
      sym_text_line,
    STATE(613), 1,
      sym_line_end,
  [8770] = 1,
    ACTIONS(1655), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8777] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8784] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8791] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8798] = 1,
    ACTIONS(1657), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8805] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8812] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8819] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8826] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8833] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8840] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1659), 1,
      sym_colon,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [8851] = 1,
    ACTIONS(1661), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8858] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8865] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8872] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1663), 1,
      sym_integer_literal,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [8883] = 1,
    ACTIONS(1665), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8890] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8897] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8904] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8911] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8918] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8925] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8932] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8939] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8946] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8953] = 1,
    ACTIONS(1667), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8960] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8967] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8974] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8981] = 1,
    ACTIONS(1669), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8988] = 1,
    ACTIONS(1671), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8995] = 1,
    ACTIONS(1673), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9002] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9009] = 1,
    ACTIONS(1675), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9016] = 1,
    ACTIONS(1677), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9023] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9030] = 1,
    ACTIONS(1679), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9037] = 1,
    ACTIONS(1681), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9044] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9051] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9058] = 3,
    ACTIONS(1639), 1,
      sym_comma,
    STATE(639), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1683), 2,
      sym_newline,
      sym__inline_comment,
  [9069] = 3,
    ACTIONS(1643), 1,
      sym_comma,
    STATE(640), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1685), 2,
      sym_newline,
      sym__inline_comment,
  [9080] = 1,
    ACTIONS(1687), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9087] = 4,
    ACTIONS(1046), 1,
      sym_newline,
    ACTIONS(1651), 1,
      sym__inline_comment,
    ACTIONS(1689), 1,
      sym_text_line,
    STATE(909), 1,
      sym_line_end,
  [9100] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9107] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9114] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9121] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9128] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9135] = 1,
    ACTIONS(1691), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9142] = 1,
    ACTIONS(1693), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9149] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1695), 1,
      sym_blank_line,
    STATE(522), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9160] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9167] = 3,
    ACTIONS(1697), 1,
      sym_optional_marker,
    ACTIONS(1699), 1,
      sym_colon,
    ACTIONS(1701), 2,
      sym_rparen,
      sym_comma,
  [9178] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9185] = 4,
    ACTIONS(865), 1,
      sym_lparen,
    ACTIONS(1703), 1,
      sym_arrow,
    ACTIONS(1705), 1,
      sym_colon,
    STATE(1165), 1,
      sym_params,
  [9198] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9205] = 1,
    ACTIONS(1707), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9212] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9219] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9226] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9233] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9240] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9247] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9254] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9261] = 1,
    ACTIONS(1709), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9268] = 1,
    ACTIONS(1711), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9275] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(924), 1,
      sym_job_body,
  [9288] = 1,
    ACTIONS(1717), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9295] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(761), 1,
      sym_job_body,
  [9308] = 3,
    ACTIONS(1721), 1,
      sym_comma,
    STATE(639), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1719), 2,
      sym_newline,
      sym__inline_comment,
  [9319] = 3,
    ACTIONS(1726), 1,
      sym_comma,
    STATE(640), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1724), 2,
      sym_newline,
      sym__inline_comment,
  [9330] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9337] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9344] = 4,
    ACTIONS(1046), 1,
      sym_newline,
    ACTIONS(1651), 1,
      sym__inline_comment,
    ACTIONS(1729), 1,
      sym_text_line,
    STATE(665), 1,
      sym_line_end,
  [9357] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9364] = 1,
    ACTIONS(1731), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9371] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9378] = 1,
    ACTIONS(1733), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9385] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9392] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1735), 1,
      sym_blank_line,
    STATE(403), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9403] = 1,
    ACTIONS(1737), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9410] = 1,
    ACTIONS(1184), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9417] = 4,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(1739), 1,
      sym__dedent,
    STATE(86), 1,
      sym_message,
    STATE(1347), 1,
      sym_messages,
  [9430] = 1,
    ACTIONS(1186), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9437] = 1,
    ACTIONS(1188), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9444] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9451] = 1,
    ACTIONS(1190), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9458] = 1,
    ACTIONS(1192), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9465] = 1,
    ACTIONS(1741), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9472] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9479] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9486] = 4,
    ACTIONS(865), 1,
      sym_lparen,
    ACTIONS(1743), 1,
      sym_arrow,
    ACTIONS(1745), 1,
      sym_colon,
    STATE(1236), 1,
      sym_params,
  [9499] = 1,
    ACTIONS(1192), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9506] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9513] = 1,
    ACTIONS(1747), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9520] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9527] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9534] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9541] = 1,
    ACTIONS(1749), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9548] = 1,
    ACTIONS(1751), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9555] = 1,
    ACTIONS(1753), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9562] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9569] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9576] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9583] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9590] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9597] = 1,
    ACTIONS(1172), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9604] = 1,
    ACTIONS(1174), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9611] = 1,
    ACTIONS(1176), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9618] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9625] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9632] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9639] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9646] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9653] = 1,
    ACTIONS(1172), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9660] = 1,
    ACTIONS(1172), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9667] = 1,
    ACTIONS(1755), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9674] = 1,
    ACTIONS(1174), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9681] = 1,
    ACTIONS(1176), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9688] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9695] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9702] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9709] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9716] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9723] = 1,
    ACTIONS(1172), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9730] = 1,
    ACTIONS(1757), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9737] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9744] = 1,
    ACTIONS(1759), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9751] = 1,
    ACTIONS(1761), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9758] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9765] = 2,
    ACTIONS(259), 1,
      sym_integer_literal,
    ACTIONS(257), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9774] = 2,
    STATE(1080), 1,
      sym_text_ref,
    ACTIONS(1763), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9783] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9790] = 1,
    ACTIONS(1174), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9797] = 1,
    ACTIONS(1176), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9804] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(707), 1,
      sym__cap_definition,
  [9817] = 4,
    ACTIONS(1765), 1,
      sym_runnable_ref,
    ACTIONS(1767), 1,
      sym_none_keyword,
    ACTIONS(1769), 1,
      sym_all_keyword,
    STATE(1079), 1,
      sym_route_value,
  [9830] = 1,
    ACTIONS(1771), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9837] = 4,
    ACTIONS(1773), 1,
      sym_blank_line,
    ACTIONS(1775), 1,
      sym__text_indent,
    STATE(764), 1,
      sym_text_body,
    STATE(1096), 1,
      aux_sym_text_body_repeat1,
  [9850] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9857] = 1,
    ACTIONS(1777), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9864] = 1,
    ACTIONS(1779), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9871] = 1,
    ACTIONS(1781), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9878] = 1,
    ACTIONS(1783), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9885] = 1,
    ACTIONS(1785), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9892] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9899] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9906] = 1,
    ACTIONS(1787), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9913] = 1,
    ACTIONS(1789), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9920] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9927] = 4,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1791), 1,
      sym__inline_comment,
    ACTIONS(1793), 1,
      sym_text_line,
    STATE(794), 1,
      sym_line_end,
  [9940] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9947] = 1,
    ACTIONS(1795), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9954] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9961] = 1,
    ACTIONS(1186), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9968] = 1,
    ACTIONS(1797), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9975] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9982] = 1,
    ACTIONS(1799), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9989] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9996] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10003] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1801), 1,
      sym_blank_line,
    STATE(371), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10014] = 1,
    ACTIONS(1803), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [10021] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10028] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10035] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10042] = 1,
    ACTIONS(1188), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10049] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10056] = 4,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1805), 1,
      sym_colon,
    STATE(810), 1,
      sym_line_end,
  [10069] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10076] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10083] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10090] = 1,
    ACTIONS(1807), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10097] = 4,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1791), 1,
      sym__inline_comment,
    ACTIONS(1809), 1,
      sym_text_line,
    STATE(828), 1,
      sym_line_end,
  [10110] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10117] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10124] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1811), 1,
      sym_blank_line,
    STATE(517), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10135] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10142] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10149] = 1,
    ACTIONS(1813), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10156] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10163] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10170] = 1,
    ACTIONS(1815), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10177] = 1,
    ACTIONS(1817), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10184] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10191] = 4,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1791), 1,
      sym__inline_comment,
    ACTIONS(1819), 1,
      sym_text_line,
    STATE(852), 1,
      sym_line_end,
  [10204] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10211] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10218] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10225] = 1,
    ACTIONS(1190), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10232] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10239] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10246] = 1,
    ACTIONS(1821), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10253] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10260] = 1,
    ACTIONS(1186), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10267] = 1,
    ACTIONS(1188), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10274] = 1,
    ACTIONS(1823), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10281] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(711), 1,
      sym__cap_definition,
  [10294] = 1,
    ACTIONS(1825), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10301] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10308] = 2,
    ACTIONS(1829), 1,
      sym_newline,
    ACTIONS(1827), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [10317] = 1,
    ACTIONS(1190), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10324] = 4,
    ACTIONS(1831), 1,
      sym__inline_comment,
    ACTIONS(1833), 1,
      sym_text_line,
    ACTIONS(1835), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [10337] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10344] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10351] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10358] = 1,
    ACTIONS(1837), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10365] = 1,
    ACTIONS(1192), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10372] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(713), 1,
      sym__cap_definition,
  [10385] = 3,
    ACTIONS(1839), 1,
      sym_colon,
    ACTIONS(1841), 1,
      sym_newline,
    ACTIONS(1833), 2,
      sym__inline_comment,
      sym_text_line,
  [10396] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10403] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10410] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10417] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10424] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10431] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10438] = 4,
    ACTIONS(1843), 1,
      sym_blank_line,
    ACTIONS(1845), 1,
      sym__text_indent,
    STATE(1016), 1,
      sym_text_body,
    STATE(1107), 1,
      aux_sym_text_body_repeat1,
  [10451] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10458] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10465] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10472] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10479] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10486] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10493] = 4,
    ACTIONS(1046), 1,
      sym_newline,
    ACTIONS(1651), 1,
      sym__inline_comment,
    ACTIONS(1847), 1,
      sym_text_line,
    STATE(695), 1,
      sym_line_end,
  [10506] = 4,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    ACTIONS(1849), 1,
      sym_colon,
    STATE(585), 1,
      sym_line_end,
  [10519] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10526] = 2,
    STATE(1263), 1,
      sym_directive_op,
    ACTIONS(1851), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10535] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10542] = 4,
    ACTIONS(1430), 1,
      sym_newline,
    ACTIONS(1853), 1,
      sym__inline_comment,
    ACTIONS(1855), 1,
      sym_text_line,
    STATE(248), 1,
      sym_line_end,
  [10555] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10562] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10569] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10576] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10583] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10590] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10597] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10604] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10611] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10618] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10625] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10632] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10639] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10646] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10653] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10660] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10667] = 4,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    ACTIONS(1857), 1,
      sym_colon,
    STATE(263), 1,
      sym_line_end,
  [10680] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10687] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10694] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10701] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10708] = 4,
    ACTIONS(1430), 1,
      sym_newline,
    ACTIONS(1853), 1,
      sym__inline_comment,
    ACTIONS(1859), 1,
      sym_text_line,
    STATE(277), 1,
      sym_line_end,
  [10721] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10728] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10735] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10742] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10749] = 1,
    ACTIONS(1861), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10756] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10763] = 1,
    ACTIONS(1202), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10770] = 1,
    ACTIONS(1204), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10777] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10784] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10791] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10798] = 4,
    ACTIONS(1430), 1,
      sym_newline,
    ACTIONS(1853), 1,
      sym__inline_comment,
    ACTIONS(1863), 1,
      sym_text_line,
    STATE(300), 1,
      sym_line_end,
  [10811] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10818] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10825] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10832] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10839] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10846] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10853] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10860] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10867] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10874] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10881] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10888] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10895] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10902] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10909] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10916] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10923] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10930] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10937] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10944] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10951] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10958] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10965] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10972] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10979] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10986] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10993] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11000] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11007] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11014] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11021] = 4,
    ACTIONS(1865), 1,
      sym_blank_line,
    ACTIONS(1867), 1,
      sym__text_indent,
    STATE(654), 1,
      sym_text_body,
    STATE(1117), 1,
      aux_sym_text_body_repeat1,
  [11034] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11041] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11048] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11055] = 4,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1871), 1,
      sym__text_indent,
    STATE(349), 1,
      sym_text_body,
    STATE(1118), 1,
      aux_sym_text_body_repeat1,
  [11068] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11075] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11082] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11089] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11096] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11103] = 1,
    ACTIONS(1873), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11110] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11117] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11124] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1875), 1,
      sym_blank_line,
    STATE(366), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11135] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1877), 1,
      sym_blank_line,
    STATE(367), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11146] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11153] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1879), 1,
      sym_colon,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [11164] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1881), 1,
      sym_integer_literal,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [11175] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11182] = 2,
    STATE(982), 1,
      sym_text_ref,
    ACTIONS(1763), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [11191] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11198] = 4,
    ACTIONS(1765), 1,
      sym_runnable_ref,
    ACTIONS(1767), 1,
      sym_none_keyword,
    ACTIONS(1769), 1,
      sym_all_keyword,
    STATE(981), 1,
      sym_route_value,
  [11211] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1883), 1,
      sym_blank_line,
    STATE(438), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11222] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1885), 1,
      sym_blank_line,
    STATE(439), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11233] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11240] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1887), 1,
      sym_colon,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [11251] = 3,
    ACTIONS(217), 1,
      sym_newline,
    ACTIONS(1889), 1,
      sym_integer_literal,
    ACTIONS(213), 2,
      sym__inline_comment,
      sym_text_line,
  [11262] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11269] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11276] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1891), 1,
      sym_blank_line,
    STATE(510), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11287] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1893), 1,
      sym_blank_line,
    STATE(511), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11298] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1895), 1,
      sym_blank_line,
    STATE(513), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11309] = 3,
    ACTIONS(1198), 1,
      sym_indented_raw_text,
    ACTIONS(1897), 1,
      sym_blank_line,
    STATE(514), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11320] = 2,
    STATE(1268), 1,
      sym_directive_op,
    ACTIONS(1851), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11329] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11336] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11343] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11350] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11357] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11364] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11371] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11378] = 4,
    ACTIONS(1713), 1,
      sym__inline_comment,
    ACTIONS(1715), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(722), 1,
      sym__cap_definition,
  [11391] = 3,
    STATE(622), 1,
      sym_param_name,
    STATE(1232), 1,
      sym_param,
    ACTIONS(944), 2,
      anon_sym__,
      sym_snake_name,
  [11402] = 4,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(1899), 1,
      sym__dedent,
    STATE(86), 1,
      sym_message,
    STATE(1338), 1,
      sym_messages,
  [11415] = 1,
    ACTIONS(1174), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11422] = 1,
    ACTIONS(1176), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11429] = 4,
    ACTIONS(1901), 1,
      sym_blank_line,
    ACTIONS(1903), 1,
      sym__text_indent,
    STATE(735), 1,
      sym_text_body,
    STATE(1022), 1,
      aux_sym_text_body_repeat1,
  [11442] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11449] = 1,
    ACTIONS(1905), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11456] = 1,
    ACTIONS(1907), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11463] = 1,
    ACTIONS(1909), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11470] = 1,
    ACTIONS(1911), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11477] = 1,
    ACTIONS(1913), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11484] = 1,
    ACTIONS(1915), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11491] = 1,
    ACTIONS(1917), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11498] = 1,
    ACTIONS(1919), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11505] = 1,
    ACTIONS(1184), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11512] = 1,
    ACTIONS(1921), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11519] = 1,
    ACTIONS(1923), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11526] = 1,
    ACTIONS(1925), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11533] = 1,
    ACTIONS(1927), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11540] = 1,
    ACTIONS(1929), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11547] = 1,
    ACTIONS(1931), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11554] = 1,
    ACTIONS(1184), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11561] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(139), 1,
      sym_statements,
  [11571] = 2,
    ACTIONS(259), 1,
      sym_all_keyword,
    ACTIONS(257), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [11579] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(621), 1,
      sym_line_end,
  [11589] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(219), 1,
      sym_line_end,
  [11599] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(377), 1,
      sym_line_end,
  [11609] = 3,
    ACTIONS(1937), 1,
      sym_rparen,
    ACTIONS(1939), 1,
      sym_comma,
    STATE(1069), 1,
      aux_sym_params_repeat1,
  [11619] = 1,
    ACTIONS(1174), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11625] = 1,
    ACTIONS(1176), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11631] = 1,
    ACTIONS(1162), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11637] = 1,
    ACTIONS(1164), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11643] = 1,
    ACTIONS(1166), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11649] = 1,
    ACTIONS(1168), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11655] = 1,
    ACTIONS(1170), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11661] = 1,
    ACTIONS(1172), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11667] = 1,
    ACTIONS(1162), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11673] = 1,
    ACTIONS(1164), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11679] = 1,
    ACTIONS(1166), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11685] = 1,
    ACTIONS(1168), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11691] = 1,
    ACTIONS(1170), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11697] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1944), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [11707] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(627), 1,
      sym_line_end,
  [11717] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(628), 1,
      sym_line_end,
  [11727] = 1,
    ACTIONS(1946), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11733] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(629), 1,
      sym_line_end,
  [11743] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(630), 1,
      sym_line_end,
  [11753] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(213), 1,
      sym_line_end,
  [11763] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [11773] = 3,
    ACTIONS(912), 1,
      sym_flow_by_keyword,
    STATE(633), 1,
      sym__inline_by_complement,
    STATE(1003), 1,
      sym__named_by_complement,
  [11783] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(381), 1,
      sym_line_end,
  [11793] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(763), 1,
      sym_line_end,
  [11803] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(382), 1,
      sym_line_end,
  [11813] = 3,
    ACTIONS(1948), 1,
      sym_rparen,
    ACTIONS(1950), 1,
      sym_comma,
    STATE(957), 1,
      aux_sym_params_repeat1,
  [11823] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(208), 1,
      sym_line_end,
  [11833] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(559), 1,
      sym_line_end,
  [11843] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(637), 1,
      sym_line_end,
  [11853] = 3,
    ACTIONS(1953), 1,
      sym__inline_comment,
    ACTIONS(1955), 1,
      sym_newline,
    STATE(383), 1,
      sym_line_end,
  [11863] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(798), 1,
      sym_line_end,
  [11873] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(799), 1,
      sym_line_end,
  [11883] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(209), 1,
      sym_line_end,
  [11893] = 3,
    ACTIONS(835), 1,
      sym_flow_using_keyword,
    STATE(783), 1,
      sym__inline_using_complement,
    STATE(971), 1,
      sym__named_using_complement,
  [11903] = 2,
    STATE(1008), 1,
      sym_recall_source,
    ACTIONS(797), 2,
      anon_sym_far,
      anon_sym_near,
  [11911] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(215), 1,
      sym_line_end,
  [11921] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(803), 1,
      sym_line_end,
  [11931] = 3,
    ACTIONS(1957), 1,
      sym_colon,
    ACTIONS(1959), 1,
      sym_snake_name,
    STATE(1314), 1,
      sym_context_name,
  [11941] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(642), 1,
      sym_line_end,
  [11951] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(806), 1,
      sym_line_end,
  [11961] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(162), 1,
      sym_line_end,
  [11971] = 1,
    ACTIONS(1961), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11977] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(168), 1,
      sym_line_end,
  [11987] = 3,
    ACTIONS(835), 1,
      sym_flow_using_keyword,
    STATE(812), 1,
      sym__inline_using_complement,
    STATE(987), 1,
      sym__named_using_complement,
  [11997] = 3,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    STATE(816), 1,
      sym__inline_if_complement,
    STATE(989), 1,
      sym__named_if_complement,
  [12007] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(817), 1,
      sym_line_end,
  [12017] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(818), 1,
      sym_line_end,
  [12027] = 3,
    ACTIONS(553), 1,
      sym__line_start,
    STATE(97), 1,
      sym__flow_statement,
    STATE(1385), 1,
      sym_statements,
  [12037] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(825), 1,
      sym_line_end,
  [12047] = 3,
    ACTIONS(1963), 1,
      sym__inline_comment,
    ACTIONS(1965), 1,
      sym_newline,
    STATE(826), 1,
      sym_line_end,
  [12057] = 3,
    ACTIONS(1963), 1,
      sym__inline_comment,
    ACTIONS(1965), 1,
      sym_newline,
    STATE(827), 1,
      sym_line_end,
  [12067] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(832), 1,
      sym_line_end,
  [12077] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(834), 1,
      sym_line_end,
  [12087] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(184), 1,
      sym_line_end,
  [12097] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(837), 1,
      sym_line_end,
  [12107] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(838), 1,
      sym_line_end,
  [12117] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(839), 1,
      sym_line_end,
  [12127] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(840), 1,
      sym_line_end,
  [12137] = 3,
    ACTIONS(1967), 1,
      sym_colon,
    ACTIONS(1969), 1,
      sym_snake_name,
    STATE(1387), 1,
      sym_instruct_name,
  [12147] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(185), 1,
      sym_line_end,
  [12157] = 3,
    ACTIONS(855), 1,
      sym_flow_by_keyword,
    STATE(843), 1,
      sym__inline_by_complement,
    STATE(997), 1,
      sym__named_by_complement,
  [12167] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(845), 1,
      sym_line_end,
  [12177] = 1,
    ACTIONS(1971), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [12183] = 1,
    ACTIONS(1973), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [12189] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(850), 1,
      sym_line_end,
  [12199] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(851), 1,
      sym_line_end,
  [12209] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(566), 1,
      sym_line_end,
  [12219] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(854), 1,
      sym_line_end,
  [12229] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(567), 1,
      sym_line_end,
  [12239] = 1,
    ACTIONS(1975), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [12245] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(659), 1,
      sym_line_end,
  [12255] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(660), 1,
      sym_line_end,
  [12265] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1237), 1,
      sym_statements,
  [12275] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(397), 1,
      sym_line_end,
  [12285] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(664), 1,
      sym_line_end,
  [12295] = 3,
    ACTIONS(859), 1,
      sym_flow_using_keyword,
    STATE(774), 1,
      sym__inline_using_complement,
    STATE(1028), 1,
      sym__named_using_complement,
  [12305] = 1,
    ACTIONS(1719), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12311] = 1,
    ACTIONS(1724), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12317] = 2,
    STATE(203), 1,
      sym__order_complement,
    ACTIONS(1977), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12325] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [12335] = 1,
    ACTIONS(1979), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [12341] = 1,
    ACTIONS(1184), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12347] = 3,
    ACTIONS(1835), 1,
      sym_newline,
    ACTIONS(1981), 1,
      sym__inline_comment,
    STATE(1015), 1,
      sym_line_end,
  [12357] = 1,
    ACTIONS(1186), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12363] = 1,
    ACTIONS(1188), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12369] = 1,
    ACTIONS(1983), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12375] = 1,
    ACTIONS(1190), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12381] = 1,
    ACTIONS(1985), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [12387] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(574), 1,
      sym_line_end,
  [12397] = 1,
    ACTIONS(1192), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12403] = 3,
    ACTIONS(1987), 1,
      sym_blank_line,
    ACTIONS(1989), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [12413] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(251), 1,
      sym_line_end,
  [12423] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(252), 1,
      sym_line_end,
  [12433] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1138), 1,
      sym_statements,
  [12443] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1139), 1,
      sym_statements,
  [12453] = 3,
    ACTIONS(889), 1,
      sym_flow_using_keyword,
    STATE(238), 1,
      sym__inline_using_complement,
    STATE(1035), 1,
      sym__named_using_complement,
  [12463] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(577), 1,
      sym_line_end,
  [12473] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(98), 1,
      sym_statements,
  [12483] = 2,
    ACTIONS(1993), 1,
      sym_newline,
    ACTIONS(1991), 2,
      sym__inline_comment,
      sym_text_line,
  [12491] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(696), 1,
      sym_line_end,
  [12501] = 2,
    ACTIONS(1997), 1,
      sym_newline,
    ACTIONS(1995), 2,
      sym__inline_comment,
      sym_text_line,
  [12509] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [12519] = 2,
    ACTIONS(2001), 1,
      sym_newline,
    ACTIONS(1999), 2,
      sym__inline_comment,
      sym_text_line,
  [12527] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(259), 1,
      sym_line_end,
  [12537] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(182), 1,
      sym_line_end,
  [12547] = 1,
    ACTIONS(2003), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12553] = 2,
    STATE(1362), 1,
      sym_param_name,
    ACTIONS(2005), 2,
      anon_sym__,
      sym_snake_name,
  [12561] = 3,
    ACTIONS(889), 1,
      sym_flow_using_keyword,
    STATE(265), 1,
      sym__inline_using_complement,
    STATE(1049), 1,
      sym__named_using_complement,
  [12571] = 3,
    ACTIONS(367), 1,
      sym_flow_if_keyword,
    STATE(268), 1,
      sym__inline_if_complement,
    STATE(1051), 1,
      sym__named_if_complement,
  [12581] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(269), 1,
      sym_line_end,
  [12591] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(270), 1,
      sym_line_end,
  [12601] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(276), 1,
      sym_line_end,
  [12611] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(280), 1,
      sym_line_end,
  [12621] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1159), 1,
      sym_statements,
  [12631] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [12641] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(99), 1,
      sym_statements,
  [12651] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(285), 1,
      sym_line_end,
  [12661] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(286), 1,
      sym_line_end,
  [12671] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(287), 1,
      sym_line_end,
  [12681] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(288), 1,
      sym_line_end,
  [12691] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(100), 1,
      sym_statements,
  [12701] = 3,
    ACTIONS(859), 1,
      sym_flow_using_keyword,
    STATE(587), 1,
      sym__inline_using_complement,
    STATE(947), 1,
      sym__named_using_complement,
  [12711] = 3,
    ACTIONS(926), 1,
      sym_flow_by_keyword,
    STATE(291), 1,
      sym__inline_by_complement,
    STATE(1058), 1,
      sym__named_by_complement,
  [12721] = 3,
    ACTIONS(2007), 1,
      sym__inline_comment,
    ACTIONS(2009), 1,
      sym_newline,
    STATE(668), 1,
      sym_line_end,
  [12731] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
  [12741] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(298), 1,
      sym_line_end,
  [12751] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(299), 1,
      sym_line_end,
  [12761] = 3,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(590), 1,
      sym__inline_if_complement,
    STATE(950), 1,
      sym__named_if_complement,
  [12771] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(302), 1,
      sym_line_end,
  [12781] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(591), 1,
      sym_line_end,
  [12791] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(190), 1,
      sym_line_end,
  [12801] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(592), 1,
      sym_line_end,
  [12811] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(274), 1,
      sym_line_end,
  [12821] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(101), 1,
      sym_statements,
  [12831] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(2011), 1,
      sym_colon,
    STATE(1368), 1,
      sym__window_complement,
  [12841] = 1,
    ACTIONS(2013), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12847] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(601), 1,
      sym_line_end,
  [12857] = 3,
    ACTIONS(1939), 1,
      sym_comma,
    ACTIONS(2015), 1,
      sym_rparen,
    STATE(957), 1,
      aux_sym_params_repeat1,
  [12867] = 2,
    ACTIONS(2017), 1,
      sym_colon,
    ACTIONS(2019), 2,
      sym_rparen,
      sym_comma,
  [12875] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(223), 1,
      sym_line_end,
  [12885] = 3,
    ACTIONS(2021), 1,
      sym_pascal_name,
    STATE(1293), 1,
      sym_struct_name,
    STATE(1336), 1,
      sym_type_name,
  [12895] = 3,
    ACTIONS(1260), 1,
      sym__inline_comment,
    ACTIONS(1262), 1,
      sym_newline,
    STATE(653), 1,
      sym_line_end,
  [12905] = 3,
    ACTIONS(1428), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_newline,
    STATE(348), 1,
      sym_line_end,
  [12915] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [12925] = 1,
    ACTIONS(2023), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12931] = 3,
    ACTIONS(2007), 1,
      sym__inline_comment,
    ACTIONS(2009), 1,
      sym_newline,
    STATE(724), 1,
      sym_line_end,
  [12941] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [12951] = 3,
    ACTIONS(2025), 1,
      sym__inline_comment,
    ACTIONS(2027), 1,
      sym_newline,
    STATE(369), 1,
      sym_line_end,
  [12961] = 3,
    ACTIONS(2025), 1,
      sym__inline_comment,
    ACTIONS(2027), 1,
      sym_newline,
    STATE(370), 1,
      sym_line_end,
  [12971] = 1,
    ACTIONS(2029), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12977] = 2,
    STATE(167), 1,
      sym__order_complement,
    ACTIONS(1977), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12985] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(126), 1,
      sym_statements,
  [12995] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(127), 1,
      sym_statements,
  [13005] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(128), 1,
      sym_statements,
  [13015] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(129), 1,
      sym_statements,
  [13025] = 2,
    STATE(225), 1,
      sym__order_complement,
    ACTIONS(1977), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [13033] = 1,
    ACTIONS(1162), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13039] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(140), 1,
      sym_statements,
  [13049] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(141), 1,
      sym_statements,
  [13059] = 3,
    ACTIONS(471), 1,
      sym__line_start,
    STATE(83), 1,
      sym__flow_statement,
    STATE(142), 1,
      sym_statements,
  [13069] = 1,
    ACTIONS(1164), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13075] = 1,
    ACTIONS(1166), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13081] = 1,
    ACTIONS(1711), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13087] = 1,
    ACTIONS(1168), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13093] = 3,
    ACTIONS(1987), 1,
      sym_blank_line,
    ACTIONS(2031), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [13103] = 1,
    ACTIONS(1170), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13109] = 1,
    ACTIONS(1172), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13115] = 1,
    ACTIONS(1174), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13121] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1199), 1,
      sym_statements,
  [13131] = 1,
    ACTIONS(1667), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13137] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1201), 1,
      sym_statements,
  [13147] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1202), 1,
      sym_statements,
  [13157] = 1,
    ACTIONS(1671), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13163] = 1,
    ACTIONS(1673), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13169] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1204), 1,
      sym_statements,
  [13179] = 3,
    ACTIONS(1987), 1,
      sym_blank_line,
    ACTIONS(2033), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [13189] = 1,
    ACTIONS(1176), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13195] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(183), 1,
      sym_line_end,
  [13205] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1211), 1,
      sym_statements,
  [13215] = 1,
    ACTIONS(1817), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13221] = 1,
    ACTIONS(1823), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13227] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1214), 1,
      sym_statements,
  [13237] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1215), 1,
      sym_statements,
  [13247] = 3,
    ACTIONS(591), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1216), 1,
      sym_statements,
  [13257] = 3,
    ACTIONS(1042), 1,
      sym__inline_comment,
    ACTIONS(1046), 1,
      sym_newline,
    STATE(616), 1,
      sym_line_end,
  [13267] = 3,
    ACTIONS(1987), 1,
      sym_blank_line,
    ACTIONS(2035), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [13277] = 3,
    ACTIONS(1987), 1,
      sym_blank_line,
    ACTIONS(2037), 1,
      sym__text_indent,
    STATE(945), 1,
      aux_sym_text_body_repeat1,
  [13287] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(529), 1,
      sym_line_end,
  [13297] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(530), 1,
      sym_line_end,
  [13307] = 1,
    ACTIONS(1997), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13313] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(533), 1,
      sym_line_end,
  [13323] = 1,
    ACTIONS(1174), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [13329] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(537), 1,
      sym_line_end,
  [13339] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(538), 1,
      sym_line_end,
  [13349] = 1,
    ACTIONS(1176), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [13355] = 2,
    ACTIONS(1829), 1,
      sym_newline,
    ACTIONS(1827), 2,
      sym__inline_comment,
      sym_text_line,
  [13363] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(541), 1,
      sym_line_end,
  [13373] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(544), 1,
      sym_line_end,
  [13383] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(2039), 1,
      sym_colon,
    STATE(1379), 1,
      sym__window_complement,
  [13393] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(546), 1,
      sym_line_end,
  [13403] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(548), 1,
      sym_line_end,
  [13413] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(2041), 1,
      sym_colon,
    STATE(1383), 1,
      sym__window_complement,
  [13423] = 3,
    ACTIONS(1933), 1,
      sym__inline_comment,
    ACTIONS(1935), 1,
      sym_newline,
    STATE(550), 1,
      sym_line_end,
  [13433] = 3,
    ACTIONS(553), 1,
      sym__line_start,
    STATE(97), 1,
      sym__flow_statement,
    STATE(1366), 1,
      sym_statements,
  [13443] = 1,
    ACTIONS(1172), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [13449] = 2,
    ACTIONS(2043), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [13456] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(442), 1,
      sym__until_complement,
  [13463] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(443), 1,
      sym__until_complement,
  [13470] = 2,
    ACTIONS(2045), 1,
      sym__snake_kebab_name,
    STATE(1384), 1,
      sym_cap_name,
  [13477] = 2,
    ACTIONS(2047), 1,
      sym_arrow,
    ACTIONS(2049), 1,
      sym_colon,
  [13484] = 1,
    ACTIONS(2051), 2,
      sym_newline,
      sym__inline_comment,
  [13489] = 1,
    ACTIONS(2053), 2,
      sym_newline,
      sym__inline_comment,
  [13494] = 1,
    ACTIONS(2055), 2,
      sym_newline,
      sym__inline_comment,
  [13499] = 2,
    ACTIONS(2045), 1,
      sym__snake_kebab_name,
    STATE(1254), 1,
      sym_cap_name,
  [13506] = 2,
    ACTIONS(89), 1,
      sym__flow_raw_text,
    STATE(527), 1,
      sym__implicit_run_line,
  [13513] = 2,
    ACTIONS(231), 1,
      sym__agic_raw_text,
    STATE(536), 1,
      sym__unroled_message_line,
  [13520] = 2,
    ACTIONS(2057), 1,
      sym__settle_text_start,
    STATE(714), 1,
      sym__settle_text_body,
  [13527] = 2,
    ACTIONS(2059), 1,
      anon_sym_EQ,
    STATE(1155), 1,
      sym_assign_operator,
  [13534] = 2,
    ACTIONS(2059), 1,
      anon_sym_EQ,
    STATE(701), 1,
      sym_assign_operator,
  [13541] = 2,
    ACTIONS(2061), 1,
      sym_snake_name,
    STATE(1154), 1,
      sym_field_name,
  [13548] = 2,
    ACTIONS(123), 1,
      sym__flow_raw_text,
    STATE(202), 1,
      sym__implicit_run_line,
  [13555] = 2,
    ACTIONS(2063), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_assign_operator,
  [13562] = 2,
    ACTIONS(2065), 1,
      sym_optional_marker,
    ACTIONS(2067), 1,
      sym_colon,
  [13569] = 1,
    ACTIONS(2069), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13574] = 2,
    ACTIONS(2071), 1,
      sym_colon,
    STATE(1067), 1,
      sym_inline_agic_body,
  [13581] = 1,
    ACTIONS(2073), 2,
      sym_arrow,
      sym_colon,
  [13586] = 1,
    ACTIONS(2075), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [13591] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(454), 1,
      sym__until_complement,
  [13598] = 2,
    ACTIONS(2077), 1,
      anon_sym_EQ,
    STATE(706), 1,
      sym_assign_operator,
  [13605] = 2,
    ACTIONS(2079), 1,
      sym_snake_name,
    STATE(340), 1,
      sym_agent,
  [13612] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1260), 1,
      sym_param_doc_tag,
  [13619] = 1,
    ACTIONS(2083), 2,
      sym_arrow,
      sym_colon,
  [13624] = 2,
    ACTIONS(535), 1,
      sym__line_start,
    STATE(136), 1,
      sym_field,
  [13631] = 2,
    ACTIONS(2085), 1,
      sym_arrow,
    ACTIONS(2087), 1,
      sym_colon,
  [13638] = 2,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(275), 1,
      sym__implicit_run_line,
  [13645] = 1,
    ACTIONS(2089), 2,
      sym_rparen,
      sym_comma,
  [13650] = 2,
    ACTIONS(2091), 1,
      sym_comment_text,
    ACTIONS(2093), 1,
      sym__comment_end,
  [13657] = 2,
    ACTIONS(2095), 1,
      sym_comment_text,
    ACTIONS(2097), 1,
      sym__comment_end,
  [13664] = 1,
    ACTIONS(1174), 2,
      sym_blank_line,
      sym__text_indent,
  [13669] = 2,
    ACTIONS(2099), 1,
      sym_text_line,
    STATE(961), 1,
      sym_property_value,
  [13676] = 2,
    ACTIONS(2101), 1,
      sym_comment_text,
    ACTIONS(2103), 1,
      sym__comment_end,
  [13683] = 2,
    ACTIONS(2105), 1,
      sym_comment_text,
    ACTIONS(2107), 1,
      sym__comment_end,
  [13690] = 1,
    ACTIONS(1971), 2,
      sym_newline,
      sym__inline_comment,
  [13695] = 1,
    ACTIONS(1973), 2,
      sym_newline,
      sym__inline_comment,
  [13700] = 2,
    ACTIONS(2109), 1,
      sym_comment_text,
    ACTIONS(2111), 1,
      sym__comment_end,
  [13707] = 2,
    ACTIONS(2113), 1,
      sym_comment_text,
    ACTIONS(2115), 1,
      sym__comment_end,
  [13714] = 2,
    ACTIONS(2117), 1,
      sym_comment_text,
    ACTIONS(2119), 1,
      sym__comment_end,
  [13721] = 2,
    ACTIONS(2121), 1,
      sym_comment_text,
    ACTIONS(2123), 1,
      sym__comment_end,
  [13728] = 2,
    ACTIONS(2125), 1,
      sym_comment_text,
    ACTIONS(2127), 1,
      sym__comment_end,
  [13735] = 2,
    ACTIONS(2129), 1,
      sym_comment_text,
    ACTIONS(2131), 1,
      sym__comment_end,
  [13742] = 2,
    ACTIONS(2133), 1,
      sym_snake_name,
    STATE(1197), 1,
      sym_property_key,
  [13749] = 2,
    ACTIONS(2135), 1,
      sym_comment_text,
    ACTIONS(2137), 1,
      sym__comment_end,
  [13756] = 2,
    ACTIONS(2139), 1,
      sym_comment_text,
    ACTIONS(2141), 1,
      sym__comment_end,
  [13763] = 2,
    ACTIONS(2143), 1,
      sym_comment_text,
    ACTIONS(2145), 1,
      sym__comment_end,
  [13770] = 2,
    ACTIONS(2147), 1,
      sym_comment_text,
    ACTIONS(2149), 1,
      sym__comment_end,
  [13777] = 2,
    ACTIONS(2151), 1,
      sym_comment_text,
    ACTIONS(2153), 1,
      sym__comment_end,
  [13784] = 2,
    ACTIONS(2155), 1,
      sym_comment_text,
    ACTIONS(2157), 1,
      sym__comment_end,
  [13791] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1354), 1,
      sym_param_doc_tag,
  [13798] = 1,
    ACTIONS(2159), 2,
      sym_newline,
      sym__inline_comment,
  [13803] = 1,
    ACTIONS(2161), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13808] = 1,
    ACTIONS(1637), 2,
      sym_newline,
      sym__inline_comment,
  [13813] = 2,
    ACTIONS(2163), 1,
      sym_text_line,
    STATE(1055), 1,
      sym_cap_ref,
  [13820] = 2,
    ACTIONS(2045), 1,
      sym__snake_kebab_name,
    STATE(1356), 1,
      sym_cap_name,
  [13827] = 2,
    ACTIONS(2079), 1,
      sym_snake_name,
    STATE(385), 1,
      sym_agent,
  [13834] = 2,
    ACTIONS(2165), 1,
      sym_comment_text,
    ACTIONS(2167), 1,
      sym__comment_end,
  [13841] = 2,
    ACTIONS(2169), 1,
      anon_sym_EQ,
    STATE(1171), 1,
      sym_assign_operator,
  [13848] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(409), 1,
      sym__from_complement,
  [13855] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(556), 1,
      sym__until_complement,
  [13862] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(413), 1,
      sym__from_complement,
  [13869] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(415), 1,
      sym__until_complement,
  [13876] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(416), 1,
      sym__until_complement,
  [13883] = 2,
    ACTIONS(2043), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_assign_operator,
  [13890] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(424), 1,
      sym__until_complement,
  [13897] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1315), 1,
      sym_param_doc_tag,
  [13904] = 1,
    ACTIONS(1641), 2,
      sym_newline,
      sym__inline_comment,
  [13909] = 2,
    ACTIONS(2079), 1,
      sym_snake_name,
    STATE(457), 1,
      sym_agent,
  [13916] = 2,
    ACTIONS(2171), 1,
      sym_comment_text,
    ACTIONS(2173), 1,
      sym__comment_end,
  [13923] = 2,
    ACTIONS(2043), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [13930] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(481), 1,
      sym__from_complement,
  [13937] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(482), 1,
      sym__until_complement,
  [13944] = 2,
    ACTIONS(2175), 1,
      sym_comment_text,
    ACTIONS(2177), 1,
      sym__comment_end,
  [13951] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(485), 1,
      sym__from_complement,
  [13958] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(487), 1,
      sym__until_complement,
  [13965] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(488), 1,
      sym__until_complement,
  [13972] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(496), 1,
      sym__until_complement,
  [13979] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1276), 1,
      sym_param_doc_tag,
  [13986] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1301), 1,
      sym_param_doc_tag,
  [13993] = 1,
    ACTIONS(1176), 2,
      sym_blank_line,
      sym__text_indent,
  [13998] = 1,
    ACTIONS(2179), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [14003] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1320), 1,
      sym_param_doc_tag,
  [14010] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1327), 1,
      sym_param_doc_tag,
  [14017] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1341), 1,
      sym_param_doc_tag,
  [14024] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1355), 1,
      sym_param_doc_tag,
  [14031] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1371), 1,
      sym_param_doc_tag,
  [14038] = 2,
    ACTIONS(2081), 1,
      anon_sym_ATparam,
    STATE(1255), 1,
      sym_param_doc_tag,
  [14045] = 2,
    ACTIONS(2059), 1,
      anon_sym_EQ,
    STATE(1191), 1,
      sym_assign_operator,
  [14052] = 2,
    ACTIONS(2059), 1,
      anon_sym_EQ,
    STATE(881), 1,
      sym_assign_operator,
  [14059] = 2,
    ACTIONS(2063), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_assign_operator,
  [14066] = 2,
    ACTIONS(2077), 1,
      anon_sym_EQ,
    STATE(883), 1,
      sym_assign_operator,
  [14073] = 2,
    ACTIONS(2057), 1,
      sym__settle_text_start,
    STATE(669), 1,
      sym__settle_text_body,
  [14080] = 1,
    ACTIONS(2181), 2,
      sym_rparen,
      sym_comma,
  [14085] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(411), 1,
      sym__from_complement,
  [14092] = 2,
    ACTIONS(2183), 1,
      sym_arrow,
    ACTIONS(2185), 1,
      sym_colon,
  [14099] = 2,
    ACTIONS(2187), 1,
      sym__snake_kebab_name,
    STATE(1306), 1,
      sym_job_name,
  [14106] = 2,
    ACTIONS(2189), 1,
      sym_arrow,
    ACTIONS(2191), 1,
      sym_colon,
  [14113] = 2,
    ACTIONS(559), 1,
      sym__until_start,
    STATE(419), 1,
      sym__until_complement,
  [14120] = 2,
    ACTIONS(2193), 1,
      sym_comment_text,
    ACTIONS(2195), 1,
      sym__comment_end,
  [14127] = 2,
    ACTIONS(2197), 1,
      sym_comment_text,
    ACTIONS(2199), 1,
      sym__comment_end,
  [14134] = 2,
    ACTIONS(535), 1,
      sym__line_start,
    STATE(113), 1,
      sym_field,
  [14141] = 1,
    ACTIONS(2201), 2,
      sym_optional_marker,
      sym_colon,
  [14146] = 2,
    ACTIONS(2187), 1,
      sym__snake_kebab_name,
    STATE(1307), 1,
      sym_job_name,
  [14153] = 1,
    ACTIONS(2203), 2,
      sym_rparen,
      sym_comma,
  [14158] = 2,
    ACTIONS(2205), 1,
      anon_sym_lanes,
    STATE(994), 1,
      sym_flow_lanes_keyword,
  [14165] = 2,
    ACTIONS(2057), 1,
      sym__settle_text_start,
    STATE(650), 1,
      sym__settle_text_body,
  [14172] = 2,
    ACTIONS(2057), 1,
      sym__settle_text_start,
    STATE(697), 1,
      sym__settle_text_body,
  [14179] = 1,
    ACTIONS(2207), 2,
      sym_arrow,
      sym_colon,
  [14184] = 2,
    ACTIONS(2209), 1,
      sym_comment_text,
    ACTIONS(2211), 1,
      sym__comment_end,
  [14191] = 2,
    ACTIONS(2213), 1,
      sym__one_integer_literal,
    ACTIONS(2215), 1,
      sym__other_integer_literal,
  [14198] = 2,
    ACTIONS(2217), 1,
      anon_sym_lanes,
    STATE(1174), 1,
      sym_flow_lanes_keyword,
  [14205] = 2,
    ACTIONS(483), 1,
      sym__from_start,
    STATE(440), 1,
      sym__from_complement,
  [14212] = 2,
    ACTIONS(2045), 1,
      sym__snake_kebab_name,
    STATE(1363), 1,
      sym_cap_name,
  [14219] = 2,
    ACTIONS(2219), 1,
      sym__one_integer_literal,
    ACTIONS(2221), 1,
      sym__other_integer_literal,
  [14226] = 1,
    ACTIONS(2223), 1,
      sym_colon,
  [14230] = 1,
    ACTIONS(2225), 1,
      sym__comment_end,
  [14234] = 1,
    ACTIONS(2227), 1,
      sym_newline,
  [14238] = 1,
    ACTIONS(2229), 1,
      sym_newline,
  [14242] = 1,
    ACTIONS(2231), 1,
      sym_runnable_ref,
  [14246] = 1,
    ACTIONS(2233), 1,
      ts_builtin_sym_end,
  [14250] = 1,
    ACTIONS(2235), 1,
      sym__comment_end,
  [14254] = 1,
    ACTIONS(2237), 1,
      sym__dedent,
  [14258] = 1,
    ACTIONS(2239), 1,
      sym_colon,
  [14262] = 1,
    ACTIONS(2069), 1,
      sym_directive_value,
  [14266] = 1,
    ACTIONS(2241), 1,
      sym__dedent,
  [14270] = 1,
    ACTIONS(2243), 1,
      sym_colon,
  [14274] = 1,
    ACTIONS(2245), 1,
      sym_integer_literal,
  [14278] = 1,
    ACTIONS(2247), 1,
      sym_flow_from_keyword,
  [14282] = 1,
    ACTIONS(2161), 1,
      sym_directive_value,
  [14286] = 1,
    ACTIONS(2249), 1,
      sym_colon,
  [14290] = 1,
    ACTIONS(2251), 1,
      sym_flow_exec_keyword,
  [14294] = 1,
    ACTIONS(2253), 1,
      sym__comment_end,
  [14298] = 1,
    ACTIONS(2255), 1,
      sym_colon,
  [14302] = 1,
    ACTIONS(2257), 1,
      sym_integer_literal,
  [14306] = 1,
    ACTIONS(2259), 1,
      anon_sym_EQ,
  [14310] = 1,
    ACTIONS(2261), 1,
      sym__comment_end,
  [14314] = 1,
    ACTIONS(2263), 1,
      sym__comment_end,
  [14318] = 1,
    ACTIONS(2265), 1,
      sym_colon,
  [14322] = 1,
    ACTIONS(2267), 1,
      sym_colon,
  [14326] = 1,
    ACTIONS(2269), 1,
      sym_flow_exec_keyword,
  [14330] = 1,
    ACTIONS(2271), 1,
      sym_newline,
  [14334] = 1,
    ACTIONS(2273), 1,
      sym_directive_value,
  [14338] = 1,
    ACTIONS(2275), 1,
      sym_colon,
  [14342] = 1,
    ACTIONS(2277), 1,
      sym__comment_end,
  [14346] = 1,
    ACTIONS(317), 1,
      sym__dedent,
  [14350] = 1,
    ACTIONS(2279), 1,
      sym_flow_time_keyword,
  [14354] = 1,
    ACTIONS(2281), 1,
      sym__dedent,
  [14358] = 1,
    ACTIONS(2283), 1,
      sym__dedent,
  [14362] = 1,
    ACTIONS(2279), 1,
      sym_flow_times_keyword,
  [14366] = 1,
    ACTIONS(2285), 1,
      sym_colon,
  [14370] = 1,
    ACTIONS(2287), 1,
      sym_integer_literal,
  [14374] = 1,
    ACTIONS(2289), 1,
      sym__comment_end,
  [14378] = 1,
    ACTIONS(2291), 1,
      sym_colon,
  [14382] = 1,
    ACTIONS(2293), 1,
      sym_colon,
  [14386] = 1,
    ACTIONS(2295), 1,
      sym_colon,
  [14390] = 1,
    ACTIONS(2297), 1,
      sym__dedent,
  [14394] = 1,
    ACTIONS(2299), 1,
      sym_colon,
  [14398] = 1,
    ACTIONS(2301), 1,
      sym_flow_exec_keyword,
  [14402] = 1,
    ACTIONS(2303), 1,
      sym__comment_end,
  [14406] = 1,
    ACTIONS(2305), 1,
      sym_colon,
  [14410] = 1,
    ACTIONS(2307), 1,
      sym_integer_literal,
  [14414] = 1,
    ACTIONS(2309), 1,
      sym__comment_end,
  [14418] = 1,
    ACTIONS(2311), 1,
      sym_newline,
  [14422] = 1,
    ACTIONS(2313), 1,
      sym_colon,
  [14426] = 1,
    ACTIONS(2315), 1,
      sym_colon,
  [14430] = 1,
    ACTIONS(2317), 1,
      sym_flow_exec_keyword,
  [14434] = 1,
    ACTIONS(2319), 1,
      sym_colon,
  [14438] = 1,
    ACTIONS(2321), 1,
      sym_colon,
  [14442] = 1,
    ACTIONS(2323), 1,
      sym_colon,
  [14446] = 1,
    ACTIONS(2325), 1,
      sym__dedent,
  [14450] = 1,
    ACTIONS(2327), 1,
      sym_newline,
  [14454] = 1,
    ACTIONS(2329), 1,
      sym_colon,
  [14458] = 1,
    ACTIONS(2331), 1,
      sym__comment_end,
  [14462] = 1,
    ACTIONS(2333), 1,
      sym__comment_end,
  [14466] = 1,
    ACTIONS(2335), 1,
      sym_colon,
  [14470] = 1,
    ACTIONS(2337), 1,
      sym__comment_end,
  [14474] = 1,
    ACTIONS(2339), 1,
      sym__comment_end,
  [14478] = 1,
    ACTIONS(2341), 1,
      sym_newline,
  [14482] = 1,
    ACTIONS(2343), 1,
      sym_colon,
  [14486] = 1,
    ACTIONS(2345), 1,
      sym__comment_end,
  [14490] = 1,
    ACTIONS(2347), 1,
      sym__comment_end,
  [14494] = 1,
    ACTIONS(2349), 1,
      sym_newline,
  [14498] = 1,
    ACTIONS(2351), 1,
      sym__dedent,
  [14502] = 1,
    ACTIONS(2353), 1,
      sym_integer_literal,
  [14506] = 1,
    ACTIONS(2355), 1,
      sym_colon,
  [14510] = 1,
    ACTIONS(2357), 1,
      sym__comment_end,
  [14514] = 1,
    ACTIONS(2359), 1,
      sym__comment_end,
  [14518] = 1,
    ACTIONS(2361), 1,
      sym__comment_end,
  [14522] = 1,
    ACTIONS(2363), 1,
      sym_flow_exec_keyword,
  [14526] = 1,
    ACTIONS(2365), 1,
      sym_newline,
  [14530] = 1,
    ACTIONS(2367), 1,
      sym__comment_end,
  [14534] = 1,
    ACTIONS(2369), 1,
      sym_cap_kind,
  [14538] = 1,
    ACTIONS(2371), 1,
      sym_newline,
  [14542] = 1,
    ACTIONS(2373), 1,
      sym_colon,
  [14546] = 1,
    ACTIONS(2375), 1,
      sym_colon,
  [14550] = 1,
    ACTIONS(2377), 1,
      sym__comment_end,
  [14554] = 1,
    ACTIONS(2379), 1,
      sym_colon,
  [14558] = 1,
    ACTIONS(2381), 1,
      sym__comment_end,
  [14562] = 1,
    ACTIONS(2383), 1,
      sym__dedent,
  [14566] = 1,
    ACTIONS(2385), 1,
      sym_colon,
  [14570] = 1,
    ACTIONS(2387), 1,
      sym_flow_lane_keyword,
  [14574] = 1,
    ACTIONS(2389), 1,
      sym__comment_end,
  [14578] = 1,
    ACTIONS(2391), 1,
      sym_newline,
  [14582] = 1,
    ACTIONS(2393), 1,
      sym__dedent,
  [14586] = 1,
    ACTIONS(259), 1,
      sym_text_line,
  [14590] = 1,
    ACTIONS(1693), 1,
      sym__doc_space,
  [14594] = 1,
    ACTIONS(2395), 1,
      sym_colon,
  [14598] = 1,
    ACTIONS(1899), 1,
      sym__dedent,
  [14602] = 1,
    ACTIONS(2397), 1,
      sym_flow_exec_keyword,
  [14606] = 1,
    ACTIONS(2399), 1,
      sym_comment_text,
  [14610] = 1,
    ACTIONS(2401), 1,
      sym__comment_end,
  [14614] = 1,
    ACTIONS(2403), 1,
      sym__comment_end,
  [14618] = 1,
    ACTIONS(2405), 1,
      sym__comment_end,
  [14622] = 1,
    ACTIONS(2407), 1,
      sym__comment_end,
  [14626] = 1,
    ACTIONS(2409), 1,
      sym__comment_end,
  [14630] = 1,
    ACTIONS(2411), 1,
      sym__comment_end,
  [14634] = 1,
    ACTIONS(2413), 1,
      sym_colon,
  [14638] = 1,
    ACTIONS(2415), 1,
      sym_newline,
  [14642] = 1,
    ACTIONS(2417), 1,
      sym_newline,
  [14646] = 1,
    ACTIONS(2419), 1,
      sym__comment_end,
  [14650] = 1,
    ACTIONS(2421), 1,
      sym_newline,
  [14654] = 1,
    ACTIONS(2423), 1,
      sym_colon,
  [14658] = 1,
    ACTIONS(2425), 1,
      sym__doc_space,
  [14662] = 1,
    ACTIONS(2427), 1,
      sym_colon,
  [14666] = 1,
    ACTIONS(371), 1,
      sym__dedent,
  [14670] = 1,
    ACTIONS(2429), 1,
      sym_colon,
  [14674] = 1,
    ACTIONS(2431), 1,
      sym__dedent,
  [14678] = 1,
    ACTIONS(2433), 1,
      sym__comment_end,
  [14682] = 1,
    ACTIONS(2435), 1,
      sym_colon,
  [14686] = 1,
    ACTIONS(2437), 1,
      sym__comment_end,
  [14690] = 1,
    ACTIONS(2001), 1,
      anon_sym_EQ,
  [14694] = 1,
    ACTIONS(2439), 1,
      sym__comment_end,
  [14698] = 1,
    ACTIONS(2441), 1,
      sym_newline,
  [14702] = 1,
    ACTIONS(2443), 1,
      sym_colon,
  [14706] = 1,
    ACTIONS(2445), 1,
      sym__doc_space,
  [14710] = 1,
    ACTIONS(2447), 1,
      sym_newline,
  [14714] = 1,
    ACTIONS(2449), 1,
      sym_flow_lane_keyword,
  [14718] = 1,
    ACTIONS(1739), 1,
      sym__dedent,
  [14722] = 1,
    ACTIONS(2451), 1,
      sym_newline,
  [14726] = 1,
    ACTIONS(2453), 1,
      sym_colon,
  [14730] = 1,
    ACTIONS(2455), 1,
      sym__comment_end,
  [14734] = 1,
    ACTIONS(2457), 1,
      sym_flow_until_keyword,
  [14738] = 1,
    ACTIONS(2459), 1,
      anon_sym_EQ,
  [14742] = 1,
    ACTIONS(2461), 1,
      sym_colon,
  [14746] = 1,
    ACTIONS(2463), 1,
      sym_colon,
  [14750] = 1,
    ACTIONS(2465), 1,
      sym__dedent,
  [14754] = 1,
    ACTIONS(2467), 1,
      sym_colon,
  [14758] = 1,
    ACTIONS(2469), 1,
      sym_colon,
  [14762] = 1,
    ACTIONS(2471), 1,
      sym__comment_end,
  [14766] = 1,
    ACTIONS(2473), 1,
      sym_colon,
  [14770] = 1,
    ACTIONS(2475), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 355,
  [SMALL_STATE(12)] = 423,
  [SMALL_STATE(13)] = 473,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 574,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 624,
  [SMALL_STATE(18)] = 653,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 719,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 785,
  [SMALL_STATE(23)] = 818,
  [SMALL_STATE(24)] = 851,
  [SMALL_STATE(25)] = 875,
  [SMALL_STATE(26)] = 899,
  [SMALL_STATE(27)] = 923,
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
  [SMALL_STATE(43)] = 1312,
  [SMALL_STATE(44)] = 1341,
  [SMALL_STATE(45)] = 1370,
  [SMALL_STATE(46)] = 1399,
  [SMALL_STATE(47)] = 1423,
  [SMALL_STATE(48)] = 1449,
  [SMALL_STATE(49)] = 1475,
  [SMALL_STATE(50)] = 1501,
  [SMALL_STATE(51)] = 1527,
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1577,
  [SMALL_STATE(54)] = 1603,
  [SMALL_STATE(55)] = 1629,
  [SMALL_STATE(56)] = 1655,
  [SMALL_STATE(57)] = 1681,
  [SMALL_STATE(58)] = 1707,
  [SMALL_STATE(59)] = 1733,
  [SMALL_STATE(60)] = 1757,
  [SMALL_STATE(61)] = 1783,
  [SMALL_STATE(62)] = 1809,
  [SMALL_STATE(63)] = 1835,
  [SMALL_STATE(64)] = 1859,
  [SMALL_STATE(65)] = 1885,
  [SMALL_STATE(66)] = 1904,
  [SMALL_STATE(67)] = 1927,
  [SMALL_STATE(68)] = 1950,
  [SMALL_STATE(69)] = 1969,
  [SMALL_STATE(70)] = 1992,
  [SMALL_STATE(71)] = 2015,
  [SMALL_STATE(72)] = 2034,
  [SMALL_STATE(73)] = 2053,
  [SMALL_STATE(74)] = 2072,
  [SMALL_STATE(75)] = 2093,
  [SMALL_STATE(76)] = 2112,
  [SMALL_STATE(77)] = 2135,
  [SMALL_STATE(78)] = 2158,
  [SMALL_STATE(79)] = 2181,
  [SMALL_STATE(80)] = 2204,
  [SMALL_STATE(81)] = 2223,
  [SMALL_STATE(82)] = 2242,
  [SMALL_STATE(83)] = 2265,
  [SMALL_STATE(84)] = 2284,
  [SMALL_STATE(85)] = 2303,
  [SMALL_STATE(86)] = 2323,
  [SMALL_STATE(87)] = 2341,
  [SMALL_STATE(88)] = 2361,
  [SMALL_STATE(89)] = 2383,
  [SMALL_STATE(90)] = 2403,
  [SMALL_STATE(91)] = 2421,
  [SMALL_STATE(92)] = 2439,
  [SMALL_STATE(93)] = 2457,
  [SMALL_STATE(94)] = 2475,
  [SMALL_STATE(95)] = 2493,
  [SMALL_STATE(96)] = 2511,
  [SMALL_STATE(97)] = 2529,
  [SMALL_STATE(98)] = 2547,
  [SMALL_STATE(99)] = 2567,
  [SMALL_STATE(100)] = 2587,
  [SMALL_STATE(101)] = 2607,
  [SMALL_STATE(102)] = 2627,
  [SMALL_STATE(103)] = 2645,
  [SMALL_STATE(104)] = 2661,
  [SMALL_STATE(105)] = 2679,
  [SMALL_STATE(106)] = 2697,
  [SMALL_STATE(107)] = 2715,
  [SMALL_STATE(108)] = 2733,
  [SMALL_STATE(109)] = 2751,
  [SMALL_STATE(110)] = 2769,
  [SMALL_STATE(111)] = 2787,
  [SMALL_STATE(112)] = 2805,
  [SMALL_STATE(113)] = 2825,
  [SMALL_STATE(114)] = 2843,
  [SMALL_STATE(115)] = 2857,
  [SMALL_STATE(116)] = 2875,
  [SMALL_STATE(117)] = 2893,
  [SMALL_STATE(118)] = 2907,
  [SMALL_STATE(119)] = 2927,
  [SMALL_STATE(120)] = 2945,
  [SMALL_STATE(121)] = 2963,
  [SMALL_STATE(122)] = 2985,
  [SMALL_STATE(123)] = 3003,
  [SMALL_STATE(124)] = 3023,
  [SMALL_STATE(125)] = 3043,
  [SMALL_STATE(126)] = 3065,
  [SMALL_STATE(127)] = 3085,
  [SMALL_STATE(128)] = 3105,
  [SMALL_STATE(129)] = 3125,
  [SMALL_STATE(130)] = 3145,
  [SMALL_STATE(131)] = 3163,
  [SMALL_STATE(132)] = 3185,
  [SMALL_STATE(133)] = 3203,
  [SMALL_STATE(134)] = 3221,
  [SMALL_STATE(135)] = 3239,
  [SMALL_STATE(136)] = 3257,
  [SMALL_STATE(137)] = 3275,
  [SMALL_STATE(138)] = 3295,
  [SMALL_STATE(139)] = 3315,
  [SMALL_STATE(140)] = 3335,
  [SMALL_STATE(141)] = 3355,
  [SMALL_STATE(142)] = 3375,
  [SMALL_STATE(143)] = 3395,
  [SMALL_STATE(144)] = 3413,
  [SMALL_STATE(145)] = 3431,
  [SMALL_STATE(146)] = 3449,
  [SMALL_STATE(147)] = 3467,
  [SMALL_STATE(148)] = 3485,
  [SMALL_STATE(149)] = 3503,
  [SMALL_STATE(150)] = 3521,
  [SMALL_STATE(151)] = 3539,
  [SMALL_STATE(152)] = 3557,
  [SMALL_STATE(153)] = 3573,
  [SMALL_STATE(154)] = 3591,
  [SMALL_STATE(155)] = 3609,
  [SMALL_STATE(156)] = 3625,
  [SMALL_STATE(157)] = 3643,
  [SMALL_STATE(158)] = 3661,
  [SMALL_STATE(159)] = 3681,
  [SMALL_STATE(160)] = 3700,
  [SMALL_STATE(161)] = 3719,
  [SMALL_STATE(162)] = 3736,
  [SMALL_STATE(163)] = 3753,
  [SMALL_STATE(164)] = 3772,
  [SMALL_STATE(165)] = 3791,
  [SMALL_STATE(166)] = 3810,
  [SMALL_STATE(167)] = 3829,
  [SMALL_STATE(168)] = 3848,
  [SMALL_STATE(169)] = 3865,
  [SMALL_STATE(170)] = 3884,
  [SMALL_STATE(171)] = 3903,
  [SMALL_STATE(172)] = 3916,
  [SMALL_STATE(173)] = 3935,
  [SMALL_STATE(174)] = 3948,
  [SMALL_STATE(175)] = 3965,
  [SMALL_STATE(176)] = 3984,
  [SMALL_STATE(177)] = 3997,
  [SMALL_STATE(178)] = 4012,
  [SMALL_STATE(179)] = 4027,
  [SMALL_STATE(180)] = 4040,
  [SMALL_STATE(181)] = 4057,
  [SMALL_STATE(182)] = 4076,
  [SMALL_STATE(183)] = 4093,
  [SMALL_STATE(184)] = 4110,
  [SMALL_STATE(185)] = 4127,
  [SMALL_STATE(186)] = 4144,
  [SMALL_STATE(187)] = 4163,
  [SMALL_STATE(188)] = 4182,
  [SMALL_STATE(189)] = 4201,
  [SMALL_STATE(190)] = 4220,
  [SMALL_STATE(191)] = 4237,
  [SMALL_STATE(192)] = 4256,
  [SMALL_STATE(193)] = 4275,
  [SMALL_STATE(194)] = 4294,
  [SMALL_STATE(195)] = 4303,
  [SMALL_STATE(196)] = 4322,
  [SMALL_STATE(197)] = 4337,
  [SMALL_STATE(198)] = 4356,
  [SMALL_STATE(199)] = 4375,
  [SMALL_STATE(200)] = 4384,
  [SMALL_STATE(201)] = 4403,
  [SMALL_STATE(202)] = 4422,
  [SMALL_STATE(203)] = 4431,
  [SMALL_STATE(204)] = 4450,
  [SMALL_STATE(205)] = 4465,
  [SMALL_STATE(206)] = 4478,
  [SMALL_STATE(207)] = 4497,
  [SMALL_STATE(208)] = 4516,
  [SMALL_STATE(209)] = 4533,
  [SMALL_STATE(210)] = 4550,
  [SMALL_STATE(211)] = 4569,
  [SMALL_STATE(212)] = 4586,
  [SMALL_STATE(213)] = 4601,
  [SMALL_STATE(214)] = 4618,
  [SMALL_STATE(215)] = 4633,
  [SMALL_STATE(216)] = 4650,
  [SMALL_STATE(217)] = 4663,
  [SMALL_STATE(218)] = 4680,
  [SMALL_STATE(219)] = 4697,
  [SMALL_STATE(220)] = 4714,
  [SMALL_STATE(221)] = 4731,
  [SMALL_STATE(222)] = 4750,
  [SMALL_STATE(223)] = 4769,
  [SMALL_STATE(224)] = 4786,
  [SMALL_STATE(225)] = 4805,
  [SMALL_STATE(226)] = 4824,
  [SMALL_STATE(227)] = 4838,
  [SMALL_STATE(228)] = 4852,
  [SMALL_STATE(229)] = 4866,
  [SMALL_STATE(230)] = 4874,
  [SMALL_STATE(231)] = 4882,
  [SMALL_STATE(232)] = 4896,
  [SMALL_STATE(233)] = 4904,
  [SMALL_STATE(234)] = 4918,
  [SMALL_STATE(235)] = 4926,
  [SMALL_STATE(236)] = 4934,
  [SMALL_STATE(237)] = 4942,
  [SMALL_STATE(238)] = 4950,
  [SMALL_STATE(239)] = 4958,
  [SMALL_STATE(240)] = 4966,
  [SMALL_STATE(241)] = 4974,
  [SMALL_STATE(242)] = 4982,
  [SMALL_STATE(243)] = 4990,
  [SMALL_STATE(244)] = 4998,
  [SMALL_STATE(245)] = 5006,
  [SMALL_STATE(246)] = 5020,
  [SMALL_STATE(247)] = 5034,
  [SMALL_STATE(248)] = 5048,
  [SMALL_STATE(249)] = 5056,
  [SMALL_STATE(250)] = 5072,
  [SMALL_STATE(251)] = 5080,
  [SMALL_STATE(252)] = 5088,
  [SMALL_STATE(253)] = 5096,
  [SMALL_STATE(254)] = 5104,
  [SMALL_STATE(255)] = 5112,
  [SMALL_STATE(256)] = 5120,
  [SMALL_STATE(257)] = 5128,
  [SMALL_STATE(258)] = 5136,
  [SMALL_STATE(259)] = 5144,
  [SMALL_STATE(260)] = 5152,
  [SMALL_STATE(261)] = 5160,
  [SMALL_STATE(262)] = 5168,
  [SMALL_STATE(263)] = 5176,
  [SMALL_STATE(264)] = 5184,
  [SMALL_STATE(265)] = 5192,
  [SMALL_STATE(266)] = 5200,
  [SMALL_STATE(267)] = 5208,
  [SMALL_STATE(268)] = 5216,
  [SMALL_STATE(269)] = 5224,
  [SMALL_STATE(270)] = 5232,
  [SMALL_STATE(271)] = 5240,
  [SMALL_STATE(272)] = 5248,
  [SMALL_STATE(273)] = 5256,
  [SMALL_STATE(274)] = 5272,
  [SMALL_STATE(275)] = 5286,
  [SMALL_STATE(276)] = 5294,
  [SMALL_STATE(277)] = 5302,
  [SMALL_STATE(278)] = 5310,
  [SMALL_STATE(279)] = 5318,
  [SMALL_STATE(280)] = 5326,
  [SMALL_STATE(281)] = 5334,
  [SMALL_STATE(282)] = 5342,
  [SMALL_STATE(283)] = 5350,
  [SMALL_STATE(284)] = 5358,
  [SMALL_STATE(285)] = 5366,
  [SMALL_STATE(286)] = 5374,
  [SMALL_STATE(287)] = 5382,
  [SMALL_STATE(288)] = 5390,
  [SMALL_STATE(289)] = 5398,
  [SMALL_STATE(290)] = 5406,
  [SMALL_STATE(291)] = 5414,
  [SMALL_STATE(292)] = 5422,
  [SMALL_STATE(293)] = 5430,
  [SMALL_STATE(294)] = 5438,
  [SMALL_STATE(295)] = 5446,
  [SMALL_STATE(296)] = 5454,
  [SMALL_STATE(297)] = 5462,
  [SMALL_STATE(298)] = 5470,
  [SMALL_STATE(299)] = 5478,
  [SMALL_STATE(300)] = 5486,
  [SMALL_STATE(301)] = 5494,
  [SMALL_STATE(302)] = 5502,
  [SMALL_STATE(303)] = 5510,
  [SMALL_STATE(304)] = 5518,
  [SMALL_STATE(305)] = 5526,
  [SMALL_STATE(306)] = 5534,
  [SMALL_STATE(307)] = 5542,
  [SMALL_STATE(308)] = 5550,
  [SMALL_STATE(309)] = 5558,
  [SMALL_STATE(310)] = 5566,
  [SMALL_STATE(311)] = 5574,
  [SMALL_STATE(312)] = 5582,
  [SMALL_STATE(313)] = 5590,
  [SMALL_STATE(314)] = 5598,
  [SMALL_STATE(315)] = 5606,
  [SMALL_STATE(316)] = 5614,
  [SMALL_STATE(317)] = 5622,
  [SMALL_STATE(318)] = 5630,
  [SMALL_STATE(319)] = 5638,
  [SMALL_STATE(320)] = 5646,
  [SMALL_STATE(321)] = 5654,
  [SMALL_STATE(322)] = 5662,
  [SMALL_STATE(323)] = 5670,
  [SMALL_STATE(324)] = 5678,
  [SMALL_STATE(325)] = 5686,
  [SMALL_STATE(326)] = 5694,
  [SMALL_STATE(327)] = 5702,
  [SMALL_STATE(328)] = 5710,
  [SMALL_STATE(329)] = 5718,
  [SMALL_STATE(330)] = 5726,
  [SMALL_STATE(331)] = 5734,
  [SMALL_STATE(332)] = 5742,
  [SMALL_STATE(333)] = 5750,
  [SMALL_STATE(334)] = 5758,
  [SMALL_STATE(335)] = 5766,
  [SMALL_STATE(336)] = 5774,
  [SMALL_STATE(337)] = 5782,
  [SMALL_STATE(338)] = 5790,
  [SMALL_STATE(339)] = 5798,
  [SMALL_STATE(340)] = 5812,
  [SMALL_STATE(341)] = 5828,
  [SMALL_STATE(342)] = 5836,
  [SMALL_STATE(343)] = 5844,
  [SMALL_STATE(344)] = 5852,
  [SMALL_STATE(345)] = 5860,
  [SMALL_STATE(346)] = 5868,
  [SMALL_STATE(347)] = 5876,
  [SMALL_STATE(348)] = 5884,
  [SMALL_STATE(349)] = 5892,
  [SMALL_STATE(350)] = 5900,
  [SMALL_STATE(351)] = 5908,
  [SMALL_STATE(352)] = 5916,
  [SMALL_STATE(353)] = 5924,
  [SMALL_STATE(354)] = 5932,
  [SMALL_STATE(355)] = 5940,
  [SMALL_STATE(356)] = 5948,
  [SMALL_STATE(357)] = 5956,
  [SMALL_STATE(358)] = 5964,
  [SMALL_STATE(359)] = 5972,
  [SMALL_STATE(360)] = 5980,
  [SMALL_STATE(361)] = 5988,
  [SMALL_STATE(362)] = 5996,
  [SMALL_STATE(363)] = 6004,
  [SMALL_STATE(364)] = 6012,
  [SMALL_STATE(365)] = 6020,
  [SMALL_STATE(366)] = 6034,
  [SMALL_STATE(367)] = 6048,
  [SMALL_STATE(368)] = 6062,
  [SMALL_STATE(369)] = 6078,
  [SMALL_STATE(370)] = 6086,
  [SMALL_STATE(371)] = 6094,
  [SMALL_STATE(372)] = 6108,
  [SMALL_STATE(373)] = 6122,
  [SMALL_STATE(374)] = 6136,
  [SMALL_STATE(375)] = 6152,
  [SMALL_STATE(376)] = 6166,
  [SMALL_STATE(377)] = 6180,
  [SMALL_STATE(378)] = 6194,
  [SMALL_STATE(379)] = 6208,
  [SMALL_STATE(380)] = 6224,
  [SMALL_STATE(381)] = 6240,
  [SMALL_STATE(382)] = 6254,
  [SMALL_STATE(383)] = 6268,
  [SMALL_STATE(384)] = 6276,
  [SMALL_STATE(385)] = 6290,
  [SMALL_STATE(386)] = 6306,
  [SMALL_STATE(387)] = 6320,
  [SMALL_STATE(388)] = 6336,
  [SMALL_STATE(389)] = 6352,
  [SMALL_STATE(390)] = 6368,
  [SMALL_STATE(391)] = 6382,
  [SMALL_STATE(392)] = 6398,
  [SMALL_STATE(393)] = 6412,
  [SMALL_STATE(394)] = 6428,
  [SMALL_STATE(395)] = 6444,
  [SMALL_STATE(396)] = 6460,
  [SMALL_STATE(397)] = 6474,
  [SMALL_STATE(398)] = 6488,
  [SMALL_STATE(399)] = 6502,
  [SMALL_STATE(400)] = 6516,
  [SMALL_STATE(401)] = 6530,
  [SMALL_STATE(402)] = 6546,
  [SMALL_STATE(403)] = 6562,
  [SMALL_STATE(404)] = 6576,
  [SMALL_STATE(405)] = 6590,
  [SMALL_STATE(406)] = 6604,
  [SMALL_STATE(407)] = 6620,
  [SMALL_STATE(408)] = 6634,
  [SMALL_STATE(409)] = 6648,
  [SMALL_STATE(410)] = 6662,
  [SMALL_STATE(411)] = 6670,
  [SMALL_STATE(412)] = 6684,
  [SMALL_STATE(413)] = 6698,
  [SMALL_STATE(414)] = 6712,
  [SMALL_STATE(415)] = 6726,
  [SMALL_STATE(416)] = 6740,
  [SMALL_STATE(417)] = 6754,
  [SMALL_STATE(418)] = 6768,
  [SMALL_STATE(419)] = 6782,
  [SMALL_STATE(420)] = 6796,
  [SMALL_STATE(421)] = 6810,
  [SMALL_STATE(422)] = 6824,
  [SMALL_STATE(423)] = 6838,
  [SMALL_STATE(424)] = 6852,
  [SMALL_STATE(425)] = 6866,
  [SMALL_STATE(426)] = 6880,
  [SMALL_STATE(427)] = 6894,
  [SMALL_STATE(428)] = 6908,
  [SMALL_STATE(429)] = 6922,
  [SMALL_STATE(430)] = 6936,
  [SMALL_STATE(431)] = 6950,
  [SMALL_STATE(432)] = 6964,
  [SMALL_STATE(433)] = 6978,
  [SMALL_STATE(434)] = 6992,
  [SMALL_STATE(435)] = 7006,
  [SMALL_STATE(436)] = 7020,
  [SMALL_STATE(437)] = 7034,
  [SMALL_STATE(438)] = 7048,
  [SMALL_STATE(439)] = 7062,
  [SMALL_STATE(440)] = 7076,
  [SMALL_STATE(441)] = 7090,
  [SMALL_STATE(442)] = 7104,
  [SMALL_STATE(443)] = 7118,
  [SMALL_STATE(444)] = 7132,
  [SMALL_STATE(445)] = 7146,
  [SMALL_STATE(446)] = 7160,
  [SMALL_STATE(447)] = 7168,
  [SMALL_STATE(448)] = 7184,
  [SMALL_STATE(449)] = 7198,
  [SMALL_STATE(450)] = 7212,
  [SMALL_STATE(451)] = 7226,
  [SMALL_STATE(452)] = 7242,
  [SMALL_STATE(453)] = 7258,
  [SMALL_STATE(454)] = 7272,
  [SMALL_STATE(455)] = 7286,
  [SMALL_STATE(456)] = 7300,
  [SMALL_STATE(457)] = 7314,
  [SMALL_STATE(458)] = 7330,
  [SMALL_STATE(459)] = 7344,
  [SMALL_STATE(460)] = 7360,
  [SMALL_STATE(461)] = 7374,
  [SMALL_STATE(462)] = 7390,
  [SMALL_STATE(463)] = 7404,
  [SMALL_STATE(464)] = 7420,
  [SMALL_STATE(465)] = 7436,
  [SMALL_STATE(466)] = 7452,
  [SMALL_STATE(467)] = 7468,
  [SMALL_STATE(468)] = 7484,
  [SMALL_STATE(469)] = 7498,
  [SMALL_STATE(470)] = 7512,
  [SMALL_STATE(471)] = 7526,
  [SMALL_STATE(472)] = 7540,
  [SMALL_STATE(473)] = 7554,
  [SMALL_STATE(474)] = 7570,
  [SMALL_STATE(475)] = 7586,
  [SMALL_STATE(476)] = 7600,
  [SMALL_STATE(477)] = 7614,
  [SMALL_STATE(478)] = 7628,
  [SMALL_STATE(479)] = 7644,
  [SMALL_STATE(480)] = 7658,
  [SMALL_STATE(481)] = 7672,
  [SMALL_STATE(482)] = 7686,
  [SMALL_STATE(483)] = 7700,
  [SMALL_STATE(484)] = 7714,
  [SMALL_STATE(485)] = 7728,
  [SMALL_STATE(486)] = 7742,
  [SMALL_STATE(487)] = 7756,
  [SMALL_STATE(488)] = 7770,
  [SMALL_STATE(489)] = 7784,
  [SMALL_STATE(490)] = 7798,
  [SMALL_STATE(491)] = 7812,
  [SMALL_STATE(492)] = 7826,
  [SMALL_STATE(493)] = 7840,
  [SMALL_STATE(494)] = 7854,
  [SMALL_STATE(495)] = 7868,
  [SMALL_STATE(496)] = 7882,
  [SMALL_STATE(497)] = 7896,
  [SMALL_STATE(498)] = 7910,
  [SMALL_STATE(499)] = 7924,
  [SMALL_STATE(500)] = 7938,
  [SMALL_STATE(501)] = 7952,
  [SMALL_STATE(502)] = 7966,
  [SMALL_STATE(503)] = 7980,
  [SMALL_STATE(504)] = 7994,
  [SMALL_STATE(505)] = 8008,
  [SMALL_STATE(506)] = 8022,
  [SMALL_STATE(507)] = 8036,
  [SMALL_STATE(508)] = 8050,
  [SMALL_STATE(509)] = 8064,
  [SMALL_STATE(510)] = 8078,
  [SMALL_STATE(511)] = 8092,
  [SMALL_STATE(512)] = 8106,
  [SMALL_STATE(513)] = 8122,
  [SMALL_STATE(514)] = 8136,
  [SMALL_STATE(515)] = 8150,
  [SMALL_STATE(516)] = 8166,
  [SMALL_STATE(517)] = 8180,
  [SMALL_STATE(518)] = 8194,
  [SMALL_STATE(519)] = 8202,
  [SMALL_STATE(520)] = 8210,
  [SMALL_STATE(521)] = 8224,
  [SMALL_STATE(522)] = 8232,
  [SMALL_STATE(523)] = 8246,
  [SMALL_STATE(524)] = 8254,
  [SMALL_STATE(525)] = 8268,
  [SMALL_STATE(526)] = 8284,
  [SMALL_STATE(527)] = 8300,
  [SMALL_STATE(528)] = 8308,
  [SMALL_STATE(529)] = 8316,
  [SMALL_STATE(530)] = 8330,
  [SMALL_STATE(531)] = 8344,
  [SMALL_STATE(532)] = 8358,
  [SMALL_STATE(533)] = 8372,
  [SMALL_STATE(534)] = 8386,
  [SMALL_STATE(535)] = 8400,
  [SMALL_STATE(536)] = 8414,
  [SMALL_STATE(537)] = 8422,
  [SMALL_STATE(538)] = 8436,
  [SMALL_STATE(539)] = 8450,
  [SMALL_STATE(540)] = 8464,
  [SMALL_STATE(541)] = 8478,
  [SMALL_STATE(542)] = 8492,
  [SMALL_STATE(543)] = 8506,
  [SMALL_STATE(544)] = 8514,
  [SMALL_STATE(545)] = 8528,
  [SMALL_STATE(546)] = 8542,
  [SMALL_STATE(547)] = 8556,
  [SMALL_STATE(548)] = 8570,
  [SMALL_STATE(549)] = 8584,
  [SMALL_STATE(550)] = 8598,
  [SMALL_STATE(551)] = 8612,
  [SMALL_STATE(552)] = 8626,
  [SMALL_STATE(553)] = 8634,
  [SMALL_STATE(554)] = 8642,
  [SMALL_STATE(555)] = 8650,
  [SMALL_STATE(556)] = 8658,
  [SMALL_STATE(557)] = 8672,
  [SMALL_STATE(558)] = 8679,
  [SMALL_STATE(559)] = 8686,
  [SMALL_STATE(560)] = 8693,
  [SMALL_STATE(561)] = 8704,
  [SMALL_STATE(562)] = 8715,
  [SMALL_STATE(563)] = 8722,
  [SMALL_STATE(564)] = 8729,
  [SMALL_STATE(565)] = 8736,
  [SMALL_STATE(566)] = 8743,
  [SMALL_STATE(567)] = 8750,
  [SMALL_STATE(568)] = 8757,
  [SMALL_STATE(569)] = 8770,
  [SMALL_STATE(570)] = 8777,
  [SMALL_STATE(571)] = 8784,
  [SMALL_STATE(572)] = 8791,
  [SMALL_STATE(573)] = 8798,
  [SMALL_STATE(574)] = 8805,
  [SMALL_STATE(575)] = 8812,
  [SMALL_STATE(576)] = 8819,
  [SMALL_STATE(577)] = 8826,
  [SMALL_STATE(578)] = 8833,
  [SMALL_STATE(579)] = 8840,
  [SMALL_STATE(580)] = 8851,
  [SMALL_STATE(581)] = 8858,
  [SMALL_STATE(582)] = 8865,
  [SMALL_STATE(583)] = 8872,
  [SMALL_STATE(584)] = 8883,
  [SMALL_STATE(585)] = 8890,
  [SMALL_STATE(586)] = 8897,
  [SMALL_STATE(587)] = 8904,
  [SMALL_STATE(588)] = 8911,
  [SMALL_STATE(589)] = 8918,
  [SMALL_STATE(590)] = 8925,
  [SMALL_STATE(591)] = 8932,
  [SMALL_STATE(592)] = 8939,
  [SMALL_STATE(593)] = 8946,
  [SMALL_STATE(594)] = 8953,
  [SMALL_STATE(595)] = 8960,
  [SMALL_STATE(596)] = 8967,
  [SMALL_STATE(597)] = 8974,
  [SMALL_STATE(598)] = 8981,
  [SMALL_STATE(599)] = 8988,
  [SMALL_STATE(600)] = 8995,
  [SMALL_STATE(601)] = 9002,
  [SMALL_STATE(602)] = 9009,
  [SMALL_STATE(603)] = 9016,
  [SMALL_STATE(604)] = 9023,
  [SMALL_STATE(605)] = 9030,
  [SMALL_STATE(606)] = 9037,
  [SMALL_STATE(607)] = 9044,
  [SMALL_STATE(608)] = 9051,
  [SMALL_STATE(609)] = 9058,
  [SMALL_STATE(610)] = 9069,
  [SMALL_STATE(611)] = 9080,
  [SMALL_STATE(612)] = 9087,
  [SMALL_STATE(613)] = 9100,
  [SMALL_STATE(614)] = 9107,
  [SMALL_STATE(615)] = 9114,
  [SMALL_STATE(616)] = 9121,
  [SMALL_STATE(617)] = 9128,
  [SMALL_STATE(618)] = 9135,
  [SMALL_STATE(619)] = 9142,
  [SMALL_STATE(620)] = 9149,
  [SMALL_STATE(621)] = 9160,
  [SMALL_STATE(622)] = 9167,
  [SMALL_STATE(623)] = 9178,
  [SMALL_STATE(624)] = 9185,
  [SMALL_STATE(625)] = 9198,
  [SMALL_STATE(626)] = 9205,
  [SMALL_STATE(627)] = 9212,
  [SMALL_STATE(628)] = 9219,
  [SMALL_STATE(629)] = 9226,
  [SMALL_STATE(630)] = 9233,
  [SMALL_STATE(631)] = 9240,
  [SMALL_STATE(632)] = 9247,
  [SMALL_STATE(633)] = 9254,
  [SMALL_STATE(634)] = 9261,
  [SMALL_STATE(635)] = 9268,
  [SMALL_STATE(636)] = 9275,
  [SMALL_STATE(637)] = 9288,
  [SMALL_STATE(638)] = 9295,
  [SMALL_STATE(639)] = 9308,
  [SMALL_STATE(640)] = 9319,
  [SMALL_STATE(641)] = 9330,
  [SMALL_STATE(642)] = 9337,
  [SMALL_STATE(643)] = 9344,
  [SMALL_STATE(644)] = 9357,
  [SMALL_STATE(645)] = 9364,
  [SMALL_STATE(646)] = 9371,
  [SMALL_STATE(647)] = 9378,
  [SMALL_STATE(648)] = 9385,
  [SMALL_STATE(649)] = 9392,
  [SMALL_STATE(650)] = 9403,
  [SMALL_STATE(651)] = 9410,
  [SMALL_STATE(652)] = 9417,
  [SMALL_STATE(653)] = 9430,
  [SMALL_STATE(654)] = 9437,
  [SMALL_STATE(655)] = 9444,
  [SMALL_STATE(656)] = 9451,
  [SMALL_STATE(657)] = 9458,
  [SMALL_STATE(658)] = 9465,
  [SMALL_STATE(659)] = 9472,
  [SMALL_STATE(660)] = 9479,
  [SMALL_STATE(661)] = 9486,
  [SMALL_STATE(662)] = 9499,
  [SMALL_STATE(663)] = 9506,
  [SMALL_STATE(664)] = 9513,
  [SMALL_STATE(665)] = 9520,
  [SMALL_STATE(666)] = 9527,
  [SMALL_STATE(667)] = 9534,
  [SMALL_STATE(668)] = 9541,
  [SMALL_STATE(669)] = 9548,
  [SMALL_STATE(670)] = 9555,
  [SMALL_STATE(671)] = 9562,
  [SMALL_STATE(672)] = 9569,
  [SMALL_STATE(673)] = 9576,
  [SMALL_STATE(674)] = 9583,
  [SMALL_STATE(675)] = 9590,
  [SMALL_STATE(676)] = 9597,
  [SMALL_STATE(677)] = 9604,
  [SMALL_STATE(678)] = 9611,
  [SMALL_STATE(679)] = 9618,
  [SMALL_STATE(680)] = 9625,
  [SMALL_STATE(681)] = 9632,
  [SMALL_STATE(682)] = 9639,
  [SMALL_STATE(683)] = 9646,
  [SMALL_STATE(684)] = 9653,
  [SMALL_STATE(685)] = 9660,
  [SMALL_STATE(686)] = 9667,
  [SMALL_STATE(687)] = 9674,
  [SMALL_STATE(688)] = 9681,
  [SMALL_STATE(689)] = 9688,
  [SMALL_STATE(690)] = 9695,
  [SMALL_STATE(691)] = 9702,
  [SMALL_STATE(692)] = 9709,
  [SMALL_STATE(693)] = 9716,
  [SMALL_STATE(694)] = 9723,
  [SMALL_STATE(695)] = 9730,
  [SMALL_STATE(696)] = 9737,
  [SMALL_STATE(697)] = 9744,
  [SMALL_STATE(698)] = 9751,
  [SMALL_STATE(699)] = 9758,
  [SMALL_STATE(700)] = 9765,
  [SMALL_STATE(701)] = 9774,
  [SMALL_STATE(702)] = 9783,
  [SMALL_STATE(703)] = 9790,
  [SMALL_STATE(704)] = 9797,
  [SMALL_STATE(705)] = 9804,
  [SMALL_STATE(706)] = 9817,
  [SMALL_STATE(707)] = 9830,
  [SMALL_STATE(708)] = 9837,
  [SMALL_STATE(709)] = 9850,
  [SMALL_STATE(710)] = 9857,
  [SMALL_STATE(711)] = 9864,
  [SMALL_STATE(712)] = 9871,
  [SMALL_STATE(713)] = 9878,
  [SMALL_STATE(714)] = 9885,
  [SMALL_STATE(715)] = 9892,
  [SMALL_STATE(716)] = 9899,
  [SMALL_STATE(717)] = 9906,
  [SMALL_STATE(718)] = 9913,
  [SMALL_STATE(719)] = 9920,
  [SMALL_STATE(720)] = 9927,
  [SMALL_STATE(721)] = 9940,
  [SMALL_STATE(722)] = 9947,
  [SMALL_STATE(723)] = 9954,
  [SMALL_STATE(724)] = 9961,
  [SMALL_STATE(725)] = 9968,
  [SMALL_STATE(726)] = 9975,
  [SMALL_STATE(727)] = 9982,
  [SMALL_STATE(728)] = 9989,
  [SMALL_STATE(729)] = 9996,
  [SMALL_STATE(730)] = 10003,
  [SMALL_STATE(731)] = 10014,
  [SMALL_STATE(732)] = 10021,
  [SMALL_STATE(733)] = 10028,
  [SMALL_STATE(734)] = 10035,
  [SMALL_STATE(735)] = 10042,
  [SMALL_STATE(736)] = 10049,
  [SMALL_STATE(737)] = 10056,
  [SMALL_STATE(738)] = 10069,
  [SMALL_STATE(739)] = 10076,
  [SMALL_STATE(740)] = 10083,
  [SMALL_STATE(741)] = 10090,
  [SMALL_STATE(742)] = 10097,
  [SMALL_STATE(743)] = 10110,
  [SMALL_STATE(744)] = 10117,
  [SMALL_STATE(745)] = 10124,
  [SMALL_STATE(746)] = 10135,
  [SMALL_STATE(747)] = 10142,
  [SMALL_STATE(748)] = 10149,
  [SMALL_STATE(749)] = 10156,
  [SMALL_STATE(750)] = 10163,
  [SMALL_STATE(751)] = 10170,
  [SMALL_STATE(752)] = 10177,
  [SMALL_STATE(753)] = 10184,
  [SMALL_STATE(754)] = 10191,
  [SMALL_STATE(755)] = 10204,
  [SMALL_STATE(756)] = 10211,
  [SMALL_STATE(757)] = 10218,
  [SMALL_STATE(758)] = 10225,
  [SMALL_STATE(759)] = 10232,
  [SMALL_STATE(760)] = 10239,
  [SMALL_STATE(761)] = 10246,
  [SMALL_STATE(762)] = 10253,
  [SMALL_STATE(763)] = 10260,
  [SMALL_STATE(764)] = 10267,
  [SMALL_STATE(765)] = 10274,
  [SMALL_STATE(766)] = 10281,
  [SMALL_STATE(767)] = 10294,
  [SMALL_STATE(768)] = 10301,
  [SMALL_STATE(769)] = 10308,
  [SMALL_STATE(770)] = 10317,
  [SMALL_STATE(771)] = 10324,
  [SMALL_STATE(772)] = 10337,
  [SMALL_STATE(773)] = 10344,
  [SMALL_STATE(774)] = 10351,
  [SMALL_STATE(775)] = 10358,
  [SMALL_STATE(776)] = 10365,
  [SMALL_STATE(777)] = 10372,
  [SMALL_STATE(778)] = 10385,
  [SMALL_STATE(779)] = 10396,
  [SMALL_STATE(780)] = 10403,
  [SMALL_STATE(781)] = 10410,
  [SMALL_STATE(782)] = 10417,
  [SMALL_STATE(783)] = 10424,
  [SMALL_STATE(784)] = 10431,
  [SMALL_STATE(785)] = 10438,
  [SMALL_STATE(786)] = 10451,
  [SMALL_STATE(787)] = 10458,
  [SMALL_STATE(788)] = 10465,
  [SMALL_STATE(789)] = 10472,
  [SMALL_STATE(790)] = 10479,
  [SMALL_STATE(791)] = 10486,
  [SMALL_STATE(792)] = 10493,
  [SMALL_STATE(793)] = 10506,
  [SMALL_STATE(794)] = 10519,
  [SMALL_STATE(795)] = 10526,
  [SMALL_STATE(796)] = 10535,
  [SMALL_STATE(797)] = 10542,
  [SMALL_STATE(798)] = 10555,
  [SMALL_STATE(799)] = 10562,
  [SMALL_STATE(800)] = 10569,
  [SMALL_STATE(801)] = 10576,
  [SMALL_STATE(802)] = 10583,
  [SMALL_STATE(803)] = 10590,
  [SMALL_STATE(804)] = 10597,
  [SMALL_STATE(805)] = 10604,
  [SMALL_STATE(806)] = 10611,
  [SMALL_STATE(807)] = 10618,
  [SMALL_STATE(808)] = 10625,
  [SMALL_STATE(809)] = 10632,
  [SMALL_STATE(810)] = 10639,
  [SMALL_STATE(811)] = 10646,
  [SMALL_STATE(812)] = 10653,
  [SMALL_STATE(813)] = 10660,
  [SMALL_STATE(814)] = 10667,
  [SMALL_STATE(815)] = 10680,
  [SMALL_STATE(816)] = 10687,
  [SMALL_STATE(817)] = 10694,
  [SMALL_STATE(818)] = 10701,
  [SMALL_STATE(819)] = 10708,
  [SMALL_STATE(820)] = 10721,
  [SMALL_STATE(821)] = 10728,
  [SMALL_STATE(822)] = 10735,
  [SMALL_STATE(823)] = 10742,
  [SMALL_STATE(824)] = 10749,
  [SMALL_STATE(825)] = 10756,
  [SMALL_STATE(826)] = 10763,
  [SMALL_STATE(827)] = 10770,
  [SMALL_STATE(828)] = 10777,
  [SMALL_STATE(829)] = 10784,
  [SMALL_STATE(830)] = 10791,
  [SMALL_STATE(831)] = 10798,
  [SMALL_STATE(832)] = 10811,
  [SMALL_STATE(833)] = 10818,
  [SMALL_STATE(834)] = 10825,
  [SMALL_STATE(835)] = 10832,
  [SMALL_STATE(836)] = 10839,
  [SMALL_STATE(837)] = 10846,
  [SMALL_STATE(838)] = 10853,
  [SMALL_STATE(839)] = 10860,
  [SMALL_STATE(840)] = 10867,
  [SMALL_STATE(841)] = 10874,
  [SMALL_STATE(842)] = 10881,
  [SMALL_STATE(843)] = 10888,
  [SMALL_STATE(844)] = 10895,
  [SMALL_STATE(845)] = 10902,
  [SMALL_STATE(846)] = 10909,
  [SMALL_STATE(847)] = 10916,
  [SMALL_STATE(848)] = 10923,
  [SMALL_STATE(849)] = 10930,
  [SMALL_STATE(850)] = 10937,
  [SMALL_STATE(851)] = 10944,
  [SMALL_STATE(852)] = 10951,
  [SMALL_STATE(853)] = 10958,
  [SMALL_STATE(854)] = 10965,
  [SMALL_STATE(855)] = 10972,
  [SMALL_STATE(856)] = 10979,
  [SMALL_STATE(857)] = 10986,
  [SMALL_STATE(858)] = 10993,
  [SMALL_STATE(859)] = 11000,
  [SMALL_STATE(860)] = 11007,
  [SMALL_STATE(861)] = 11014,
  [SMALL_STATE(862)] = 11021,
  [SMALL_STATE(863)] = 11034,
  [SMALL_STATE(864)] = 11041,
  [SMALL_STATE(865)] = 11048,
  [SMALL_STATE(866)] = 11055,
  [SMALL_STATE(867)] = 11068,
  [SMALL_STATE(868)] = 11075,
  [SMALL_STATE(869)] = 11082,
  [SMALL_STATE(870)] = 11089,
  [SMALL_STATE(871)] = 11096,
  [SMALL_STATE(872)] = 11103,
  [SMALL_STATE(873)] = 11110,
  [SMALL_STATE(874)] = 11117,
  [SMALL_STATE(875)] = 11124,
  [SMALL_STATE(876)] = 11135,
  [SMALL_STATE(877)] = 11146,
  [SMALL_STATE(878)] = 11153,
  [SMALL_STATE(879)] = 11164,
  [SMALL_STATE(880)] = 11175,
  [SMALL_STATE(881)] = 11182,
  [SMALL_STATE(882)] = 11191,
  [SMALL_STATE(883)] = 11198,
  [SMALL_STATE(884)] = 11211,
  [SMALL_STATE(885)] = 11222,
  [SMALL_STATE(886)] = 11233,
  [SMALL_STATE(887)] = 11240,
  [SMALL_STATE(888)] = 11251,
  [SMALL_STATE(889)] = 11262,
  [SMALL_STATE(890)] = 11269,
  [SMALL_STATE(891)] = 11276,
  [SMALL_STATE(892)] = 11287,
  [SMALL_STATE(893)] = 11298,
  [SMALL_STATE(894)] = 11309,
  [SMALL_STATE(895)] = 11320,
  [SMALL_STATE(896)] = 11329,
  [SMALL_STATE(897)] = 11336,
  [SMALL_STATE(898)] = 11343,
  [SMALL_STATE(899)] = 11350,
  [SMALL_STATE(900)] = 11357,
  [SMALL_STATE(901)] = 11364,
  [SMALL_STATE(902)] = 11371,
  [SMALL_STATE(903)] = 11378,
  [SMALL_STATE(904)] = 11391,
  [SMALL_STATE(905)] = 11402,
  [SMALL_STATE(906)] = 11415,
  [SMALL_STATE(907)] = 11422,
  [SMALL_STATE(908)] = 11429,
  [SMALL_STATE(909)] = 11442,
  [SMALL_STATE(910)] = 11449,
  [SMALL_STATE(911)] = 11456,
  [SMALL_STATE(912)] = 11463,
  [SMALL_STATE(913)] = 11470,
  [SMALL_STATE(914)] = 11477,
  [SMALL_STATE(915)] = 11484,
  [SMALL_STATE(916)] = 11491,
  [SMALL_STATE(917)] = 11498,
  [SMALL_STATE(918)] = 11505,
  [SMALL_STATE(919)] = 11512,
  [SMALL_STATE(920)] = 11519,
  [SMALL_STATE(921)] = 11526,
  [SMALL_STATE(922)] = 11533,
  [SMALL_STATE(923)] = 11540,
  [SMALL_STATE(924)] = 11547,
  [SMALL_STATE(925)] = 11554,
  [SMALL_STATE(926)] = 11561,
  [SMALL_STATE(927)] = 11571,
  [SMALL_STATE(928)] = 11579,
  [SMALL_STATE(929)] = 11589,
  [SMALL_STATE(930)] = 11599,
  [SMALL_STATE(931)] = 11609,
  [SMALL_STATE(932)] = 11619,
  [SMALL_STATE(933)] = 11625,
  [SMALL_STATE(934)] = 11631,
  [SMALL_STATE(935)] = 11637,
  [SMALL_STATE(936)] = 11643,
  [SMALL_STATE(937)] = 11649,
  [SMALL_STATE(938)] = 11655,
  [SMALL_STATE(939)] = 11661,
  [SMALL_STATE(940)] = 11667,
  [SMALL_STATE(941)] = 11673,
  [SMALL_STATE(942)] = 11679,
  [SMALL_STATE(943)] = 11685,
  [SMALL_STATE(944)] = 11691,
  [SMALL_STATE(945)] = 11697,
  [SMALL_STATE(946)] = 11707,
  [SMALL_STATE(947)] = 11717,
  [SMALL_STATE(948)] = 11727,
  [SMALL_STATE(949)] = 11733,
  [SMALL_STATE(950)] = 11743,
  [SMALL_STATE(951)] = 11753,
  [SMALL_STATE(952)] = 11763,
  [SMALL_STATE(953)] = 11773,
  [SMALL_STATE(954)] = 11783,
  [SMALL_STATE(955)] = 11793,
  [SMALL_STATE(956)] = 11803,
  [SMALL_STATE(957)] = 11813,
  [SMALL_STATE(958)] = 11823,
  [SMALL_STATE(959)] = 11833,
  [SMALL_STATE(960)] = 11843,
  [SMALL_STATE(961)] = 11853,
  [SMALL_STATE(962)] = 11863,
  [SMALL_STATE(963)] = 11873,
  [SMALL_STATE(964)] = 11883,
  [SMALL_STATE(965)] = 11893,
  [SMALL_STATE(966)] = 11903,
  [SMALL_STATE(967)] = 11911,
  [SMALL_STATE(968)] = 11921,
  [SMALL_STATE(969)] = 11931,
  [SMALL_STATE(970)] = 11941,
  [SMALL_STATE(971)] = 11951,
  [SMALL_STATE(972)] = 11961,
  [SMALL_STATE(973)] = 11971,
  [SMALL_STATE(974)] = 11977,
  [SMALL_STATE(975)] = 11987,
  [SMALL_STATE(976)] = 11997,
  [SMALL_STATE(977)] = 12007,
  [SMALL_STATE(978)] = 12017,
  [SMALL_STATE(979)] = 12027,
  [SMALL_STATE(980)] = 12037,
  [SMALL_STATE(981)] = 12047,
  [SMALL_STATE(982)] = 12057,
  [SMALL_STATE(983)] = 12067,
  [SMALL_STATE(984)] = 12077,
  [SMALL_STATE(985)] = 12087,
  [SMALL_STATE(986)] = 12097,
  [SMALL_STATE(987)] = 12107,
  [SMALL_STATE(988)] = 12117,
  [SMALL_STATE(989)] = 12127,
  [SMALL_STATE(990)] = 12137,
  [SMALL_STATE(991)] = 12147,
  [SMALL_STATE(992)] = 12157,
  [SMALL_STATE(993)] = 12167,
  [SMALL_STATE(994)] = 12177,
  [SMALL_STATE(995)] = 12183,
  [SMALL_STATE(996)] = 12189,
  [SMALL_STATE(997)] = 12199,
  [SMALL_STATE(998)] = 12209,
  [SMALL_STATE(999)] = 12219,
  [SMALL_STATE(1000)] = 12229,
  [SMALL_STATE(1001)] = 12239,
  [SMALL_STATE(1002)] = 12245,
  [SMALL_STATE(1003)] = 12255,
  [SMALL_STATE(1004)] = 12265,
  [SMALL_STATE(1005)] = 12275,
  [SMALL_STATE(1006)] = 12285,
  [SMALL_STATE(1007)] = 12295,
  [SMALL_STATE(1008)] = 12305,
  [SMALL_STATE(1009)] = 12311,
  [SMALL_STATE(1010)] = 12317,
  [SMALL_STATE(1011)] = 12325,
  [SMALL_STATE(1012)] = 12335,
  [SMALL_STATE(1013)] = 12341,
  [SMALL_STATE(1014)] = 12347,
  [SMALL_STATE(1015)] = 12357,
  [SMALL_STATE(1016)] = 12363,
  [SMALL_STATE(1017)] = 12369,
  [SMALL_STATE(1018)] = 12375,
  [SMALL_STATE(1019)] = 12381,
  [SMALL_STATE(1020)] = 12387,
  [SMALL_STATE(1021)] = 12397,
  [SMALL_STATE(1022)] = 12403,
  [SMALL_STATE(1023)] = 12413,
  [SMALL_STATE(1024)] = 12423,
  [SMALL_STATE(1025)] = 12433,
  [SMALL_STATE(1026)] = 12443,
  [SMALL_STATE(1027)] = 12453,
  [SMALL_STATE(1028)] = 12463,
  [SMALL_STATE(1029)] = 12473,
  [SMALL_STATE(1030)] = 12483,
  [SMALL_STATE(1031)] = 12491,
  [SMALL_STATE(1032)] = 12501,
  [SMALL_STATE(1033)] = 12509,
  [SMALL_STATE(1034)] = 12519,
  [SMALL_STATE(1035)] = 12527,
  [SMALL_STATE(1036)] = 12537,
  [SMALL_STATE(1037)] = 12547,
  [SMALL_STATE(1038)] = 12553,
  [SMALL_STATE(1039)] = 12561,
  [SMALL_STATE(1040)] = 12571,
  [SMALL_STATE(1041)] = 12581,
  [SMALL_STATE(1042)] = 12591,
  [SMALL_STATE(1043)] = 12601,
  [SMALL_STATE(1044)] = 12611,
  [SMALL_STATE(1045)] = 12621,
  [SMALL_STATE(1046)] = 12631,
  [SMALL_STATE(1047)] = 12641,
  [SMALL_STATE(1048)] = 12651,
  [SMALL_STATE(1049)] = 12661,
  [SMALL_STATE(1050)] = 12671,
  [SMALL_STATE(1051)] = 12681,
  [SMALL_STATE(1052)] = 12691,
  [SMALL_STATE(1053)] = 12701,
  [SMALL_STATE(1054)] = 12711,
  [SMALL_STATE(1055)] = 12721,
  [SMALL_STATE(1056)] = 12731,
  [SMALL_STATE(1057)] = 12741,
  [SMALL_STATE(1058)] = 12751,
  [SMALL_STATE(1059)] = 12761,
  [SMALL_STATE(1060)] = 12771,
  [SMALL_STATE(1061)] = 12781,
  [SMALL_STATE(1062)] = 12791,
  [SMALL_STATE(1063)] = 12801,
  [SMALL_STATE(1064)] = 12811,
  [SMALL_STATE(1065)] = 12821,
  [SMALL_STATE(1066)] = 12831,
  [SMALL_STATE(1067)] = 12841,
  [SMALL_STATE(1068)] = 12847,
  [SMALL_STATE(1069)] = 12857,
  [SMALL_STATE(1070)] = 12867,
  [SMALL_STATE(1071)] = 12875,
  [SMALL_STATE(1072)] = 12885,
  [SMALL_STATE(1073)] = 12895,
  [SMALL_STATE(1074)] = 12905,
  [SMALL_STATE(1075)] = 12915,
  [SMALL_STATE(1076)] = 12925,
  [SMALL_STATE(1077)] = 12931,
  [SMALL_STATE(1078)] = 12941,
  [SMALL_STATE(1079)] = 12951,
  [SMALL_STATE(1080)] = 12961,
  [SMALL_STATE(1081)] = 12971,
  [SMALL_STATE(1082)] = 12977,
  [SMALL_STATE(1083)] = 12985,
  [SMALL_STATE(1084)] = 12995,
  [SMALL_STATE(1085)] = 13005,
  [SMALL_STATE(1086)] = 13015,
  [SMALL_STATE(1087)] = 13025,
  [SMALL_STATE(1088)] = 13033,
  [SMALL_STATE(1089)] = 13039,
  [SMALL_STATE(1090)] = 13049,
  [SMALL_STATE(1091)] = 13059,
  [SMALL_STATE(1092)] = 13069,
  [SMALL_STATE(1093)] = 13075,
  [SMALL_STATE(1094)] = 13081,
  [SMALL_STATE(1095)] = 13087,
  [SMALL_STATE(1096)] = 13093,
  [SMALL_STATE(1097)] = 13103,
  [SMALL_STATE(1098)] = 13109,
  [SMALL_STATE(1099)] = 13115,
  [SMALL_STATE(1100)] = 13121,
  [SMALL_STATE(1101)] = 13131,
  [SMALL_STATE(1102)] = 13137,
  [SMALL_STATE(1103)] = 13147,
  [SMALL_STATE(1104)] = 13157,
  [SMALL_STATE(1105)] = 13163,
  [SMALL_STATE(1106)] = 13169,
  [SMALL_STATE(1107)] = 13179,
  [SMALL_STATE(1108)] = 13189,
  [SMALL_STATE(1109)] = 13195,
  [SMALL_STATE(1110)] = 13205,
  [SMALL_STATE(1111)] = 13215,
  [SMALL_STATE(1112)] = 13221,
  [SMALL_STATE(1113)] = 13227,
  [SMALL_STATE(1114)] = 13237,
  [SMALL_STATE(1115)] = 13247,
  [SMALL_STATE(1116)] = 13257,
  [SMALL_STATE(1117)] = 13267,
  [SMALL_STATE(1118)] = 13277,
  [SMALL_STATE(1119)] = 13287,
  [SMALL_STATE(1120)] = 13297,
  [SMALL_STATE(1121)] = 13307,
  [SMALL_STATE(1122)] = 13313,
  [SMALL_STATE(1123)] = 13323,
  [SMALL_STATE(1124)] = 13329,
  [SMALL_STATE(1125)] = 13339,
  [SMALL_STATE(1126)] = 13349,
  [SMALL_STATE(1127)] = 13355,
  [SMALL_STATE(1128)] = 13363,
  [SMALL_STATE(1129)] = 13373,
  [SMALL_STATE(1130)] = 13383,
  [SMALL_STATE(1131)] = 13393,
  [SMALL_STATE(1132)] = 13403,
  [SMALL_STATE(1133)] = 13413,
  [SMALL_STATE(1134)] = 13423,
  [SMALL_STATE(1135)] = 13433,
  [SMALL_STATE(1136)] = 13443,
  [SMALL_STATE(1137)] = 13449,
  [SMALL_STATE(1138)] = 13456,
  [SMALL_STATE(1139)] = 13463,
  [SMALL_STATE(1140)] = 13470,
  [SMALL_STATE(1141)] = 13477,
  [SMALL_STATE(1142)] = 13484,
  [SMALL_STATE(1143)] = 13489,
  [SMALL_STATE(1144)] = 13494,
  [SMALL_STATE(1145)] = 13499,
  [SMALL_STATE(1146)] = 13506,
  [SMALL_STATE(1147)] = 13513,
  [SMALL_STATE(1148)] = 13520,
  [SMALL_STATE(1149)] = 13527,
  [SMALL_STATE(1150)] = 13534,
  [SMALL_STATE(1151)] = 13541,
  [SMALL_STATE(1152)] = 13548,
  [SMALL_STATE(1153)] = 13555,
  [SMALL_STATE(1154)] = 13562,
  [SMALL_STATE(1155)] = 13569,
  [SMALL_STATE(1156)] = 13574,
  [SMALL_STATE(1157)] = 13581,
  [SMALL_STATE(1158)] = 13586,
  [SMALL_STATE(1159)] = 13591,
  [SMALL_STATE(1160)] = 13598,
  [SMALL_STATE(1161)] = 13605,
  [SMALL_STATE(1162)] = 13612,
  [SMALL_STATE(1163)] = 13619,
  [SMALL_STATE(1164)] = 13624,
  [SMALL_STATE(1165)] = 13631,
  [SMALL_STATE(1166)] = 13638,
  [SMALL_STATE(1167)] = 13645,
  [SMALL_STATE(1168)] = 13650,
  [SMALL_STATE(1169)] = 13657,
  [SMALL_STATE(1170)] = 13664,
  [SMALL_STATE(1171)] = 13669,
  [SMALL_STATE(1172)] = 13676,
  [SMALL_STATE(1173)] = 13683,
  [SMALL_STATE(1174)] = 13690,
  [SMALL_STATE(1175)] = 13695,
  [SMALL_STATE(1176)] = 13700,
  [SMALL_STATE(1177)] = 13707,
  [SMALL_STATE(1178)] = 13714,
  [SMALL_STATE(1179)] = 13721,
  [SMALL_STATE(1180)] = 13728,
  [SMALL_STATE(1181)] = 13735,
  [SMALL_STATE(1182)] = 13742,
  [SMALL_STATE(1183)] = 13749,
  [SMALL_STATE(1184)] = 13756,
  [SMALL_STATE(1185)] = 13763,
  [SMALL_STATE(1186)] = 13770,
  [SMALL_STATE(1187)] = 13777,
  [SMALL_STATE(1188)] = 13784,
  [SMALL_STATE(1189)] = 13791,
  [SMALL_STATE(1190)] = 13798,
  [SMALL_STATE(1191)] = 13803,
  [SMALL_STATE(1192)] = 13808,
  [SMALL_STATE(1193)] = 13813,
  [SMALL_STATE(1194)] = 13820,
  [SMALL_STATE(1195)] = 13827,
  [SMALL_STATE(1196)] = 13834,
  [SMALL_STATE(1197)] = 13841,
  [SMALL_STATE(1198)] = 13848,
  [SMALL_STATE(1199)] = 13855,
  [SMALL_STATE(1200)] = 13862,
  [SMALL_STATE(1201)] = 13869,
  [SMALL_STATE(1202)] = 13876,
  [SMALL_STATE(1203)] = 13883,
  [SMALL_STATE(1204)] = 13890,
  [SMALL_STATE(1205)] = 13897,
  [SMALL_STATE(1206)] = 13904,
  [SMALL_STATE(1207)] = 13909,
  [SMALL_STATE(1208)] = 13916,
  [SMALL_STATE(1209)] = 13923,
  [SMALL_STATE(1210)] = 13930,
  [SMALL_STATE(1211)] = 13937,
  [SMALL_STATE(1212)] = 13944,
  [SMALL_STATE(1213)] = 13951,
  [SMALL_STATE(1214)] = 13958,
  [SMALL_STATE(1215)] = 13965,
  [SMALL_STATE(1216)] = 13972,
  [SMALL_STATE(1217)] = 13979,
  [SMALL_STATE(1218)] = 13986,
  [SMALL_STATE(1219)] = 13993,
  [SMALL_STATE(1220)] = 13998,
  [SMALL_STATE(1221)] = 14003,
  [SMALL_STATE(1222)] = 14010,
  [SMALL_STATE(1223)] = 14017,
  [SMALL_STATE(1224)] = 14024,
  [SMALL_STATE(1225)] = 14031,
  [SMALL_STATE(1226)] = 14038,
  [SMALL_STATE(1227)] = 14045,
  [SMALL_STATE(1228)] = 14052,
  [SMALL_STATE(1229)] = 14059,
  [SMALL_STATE(1230)] = 14066,
  [SMALL_STATE(1231)] = 14073,
  [SMALL_STATE(1232)] = 14080,
  [SMALL_STATE(1233)] = 14085,
  [SMALL_STATE(1234)] = 14092,
  [SMALL_STATE(1235)] = 14099,
  [SMALL_STATE(1236)] = 14106,
  [SMALL_STATE(1237)] = 14113,
  [SMALL_STATE(1238)] = 14120,
  [SMALL_STATE(1239)] = 14127,
  [SMALL_STATE(1240)] = 14134,
  [SMALL_STATE(1241)] = 14141,
  [SMALL_STATE(1242)] = 14146,
  [SMALL_STATE(1243)] = 14153,
  [SMALL_STATE(1244)] = 14158,
  [SMALL_STATE(1245)] = 14165,
  [SMALL_STATE(1246)] = 14172,
  [SMALL_STATE(1247)] = 14179,
  [SMALL_STATE(1248)] = 14184,
  [SMALL_STATE(1249)] = 14191,
  [SMALL_STATE(1250)] = 14198,
  [SMALL_STATE(1251)] = 14205,
  [SMALL_STATE(1252)] = 14212,
  [SMALL_STATE(1253)] = 14219,
  [SMALL_STATE(1254)] = 14226,
  [SMALL_STATE(1255)] = 14230,
  [SMALL_STATE(1256)] = 14234,
  [SMALL_STATE(1257)] = 14238,
  [SMALL_STATE(1258)] = 14242,
  [SMALL_STATE(1259)] = 14246,
  [SMALL_STATE(1260)] = 14250,
  [SMALL_STATE(1261)] = 14254,
  [SMALL_STATE(1262)] = 14258,
  [SMALL_STATE(1263)] = 14262,
  [SMALL_STATE(1264)] = 14266,
  [SMALL_STATE(1265)] = 14270,
  [SMALL_STATE(1266)] = 14274,
  [SMALL_STATE(1267)] = 14278,
  [SMALL_STATE(1268)] = 14282,
  [SMALL_STATE(1269)] = 14286,
  [SMALL_STATE(1270)] = 14290,
  [SMALL_STATE(1271)] = 14294,
  [SMALL_STATE(1272)] = 14298,
  [SMALL_STATE(1273)] = 14302,
  [SMALL_STATE(1274)] = 14306,
  [SMALL_STATE(1275)] = 14310,
  [SMALL_STATE(1276)] = 14314,
  [SMALL_STATE(1277)] = 14318,
  [SMALL_STATE(1278)] = 14322,
  [SMALL_STATE(1279)] = 14326,
  [SMALL_STATE(1280)] = 14330,
  [SMALL_STATE(1281)] = 14334,
  [SMALL_STATE(1282)] = 14338,
  [SMALL_STATE(1283)] = 14342,
  [SMALL_STATE(1284)] = 14346,
  [SMALL_STATE(1285)] = 14350,
  [SMALL_STATE(1286)] = 14354,
  [SMALL_STATE(1287)] = 14358,
  [SMALL_STATE(1288)] = 14362,
  [SMALL_STATE(1289)] = 14366,
  [SMALL_STATE(1290)] = 14370,
  [SMALL_STATE(1291)] = 14374,
  [SMALL_STATE(1292)] = 14378,
  [SMALL_STATE(1293)] = 14382,
  [SMALL_STATE(1294)] = 14386,
  [SMALL_STATE(1295)] = 14390,
  [SMALL_STATE(1296)] = 14394,
  [SMALL_STATE(1297)] = 14398,
  [SMALL_STATE(1298)] = 14402,
  [SMALL_STATE(1299)] = 14406,
  [SMALL_STATE(1300)] = 14410,
  [SMALL_STATE(1301)] = 14414,
  [SMALL_STATE(1302)] = 14418,
  [SMALL_STATE(1303)] = 14422,
  [SMALL_STATE(1304)] = 14426,
  [SMALL_STATE(1305)] = 14430,
  [SMALL_STATE(1306)] = 14434,
  [SMALL_STATE(1307)] = 14438,
  [SMALL_STATE(1308)] = 14442,
  [SMALL_STATE(1309)] = 14446,
  [SMALL_STATE(1310)] = 14450,
  [SMALL_STATE(1311)] = 14454,
  [SMALL_STATE(1312)] = 14458,
  [SMALL_STATE(1313)] = 14462,
  [SMALL_STATE(1314)] = 14466,
  [SMALL_STATE(1315)] = 14470,
  [SMALL_STATE(1316)] = 14474,
  [SMALL_STATE(1317)] = 14478,
  [SMALL_STATE(1318)] = 14482,
  [SMALL_STATE(1319)] = 14486,
  [SMALL_STATE(1320)] = 14490,
  [SMALL_STATE(1321)] = 14494,
  [SMALL_STATE(1322)] = 14498,
  [SMALL_STATE(1323)] = 14502,
  [SMALL_STATE(1324)] = 14506,
  [SMALL_STATE(1325)] = 14510,
  [SMALL_STATE(1326)] = 14514,
  [SMALL_STATE(1327)] = 14518,
  [SMALL_STATE(1328)] = 14522,
  [SMALL_STATE(1329)] = 14526,
  [SMALL_STATE(1330)] = 14530,
  [SMALL_STATE(1331)] = 14534,
  [SMALL_STATE(1332)] = 14538,
  [SMALL_STATE(1333)] = 14542,
  [SMALL_STATE(1334)] = 14546,
  [SMALL_STATE(1335)] = 14550,
  [SMALL_STATE(1336)] = 14554,
  [SMALL_STATE(1337)] = 14558,
  [SMALL_STATE(1338)] = 14562,
  [SMALL_STATE(1339)] = 14566,
  [SMALL_STATE(1340)] = 14570,
  [SMALL_STATE(1341)] = 14574,
  [SMALL_STATE(1342)] = 14578,
  [SMALL_STATE(1343)] = 14582,
  [SMALL_STATE(1344)] = 14586,
  [SMALL_STATE(1345)] = 14590,
  [SMALL_STATE(1346)] = 14594,
  [SMALL_STATE(1347)] = 14598,
  [SMALL_STATE(1348)] = 14602,
  [SMALL_STATE(1349)] = 14606,
  [SMALL_STATE(1350)] = 14610,
  [SMALL_STATE(1351)] = 14614,
  [SMALL_STATE(1352)] = 14618,
  [SMALL_STATE(1353)] = 14622,
  [SMALL_STATE(1354)] = 14626,
  [SMALL_STATE(1355)] = 14630,
  [SMALL_STATE(1356)] = 14634,
  [SMALL_STATE(1357)] = 14638,
  [SMALL_STATE(1358)] = 14642,
  [SMALL_STATE(1359)] = 14646,
  [SMALL_STATE(1360)] = 14650,
  [SMALL_STATE(1361)] = 14654,
  [SMALL_STATE(1362)] = 14658,
  [SMALL_STATE(1363)] = 14662,
  [SMALL_STATE(1364)] = 14666,
  [SMALL_STATE(1365)] = 14670,
  [SMALL_STATE(1366)] = 14674,
  [SMALL_STATE(1367)] = 14678,
  [SMALL_STATE(1368)] = 14682,
  [SMALL_STATE(1369)] = 14686,
  [SMALL_STATE(1370)] = 14690,
  [SMALL_STATE(1371)] = 14694,
  [SMALL_STATE(1372)] = 14698,
  [SMALL_STATE(1373)] = 14702,
  [SMALL_STATE(1374)] = 14706,
  [SMALL_STATE(1375)] = 14710,
  [SMALL_STATE(1376)] = 14714,
  [SMALL_STATE(1377)] = 14718,
  [SMALL_STATE(1378)] = 14722,
  [SMALL_STATE(1379)] = 14726,
  [SMALL_STATE(1380)] = 14730,
  [SMALL_STATE(1381)] = 14734,
  [SMALL_STATE(1382)] = 14738,
  [SMALL_STATE(1383)] = 14742,
  [SMALL_STATE(1384)] = 14746,
  [SMALL_STATE(1385)] = 14750,
  [SMALL_STATE(1386)] = 14754,
  [SMALL_STATE(1387)] = 14758,
  [SMALL_STATE(1388)] = 14762,
  [SMALL_STATE(1389)] = 14766,
  [SMALL_STATE(1390)] = 14770,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1127),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1390),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1378),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1310),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1161),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1333),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1266),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1195),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1272),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1273),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1082),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1073),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1207),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1299),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1300),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1087),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1074),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1274),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1370),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1249),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1101),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1285),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1288),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1290),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1129),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1064),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1323),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1152),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1332),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(74),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(143),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(1182),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1182),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(145),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1151),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1147),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1360),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1166),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1390),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1381),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1146),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1378),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1217),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1218),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1158),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(752),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 46),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 28),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 34),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 35),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 36),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 2, 0, 37),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 38),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 39),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 1, 0, 40),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 41),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 40),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 41),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 41),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 48),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 37),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 35),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 49),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 50),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 38),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 51),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_using_complement, 2, 0, 37),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 38),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 52),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 2, 0, 48),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 39),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 38),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 40),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 53),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 37),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 40),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 53),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 55),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 55),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 40),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 56),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1321),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 62),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 63),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 64),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 52),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_line, 2, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 65),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 39),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 67),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 53),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 67),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 53),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 37),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 40),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 53),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 69),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 70),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 52),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 4, 0, 69),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 65),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 67),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 53),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 72),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 6, 0, 70),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 72),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 7, 0, 76),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 77),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 78),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 76),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 80),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 77),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 82),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 83),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 84),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 78),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 85),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 86),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 9, 0, 80),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 82),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 83),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 87),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 84),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 88),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 85),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 89),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 86),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 90),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 87),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 88),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 89),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 91),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 90),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 11, 0, 91),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1375),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 60),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 61),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1329),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1233),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 61),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1256),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1046),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(1111),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [1546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [1551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1375),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 46),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 47),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1321),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 2, 0, 37),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 47),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 59),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1068),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 68),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(966),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1258),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 30),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 4, 0, 44),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 71),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 5, 0, 73),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 6, 0, 75),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_text_body, 3, 0, 0),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1190),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1206),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 7, 0, 79),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 33),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1256),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1302),
  [1833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1257),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1043),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1060),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 33),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 44),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1357),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(945),
  [1944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 37),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(904),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1372),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1358),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 66),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 37),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [2001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [2003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 74),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until_complement, 3, 2, 81),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 48),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1342),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1339),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [2053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 54),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1241),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 42),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1374),
  [2083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1382),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1350),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1351),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1367),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1369),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1388),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 57),
  [2181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1352),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1353),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [2203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1380),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1340),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1244),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1376),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1373),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [2355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 58),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1349),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [2459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [2469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
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
  ts_external_token__settle_indent = 15,
  ts_external_token__settle_text_start = 16,
  ts_external_token__text_indent = 17,
  ts_external_token__cap_text_start = 18,
  ts_external_token_indented_raw_text = 19,
  ts_external_token__flow_raw_text = 20,
  ts_external_token__agic_raw_text = 21,
  ts_external_token__error_line = 22,
  ts_external_token__exec_binding_start = 23,
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
  [ts_external_token__settle_indent] = sym__settle_indent,
  [ts_external_token__settle_text_start] = sym__settle_text_start,
  [ts_external_token__text_indent] = sym__text_indent,
  [ts_external_token__cap_text_start] = sym__cap_text_start,
  [ts_external_token_indented_raw_text] = sym_indented_raw_text,
  [ts_external_token__flow_raw_text] = sym__flow_raw_text,
  [ts_external_token__agic_raw_text] = sym__agic_raw_text,
  [ts_external_token__error_line] = sym__error_line,
  [ts_external_token__exec_binding_start] = sym__exec_binding_start,
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
    [ts_external_token__settle_indent] = true,
    [ts_external_token__settle_text_start] = true,
    [ts_external_token__text_indent] = true,
    [ts_external_token__cap_text_start] = true,
    [ts_external_token_indented_raw_text] = true,
    [ts_external_token__flow_raw_text] = true,
    [ts_external_token__agic_raw_text] = true,
    [ts_external_token__error_line] = true,
    [ts_external_token__exec_binding_start] = true,
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
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__from_start] = true,
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
    [ts_external_token__flow_raw_text] = true,
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
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [19] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
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
    [ts_external_token__dedent] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__settle_indent] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
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
    [ts_external_token__line_start] = true,
  },
  [30] = {
    [ts_external_token__until_start] = true,
  },
  [31] = {
    [ts_external_token__settle_text_start] = true,
  },
  [32] = {
    [ts_external_token__comment_end] = true,
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
