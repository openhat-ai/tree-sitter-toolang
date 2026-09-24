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
#define STATE_COUNT 1346
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 261
#define ALIAS_COUNT 0
#define TOKEN_COUNT 126
#define EXTERNAL_TOKEN_COUNT 23
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 89

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
  sym_flow_let_keyword = 51,
  sym_flow_seek_keyword = 52,
  sym_flow_ask_keyword = 53,
  sym_flow_scatter_keyword = 54,
  sym_flow_storm_keyword = 55,
  sym_flow_gather_keyword = 56,
  sym_flow_settle_keyword = 57,
  sym_flow_map_keyword = 58,
  sym_flow_keep_keyword = 59,
  sym_flow_drop_keyword = 60,
  sym_flow_sort_keyword = 61,
  sym_flow_rank_keyword = 62,
  sym_flow_repeat_keyword = 63,
  sym_flow_until_keyword = 64,
  sym_flow_from_keyword = 65,
  sym_flow_windowing_keyword = 66,
  sym_flow_using_keyword = 67,
  sym_flow_if_keyword = 68,
  sym_flow_by_keyword = 69,
  sym_flow_in_keyword = 70,
  sym_flow_lane_keyword = 71,
  sym_flow_ascending_keyword = 72,
  sym_flow_descending_keyword = 73,
  sym_flow_time_keyword = 74,
  sym_flow_times_keyword = 75,
  sym_flow_par_keyword = 76,
  sym_flow_first_keyword = 77,
  sym_flow_last_keyword = 78,
  sym_flow_top_keyword = 79,
  sym_flow_bottom_keyword = 80,
  sym_flow_think_keyword = 81,
  sym_flow_use_keyword = 82,
  sym_thunk_keyword = 83,
  sym_recall_keyword = 84,
  anon_sym_call = 85,
  anon_sym_do = 86,
  anon_sym_unfold = 87,
  anon_sym_each = 88,
  anon_sym_fold = 89,
  anon_sym_head = 90,
  anon_sym_tail = 91,
  sym_optional_marker = 92,
  sym_arrow = 93,
  sym_colon = 94,
  sym_lparen = 95,
  sym_rparen = 96,
  sym_comma = 97,
  sym_cap_kind = 98,
  sym_pascal_name = 99,
  sym_snake_name = 100,
  sym__snake_kebab_name = 101,
  sym_text_line = 102,
  sym_newline = 103,
  sym_blank_line = 104,
  sym__comment_start = 105,
  sym_plain_comment = 106,
  sym_shebang_comment = 107,
  sym__module_doc_start = 108,
  sym__item_doc_start = 109,
  sym__param_item_doc_start = 110,
  sym__comment_end = 111,
  sym__indent = 112,
  sym__dedent = 113,
  sym__line_start = 114,
  sym__directive_start = 115,
  sym__until_start = 116,
  sym__from_start = 117,
  sym__settle_indent = 118,
  sym__settle_text_start = 119,
  sym__text_indent = 120,
  sym__cap_text_start = 121,
  sym_indented_raw_text = 122,
  sym__flow_raw_text = 123,
  sym__agic_raw_text = 124,
  sym__error_line = 125,
  sym_source_file = 126,
  sym_item = 127,
  sym_line_end = 128,
  sym_module_doc_comment = 129,
  sym_item_doc_comment = 130,
  sym_param_doc_tag = 131,
  sym__trivia = 132,
  sym_with = 133,
  sym_type = 134,
  sym_base_type = 135,
  sym_builtin_type = 136,
  sym_user_type = 137,
  sym_type_suffix = 138,
  sym_struct = 139,
  sym_struct_name = 140,
  sym_struct_body = 141,
  sym_field = 142,
  sym_field_name = 143,
  sym_psyche = 144,
  sym_skill = 145,
  sym_service = 146,
  sym_prompt = 147,
  sym__cap_definition = 148,
  sym_cap_body = 149,
  sym__cap_text_body = 150,
  sym_task = 151,
  sym_chore = 152,
  sym_cap_name = 153,
  sym_cap_ref = 154,
  sym_job_name = 155,
  sym_job_body = 156,
  sym_property = 157,
  sym_property_key = 158,
  sym_property_value = 159,
  sym_instruct = 160,
  sym_instruct_name = 161,
  sym_instruct_body = 162,
  sym_context = 163,
  sym_context_name = 164,
  sym_context_body = 165,
  sym_text_inline = 166,
  sym_text_block = 167,
  sym_text_body = 168,
  sym_text_body_line = 169,
  sym_agic = 170,
  sym_agic_name = 171,
  sym_agic_body = 172,
  sym_params = 173,
  sym_param = 174,
  sym_param_name = 175,
  sym_flow = 176,
  sym_flow_name = 177,
  sym_flow_body = 178,
  sym_statements = 179,
  sym__flow_statement = 180,
  sym__flow_operation = 181,
  sym_let_statement = 182,
  sym_run_statement = 183,
  sym_implicit_run_statement = 184,
  sym__implicit_run_line = 185,
  sym_seek_statement = 186,
  sym_ask_statement = 187,
  sym_scatter_statement = 188,
  sym_storm_statement = 189,
  sym_gather_statement = 190,
  sym_settle_statement = 191,
  sym__settle_inline_line = 192,
  sym__settle_line = 193,
  sym__settle_inline_block = 194,
  sym__settle_text_body = 195,
  sym__from_complement = 196,
  sym_map_statement = 197,
  sym_keep_statement = 198,
  sym_drop_statement = 199,
  sym_sort_statement = 200,
  sym__named_using_complement = 201,
  sym__inline_using_complement = 202,
  sym__named_if_complement = 203,
  sym__inline_if_complement = 204,
  sym__named_by_complement = 205,
  sym__inline_by_complement = 206,
  sym__using_complements = 207,
  sym__if_complements = 208,
  sym__by_complements = 209,
  sym__lanes_complement = 210,
  sym__order_complement = 211,
  sym_repeat_statement = 212,
  sym__window_complement = 213,
  sym__repeat_count_complement = 214,
  sym__until_complement = 215,
  sym_invalid_flow_reserved_statement = 216,
  sym_inline_agic = 217,
  sym_inline_agic_body = 218,
  sym_position = 219,
  sym_runnable = 220,
  sym_agent = 221,
  sym_local_name = 222,
  sym_directive = 223,
  sym__query_directive_key = 224,
  sym__route_directive_key = 225,
  sym_directive_key = 226,
  sym_directive_op = 227,
  sym_route_value = 228,
  sym_recall_value = 229,
  sym_recall_source = 230,
  sym__directives = 231,
  sym_text_ref = 232,
  sym_messages = 233,
  sym_message = 234,
  sym_unroled_message = 235,
  sym__unroled_message_line = 236,
  sym_invalid_agic_reserved_message = 237,
  sym_role = 238,
  sym__pass_statement = 239,
  sym_flow_lanes_keyword = 240,
  sym__flow_reserved_word = 241,
  sym__agic_reserved_word = 242,
  sym_assign_operator = 243,
  sym_type_name = 244,
  aux_sym_source_file_repeat1 = 245,
  aux_sym_type_repeat1 = 246,
  aux_sym_struct_body_repeat1 = 247,
  aux_sym_struct_body_repeat2 = 248,
  aux_sym__cap_definition_repeat1 = 249,
  aux_sym__cap_text_body_repeat1 = 250,
  aux_sym_job_body_repeat1 = 251,
  aux_sym_text_body_repeat1 = 252,
  aux_sym_params_repeat1 = 253,
  aux_sym_statements_repeat1 = 254,
  aux_sym_implicit_run_statement_repeat1 = 255,
  aux_sym_route_value_repeat1 = 256,
  aux_sym_recall_value_repeat1 = 257,
  aux_sym__directives_repeat1 = 258,
  aux_sym_messages_repeat1 = 259,
  aux_sym_unroled_message_repeat1 = 260,
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
  field_text = 30,
  field_type = 31,
  field_until = 32,
  field_value = 33,
  field_window = 34,
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
  [31] = {.index = 72, .length = 6},
  [32] = {.index = 78, .length = 6},
  [33] = {.index = 84, .length = 1},
  [34] = {.index = 85, .length = 1},
  [35] = {.index = 86, .length = 1},
  [36] = {.index = 87, .length = 1},
  [37] = {.index = 88, .length = 4},
  [38] = {.index = 92, .length = 1},
  [39] = {.index = 93, .length = 2},
  [40] = {.index = 95, .length = 1},
  [41] = {.index = 96, .length = 2},
  [42] = {.index = 98, .length = 1},
  [43] = {.index = 99, .length = 1},
  [44] = {.index = 100, .length = 1},
  [45] = {.index = 101, .length = 7},
  [46] = {.index = 108, .length = 1},
  [47] = {.index = 109, .length = 2},
  [48] = {.index = 111, .length = 1},
  [49] = {.index = 112, .length = 3},
  [50] = {.index = 115, .length = 4},
  [51] = {.index = 119, .length = 2},
  [52] = {.index = 121, .length = 2},
  [53] = {.index = 123, .length = 1},
  [54] = {.index = 124, .length = 3},
  [55] = {.index = 127, .length = 1},
  [56] = {.index = 128, .length = 1},
  [57] = {.index = 129, .length = 2},
  [58] = {.index = 131, .length = 3},
  [59] = {.index = 131, .length = 3},
  [60] = {.index = 134, .length = 2},
  [61] = {.index = 136, .length = 2},
  [62] = {.index = 138, .length = 2},
  [63] = {.index = 140, .length = 5},
  [64] = {.index = 145, .length = 1},
  [65] = {.index = 146, .length = 2},
  [66] = {.index = 148, .length = 3},
  [67] = {.index = 151, .length = 3},
  [68] = {.index = 154, .length = 5},
  [69] = {.index = 159, .length = 4},
  [70] = {.index = 163, .length = 1},
  [71] = {.index = 164, .length = 1},
  [72] = {.index = 165, .length = 3},
  [73] = {.index = 168, .length = 2},
  [74] = {.index = 170, .length = 2},
  [75] = {.index = 172, .length = 2},
  [76] = {.index = 174, .length = 3},
  [77] = {.index = 177, .length = 2},
  [78] = {.index = 179, .length = 1},
  [79] = {.index = 180, .length = 2},
  [80] = {.index = 182, .length = 3},
  [81] = {.index = 185, .length = 3},
  [82] = {.index = 188, .length = 2},
  [83] = {.index = 190, .length = 3},
  [84] = {.index = 193, .length = 3},
  [85] = {.index = 196, .length = 3},
  [86] = {.index = 199, .length = 4},
  [87] = {.index = 203, .length = 3},
  [88] = {.index = 206, .length = 4},
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
    {field_body, 2},
  [69] =
    {field_property, 2, .inherited = true},
  [70] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [72] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [78] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [84] =
    {field_agic, 1},
  [85] =
    {field_statement, 1},
  [86] =
    {field_runnable, 1},
  [87] =
    {field_runnable, 1, .inherited = true},
  [88] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [92] =
    {field_runnable, 0, .inherited = true},
  [93] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [95] =
    {field_order, 0},
  [96] =
    {field_body, 3},
    {field_property, 2, .inherited = true},
  [98] =
    {field_body, 3},
  [99] =
    {field_property, 3, .inherited = true},
  [100] =
    {field_content, 1, .inherited = true},
  [101] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [108] =
    {field_body, 1},
  [109] =
    {field_agent, 1},
    {field_agic, 2},
  [111] =
    {field_runnable, 2},
  [112] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [115] =
    {field_arrow, 2, .inherited = true},
    {field_body, 2, .inherited = true},
    {field_return, 2, .inherited = true},
    {field_runnable, 2},
  [119] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [121] =
    {field_count, 1},
    {field_side, 0},
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
    {field_arrow, 2, .inherited = true},
    {field_body, 2, .inherited = true},
    {field_from, 3, .inherited = true},
    {field_return, 2, .inherited = true},
    {field_runnable, 2},
  [159] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [163] =
    {field_body, 4},
  [164] =
    {field_from, 3},
  [165] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [168] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [170] =
    {field_body, 4},
    {field_until, 5, .inherited = true},
  [172] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
  [174] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [177] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [179] =
    {field_until, 2},
  [180] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
  [182] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
    {field_window, 1, .inherited = true},
  [185] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_until, 6, .inherited = true},
  [188] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
  [190] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [193] =
    {field_body, 6},
    {field_until, 7, .inherited = true},
    {field_window, 1, .inherited = true},
  [196] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
  [199] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
    {field_window, 2, .inherited = true},
  [203] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [206] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_until, 8, .inherited = true},
    {field_window, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [58] = {
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
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 55,
  [58] = 49,
  [59] = 50,
  [60] = 49,
  [61] = 61,
  [62] = 54,
  [63] = 55,
  [64] = 50,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 74,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 70,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 76,
  [88] = 71,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 72,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 68,
  [100] = 100,
  [101] = 79,
  [102] = 69,
  [103] = 80,
  [104] = 66,
  [105] = 77,
  [106] = 76,
  [107] = 71,
  [108] = 72,
  [109] = 79,
  [110] = 110,
  [111] = 111,
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
  [123] = 86,
  [124] = 93,
  [125] = 95,
  [126] = 96,
  [127] = 97,
  [128] = 98,
  [129] = 116,
  [130] = 130,
  [131] = 80,
  [132] = 66,
  [133] = 86,
  [134] = 134,
  [135] = 93,
  [136] = 95,
  [137] = 96,
  [138] = 97,
  [139] = 98,
  [140] = 116,
  [141] = 116,
  [142] = 116,
  [143] = 116,
  [144] = 116,
  [145] = 116,
  [146] = 116,
  [147] = 116,
  [148] = 148,
  [149] = 116,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 148,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 156,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 112,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 160,
  [178] = 178,
  [179] = 114,
  [180] = 180,
  [181] = 181,
  [182] = 161,
  [183] = 158,
  [184] = 157,
  [185] = 156,
  [186] = 186,
  [187] = 187,
  [188] = 161,
  [189] = 162,
  [190] = 163,
  [191] = 114,
  [192] = 158,
  [193] = 193,
  [194] = 162,
  [195] = 168,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 168,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 163,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 178,
  [209] = 209,
  [210] = 160,
  [211] = 178,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 165,
  [217] = 217,
  [218] = 218,
  [219] = 173,
  [220] = 112,
  [221] = 173,
  [222] = 165,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 100,
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
  [271] = 201,
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
  [327] = 224,
  [328] = 225,
  [329] = 329,
  [330] = 330,
  [331] = 100,
  [332] = 332,
  [333] = 323,
  [334] = 324,
  [335] = 325,
  [336] = 326,
  [337] = 224,
  [338] = 225,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 15,
  [345] = 329,
  [346] = 330,
  [347] = 329,
  [348] = 330,
  [349] = 323,
  [350] = 324,
  [351] = 325,
  [352] = 326,
  [353] = 224,
  [354] = 225,
  [355] = 329,
  [356] = 330,
  [357] = 223,
  [358] = 358,
  [359] = 229,
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
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 332,
  [377] = 377,
  [378] = 360,
  [379] = 379,
  [380] = 380,
  [381] = 380,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 243,
  [391] = 244,
  [392] = 246,
  [393] = 269,
  [394] = 394,
  [395] = 364,
  [396] = 365,
  [397] = 366,
  [398] = 368,
  [399] = 377,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 326,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 400,
  [411] = 401,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 358,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 358,
  [430] = 229,
  [431] = 431,
  [432] = 404,
  [433] = 405,
  [434] = 406,
  [435] = 407,
  [436] = 408,
  [437] = 409,
  [438] = 438,
  [439] = 382,
  [440] = 412,
  [441] = 370,
  [442] = 371,
  [443] = 443,
  [444] = 413,
  [445] = 414,
  [446] = 415,
  [447] = 332,
  [448] = 416,
  [449] = 360,
  [450] = 417,
  [451] = 380,
  [452] = 418,
  [453] = 382,
  [454] = 419,
  [455] = 384,
  [456] = 385,
  [457] = 386,
  [458] = 420,
  [459] = 384,
  [460] = 422,
  [461] = 243,
  [462] = 244,
  [463] = 246,
  [464] = 269,
  [465] = 423,
  [466] = 364,
  [467] = 365,
  [468] = 366,
  [469] = 368,
  [470] = 377,
  [471] = 400,
  [472] = 401,
  [473] = 424,
  [474] = 431,
  [475] = 404,
  [476] = 405,
  [477] = 406,
  [478] = 407,
  [479] = 408,
  [480] = 409,
  [481] = 425,
  [482] = 426,
  [483] = 412,
  [484] = 413,
  [485] = 414,
  [486] = 415,
  [487] = 416,
  [488] = 417,
  [489] = 418,
  [490] = 419,
  [491] = 420,
  [492] = 427,
  [493] = 422,
  [494] = 423,
  [495] = 424,
  [496] = 425,
  [497] = 426,
  [498] = 427,
  [499] = 175,
  [500] = 358,
  [501] = 229,
  [502] = 200,
  [503] = 358,
  [504] = 229,
  [505] = 213,
  [506] = 385,
  [507] = 386,
  [508] = 508,
  [509] = 509,
  [510] = 198,
  [511] = 223,
  [512] = 196,
  [513] = 100,
  [514] = 196,
  [515] = 515,
  [516] = 198,
  [517] = 370,
  [518] = 371,
  [519] = 369,
  [520] = 374,
  [521] = 383,
  [522] = 388,
  [523] = 389,
  [524] = 428,
  [525] = 201,
  [526] = 526,
  [527] = 369,
  [528] = 374,
  [529] = 383,
  [530] = 388,
  [531] = 389,
  [532] = 428,
  [533] = 533,
  [534] = 270,
  [535] = 372,
  [536] = 373,
  [537] = 387,
  [538] = 270,
  [539] = 372,
  [540] = 373,
  [541] = 387,
  [542] = 542,
  [543] = 323,
  [544] = 324,
  [545] = 325,
  [546] = 431,
  [547] = 315,
  [548] = 548,
  [549] = 249,
  [550] = 250,
  [551] = 251,
  [552] = 552,
  [553] = 252,
  [554] = 253,
  [555] = 254,
  [556] = 255,
  [557] = 256,
  [558] = 558,
  [559] = 559,
  [560] = 257,
  [561] = 258,
  [562] = 562,
  [563] = 563,
  [564] = 259,
  [565] = 260,
  [566] = 261,
  [567] = 262,
  [568] = 263,
  [569] = 264,
  [570] = 265,
  [571] = 266,
  [572] = 572,
  [573] = 323,
  [574] = 267,
  [575] = 268,
  [576] = 576,
  [577] = 324,
  [578] = 578,
  [579] = 579,
  [580] = 272,
  [581] = 581,
  [582] = 582,
  [583] = 228,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 273,
  [593] = 274,
  [594] = 275,
  [595] = 276,
  [596] = 325,
  [597] = 597,
  [598] = 598,
  [599] = 277,
  [600] = 600,
  [601] = 278,
  [602] = 602,
  [603] = 279,
  [604] = 604,
  [605] = 280,
  [606] = 281,
  [607] = 282,
  [608] = 283,
  [609] = 284,
  [610] = 285,
  [611] = 286,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 287,
  [620] = 288,
  [621] = 621,
  [622] = 289,
  [623] = 623,
  [624] = 290,
  [625] = 625,
  [626] = 626,
  [627] = 339,
  [628] = 628,
  [629] = 340,
  [630] = 341,
  [631] = 291,
  [632] = 342,
  [633] = 343,
  [634] = 634,
  [635] = 292,
  [636] = 293,
  [637] = 343,
  [638] = 638,
  [639] = 326,
  [640] = 640,
  [641] = 294,
  [642] = 224,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 225,
  [647] = 323,
  [648] = 324,
  [649] = 325,
  [650] = 326,
  [651] = 224,
  [652] = 225,
  [653] = 329,
  [654] = 330,
  [655] = 323,
  [656] = 324,
  [657] = 325,
  [658] = 326,
  [659] = 224,
  [660] = 225,
  [661] = 661,
  [662] = 15,
  [663] = 329,
  [664] = 330,
  [665] = 323,
  [666] = 324,
  [667] = 325,
  [668] = 326,
  [669] = 224,
  [670] = 225,
  [671] = 671,
  [672] = 672,
  [673] = 295,
  [674] = 674,
  [675] = 675,
  [676] = 296,
  [677] = 677,
  [678] = 678,
  [679] = 329,
  [680] = 330,
  [681] = 681,
  [682] = 297,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 298,
  [690] = 299,
  [691] = 691,
  [692] = 692,
  [693] = 300,
  [694] = 301,
  [695] = 587,
  [696] = 696,
  [697] = 302,
  [698] = 340,
  [699] = 699,
  [700] = 303,
  [701] = 701,
  [702] = 304,
  [703] = 305,
  [704] = 704,
  [705] = 232,
  [706] = 306,
  [707] = 707,
  [708] = 341,
  [709] = 709,
  [710] = 307,
  [711] = 308,
  [712] = 712,
  [713] = 309,
  [714] = 310,
  [715] = 715,
  [716] = 311,
  [717] = 312,
  [718] = 718,
  [719] = 313,
  [720] = 314,
  [721] = 721,
  [722] = 315,
  [723] = 316,
  [724] = 724,
  [725] = 233,
  [726] = 317,
  [727] = 318,
  [728] = 319,
  [729] = 320,
  [730] = 342,
  [731] = 321,
  [732] = 322,
  [733] = 339,
  [734] = 734,
  [735] = 340,
  [736] = 341,
  [737] = 737,
  [738] = 234,
  [739] = 248,
  [740] = 740,
  [741] = 235,
  [742] = 342,
  [743] = 743,
  [744] = 228,
  [745] = 745,
  [746] = 746,
  [747] = 343,
  [748] = 236,
  [749] = 749,
  [750] = 232,
  [751] = 233,
  [752] = 234,
  [753] = 235,
  [754] = 236,
  [755] = 237,
  [756] = 238,
  [757] = 239,
  [758] = 684,
  [759] = 240,
  [760] = 241,
  [761] = 712,
  [762] = 762,
  [763] = 237,
  [764] = 245,
  [765] = 238,
  [766] = 247,
  [767] = 248,
  [768] = 249,
  [769] = 587,
  [770] = 250,
  [771] = 251,
  [772] = 252,
  [773] = 253,
  [774] = 254,
  [775] = 255,
  [776] = 256,
  [777] = 257,
  [778] = 258,
  [779] = 259,
  [780] = 260,
  [781] = 261,
  [782] = 262,
  [783] = 263,
  [784] = 264,
  [785] = 265,
  [786] = 712,
  [787] = 266,
  [788] = 267,
  [789] = 268,
  [790] = 790,
  [791] = 791,
  [792] = 239,
  [793] = 272,
  [794] = 361,
  [795] = 362,
  [796] = 273,
  [797] = 274,
  [798] = 275,
  [799] = 276,
  [800] = 277,
  [801] = 278,
  [802] = 279,
  [803] = 280,
  [804] = 281,
  [805] = 282,
  [806] = 283,
  [807] = 284,
  [808] = 285,
  [809] = 286,
  [810] = 287,
  [811] = 288,
  [812] = 289,
  [813] = 290,
  [814] = 291,
  [815] = 292,
  [816] = 293,
  [817] = 294,
  [818] = 295,
  [819] = 296,
  [820] = 297,
  [821] = 298,
  [822] = 299,
  [823] = 300,
  [824] = 301,
  [825] = 302,
  [826] = 303,
  [827] = 304,
  [828] = 305,
  [829] = 306,
  [830] = 307,
  [831] = 308,
  [832] = 684,
  [833] = 309,
  [834] = 310,
  [835] = 311,
  [836] = 684,
  [837] = 312,
  [838] = 313,
  [839] = 314,
  [840] = 240,
  [841] = 316,
  [842] = 317,
  [843] = 318,
  [844] = 319,
  [845] = 707,
  [846] = 598,
  [847] = 320,
  [848] = 558,
  [849] = 562,
  [850] = 321,
  [851] = 674,
  [852] = 322,
  [853] = 677,
  [854] = 707,
  [855] = 598,
  [856] = 241,
  [857] = 558,
  [858] = 562,
  [859] = 859,
  [860] = 860,
  [861] = 707,
  [862] = 598,
  [863] = 707,
  [864] = 598,
  [865] = 790,
  [866] = 866,
  [867] = 867,
  [868] = 245,
  [869] = 329,
  [870] = 330,
  [871] = 684,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 339,
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
  [894] = 247,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 740,
  [900] = 900,
  [901] = 15,
  [902] = 329,
  [903] = 330,
  [904] = 323,
  [905] = 324,
  [906] = 325,
  [907] = 326,
  [908] = 224,
  [909] = 225,
  [910] = 323,
  [911] = 324,
  [912] = 325,
  [913] = 326,
  [914] = 225,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 929,
  [930] = 930,
  [931] = 931,
  [932] = 932,
  [933] = 933,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 937,
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
  [949] = 897,
  [950] = 915,
  [951] = 919,
  [952] = 920,
  [953] = 923,
  [954] = 924,
  [955] = 928,
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
  [971] = 960,
  [972] = 961,
  [973] = 931,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 925,
  [979] = 932,
  [980] = 980,
  [981] = 339,
  [982] = 340,
  [983] = 341,
  [984] = 984,
  [985] = 342,
  [986] = 931,
  [987] = 343,
  [988] = 932,
  [989] = 989,
  [990] = 990,
  [991] = 936,
  [992] = 936,
  [993] = 938,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 997,
  [998] = 940,
  [999] = 999,
  [1000] = 938,
  [1001] = 943,
  [1002] = 944,
  [1003] = 945,
  [1004] = 946,
  [1005] = 897,
  [1006] = 915,
  [1007] = 1007,
  [1008] = 919,
  [1009] = 920,
  [1010] = 923,
  [1011] = 924,
  [1012] = 1012,
  [1013] = 928,
  [1014] = 1014,
  [1015] = 960,
  [1016] = 961,
  [1017] = 1017,
  [1018] = 898,
  [1019] = 896,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 940,
  [1024] = 1024,
  [1025] = 1025,
  [1026] = 943,
  [1027] = 944,
  [1028] = 945,
  [1029] = 1029,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 925,
  [1033] = 1033,
  [1034] = 1034,
  [1035] = 925,
  [1036] = 946,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 1039,
  [1040] = 1040,
  [1041] = 1041,
  [1042] = 984,
  [1043] = 996,
  [1044] = 896,
  [1045] = 1020,
  [1046] = 1029,
  [1047] = 1047,
  [1048] = 984,
  [1049] = 996,
  [1050] = 925,
  [1051] = 1020,
  [1052] = 1029,
  [1053] = 947,
  [1054] = 948,
  [1055] = 1007,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 974,
  [1059] = 323,
  [1060] = 994,
  [1061] = 995,
  [1062] = 324,
  [1063] = 325,
  [1064] = 1017,
  [1065] = 613,
  [1066] = 1007,
  [1067] = 326,
  [1068] = 224,
  [1069] = 225,
  [1070] = 974,
  [1071] = 329,
  [1072] = 994,
  [1073] = 995,
  [1074] = 576,
  [1075] = 1017,
  [1076] = 579,
  [1077] = 1007,
  [1078] = 1007,
  [1079] = 586,
  [1080] = 918,
  [1081] = 930,
  [1082] = 330,
  [1083] = 975,
  [1084] = 918,
  [1085] = 329,
  [1086] = 930,
  [1087] = 724,
  [1088] = 330,
  [1089] = 975,
  [1090] = 734,
  [1091] = 1030,
  [1092] = 1033,
  [1093] = 929,
  [1094] = 1030,
  [1095] = 1033,
  [1096] = 929,
  [1097] = 224,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1104,
  [1105] = 1105,
  [1106] = 1106,
  [1107] = 1107,
  [1108] = 1108,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1108,
  [1112] = 1112,
  [1113] = 1113,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 1117,
  [1118] = 1118,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1113,
  [1125] = 1117,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1113,
  [1129] = 1117,
  [1130] = 1130,
  [1131] = 1131,
  [1132] = 1132,
  [1133] = 1113,
  [1134] = 1117,
  [1135] = 1113,
  [1136] = 1117,
  [1137] = 1113,
  [1138] = 1117,
  [1139] = 1113,
  [1140] = 1117,
  [1141] = 1113,
  [1142] = 1117,
  [1143] = 1113,
  [1144] = 1117,
  [1145] = 1131,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1148,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 329,
  [1152] = 1152,
  [1153] = 1150,
  [1154] = 1110,
  [1155] = 1155,
  [1156] = 1156,
  [1157] = 1105,
  [1158] = 1117,
  [1159] = 1107,
  [1160] = 1152,
  [1161] = 1119,
  [1162] = 1162,
  [1163] = 1131,
  [1164] = 1108,
  [1165] = 1152,
  [1166] = 1166,
  [1167] = 1098,
  [1168] = 1155,
  [1169] = 1156,
  [1170] = 1105,
  [1171] = 1106,
  [1172] = 1107,
  [1173] = 1173,
  [1174] = 1119,
  [1175] = 1113,
  [1176] = 1131,
  [1177] = 1117,
  [1178] = 1131,
  [1179] = 1179,
  [1180] = 1131,
  [1181] = 1131,
  [1182] = 1131,
  [1183] = 1131,
  [1184] = 1131,
  [1185] = 1131,
  [1186] = 1121,
  [1187] = 1123,
  [1188] = 1126,
  [1189] = 1127,
  [1190] = 1190,
  [1191] = 1191,
  [1192] = 1102,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1195,
  [1196] = 1196,
  [1197] = 1197,
  [1198] = 965,
  [1199] = 1199,
  [1200] = 966,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1098,
  [1204] = 1204,
  [1205] = 1155,
  [1206] = 1206,
  [1207] = 1207,
  [1208] = 1208,
  [1209] = 1156,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 330,
  [1213] = 1113,
  [1214] = 1106,
  [1215] = 1215,
  [1216] = 1216,
  [1217] = 1217,
  [1218] = 1218,
  [1219] = 1219,
  [1220] = 1220,
  [1221] = 1221,
  [1222] = 1222,
  [1223] = 1223,
  [1224] = 1224,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1232,
  [1233] = 1233,
  [1234] = 1219,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1237,
  [1238] = 1238,
  [1239] = 1237,
  [1240] = 1216,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1230,
  [1245] = 1245,
  [1246] = 1227,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1216,
  [1253] = 1253,
  [1254] = 1219,
  [1255] = 1230,
  [1256] = 1231,
  [1257] = 1237,
  [1258] = 1238,
  [1259] = 1235,
  [1260] = 1236,
  [1261] = 1216,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1238,
  [1266] = 1266,
  [1267] = 1231,
  [1268] = 1268,
  [1269] = 1269,
  [1270] = 1270,
  [1271] = 1219,
  [1272] = 1237,
  [1273] = 1237,
  [1274] = 1238,
  [1275] = 1216,
  [1276] = 1219,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1216,
  [1280] = 1219,
  [1281] = 1237,
  [1282] = 1238,
  [1283] = 1237,
  [1284] = 1216,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1287,
  [1288] = 1253,
  [1289] = 1219,
  [1290] = 1290,
  [1291] = 1216,
  [1292] = 1250,
  [1293] = 1237,
  [1294] = 1294,
  [1295] = 1238,
  [1296] = 1216,
  [1297] = 1253,
  [1298] = 1298,
  [1299] = 1299,
  [1300] = 1300,
  [1301] = 1301,
  [1302] = 1236,
  [1303] = 1303,
  [1304] = 1219,
  [1305] = 1237,
  [1306] = 1238,
  [1307] = 1238,
  [1308] = 1308,
  [1309] = 1309,
  [1310] = 1216,
  [1311] = 1311,
  [1312] = 1312,
  [1313] = 15,
  [1314] = 1021,
  [1315] = 1315,
  [1316] = 1219,
  [1317] = 1317,
  [1318] = 597,
  [1319] = 1319,
  [1320] = 1237,
  [1321] = 1238,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1324,
  [1325] = 1216,
  [1326] = 1326,
  [1327] = 1327,
  [1328] = 1328,
  [1329] = 1329,
  [1330] = 1219,
  [1331] = 1237,
  [1332] = 1332,
  [1333] = 1238,
  [1334] = 1245,
  [1335] = 1216,
  [1336] = 1336,
  [1337] = 1219,
  [1338] = 1245,
  [1339] = 1235,
  [1340] = 1340,
  [1341] = 1228,
  [1342] = 1342,
  [1343] = 1343,
  [1344] = 1228,
  [1345] = 1238,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(277);
      ADVANCE_MAP(
        '#', 278,
        '(', 596,
        ')', 597,
        '*', 514,
        '+', 306,
        ',', 598,
        '-', 307,
        '0', 289,
        '1', 290,
        ':', 595,
        '=', 303,
        '?', 593,
        '@', 448,
        'B', 612,
        'J', 615,
        'N', 618,
        'P', 600,
        'T', 603,
        '[', 308,
        '_', 288,
        'a', 375,
        'b', 433,
        'c', 309,
        'd', 346,
        'e', 310,
        'f', 311,
        'g', 316,
        'h', 317,
        'i', 366,
        'k', 356,
        'l', 315,
        'm', 314,
        'n', 364,
        'p', 312,
        'r', 319,
        's', 331,
        't', 313,
        'u', 416,
        'w', 380,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(494);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 278,
        '(', 596,
        ')', 597,
        '*', 514,
        '+', 20,
        ',', 598,
        '-', 21,
        '0', 292,
        '1', 291,
        ':', 595,
        '=', 303,
        '?', 593,
        '@', 207,
        'B', 612,
        'J', 615,
        'N', 618,
        'P', 600,
        'T', 603,
        '[', 23,
        'a', 112,
        'b', 190,
        'c', 24,
        'd', 80,
        'e', 25,
        'f', 26,
        'g', 33,
        'h', 34,
        'i', 101,
        'k', 87,
        'l', 32,
        'm', 31,
        'n', 97,
        'p', 27,
        'r', 36,
        's', 52,
        't', 28,
        'u', 172,
        'w', 120,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 278,
        ':', 595,
        'b', 268,
        'f', 122,
        'i', 100,
        'l', 48,
        'p', 226,
        's', 99,
        'u', 235,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 278,
        'a', 743,
        'd', 739,
        'g', 683,
        'k', 695,
        'm', 684,
        'r', 697,
        's', 689,
        '\t', 673,
        ' ', 673,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 278,
        'a', 658,
        'd', 653,
        'g', 621,
        'k', 630,
        'm', 622,
        'r', 632,
        's', 626,
        '\t', 674,
        ' ', 674,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(594);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(594);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(287);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'a', 111,
        'c', 115,
        'd', 89,
        'f', 153,
        'i', 189,
        'l', 46,
        'p', 224,
        's', 94,
        't', 40,
        'w', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(540);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'k') ADVANCE(136);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(573);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(589);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(558);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(538);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(531);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(582);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(584);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(592);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(562);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'y') ADVANCE(566);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(550);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(554);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(552);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 262:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 263:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(533);
      END_STATE();
    case 266:
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 267:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(566);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 272:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      END_STATE();
    case 273:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 275:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 276:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__doc_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(289);
      if (lookahead == '1') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == '1') ADVANCE(291);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(540);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'y') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'a') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'a') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'c') ADVANCE(624);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 't') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == 't') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'h') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'k') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'k') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'l') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'm') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 's') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (lookahead == 'u') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 278,
        'a', 743,
        'd', 739,
        'g', 683,
        'k', 695,
        'm', 684,
        'r', 697,
        's', 689,
        '\t', 673,
        ' ', 673,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 278,
        'a', 658,
        'd', 653,
        'g', 621,
        'k', 630,
        'm', 622,
        'r', 632,
        's', 626,
        '\t', 674,
        ' ', 674,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(759);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 't') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'm') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
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
  [18] = {.lex_state = 10, .external_lex_state = 4},
  [19] = {.lex_state = 10, .external_lex_state = 4},
  [20] = {.lex_state = 10, .external_lex_state = 4},
  [21] = {.lex_state = 10, .external_lex_state = 4},
  [22] = {.lex_state = 10, .external_lex_state = 4},
  [23] = {.lex_state = 10, .external_lex_state = 4},
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
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 4, .external_lex_state = 4},
  [48] = {.lex_state = 4, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 11, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 6},
  [53] = {.lex_state = 4, .external_lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 4},
  [59] = {.lex_state = 11, .external_lex_state = 4},
  [60] = {.lex_state = 2, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 11, .external_lex_state = 4},
  [65] = {.lex_state = 3, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 3, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 8},
  [69] = {.lex_state = 0, .external_lex_state = 8},
  [70] = {.lex_state = 2, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 0, .external_lex_state = 9},
  [73] = {.lex_state = 3, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 6},
  [75] = {.lex_state = 2, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 9},
  [77] = {.lex_state = 0, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 6},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 9},
  [81] = {.lex_state = 2, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 10},
  [83] = {.lex_state = 0, .external_lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 10},
  [85] = {.lex_state = 13, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 12},
  [87] = {.lex_state = 0, .external_lex_state = 13},
  [88] = {.lex_state = 0, .external_lex_state = 11},
  [89] = {.lex_state = 0, .external_lex_state = 14},
  [90] = {.lex_state = 0, .external_lex_state = 11},
  [91] = {.lex_state = 0, .external_lex_state = 11},
  [92] = {.lex_state = 0, .external_lex_state = 15},
  [93] = {.lex_state = 0, .external_lex_state = 12},
  [94] = {.lex_state = 0, .external_lex_state = 13},
  [95] = {.lex_state = 0, .external_lex_state = 16},
  [96] = {.lex_state = 0, .external_lex_state = 16},
  [97] = {.lex_state = 0, .external_lex_state = 16},
  [98] = {.lex_state = 0, .external_lex_state = 16},
  [99] = {.lex_state = 0, .external_lex_state = 17},
  [100] = {.lex_state = 0, .external_lex_state = 14},
  [101] = {.lex_state = 0, .external_lex_state = 18},
  [102] = {.lex_state = 0, .external_lex_state = 17},
  [103] = {.lex_state = 0, .external_lex_state = 19},
  [104] = {.lex_state = 0, .external_lex_state = 18},
  [105] = {.lex_state = 0, .external_lex_state = 17},
  [106] = {.lex_state = 0, .external_lex_state = 19},
  [107] = {.lex_state = 0, .external_lex_state = 18},
  [108] = {.lex_state = 0, .external_lex_state = 19},
  [109] = {.lex_state = 0, .external_lex_state = 11},
  [110] = {.lex_state = 0, .external_lex_state = 10},
  [111] = {.lex_state = 0, .external_lex_state = 11},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 14},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 15},
  [116] = {.lex_state = 0, .external_lex_state = 20},
  [117] = {.lex_state = 13, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 11},
  [119] = {.lex_state = 13, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 14},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 11},
  [123] = {.lex_state = 0, .external_lex_state = 12},
  [124] = {.lex_state = 0, .external_lex_state = 12},
  [125] = {.lex_state = 0, .external_lex_state = 16},
  [126] = {.lex_state = 0, .external_lex_state = 16},
  [127] = {.lex_state = 0, .external_lex_state = 16},
  [128] = {.lex_state = 0, .external_lex_state = 16},
  [129] = {.lex_state = 0, .external_lex_state = 20},
  [130] = {.lex_state = 0, .external_lex_state = 14},
  [131] = {.lex_state = 0, .external_lex_state = 13},
  [132] = {.lex_state = 0, .external_lex_state = 11},
  [133] = {.lex_state = 0, .external_lex_state = 12},
  [134] = {.lex_state = 0, .external_lex_state = 11},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 16},
  [137] = {.lex_state = 0, .external_lex_state = 16},
  [138] = {.lex_state = 0, .external_lex_state = 16},
  [139] = {.lex_state = 0, .external_lex_state = 16},
  [140] = {.lex_state = 0, .external_lex_state = 20},
  [141] = {.lex_state = 0, .external_lex_state = 20},
  [142] = {.lex_state = 0, .external_lex_state = 20},
  [143] = {.lex_state = 0, .external_lex_state = 20},
  [144] = {.lex_state = 0, .external_lex_state = 20},
  [145] = {.lex_state = 0, .external_lex_state = 20},
  [146] = {.lex_state = 0, .external_lex_state = 20},
  [147] = {.lex_state = 0, .external_lex_state = 20},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 20},
  [150] = {.lex_state = 0, .external_lex_state = 11},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 15},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 13, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 10},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 13, .external_lex_state = 4},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 12, .external_lex_state = 4},
  [161] = {.lex_state = 13, .external_lex_state = 4},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 0, .external_lex_state = 21},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 21},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 13, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 21},
  [170] = {.lex_state = 0, .external_lex_state = 21},
  [171] = {.lex_state = 0, .external_lex_state = 19},
  [172] = {.lex_state = 0, .external_lex_state = 15},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 21},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 21},
  [177] = {.lex_state = 12, .external_lex_state = 4},
  [178] = {.lex_state = 9, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 19},
  [180] = {.lex_state = 0, .external_lex_state = 21},
  [181] = {.lex_state = 0, .external_lex_state = 21},
  [182] = {.lex_state = 13, .external_lex_state = 4},
  [183] = {.lex_state = 13, .external_lex_state = 4},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 21},
  [187] = {.lex_state = 0, .external_lex_state = 21},
  [188] = {.lex_state = 13, .external_lex_state = 4},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 0, .external_lex_state = 13},
  [192] = {.lex_state = 13, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 21},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 13, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 9},
  [197] = {.lex_state = 0, .external_lex_state = 21},
  [198] = {.lex_state = 0, .external_lex_state = 9},
  [199] = {.lex_state = 13, .external_lex_state = 4},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0, .external_lex_state = 9},
  [202] = {.lex_state = 13, .external_lex_state = 4},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 0, .external_lex_state = 21},
  [207] = {.lex_state = 13, .external_lex_state = 4},
  [208] = {.lex_state = 9, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 21},
  [210] = {.lex_state = 12, .external_lex_state = 4},
  [211] = {.lex_state = 9, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 21},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0, .external_lex_state = 21},
  [215] = {.lex_state = 0, .external_lex_state = 15},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 13, .external_lex_state = 4},
  [218] = {.lex_state = 0, .external_lex_state = 21},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 13},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 14, .external_lex_state = 4},
  [224] = {.lex_state = 0, .external_lex_state = 14},
  [225] = {.lex_state = 0, .external_lex_state = 14},
  [226] = {.lex_state = 0, .external_lex_state = 22},
  [227] = {.lex_state = 0, .external_lex_state = 22},
  [228] = {.lex_state = 0, .external_lex_state = 7},
  [229] = {.lex_state = 0, .external_lex_state = 23},
  [230] = {.lex_state = 0, .external_lex_state = 15},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 0, .external_lex_state = 7},
  [233] = {.lex_state = 0, .external_lex_state = 7},
  [234] = {.lex_state = 0, .external_lex_state = 7},
  [235] = {.lex_state = 0, .external_lex_state = 7},
  [236] = {.lex_state = 0, .external_lex_state = 7},
  [237] = {.lex_state = 0, .external_lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 7},
  [239] = {.lex_state = 0, .external_lex_state = 7},
  [240] = {.lex_state = 0, .external_lex_state = 7},
  [241] = {.lex_state = 0, .external_lex_state = 7},
  [242] = {.lex_state = 0, .external_lex_state = 24},
  [243] = {.lex_state = 0, .external_lex_state = 22},
  [244] = {.lex_state = 0, .external_lex_state = 22},
  [245] = {.lex_state = 0, .external_lex_state = 7},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 0, .external_lex_state = 7},
  [248] = {.lex_state = 0, .external_lex_state = 7},
  [249] = {.lex_state = 0, .external_lex_state = 7},
  [250] = {.lex_state = 0, .external_lex_state = 7},
  [251] = {.lex_state = 0, .external_lex_state = 7},
  [252] = {.lex_state = 0, .external_lex_state = 7},
  [253] = {.lex_state = 0, .external_lex_state = 7},
  [254] = {.lex_state = 0, .external_lex_state = 7},
  [255] = {.lex_state = 0, .external_lex_state = 7},
  [256] = {.lex_state = 0, .external_lex_state = 7},
  [257] = {.lex_state = 0, .external_lex_state = 7},
  [258] = {.lex_state = 0, .external_lex_state = 7},
  [259] = {.lex_state = 0, .external_lex_state = 7},
  [260] = {.lex_state = 0, .external_lex_state = 7},
  [261] = {.lex_state = 0, .external_lex_state = 7},
  [262] = {.lex_state = 0, .external_lex_state = 7},
  [263] = {.lex_state = 0, .external_lex_state = 7},
  [264] = {.lex_state = 0, .external_lex_state = 7},
  [265] = {.lex_state = 0, .external_lex_state = 7},
  [266] = {.lex_state = 0, .external_lex_state = 7},
  [267] = {.lex_state = 0, .external_lex_state = 7},
  [268] = {.lex_state = 0, .external_lex_state = 7},
  [269] = {.lex_state = 5, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 21},
  [271] = {.lex_state = 0, .external_lex_state = 13},
  [272] = {.lex_state = 0, .external_lex_state = 7},
  [273] = {.lex_state = 0, .external_lex_state = 7},
  [274] = {.lex_state = 0, .external_lex_state = 7},
  [275] = {.lex_state = 0, .external_lex_state = 7},
  [276] = {.lex_state = 0, .external_lex_state = 7},
  [277] = {.lex_state = 0, .external_lex_state = 7},
  [278] = {.lex_state = 0, .external_lex_state = 7},
  [279] = {.lex_state = 0, .external_lex_state = 7},
  [280] = {.lex_state = 0, .external_lex_state = 7},
  [281] = {.lex_state = 0, .external_lex_state = 7},
  [282] = {.lex_state = 0, .external_lex_state = 7},
  [283] = {.lex_state = 0, .external_lex_state = 7},
  [284] = {.lex_state = 0, .external_lex_state = 7},
  [285] = {.lex_state = 0, .external_lex_state = 7},
  [286] = {.lex_state = 0, .external_lex_state = 7},
  [287] = {.lex_state = 0, .external_lex_state = 7},
  [288] = {.lex_state = 0, .external_lex_state = 7},
  [289] = {.lex_state = 0, .external_lex_state = 7},
  [290] = {.lex_state = 0, .external_lex_state = 7},
  [291] = {.lex_state = 0, .external_lex_state = 7},
  [292] = {.lex_state = 0, .external_lex_state = 7},
  [293] = {.lex_state = 0, .external_lex_state = 7},
  [294] = {.lex_state = 0, .external_lex_state = 7},
  [295] = {.lex_state = 0, .external_lex_state = 7},
  [296] = {.lex_state = 0, .external_lex_state = 7},
  [297] = {.lex_state = 0, .external_lex_state = 7},
  [298] = {.lex_state = 0, .external_lex_state = 7},
  [299] = {.lex_state = 0, .external_lex_state = 7},
  [300] = {.lex_state = 0, .external_lex_state = 7},
  [301] = {.lex_state = 0, .external_lex_state = 7},
  [302] = {.lex_state = 0, .external_lex_state = 7},
  [303] = {.lex_state = 0, .external_lex_state = 7},
  [304] = {.lex_state = 0, .external_lex_state = 7},
  [305] = {.lex_state = 0, .external_lex_state = 7},
  [306] = {.lex_state = 0, .external_lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 7},
  [308] = {.lex_state = 0, .external_lex_state = 7},
  [309] = {.lex_state = 0, .external_lex_state = 7},
  [310] = {.lex_state = 0, .external_lex_state = 7},
  [311] = {.lex_state = 0, .external_lex_state = 7},
  [312] = {.lex_state = 0, .external_lex_state = 7},
  [313] = {.lex_state = 0, .external_lex_state = 7},
  [314] = {.lex_state = 0, .external_lex_state = 7},
  [315] = {.lex_state = 0, .external_lex_state = 7},
  [316] = {.lex_state = 0, .external_lex_state = 7},
  [317] = {.lex_state = 0, .external_lex_state = 7},
  [318] = {.lex_state = 0, .external_lex_state = 7},
  [319] = {.lex_state = 0, .external_lex_state = 7},
  [320] = {.lex_state = 0, .external_lex_state = 7},
  [321] = {.lex_state = 0, .external_lex_state = 7},
  [322] = {.lex_state = 0, .external_lex_state = 7},
  [323] = {.lex_state = 0, .external_lex_state = 6},
  [324] = {.lex_state = 0, .external_lex_state = 6},
  [325] = {.lex_state = 0, .external_lex_state = 6},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 0, .external_lex_state = 6},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0, .external_lex_state = 14},
  [330] = {.lex_state = 0, .external_lex_state = 14},
  [331] = {.lex_state = 0, .external_lex_state = 24},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 0, .external_lex_state = 8},
  [334] = {.lex_state = 0, .external_lex_state = 8},
  [335] = {.lex_state = 0, .external_lex_state = 8},
  [336] = {.lex_state = 0, .external_lex_state = 8},
  [337] = {.lex_state = 0, .external_lex_state = 8},
  [338] = {.lex_state = 0, .external_lex_state = 8},
  [339] = {.lex_state = 0, .external_lex_state = 7},
  [340] = {.lex_state = 0, .external_lex_state = 7},
  [341] = {.lex_state = 0, .external_lex_state = 7},
  [342] = {.lex_state = 0, .external_lex_state = 7},
  [343] = {.lex_state = 0, .external_lex_state = 7},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 8},
  [346] = {.lex_state = 0, .external_lex_state = 8},
  [347] = {.lex_state = 0, .external_lex_state = 6},
  [348] = {.lex_state = 0, .external_lex_state = 6},
  [349] = {.lex_state = 0, .external_lex_state = 7},
  [350] = {.lex_state = 0, .external_lex_state = 7},
  [351] = {.lex_state = 0, .external_lex_state = 7},
  [352] = {.lex_state = 0, .external_lex_state = 7},
  [353] = {.lex_state = 0, .external_lex_state = 7},
  [354] = {.lex_state = 0, .external_lex_state = 7},
  [355] = {.lex_state = 0, .external_lex_state = 7},
  [356] = {.lex_state = 0, .external_lex_state = 7},
  [357] = {.lex_state = 14, .external_lex_state = 4},
  [358] = {.lex_state = 0, .external_lex_state = 23},
  [359] = {.lex_state = 0, .external_lex_state = 23},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 0, .external_lex_state = 8},
  [362] = {.lex_state = 0, .external_lex_state = 8},
  [363] = {.lex_state = 0, .external_lex_state = 21},
  [364] = {.lex_state = 0, .external_lex_state = 22},
  [365] = {.lex_state = 0, .external_lex_state = 22},
  [366] = {.lex_state = 13, .external_lex_state = 4},
  [367] = {.lex_state = 0, .external_lex_state = 24},
  [368] = {.lex_state = 0, .external_lex_state = 22},
  [369] = {.lex_state = 0, .external_lex_state = 21},
  [370] = {.lex_state = 16},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 21},
  [373] = {.lex_state = 0, .external_lex_state = 21},
  [374] = {.lex_state = 0, .external_lex_state = 21},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 0, .external_lex_state = 22},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 0, .external_lex_state = 24},
  [380] = {.lex_state = 16},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 13, .external_lex_state = 4},
  [383] = {.lex_state = 0, .external_lex_state = 21},
  [384] = {.lex_state = 5, .external_lex_state = 4},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 5, .external_lex_state = 4},
  [387] = {.lex_state = 0, .external_lex_state = 21},
  [388] = {.lex_state = 0, .external_lex_state = 21},
  [389] = {.lex_state = 0, .external_lex_state = 21},
  [390] = {.lex_state = 0, .external_lex_state = 22},
  [391] = {.lex_state = 0, .external_lex_state = 22},
  [392] = {.lex_state = 16},
  [393] = {.lex_state = 5, .external_lex_state = 4},
  [394] = {.lex_state = 0, .external_lex_state = 24},
  [395] = {.lex_state = 0, .external_lex_state = 22},
  [396] = {.lex_state = 0, .external_lex_state = 22},
  [397] = {.lex_state = 13, .external_lex_state = 4},
  [398] = {.lex_state = 0, .external_lex_state = 22},
  [399] = {.lex_state = 0, .external_lex_state = 22},
  [400] = {.lex_state = 0, .external_lex_state = 22},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 0, .external_lex_state = 23},
  [403] = {.lex_state = 0, .external_lex_state = 14},
  [404] = {.lex_state = 0, .external_lex_state = 22},
  [405] = {.lex_state = 0, .external_lex_state = 22},
  [406] = {.lex_state = 0, .external_lex_state = 22},
  [407] = {.lex_state = 0, .external_lex_state = 22},
  [408] = {.lex_state = 0, .external_lex_state = 22},
  [409] = {.lex_state = 0, .external_lex_state = 22},
  [410] = {.lex_state = 0, .external_lex_state = 22},
  [411] = {.lex_state = 0, .external_lex_state = 22},
  [412] = {.lex_state = 0, .external_lex_state = 22},
  [413] = {.lex_state = 0, .external_lex_state = 22},
  [414] = {.lex_state = 0, .external_lex_state = 22},
  [415] = {.lex_state = 0, .external_lex_state = 22},
  [416] = {.lex_state = 0, .external_lex_state = 22},
  [417] = {.lex_state = 0, .external_lex_state = 22},
  [418] = {.lex_state = 0, .external_lex_state = 22},
  [419] = {.lex_state = 0, .external_lex_state = 22},
  [420] = {.lex_state = 0, .external_lex_state = 22},
  [421] = {.lex_state = 0, .external_lex_state = 23},
  [422] = {.lex_state = 0, .external_lex_state = 22},
  [423] = {.lex_state = 0, .external_lex_state = 22},
  [424] = {.lex_state = 0, .external_lex_state = 22},
  [425] = {.lex_state = 0, .external_lex_state = 22},
  [426] = {.lex_state = 0, .external_lex_state = 22},
  [427] = {.lex_state = 0, .external_lex_state = 22},
  [428] = {.lex_state = 0, .external_lex_state = 21},
  [429] = {.lex_state = 0, .external_lex_state = 23},
  [430] = {.lex_state = 0, .external_lex_state = 23},
  [431] = {.lex_state = 0, .external_lex_state = 22},
  [432] = {.lex_state = 0, .external_lex_state = 22},
  [433] = {.lex_state = 0, .external_lex_state = 22},
  [434] = {.lex_state = 0, .external_lex_state = 22},
  [435] = {.lex_state = 0, .external_lex_state = 22},
  [436] = {.lex_state = 0, .external_lex_state = 22},
  [437] = {.lex_state = 0, .external_lex_state = 22},
  [438] = {.lex_state = 0, .external_lex_state = 21},
  [439] = {.lex_state = 13, .external_lex_state = 4},
  [440] = {.lex_state = 0, .external_lex_state = 22},
  [441] = {.lex_state = 16},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 6},
  [444] = {.lex_state = 0, .external_lex_state = 22},
  [445] = {.lex_state = 0, .external_lex_state = 22},
  [446] = {.lex_state = 0, .external_lex_state = 22},
  [447] = {.lex_state = 16},
  [448] = {.lex_state = 0, .external_lex_state = 22},
  [449] = {.lex_state = 16},
  [450] = {.lex_state = 0, .external_lex_state = 22},
  [451] = {.lex_state = 16},
  [452] = {.lex_state = 0, .external_lex_state = 22},
  [453] = {.lex_state = 13, .external_lex_state = 4},
  [454] = {.lex_state = 0, .external_lex_state = 22},
  [455] = {.lex_state = 5, .external_lex_state = 4},
  [456] = {.lex_state = 16},
  [457] = {.lex_state = 5, .external_lex_state = 4},
  [458] = {.lex_state = 0, .external_lex_state = 22},
  [459] = {.lex_state = 5, .external_lex_state = 4},
  [460] = {.lex_state = 0, .external_lex_state = 22},
  [461] = {.lex_state = 0, .external_lex_state = 22},
  [462] = {.lex_state = 0, .external_lex_state = 22},
  [463] = {.lex_state = 16},
  [464] = {.lex_state = 5, .external_lex_state = 4},
  [465] = {.lex_state = 0, .external_lex_state = 22},
  [466] = {.lex_state = 0, .external_lex_state = 22},
  [467] = {.lex_state = 0, .external_lex_state = 22},
  [468] = {.lex_state = 13, .external_lex_state = 4},
  [469] = {.lex_state = 0, .external_lex_state = 22},
  [470] = {.lex_state = 0, .external_lex_state = 22},
  [471] = {.lex_state = 0, .external_lex_state = 22},
  [472] = {.lex_state = 0, .external_lex_state = 22},
  [473] = {.lex_state = 0, .external_lex_state = 22},
  [474] = {.lex_state = 0, .external_lex_state = 22},
  [475] = {.lex_state = 0, .external_lex_state = 22},
  [476] = {.lex_state = 0, .external_lex_state = 22},
  [477] = {.lex_state = 0, .external_lex_state = 22},
  [478] = {.lex_state = 0, .external_lex_state = 22},
  [479] = {.lex_state = 0, .external_lex_state = 22},
  [480] = {.lex_state = 0, .external_lex_state = 22},
  [481] = {.lex_state = 0, .external_lex_state = 22},
  [482] = {.lex_state = 0, .external_lex_state = 22},
  [483] = {.lex_state = 0, .external_lex_state = 22},
  [484] = {.lex_state = 0, .external_lex_state = 22},
  [485] = {.lex_state = 0, .external_lex_state = 22},
  [486] = {.lex_state = 0, .external_lex_state = 22},
  [487] = {.lex_state = 0, .external_lex_state = 22},
  [488] = {.lex_state = 0, .external_lex_state = 22},
  [489] = {.lex_state = 0, .external_lex_state = 22},
  [490] = {.lex_state = 0, .external_lex_state = 22},
  [491] = {.lex_state = 0, .external_lex_state = 22},
  [492] = {.lex_state = 0, .external_lex_state = 22},
  [493] = {.lex_state = 0, .external_lex_state = 22},
  [494] = {.lex_state = 0, .external_lex_state = 22},
  [495] = {.lex_state = 0, .external_lex_state = 22},
  [496] = {.lex_state = 0, .external_lex_state = 22},
  [497] = {.lex_state = 0, .external_lex_state = 22},
  [498] = {.lex_state = 0, .external_lex_state = 22},
  [499] = {.lex_state = 1, .external_lex_state = 4},
  [500] = {.lex_state = 0, .external_lex_state = 23},
  [501] = {.lex_state = 0, .external_lex_state = 23},
  [502] = {.lex_state = 1, .external_lex_state = 4},
  [503] = {.lex_state = 0, .external_lex_state = 23},
  [504] = {.lex_state = 0, .external_lex_state = 23},
  [505] = {.lex_state = 1, .external_lex_state = 4},
  [506] = {.lex_state = 16},
  [507] = {.lex_state = 5, .external_lex_state = 4},
  [508] = {.lex_state = 0, .external_lex_state = 21},
  [509] = {.lex_state = 0, .external_lex_state = 23},
  [510] = {.lex_state = 0, .external_lex_state = 13},
  [511] = {.lex_state = 14, .external_lex_state = 4},
  [512] = {.lex_state = 0, .external_lex_state = 13},
  [513] = {.lex_state = 0, .external_lex_state = 21},
  [514] = {.lex_state = 0, .external_lex_state = 19},
  [515] = {.lex_state = 0, .external_lex_state = 23},
  [516] = {.lex_state = 0, .external_lex_state = 19},
  [517] = {.lex_state = 16},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 0, .external_lex_state = 21},
  [520] = {.lex_state = 0, .external_lex_state = 21},
  [521] = {.lex_state = 0, .external_lex_state = 21},
  [522] = {.lex_state = 0, .external_lex_state = 21},
  [523] = {.lex_state = 0, .external_lex_state = 21},
  [524] = {.lex_state = 0, .external_lex_state = 21},
  [525] = {.lex_state = 0, .external_lex_state = 19},
  [526] = {.lex_state = 0, .external_lex_state = 15},
  [527] = {.lex_state = 0, .external_lex_state = 21},
  [528] = {.lex_state = 0, .external_lex_state = 21},
  [529] = {.lex_state = 0, .external_lex_state = 21},
  [530] = {.lex_state = 0, .external_lex_state = 21},
  [531] = {.lex_state = 0, .external_lex_state = 21},
  [532] = {.lex_state = 0, .external_lex_state = 21},
  [533] = {.lex_state = 0, .external_lex_state = 22},
  [534] = {.lex_state = 0, .external_lex_state = 21},
  [535] = {.lex_state = 0, .external_lex_state = 21},
  [536] = {.lex_state = 0, .external_lex_state = 21},
  [537] = {.lex_state = 0, .external_lex_state = 21},
  [538] = {.lex_state = 0, .external_lex_state = 21},
  [539] = {.lex_state = 0, .external_lex_state = 21},
  [540] = {.lex_state = 0, .external_lex_state = 21},
  [541] = {.lex_state = 0, .external_lex_state = 21},
  [542] = {.lex_state = 0, .external_lex_state = 15},
  [543] = {.lex_state = 0, .external_lex_state = 14},
  [544] = {.lex_state = 0, .external_lex_state = 14},
  [545] = {.lex_state = 0, .external_lex_state = 14},
  [546] = {.lex_state = 0, .external_lex_state = 22},
  [547] = {.lex_state = 0, .external_lex_state = 18},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 11},
  [550] = {.lex_state = 0, .external_lex_state = 11},
  [551] = {.lex_state = 0, .external_lex_state = 11},
  [552] = {.lex_state = 5, .external_lex_state = 4},
  [553] = {.lex_state = 0, .external_lex_state = 11},
  [554] = {.lex_state = 0, .external_lex_state = 11},
  [555] = {.lex_state = 0, .external_lex_state = 11},
  [556] = {.lex_state = 0, .external_lex_state = 11},
  [557] = {.lex_state = 0, .external_lex_state = 11},
  [558] = {.lex_state = 6, .external_lex_state = 4},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 11},
  [561] = {.lex_state = 0, .external_lex_state = 11},
  [562] = {.lex_state = 15, .external_lex_state = 4},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 11},
  [565] = {.lex_state = 0, .external_lex_state = 11},
  [566] = {.lex_state = 0, .external_lex_state = 11},
  [567] = {.lex_state = 0, .external_lex_state = 11},
  [568] = {.lex_state = 0, .external_lex_state = 11},
  [569] = {.lex_state = 0, .external_lex_state = 11},
  [570] = {.lex_state = 0, .external_lex_state = 11},
  [571] = {.lex_state = 0, .external_lex_state = 11},
  [572] = {.lex_state = 0, .external_lex_state = 2},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 0, .external_lex_state = 11},
  [575] = {.lex_state = 0, .external_lex_state = 11},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 0, .external_lex_state = 2},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 0, .external_lex_state = 11},
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 0, .external_lex_state = 11},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 13, .external_lex_state = 4},
  [588] = {.lex_state = 1, .external_lex_state = 4},
  [589] = {.lex_state = 1, .external_lex_state = 4},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 11},
  [593] = {.lex_state = 0, .external_lex_state = 11},
  [594] = {.lex_state = 0, .external_lex_state = 11},
  [595] = {.lex_state = 0, .external_lex_state = 11},
  [596] = {.lex_state = 0, .external_lex_state = 2},
  [597] = {.lex_state = 1},
  [598] = {.lex_state = 0, .external_lex_state = 25},
  [599] = {.lex_state = 0, .external_lex_state = 11},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 11},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 11},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 0, .external_lex_state = 11},
  [606] = {.lex_state = 0, .external_lex_state = 11},
  [607] = {.lex_state = 0, .external_lex_state = 11},
  [608] = {.lex_state = 0, .external_lex_state = 11},
  [609] = {.lex_state = 0, .external_lex_state = 11},
  [610] = {.lex_state = 0, .external_lex_state = 11},
  [611] = {.lex_state = 0, .external_lex_state = 11},
  [612] = {.lex_state = 1},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 4},
  [615] = {.lex_state = 0, .external_lex_state = 11},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 1, .external_lex_state = 4},
  [618] = {.lex_state = 1, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 11},
  [620] = {.lex_state = 0, .external_lex_state = 11},
  [621] = {.lex_state = 0, .external_lex_state = 2},
  [622] = {.lex_state = 0, .external_lex_state = 11},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0, .external_lex_state = 11},
  [625] = {.lex_state = 0, .external_lex_state = 25},
  [626] = {.lex_state = 0, .external_lex_state = 12},
  [627] = {.lex_state = 0, .external_lex_state = 18},
  [628] = {.lex_state = 0, .external_lex_state = 2},
  [629] = {.lex_state = 0, .external_lex_state = 18},
  [630] = {.lex_state = 0, .external_lex_state = 18},
  [631] = {.lex_state = 0, .external_lex_state = 11},
  [632] = {.lex_state = 0, .external_lex_state = 18},
  [633] = {.lex_state = 0, .external_lex_state = 18},
  [634] = {.lex_state = 0, .external_lex_state = 26},
  [635] = {.lex_state = 0, .external_lex_state = 11},
  [636] = {.lex_state = 0, .external_lex_state = 11},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 1},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 11},
  [641] = {.lex_state = 0, .external_lex_state = 11},
  [642] = {.lex_state = 0, .external_lex_state = 2},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 0, .external_lex_state = 12},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 11},
  [648] = {.lex_state = 0, .external_lex_state = 11},
  [649] = {.lex_state = 0, .external_lex_state = 11},
  [650] = {.lex_state = 0, .external_lex_state = 11},
  [651] = {.lex_state = 0, .external_lex_state = 11},
  [652] = {.lex_state = 0, .external_lex_state = 11},
  [653] = {.lex_state = 0, .external_lex_state = 11},
  [654] = {.lex_state = 0, .external_lex_state = 11},
  [655] = {.lex_state = 0, .external_lex_state = 17},
  [656] = {.lex_state = 0, .external_lex_state = 17},
  [657] = {.lex_state = 0, .external_lex_state = 17},
  [658] = {.lex_state = 0, .external_lex_state = 17},
  [659] = {.lex_state = 0, .external_lex_state = 17},
  [660] = {.lex_state = 0, .external_lex_state = 17},
  [661] = {.lex_state = 0, .external_lex_state = 11},
  [662] = {.lex_state = 69},
  [663] = {.lex_state = 0, .external_lex_state = 17},
  [664] = {.lex_state = 0, .external_lex_state = 17},
  [665] = {.lex_state = 0, .external_lex_state = 18},
  [666] = {.lex_state = 0, .external_lex_state = 18},
  [667] = {.lex_state = 0, .external_lex_state = 18},
  [668] = {.lex_state = 0, .external_lex_state = 18},
  [669] = {.lex_state = 0, .external_lex_state = 18},
  [670] = {.lex_state = 0, .external_lex_state = 18},
  [671] = {.lex_state = 0, .external_lex_state = 12},
  [672] = {.lex_state = 0, .external_lex_state = 12},
  [673] = {.lex_state = 0, .external_lex_state = 11},
  [674] = {.lex_state = 69},
  [675] = {.lex_state = 0, .external_lex_state = 2},
  [676] = {.lex_state = 0, .external_lex_state = 11},
  [677] = {.lex_state = 17},
  [678] = {.lex_state = 0, .external_lex_state = 4},
  [679] = {.lex_state = 0, .external_lex_state = 18},
  [680] = {.lex_state = 0, .external_lex_state = 18},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 11},
  [683] = {.lex_state = 0, .external_lex_state = 2},
  [684] = {.lex_state = 0, .external_lex_state = 27},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 0, .external_lex_state = 2},
  [688] = {.lex_state = 0, .external_lex_state = 12},
  [689] = {.lex_state = 0, .external_lex_state = 11},
  [690] = {.lex_state = 0, .external_lex_state = 11},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 2},
  [693] = {.lex_state = 0, .external_lex_state = 11},
  [694] = {.lex_state = 0, .external_lex_state = 11},
  [695] = {.lex_state = 13, .external_lex_state = 4},
  [696] = {.lex_state = 0, .external_lex_state = 2},
  [697] = {.lex_state = 0, .external_lex_state = 11},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 0, .external_lex_state = 11},
  [701] = {.lex_state = 0, .external_lex_state = 2},
  [702] = {.lex_state = 0, .external_lex_state = 11},
  [703] = {.lex_state = 0, .external_lex_state = 11},
  [704] = {.lex_state = 5, .external_lex_state = 4},
  [705] = {.lex_state = 0, .external_lex_state = 11},
  [706] = {.lex_state = 0, .external_lex_state = 11},
  [707] = {.lex_state = 0, .external_lex_state = 25},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 2},
  [710] = {.lex_state = 0, .external_lex_state = 11},
  [711] = {.lex_state = 0, .external_lex_state = 11},
  [712] = {.lex_state = 1, .external_lex_state = 4},
  [713] = {.lex_state = 0, .external_lex_state = 11},
  [714] = {.lex_state = 0, .external_lex_state = 11},
  [715] = {.lex_state = 0, .external_lex_state = 25},
  [716] = {.lex_state = 0, .external_lex_state = 11},
  [717] = {.lex_state = 0, .external_lex_state = 11},
  [718] = {.lex_state = 0, .external_lex_state = 2},
  [719] = {.lex_state = 0, .external_lex_state = 11},
  [720] = {.lex_state = 0, .external_lex_state = 11},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 0, .external_lex_state = 11},
  [723] = {.lex_state = 0, .external_lex_state = 11},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 11},
  [726] = {.lex_state = 0, .external_lex_state = 11},
  [727] = {.lex_state = 0, .external_lex_state = 11},
  [728] = {.lex_state = 0, .external_lex_state = 11},
  [729] = {.lex_state = 0, .external_lex_state = 11},
  [730] = {.lex_state = 0, .external_lex_state = 2},
  [731] = {.lex_state = 0, .external_lex_state = 11},
  [732] = {.lex_state = 0, .external_lex_state = 11},
  [733] = {.lex_state = 0, .external_lex_state = 11},
  [734] = {.lex_state = 1},
  [735] = {.lex_state = 0, .external_lex_state = 11},
  [736] = {.lex_state = 0, .external_lex_state = 11},
  [737] = {.lex_state = 0, .external_lex_state = 4},
  [738] = {.lex_state = 0, .external_lex_state = 11},
  [739] = {.lex_state = 0, .external_lex_state = 11},
  [740] = {.lex_state = 6, .external_lex_state = 4},
  [741] = {.lex_state = 0, .external_lex_state = 11},
  [742] = {.lex_state = 0, .external_lex_state = 11},
  [743] = {.lex_state = 13, .external_lex_state = 4},
  [744] = {.lex_state = 0, .external_lex_state = 18},
  [745] = {.lex_state = 0, .external_lex_state = 11},
  [746] = {.lex_state = 0, .external_lex_state = 4},
  [747] = {.lex_state = 0, .external_lex_state = 11},
  [748] = {.lex_state = 0, .external_lex_state = 11},
  [749] = {.lex_state = 6, .external_lex_state = 4},
  [750] = {.lex_state = 0, .external_lex_state = 18},
  [751] = {.lex_state = 0, .external_lex_state = 18},
  [752] = {.lex_state = 0, .external_lex_state = 18},
  [753] = {.lex_state = 0, .external_lex_state = 18},
  [754] = {.lex_state = 0, .external_lex_state = 18},
  [755] = {.lex_state = 0, .external_lex_state = 18},
  [756] = {.lex_state = 0, .external_lex_state = 18},
  [757] = {.lex_state = 0, .external_lex_state = 18},
  [758] = {.lex_state = 0, .external_lex_state = 27},
  [759] = {.lex_state = 0, .external_lex_state = 18},
  [760] = {.lex_state = 0, .external_lex_state = 18},
  [761] = {.lex_state = 1, .external_lex_state = 4},
  [762] = {.lex_state = 13, .external_lex_state = 4},
  [763] = {.lex_state = 0, .external_lex_state = 11},
  [764] = {.lex_state = 0, .external_lex_state = 18},
  [765] = {.lex_state = 0, .external_lex_state = 11},
  [766] = {.lex_state = 0, .external_lex_state = 18},
  [767] = {.lex_state = 0, .external_lex_state = 18},
  [768] = {.lex_state = 0, .external_lex_state = 18},
  [769] = {.lex_state = 13, .external_lex_state = 4},
  [770] = {.lex_state = 0, .external_lex_state = 18},
  [771] = {.lex_state = 0, .external_lex_state = 18},
  [772] = {.lex_state = 0, .external_lex_state = 18},
  [773] = {.lex_state = 0, .external_lex_state = 18},
  [774] = {.lex_state = 0, .external_lex_state = 18},
  [775] = {.lex_state = 0, .external_lex_state = 18},
  [776] = {.lex_state = 0, .external_lex_state = 18},
  [777] = {.lex_state = 0, .external_lex_state = 18},
  [778] = {.lex_state = 0, .external_lex_state = 18},
  [779] = {.lex_state = 0, .external_lex_state = 18},
  [780] = {.lex_state = 0, .external_lex_state = 18},
  [781] = {.lex_state = 0, .external_lex_state = 18},
  [782] = {.lex_state = 0, .external_lex_state = 18},
  [783] = {.lex_state = 0, .external_lex_state = 18},
  [784] = {.lex_state = 0, .external_lex_state = 18},
  [785] = {.lex_state = 0, .external_lex_state = 18},
  [786] = {.lex_state = 1, .external_lex_state = 4},
  [787] = {.lex_state = 0, .external_lex_state = 18},
  [788] = {.lex_state = 0, .external_lex_state = 18},
  [789] = {.lex_state = 0, .external_lex_state = 18},
  [790] = {.lex_state = 1},
  [791] = {.lex_state = 0, .external_lex_state = 2},
  [792] = {.lex_state = 0, .external_lex_state = 11},
  [793] = {.lex_state = 0, .external_lex_state = 18},
  [794] = {.lex_state = 0, .external_lex_state = 17},
  [795] = {.lex_state = 0, .external_lex_state = 17},
  [796] = {.lex_state = 0, .external_lex_state = 18},
  [797] = {.lex_state = 0, .external_lex_state = 18},
  [798] = {.lex_state = 0, .external_lex_state = 18},
  [799] = {.lex_state = 0, .external_lex_state = 18},
  [800] = {.lex_state = 0, .external_lex_state = 18},
  [801] = {.lex_state = 0, .external_lex_state = 18},
  [802] = {.lex_state = 0, .external_lex_state = 18},
  [803] = {.lex_state = 0, .external_lex_state = 18},
  [804] = {.lex_state = 0, .external_lex_state = 18},
  [805] = {.lex_state = 0, .external_lex_state = 18},
  [806] = {.lex_state = 0, .external_lex_state = 18},
  [807] = {.lex_state = 0, .external_lex_state = 18},
  [808] = {.lex_state = 0, .external_lex_state = 18},
  [809] = {.lex_state = 0, .external_lex_state = 18},
  [810] = {.lex_state = 0, .external_lex_state = 18},
  [811] = {.lex_state = 0, .external_lex_state = 18},
  [812] = {.lex_state = 0, .external_lex_state = 18},
  [813] = {.lex_state = 0, .external_lex_state = 18},
  [814] = {.lex_state = 0, .external_lex_state = 18},
  [815] = {.lex_state = 0, .external_lex_state = 18},
  [816] = {.lex_state = 0, .external_lex_state = 18},
  [817] = {.lex_state = 0, .external_lex_state = 18},
  [818] = {.lex_state = 0, .external_lex_state = 18},
  [819] = {.lex_state = 0, .external_lex_state = 18},
  [820] = {.lex_state = 0, .external_lex_state = 18},
  [821] = {.lex_state = 0, .external_lex_state = 18},
  [822] = {.lex_state = 0, .external_lex_state = 18},
  [823] = {.lex_state = 0, .external_lex_state = 18},
  [824] = {.lex_state = 0, .external_lex_state = 18},
  [825] = {.lex_state = 0, .external_lex_state = 18},
  [826] = {.lex_state = 0, .external_lex_state = 18},
  [827] = {.lex_state = 0, .external_lex_state = 18},
  [828] = {.lex_state = 0, .external_lex_state = 18},
  [829] = {.lex_state = 0, .external_lex_state = 18},
  [830] = {.lex_state = 0, .external_lex_state = 18},
  [831] = {.lex_state = 0, .external_lex_state = 18},
  [832] = {.lex_state = 0, .external_lex_state = 27},
  [833] = {.lex_state = 0, .external_lex_state = 18},
  [834] = {.lex_state = 0, .external_lex_state = 18},
  [835] = {.lex_state = 0, .external_lex_state = 18},
  [836] = {.lex_state = 0, .external_lex_state = 27},
  [837] = {.lex_state = 0, .external_lex_state = 18},
  [838] = {.lex_state = 0, .external_lex_state = 18},
  [839] = {.lex_state = 0, .external_lex_state = 18},
  [840] = {.lex_state = 0, .external_lex_state = 11},
  [841] = {.lex_state = 0, .external_lex_state = 18},
  [842] = {.lex_state = 0, .external_lex_state = 18},
  [843] = {.lex_state = 0, .external_lex_state = 18},
  [844] = {.lex_state = 0, .external_lex_state = 18},
  [845] = {.lex_state = 0, .external_lex_state = 25},
  [846] = {.lex_state = 0, .external_lex_state = 25},
  [847] = {.lex_state = 0, .external_lex_state = 18},
  [848] = {.lex_state = 6, .external_lex_state = 4},
  [849] = {.lex_state = 15, .external_lex_state = 4},
  [850] = {.lex_state = 0, .external_lex_state = 18},
  [851] = {.lex_state = 69},
  [852] = {.lex_state = 0, .external_lex_state = 18},
  [853] = {.lex_state = 17},
  [854] = {.lex_state = 0, .external_lex_state = 25},
  [855] = {.lex_state = 0, .external_lex_state = 25},
  [856] = {.lex_state = 0, .external_lex_state = 11},
  [857] = {.lex_state = 6, .external_lex_state = 4},
  [858] = {.lex_state = 15, .external_lex_state = 4},
  [859] = {.lex_state = 0, .external_lex_state = 2},
  [860] = {.lex_state = 0, .external_lex_state = 4},
  [861] = {.lex_state = 0, .external_lex_state = 25},
  [862] = {.lex_state = 0, .external_lex_state = 25},
  [863] = {.lex_state = 0, .external_lex_state = 25},
  [864] = {.lex_state = 0, .external_lex_state = 25},
  [865] = {.lex_state = 1},
  [866] = {.lex_state = 16},
  [867] = {.lex_state = 0, .external_lex_state = 26},
  [868] = {.lex_state = 0, .external_lex_state = 11},
  [869] = {.lex_state = 0, .external_lex_state = 2},
  [870] = {.lex_state = 0, .external_lex_state = 2},
  [871] = {.lex_state = 0, .external_lex_state = 27},
  [872] = {.lex_state = 0, .external_lex_state = 2},
  [873] = {.lex_state = 0, .external_lex_state = 2},
  [874] = {.lex_state = 0, .external_lex_state = 2},
  [875] = {.lex_state = 0, .external_lex_state = 2},
  [876] = {.lex_state = 0, .external_lex_state = 2},
  [877] = {.lex_state = 0, .external_lex_state = 2},
  [878] = {.lex_state = 0, .external_lex_state = 2},
  [879] = {.lex_state = 0, .external_lex_state = 2},
  [880] = {.lex_state = 0, .external_lex_state = 2},
  [881] = {.lex_state = 0, .external_lex_state = 2},
  [882] = {.lex_state = 0, .external_lex_state = 2},
  [883] = {.lex_state = 0, .external_lex_state = 2},
  [884] = {.lex_state = 0, .external_lex_state = 2},
  [885] = {.lex_state = 0, .external_lex_state = 2},
  [886] = {.lex_state = 0, .external_lex_state = 2},
  [887] = {.lex_state = 0, .external_lex_state = 11},
  [888] = {.lex_state = 0, .external_lex_state = 11},
  [889] = {.lex_state = 1, .external_lex_state = 4},
  [890] = {.lex_state = 1, .external_lex_state = 4},
  [891] = {.lex_state = 0, .external_lex_state = 2},
  [892] = {.lex_state = 0, .external_lex_state = 2},
  [893] = {.lex_state = 0, .external_lex_state = 2},
  [894] = {.lex_state = 0, .external_lex_state = 11},
  [895] = {.lex_state = 0, .external_lex_state = 2},
  [896] = {.lex_state = 0, .external_lex_state = 28},
  [897] = {.lex_state = 0, .external_lex_state = 4},
  [898] = {.lex_state = 1},
  [899] = {.lex_state = 13, .external_lex_state = 4},
  [900] = {.lex_state = 0, .external_lex_state = 4},
  [901] = {.lex_state = 17},
  [902] = {.lex_state = 0, .external_lex_state = 24},
  [903] = {.lex_state = 0, .external_lex_state = 24},
  [904] = {.lex_state = 0, .external_lex_state = 22},
  [905] = {.lex_state = 0, .external_lex_state = 22},
  [906] = {.lex_state = 0, .external_lex_state = 22},
  [907] = {.lex_state = 0, .external_lex_state = 22},
  [908] = {.lex_state = 0, .external_lex_state = 22},
  [909] = {.lex_state = 0, .external_lex_state = 22},
  [910] = {.lex_state = 0, .external_lex_state = 24},
  [911] = {.lex_state = 0, .external_lex_state = 24},
  [912] = {.lex_state = 0, .external_lex_state = 24},
  [913] = {.lex_state = 0, .external_lex_state = 24},
  [914] = {.lex_state = 0, .external_lex_state = 24},
  [915] = {.lex_state = 0, .external_lex_state = 4},
  [916] = {.lex_state = 0, .external_lex_state = 28},
  [917] = {.lex_state = 0, .external_lex_state = 4},
  [918] = {.lex_state = 0, .external_lex_state = 4},
  [919] = {.lex_state = 0, .external_lex_state = 4},
  [920] = {.lex_state = 0, .external_lex_state = 4},
  [921] = {.lex_state = 0, .external_lex_state = 27},
  [922] = {.lex_state = 5, .external_lex_state = 4},
  [923] = {.lex_state = 0, .external_lex_state = 4},
  [924] = {.lex_state = 0, .external_lex_state = 4},
  [925] = {.lex_state = 0, .external_lex_state = 4},
  [926] = {.lex_state = 1},
  [927] = {.lex_state = 0, .external_lex_state = 4},
  [928] = {.lex_state = 1},
  [929] = {.lex_state = 0, .external_lex_state = 4},
  [930] = {.lex_state = 0, .external_lex_state = 4},
  [931] = {.lex_state = 0, .external_lex_state = 4},
  [932] = {.lex_state = 1},
  [933] = {.lex_state = 0, .external_lex_state = 4},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 0, .external_lex_state = 4},
  [936] = {.lex_state = 0, .external_lex_state = 4},
  [937] = {.lex_state = 0, .external_lex_state = 4},
  [938] = {.lex_state = 0, .external_lex_state = 4},
  [939] = {.lex_state = 0, .external_lex_state = 4},
  [940] = {.lex_state = 1},
  [941] = {.lex_state = 0, .external_lex_state = 4},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 1},
  [944] = {.lex_state = 0, .external_lex_state = 4},
  [945] = {.lex_state = 0, .external_lex_state = 4},
  [946] = {.lex_state = 0, .external_lex_state = 4},
  [947] = {.lex_state = 0, .external_lex_state = 4},
  [948] = {.lex_state = 0, .external_lex_state = 4},
  [949] = {.lex_state = 0, .external_lex_state = 4},
  [950] = {.lex_state = 0, .external_lex_state = 4},
  [951] = {.lex_state = 0, .external_lex_state = 4},
  [952] = {.lex_state = 0, .external_lex_state = 4},
  [953] = {.lex_state = 0, .external_lex_state = 4},
  [954] = {.lex_state = 0, .external_lex_state = 4},
  [955] = {.lex_state = 1},
  [956] = {.lex_state = 0, .external_lex_state = 4},
  [957] = {.lex_state = 0, .external_lex_state = 4},
  [958] = {.lex_state = 16},
  [959] = {.lex_state = 0, .external_lex_state = 4},
  [960] = {.lex_state = 0, .external_lex_state = 4},
  [961] = {.lex_state = 0, .external_lex_state = 4},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 0, .external_lex_state = 4},
  [964] = {.lex_state = 0, .external_lex_state = 28},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 0, .external_lex_state = 4},
  [968] = {.lex_state = 16},
  [969] = {.lex_state = 0, .external_lex_state = 4},
  [970] = {.lex_state = 5, .external_lex_state = 4},
  [971] = {.lex_state = 0, .external_lex_state = 4},
  [972] = {.lex_state = 0, .external_lex_state = 4},
  [973] = {.lex_state = 0, .external_lex_state = 4},
  [974] = {.lex_state = 0, .external_lex_state = 28},
  [975] = {.lex_state = 0, .external_lex_state = 4},
  [976] = {.lex_state = 0, .external_lex_state = 4},
  [977] = {.lex_state = 1, .external_lex_state = 4},
  [978] = {.lex_state = 0, .external_lex_state = 4},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 1, .external_lex_state = 4},
  [981] = {.lex_state = 0, .external_lex_state = 22},
  [982] = {.lex_state = 0, .external_lex_state = 22},
  [983] = {.lex_state = 0, .external_lex_state = 22},
  [984] = {.lex_state = 1},
  [985] = {.lex_state = 0, .external_lex_state = 22},
  [986] = {.lex_state = 0, .external_lex_state = 4},
  [987] = {.lex_state = 0, .external_lex_state = 22},
  [988] = {.lex_state = 1},
  [989] = {.lex_state = 16},
  [990] = {.lex_state = 0, .external_lex_state = 4},
  [991] = {.lex_state = 0, .external_lex_state = 4},
  [992] = {.lex_state = 0, .external_lex_state = 4},
  [993] = {.lex_state = 0, .external_lex_state = 4},
  [994] = {.lex_state = 0, .external_lex_state = 28},
  [995] = {.lex_state = 0, .external_lex_state = 28},
  [996] = {.lex_state = 0, .external_lex_state = 28},
  [997] = {.lex_state = 1},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 0, .external_lex_state = 23},
  [1000] = {.lex_state = 0, .external_lex_state = 4},
  [1001] = {.lex_state = 1},
  [1002] = {.lex_state = 0, .external_lex_state = 4},
  [1003] = {.lex_state = 0, .external_lex_state = 4},
  [1004] = {.lex_state = 0, .external_lex_state = 4},
  [1005] = {.lex_state = 0, .external_lex_state = 4},
  [1006] = {.lex_state = 0, .external_lex_state = 4},
  [1007] = {.lex_state = 0, .external_lex_state = 27},
  [1008] = {.lex_state = 0, .external_lex_state = 4},
  [1009] = {.lex_state = 0, .external_lex_state = 4},
  [1010] = {.lex_state = 0, .external_lex_state = 4},
  [1011] = {.lex_state = 0, .external_lex_state = 4},
  [1012] = {.lex_state = 0, .external_lex_state = 22},
  [1013] = {.lex_state = 1},
  [1014] = {.lex_state = 13, .external_lex_state = 4},
  [1015] = {.lex_state = 0, .external_lex_state = 4},
  [1016] = {.lex_state = 0, .external_lex_state = 4},
  [1017] = {.lex_state = 0, .external_lex_state = 28},
  [1018] = {.lex_state = 13, .external_lex_state = 4},
  [1019] = {.lex_state = 0, .external_lex_state = 28},
  [1020] = {.lex_state = 0, .external_lex_state = 28},
  [1021] = {.lex_state = 13, .external_lex_state = 4},
  [1022] = {.lex_state = 0, .external_lex_state = 4},
  [1023] = {.lex_state = 1},
  [1024] = {.lex_state = 16},
  [1025] = {.lex_state = 0, .external_lex_state = 4},
  [1026] = {.lex_state = 1},
  [1027] = {.lex_state = 0, .external_lex_state = 4},
  [1028] = {.lex_state = 0, .external_lex_state = 4},
  [1029] = {.lex_state = 0, .external_lex_state = 28},
  [1030] = {.lex_state = 0, .external_lex_state = 4},
  [1031] = {.lex_state = 0, .external_lex_state = 22},
  [1032] = {.lex_state = 0, .external_lex_state = 4},
  [1033] = {.lex_state = 1},
  [1034] = {.lex_state = 0, .external_lex_state = 4},
  [1035] = {.lex_state = 0, .external_lex_state = 4},
  [1036] = {.lex_state = 0, .external_lex_state = 4},
  [1037] = {.lex_state = 1},
  [1038] = {.lex_state = 1},
  [1039] = {.lex_state = 0, .external_lex_state = 4},
  [1040] = {.lex_state = 0, .external_lex_state = 22},
  [1041] = {.lex_state = 41},
  [1042] = {.lex_state = 1},
  [1043] = {.lex_state = 0, .external_lex_state = 28},
  [1044] = {.lex_state = 0, .external_lex_state = 28},
  [1045] = {.lex_state = 0, .external_lex_state = 28},
  [1046] = {.lex_state = 0, .external_lex_state = 28},
  [1047] = {.lex_state = 0, .external_lex_state = 4},
  [1048] = {.lex_state = 1},
  [1049] = {.lex_state = 0, .external_lex_state = 28},
  [1050] = {.lex_state = 0, .external_lex_state = 4},
  [1051] = {.lex_state = 0, .external_lex_state = 28},
  [1052] = {.lex_state = 0, .external_lex_state = 28},
  [1053] = {.lex_state = 0, .external_lex_state = 4},
  [1054] = {.lex_state = 0, .external_lex_state = 4},
  [1055] = {.lex_state = 0, .external_lex_state = 27},
  [1056] = {.lex_state = 1, .external_lex_state = 4},
  [1057] = {.lex_state = 0, .external_lex_state = 4},
  [1058] = {.lex_state = 0, .external_lex_state = 28},
  [1059] = {.lex_state = 0, .external_lex_state = 21},
  [1060] = {.lex_state = 0, .external_lex_state = 28},
  [1061] = {.lex_state = 0, .external_lex_state = 28},
  [1062] = {.lex_state = 0, .external_lex_state = 21},
  [1063] = {.lex_state = 0, .external_lex_state = 21},
  [1064] = {.lex_state = 0, .external_lex_state = 28},
  [1065] = {.lex_state = 1, .external_lex_state = 4},
  [1066] = {.lex_state = 0, .external_lex_state = 27},
  [1067] = {.lex_state = 0, .external_lex_state = 21},
  [1068] = {.lex_state = 0, .external_lex_state = 21},
  [1069] = {.lex_state = 0, .external_lex_state = 21},
  [1070] = {.lex_state = 0, .external_lex_state = 28},
  [1071] = {.lex_state = 0, .external_lex_state = 21},
  [1072] = {.lex_state = 0, .external_lex_state = 28},
  [1073] = {.lex_state = 0, .external_lex_state = 28},
  [1074] = {.lex_state = 1, .external_lex_state = 4},
  [1075] = {.lex_state = 0, .external_lex_state = 28},
  [1076] = {.lex_state = 1, .external_lex_state = 4},
  [1077] = {.lex_state = 0, .external_lex_state = 27},
  [1078] = {.lex_state = 0, .external_lex_state = 27},
  [1079] = {.lex_state = 1, .external_lex_state = 4},
  [1080] = {.lex_state = 0, .external_lex_state = 4},
  [1081] = {.lex_state = 0, .external_lex_state = 4},
  [1082] = {.lex_state = 0, .external_lex_state = 21},
  [1083] = {.lex_state = 0, .external_lex_state = 4},
  [1084] = {.lex_state = 0, .external_lex_state = 4},
  [1085] = {.lex_state = 0, .external_lex_state = 22},
  [1086] = {.lex_state = 0, .external_lex_state = 4},
  [1087] = {.lex_state = 1, .external_lex_state = 4},
  [1088] = {.lex_state = 0, .external_lex_state = 22},
  [1089] = {.lex_state = 0, .external_lex_state = 4},
  [1090] = {.lex_state = 1, .external_lex_state = 4},
  [1091] = {.lex_state = 0, .external_lex_state = 4},
  [1092] = {.lex_state = 1},
  [1093] = {.lex_state = 0, .external_lex_state = 4},
  [1094] = {.lex_state = 0, .external_lex_state = 4},
  [1095] = {.lex_state = 1},
  [1096] = {.lex_state = 0, .external_lex_state = 4},
  [1097] = {.lex_state = 0, .external_lex_state = 24},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 1},
  [1100] = {.lex_state = 0, .external_lex_state = 29},
  [1101] = {.lex_state = 272},
  [1102] = {.lex_state = 1},
  [1103] = {.lex_state = 272},
  [1104] = {.lex_state = 1},
  [1105] = {.lex_state = 0, .external_lex_state = 30},
  [1106] = {.lex_state = 0, .external_lex_state = 31},
  [1107] = {.lex_state = 0, .external_lex_state = 31},
  [1108] = {.lex_state = 0, .external_lex_state = 3},
  [1109] = {.lex_state = 272},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 0, .external_lex_state = 3},
  [1112] = {.lex_state = 0, .external_lex_state = 29},
  [1113] = {.lex_state = 273, .external_lex_state = 32},
  [1114] = {.lex_state = 0, .external_lex_state = 29},
  [1115] = {.lex_state = 1},
  [1116] = {.lex_state = 1},
  [1117] = {.lex_state = 273, .external_lex_state = 32},
  [1118] = {.lex_state = 0, .external_lex_state = 4},
  [1119] = {.lex_state = 0, .external_lex_state = 31},
  [1120] = {.lex_state = 1},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 5},
  [1123] = {.lex_state = 1},
  [1124] = {.lex_state = 273, .external_lex_state = 32},
  [1125] = {.lex_state = 273, .external_lex_state = 32},
  [1126] = {.lex_state = 1},
  [1127] = {.lex_state = 1},
  [1128] = {.lex_state = 273, .external_lex_state = 32},
  [1129] = {.lex_state = 273, .external_lex_state = 32},
  [1130] = {.lex_state = 1},
  [1131] = {.lex_state = 1},
  [1132] = {.lex_state = 1},
  [1133] = {.lex_state = 273, .external_lex_state = 32},
  [1134] = {.lex_state = 273, .external_lex_state = 32},
  [1135] = {.lex_state = 273, .external_lex_state = 32},
  [1136] = {.lex_state = 273, .external_lex_state = 32},
  [1137] = {.lex_state = 273, .external_lex_state = 32},
  [1138] = {.lex_state = 273, .external_lex_state = 32},
  [1139] = {.lex_state = 273, .external_lex_state = 32},
  [1140] = {.lex_state = 273, .external_lex_state = 32},
  [1141] = {.lex_state = 273, .external_lex_state = 32},
  [1142] = {.lex_state = 273, .external_lex_state = 32},
  [1143] = {.lex_state = 273, .external_lex_state = 32},
  [1144] = {.lex_state = 273, .external_lex_state = 32},
  [1145] = {.lex_state = 1},
  [1146] = {.lex_state = 1},
  [1147] = {.lex_state = 1},
  [1148] = {.lex_state = 272},
  [1149] = {.lex_state = 274},
  [1150] = {.lex_state = 41},
  [1151] = {.lex_state = 0, .external_lex_state = 27},
  [1152] = {.lex_state = 16},
  [1153] = {.lex_state = 41},
  [1154] = {.lex_state = 1},
  [1155] = {.lex_state = 0, .external_lex_state = 30},
  [1156] = {.lex_state = 0, .external_lex_state = 31},
  [1157] = {.lex_state = 0, .external_lex_state = 30},
  [1158] = {.lex_state = 273, .external_lex_state = 32},
  [1159] = {.lex_state = 0, .external_lex_state = 31},
  [1160] = {.lex_state = 16},
  [1161] = {.lex_state = 0, .external_lex_state = 31},
  [1162] = {.lex_state = 1},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 0, .external_lex_state = 3},
  [1165] = {.lex_state = 16},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 0, .external_lex_state = 30},
  [1169] = {.lex_state = 0, .external_lex_state = 31},
  [1170] = {.lex_state = 0, .external_lex_state = 30},
  [1171] = {.lex_state = 0, .external_lex_state = 31},
  [1172] = {.lex_state = 0, .external_lex_state = 31},
  [1173] = {.lex_state = 1},
  [1174] = {.lex_state = 0, .external_lex_state = 31},
  [1175] = {.lex_state = 273, .external_lex_state = 32},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 273, .external_lex_state = 32},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 0, .external_lex_state = 4},
  [1180] = {.lex_state = 1},
  [1181] = {.lex_state = 1},
  [1182] = {.lex_state = 1},
  [1183] = {.lex_state = 1},
  [1184] = {.lex_state = 1},
  [1185] = {.lex_state = 1},
  [1186] = {.lex_state = 1},
  [1187] = {.lex_state = 1},
  [1188] = {.lex_state = 1},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 0, .external_lex_state = 4},
  [1191] = {.lex_state = 0, .external_lex_state = 4},
  [1192] = {.lex_state = 1},
  [1193] = {.lex_state = 16},
  [1194] = {.lex_state = 0, .external_lex_state = 4},
  [1195] = {.lex_state = 0, .external_lex_state = 28},
  [1196] = {.lex_state = 1},
  [1197] = {.lex_state = 1},
  [1198] = {.lex_state = 0, .external_lex_state = 4},
  [1199] = {.lex_state = 16},
  [1200] = {.lex_state = 0, .external_lex_state = 4},
  [1201] = {.lex_state = 274},
  [1202] = {.lex_state = 0, .external_lex_state = 5},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 0, .external_lex_state = 29},
  [1205] = {.lex_state = 0, .external_lex_state = 30},
  [1206] = {.lex_state = 272},
  [1207] = {.lex_state = 0, .external_lex_state = 28},
  [1208] = {.lex_state = 0, .external_lex_state = 4},
  [1209] = {.lex_state = 0, .external_lex_state = 31},
  [1210] = {.lex_state = 1},
  [1211] = {.lex_state = 272},
  [1212] = {.lex_state = 0, .external_lex_state = 27},
  [1213] = {.lex_state = 273, .external_lex_state = 32},
  [1214] = {.lex_state = 0, .external_lex_state = 31},
  [1215] = {.lex_state = 1},
  [1216] = {.lex_state = 0, .external_lex_state = 4},
  [1217] = {.lex_state = 0, .external_lex_state = 33},
  [1218] = {.lex_state = 41},
  [1219] = {.lex_state = 0, .external_lex_state = 32},
  [1220] = {.lex_state = 1},
  [1221] = {.lex_state = 41},
  [1222] = {.lex_state = 1},
  [1223] = {.lex_state = 0, .external_lex_state = 33},
  [1224] = {.lex_state = 1},
  [1225] = {.lex_state = 0, .external_lex_state = 33},
  [1226] = {.lex_state = 1},
  [1227] = {.lex_state = 275},
  [1228] = {.lex_state = 1},
  [1229] = {.lex_state = 0, .external_lex_state = 33},
  [1230] = {.lex_state = 1},
  [1231] = {.lex_state = 41},
  [1232] = {.lex_state = 0, .external_lex_state = 33},
  [1233] = {.lex_state = 1},
  [1234] = {.lex_state = 0, .external_lex_state = 32},
  [1235] = {.lex_state = 1},
  [1236] = {.lex_state = 1},
  [1237] = {.lex_state = 0, .external_lex_state = 32},
  [1238] = {.lex_state = 0, .external_lex_state = 32},
  [1239] = {.lex_state = 0, .external_lex_state = 32},
  [1240] = {.lex_state = 0, .external_lex_state = 4},
  [1241] = {.lex_state = 276},
  [1242] = {.lex_state = 1},
  [1243] = {.lex_state = 275},
  [1244] = {.lex_state = 1},
  [1245] = {.lex_state = 1},
  [1246] = {.lex_state = 275},
  [1247] = {.lex_state = 0, .external_lex_state = 4},
  [1248] = {.lex_state = 0, .external_lex_state = 33},
  [1249] = {.lex_state = 0, .external_lex_state = 33},
  [1250] = {.lex_state = 41},
  [1251] = {.lex_state = 1},
  [1252] = {.lex_state = 0, .external_lex_state = 4},
  [1253] = {.lex_state = 0, .external_lex_state = 4},
  [1254] = {.lex_state = 0, .external_lex_state = 32},
  [1255] = {.lex_state = 1},
  [1256] = {.lex_state = 41},
  [1257] = {.lex_state = 0, .external_lex_state = 32},
  [1258] = {.lex_state = 0, .external_lex_state = 32},
  [1259] = {.lex_state = 1},
  [1260] = {.lex_state = 1},
  [1261] = {.lex_state = 0, .external_lex_state = 4},
  [1262] = {.lex_state = 1},
  [1263] = {.lex_state = 0, .external_lex_state = 32},
  [1264] = {.lex_state = 0, .external_lex_state = 4},
  [1265] = {.lex_state = 0, .external_lex_state = 32},
  [1266] = {.lex_state = 1},
  [1267] = {.lex_state = 41},
  [1268] = {.lex_state = 5},
  [1269] = {.lex_state = 1},
  [1270] = {.lex_state = 41},
  [1271] = {.lex_state = 0, .external_lex_state = 32},
  [1272] = {.lex_state = 0, .external_lex_state = 32},
  [1273] = {.lex_state = 0, .external_lex_state = 32},
  [1274] = {.lex_state = 0, .external_lex_state = 32},
  [1275] = {.lex_state = 0, .external_lex_state = 4},
  [1276] = {.lex_state = 0, .external_lex_state = 32},
  [1277] = {.lex_state = 0, .external_lex_state = 33},
  [1278] = {.lex_state = 1},
  [1279] = {.lex_state = 0, .external_lex_state = 4},
  [1280] = {.lex_state = 0, .external_lex_state = 32},
  [1281] = {.lex_state = 0, .external_lex_state = 32},
  [1282] = {.lex_state = 0, .external_lex_state = 32},
  [1283] = {.lex_state = 0, .external_lex_state = 32},
  [1284] = {.lex_state = 0, .external_lex_state = 4},
  [1285] = {.lex_state = 0, .external_lex_state = 33},
  [1286] = {.lex_state = 1},
  [1287] = {.lex_state = 1},
  [1288] = {.lex_state = 0, .external_lex_state = 4},
  [1289] = {.lex_state = 0, .external_lex_state = 32},
  [1290] = {.lex_state = 276},
  [1291] = {.lex_state = 0, .external_lex_state = 4},
  [1292] = {.lex_state = 41},
  [1293] = {.lex_state = 0, .external_lex_state = 32},
  [1294] = {.lex_state = 1},
  [1295] = {.lex_state = 0, .external_lex_state = 32},
  [1296] = {.lex_state = 0, .external_lex_state = 4},
  [1297] = {.lex_state = 0, .external_lex_state = 4},
  [1298] = {.lex_state = 1},
  [1299] = {.lex_state = 0, .external_lex_state = 33},
  [1300] = {.lex_state = 0, .external_lex_state = 33},
  [1301] = {.lex_state = 1},
  [1302] = {.lex_state = 1},
  [1303] = {.lex_state = 1},
  [1304] = {.lex_state = 0, .external_lex_state = 32},
  [1305] = {.lex_state = 0, .external_lex_state = 32},
  [1306] = {.lex_state = 0, .external_lex_state = 32},
  [1307] = {.lex_state = 0, .external_lex_state = 32},
  [1308] = {.lex_state = 1},
  [1309] = {.lex_state = 0},
  [1310] = {.lex_state = 0, .external_lex_state = 4},
  [1311] = {.lex_state = 1},
  [1312] = {.lex_state = 1},
  [1313] = {.lex_state = 274},
  [1314] = {.lex_state = 1},
  [1315] = {.lex_state = 0, .external_lex_state = 33},
  [1316] = {.lex_state = 0, .external_lex_state = 32},
  [1317] = {.lex_state = 273},
  [1318] = {.lex_state = 276},
  [1319] = {.lex_state = 0, .external_lex_state = 33},
  [1320] = {.lex_state = 0, .external_lex_state = 32},
  [1321] = {.lex_state = 0, .external_lex_state = 32},
  [1322] = {.lex_state = 0, .external_lex_state = 33},
  [1323] = {.lex_state = 0, .external_lex_state = 33},
  [1324] = {.lex_state = 1},
  [1325] = {.lex_state = 0, .external_lex_state = 4},
  [1326] = {.lex_state = 1},
  [1327] = {.lex_state = 1},
  [1328] = {.lex_state = 1},
  [1329] = {.lex_state = 1},
  [1330] = {.lex_state = 0, .external_lex_state = 32},
  [1331] = {.lex_state = 0, .external_lex_state = 32},
  [1332] = {.lex_state = 1},
  [1333] = {.lex_state = 0, .external_lex_state = 32},
  [1334] = {.lex_state = 1},
  [1335] = {.lex_state = 0, .external_lex_state = 4},
  [1336] = {.lex_state = 29},
  [1337] = {.lex_state = 0, .external_lex_state = 32},
  [1338] = {.lex_state = 1},
  [1339] = {.lex_state = 1},
  [1340] = {.lex_state = 1},
  [1341] = {.lex_state = 1},
  [1342] = {.lex_state = 1},
  [1343] = {.lex_state = 1},
  [1344] = {.lex_state = 1},
  [1345] = {.lex_state = 0, .external_lex_state = 32},
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
  },
  [1] = {
    [sym_source_file] = STATE(1309),
    [sym_item] = STATE(121),
    [sym__trivia] = STATE(121),
    [aux_sym_source_file_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(583),
    [sym_let_statement] = STATE(583),
    [sym_run_statement] = STATE(583),
    [sym_implicit_run_statement] = STATE(583),
    [sym__implicit_run_line] = STATE(131),
    [sym_seek_statement] = STATE(583),
    [sym_ask_statement] = STATE(583),
    [sym_scatter_statement] = STATE(583),
    [sym_storm_statement] = STATE(583),
    [sym_gather_statement] = STATE(583),
    [sym_settle_statement] = STATE(583),
    [sym_map_statement] = STATE(583),
    [sym_keep_statement] = STATE(583),
    [sym_drop_statement] = STATE(583),
    [sym_sort_statement] = STATE(583),
    [sym_repeat_statement] = STATE(583),
    [sym_invalid_flow_reserved_statement] = STATE(583),
    [sym__query_directive_key] = STATE(1014),
    [sym__route_directive_key] = STATE(1014),
    [sym_directive_key] = STATE(587),
    [sym_role] = STATE(587),
    [sym__flow_reserved_word] = STATE(587),
    [sym__agic_reserved_word] = STATE(587),
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
    [sym_flow_let_keyword] = ACTIONS(29),
    [sym_flow_seek_keyword] = ACTIONS(31),
    [sym_flow_ask_keyword] = ACTIONS(33),
    [sym_flow_scatter_keyword] = ACTIONS(35),
    [sym_flow_storm_keyword] = ACTIONS(37),
    [sym_flow_gather_keyword] = ACTIONS(39),
    [sym_flow_settle_keyword] = ACTIONS(41),
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
    [sym__flow_operation] = STATE(583),
    [sym_let_statement] = STATE(583),
    [sym_run_statement] = STATE(583),
    [sym_implicit_run_statement] = STATE(583),
    [sym__implicit_run_line] = STATE(131),
    [sym_seek_statement] = STATE(583),
    [sym_ask_statement] = STATE(583),
    [sym_scatter_statement] = STATE(583),
    [sym_storm_statement] = STATE(583),
    [sym_gather_statement] = STATE(583),
    [sym_settle_statement] = STATE(583),
    [sym_map_statement] = STATE(583),
    [sym_keep_statement] = STATE(583),
    [sym_drop_statement] = STATE(583),
    [sym_sort_statement] = STATE(583),
    [sym_repeat_statement] = STATE(583),
    [sym_invalid_flow_reserved_statement] = STATE(583),
    [sym__query_directive_key] = STATE(1014),
    [sym__route_directive_key] = STATE(1014),
    [sym_directive_key] = STATE(587),
    [sym_role] = STATE(587),
    [sym__flow_reserved_word] = STATE(587),
    [sym__agic_reserved_word] = STATE(587),
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
    [sym_flow_let_keyword] = ACTIONS(29),
    [sym_flow_seek_keyword] = ACTIONS(31),
    [sym_flow_ask_keyword] = ACTIONS(33),
    [sym_flow_scatter_keyword] = ACTIONS(35),
    [sym_flow_storm_keyword] = ACTIONS(37),
    [sym_flow_gather_keyword] = ACTIONS(39),
    [sym_flow_settle_keyword] = ACTIONS(41),
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
    [sym__flow_operation] = STATE(744),
    [sym_let_statement] = STATE(744),
    [sym_run_statement] = STATE(744),
    [sym_implicit_run_statement] = STATE(744),
    [sym__implicit_run_line] = STATE(103),
    [sym_seek_statement] = STATE(744),
    [sym_ask_statement] = STATE(744),
    [sym_scatter_statement] = STATE(744),
    [sym_storm_statement] = STATE(744),
    [sym_gather_statement] = STATE(744),
    [sym_settle_statement] = STATE(744),
    [sym_map_statement] = STATE(744),
    [sym_keep_statement] = STATE(744),
    [sym_drop_statement] = STATE(744),
    [sym_sort_statement] = STATE(744),
    [sym_repeat_statement] = STATE(744),
    [sym_invalid_flow_reserved_statement] = STATE(744),
    [sym__query_directive_key] = STATE(1014),
    [sym__route_directive_key] = STATE(1014),
    [sym_directive_key] = STATE(695),
    [sym_role] = STATE(695),
    [sym__flow_reserved_word] = STATE(695),
    [sym__agic_reserved_word] = STATE(695),
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
    [sym_flow_let_keyword] = ACTIONS(61),
    [sym_flow_seek_keyword] = ACTIONS(63),
    [sym_flow_ask_keyword] = ACTIONS(65),
    [sym_flow_scatter_keyword] = ACTIONS(67),
    [sym_flow_storm_keyword] = ACTIONS(69),
    [sym_flow_gather_keyword] = ACTIONS(71),
    [sym_flow_settle_keyword] = ACTIONS(73),
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
  [5] = {
    [sym__flow_operation] = STATE(228),
    [sym_let_statement] = STATE(228),
    [sym_run_statement] = STATE(228),
    [sym_implicit_run_statement] = STATE(228),
    [sym__implicit_run_line] = STATE(80),
    [sym_seek_statement] = STATE(228),
    [sym_ask_statement] = STATE(228),
    [sym_scatter_statement] = STATE(228),
    [sym_storm_statement] = STATE(228),
    [sym_gather_statement] = STATE(228),
    [sym_settle_statement] = STATE(228),
    [sym_map_statement] = STATE(228),
    [sym_keep_statement] = STATE(228),
    [sym_drop_statement] = STATE(228),
    [sym_sort_statement] = STATE(228),
    [sym_repeat_statement] = STATE(228),
    [sym_invalid_flow_reserved_statement] = STATE(228),
    [sym__query_directive_key] = STATE(1014),
    [sym__route_directive_key] = STATE(1014),
    [sym_directive_key] = STATE(769),
    [sym_role] = STATE(769),
    [sym__flow_reserved_word] = STATE(769),
    [sym__agic_reserved_word] = STATE(769),
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
    [sym_with_keyword] = ACTIONS(87),
    [sym_struct_keyword] = ACTIONS(87),
    [sym_psyche_keyword] = ACTIONS(89),
    [sym_skill_keyword] = ACTIONS(89),
    [sym_service_keyword] = ACTIONS(89),
    [sym_prompt_keyword] = ACTIONS(89),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(87),
    [sym_task_keyword] = ACTIONS(87),
    [sym_chore_keyword] = ACTIONS(87),
    [sym_flow_keyword] = ACTIONS(87),
    [sym_pass_keyword] = ACTIONS(87),
    [sym_flow_run_keyword] = ACTIONS(91),
    [sym_flow_let_keyword] = ACTIONS(93),
    [sym_flow_seek_keyword] = ACTIONS(95),
    [sym_flow_ask_keyword] = ACTIONS(97),
    [sym_flow_scatter_keyword] = ACTIONS(99),
    [sym_flow_storm_keyword] = ACTIONS(101),
    [sym_flow_gather_keyword] = ACTIONS(103),
    [sym_flow_settle_keyword] = ACTIONS(105),
    [sym_flow_map_keyword] = ACTIONS(107),
    [sym_flow_keep_keyword] = ACTIONS(109),
    [sym_flow_drop_keyword] = ACTIONS(111),
    [sym_flow_sort_keyword] = ACTIONS(113),
    [sym_flow_rank_keyword] = ACTIONS(87),
    [sym_flow_repeat_keyword] = ACTIONS(115),
    [sym_flow_until_keyword] = ACTIONS(87),
    [sym_flow_from_keyword] = ACTIONS(87),
    [sym_flow_windowing_keyword] = ACTIONS(87),
    [sym_flow_using_keyword] = ACTIONS(87),
    [sym_flow_if_keyword] = ACTIONS(87),
    [sym_flow_by_keyword] = ACTIONS(87),
    [sym_flow_in_keyword] = ACTIONS(89),
    [sym_flow_lane_keyword] = ACTIONS(89),
    [sym_flow_ascending_keyword] = ACTIONS(87),
    [sym_flow_descending_keyword] = ACTIONS(87),
    [sym_flow_time_keyword] = ACTIONS(89),
    [sym_flow_times_keyword] = ACTIONS(87),
    [sym_flow_par_keyword] = ACTIONS(87),
    [sym_flow_first_keyword] = ACTIONS(87),
    [sym_flow_last_keyword] = ACTIONS(87),
    [sym_flow_top_keyword] = ACTIONS(87),
    [sym_flow_bottom_keyword] = ACTIONS(87),
    [sym_flow_think_keyword] = ACTIONS(87),
    [sym_flow_use_keyword] = ACTIONS(89),
    [sym_thunk_keyword] = ACTIONS(87),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(87),
    [anon_sym_do] = ACTIONS(87),
    [anon_sym_unfold] = ACTIONS(87),
    [anon_sym_each] = ACTIONS(87),
    [anon_sym_fold] = ACTIONS(87),
    [anon_sym_head] = ACTIONS(87),
    [anon_sym_tail] = ACTIONS(87),
    [sym__flow_raw_text] = ACTIONS(117),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(121), 1,
      sym_flow_run_keyword,
    ACTIONS(123), 1,
      sym_flow_seek_keyword,
    ACTIONS(125), 1,
      sym_flow_ask_keyword,
    ACTIONS(127), 1,
      sym_flow_scatter_keyword,
    ACTIONS(129), 1,
      sym_flow_storm_keyword,
    ACTIONS(131), 1,
      sym_flow_gather_keyword,
    ACTIONS(133), 1,
      sym_flow_settle_keyword,
    ACTIONS(135), 1,
      sym_flow_map_keyword,
    ACTIONS(137), 1,
      sym_flow_keep_keyword,
    ACTIONS(139), 1,
      sym_flow_drop_keyword,
    ACTIONS(141), 1,
      sym_flow_sort_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(592), 1,
      sym_text_inline,
    STATE(684), 1,
      sym_line_end,
    STATE(733), 1,
      sym_text_block,
    STATE(593), 13,
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
  [70] = 19,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(149), 1,
      sym_flow_run_keyword,
    ACTIONS(151), 1,
      sym_flow_seek_keyword,
    ACTIONS(153), 1,
      sym_flow_ask_keyword,
    ACTIONS(155), 1,
      sym_flow_scatter_keyword,
    ACTIONS(157), 1,
      sym_flow_storm_keyword,
    ACTIONS(159), 1,
      sym_flow_gather_keyword,
    ACTIONS(161), 1,
      sym_flow_settle_keyword,
    ACTIONS(163), 1,
      sym_flow_map_keyword,
    ACTIONS(165), 1,
      sym_flow_keep_keyword,
    ACTIONS(167), 1,
      sym_flow_drop_keyword,
    ACTIONS(169), 1,
      sym_flow_sort_keyword,
    ACTIONS(171), 1,
      sym_flow_repeat_keyword,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(627), 1,
      sym_text_block,
    STATE(796), 1,
      sym_text_inline,
    STATE(832), 1,
      sym_line_end,
    STATE(797), 13,
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
  [140] = 19,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_flow_run_keyword,
    ACTIONS(177), 1,
      sym_flow_seek_keyword,
    ACTIONS(179), 1,
      sym_flow_ask_keyword,
    ACTIONS(181), 1,
      sym_flow_scatter_keyword,
    ACTIONS(183), 1,
      sym_flow_storm_keyword,
    ACTIONS(185), 1,
      sym_flow_gather_keyword,
    ACTIONS(187), 1,
      sym_flow_settle_keyword,
    ACTIONS(189), 1,
      sym_flow_map_keyword,
    ACTIONS(191), 1,
      sym_flow_keep_keyword,
    ACTIONS(193), 1,
      sym_flow_drop_keyword,
    ACTIONS(195), 1,
      sym_flow_sort_keyword,
    ACTIONS(197), 1,
      sym_flow_repeat_keyword,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(273), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(836), 1,
      sym_line_end,
    STATE(274), 13,
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
  [210] = 17,
    ACTIONS(121), 1,
      sym_flow_run_keyword,
    ACTIONS(123), 1,
      sym_flow_seek_keyword,
    ACTIONS(125), 1,
      sym_flow_ask_keyword,
    ACTIONS(127), 1,
      sym_flow_scatter_keyword,
    ACTIONS(129), 1,
      sym_flow_storm_keyword,
    ACTIONS(131), 1,
      sym_flow_gather_keyword,
    ACTIONS(133), 1,
      sym_flow_settle_keyword,
    ACTIONS(135), 1,
      sym_flow_map_keyword,
    ACTIONS(137), 1,
      sym_flow_keep_keyword,
    ACTIONS(139), 1,
      sym_flow_drop_keyword,
    ACTIONS(141), 1,
      sym_flow_sort_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(203), 1,
      sym_snake_name,
    ACTIONS(205), 1,
      sym_newline,
    STATE(1203), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(725), 13,
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
  [275] = 17,
    ACTIONS(149), 1,
      sym_flow_run_keyword,
    ACTIONS(151), 1,
      sym_flow_seek_keyword,
    ACTIONS(153), 1,
      sym_flow_ask_keyword,
    ACTIONS(155), 1,
      sym_flow_scatter_keyword,
    ACTIONS(157), 1,
      sym_flow_storm_keyword,
    ACTIONS(159), 1,
      sym_flow_gather_keyword,
    ACTIONS(161), 1,
      sym_flow_settle_keyword,
    ACTIONS(163), 1,
      sym_flow_map_keyword,
    ACTIONS(165), 1,
      sym_flow_keep_keyword,
    ACTIONS(167), 1,
      sym_flow_drop_keyword,
    ACTIONS(169), 1,
      sym_flow_sort_keyword,
    ACTIONS(171), 1,
      sym_flow_repeat_keyword,
    ACTIONS(203), 1,
      sym_snake_name,
    ACTIONS(205), 1,
      sym_newline,
    STATE(1098), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(751), 13,
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
  [340] = 17,
    ACTIONS(175), 1,
      sym_flow_run_keyword,
    ACTIONS(177), 1,
      sym_flow_seek_keyword,
    ACTIONS(179), 1,
      sym_flow_ask_keyword,
    ACTIONS(181), 1,
      sym_flow_scatter_keyword,
    ACTIONS(183), 1,
      sym_flow_storm_keyword,
    ACTIONS(185), 1,
      sym_flow_gather_keyword,
    ACTIONS(187), 1,
      sym_flow_settle_keyword,
    ACTIONS(189), 1,
      sym_flow_map_keyword,
    ACTIONS(191), 1,
      sym_flow_keep_keyword,
    ACTIONS(193), 1,
      sym_flow_drop_keyword,
    ACTIONS(195), 1,
      sym_flow_sort_keyword,
    ACTIONS(197), 1,
      sym_flow_repeat_keyword,
    ACTIONS(203), 1,
      sym_snake_name,
    ACTIONS(205), 1,
      sym_newline,
    STATE(1167), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(233), 13,
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
  [405] = 12,
    ACTIONS(209), 1,
      anon_sym_tool,
    ACTIONS(211), 1,
      sym_pass_keyword,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    STATE(115), 1,
      sym__unroled_message_line,
    STATE(749), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(207), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(745), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(762), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1014), 2,
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
  [455] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(209), 1,
      anon_sym_tool,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    STATE(115), 1,
      sym__unroled_message_line,
    STATE(749), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(207), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(745), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(762), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1014), 2,
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
  [505] = 13,
    ACTIONS(215), 1,
      sym_with_keyword,
    ACTIONS(217), 1,
      sym_struct_keyword,
    ACTIONS(219), 1,
      sym_psyche_keyword,
    ACTIONS(221), 1,
      sym_skill_keyword,
    ACTIONS(223), 1,
      sym_service_keyword,
    ACTIONS(225), 1,
      sym_prompt_keyword,
    ACTIONS(227), 1,
      sym_context_keyword,
    ACTIONS(229), 1,
      sym_instruct_keyword,
    ACTIONS(231), 1,
      sym_agic_keyword,
    ACTIONS(233), 1,
      sym_task_keyword,
    ACTIONS(235), 1,
      sym_chore_keyword,
    ACTIONS(237), 1,
      sym_flow_keyword,
    STATE(885), 12,
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
  [556] = 2,
    ACTIONS(241), 1,
      sym_newline,
    ACTIONS(239), 14,
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
  [576] = 7,
    ACTIONS(243), 1,
      anon_sym_lanes,
    ACTIONS(251), 1,
      sym_recall_keyword,
    STATE(865), 1,
      sym__query_directive_key,
    STATE(1189), 1,
      sym__route_directive_key,
    ACTIONS(247), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(249), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(245), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [605] = 7,
    ACTIONS(253), 1,
      anon_sym_lanes,
    ACTIONS(257), 1,
      sym_recall_keyword,
    STATE(790), 1,
      sym__query_directive_key,
    STATE(1127), 1,
      sym__route_directive_key,
    ACTIONS(247), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(255), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(245), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [634] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym_flow_if_keyword,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(792), 1,
      sym__inline_if_complement,
    STATE(840), 1,
      sym__if_complements,
    STATE(1026), 1,
      sym__lanes_complement,
    STATE(1027), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [667] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym_flow_if_keyword,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(792), 1,
      sym__inline_if_complement,
    STATE(856), 1,
      sym__if_complements,
    STATE(1026), 1,
      sym__lanes_complement,
    STATE(1028), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [700] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(757), 1,
      sym__inline_if_complement,
    STATE(760), 1,
      sym__if_complements,
    STATE(943), 1,
      sym__lanes_complement,
    STATE(945), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [733] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(757), 1,
      sym__inline_if_complement,
    STATE(759), 1,
      sym__if_complements,
    STATE(943), 1,
      sym__lanes_complement,
    STATE(944), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [766] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(267), 1,
      sym_flow_if_keyword,
    STATE(239), 1,
      sym__inline_if_complement,
    STATE(240), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(1001), 1,
      sym__lanes_complement,
    STATE(1002), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [799] = 10,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(267), 1,
      sym_flow_if_keyword,
    STATE(239), 1,
      sym__inline_if_complement,
    STATE(241), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(1001), 1,
      sym__lanes_complement,
    STATE(1003), 1,
      sym_position,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(263), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [832] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1251), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [856] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1278), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [880] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1197), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [904] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1287), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [928] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1311), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [952] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1339), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [976] = 6,
    ACTIONS(275), 1,
      sym_pascal_name,
    STATE(499), 1,
      sym_base_type,
    STATE(935), 1,
      sym_type,
    STATE(1079), 1,
      sym_type_name,
    STATE(1076), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(273), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1000] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1302), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1024] = 6,
    ACTIONS(275), 1,
      sym_pascal_name,
    STATE(499), 1,
      sym_base_type,
    STATE(976), 1,
      sym_type,
    STATE(1079), 1,
      sym_type_name,
    STATE(1076), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(273), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1048] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1222), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1072] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1146), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1096] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1340), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1120] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1269), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1144] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1236), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1168] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1343), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1192] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1235), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1216] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1259), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1240] = 6,
    ACTIONS(271), 1,
      sym_pascal_name,
    STATE(175), 1,
      sym_base_type,
    STATE(586), 1,
      sym_type_name,
    STATE(1260), 1,
      sym_type,
    STATE(579), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(269), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1264] = 9,
    ACTIONS(277), 1,
      sym_blank_line,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__dedent,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    STATE(443), 1,
      sym_property,
    STATE(1249), 1,
      sym_cap_body,
    STATE(1322), 1,
      sym__cap_text_body,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1293] = 9,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(287), 1,
      sym_blank_line,
    ACTIONS(289), 1,
      sym__dedent,
    STATE(443), 1,
      sym_property,
    STATE(1319), 1,
      sym_cap_body,
    STATE(1322), 1,
      sym__cap_text_body,
    STATE(44), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1322] = 9,
    ACTIONS(277), 1,
      sym_blank_line,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(443), 1,
      sym_property,
    STATE(1229), 1,
      sym_cap_body,
    STATE(1322), 1,
      sym__cap_text_body,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1351] = 9,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(293), 1,
      sym_blank_line,
    ACTIONS(295), 1,
      sym__dedent,
    STATE(443), 1,
      sym_property,
    STATE(1299), 1,
      sym_cap_body,
    STATE(1322), 1,
      sym__cap_text_body,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1380] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(297), 1,
      sym_blank_line,
    ACTIONS(299), 1,
      sym__dedent,
    STATE(1315), 1,
      sym__cap_text_body,
    STATE(51), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1404] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(303), 1,
      sym__other_integer_literal,
    ACTIONS(305), 1,
      sym_flow_windowing_keyword,
    ACTIONS(307), 1,
      sym_colon,
    STATE(1092), 1,
      sym__repeat_count_complement,
    STATE(1341), 1,
      sym__window_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1430] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(303), 1,
      sym__other_integer_literal,
    ACTIONS(305), 1,
      sym_flow_windowing_keyword,
    ACTIONS(309), 1,
      sym_colon,
    STATE(1095), 1,
      sym__repeat_count_complement,
    STATE(1344), 1,
      sym__window_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1456] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(311), 1,
      sym_flow_using_keyword,
    ACTIONS(313), 1,
      sym_arrow,
    ACTIONS(315), 1,
      sym_colon,
    STATE(123), 1,
      sym__settle_inline_block,
    STATE(712), 1,
      sym__named_using_complement,
    STATE(754), 1,
      sym__settle_inline_line,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1482] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(317), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(755), 1,
      sym__inline_using_complement,
    STATE(756), 1,
      sym__using_complements,
    STATE(940), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1508] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(319), 1,
      sym_blank_line,
    ACTIONS(321), 1,
      sym__dedent,
    STATE(1323), 1,
      sym__cap_text_body,
    STATE(78), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1532] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(323), 1,
      sym_blank_line,
    ACTIONS(325), 1,
      sym__dedent,
    STATE(1248), 1,
      sym__cap_text_body,
    STATE(61), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1556] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(303), 1,
      sym__other_integer_literal,
    ACTIONS(305), 1,
      sym_flow_windowing_keyword,
    ACTIONS(327), 1,
      sym_colon,
    STATE(1033), 1,
      sym__repeat_count_complement,
    STATE(1228), 1,
      sym__window_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1582] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(757), 1,
      sym__inline_if_complement,
    STATE(759), 1,
      sym__if_complements,
    STATE(943), 1,
      sym__lanes_complement,
    STATE(944), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1608] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(757), 1,
      sym__inline_if_complement,
    STATE(760), 1,
      sym__if_complements,
    STATE(943), 1,
      sym__lanes_complement,
    STATE(945), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1634] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(335), 1,
      sym_flow_if_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(792), 1,
      sym__inline_if_complement,
    STATE(840), 1,
      sym__if_complements,
    STATE(1026), 1,
      sym__lanes_complement,
    STATE(1027), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1660] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(335), 1,
      sym_flow_if_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(792), 1,
      sym__inline_if_complement,
    STATE(856), 1,
      sym__if_complements,
    STATE(1026), 1,
      sym__lanes_complement,
    STATE(1028), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1686] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(337), 1,
      sym_flow_using_keyword,
    ACTIONS(339), 1,
      sym_arrow,
    ACTIONS(341), 1,
      sym_colon,
    STATE(133), 1,
      sym__settle_inline_block,
    STATE(236), 1,
      sym__settle_inline_line,
    STATE(786), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1712] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(343), 1,
      sym_flow_using_keyword,
    STATE(237), 1,
      sym__inline_using_complement,
    STATE(238), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(998), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1738] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(345), 1,
      sym_flow_using_keyword,
    ACTIONS(347), 1,
      sym_arrow,
    ACTIONS(349), 1,
      sym_colon,
    STATE(86), 1,
      sym__settle_inline_block,
    STATE(748), 1,
      sym__settle_inline_line,
    STATE(761), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1764] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(299), 1,
      sym__dedent,
    ACTIONS(319), 1,
      sym_blank_line,
    STATE(1315), 1,
      sym__cap_text_body,
    STATE(78), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1788] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(239), 1,
      sym__inline_if_complement,
    STATE(240), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(1001), 1,
      sym__lanes_complement,
    STATE(1002), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1814] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(239), 1,
      sym__inline_if_complement,
    STATE(241), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(1001), 1,
      sym__lanes_complement,
    STATE(1003), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1840] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(353), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(763), 1,
      sym__inline_using_complement,
    STATE(765), 1,
      sym__using_complements,
    STATE(1023), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1866] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(355), 1,
      sym_arrow,
    ACTIONS(357), 1,
      sym_colon,
    ACTIONS(359), 1,
      sym_snake_name,
    STATE(705), 1,
      sym_inline_agic,
    STATE(973), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1889] = 5,
    ACTIONS(361), 1,
      sym_blank_line,
    ACTIONS(363), 1,
      sym__comment_start,
    ACTIONS(367), 1,
      sym__line_start,
    ACTIONS(365), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [1908] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_snake_name,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    STATE(750), 1,
      sym_inline_agic,
    STATE(931), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1931] = 5,
    ACTIONS(373), 1,
      sym_blank_line,
    ACTIONS(375), 1,
      sym__comment_start,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(377), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1950] = 5,
    ACTIONS(375), 1,
      sym__comment_start,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(381), 1,
      sym_blank_line,
    ACTIONS(383), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1969] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    STATE(752), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1992] = 5,
    ACTIONS(387), 1,
      sym_blank_line,
    ACTIONS(390), 1,
      sym__comment_start,
    ACTIONS(395), 1,
      sym__line_start,
    ACTIONS(393), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2011] = 5,
    ACTIONS(398), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__flow_raw_text,
    STATE(72), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(198), 1,
      sym__implicit_run_line,
    ACTIONS(401), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2030] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_snake_name,
    ACTIONS(406), 1,
      sym_arrow,
    ACTIONS(408), 1,
      sym_colon,
    STATE(232), 1,
      sym_inline_agic,
    STATE(986), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2053] = 6,
    ACTIONS(410), 1,
      sym_blank_line,
    ACTIONS(413), 1,
      sym__comment_start,
    ACTIONS(418), 1,
      sym__line_start,
    STATE(443), 1,
      sym_property,
    ACTIONS(416), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(74), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2074] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(355), 1,
      sym_arrow,
    ACTIONS(357), 1,
      sym_colon,
    ACTIONS(421), 1,
      sym_flow_using_keyword,
    STATE(738), 1,
      sym_inline_agic,
    STATE(992), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2097] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(423), 1,
      sym_blank_line,
    STATE(72), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(198), 1,
      sym__implicit_run_line,
    ACTIONS(425), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2116] = 5,
    ACTIONS(427), 1,
      sym_blank_line,
    ACTIONS(430), 1,
      sym__comment_start,
    ACTIONS(435), 1,
      sym__directive_start,
    ACTIONS(433), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2135] = 5,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(441), 1,
      sym__comment_start,
    ACTIONS(446), 1,
      sym__line_start,
    ACTIONS(444), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(78), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2154] = 5,
    ACTIONS(363), 1,
      sym__comment_start,
    ACTIONS(367), 1,
      sym__line_start,
    ACTIONS(449), 1,
      sym_blank_line,
    ACTIONS(451), 2,
      sym__dedent,
      sym__until_start,
    STATE(66), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2173] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(453), 1,
      sym_blank_line,
    STATE(76), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(198), 1,
      sym__implicit_run_line,
    ACTIONS(455), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2192] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(406), 1,
      sym_arrow,
    ACTIONS(408), 1,
      sym_colon,
    ACTIONS(457), 1,
      sym_flow_using_keyword,
    STATE(234), 1,
      sym_inline_agic,
    STATE(991), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2215] = 6,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(459), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(83), 1,
      sym_message,
    STATE(634), 1,
      sym__directives,
    STATE(1223), 2,
      sym_messages,
      sym__pass_statement,
  [2235] = 5,
    ACTIONS(461), 1,
      sym_blank_line,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__dedent,
    ACTIONS(467), 1,
      sym__line_start,
    STATE(118), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2253] = 6,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(459), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(83), 1,
      sym_message,
    STATE(867), 1,
      sym__directives,
    STATE(1285), 2,
      sym_messages,
      sym__pass_statement,
  [2273] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(469), 1,
      sym_text_line,
    STATE(559), 1,
      sym_instruct_body,
    STATE(572), 1,
      sym_text_inline,
    STATE(871), 1,
      sym_line_end,
    STATE(883), 1,
      sym_text_block,
  [2295] = 6,
    ACTIONS(471), 1,
      sym_blank_line,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym__dedent,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(243), 1,
      sym__from_complement,
    STATE(244), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2315] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(94), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(510), 1,
      sym__implicit_run_line,
    ACTIONS(425), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2333] = 5,
    ACTIONS(393), 1,
      sym__dedent,
    ACTIONS(481), 1,
      sym_blank_line,
    ACTIONS(484), 1,
      sym__comment_start,
    ACTIONS(487), 1,
      sym__line_start,
    STATE(88), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2351] = 5,
    ACTIONS(492), 1,
      sym_blank_line,
    ACTIONS(494), 1,
      sym__comment_start,
    ACTIONS(496), 1,
      sym__indent,
    ACTIONS(490), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2369] = 5,
    ACTIONS(498), 1,
      sym_blank_line,
    ACTIONS(501), 1,
      sym__comment_start,
    ACTIONS(504), 1,
      sym__dedent,
    ACTIONS(506), 1,
      sym__line_start,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2387] = 5,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__dedent,
    ACTIONS(513), 1,
      sym__line_start,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2405] = 5,
    ACTIONS(515), 1,
      sym_blank_line,
    ACTIONS(520), 1,
      sym__agic_raw_text,
    STATE(92), 1,
      aux_sym_unroled_message_repeat1,
    STATE(230), 1,
      sym__unroled_message_line,
    ACTIONS(518), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2423] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__from_start,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__dedent,
    STATE(364), 1,
      sym__from_complement,
    STATE(365), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2443] = 5,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(530), 1,
      sym__flow_raw_text,
    STATE(94), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(510), 1,
      sym__implicit_run_line,
    ACTIONS(401), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2461] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(533), 1,
      sym_blank_line,
    ACTIONS(535), 1,
      sym__dedent,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(436), 1,
      sym__until_complement,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2481] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(539), 1,
      sym_blank_line,
    ACTIONS(541), 1,
      sym__dedent,
    STATE(450), 1,
      sym__until_complement,
    STATE(452), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2501] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(543), 1,
      sym_blank_line,
    ACTIONS(545), 1,
      sym__dedent,
    STATE(454), 1,
      sym__until_complement,
    STATE(458), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2521] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(547), 1,
      sym_blank_line,
    ACTIONS(549), 1,
      sym__dedent,
    STATE(481), 1,
      sym__until_complement,
    STATE(482), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2541] = 5,
    ACTIONS(377), 1,
      sym__line_start,
    ACTIONS(551), 1,
      sym_blank_line,
    ACTIONS(553), 1,
      sym__comment_start,
    ACTIONS(555), 1,
      sym__directive_start,
    STATE(102), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2559] = 4,
    ACTIONS(559), 1,
      sym_blank_line,
    ACTIONS(562), 1,
      sym__comment_start,
    STATE(100), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(557), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2575] = 5,
    ACTIONS(451), 1,
      sym__until_start,
    ACTIONS(565), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym__comment_start,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(104), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2593] = 5,
    ACTIONS(383), 1,
      sym__line_start,
    ACTIONS(553), 1,
      sym__comment_start,
    ACTIONS(555), 1,
      sym__directive_start,
    ACTIONS(571), 1,
      sym_blank_line,
    STATE(105), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2611] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(573), 1,
      sym_blank_line,
    STATE(106), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(516), 1,
      sym__implicit_run_line,
    ACTIONS(455), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2629] = 5,
    ACTIONS(365), 1,
      sym__until_start,
    ACTIONS(567), 1,
      sym__comment_start,
    ACTIONS(569), 1,
      sym__line_start,
    ACTIONS(575), 1,
      sym_blank_line,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2647] = 5,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(577), 1,
      sym_blank_line,
    ACTIONS(580), 1,
      sym__comment_start,
    ACTIONS(583), 1,
      sym__directive_start,
    STATE(105), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2665] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(586), 1,
      sym_blank_line,
    STATE(108), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(516), 1,
      sym__implicit_run_line,
    ACTIONS(425), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2683] = 5,
    ACTIONS(393), 1,
      sym__until_start,
    ACTIONS(588), 1,
      sym_blank_line,
    ACTIONS(591), 1,
      sym__comment_start,
    ACTIONS(594), 1,
      sym__line_start,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2701] = 5,
    ACTIONS(597), 1,
      sym_blank_line,
    ACTIONS(600), 1,
      sym__flow_raw_text,
    STATE(108), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(516), 1,
      sym__implicit_run_line,
    ACTIONS(401), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2719] = 5,
    ACTIONS(451), 1,
      sym__dedent,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(603), 1,
      sym_blank_line,
    ACTIONS(605), 1,
      sym__line_start,
    STATE(132), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2737] = 6,
    ACTIONS(555), 1,
      sym__directive_start,
    ACTIONS(607), 1,
      sym__line_start,
    STATE(99), 1,
      sym_directive,
    STATE(109), 1,
      sym__flow_statement,
    STATE(916), 1,
      sym__directives,
    STATE(1232), 2,
      sym_statements,
      sym__pass_statement,
  [2757] = 5,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(513), 1,
      sym__line_start,
    ACTIONS(609), 1,
      sym_blank_line,
    ACTIONS(611), 1,
      sym__dedent,
    STATE(134), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2775] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(425), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2789] = 5,
    ACTIONS(494), 1,
      sym__comment_start,
    ACTIONS(615), 1,
      sym_blank_line,
    ACTIONS(617), 1,
      sym__indent,
    ACTIONS(613), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(130), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2807] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(619), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2821] = 5,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    ACTIONS(621), 1,
      sym_blank_line,
    STATE(152), 1,
      aux_sym_unroled_message_repeat1,
    STATE(230), 1,
      sym__unroled_message_line,
    ACTIONS(623), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2839] = 5,
    ACTIONS(627), 1,
      sym__module_doc_start,
    ACTIONS(629), 1,
      sym__item_doc_start,
    ACTIONS(631), 1,
      sym__param_item_doc_start,
    ACTIONS(625), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(1059), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2857] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(469), 1,
      sym_text_line,
    STATE(718), 1,
      sym_context_body,
    STATE(871), 1,
      sym_line_end,
    STATE(879), 1,
      sym_text_inline,
    STATE(883), 1,
      sym_text_block,
  [2879] = 5,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(633), 1,
      sym_blank_line,
    ACTIONS(635), 1,
      sym__dedent,
    STATE(122), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2897] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(469), 1,
      sym_text_line,
    STATE(572), 1,
      sym_text_inline,
    STATE(721), 1,
      sym_instruct_body,
    STATE(871), 1,
      sym_line_end,
    STATE(883), 1,
      sym_text_block,
  [2919] = 5,
    ACTIONS(494), 1,
      sym__comment_start,
    ACTIONS(639), 1,
      sym_blank_line,
    ACTIONS(641), 1,
      sym__indent,
    ACTIONS(637), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(89), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2937] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    ACTIONS(645), 1,
      sym_blank_line,
    STATE(151), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2955] = 5,
    ACTIONS(647), 1,
      sym_blank_line,
    ACTIONS(650), 1,
      sym__comment_start,
    ACTIONS(653), 1,
      sym__dedent,
    ACTIONS(655), 1,
      sym__line_start,
    STATE(122), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2973] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__from_start,
    ACTIONS(658), 1,
      sym_blank_line,
    ACTIONS(660), 1,
      sym__dedent,
    STATE(390), 1,
      sym__from_complement,
    STATE(391), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2993] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__from_start,
    ACTIONS(662), 1,
      sym_blank_line,
    ACTIONS(664), 1,
      sym__dedent,
    STATE(395), 1,
      sym__from_complement,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3013] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(666), 1,
      sym_blank_line,
    ACTIONS(668), 1,
      sym__dedent,
    STATE(408), 1,
      sym__until_complement,
    STATE(409), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3033] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(670), 1,
      sym_blank_line,
    ACTIONS(672), 1,
      sym__dedent,
    STATE(417), 1,
      sym__until_complement,
    STATE(418), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3053] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(674), 1,
      sym_blank_line,
    ACTIONS(676), 1,
      sym__dedent,
    STATE(419), 1,
      sym__until_complement,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3073] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(678), 1,
      sym_blank_line,
    ACTIONS(680), 1,
      sym__dedent,
    STATE(425), 1,
      sym__until_complement,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3093] = 5,
    ACTIONS(684), 1,
      sym__module_doc_start,
    ACTIONS(686), 1,
      sym__item_doc_start,
    ACTIONS(688), 1,
      sym__param_item_doc_start,
    ACTIONS(682), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(543), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3111] = 5,
    ACTIONS(492), 1,
      sym_blank_line,
    ACTIONS(494), 1,
      sym__comment_start,
    ACTIONS(692), 1,
      sym__indent,
    ACTIONS(690), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3129] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(694), 1,
      sym_blank_line,
    STATE(87), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(510), 1,
      sym__implicit_run_line,
    ACTIONS(455), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3147] = 5,
    ACTIONS(365), 1,
      sym__dedent,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(605), 1,
      sym__line_start,
    ACTIONS(696), 1,
      sym_blank_line,
    STATE(88), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3165] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__from_start,
    ACTIONS(698), 1,
      sym_blank_line,
    ACTIONS(700), 1,
      sym__dedent,
    STATE(461), 1,
      sym__from_complement,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3185] = 5,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__line_start,
    ACTIONS(702), 1,
      sym__dedent,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3203] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__from_start,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__dedent,
    STATE(466), 1,
      sym__from_complement,
    STATE(467), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3223] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(708), 1,
      sym_blank_line,
    ACTIONS(710), 1,
      sym__dedent,
    STATE(479), 1,
      sym__until_complement,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3243] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(712), 1,
      sym_blank_line,
    ACTIONS(714), 1,
      sym__dedent,
    STATE(488), 1,
      sym__until_complement,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3263] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(716), 1,
      sym_blank_line,
    ACTIONS(718), 1,
      sym__dedent,
    STATE(490), 1,
      sym__until_complement,
    STATE(491), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3283] = 6,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__until_start,
    ACTIONS(720), 1,
      sym_blank_line,
    ACTIONS(722), 1,
      sym__dedent,
    STATE(496), 1,
      sym__until_complement,
    STATE(497), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3303] = 5,
    ACTIONS(726), 1,
      sym__module_doc_start,
    ACTIONS(728), 1,
      sym__item_doc_start,
    ACTIONS(730), 1,
      sym__param_item_doc_start,
    ACTIONS(724), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(323), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3321] = 5,
    ACTIONS(734), 1,
      sym__module_doc_start,
    ACTIONS(736), 1,
      sym__item_doc_start,
    ACTIONS(738), 1,
      sym__param_item_doc_start,
    ACTIONS(732), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(333), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3339] = 5,
    ACTIONS(742), 1,
      sym__module_doc_start,
    ACTIONS(744), 1,
      sym__item_doc_start,
    ACTIONS(746), 1,
      sym__param_item_doc_start,
    ACTIONS(740), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(647), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3357] = 5,
    ACTIONS(750), 1,
      sym__module_doc_start,
    ACTIONS(752), 1,
      sym__item_doc_start,
    ACTIONS(754), 1,
      sym__param_item_doc_start,
    ACTIONS(748), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(655), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3375] = 5,
    ACTIONS(758), 1,
      sym__module_doc_start,
    ACTIONS(760), 1,
      sym__item_doc_start,
    ACTIONS(762), 1,
      sym__param_item_doc_start,
    ACTIONS(756), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(904), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3393] = 5,
    ACTIONS(766), 1,
      sym__module_doc_start,
    ACTIONS(768), 1,
      sym__item_doc_start,
    ACTIONS(770), 1,
      sym__param_item_doc_start,
    ACTIONS(764), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(910), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3411] = 5,
    ACTIONS(774), 1,
      sym__module_doc_start,
    ACTIONS(776), 1,
      sym__item_doc_start,
    ACTIONS(778), 1,
      sym__param_item_doc_start,
    ACTIONS(772), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(665), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3429] = 5,
    ACTIONS(782), 1,
      sym__module_doc_start,
    ACTIONS(784), 1,
      sym__item_doc_start,
    ACTIONS(786), 1,
      sym__param_item_doc_start,
    ACTIONS(780), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(349), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3447] = 4,
    STATE(889), 1,
      sym_recall_source,
    STATE(948), 1,
      sym_recall_value,
    ACTIONS(788), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(790), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3463] = 5,
    ACTIONS(794), 1,
      sym__module_doc_start,
    ACTIONS(796), 1,
      sym__item_doc_start,
    ACTIONS(798), 1,
      sym__param_item_doc_start,
    ACTIONS(792), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(573), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3481] = 5,
    ACTIONS(463), 1,
      sym__comment_start,
    ACTIONS(513), 1,
      sym__line_start,
    ACTIONS(702), 1,
      sym__dedent,
    ACTIONS(800), 1,
      sym_blank_line,
    STATE(91), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3499] = 5,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    ACTIONS(804), 1,
      sym_blank_line,
    ACTIONS(807), 1,
      sym__comment_start,
    ACTIONS(810), 1,
      sym__line_start,
    STATE(151), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3517] = 5,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    ACTIONS(813), 1,
      sym_blank_line,
    STATE(92), 1,
      aux_sym_unroled_message_repeat1,
    STATE(230), 1,
      sym__unroled_message_line,
    ACTIONS(815), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3535] = 4,
    STATE(889), 1,
      sym_recall_source,
    STATE(1054), 1,
      sym_recall_value,
    ACTIONS(788), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(790), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3551] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(469), 1,
      sym_text_line,
    STATE(871), 1,
      sym_line_end,
    STATE(876), 1,
      sym_context_body,
    STATE(879), 1,
      sym_text_inline,
    STATE(883), 1,
      sym_text_block,
  [3573] = 6,
    ACTIONS(555), 1,
      sym__directive_start,
    ACTIONS(607), 1,
      sym__line_start,
    STATE(99), 1,
      sym_directive,
    STATE(109), 1,
      sym__flow_statement,
    STATE(964), 1,
      sym__directives,
    STATE(1300), 2,
      sym_statements,
      sym__pass_statement,
  [3593] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(817), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(755), 1,
      sym__inline_using_complement,
    STATE(756), 1,
      sym__using_complements,
    STATE(940), 1,
      sym__lanes_complement,
  [3612] = 6,
    ACTIONS(819), 1,
      sym_flow_using_keyword,
    ACTIONS(821), 1,
      sym_arrow,
    ACTIONS(823), 1,
      sym_colon,
    STATE(123), 1,
      sym__settle_inline_block,
    STATE(712), 1,
      sym__named_using_complement,
    STATE(754), 1,
      sym__settle_inline_line,
  [3631] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(684), 1,
      sym_line_end,
    STATE(733), 1,
      sym_text_block,
    STATE(894), 1,
      sym_text_inline,
  [3650] = 6,
    ACTIONS(825), 1,
      sym_flow_using_keyword,
    ACTIONS(827), 1,
      sym_arrow,
    ACTIONS(829), 1,
      sym_colon,
    STATE(86), 1,
      sym__settle_inline_block,
    STATE(748), 1,
      sym__settle_inline_line,
    STATE(761), 1,
      sym__named_using_complement,
  [3669] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(353), 1,
      sym_flow_using_keyword,
    STATE(741), 1,
      sym__inline_using_complement,
    STATE(1000), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [3686] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(627), 1,
      sym_text_block,
    STATE(770), 1,
      sym_text_inline,
    STATE(832), 1,
      sym_line_end,
  [3705] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(817), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(755), 1,
      sym__inline_using_complement,
    STATE(773), 1,
      sym__using_complements,
    STATE(940), 1,
      sym__lanes_complement,
  [3724] = 6,
    ACTIONS(821), 1,
      sym_arrow,
    ACTIONS(823), 1,
      sym_colon,
    ACTIONS(831), 1,
      sym_snake_name,
    STATE(124), 1,
      sym__settle_inline_block,
    STATE(552), 1,
      sym_runnable,
    STATE(776), 1,
      sym__settle_inline_line,
  [3743] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(582), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3760] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(839), 1,
      sym_flow_by_keyword,
    STATE(393), 1,
      sym__named_by_complement,
    STATE(788), 1,
      sym__inline_by_complement,
    STATE(789), 1,
      sym__by_complements,
    STATE(955), 1,
      sym__lanes_complement,
  [3779] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(699), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3796] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(841), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(763), 1,
      sym__inline_using_complement,
    STATE(765), 1,
      sym__using_complements,
    STATE(1023), 1,
      sym__lanes_complement,
  [3815] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(627), 1,
      sym_text_block,
    STATE(810), 1,
      sym_text_inline,
    STATE(832), 1,
      sym_line_end,
  [3834] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(892), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3851] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(875), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3868] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(525), 1,
      sym__implicit_run_line,
    ACTIONS(425), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3881] = 3,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
    ACTIONS(847), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3894] = 6,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(853), 1,
      sym_colon,
    STATE(1033), 1,
      sym__repeat_count_complement,
    STATE(1228), 1,
      sym__window_complement,
  [3913] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(701), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3930] = 4,
    ACTIONS(855), 1,
      sym_array_suffix,
    STATE(200), 1,
      aux_sym_type_repeat1,
    STATE(734), 1,
      sym_type_suffix,
    ACTIONS(857), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3945] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(791), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3962] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(343), 1,
      sym_flow_using_keyword,
    STATE(235), 1,
      sym__inline_using_complement,
    STATE(993), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [3979] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(216), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(859), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [3994] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(525), 1,
      sym__implicit_run_line,
    ACTIONS(619), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [4007] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(884), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4024] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(895), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4041] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(550), 1,
      sym_text_inline,
    STATE(684), 1,
      sym_line_end,
    STATE(733), 1,
      sym_text_block,
  [4060] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(247), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(836), 1,
      sym_line_end,
  [4079] = 6,
    ACTIONS(861), 1,
      sym_flow_using_keyword,
    ACTIONS(863), 1,
      sym_arrow,
    ACTIONS(865), 1,
      sym_colon,
    STATE(133), 1,
      sym__settle_inline_block,
    STATE(236), 1,
      sym__settle_inline_line,
    STATE(786), 1,
      sym__named_using_complement,
  [4098] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(237), 1,
      sym__inline_using_complement,
    STATE(238), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(998), 1,
      sym__lanes_complement,
  [4117] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(873), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4134] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(874), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4151] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(250), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(836), 1,
      sym_line_end,
  [4170] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(237), 1,
      sym__inline_using_complement,
    STATE(253), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(998), 1,
      sym__lanes_complement,
  [4189] = 6,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(863), 1,
      sym_arrow,
    ACTIONS(865), 1,
      sym_colon,
    STATE(135), 1,
      sym__settle_inline_block,
    STATE(256), 1,
      sym__settle_inline_line,
    STATE(552), 1,
      sym_runnable,
  [4208] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(271), 1,
      sym__implicit_run_line,
    ACTIONS(619), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4221] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(627), 1,
      sym_text_block,
    STATE(766), 1,
      sym_text_inline,
    STATE(832), 1,
      sym_line_end,
  [4240] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(602), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4257] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(841), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(554), 1,
      sym__using_complements,
    STATE(763), 1,
      sym__inline_using_complement,
    STATE(1023), 1,
      sym__lanes_complement,
  [4276] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(287), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(836), 1,
      sym_line_end,
  [4295] = 1,
    ACTIONS(869), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4304] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(871), 1,
      sym_blank_line,
    ACTIONS(873), 1,
      sym__indent,
    STATE(578), 1,
      sym_struct_body,
    STATE(508), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4321] = 1,
    ACTIONS(875), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4330] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(619), 1,
      sym_text_inline,
    STATE(684), 1,
      sym_line_end,
    STATE(733), 1,
      sym_text_block,
  [4349] = 4,
    ACTIONS(855), 1,
      sym_array_suffix,
    STATE(213), 1,
      aux_sym_type_repeat1,
    STATE(734), 1,
      sym_type_suffix,
    ACTIONS(877), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4364] = 1,
    ACTIONS(879), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4373] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(881), 1,
      sym_text_line,
    STATE(758), 1,
      sym_line_end,
    STATE(981), 1,
      sym_text_block,
    STATE(1012), 1,
      sym_text_inline,
  [4392] = 6,
    ACTIONS(827), 1,
      sym_arrow,
    ACTIONS(829), 1,
      sym_colon,
    ACTIONS(831), 1,
      sym_snake_name,
    STATE(93), 1,
      sym__settle_inline_block,
    STATE(552), 1,
      sym_runnable,
    STATE(557), 1,
      sym__settle_inline_line,
  [4411] = 6,
    ACTIONS(883), 1,
      sym_arrow,
    ACTIONS(885), 1,
      sym_colon,
    ACTIONS(887), 1,
      sym_lparen,
    ACTIONS(889), 1,
      sym_snake_name,
    STATE(638), 1,
      sym_flow_name,
    STATE(1099), 1,
      sym_params,
  [4430] = 6,
    ACTIONS(887), 1,
      sym_lparen,
    ACTIONS(891), 1,
      sym_arrow,
    ACTIONS(893), 1,
      sym_colon,
    ACTIONS(895), 1,
      sym_snake_name,
    STATE(612), 1,
      sym_agic_name,
    STATE(1130), 1,
      sym_params,
  [4449] = 5,
    ACTIONS(833), 1,
      sym_blank_line,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(837), 1,
      sym__indent,
    STATE(563), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4466] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(881), 1,
      sym_text_line,
    STATE(758), 1,
      sym_line_end,
    STATE(981), 1,
      sym_text_block,
    STATE(1040), 1,
      sym_text_inline,
  [4485] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(859), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4500] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(685), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4517] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(317), 1,
      sym_flow_using_keyword,
    STATE(753), 1,
      sym__inline_using_complement,
    STATE(938), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [4534] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(222), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(859), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4549] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(687), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4566] = 4,
    ACTIONS(897), 1,
      sym_array_suffix,
    STATE(213), 1,
      aux_sym_type_repeat1,
    STATE(734), 1,
      sym_type_suffix,
    ACTIONS(900), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4581] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(645), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4598] = 3,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
    ACTIONS(815), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4611] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(902), 1,
      sym_flow_by_keyword,
    STATE(269), 1,
      sym__named_by_complement,
    STATE(574), 1,
      sym__inline_by_complement,
    STATE(575), 1,
      sym__by_complements,
    STATE(928), 1,
      sym__lanes_complement,
  [4630] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(684), 1,
      sym_line_end,
    STATE(733), 1,
      sym_text_block,
    STATE(887), 1,
      sym_text_inline,
  [4649] = 5,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(843), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym__indent,
    STATE(675), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4666] = 6,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(904), 1,
      sym_colon,
    STATE(1092), 1,
      sym__repeat_count_complement,
    STATE(1341), 1,
      sym__window_complement,
  [4685] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(271), 1,
      sym__implicit_run_line,
    ACTIONS(425), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4698] = 6,
    ACTIONS(301), 1,
      sym__one_integer_literal,
    ACTIONS(849), 1,
      sym__other_integer_literal,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(906), 1,
      sym_colon,
    STATE(1095), 1,
      sym__repeat_count_complement,
    STATE(1344), 1,
      sym__window_complement,
  [4717] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(908), 1,
      sym_flow_by_keyword,
    STATE(267), 1,
      sym__inline_by_complement,
    STATE(268), 1,
      sym__by_complements,
    STATE(464), 1,
      sym__named_by_complement,
    STATE(1013), 1,
      sym__lanes_complement,
  [4736] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(910), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [4750] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4758] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4766] = 4,
    ACTIONS(557), 1,
      sym__dedent,
    ACTIONS(916), 1,
      sym_blank_line,
    ACTIONS(919), 1,
      sym__comment_start,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4780] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(924), 1,
      sym__dedent,
    STATE(533), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4794] = 1,
    ACTIONS(926), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4802] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym__dedent,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4816] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [4824] = 4,
    ACTIONS(938), 1,
      sym_rparen,
    STATE(600), 1,
      sym_param_name,
    STATE(926), 1,
      sym_param,
    ACTIONS(936), 2,
      anon_sym__,
      sym_snake_name,
  [4838] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4846] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4854] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4862] = 1,
    ACTIONS(946), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4870] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4878] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4886] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4894] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4902] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4910] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4918] = 4,
    ACTIONS(960), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym__comment_start,
    ACTIONS(964), 1,
      sym__settle_indent,
    STATE(367), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4932] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(968), 1,
      sym__dedent,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4946] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(972), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4960] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4968] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(609), 1,
      sym_inline_agic,
    STATE(970), 1,
      sym_runnable,
  [4984] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4992] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5000] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5008] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5016] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5024] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5032] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5040] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5048] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5056] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5064] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5072] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5080] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5088] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5096] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5104] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5112] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5120] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 5,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(610), 1,
      sym_line_end,
    STATE(971), 1,
      sym__lanes_complement,
  [5176] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1030), 1,
      sym_blank_line,
    ACTIONS(1032), 1,
      sym__indent,
    STATE(372), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5190] = 1,
    ACTIONS(879), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5198] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5206] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5214] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5222] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5230] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5238] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5246] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5254] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5262] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5270] = 1,
    ACTIONS(1052), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5278] = 1,
    ACTIONS(1054), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5286] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5294] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5414] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5494] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5502] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5526] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5534] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5542] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5550] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5558] = 1,
    ACTIONS(1124), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5566] = 1,
    ACTIONS(1126), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5574] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5582] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5590] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5598] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5606] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5614] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5622] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5630] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5638] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5646] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5654] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5662] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5670] = 4,
    ACTIONS(557), 1,
      sym__settle_indent,
    ACTIONS(1148), 1,
      sym_blank_line,
    ACTIONS(1151), 1,
      sym__comment_start,
    STATE(331), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5684] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(549), 1,
      sym_inline_agic,
    STATE(897), 1,
      sym_runnable,
  [5700] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5708] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5716] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5724] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5732] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5740] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5748] = 1,
    ACTIONS(1154), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5756] = 1,
    ACTIONS(1156), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5764] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5772] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5780] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5788] = 1,
    ACTIONS(241), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5796] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5804] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5812] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5820] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5828] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5836] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5844] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5852] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5860] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5868] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5876] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5884] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5892] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(910), 1,
      sym_snake_name,
    STATE(332), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [5906] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1164), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5920] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1166), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5934] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(551), 1,
      sym_inline_agic,
    STATE(552), 1,
      sym_runnable,
  [5950] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5958] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5966] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1174), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5980] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1176), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym__dedent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5994] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1180), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6008] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1184), 1,
      sym_text_line,
    ACTIONS(1186), 1,
      sym_newline,
    STATE(379), 1,
      sym_line_end,
    STATE(624), 1,
      sym__settle_line,
  [6024] = 4,
    ACTIONS(962), 1,
      sym__comment_start,
    ACTIONS(1188), 1,
      sym_blank_line,
    ACTIONS(1190), 1,
      sym__settle_indent,
    STATE(331), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6038] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6052] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1194), 1,
      sym_blank_line,
    ACTIONS(1196), 1,
      sym__indent,
    STATE(383), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6066] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(750), 1,
      sym_inline_agic,
    STATE(931), 1,
      sym_runnable,
  [6082] = 5,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    ACTIONS(1202), 1,
      sym_flow_using_keyword,
    STATE(752), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym__named_using_complement,
  [6098] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1204), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6112] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1206), 1,
      sym_blank_line,
    ACTIONS(1208), 1,
      sym__indent,
    STATE(387), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6126] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1210), 1,
      sym_blank_line,
    ACTIONS(1212), 1,
      sym__indent,
    STATE(388), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6140] = 1,
    ACTIONS(1214), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6148] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(768), 1,
      sym_inline_agic,
    STATE(949), 1,
      sym_runnable,
  [6164] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1216), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6178] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(552), 1,
      sym_runnable,
    STATE(771), 1,
      sym_inline_agic,
  [6194] = 4,
    ACTIONS(962), 1,
      sym__comment_start,
    ACTIONS(1218), 1,
      sym_blank_line,
    ACTIONS(1220), 1,
      sym__settle_indent,
    STATE(394), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6208] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(552), 1,
      sym_runnable,
    STATE(774), 1,
      sym_inline_agic,
  [6224] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(552), 1,
      sym_runnable,
    STATE(555), 1,
      sym_inline_agic,
  [6240] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_newline,
    ACTIONS(1222), 1,
      sym_text_line,
    STATE(242), 1,
      sym_line_end,
    STATE(777), 1,
      sym__settle_line,
  [6256] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1224), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6270] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(780), 1,
      sym_line_end,
    STATE(951), 1,
      sym__lanes_complement,
  [6286] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(782), 1,
      sym_inline_agic,
    STATE(922), 1,
      sym_runnable,
  [6302] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(783), 1,
      sym_line_end,
    STATE(953), 1,
      sym__lanes_complement,
  [6318] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6332] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1232), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6346] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1234), 1,
      sym_blank_line,
    ACTIONS(1236), 1,
      sym__indent,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6360] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1238), 1,
      sym_blank_line,
    ACTIONS(1240), 1,
      sym__dedent,
    STATE(398), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6374] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1242), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6388] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1198), 1,
      sym_arrow,
    ACTIONS(1200), 1,
      sym_colon,
    STATE(807), 1,
      sym_inline_agic,
    STATE(970), 1,
      sym_runnable,
  [6404] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(808), 1,
      sym_line_end,
    STATE(960), 1,
      sym__lanes_complement,
  [6420] = 4,
    ACTIONS(962), 1,
      sym__comment_start,
    ACTIONS(1188), 1,
      sym_blank_line,
    ACTIONS(1244), 1,
      sym__settle_indent,
    STATE(331), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6434] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1246), 1,
      sym_blank_line,
    ACTIONS(1248), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6448] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1250), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6462] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_newline,
    ACTIONS(1222), 1,
      sym_text_line,
    STATE(379), 1,
      sym_line_end,
    STATE(813), 1,
      sym__settle_line,
  [6478] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1252), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6492] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6506] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1256), 1,
      sym_blank_line,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(546), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6520] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1260), 1,
      sym_blank_line,
    ACTIONS(1262), 1,
      sym__dedent,
    STATE(405), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6534] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1264), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6548] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6556] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1266), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__dedent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6570] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1270), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6584] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1272), 1,
      sym_blank_line,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(413), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6598] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1276), 1,
      sym_blank_line,
    ACTIONS(1278), 1,
      sym__dedent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6612] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1280), 1,
      sym_blank_line,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(416), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6626] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1284), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6640] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1286), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__dedent,
    STATE(431), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6654] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1290), 1,
      sym_blank_line,
    ACTIONS(1292), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6668] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1294), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6682] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6696] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1298), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6710] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1300), 1,
      sym_blank_line,
    ACTIONS(1302), 1,
      sym__dedent,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6724] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6738] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1306), 1,
      sym_blank_line,
    ACTIONS(1308), 1,
      sym__dedent,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6752] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6766] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1312), 1,
      sym_blank_line,
    ACTIONS(1314), 1,
      sym__dedent,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6780] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6794] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6808] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6822] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6836] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6850] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1326), 1,
      sym_blank_line,
    ACTIONS(1328), 1,
      sym__dedent,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6864] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6878] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1332), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6892] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1334), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6906] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6920] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1338), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6934] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1340), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6948] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1342), 1,
      sym_blank_line,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(440), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6962] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1346), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6976] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1348), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__dedent,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6990] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1352), 1,
      sym_blank_line,
    ACTIONS(1354), 1,
      sym__dedent,
    STATE(445), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7004] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1356), 1,
      sym_blank_line,
    ACTIONS(1358), 1,
      sym__dedent,
    STATE(448), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7018] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1360), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7032] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1362), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7046] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1184), 1,
      sym_text_line,
    ACTIONS(1186), 1,
      sym_newline,
    STATE(242), 1,
      sym_line_end,
    STATE(560), 1,
      sym__settle_line,
  [7062] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1364), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7076] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(232), 1,
      sym_inline_agic,
    STATE(986), 1,
      sym_runnable,
  [7092] = 5,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    ACTIONS(1370), 1,
      sym_flow_using_keyword,
    STATE(234), 1,
      sym_inline_agic,
    STATE(991), 1,
      sym__named_using_complement,
  [7108] = 1,
    ACTIONS(1372), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7116] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7130] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7144] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1378), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7158] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(249), 1,
      sym_inline_agic,
    STATE(1005), 1,
      sym_runnable,
  [7174] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1382), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7188] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(251), 1,
      sym_inline_agic,
    STATE(552), 1,
      sym_runnable,
  [7204] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1384), 1,
      sym_blank_line,
    ACTIONS(1386), 1,
      sym__dedent,
    STATE(465), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7218] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(254), 1,
      sym_inline_agic,
    STATE(552), 1,
      sym_runnable,
  [7234] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7248] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_newline,
    ACTIONS(1390), 1,
      sym_text_line,
    STATE(242), 1,
      sym_line_end,
    STATE(257), 1,
      sym__settle_line,
  [7264] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1392), 1,
      sym_blank_line,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(473), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7278] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(260), 1,
      sym_line_end,
    STATE(1008), 1,
      sym__lanes_complement,
  [7294] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(262), 1,
      sym_inline_agic,
    STATE(922), 1,
      sym_runnable,
  [7310] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
    STATE(1010), 1,
      sym__lanes_complement,
  [7326] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1400), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7340] = 5,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(565), 1,
      sym_line_end,
    STATE(919), 1,
      sym__lanes_complement,
  [7356] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1402), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7370] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1404), 1,
      sym_blank_line,
    ACTIONS(1406), 1,
      sym__dedent,
    STATE(469), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7384] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1408), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7398] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(1366), 1,
      sym_arrow,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(284), 1,
      sym_inline_agic,
    STATE(970), 1,
      sym_runnable,
  [7414] = 5,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(285), 1,
      sym_line_end,
    STATE(1015), 1,
      sym__lanes_complement,
  [7430] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1410), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7444] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1412), 1,
      sym_blank_line,
    ACTIONS(1414), 1,
      sym__dedent,
    STATE(470), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7458] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1416), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7472] = 5,
    ACTIONS(1182), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_newline,
    ACTIONS(1390), 1,
      sym_text_line,
    STATE(290), 1,
      sym__settle_line,
    STATE(379), 1,
      sym_line_end,
  [7488] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1418), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7502] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1420), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7516] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1422), 1,
      sym_blank_line,
    ACTIONS(1424), 1,
      sym__dedent,
    STATE(474), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7530] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1426), 1,
      sym_blank_line,
    ACTIONS(1428), 1,
      sym__dedent,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7544] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1430), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7558] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1432), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7572] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1434), 1,
      sym_blank_line,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7586] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1438), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7600] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1440), 1,
      sym_blank_line,
    ACTIONS(1442), 1,
      sym__dedent,
    STATE(484), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7614] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1444), 1,
      sym_blank_line,
    ACTIONS(1446), 1,
      sym__dedent,
    STATE(485), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7628] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1448), 1,
      sym_blank_line,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(487), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7642] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1452), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7656] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1454), 1,
      sym_blank_line,
    ACTIONS(1456), 1,
      sym__dedent,
    STATE(492), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7670] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1458), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7684] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1460), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7698] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1462), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7712] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1464), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7726] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1466), 1,
      sym_blank_line,
    ACTIONS(1468), 1,
      sym__dedent,
    STATE(493), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7740] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1470), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7754] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1472), 1,
      sym_blank_line,
    ACTIONS(1474), 1,
      sym__dedent,
    STATE(494), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7768] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1476), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7782] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1478), 1,
      sym_blank_line,
    ACTIONS(1480), 1,
      sym__dedent,
    STATE(495), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7796] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1482), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7810] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1484), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7824] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1486), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7838] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1488), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7852] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1490), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7866] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(1492), 1,
      sym_blank_line,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(498), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7880] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1496), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7894] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1498), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7908] = 4,
    ACTIONS(1500), 1,
      sym_array_suffix,
    STATE(502), 1,
      aux_sym_type_repeat1,
    STATE(1090), 1,
      sym_type_suffix,
    ACTIONS(857), 2,
      sym_newline,
      sym__inline_comment,
  [7922] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1502), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7936] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1504), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7950] = 4,
    ACTIONS(1500), 1,
      sym_array_suffix,
    STATE(505), 1,
      aux_sym_type_repeat1,
    STATE(1090), 1,
      sym_type_suffix,
    ACTIONS(877), 2,
      sym_newline,
      sym__inline_comment,
  [7964] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1506), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7978] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1508), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7992] = 4,
    ACTIONS(1510), 1,
      sym_array_suffix,
    STATE(505), 1,
      aux_sym_type_repeat1,
    STATE(1090), 1,
      sym_type_suffix,
    ACTIONS(900), 2,
      sym_newline,
      sym__inline_comment,
  [8006] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(567), 1,
      sym_inline_agic,
    STATE(922), 1,
      sym_runnable,
  [8022] = 5,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1026), 1,
      sym_flow_in_keyword,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(568), 1,
      sym_line_end,
    STATE(923), 1,
      sym__lanes_complement,
  [8038] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1513), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8052] = 4,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1515), 1,
      sym__dedent,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8066] = 1,
    ACTIONS(875), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8074] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(910), 1,
      sym_snake_name,
    STATE(376), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [8088] = 1,
    ACTIONS(869), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8096] = 4,
    ACTIONS(557), 1,
      sym__indent,
    ACTIONS(1517), 1,
      sym_blank_line,
    ACTIONS(1520), 1,
      sym__comment_start,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8110] = 1,
    ACTIONS(869), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8118] = 4,
    ACTIONS(1523), 1,
      sym_blank_line,
    ACTIONS(1526), 1,
      sym__dedent,
    ACTIONS(1528), 1,
      sym_indented_raw_text,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8132] = 1,
    ACTIONS(875), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8140] = 5,
    ACTIONS(831), 1,
      sym_snake_name,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    STATE(705), 1,
      sym_inline_agic,
    STATE(973), 1,
      sym_runnable,
  [8156] = 5,
    ACTIONS(976), 1,
      sym_arrow,
    ACTIONS(978), 1,
      sym_colon,
    ACTIONS(1531), 1,
      sym_flow_using_keyword,
    STATE(738), 1,
      sym_inline_agic,
    STATE(992), 1,
      sym__named_using_complement,
  [8172] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1533), 1,
      sym_blank_line,
    ACTIONS(1535), 1,
      sym__indent,
    STATE(521), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8186] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1537), 1,
      sym_blank_line,
    ACTIONS(1539), 1,
      sym__indent,
    STATE(522), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8200] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1541), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8214] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1543), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8228] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1545), 1,
      sym_blank_line,
    ACTIONS(1547), 1,
      sym__indent,
    STATE(524), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8242] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1549), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8256] = 1,
    ACTIONS(879), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8264] = 1,
    ACTIONS(1551), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8272] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1553), 1,
      sym_blank_line,
    ACTIONS(1555), 1,
      sym__indent,
    STATE(529), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8286] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1557), 1,
      sym_blank_line,
    ACTIONS(1559), 1,
      sym__indent,
    STATE(530), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8300] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1561), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8314] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1563), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8328] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1565), 1,
      sym_blank_line,
    ACTIONS(1567), 1,
      sym__indent,
    STATE(532), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8342] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1569), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8356] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1571), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8370] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1573), 1,
      sym_blank_line,
    ACTIONS(1575), 1,
      sym__indent,
    STATE(535), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8384] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1577), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8398] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1579), 1,
      sym_blank_line,
    ACTIONS(1581), 1,
      sym__indent,
    STATE(537), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8412] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1583), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8426] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1585), 1,
      sym_blank_line,
    ACTIONS(1587), 1,
      sym__indent,
    STATE(539), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8440] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1589), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8454] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1591), 1,
      sym_blank_line,
    ACTIONS(1593), 1,
      sym__indent,
    STATE(541), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8468] = 4,
    ACTIONS(835), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1595), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8482] = 1,
    ACTIONS(1597), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8490] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8498] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8506] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8514] = 4,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(970), 1,
      sym_blank_line,
    ACTIONS(1599), 1,
      sym__dedent,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8528] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8535] = 1,
    ACTIONS(1601), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8542] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8549] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8556] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8563] = 1,
    ACTIONS(1603), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8570] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8577] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8584] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8591] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8598] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8605] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1605), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [8616] = 1,
    ACTIONS(1607), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8623] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8630] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8637] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1609), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [8648] = 1,
    ACTIONS(1611), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8655] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8662] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8669] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8676] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8683] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8690] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8697] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8704] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8711] = 1,
    ACTIONS(1613), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8718] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8725] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8732] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8739] = 1,
    ACTIONS(1615), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8746] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8753] = 1,
    ACTIONS(1617), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8760] = 1,
    ACTIONS(1619), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8767] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8774] = 1,
    ACTIONS(1621), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8781] = 1,
    ACTIONS(1623), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8788] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8795] = 1,
    ACTIONS(1625), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8802] = 1,
    ACTIONS(1627), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8809] = 1,
    ACTIONS(1629), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8816] = 4,
    ACTIONS(1028), 1,
      sym_newline,
    ACTIONS(1631), 1,
      sym__inline_comment,
    ACTIONS(1633), 1,
      sym_text_line,
    STATE(868), 1,
      sym_line_end,
  [8829] = 3,
    ACTIONS(1637), 1,
      sym_comma,
    STATE(617), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1635), 2,
      sym_newline,
      sym__inline_comment,
  [8840] = 3,
    ACTIONS(1641), 1,
      sym_comma,
    STATE(618), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1639), 2,
      sym_newline,
      sym__inline_comment,
  [8851] = 1,
    ACTIONS(1643), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8858] = 1,
    ACTIONS(1645), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8865] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8872] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8879] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8886] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8893] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8900] = 1,
    ACTIONS(1647), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8907] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1649), 1,
      sym_blank_line,
    STATE(229), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8918] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8925] = 3,
    ACTIONS(1651), 1,
      sym_optional_marker,
    ACTIONS(1653), 1,
      sym_colon,
    ACTIONS(1655), 2,
      sym_rparen,
      sym_comma,
  [8936] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8943] = 1,
    ACTIONS(1657), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8950] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8957] = 1,
    ACTIONS(1659), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8964] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8971] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8978] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8985] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8992] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8999] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9006] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9013] = 4,
    ACTIONS(887), 1,
      sym_lparen,
    ACTIONS(1661), 1,
      sym_arrow,
    ACTIONS(1663), 1,
      sym_colon,
    STATE(1147), 1,
      sym_params,
  [9026] = 1,
    ACTIONS(1665), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9033] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(886), 1,
      sym_job_body,
  [9046] = 1,
    ACTIONS(1671), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9053] = 1,
    ACTIONS(1673), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9060] = 3,
    ACTIONS(1677), 1,
      sym_comma,
    STATE(617), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1675), 2,
      sym_newline,
      sym__inline_comment,
  [9071] = 3,
    ACTIONS(1682), 1,
      sym_comma,
    STATE(618), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1680), 2,
      sym_newline,
      sym__inline_comment,
  [9082] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9089] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9096] = 1,
    ACTIONS(1685), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9103] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9110] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(548), 1,
      sym_job_body,
  [9123] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9130] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1687), 1,
      sym_blank_line,
    STATE(402), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9141] = 1,
    ACTIONS(1689), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9148] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9155] = 1,
    ACTIONS(1691), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9162] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9169] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9176] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9183] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9190] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9197] = 4,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(1693), 1,
      sym__dedent,
    STATE(83), 1,
      sym_message,
    STATE(1285), 1,
      sym_messages,
  [9210] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9217] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9224] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9231] = 4,
    ACTIONS(887), 1,
      sym_lparen,
    ACTIONS(1695), 1,
      sym_arrow,
    ACTIONS(1697), 1,
      sym_colon,
    STATE(1120), 1,
      sym_params,
  [9244] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9251] = 1,
    ACTIONS(1699), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9258] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9265] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9272] = 1,
    ACTIONS(1701), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9279] = 1,
    ACTIONS(1703), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9286] = 1,
    ACTIONS(1705), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9293] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9300] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9307] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9314] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9321] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9328] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9335] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9342] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9349] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9356] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9363] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9370] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9377] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9384] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9391] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9398] = 1,
    ACTIONS(1707), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9405] = 2,
    ACTIONS(241), 1,
      sym_integer_literal,
    ACTIONS(239), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9414] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9421] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9428] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9435] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9442] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9449] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9456] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9463] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9470] = 1,
    ACTIONS(1709), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9477] = 1,
    ACTIONS(1711), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9484] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9491] = 2,
    STATE(1054), 1,
      sym_text_ref,
    ACTIONS(1713), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9500] = 1,
    ACTIONS(1715), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9507] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9514] = 4,
    ACTIONS(1717), 1,
      sym_runnable_ref,
    ACTIONS(1719), 1,
      sym_none_keyword,
    ACTIONS(1721), 1,
      sym_all_keyword,
    STATE(1053), 1,
      sym_route_value,
  [9527] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(683), 1,
      sym__cap_definition,
  [9540] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9547] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9554] = 1,
    ACTIONS(1723), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9561] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9568] = 1,
    ACTIONS(1725), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9575] = 4,
    ACTIONS(1727), 1,
      sym_blank_line,
    ACTIONS(1729), 1,
      sym__text_indent,
    STATE(736), 1,
      sym_text_body,
    STATE(1055), 1,
      aux_sym_text_body_repeat1,
  [9588] = 1,
    ACTIONS(1731), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9595] = 1,
    ACTIONS(1733), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9602] = 1,
    ACTIONS(1735), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9609] = 1,
    ACTIONS(1737), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9616] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9623] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9630] = 1,
    ACTIONS(1739), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9637] = 1,
    ACTIONS(1741), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9644] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9651] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9658] = 4,
    ACTIONS(1228), 1,
      sym_newline,
    ACTIONS(1743), 1,
      sym__inline_comment,
    ACTIONS(1745), 1,
      sym_text_line,
    STATE(764), 1,
      sym_line_end,
  [9671] = 1,
    ACTIONS(1747), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9678] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9685] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9692] = 1,
    ACTIONS(1749), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9699] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9706] = 1,
    ACTIONS(1751), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9713] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9720] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9727] = 1,
    ACTIONS(1753), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [9734] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9741] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9748] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1755), 1,
      sym_blank_line,
    STATE(421), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9759] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9766] = 1,
    ACTIONS(1757), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9773] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9780] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9787] = 4,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    ACTIONS(1759), 1,
      sym_colon,
    STATE(779), 1,
      sym_line_end,
  [9800] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9807] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9814] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1761), 1,
      sym_blank_line,
    STATE(509), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9825] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9832] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9839] = 1,
    ACTIONS(1763), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9846] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9853] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9860] = 1,
    ACTIONS(1765), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9867] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9874] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9881] = 1,
    ACTIONS(1767), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9888] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9895] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9902] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9909] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9916] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9923] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9930] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9937] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9944] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9951] = 1,
    ACTIONS(1769), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9958] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9965] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9972] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(686), 1,
      sym__cap_definition,
  [9985] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9992] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9999] = 2,
    ACTIONS(1773), 1,
      sym_newline,
    ACTIONS(1771), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [10008] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10015] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10022] = 4,
    ACTIONS(1775), 1,
      sym__inline_comment,
    ACTIONS(1777), 1,
      sym_text_line,
    ACTIONS(1779), 1,
      sym_newline,
    STATE(227), 1,
      sym_line_end,
  [10035] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10042] = 1,
    ACTIONS(1781), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10049] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(692), 1,
      sym__cap_definition,
  [10062] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10069] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10076] = 3,
    ACTIONS(1783), 1,
      sym_colon,
    ACTIONS(1785), 1,
      sym_newline,
    ACTIONS(1777), 2,
      sym__inline_comment,
      sym_text_line,
  [10087] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10094] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10101] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10108] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10115] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10122] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10129] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10136] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10143] = 4,
    ACTIONS(1787), 1,
      sym_blank_line,
    ACTIONS(1789), 1,
      sym__text_indent,
    STATE(983), 1,
      sym_text_body,
    STATE(1066), 1,
      aux_sym_text_body_repeat1,
  [10156] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10163] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10170] = 4,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    ACTIONS(1791), 1,
      sym_colon,
    STATE(564), 1,
      sym_line_end,
  [10183] = 4,
    ACTIONS(1028), 1,
      sym_newline,
    ACTIONS(1631), 1,
      sym__inline_comment,
    ACTIONS(1793), 1,
      sym_text_line,
    STATE(661), 1,
      sym_line_end,
  [10196] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10203] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10210] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10217] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10224] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10231] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10238] = 4,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1795), 1,
      sym__inline_comment,
    ACTIONS(1797), 1,
      sym_text_line,
    STATE(245), 1,
      sym_line_end,
  [10251] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10258] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10265] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10272] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10279] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10286] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10293] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10300] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10307] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10314] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10321] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10328] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10335] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10342] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10349] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10356] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10363] = 4,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1799), 1,
      sym_colon,
    STATE(259), 1,
      sym_line_end,
  [10376] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10383] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10390] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10397] = 2,
    STATE(1246), 1,
      sym_directive_op,
    ACTIONS(1801), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10406] = 1,
    ACTIONS(1803), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10413] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10420] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10427] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10434] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10441] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10448] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10455] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10462] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10469] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10476] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10483] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10490] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10497] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10504] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10511] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10518] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10525] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10532] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10539] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10546] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10553] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10560] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10567] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10574] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10581] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10588] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10595] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10602] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10609] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10616] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10623] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10630] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10637] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10644] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10651] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10658] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10665] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10672] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10679] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10686] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10693] = 4,
    ACTIONS(1805), 1,
      sym_blank_line,
    ACTIONS(1807), 1,
      sym__text_indent,
    STATE(630), 1,
      sym_text_body,
    STATE(1077), 1,
      aux_sym_text_body_repeat1,
  [10706] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10713] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10720] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10727] = 4,
    ACTIONS(1809), 1,
      sym_blank_line,
    ACTIONS(1811), 1,
      sym__text_indent,
    STATE(341), 1,
      sym_text_body,
    STATE(1078), 1,
      aux_sym_text_body_repeat1,
  [10740] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10747] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10754] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10761] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10768] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10775] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10782] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10789] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10796] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1813), 1,
      sym_blank_line,
    STATE(358), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10807] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1815), 1,
      sym_blank_line,
    STATE(359), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10818] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10825] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1817), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10836] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1819), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10847] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10854] = 2,
    STATE(948), 1,
      sym_text_ref,
    ACTIONS(1713), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [10863] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10870] = 4,
    ACTIONS(1717), 1,
      sym_runnable_ref,
    ACTIONS(1719), 1,
      sym_none_keyword,
    ACTIONS(1721), 1,
      sym_all_keyword,
    STATE(947), 1,
      sym_route_value,
  [10883] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1821), 1,
      sym_blank_line,
    STATE(429), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10894] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1823), 1,
      sym_blank_line,
    STATE(430), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10905] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10912] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1825), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10923] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1827), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10934] = 1,
    ACTIONS(1829), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10941] = 4,
    ACTIONS(1667), 1,
      sym__inline_comment,
    ACTIONS(1669), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(696), 1,
      sym__cap_definition,
  [10954] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1831), 1,
      sym_blank_line,
    STATE(500), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10965] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1833), 1,
      sym_blank_line,
    STATE(501), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10976] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1835), 1,
      sym_blank_line,
    STATE(503), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10987] = 3,
    ACTIONS(932), 1,
      sym_indented_raw_text,
    ACTIONS(1837), 1,
      sym_blank_line,
    STATE(504), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10998] = 2,
    STATE(1227), 1,
      sym_directive_op,
    ACTIONS(1801), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11007] = 3,
    STATE(600), 1,
      sym_param_name,
    STATE(1162), 1,
      sym_param,
    ACTIONS(936), 2,
      anon_sym__,
      sym_snake_name,
  [11018] = 4,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(1839), 1,
      sym__dedent,
    STATE(83), 1,
      sym_message,
    STATE(1217), 1,
      sym_messages,
  [11031] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11038] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11045] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11052] = 4,
    ACTIONS(1841), 1,
      sym_blank_line,
    ACTIONS(1843), 1,
      sym__text_indent,
    STATE(708), 1,
      sym_text_body,
    STATE(1007), 1,
      aux_sym_text_body_repeat1,
  [11065] = 1,
    ACTIONS(1845), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11072] = 1,
    ACTIONS(1847), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11079] = 1,
    ACTIONS(1849), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11086] = 1,
    ACTIONS(1851), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11093] = 1,
    ACTIONS(1853), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11100] = 1,
    ACTIONS(1855), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11107] = 1,
    ACTIONS(1857), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11114] = 1,
    ACTIONS(1859), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11121] = 1,
    ACTIONS(1861), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11128] = 1,
    ACTIONS(1863), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11135] = 1,
    ACTIONS(1865), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11142] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11149] = 1,
    ACTIONS(1867), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11156] = 1,
    ACTIONS(1869), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11163] = 1,
    ACTIONS(1871), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11170] = 1,
    ACTIONS(1873), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11177] = 1,
    ACTIONS(1875), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11184] = 3,
    ACTIONS(1637), 1,
      sym_comma,
    STATE(588), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1877), 2,
      sym_newline,
      sym__inline_comment,
  [11195] = 3,
    ACTIONS(1641), 1,
      sym_comma,
    STATE(589), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1879), 2,
      sym_newline,
      sym__inline_comment,
  [11206] = 1,
    ACTIONS(1881), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11213] = 1,
    ACTIONS(1883), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11220] = 1,
    ACTIONS(1885), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11227] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11234] = 1,
    ACTIONS(1887), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11241] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(137), 1,
      sym_statements,
  [11251] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(594), 1,
      sym_line_end,
  [11261] = 1,
    ACTIONS(1889), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11267] = 2,
    ACTIONS(1773), 1,
      sym_newline,
    ACTIONS(1771), 2,
      sym__inline_comment,
      sym_text_line,
  [11275] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(193), 1,
      sym_line_end,
  [11285] = 2,
    ACTIONS(241), 1,
      sym_all_keyword,
    ACTIONS(239), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [11293] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11299] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11305] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11311] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11317] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11323] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11329] = 1,
    ACTIONS(912), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11335] = 1,
    ACTIONS(914), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11341] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11347] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11353] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11359] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11365] = 1,
    ACTIONS(914), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [11371] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(599), 1,
      sym_line_end,
  [11381] = 3,
    ACTIONS(605), 1,
      sym__line_start,
    STATE(109), 1,
      sym__flow_statement,
    STATE(1277), 1,
      sym_statements,
  [11391] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(164), 1,
      sym_line_end,
  [11401] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(369), 1,
      sym_line_end,
  [11411] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(605), 1,
      sym_line_end,
  [11421] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(606), 1,
      sym_line_end,
  [11431] = 3,
    ACTIONS(1895), 1,
      sym_blank_line,
    ACTIONS(1898), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [11441] = 1,
    ACTIONS(1900), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11447] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(607), 1,
      sym_line_end,
  [11457] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(608), 1,
      sym_line_end,
  [11467] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(735), 1,
      sym_line_end,
  [11477] = 3,
    ACTIONS(1902), 1,
      sym_rparen,
    ACTIONS(1904), 1,
      sym_comma,
    STATE(1037), 1,
      aux_sym_params_repeat1,
  [11487] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(214), 1,
      sym_line_end,
  [11497] = 3,
    ACTIONS(902), 1,
      sym_flow_by_keyword,
    STATE(611), 1,
      sym__inline_by_complement,
    STATE(972), 1,
      sym__named_by_complement,
  [11507] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(373), 1,
      sym_line_end,
  [11517] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(374), 1,
      sym_line_end,
  [11527] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(767), 1,
      sym_line_end,
  [11537] = 3,
    ACTIONS(817), 1,
      sym_flow_using_keyword,
    STATE(753), 1,
      sym__inline_using_complement,
    STATE(938), 1,
      sym__named_using_complement,
  [11547] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [11557] = 3,
    ACTIONS(1906), 1,
      sym_rparen,
    ACTIONS(1908), 1,
      sym_comma,
    STATE(934), 1,
      aux_sym_params_repeat1,
  [11567] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(615), 1,
      sym_line_end,
  [11577] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(772), 1,
      sym_line_end,
  [11587] = 3,
    ACTIONS(1911), 1,
      sym__inline_comment,
    ACTIONS(1913), 1,
      sym_newline,
    STATE(375), 1,
      sym_line_end,
  [11597] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(775), 1,
      sym_line_end,
  [11607] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(888), 1,
      sym_line_end,
  [11617] = 3,
    ACTIONS(817), 1,
      sym_flow_using_keyword,
    STATE(781), 1,
      sym__inline_using_complement,
    STATE(952), 1,
      sym__named_using_complement,
  [11627] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(209), 1,
      sym_line_end,
  [11637] = 2,
    STATE(977), 1,
      sym_recall_source,
    ACTIONS(788), 2,
      anon_sym_far,
      anon_sym_near,
  [11645] = 3,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    STATE(784), 1,
      sym__inline_if_complement,
    STATE(954), 1,
      sym__named_if_complement,
  [11655] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(785), 1,
      sym_line_end,
  [11665] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(787), 1,
      sym_line_end,
  [11675] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(793), 1,
      sym_line_end,
  [11685] = 3,
    ACTIONS(1915), 1,
      sym__inline_comment,
    ACTIONS(1917), 1,
      sym_newline,
    STATE(794), 1,
      sym_line_end,
  [11695] = 3,
    ACTIONS(1915), 1,
      sym__inline_comment,
    ACTIONS(1917), 1,
      sym_newline,
    STATE(795), 1,
      sym_line_end,
  [11705] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(798), 1,
      sym_line_end,
  [11715] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(800), 1,
      sym_line_end,
  [11725] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(803), 1,
      sym_line_end,
  [11735] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(804), 1,
      sym_line_end,
  [11745] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(805), 1,
      sym_line_end,
  [11755] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(806), 1,
      sym_line_end,
  [11765] = 3,
    ACTIONS(839), 1,
      sym_flow_by_keyword,
    STATE(809), 1,
      sym__inline_by_complement,
    STATE(961), 1,
      sym__named_by_complement,
  [11775] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(212), 1,
      sym_line_end,
  [11785] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(176), 1,
      sym_line_end,
  [11795] = 3,
    ACTIONS(1919), 1,
      sym_colon,
    ACTIONS(1921), 1,
      sym_snake_name,
    STATE(1301), 1,
      sym_context_name,
  [11805] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(166), 1,
      sym_line_end,
  [11815] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(815), 1,
      sym_line_end,
  [11825] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(816), 1,
      sym_line_end,
  [11835] = 1,
    ACTIONS(1923), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11841] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [11851] = 3,
    ACTIONS(605), 1,
      sym__line_start,
    STATE(109), 1,
      sym__flow_statement,
    STATE(1232), 1,
      sym_statements,
  [11861] = 1,
    ACTIONS(1925), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [11867] = 1,
    ACTIONS(1927), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [11873] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(186), 1,
      sym_line_end,
  [11883] = 3,
    ACTIONS(1929), 1,
      sym_colon,
    ACTIONS(1931), 1,
      sym_snake_name,
    STATE(1294), 1,
      sym_instruct_name,
  [11893] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(187), 1,
      sym_line_end,
  [11903] = 1,
    ACTIONS(1933), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11909] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(635), 1,
      sym_line_end,
  [11919] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(636), 1,
      sym_line_end,
  [11929] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(739), 1,
      sym_line_end,
  [11939] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1209), 1,
      sym_statements,
  [11949] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(389), 1,
      sym_line_end,
  [11959] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(640), 1,
      sym_line_end,
  [11969] = 1,
    ACTIONS(1675), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [11975] = 3,
    ACTIONS(1779), 1,
      sym_newline,
    ACTIONS(1935), 1,
      sym__inline_comment,
    STATE(982), 1,
      sym_line_end,
  [11985] = 3,
    ACTIONS(841), 1,
      sym_flow_using_keyword,
    STATE(741), 1,
      sym__inline_using_complement,
    STATE(1000), 1,
      sym__named_using_complement,
  [11995] = 1,
    ACTIONS(1680), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12001] = 1,
    ACTIONS(1154), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12007] = 1,
    ACTIONS(1156), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12013] = 1,
    ACTIONS(1158), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12019] = 2,
    STATE(216), 1,
      sym__order_complement,
    ACTIONS(1937), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12027] = 1,
    ACTIONS(1160), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12033] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(248), 1,
      sym_line_end,
  [12043] = 1,
    ACTIONS(1162), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12049] = 3,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(235), 1,
      sym__inline_using_complement,
    STATE(993), 1,
      sym__named_using_complement,
  [12059] = 1,
    ACTIONS(1939), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [12065] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(206), 1,
      sym_line_end,
  [12075] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(252), 1,
      sym_line_end,
  [12085] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(553), 1,
      sym_line_end,
  [12095] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(255), 1,
      sym_line_end,
  [12105] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1106), 1,
      sym_statements,
  [12115] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1107), 1,
      sym_statements,
  [12125] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(95), 1,
      sym_statements,
  [12135] = 1,
    ACTIONS(1941), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12141] = 3,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(261), 1,
      sym__inline_using_complement,
    STATE(1009), 1,
      sym__named_using_complement,
  [12151] = 1,
    ACTIONS(1943), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [12157] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(556), 1,
      sym_line_end,
  [12167] = 3,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(264), 1,
      sym__inline_if_complement,
    STATE(1011), 1,
      sym__named_if_complement,
  [12177] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(265), 1,
      sym_line_end,
  [12187] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(266), 1,
      sym_line_end,
  [12197] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(272), 1,
      sym_line_end,
  [12207] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(275), 1,
      sym_line_end,
  [12217] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(277), 1,
      sym_line_end,
  [12227] = 3,
    ACTIONS(1945), 1,
      sym_blank_line,
    ACTIONS(1947), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [12237] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(280), 1,
      sym_line_end,
  [12247] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(281), 1,
      sym_line_end,
  [12257] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [12267] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [12277] = 1,
    ACTIONS(1949), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12283] = 3,
    ACTIONS(908), 1,
      sym_flow_by_keyword,
    STATE(286), 1,
      sym__inline_by_complement,
    STATE(1016), 1,
      sym__named_by_complement,
  [12293] = 2,
    ACTIONS(1953), 1,
      sym_newline,
    ACTIONS(1951), 2,
      sym__inline_comment,
      sym_text_line,
  [12301] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(292), 1,
      sym_line_end,
  [12311] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
  [12321] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1119), 1,
      sym_statements,
  [12331] = 2,
    ACTIONS(1889), 1,
      sym_newline,
    ACTIONS(1955), 2,
      sym__inline_comment,
      sym_text_line,
  [12339] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(96), 1,
      sym_statements,
  [12349] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(97), 1,
      sym_statements,
  [12359] = 2,
    ACTIONS(1959), 1,
      sym_newline,
    ACTIONS(1957), 2,
      sym__inline_comment,
      sym_text_line,
  [12367] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(181), 1,
      sym_line_end,
  [12377] = 3,
    ACTIONS(841), 1,
      sym_flow_using_keyword,
    STATE(566), 1,
      sym__inline_using_complement,
    STATE(920), 1,
      sym__named_using_complement,
  [12387] = 2,
    STATE(1241), 1,
      sym_param_name,
    ACTIONS(1961), 2,
      anon_sym__,
      sym_snake_name,
  [12395] = 3,
    ACTIONS(1963), 1,
      sym__inline_comment,
    ACTIONS(1965), 1,
      sym_newline,
    STATE(643), 1,
      sym_line_end,
  [12405] = 3,
    ACTIONS(335), 1,
      sym_flow_if_keyword,
    STATE(569), 1,
      sym__inline_if_complement,
    STATE(924), 1,
      sym__named_if_complement,
  [12415] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(570), 1,
      sym_line_end,
  [12425] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(571), 1,
      sym_line_end,
  [12435] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(98), 1,
      sym_statements,
  [12445] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(270), 1,
      sym_line_end,
  [12455] = 1,
    ACTIONS(1967), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12461] = 3,
    ACTIONS(1226), 1,
      sym__inline_comment,
    ACTIONS(1228), 1,
      sym_newline,
    STATE(629), 1,
      sym_line_end,
  [12471] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1969), 1,
      sym_colon,
    STATE(1245), 1,
      sym__window_complement,
  [12481] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [12491] = 3,
    ACTIONS(1396), 1,
      sym__inline_comment,
    ACTIONS(1398), 1,
      sym_newline,
    STATE(340), 1,
      sym_line_end,
  [12501] = 3,
    ACTIONS(1024), 1,
      sym__inline_comment,
    ACTIONS(1028), 1,
      sym_newline,
    STATE(580), 1,
      sym_line_end,
  [12511] = 3,
    ACTIONS(1904), 1,
      sym_comma,
    ACTIONS(1971), 1,
      sym_rparen,
    STATE(934), 1,
      aux_sym_params_repeat1,
  [12521] = 2,
    ACTIONS(1973), 1,
      sym_colon,
    ACTIONS(1975), 2,
      sym_rparen,
      sym_comma,
  [12529] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(169), 1,
      sym_line_end,
  [12539] = 1,
    ACTIONS(1977), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12545] = 3,
    ACTIONS(1979), 1,
      sym_pascal_name,
    STATE(1332), 1,
      sym_type_name,
    STATE(1342), 1,
      sym_struct_name,
  [12555] = 2,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(1937), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12563] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(125), 1,
      sym_statements,
  [12573] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(126), 1,
      sym_statements,
  [12583] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(127), 1,
      sym_statements,
  [12593] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(128), 1,
      sym_statements,
  [12603] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [12613] = 2,
    STATE(222), 1,
      sym__order_complement,
    ACTIONS(1937), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12621] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(136), 1,
      sym_statements,
  [12631] = 3,
    ACTIONS(1963), 1,
      sym__inline_comment,
    ACTIONS(1965), 1,
      sym_newline,
    STATE(698), 1,
      sym_line_end,
  [12641] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(138), 1,
      sym_statements,
  [12651] = 3,
    ACTIONS(367), 1,
      sym__line_start,
    STATE(79), 1,
      sym__flow_statement,
    STATE(139), 1,
      sym_statements,
  [12661] = 3,
    ACTIONS(1981), 1,
      sym__inline_comment,
    ACTIONS(1983), 1,
      sym_newline,
    STATE(361), 1,
      sym_line_end,
  [12671] = 3,
    ACTIONS(1981), 1,
      sym__inline_comment,
    ACTIONS(1983), 1,
      sym_newline,
    STATE(362), 1,
      sym_line_end,
  [12681] = 3,
    ACTIONS(1945), 1,
      sym_blank_line,
    ACTIONS(1985), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [12691] = 1,
    ACTIONS(1987), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12697] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [12707] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1156), 1,
      sym_statements,
  [12717] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12723] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1214), 1,
      sym_statements,
  [12733] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1159), 1,
      sym_statements,
  [12743] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12749] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12755] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1161), 1,
      sym_statements,
  [12765] = 1,
    ACTIONS(1665), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12771] = 3,
    ACTIONS(1945), 1,
      sym_blank_line,
    ACTIONS(1989), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [12781] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12787] = 1,
    ACTIONS(912), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12793] = 1,
    ACTIONS(914), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12799] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1169), 1,
      sym_statements,
  [12809] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12815] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1171), 1,
      sym_statements,
  [12825] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1172), 1,
      sym_statements,
  [12835] = 1,
    ACTIONS(1615), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12841] = 3,
    ACTIONS(569), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1174), 1,
      sym_statements,
  [12851] = 1,
    ACTIONS(1619), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12857] = 3,
    ACTIONS(1945), 1,
      sym_blank_line,
    ACTIONS(1991), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [12867] = 3,
    ACTIONS(1945), 1,
      sym_blank_line,
    ACTIONS(1993), 1,
      sym__text_indent,
    STATE(921), 1,
      aux_sym_text_body_repeat1,
  [12877] = 1,
    ACTIONS(1629), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12883] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(519), 1,
      sym_line_end,
  [12893] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(520), 1,
      sym_line_end,
  [12903] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12909] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(523), 1,
      sym_line_end,
  [12919] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(527), 1,
      sym_line_end,
  [12929] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12935] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(528), 1,
      sym_line_end,
  [12945] = 1,
    ACTIONS(1767), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12951] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12957] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(531), 1,
      sym_line_end,
  [12967] = 1,
    ACTIONS(1769), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12973] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(534), 1,
      sym_line_end,
  [12983] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1995), 1,
      sym_colon,
    STATE(1334), 1,
      sym__window_complement,
  [12993] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(536), 1,
      sym_line_end,
  [13003] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(538), 1,
      sym_line_end,
  [13013] = 3,
    ACTIONS(851), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1997), 1,
      sym_colon,
    STATE(1338), 1,
      sym__window_complement,
  [13023] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(540), 1,
      sym_line_end,
  [13033] = 1,
    ACTIONS(912), 3,
      sym_blank_line,
      sym__comment_start,
      sym__settle_indent,
  [13039] = 2,
    ACTIONS(1999), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [13046] = 2,
    ACTIONS(2001), 1,
      sym_arrow,
    ACTIONS(2003), 1,
      sym_colon,
  [13053] = 2,
    ACTIONS(2005), 1,
      sym__settle_text_start,
    STATE(671), 1,
      sym__settle_text_body,
  [13060] = 2,
    ACTIONS(2007), 1,
      sym__snake_kebab_name,
    STATE(1298), 1,
      sym_job_name,
  [13067] = 2,
    ACTIONS(2009), 1,
      anon_sym_lanes,
    STATE(1198), 1,
      sym_flow_lanes_keyword,
  [13074] = 2,
    ACTIONS(2007), 1,
      sym__snake_kebab_name,
    STATE(1303), 1,
      sym_job_name,
  [13081] = 2,
    ACTIONS(2011), 1,
      anon_sym_EQ,
    STATE(1149), 1,
      sym_assign_operator,
  [13088] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(432), 1,
      sym__from_complement,
  [13095] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(434), 1,
      sym__until_complement,
  [13102] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(435), 1,
      sym__until_complement,
  [13109] = 2,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
  [13116] = 2,
    ACTIONS(2013), 1,
      sym__snake_kebab_name,
    STATE(1262), 1,
      sym_cap_name,
  [13123] = 2,
    ACTIONS(2015), 1,
      sym__one_integer_literal,
    ACTIONS(2017), 1,
      sym__other_integer_literal,
  [13130] = 2,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(525), 1,
      sym__implicit_run_line,
  [13137] = 2,
    ACTIONS(2005), 1,
      sym__settle_text_start,
    STATE(688), 1,
      sym__settle_text_body,
  [13144] = 2,
    ACTIONS(2019), 1,
      sym_comment_text,
    ACTIONS(2021), 1,
      sym__comment_end,
  [13151] = 2,
    ACTIONS(2005), 1,
      sym__settle_text_start,
    STATE(626), 1,
      sym__settle_text_body,
  [13158] = 1,
    ACTIONS(2023), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [13163] = 2,
    ACTIONS(2025), 1,
      sym_colon,
    STATE(1031), 1,
      sym_inline_agic_body,
  [13170] = 2,
    ACTIONS(2027), 1,
      sym_comment_text,
    ACTIONS(2029), 1,
      sym__comment_end,
  [13177] = 1,
    ACTIONS(2031), 2,
      sym_newline,
      sym__inline_comment,
  [13182] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(446), 1,
      sym__until_complement,
  [13189] = 2,
    ACTIONS(2033), 1,
      sym_arrow,
    ACTIONS(2035), 1,
      sym_colon,
  [13196] = 2,
    ACTIONS(2037), 1,
      anon_sym_EQ,
    STATE(1153), 1,
      sym_assign_operator,
  [13203] = 1,
    ACTIONS(2039), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [13208] = 2,
    ACTIONS(2037), 1,
      anon_sym_EQ,
    STATE(674), 1,
      sym_assign_operator,
  [13215] = 2,
    ACTIONS(2041), 1,
      sym_comment_text,
    ACTIONS(2043), 1,
      sym__comment_end,
  [13222] = 2,
    ACTIONS(2045), 1,
      sym_comment_text,
    ACTIONS(2047), 1,
      sym__comment_end,
  [13229] = 2,
    ACTIONS(2049), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_assign_operator,
  [13236] = 2,
    ACTIONS(2051), 1,
      anon_sym_EQ,
    STATE(677), 1,
      sym_assign_operator,
  [13243] = 2,
    ACTIONS(2053), 1,
      sym_comment_text,
    ACTIONS(2055), 1,
      sym__comment_end,
  [13250] = 2,
    ACTIONS(2057), 1,
      sym_comment_text,
    ACTIONS(2059), 1,
      sym__comment_end,
  [13257] = 2,
    ACTIONS(2061), 1,
      sym_arrow,
    ACTIONS(2063), 1,
      sym_colon,
  [13264] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1307), 1,
      sym_param_doc_tag,
  [13271] = 1,
    ACTIONS(2067), 2,
      sym_arrow,
      sym_colon,
  [13276] = 2,
    ACTIONS(2069), 1,
      sym_comment_text,
    ACTIONS(2071), 1,
      sym__comment_end,
  [13283] = 2,
    ACTIONS(2073), 1,
      sym_comment_text,
    ACTIONS(2075), 1,
      sym__comment_end,
  [13290] = 2,
    ACTIONS(2077), 1,
      sym_comment_text,
    ACTIONS(2079), 1,
      sym__comment_end,
  [13297] = 2,
    ACTIONS(2081), 1,
      sym_comment_text,
    ACTIONS(2083), 1,
      sym__comment_end,
  [13304] = 2,
    ACTIONS(2085), 1,
      sym_comment_text,
    ACTIONS(2087), 1,
      sym__comment_end,
  [13311] = 2,
    ACTIONS(2089), 1,
      sym_comment_text,
    ACTIONS(2091), 1,
      sym__comment_end,
  [13318] = 2,
    ACTIONS(2093), 1,
      sym_comment_text,
    ACTIONS(2095), 1,
      sym__comment_end,
  [13325] = 2,
    ACTIONS(2097), 1,
      sym_comment_text,
    ACTIONS(2099), 1,
      sym__comment_end,
  [13332] = 2,
    ACTIONS(2101), 1,
      sym_comment_text,
    ACTIONS(2103), 1,
      sym__comment_end,
  [13339] = 2,
    ACTIONS(2105), 1,
      sym_comment_text,
    ACTIONS(2107), 1,
      sym__comment_end,
  [13346] = 2,
    ACTIONS(2109), 1,
      sym_comment_text,
    ACTIONS(2111), 1,
      sym__comment_end,
  [13353] = 2,
    ACTIONS(2113), 1,
      sym_comment_text,
    ACTIONS(2115), 1,
      sym__comment_end,
  [13360] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1265), 1,
      sym_param_doc_tag,
  [13367] = 1,
    ACTIONS(2117), 2,
      sym_rparen,
      sym_comma,
  [13372] = 2,
    ACTIONS(2119), 1,
      sym_arrow,
    ACTIONS(2121), 1,
      sym_colon,
  [13379] = 2,
    ACTIONS(2013), 1,
      sym__snake_kebab_name,
    STATE(1233), 1,
      sym_cap_name,
  [13386] = 2,
    ACTIONS(2123), 1,
      sym_text_line,
    STATE(937), 1,
      sym_property_value,
  [13393] = 1,
    ACTIONS(2125), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13398] = 1,
    ACTIONS(1144), 2,
      sym_blank_line,
      sym__text_indent,
  [13403] = 2,
    ACTIONS(2127), 1,
      sym_snake_name,
    STATE(376), 1,
      sym_agent,
  [13410] = 1,
    ACTIONS(2129), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13415] = 2,
    ACTIONS(2131), 1,
      sym__one_integer_literal,
    ACTIONS(2133), 1,
      sym__other_integer_literal,
  [13422] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(400), 1,
      sym__from_complement,
  [13429] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(401), 1,
      sym__until_complement,
  [13436] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(404), 1,
      sym__from_complement,
  [13443] = 2,
    ACTIONS(2135), 1,
      sym_comment_text,
    ACTIONS(2137), 1,
      sym__comment_end,
  [13450] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(407), 1,
      sym__until_complement,
  [13457] = 2,
    ACTIONS(2127), 1,
      sym_snake_name,
    STATE(332), 1,
      sym_agent,
  [13464] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(415), 1,
      sym__until_complement,
  [13471] = 1,
    ACTIONS(2139), 2,
      sym_rparen,
      sym_comma,
  [13476] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1345), 1,
      sym_param_doc_tag,
  [13483] = 2,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(271), 1,
      sym__implicit_run_line,
  [13490] = 2,
    ACTIONS(2127), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
  [13497] = 1,
    ACTIONS(2141), 2,
      sym_arrow,
      sym_colon,
  [13502] = 2,
    ACTIONS(1999), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [13509] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(471), 1,
      sym__from_complement,
  [13516] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(472), 1,
      sym__until_complement,
  [13523] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(475), 1,
      sym__from_complement,
  [13530] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(477), 1,
      sym__until_complement,
  [13537] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(478), 1,
      sym__until_complement,
  [13544] = 1,
    ACTIONS(2143), 2,
      sym_optional_marker,
      sym_colon,
  [13549] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(486), 1,
      sym__until_complement,
  [13556] = 2,
    ACTIONS(2145), 1,
      sym_comment_text,
    ACTIONS(2147), 1,
      sym__comment_end,
  [13563] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1238), 1,
      sym_param_doc_tag,
  [13570] = 2,
    ACTIONS(2149), 1,
      sym_comment_text,
    ACTIONS(2151), 1,
      sym__comment_end,
  [13577] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1258), 1,
      sym_param_doc_tag,
  [13584] = 1,
    ACTIONS(2153), 2,
      sym_newline,
      sym__inline_comment,
  [13589] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1274), 1,
      sym_param_doc_tag,
  [13596] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1282), 1,
      sym_param_doc_tag,
  [13603] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1295), 1,
      sym_param_doc_tag,
  [13610] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1306), 1,
      sym_param_doc_tag,
  [13617] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1321), 1,
      sym_param_doc_tag,
  [13624] = 2,
    ACTIONS(2065), 1,
      anon_sym_ATparam,
    STATE(1333), 1,
      sym_param_doc_tag,
  [13631] = 2,
    ACTIONS(2037), 1,
      anon_sym_EQ,
    STATE(1150), 1,
      sym_assign_operator,
  [13638] = 2,
    ACTIONS(2037), 1,
      anon_sym_EQ,
    STATE(851), 1,
      sym_assign_operator,
  [13645] = 2,
    ACTIONS(2049), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_assign_operator,
  [13652] = 2,
    ACTIONS(2051), 1,
      anon_sym_EQ,
    STATE(853), 1,
      sym_assign_operator,
  [13659] = 1,
    ACTIONS(1877), 2,
      sym_newline,
      sym__inline_comment,
  [13664] = 1,
    ACTIONS(1879), 2,
      sym_newline,
      sym__inline_comment,
  [13669] = 2,
    ACTIONS(2155), 1,
      anon_sym_lanes,
    STATE(965), 1,
      sym_flow_lanes_keyword,
  [13676] = 2,
    ACTIONS(2157), 1,
      sym_snake_name,
    STATE(1196), 1,
      sym_field_name,
  [13683] = 1,
    ACTIONS(2159), 2,
      sym_newline,
      sym__inline_comment,
  [13688] = 2,
    ACTIONS(513), 1,
      sym__line_start,
    STATE(150), 1,
      sym_field,
  [13695] = 2,
    ACTIONS(2161), 1,
      sym_optional_marker,
    ACTIONS(2163), 1,
      sym_colon,
  [13702] = 1,
    ACTIONS(2165), 2,
      sym_rparen,
      sym_comma,
  [13707] = 1,
    ACTIONS(1925), 2,
      sym_newline,
      sym__inline_comment,
  [13712] = 2,
    ACTIONS(2167), 1,
      sym_snake_name,
    STATE(1104), 1,
      sym_property_key,
  [13719] = 1,
    ACTIONS(1927), 2,
      sym_newline,
      sym__inline_comment,
  [13724] = 2,
    ACTIONS(2169), 1,
      sym_text_line,
    STATE(1025), 1,
      sym_cap_ref,
  [13731] = 2,
    ACTIONS(213), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
  [13738] = 2,
    ACTIONS(1999), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_assign_operator,
  [13745] = 2,
    ACTIONS(2005), 1,
      sym__settle_text_start,
    STATE(644), 1,
      sym__settle_text_body,
  [13752] = 2,
    ACTIONS(477), 1,
      sym__from_start,
    STATE(410), 1,
      sym__from_complement,
  [13759] = 2,
    ACTIONS(2013), 1,
      sym__snake_kebab_name,
    STATE(1329), 1,
      sym_cap_name,
  [13766] = 2,
    ACTIONS(513), 1,
      sym__line_start,
    STATE(111), 1,
      sym_field,
  [13773] = 1,
    ACTIONS(2171), 2,
      sym_newline,
      sym__inline_comment,
  [13778] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(411), 1,
      sym__until_complement,
  [13785] = 1,
    ACTIONS(2173), 2,
      sym_arrow,
      sym_colon,
  [13790] = 2,
    ACTIONS(2013), 1,
      sym__snake_kebab_name,
    STATE(1224), 1,
      sym_cap_name,
  [13797] = 1,
    ACTIONS(1146), 2,
      sym_blank_line,
      sym__text_indent,
  [13802] = 2,
    ACTIONS(2175), 1,
      sym_comment_text,
    ACTIONS(2177), 1,
      sym__comment_end,
  [13809] = 2,
    ACTIONS(537), 1,
      sym__until_start,
    STATE(406), 1,
      sym__until_complement,
  [13816] = 1,
    ACTIONS(2179), 1,
      sym_colon,
  [13820] = 1,
    ACTIONS(2181), 1,
      sym_newline,
  [13824] = 1,
    ACTIONS(2183), 1,
      sym__dedent,
  [13828] = 1,
    ACTIONS(2185), 1,
      sym_flow_time_keyword,
  [13832] = 1,
    ACTIONS(2187), 1,
      sym__comment_end,
  [13836] = 1,
    ACTIONS(2185), 1,
      sym_flow_times_keyword,
  [13840] = 1,
    ACTIONS(2189), 1,
      sym_integer_literal,
  [13844] = 1,
    ACTIONS(2191), 1,
      sym_colon,
  [13848] = 1,
    ACTIONS(1693), 1,
      sym__dedent,
  [13852] = 1,
    ACTIONS(2193), 1,
      sym_colon,
  [13856] = 1,
    ACTIONS(2195), 1,
      sym__dedent,
  [13860] = 1,
    ACTIONS(2197), 1,
      sym_colon,
  [13864] = 1,
    ACTIONS(2125), 1,
      sym_directive_value,
  [13868] = 1,
    ACTIONS(2199), 1,
      sym_colon,
  [13872] = 1,
    ACTIONS(2201), 1,
      sym__dedent,
  [13876] = 1,
    ACTIONS(2203), 1,
      sym_colon,
  [13880] = 1,
    ACTIONS(2205), 1,
      sym_integer_literal,
  [13884] = 1,
    ACTIONS(2207), 1,
      sym__dedent,
  [13888] = 1,
    ACTIONS(2209), 1,
      sym_colon,
  [13892] = 1,
    ACTIONS(2211), 1,
      sym__comment_end,
  [13896] = 1,
    ACTIONS(2213), 1,
      sym_colon,
  [13900] = 1,
    ACTIONS(2215), 1,
      sym_colon,
  [13904] = 1,
    ACTIONS(2217), 1,
      sym__comment_end,
  [13908] = 1,
    ACTIONS(2219), 1,
      sym__comment_end,
  [13912] = 1,
    ACTIONS(2221), 1,
      sym__comment_end,
  [13916] = 1,
    ACTIONS(2223), 1,
      sym_newline,
  [13920] = 1,
    ACTIONS(2225), 1,
      sym__doc_space,
  [13924] = 1,
    ACTIONS(2227), 1,
      sym_flow_from_keyword,
  [13928] = 1,
    ACTIONS(2229), 1,
      sym_directive_value,
  [13932] = 1,
    ACTIONS(2231), 1,
      sym_colon,
  [13936] = 1,
    ACTIONS(2233), 1,
      sym_colon,
  [13940] = 1,
    ACTIONS(2129), 1,
      sym_directive_value,
  [13944] = 1,
    ACTIONS(2235), 1,
      sym_newline,
  [13948] = 1,
    ACTIONS(299), 1,
      sym__dedent,
  [13952] = 1,
    ACTIONS(2237), 1,
      sym__dedent,
  [13956] = 1,
    ACTIONS(2239), 1,
      sym_flow_lane_keyword,
  [13960] = 1,
    ACTIONS(2241), 1,
      sym_colon,
  [13964] = 1,
    ACTIONS(2243), 1,
      sym_newline,
  [13968] = 1,
    ACTIONS(2245), 1,
      sym_newline,
  [13972] = 1,
    ACTIONS(2247), 1,
      sym__comment_end,
  [13976] = 1,
    ACTIONS(2249), 1,
      sym_colon,
  [13980] = 1,
    ACTIONS(2251), 1,
      sym_integer_literal,
  [13984] = 1,
    ACTIONS(2253), 1,
      sym__comment_end,
  [13988] = 1,
    ACTIONS(2255), 1,
      sym__comment_end,
  [13992] = 1,
    ACTIONS(2257), 1,
      sym_colon,
  [13996] = 1,
    ACTIONS(2259), 1,
      sym_colon,
  [14000] = 1,
    ACTIONS(2261), 1,
      sym_newline,
  [14004] = 1,
    ACTIONS(2263), 1,
      sym_colon,
  [14008] = 1,
    ACTIONS(2265), 1,
      sym__comment_end,
  [14012] = 1,
    ACTIONS(2267), 1,
      sym_newline,
  [14016] = 1,
    ACTIONS(2269), 1,
      sym__comment_end,
  [14020] = 1,
    ACTIONS(2271), 1,
      sym_flow_until_keyword,
  [14024] = 1,
    ACTIONS(2273), 1,
      sym_integer_literal,
  [14028] = 1,
    ACTIONS(2275), 1,
      sym_cap_kind,
  [14032] = 1,
    ACTIONS(2277), 1,
      sym_colon,
  [14036] = 1,
    ACTIONS(2279), 1,
      sym_integer_literal,
  [14040] = 1,
    ACTIONS(2281), 1,
      sym__comment_end,
  [14044] = 1,
    ACTIONS(2283), 1,
      sym__comment_end,
  [14048] = 1,
    ACTIONS(2285), 1,
      sym__comment_end,
  [14052] = 1,
    ACTIONS(2287), 1,
      sym__comment_end,
  [14056] = 1,
    ACTIONS(2289), 1,
      sym_newline,
  [14060] = 1,
    ACTIONS(2291), 1,
      sym__comment_end,
  [14064] = 1,
    ACTIONS(2293), 1,
      sym__dedent,
  [14068] = 1,
    ACTIONS(2295), 1,
      sym_colon,
  [14072] = 1,
    ACTIONS(2297), 1,
      sym_newline,
  [14076] = 1,
    ACTIONS(2299), 1,
      sym__comment_end,
  [14080] = 1,
    ACTIONS(2301), 1,
      sym__comment_end,
  [14084] = 1,
    ACTIONS(2303), 1,
      sym__comment_end,
  [14088] = 1,
    ACTIONS(2305), 1,
      sym__comment_end,
  [14092] = 1,
    ACTIONS(2307), 1,
      sym_newline,
  [14096] = 1,
    ACTIONS(1839), 1,
      sym__dedent,
  [14100] = 1,
    ACTIONS(2309), 1,
      sym_colon,
  [14104] = 1,
    ACTIONS(2311), 1,
      sym_colon,
  [14108] = 1,
    ACTIONS(2313), 1,
      sym_newline,
  [14112] = 1,
    ACTIONS(2315), 1,
      sym__comment_end,
  [14116] = 1,
    ACTIONS(2317), 1,
      sym__doc_space,
  [14120] = 1,
    ACTIONS(2319), 1,
      sym_newline,
  [14124] = 1,
    ACTIONS(2321), 1,
      sym_flow_lane_keyword,
  [14128] = 1,
    ACTIONS(2323), 1,
      sym__comment_end,
  [14132] = 1,
    ACTIONS(2325), 1,
      sym_colon,
  [14136] = 1,
    ACTIONS(2327), 1,
      sym__comment_end,
  [14140] = 1,
    ACTIONS(2329), 1,
      sym_newline,
  [14144] = 1,
    ACTIONS(2331), 1,
      sym_newline,
  [14148] = 1,
    ACTIONS(2333), 1,
      sym_colon,
  [14152] = 1,
    ACTIONS(2335), 1,
      sym__dedent,
  [14156] = 1,
    ACTIONS(2337), 1,
      sym__dedent,
  [14160] = 1,
    ACTIONS(2339), 1,
      sym_colon,
  [14164] = 1,
    ACTIONS(2341), 1,
      sym_colon,
  [14168] = 1,
    ACTIONS(2343), 1,
      sym_colon,
  [14172] = 1,
    ACTIONS(2345), 1,
      sym__comment_end,
  [14176] = 1,
    ACTIONS(2347), 1,
      sym__comment_end,
  [14180] = 1,
    ACTIONS(2349), 1,
      sym__comment_end,
  [14184] = 1,
    ACTIONS(2351), 1,
      sym__comment_end,
  [14188] = 1,
    ACTIONS(2353), 1,
      anon_sym_EQ,
  [14192] = 1,
    ACTIONS(2355), 1,
      ts_builtin_sym_end,
  [14196] = 1,
    ACTIONS(2357), 1,
      sym_newline,
  [14200] = 1,
    ACTIONS(2359), 1,
      sym_colon,
  [14204] = 1,
    ACTIONS(2361), 1,
      sym_colon,
  [14208] = 1,
    ACTIONS(241), 1,
      sym_text_line,
  [14212] = 1,
    ACTIONS(1959), 1,
      anon_sym_EQ,
  [14216] = 1,
    ACTIONS(321), 1,
      sym__dedent,
  [14220] = 1,
    ACTIONS(2363), 1,
      sym__comment_end,
  [14224] = 1,
    ACTIONS(2365), 1,
      sym_comment_text,
  [14228] = 1,
    ACTIONS(1647), 1,
      sym__doc_space,
  [14232] = 1,
    ACTIONS(2367), 1,
      sym__dedent,
  [14236] = 1,
    ACTIONS(2369), 1,
      sym__comment_end,
  [14240] = 1,
    ACTIONS(2371), 1,
      sym__comment_end,
  [14244] = 1,
    ACTIONS(2373), 1,
      sym__dedent,
  [14248] = 1,
    ACTIONS(2375), 1,
      sym__dedent,
  [14252] = 1,
    ACTIONS(2377), 1,
      sym_colon,
  [14256] = 1,
    ACTIONS(2379), 1,
      sym_newline,
  [14260] = 1,
    ACTIONS(2381), 1,
      sym_colon,
  [14264] = 1,
    ACTIONS(2383), 1,
      anon_sym_EQ,
  [14268] = 1,
    ACTIONS(2385), 1,
      sym_colon,
  [14272] = 1,
    ACTIONS(2387), 1,
      sym_colon,
  [14276] = 1,
    ACTIONS(2389), 1,
      sym__comment_end,
  [14280] = 1,
    ACTIONS(2391), 1,
      sym__comment_end,
  [14284] = 1,
    ACTIONS(2393), 1,
      sym_colon,
  [14288] = 1,
    ACTIONS(2395), 1,
      sym__comment_end,
  [14292] = 1,
    ACTIONS(2397), 1,
      sym_colon,
  [14296] = 1,
    ACTIONS(2399), 1,
      sym_newline,
  [14300] = 1,
    ACTIONS(2401), 1,
      sym_runnable_ref,
  [14304] = 1,
    ACTIONS(2403), 1,
      sym__comment_end,
  [14308] = 1,
    ACTIONS(2405), 1,
      sym_colon,
  [14312] = 1,
    ACTIONS(2407), 1,
      sym_colon,
  [14316] = 1,
    ACTIONS(2409), 1,
      sym_colon,
  [14320] = 1,
    ACTIONS(2411), 1,
      sym_colon,
  [14324] = 1,
    ACTIONS(2413), 1,
      sym_colon,
  [14328] = 1,
    ACTIONS(2415), 1,
      sym_colon,
  [14332] = 1,
    ACTIONS(2417), 1,
      sym_colon,
  [14336] = 1,
    ACTIONS(2419), 1,
      sym__comment_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 405,
  [SMALL_STATE(13)] = 455,
  [SMALL_STATE(14)] = 505,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 667,
  [SMALL_STATE(20)] = 700,
  [SMALL_STATE(21)] = 733,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 799,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 856,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 928,
  [SMALL_STATE(29)] = 952,
  [SMALL_STATE(30)] = 976,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1024,
  [SMALL_STATE(33)] = 1048,
  [SMALL_STATE(34)] = 1072,
  [SMALL_STATE(35)] = 1096,
  [SMALL_STATE(36)] = 1120,
  [SMALL_STATE(37)] = 1144,
  [SMALL_STATE(38)] = 1168,
  [SMALL_STATE(39)] = 1192,
  [SMALL_STATE(40)] = 1216,
  [SMALL_STATE(41)] = 1240,
  [SMALL_STATE(42)] = 1264,
  [SMALL_STATE(43)] = 1293,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1351,
  [SMALL_STATE(46)] = 1380,
  [SMALL_STATE(47)] = 1404,
  [SMALL_STATE(48)] = 1430,
  [SMALL_STATE(49)] = 1456,
  [SMALL_STATE(50)] = 1482,
  [SMALL_STATE(51)] = 1508,
  [SMALL_STATE(52)] = 1532,
  [SMALL_STATE(53)] = 1556,
  [SMALL_STATE(54)] = 1582,
  [SMALL_STATE(55)] = 1608,
  [SMALL_STATE(56)] = 1634,
  [SMALL_STATE(57)] = 1660,
  [SMALL_STATE(58)] = 1686,
  [SMALL_STATE(59)] = 1712,
  [SMALL_STATE(60)] = 1738,
  [SMALL_STATE(61)] = 1764,
  [SMALL_STATE(62)] = 1788,
  [SMALL_STATE(63)] = 1814,
  [SMALL_STATE(64)] = 1840,
  [SMALL_STATE(65)] = 1866,
  [SMALL_STATE(66)] = 1889,
  [SMALL_STATE(67)] = 1908,
  [SMALL_STATE(68)] = 1931,
  [SMALL_STATE(69)] = 1950,
  [SMALL_STATE(70)] = 1969,
  [SMALL_STATE(71)] = 1992,
  [SMALL_STATE(72)] = 2011,
  [SMALL_STATE(73)] = 2030,
  [SMALL_STATE(74)] = 2053,
  [SMALL_STATE(75)] = 2074,
  [SMALL_STATE(76)] = 2097,
  [SMALL_STATE(77)] = 2116,
  [SMALL_STATE(78)] = 2135,
  [SMALL_STATE(79)] = 2154,
  [SMALL_STATE(80)] = 2173,
  [SMALL_STATE(81)] = 2192,
  [SMALL_STATE(82)] = 2215,
  [SMALL_STATE(83)] = 2235,
  [SMALL_STATE(84)] = 2253,
  [SMALL_STATE(85)] = 2273,
  [SMALL_STATE(86)] = 2295,
  [SMALL_STATE(87)] = 2315,
  [SMALL_STATE(88)] = 2333,
  [SMALL_STATE(89)] = 2351,
  [SMALL_STATE(90)] = 2369,
  [SMALL_STATE(91)] = 2387,
  [SMALL_STATE(92)] = 2405,
  [SMALL_STATE(93)] = 2423,
  [SMALL_STATE(94)] = 2443,
  [SMALL_STATE(95)] = 2461,
  [SMALL_STATE(96)] = 2481,
  [SMALL_STATE(97)] = 2501,
  [SMALL_STATE(98)] = 2521,
  [SMALL_STATE(99)] = 2541,
  [SMALL_STATE(100)] = 2559,
  [SMALL_STATE(101)] = 2575,
  [SMALL_STATE(102)] = 2593,
  [SMALL_STATE(103)] = 2611,
  [SMALL_STATE(104)] = 2629,
  [SMALL_STATE(105)] = 2647,
  [SMALL_STATE(106)] = 2665,
  [SMALL_STATE(107)] = 2683,
  [SMALL_STATE(108)] = 2701,
  [SMALL_STATE(109)] = 2719,
  [SMALL_STATE(110)] = 2737,
  [SMALL_STATE(111)] = 2757,
  [SMALL_STATE(112)] = 2775,
  [SMALL_STATE(113)] = 2789,
  [SMALL_STATE(114)] = 2807,
  [SMALL_STATE(115)] = 2821,
  [SMALL_STATE(116)] = 2839,
  [SMALL_STATE(117)] = 2857,
  [SMALL_STATE(118)] = 2879,
  [SMALL_STATE(119)] = 2897,
  [SMALL_STATE(120)] = 2919,
  [SMALL_STATE(121)] = 2937,
  [SMALL_STATE(122)] = 2955,
  [SMALL_STATE(123)] = 2973,
  [SMALL_STATE(124)] = 2993,
  [SMALL_STATE(125)] = 3013,
  [SMALL_STATE(126)] = 3033,
  [SMALL_STATE(127)] = 3053,
  [SMALL_STATE(128)] = 3073,
  [SMALL_STATE(129)] = 3093,
  [SMALL_STATE(130)] = 3111,
  [SMALL_STATE(131)] = 3129,
  [SMALL_STATE(132)] = 3147,
  [SMALL_STATE(133)] = 3165,
  [SMALL_STATE(134)] = 3185,
  [SMALL_STATE(135)] = 3203,
  [SMALL_STATE(136)] = 3223,
  [SMALL_STATE(137)] = 3243,
  [SMALL_STATE(138)] = 3263,
  [SMALL_STATE(139)] = 3283,
  [SMALL_STATE(140)] = 3303,
  [SMALL_STATE(141)] = 3321,
  [SMALL_STATE(142)] = 3339,
  [SMALL_STATE(143)] = 3357,
  [SMALL_STATE(144)] = 3375,
  [SMALL_STATE(145)] = 3393,
  [SMALL_STATE(146)] = 3411,
  [SMALL_STATE(147)] = 3429,
  [SMALL_STATE(148)] = 3447,
  [SMALL_STATE(149)] = 3463,
  [SMALL_STATE(150)] = 3481,
  [SMALL_STATE(151)] = 3499,
  [SMALL_STATE(152)] = 3517,
  [SMALL_STATE(153)] = 3535,
  [SMALL_STATE(154)] = 3551,
  [SMALL_STATE(155)] = 3573,
  [SMALL_STATE(156)] = 3593,
  [SMALL_STATE(157)] = 3612,
  [SMALL_STATE(158)] = 3631,
  [SMALL_STATE(159)] = 3650,
  [SMALL_STATE(160)] = 3669,
  [SMALL_STATE(161)] = 3686,
  [SMALL_STATE(162)] = 3705,
  [SMALL_STATE(163)] = 3724,
  [SMALL_STATE(164)] = 3743,
  [SMALL_STATE(165)] = 3760,
  [SMALL_STATE(166)] = 3779,
  [SMALL_STATE(167)] = 3796,
  [SMALL_STATE(168)] = 3815,
  [SMALL_STATE(169)] = 3834,
  [SMALL_STATE(170)] = 3851,
  [SMALL_STATE(171)] = 3868,
  [SMALL_STATE(172)] = 3881,
  [SMALL_STATE(173)] = 3894,
  [SMALL_STATE(174)] = 3913,
  [SMALL_STATE(175)] = 3930,
  [SMALL_STATE(176)] = 3945,
  [SMALL_STATE(177)] = 3962,
  [SMALL_STATE(178)] = 3979,
  [SMALL_STATE(179)] = 3994,
  [SMALL_STATE(180)] = 4007,
  [SMALL_STATE(181)] = 4024,
  [SMALL_STATE(182)] = 4041,
  [SMALL_STATE(183)] = 4060,
  [SMALL_STATE(184)] = 4079,
  [SMALL_STATE(185)] = 4098,
  [SMALL_STATE(186)] = 4117,
  [SMALL_STATE(187)] = 4134,
  [SMALL_STATE(188)] = 4151,
  [SMALL_STATE(189)] = 4170,
  [SMALL_STATE(190)] = 4189,
  [SMALL_STATE(191)] = 4208,
  [SMALL_STATE(192)] = 4221,
  [SMALL_STATE(193)] = 4240,
  [SMALL_STATE(194)] = 4257,
  [SMALL_STATE(195)] = 4276,
  [SMALL_STATE(196)] = 4295,
  [SMALL_STATE(197)] = 4304,
  [SMALL_STATE(198)] = 4321,
  [SMALL_STATE(199)] = 4330,
  [SMALL_STATE(200)] = 4349,
  [SMALL_STATE(201)] = 4364,
  [SMALL_STATE(202)] = 4373,
  [SMALL_STATE(203)] = 4392,
  [SMALL_STATE(204)] = 4411,
  [SMALL_STATE(205)] = 4430,
  [SMALL_STATE(206)] = 4449,
  [SMALL_STATE(207)] = 4466,
  [SMALL_STATE(208)] = 4485,
  [SMALL_STATE(209)] = 4500,
  [SMALL_STATE(210)] = 4517,
  [SMALL_STATE(211)] = 4534,
  [SMALL_STATE(212)] = 4549,
  [SMALL_STATE(213)] = 4566,
  [SMALL_STATE(214)] = 4581,
  [SMALL_STATE(215)] = 4598,
  [SMALL_STATE(216)] = 4611,
  [SMALL_STATE(217)] = 4630,
  [SMALL_STATE(218)] = 4649,
  [SMALL_STATE(219)] = 4666,
  [SMALL_STATE(220)] = 4685,
  [SMALL_STATE(221)] = 4698,
  [SMALL_STATE(222)] = 4717,
  [SMALL_STATE(223)] = 4736,
  [SMALL_STATE(224)] = 4750,
  [SMALL_STATE(225)] = 4758,
  [SMALL_STATE(226)] = 4766,
  [SMALL_STATE(227)] = 4780,
  [SMALL_STATE(228)] = 4794,
  [SMALL_STATE(229)] = 4802,
  [SMALL_STATE(230)] = 4816,
  [SMALL_STATE(231)] = 4824,
  [SMALL_STATE(232)] = 4838,
  [SMALL_STATE(233)] = 4846,
  [SMALL_STATE(234)] = 4854,
  [SMALL_STATE(235)] = 4862,
  [SMALL_STATE(236)] = 4870,
  [SMALL_STATE(237)] = 4878,
  [SMALL_STATE(238)] = 4886,
  [SMALL_STATE(239)] = 4894,
  [SMALL_STATE(240)] = 4902,
  [SMALL_STATE(241)] = 4910,
  [SMALL_STATE(242)] = 4918,
  [SMALL_STATE(243)] = 4932,
  [SMALL_STATE(244)] = 4946,
  [SMALL_STATE(245)] = 4960,
  [SMALL_STATE(246)] = 4968,
  [SMALL_STATE(247)] = 4984,
  [SMALL_STATE(248)] = 4992,
  [SMALL_STATE(249)] = 5000,
  [SMALL_STATE(250)] = 5008,
  [SMALL_STATE(251)] = 5016,
  [SMALL_STATE(252)] = 5024,
  [SMALL_STATE(253)] = 5032,
  [SMALL_STATE(254)] = 5040,
  [SMALL_STATE(255)] = 5048,
  [SMALL_STATE(256)] = 5056,
  [SMALL_STATE(257)] = 5064,
  [SMALL_STATE(258)] = 5072,
  [SMALL_STATE(259)] = 5080,
  [SMALL_STATE(260)] = 5088,
  [SMALL_STATE(261)] = 5096,
  [SMALL_STATE(262)] = 5104,
  [SMALL_STATE(263)] = 5112,
  [SMALL_STATE(264)] = 5120,
  [SMALL_STATE(265)] = 5128,
  [SMALL_STATE(266)] = 5136,
  [SMALL_STATE(267)] = 5144,
  [SMALL_STATE(268)] = 5152,
  [SMALL_STATE(269)] = 5160,
  [SMALL_STATE(270)] = 5176,
  [SMALL_STATE(271)] = 5190,
  [SMALL_STATE(272)] = 5198,
  [SMALL_STATE(273)] = 5206,
  [SMALL_STATE(274)] = 5214,
  [SMALL_STATE(275)] = 5222,
  [SMALL_STATE(276)] = 5230,
  [SMALL_STATE(277)] = 5238,
  [SMALL_STATE(278)] = 5246,
  [SMALL_STATE(279)] = 5254,
  [SMALL_STATE(280)] = 5262,
  [SMALL_STATE(281)] = 5270,
  [SMALL_STATE(282)] = 5278,
  [SMALL_STATE(283)] = 5286,
  [SMALL_STATE(284)] = 5294,
  [SMALL_STATE(285)] = 5302,
  [SMALL_STATE(286)] = 5310,
  [SMALL_STATE(287)] = 5318,
  [SMALL_STATE(288)] = 5326,
  [SMALL_STATE(289)] = 5334,
  [SMALL_STATE(290)] = 5342,
  [SMALL_STATE(291)] = 5350,
  [SMALL_STATE(292)] = 5358,
  [SMALL_STATE(293)] = 5366,
  [SMALL_STATE(294)] = 5374,
  [SMALL_STATE(295)] = 5382,
  [SMALL_STATE(296)] = 5390,
  [SMALL_STATE(297)] = 5398,
  [SMALL_STATE(298)] = 5406,
  [SMALL_STATE(299)] = 5414,
  [SMALL_STATE(300)] = 5422,
  [SMALL_STATE(301)] = 5430,
  [SMALL_STATE(302)] = 5438,
  [SMALL_STATE(303)] = 5446,
  [SMALL_STATE(304)] = 5454,
  [SMALL_STATE(305)] = 5462,
  [SMALL_STATE(306)] = 5470,
  [SMALL_STATE(307)] = 5478,
  [SMALL_STATE(308)] = 5486,
  [SMALL_STATE(309)] = 5494,
  [SMALL_STATE(310)] = 5502,
  [SMALL_STATE(311)] = 5510,
  [SMALL_STATE(312)] = 5518,
  [SMALL_STATE(313)] = 5526,
  [SMALL_STATE(314)] = 5534,
  [SMALL_STATE(315)] = 5542,
  [SMALL_STATE(316)] = 5550,
  [SMALL_STATE(317)] = 5558,
  [SMALL_STATE(318)] = 5566,
  [SMALL_STATE(319)] = 5574,
  [SMALL_STATE(320)] = 5582,
  [SMALL_STATE(321)] = 5590,
  [SMALL_STATE(322)] = 5598,
  [SMALL_STATE(323)] = 5606,
  [SMALL_STATE(324)] = 5614,
  [SMALL_STATE(325)] = 5622,
  [SMALL_STATE(326)] = 5630,
  [SMALL_STATE(327)] = 5638,
  [SMALL_STATE(328)] = 5646,
  [SMALL_STATE(329)] = 5654,
  [SMALL_STATE(330)] = 5662,
  [SMALL_STATE(331)] = 5670,
  [SMALL_STATE(332)] = 5684,
  [SMALL_STATE(333)] = 5700,
  [SMALL_STATE(334)] = 5708,
  [SMALL_STATE(335)] = 5716,
  [SMALL_STATE(336)] = 5724,
  [SMALL_STATE(337)] = 5732,
  [SMALL_STATE(338)] = 5740,
  [SMALL_STATE(339)] = 5748,
  [SMALL_STATE(340)] = 5756,
  [SMALL_STATE(341)] = 5764,
  [SMALL_STATE(342)] = 5772,
  [SMALL_STATE(343)] = 5780,
  [SMALL_STATE(344)] = 5788,
  [SMALL_STATE(345)] = 5796,
  [SMALL_STATE(346)] = 5804,
  [SMALL_STATE(347)] = 5812,
  [SMALL_STATE(348)] = 5820,
  [SMALL_STATE(349)] = 5828,
  [SMALL_STATE(350)] = 5836,
  [SMALL_STATE(351)] = 5844,
  [SMALL_STATE(352)] = 5852,
  [SMALL_STATE(353)] = 5860,
  [SMALL_STATE(354)] = 5868,
  [SMALL_STATE(355)] = 5876,
  [SMALL_STATE(356)] = 5884,
  [SMALL_STATE(357)] = 5892,
  [SMALL_STATE(358)] = 5906,
  [SMALL_STATE(359)] = 5920,
  [SMALL_STATE(360)] = 5934,
  [SMALL_STATE(361)] = 5950,
  [SMALL_STATE(362)] = 5958,
  [SMALL_STATE(363)] = 5966,
  [SMALL_STATE(364)] = 5980,
  [SMALL_STATE(365)] = 5994,
  [SMALL_STATE(366)] = 6008,
  [SMALL_STATE(367)] = 6024,
  [SMALL_STATE(368)] = 6038,
  [SMALL_STATE(369)] = 6052,
  [SMALL_STATE(370)] = 6066,
  [SMALL_STATE(371)] = 6082,
  [SMALL_STATE(372)] = 6098,
  [SMALL_STATE(373)] = 6112,
  [SMALL_STATE(374)] = 6126,
  [SMALL_STATE(375)] = 6140,
  [SMALL_STATE(376)] = 6148,
  [SMALL_STATE(377)] = 6164,
  [SMALL_STATE(378)] = 6178,
  [SMALL_STATE(379)] = 6194,
  [SMALL_STATE(380)] = 6208,
  [SMALL_STATE(381)] = 6224,
  [SMALL_STATE(382)] = 6240,
  [SMALL_STATE(383)] = 6256,
  [SMALL_STATE(384)] = 6270,
  [SMALL_STATE(385)] = 6286,
  [SMALL_STATE(386)] = 6302,
  [SMALL_STATE(387)] = 6318,
  [SMALL_STATE(388)] = 6332,
  [SMALL_STATE(389)] = 6346,
  [SMALL_STATE(390)] = 6360,
  [SMALL_STATE(391)] = 6374,
  [SMALL_STATE(392)] = 6388,
  [SMALL_STATE(393)] = 6404,
  [SMALL_STATE(394)] = 6420,
  [SMALL_STATE(395)] = 6434,
  [SMALL_STATE(396)] = 6448,
  [SMALL_STATE(397)] = 6462,
  [SMALL_STATE(398)] = 6478,
  [SMALL_STATE(399)] = 6492,
  [SMALL_STATE(400)] = 6506,
  [SMALL_STATE(401)] = 6520,
  [SMALL_STATE(402)] = 6534,
  [SMALL_STATE(403)] = 6548,
  [SMALL_STATE(404)] = 6556,
  [SMALL_STATE(405)] = 6570,
  [SMALL_STATE(406)] = 6584,
  [SMALL_STATE(407)] = 6598,
  [SMALL_STATE(408)] = 6612,
  [SMALL_STATE(409)] = 6626,
  [SMALL_STATE(410)] = 6640,
  [SMALL_STATE(411)] = 6654,
  [SMALL_STATE(412)] = 6668,
  [SMALL_STATE(413)] = 6682,
  [SMALL_STATE(414)] = 6696,
  [SMALL_STATE(415)] = 6710,
  [SMALL_STATE(416)] = 6724,
  [SMALL_STATE(417)] = 6738,
  [SMALL_STATE(418)] = 6752,
  [SMALL_STATE(419)] = 6766,
  [SMALL_STATE(420)] = 6780,
  [SMALL_STATE(421)] = 6794,
  [SMALL_STATE(422)] = 6808,
  [SMALL_STATE(423)] = 6822,
  [SMALL_STATE(424)] = 6836,
  [SMALL_STATE(425)] = 6850,
  [SMALL_STATE(426)] = 6864,
  [SMALL_STATE(427)] = 6878,
  [SMALL_STATE(428)] = 6892,
  [SMALL_STATE(429)] = 6906,
  [SMALL_STATE(430)] = 6920,
  [SMALL_STATE(431)] = 6934,
  [SMALL_STATE(432)] = 6948,
  [SMALL_STATE(433)] = 6962,
  [SMALL_STATE(434)] = 6976,
  [SMALL_STATE(435)] = 6990,
  [SMALL_STATE(436)] = 7004,
  [SMALL_STATE(437)] = 7018,
  [SMALL_STATE(438)] = 7032,
  [SMALL_STATE(439)] = 7046,
  [SMALL_STATE(440)] = 7062,
  [SMALL_STATE(441)] = 7076,
  [SMALL_STATE(442)] = 7092,
  [SMALL_STATE(443)] = 7108,
  [SMALL_STATE(444)] = 7116,
  [SMALL_STATE(445)] = 7130,
  [SMALL_STATE(446)] = 7144,
  [SMALL_STATE(447)] = 7158,
  [SMALL_STATE(448)] = 7174,
  [SMALL_STATE(449)] = 7188,
  [SMALL_STATE(450)] = 7204,
  [SMALL_STATE(451)] = 7218,
  [SMALL_STATE(452)] = 7234,
  [SMALL_STATE(453)] = 7248,
  [SMALL_STATE(454)] = 7264,
  [SMALL_STATE(455)] = 7278,
  [SMALL_STATE(456)] = 7294,
  [SMALL_STATE(457)] = 7310,
  [SMALL_STATE(458)] = 7326,
  [SMALL_STATE(459)] = 7340,
  [SMALL_STATE(460)] = 7356,
  [SMALL_STATE(461)] = 7370,
  [SMALL_STATE(462)] = 7384,
  [SMALL_STATE(463)] = 7398,
  [SMALL_STATE(464)] = 7414,
  [SMALL_STATE(465)] = 7430,
  [SMALL_STATE(466)] = 7444,
  [SMALL_STATE(467)] = 7458,
  [SMALL_STATE(468)] = 7472,
  [SMALL_STATE(469)] = 7488,
  [SMALL_STATE(470)] = 7502,
  [SMALL_STATE(471)] = 7516,
  [SMALL_STATE(472)] = 7530,
  [SMALL_STATE(473)] = 7544,
  [SMALL_STATE(474)] = 7558,
  [SMALL_STATE(475)] = 7572,
  [SMALL_STATE(476)] = 7586,
  [SMALL_STATE(477)] = 7600,
  [SMALL_STATE(478)] = 7614,
  [SMALL_STATE(479)] = 7628,
  [SMALL_STATE(480)] = 7642,
  [SMALL_STATE(481)] = 7656,
  [SMALL_STATE(482)] = 7670,
  [SMALL_STATE(483)] = 7684,
  [SMALL_STATE(484)] = 7698,
  [SMALL_STATE(485)] = 7712,
  [SMALL_STATE(486)] = 7726,
  [SMALL_STATE(487)] = 7740,
  [SMALL_STATE(488)] = 7754,
  [SMALL_STATE(489)] = 7768,
  [SMALL_STATE(490)] = 7782,
  [SMALL_STATE(491)] = 7796,
  [SMALL_STATE(492)] = 7810,
  [SMALL_STATE(493)] = 7824,
  [SMALL_STATE(494)] = 7838,
  [SMALL_STATE(495)] = 7852,
  [SMALL_STATE(496)] = 7866,
  [SMALL_STATE(497)] = 7880,
  [SMALL_STATE(498)] = 7894,
  [SMALL_STATE(499)] = 7908,
  [SMALL_STATE(500)] = 7922,
  [SMALL_STATE(501)] = 7936,
  [SMALL_STATE(502)] = 7950,
  [SMALL_STATE(503)] = 7964,
  [SMALL_STATE(504)] = 7978,
  [SMALL_STATE(505)] = 7992,
  [SMALL_STATE(506)] = 8006,
  [SMALL_STATE(507)] = 8022,
  [SMALL_STATE(508)] = 8038,
  [SMALL_STATE(509)] = 8052,
  [SMALL_STATE(510)] = 8066,
  [SMALL_STATE(511)] = 8074,
  [SMALL_STATE(512)] = 8088,
  [SMALL_STATE(513)] = 8096,
  [SMALL_STATE(514)] = 8110,
  [SMALL_STATE(515)] = 8118,
  [SMALL_STATE(516)] = 8132,
  [SMALL_STATE(517)] = 8140,
  [SMALL_STATE(518)] = 8156,
  [SMALL_STATE(519)] = 8172,
  [SMALL_STATE(520)] = 8186,
  [SMALL_STATE(521)] = 8200,
  [SMALL_STATE(522)] = 8214,
  [SMALL_STATE(523)] = 8228,
  [SMALL_STATE(524)] = 8242,
  [SMALL_STATE(525)] = 8256,
  [SMALL_STATE(526)] = 8264,
  [SMALL_STATE(527)] = 8272,
  [SMALL_STATE(528)] = 8286,
  [SMALL_STATE(529)] = 8300,
  [SMALL_STATE(530)] = 8314,
  [SMALL_STATE(531)] = 8328,
  [SMALL_STATE(532)] = 8342,
  [SMALL_STATE(533)] = 8356,
  [SMALL_STATE(534)] = 8370,
  [SMALL_STATE(535)] = 8384,
  [SMALL_STATE(536)] = 8398,
  [SMALL_STATE(537)] = 8412,
  [SMALL_STATE(538)] = 8426,
  [SMALL_STATE(539)] = 8440,
  [SMALL_STATE(540)] = 8454,
  [SMALL_STATE(541)] = 8468,
  [SMALL_STATE(542)] = 8482,
  [SMALL_STATE(543)] = 8490,
  [SMALL_STATE(544)] = 8498,
  [SMALL_STATE(545)] = 8506,
  [SMALL_STATE(546)] = 8514,
  [SMALL_STATE(547)] = 8528,
  [SMALL_STATE(548)] = 8535,
  [SMALL_STATE(549)] = 8542,
  [SMALL_STATE(550)] = 8549,
  [SMALL_STATE(551)] = 8556,
  [SMALL_STATE(552)] = 8563,
  [SMALL_STATE(553)] = 8570,
  [SMALL_STATE(554)] = 8577,
  [SMALL_STATE(555)] = 8584,
  [SMALL_STATE(556)] = 8591,
  [SMALL_STATE(557)] = 8598,
  [SMALL_STATE(558)] = 8605,
  [SMALL_STATE(559)] = 8616,
  [SMALL_STATE(560)] = 8623,
  [SMALL_STATE(561)] = 8630,
  [SMALL_STATE(562)] = 8637,
  [SMALL_STATE(563)] = 8648,
  [SMALL_STATE(564)] = 8655,
  [SMALL_STATE(565)] = 8662,
  [SMALL_STATE(566)] = 8669,
  [SMALL_STATE(567)] = 8676,
  [SMALL_STATE(568)] = 8683,
  [SMALL_STATE(569)] = 8690,
  [SMALL_STATE(570)] = 8697,
  [SMALL_STATE(571)] = 8704,
  [SMALL_STATE(572)] = 8711,
  [SMALL_STATE(573)] = 8718,
  [SMALL_STATE(574)] = 8725,
  [SMALL_STATE(575)] = 8732,
  [SMALL_STATE(576)] = 8739,
  [SMALL_STATE(577)] = 8746,
  [SMALL_STATE(578)] = 8753,
  [SMALL_STATE(579)] = 8760,
  [SMALL_STATE(580)] = 8767,
  [SMALL_STATE(581)] = 8774,
  [SMALL_STATE(582)] = 8781,
  [SMALL_STATE(583)] = 8788,
  [SMALL_STATE(584)] = 8795,
  [SMALL_STATE(585)] = 8802,
  [SMALL_STATE(586)] = 8809,
  [SMALL_STATE(587)] = 8816,
  [SMALL_STATE(588)] = 8829,
  [SMALL_STATE(589)] = 8840,
  [SMALL_STATE(590)] = 8851,
  [SMALL_STATE(591)] = 8858,
  [SMALL_STATE(592)] = 8865,
  [SMALL_STATE(593)] = 8872,
  [SMALL_STATE(594)] = 8879,
  [SMALL_STATE(595)] = 8886,
  [SMALL_STATE(596)] = 8893,
  [SMALL_STATE(597)] = 8900,
  [SMALL_STATE(598)] = 8907,
  [SMALL_STATE(599)] = 8918,
  [SMALL_STATE(600)] = 8925,
  [SMALL_STATE(601)] = 8936,
  [SMALL_STATE(602)] = 8943,
  [SMALL_STATE(603)] = 8950,
  [SMALL_STATE(604)] = 8957,
  [SMALL_STATE(605)] = 8964,
  [SMALL_STATE(606)] = 8971,
  [SMALL_STATE(607)] = 8978,
  [SMALL_STATE(608)] = 8985,
  [SMALL_STATE(609)] = 8992,
  [SMALL_STATE(610)] = 8999,
  [SMALL_STATE(611)] = 9006,
  [SMALL_STATE(612)] = 9013,
  [SMALL_STATE(613)] = 9026,
  [SMALL_STATE(614)] = 9033,
  [SMALL_STATE(615)] = 9046,
  [SMALL_STATE(616)] = 9053,
  [SMALL_STATE(617)] = 9060,
  [SMALL_STATE(618)] = 9071,
  [SMALL_STATE(619)] = 9082,
  [SMALL_STATE(620)] = 9089,
  [SMALL_STATE(621)] = 9096,
  [SMALL_STATE(622)] = 9103,
  [SMALL_STATE(623)] = 9110,
  [SMALL_STATE(624)] = 9123,
  [SMALL_STATE(625)] = 9130,
  [SMALL_STATE(626)] = 9141,
  [SMALL_STATE(627)] = 9148,
  [SMALL_STATE(628)] = 9155,
  [SMALL_STATE(629)] = 9162,
  [SMALL_STATE(630)] = 9169,
  [SMALL_STATE(631)] = 9176,
  [SMALL_STATE(632)] = 9183,
  [SMALL_STATE(633)] = 9190,
  [SMALL_STATE(634)] = 9197,
  [SMALL_STATE(635)] = 9210,
  [SMALL_STATE(636)] = 9217,
  [SMALL_STATE(637)] = 9224,
  [SMALL_STATE(638)] = 9231,
  [SMALL_STATE(639)] = 9244,
  [SMALL_STATE(640)] = 9251,
  [SMALL_STATE(641)] = 9258,
  [SMALL_STATE(642)] = 9265,
  [SMALL_STATE(643)] = 9272,
  [SMALL_STATE(644)] = 9279,
  [SMALL_STATE(645)] = 9286,
  [SMALL_STATE(646)] = 9293,
  [SMALL_STATE(647)] = 9300,
  [SMALL_STATE(648)] = 9307,
  [SMALL_STATE(649)] = 9314,
  [SMALL_STATE(650)] = 9321,
  [SMALL_STATE(651)] = 9328,
  [SMALL_STATE(652)] = 9335,
  [SMALL_STATE(653)] = 9342,
  [SMALL_STATE(654)] = 9349,
  [SMALL_STATE(655)] = 9356,
  [SMALL_STATE(656)] = 9363,
  [SMALL_STATE(657)] = 9370,
  [SMALL_STATE(658)] = 9377,
  [SMALL_STATE(659)] = 9384,
  [SMALL_STATE(660)] = 9391,
  [SMALL_STATE(661)] = 9398,
  [SMALL_STATE(662)] = 9405,
  [SMALL_STATE(663)] = 9414,
  [SMALL_STATE(664)] = 9421,
  [SMALL_STATE(665)] = 9428,
  [SMALL_STATE(666)] = 9435,
  [SMALL_STATE(667)] = 9442,
  [SMALL_STATE(668)] = 9449,
  [SMALL_STATE(669)] = 9456,
  [SMALL_STATE(670)] = 9463,
  [SMALL_STATE(671)] = 9470,
  [SMALL_STATE(672)] = 9477,
  [SMALL_STATE(673)] = 9484,
  [SMALL_STATE(674)] = 9491,
  [SMALL_STATE(675)] = 9500,
  [SMALL_STATE(676)] = 9507,
  [SMALL_STATE(677)] = 9514,
  [SMALL_STATE(678)] = 9527,
  [SMALL_STATE(679)] = 9540,
  [SMALL_STATE(680)] = 9547,
  [SMALL_STATE(681)] = 9554,
  [SMALL_STATE(682)] = 9561,
  [SMALL_STATE(683)] = 9568,
  [SMALL_STATE(684)] = 9575,
  [SMALL_STATE(685)] = 9588,
  [SMALL_STATE(686)] = 9595,
  [SMALL_STATE(687)] = 9602,
  [SMALL_STATE(688)] = 9609,
  [SMALL_STATE(689)] = 9616,
  [SMALL_STATE(690)] = 9623,
  [SMALL_STATE(691)] = 9630,
  [SMALL_STATE(692)] = 9637,
  [SMALL_STATE(693)] = 9644,
  [SMALL_STATE(694)] = 9651,
  [SMALL_STATE(695)] = 9658,
  [SMALL_STATE(696)] = 9671,
  [SMALL_STATE(697)] = 9678,
  [SMALL_STATE(698)] = 9685,
  [SMALL_STATE(699)] = 9692,
  [SMALL_STATE(700)] = 9699,
  [SMALL_STATE(701)] = 9706,
  [SMALL_STATE(702)] = 9713,
  [SMALL_STATE(703)] = 9720,
  [SMALL_STATE(704)] = 9727,
  [SMALL_STATE(705)] = 9734,
  [SMALL_STATE(706)] = 9741,
  [SMALL_STATE(707)] = 9748,
  [SMALL_STATE(708)] = 9759,
  [SMALL_STATE(709)] = 9766,
  [SMALL_STATE(710)] = 9773,
  [SMALL_STATE(711)] = 9780,
  [SMALL_STATE(712)] = 9787,
  [SMALL_STATE(713)] = 9800,
  [SMALL_STATE(714)] = 9807,
  [SMALL_STATE(715)] = 9814,
  [SMALL_STATE(716)] = 9825,
  [SMALL_STATE(717)] = 9832,
  [SMALL_STATE(718)] = 9839,
  [SMALL_STATE(719)] = 9846,
  [SMALL_STATE(720)] = 9853,
  [SMALL_STATE(721)] = 9860,
  [SMALL_STATE(722)] = 9867,
  [SMALL_STATE(723)] = 9874,
  [SMALL_STATE(724)] = 9881,
  [SMALL_STATE(725)] = 9888,
  [SMALL_STATE(726)] = 9895,
  [SMALL_STATE(727)] = 9902,
  [SMALL_STATE(728)] = 9909,
  [SMALL_STATE(729)] = 9916,
  [SMALL_STATE(730)] = 9923,
  [SMALL_STATE(731)] = 9930,
  [SMALL_STATE(732)] = 9937,
  [SMALL_STATE(733)] = 9944,
  [SMALL_STATE(734)] = 9951,
  [SMALL_STATE(735)] = 9958,
  [SMALL_STATE(736)] = 9965,
  [SMALL_STATE(737)] = 9972,
  [SMALL_STATE(738)] = 9985,
  [SMALL_STATE(739)] = 9992,
  [SMALL_STATE(740)] = 9999,
  [SMALL_STATE(741)] = 10008,
  [SMALL_STATE(742)] = 10015,
  [SMALL_STATE(743)] = 10022,
  [SMALL_STATE(744)] = 10035,
  [SMALL_STATE(745)] = 10042,
  [SMALL_STATE(746)] = 10049,
  [SMALL_STATE(747)] = 10062,
  [SMALL_STATE(748)] = 10069,
  [SMALL_STATE(749)] = 10076,
  [SMALL_STATE(750)] = 10087,
  [SMALL_STATE(751)] = 10094,
  [SMALL_STATE(752)] = 10101,
  [SMALL_STATE(753)] = 10108,
  [SMALL_STATE(754)] = 10115,
  [SMALL_STATE(755)] = 10122,
  [SMALL_STATE(756)] = 10129,
  [SMALL_STATE(757)] = 10136,
  [SMALL_STATE(758)] = 10143,
  [SMALL_STATE(759)] = 10156,
  [SMALL_STATE(760)] = 10163,
  [SMALL_STATE(761)] = 10170,
  [SMALL_STATE(762)] = 10183,
  [SMALL_STATE(763)] = 10196,
  [SMALL_STATE(764)] = 10203,
  [SMALL_STATE(765)] = 10210,
  [SMALL_STATE(766)] = 10217,
  [SMALL_STATE(767)] = 10224,
  [SMALL_STATE(768)] = 10231,
  [SMALL_STATE(769)] = 10238,
  [SMALL_STATE(770)] = 10251,
  [SMALL_STATE(771)] = 10258,
  [SMALL_STATE(772)] = 10265,
  [SMALL_STATE(773)] = 10272,
  [SMALL_STATE(774)] = 10279,
  [SMALL_STATE(775)] = 10286,
  [SMALL_STATE(776)] = 10293,
  [SMALL_STATE(777)] = 10300,
  [SMALL_STATE(778)] = 10307,
  [SMALL_STATE(779)] = 10314,
  [SMALL_STATE(780)] = 10321,
  [SMALL_STATE(781)] = 10328,
  [SMALL_STATE(782)] = 10335,
  [SMALL_STATE(783)] = 10342,
  [SMALL_STATE(784)] = 10349,
  [SMALL_STATE(785)] = 10356,
  [SMALL_STATE(786)] = 10363,
  [SMALL_STATE(787)] = 10376,
  [SMALL_STATE(788)] = 10383,
  [SMALL_STATE(789)] = 10390,
  [SMALL_STATE(790)] = 10397,
  [SMALL_STATE(791)] = 10406,
  [SMALL_STATE(792)] = 10413,
  [SMALL_STATE(793)] = 10420,
  [SMALL_STATE(794)] = 10427,
  [SMALL_STATE(795)] = 10434,
  [SMALL_STATE(796)] = 10441,
  [SMALL_STATE(797)] = 10448,
  [SMALL_STATE(798)] = 10455,
  [SMALL_STATE(799)] = 10462,
  [SMALL_STATE(800)] = 10469,
  [SMALL_STATE(801)] = 10476,
  [SMALL_STATE(802)] = 10483,
  [SMALL_STATE(803)] = 10490,
  [SMALL_STATE(804)] = 10497,
  [SMALL_STATE(805)] = 10504,
  [SMALL_STATE(806)] = 10511,
  [SMALL_STATE(807)] = 10518,
  [SMALL_STATE(808)] = 10525,
  [SMALL_STATE(809)] = 10532,
  [SMALL_STATE(810)] = 10539,
  [SMALL_STATE(811)] = 10546,
  [SMALL_STATE(812)] = 10553,
  [SMALL_STATE(813)] = 10560,
  [SMALL_STATE(814)] = 10567,
  [SMALL_STATE(815)] = 10574,
  [SMALL_STATE(816)] = 10581,
  [SMALL_STATE(817)] = 10588,
  [SMALL_STATE(818)] = 10595,
  [SMALL_STATE(819)] = 10602,
  [SMALL_STATE(820)] = 10609,
  [SMALL_STATE(821)] = 10616,
  [SMALL_STATE(822)] = 10623,
  [SMALL_STATE(823)] = 10630,
  [SMALL_STATE(824)] = 10637,
  [SMALL_STATE(825)] = 10644,
  [SMALL_STATE(826)] = 10651,
  [SMALL_STATE(827)] = 10658,
  [SMALL_STATE(828)] = 10665,
  [SMALL_STATE(829)] = 10672,
  [SMALL_STATE(830)] = 10679,
  [SMALL_STATE(831)] = 10686,
  [SMALL_STATE(832)] = 10693,
  [SMALL_STATE(833)] = 10706,
  [SMALL_STATE(834)] = 10713,
  [SMALL_STATE(835)] = 10720,
  [SMALL_STATE(836)] = 10727,
  [SMALL_STATE(837)] = 10740,
  [SMALL_STATE(838)] = 10747,
  [SMALL_STATE(839)] = 10754,
  [SMALL_STATE(840)] = 10761,
  [SMALL_STATE(841)] = 10768,
  [SMALL_STATE(842)] = 10775,
  [SMALL_STATE(843)] = 10782,
  [SMALL_STATE(844)] = 10789,
  [SMALL_STATE(845)] = 10796,
  [SMALL_STATE(846)] = 10807,
  [SMALL_STATE(847)] = 10818,
  [SMALL_STATE(848)] = 10825,
  [SMALL_STATE(849)] = 10836,
  [SMALL_STATE(850)] = 10847,
  [SMALL_STATE(851)] = 10854,
  [SMALL_STATE(852)] = 10863,
  [SMALL_STATE(853)] = 10870,
  [SMALL_STATE(854)] = 10883,
  [SMALL_STATE(855)] = 10894,
  [SMALL_STATE(856)] = 10905,
  [SMALL_STATE(857)] = 10912,
  [SMALL_STATE(858)] = 10923,
  [SMALL_STATE(859)] = 10934,
  [SMALL_STATE(860)] = 10941,
  [SMALL_STATE(861)] = 10954,
  [SMALL_STATE(862)] = 10965,
  [SMALL_STATE(863)] = 10976,
  [SMALL_STATE(864)] = 10987,
  [SMALL_STATE(865)] = 10998,
  [SMALL_STATE(866)] = 11007,
  [SMALL_STATE(867)] = 11018,
  [SMALL_STATE(868)] = 11031,
  [SMALL_STATE(869)] = 11038,
  [SMALL_STATE(870)] = 11045,
  [SMALL_STATE(871)] = 11052,
  [SMALL_STATE(872)] = 11065,
  [SMALL_STATE(873)] = 11072,
  [SMALL_STATE(874)] = 11079,
  [SMALL_STATE(875)] = 11086,
  [SMALL_STATE(876)] = 11093,
  [SMALL_STATE(877)] = 11100,
  [SMALL_STATE(878)] = 11107,
  [SMALL_STATE(879)] = 11114,
  [SMALL_STATE(880)] = 11121,
  [SMALL_STATE(881)] = 11128,
  [SMALL_STATE(882)] = 11135,
  [SMALL_STATE(883)] = 11142,
  [SMALL_STATE(884)] = 11149,
  [SMALL_STATE(885)] = 11156,
  [SMALL_STATE(886)] = 11163,
  [SMALL_STATE(887)] = 11170,
  [SMALL_STATE(888)] = 11177,
  [SMALL_STATE(889)] = 11184,
  [SMALL_STATE(890)] = 11195,
  [SMALL_STATE(891)] = 11206,
  [SMALL_STATE(892)] = 11213,
  [SMALL_STATE(893)] = 11220,
  [SMALL_STATE(894)] = 11227,
  [SMALL_STATE(895)] = 11234,
  [SMALL_STATE(896)] = 11241,
  [SMALL_STATE(897)] = 11251,
  [SMALL_STATE(898)] = 11261,
  [SMALL_STATE(899)] = 11267,
  [SMALL_STATE(900)] = 11275,
  [SMALL_STATE(901)] = 11285,
  [SMALL_STATE(902)] = 11293,
  [SMALL_STATE(903)] = 11299,
  [SMALL_STATE(904)] = 11305,
  [SMALL_STATE(905)] = 11311,
  [SMALL_STATE(906)] = 11317,
  [SMALL_STATE(907)] = 11323,
  [SMALL_STATE(908)] = 11329,
  [SMALL_STATE(909)] = 11335,
  [SMALL_STATE(910)] = 11341,
  [SMALL_STATE(911)] = 11347,
  [SMALL_STATE(912)] = 11353,
  [SMALL_STATE(913)] = 11359,
  [SMALL_STATE(914)] = 11365,
  [SMALL_STATE(915)] = 11371,
  [SMALL_STATE(916)] = 11381,
  [SMALL_STATE(917)] = 11391,
  [SMALL_STATE(918)] = 11401,
  [SMALL_STATE(919)] = 11411,
  [SMALL_STATE(920)] = 11421,
  [SMALL_STATE(921)] = 11431,
  [SMALL_STATE(922)] = 11441,
  [SMALL_STATE(923)] = 11447,
  [SMALL_STATE(924)] = 11457,
  [SMALL_STATE(925)] = 11467,
  [SMALL_STATE(926)] = 11477,
  [SMALL_STATE(927)] = 11487,
  [SMALL_STATE(928)] = 11497,
  [SMALL_STATE(929)] = 11507,
  [SMALL_STATE(930)] = 11517,
  [SMALL_STATE(931)] = 11527,
  [SMALL_STATE(932)] = 11537,
  [SMALL_STATE(933)] = 11547,
  [SMALL_STATE(934)] = 11557,
  [SMALL_STATE(935)] = 11567,
  [SMALL_STATE(936)] = 11577,
  [SMALL_STATE(937)] = 11587,
  [SMALL_STATE(938)] = 11597,
  [SMALL_STATE(939)] = 11607,
  [SMALL_STATE(940)] = 11617,
  [SMALL_STATE(941)] = 11627,
  [SMALL_STATE(942)] = 11637,
  [SMALL_STATE(943)] = 11645,
  [SMALL_STATE(944)] = 11655,
  [SMALL_STATE(945)] = 11665,
  [SMALL_STATE(946)] = 11675,
  [SMALL_STATE(947)] = 11685,
  [SMALL_STATE(948)] = 11695,
  [SMALL_STATE(949)] = 11705,
  [SMALL_STATE(950)] = 11715,
  [SMALL_STATE(951)] = 11725,
  [SMALL_STATE(952)] = 11735,
  [SMALL_STATE(953)] = 11745,
  [SMALL_STATE(954)] = 11755,
  [SMALL_STATE(955)] = 11765,
  [SMALL_STATE(956)] = 11775,
  [SMALL_STATE(957)] = 11785,
  [SMALL_STATE(958)] = 11795,
  [SMALL_STATE(959)] = 11805,
  [SMALL_STATE(960)] = 11815,
  [SMALL_STATE(961)] = 11825,
  [SMALL_STATE(962)] = 11835,
  [SMALL_STATE(963)] = 11841,
  [SMALL_STATE(964)] = 11851,
  [SMALL_STATE(965)] = 11861,
  [SMALL_STATE(966)] = 11867,
  [SMALL_STATE(967)] = 11873,
  [SMALL_STATE(968)] = 11883,
  [SMALL_STATE(969)] = 11893,
  [SMALL_STATE(970)] = 11903,
  [SMALL_STATE(971)] = 11909,
  [SMALL_STATE(972)] = 11919,
  [SMALL_STATE(973)] = 11929,
  [SMALL_STATE(974)] = 11939,
  [SMALL_STATE(975)] = 11949,
  [SMALL_STATE(976)] = 11959,
  [SMALL_STATE(977)] = 11969,
  [SMALL_STATE(978)] = 11975,
  [SMALL_STATE(979)] = 11985,
  [SMALL_STATE(980)] = 11995,
  [SMALL_STATE(981)] = 12001,
  [SMALL_STATE(982)] = 12007,
  [SMALL_STATE(983)] = 12013,
  [SMALL_STATE(984)] = 12019,
  [SMALL_STATE(985)] = 12027,
  [SMALL_STATE(986)] = 12033,
  [SMALL_STATE(987)] = 12043,
  [SMALL_STATE(988)] = 12049,
  [SMALL_STATE(989)] = 12059,
  [SMALL_STATE(990)] = 12065,
  [SMALL_STATE(991)] = 12075,
  [SMALL_STATE(992)] = 12085,
  [SMALL_STATE(993)] = 12095,
  [SMALL_STATE(994)] = 12105,
  [SMALL_STATE(995)] = 12115,
  [SMALL_STATE(996)] = 12125,
  [SMALL_STATE(997)] = 12135,
  [SMALL_STATE(998)] = 12141,
  [SMALL_STATE(999)] = 12151,
  [SMALL_STATE(1000)] = 12157,
  [SMALL_STATE(1001)] = 12167,
  [SMALL_STATE(1002)] = 12177,
  [SMALL_STATE(1003)] = 12187,
  [SMALL_STATE(1004)] = 12197,
  [SMALL_STATE(1005)] = 12207,
  [SMALL_STATE(1006)] = 12217,
  [SMALL_STATE(1007)] = 12227,
  [SMALL_STATE(1008)] = 12237,
  [SMALL_STATE(1009)] = 12247,
  [SMALL_STATE(1010)] = 12257,
  [SMALL_STATE(1011)] = 12267,
  [SMALL_STATE(1012)] = 12277,
  [SMALL_STATE(1013)] = 12283,
  [SMALL_STATE(1014)] = 12293,
  [SMALL_STATE(1015)] = 12301,
  [SMALL_STATE(1016)] = 12311,
  [SMALL_STATE(1017)] = 12321,
  [SMALL_STATE(1018)] = 12331,
  [SMALL_STATE(1019)] = 12339,
  [SMALL_STATE(1020)] = 12349,
  [SMALL_STATE(1021)] = 12359,
  [SMALL_STATE(1022)] = 12367,
  [SMALL_STATE(1023)] = 12377,
  [SMALL_STATE(1024)] = 12387,
  [SMALL_STATE(1025)] = 12395,
  [SMALL_STATE(1026)] = 12405,
  [SMALL_STATE(1027)] = 12415,
  [SMALL_STATE(1028)] = 12425,
  [SMALL_STATE(1029)] = 12435,
  [SMALL_STATE(1030)] = 12445,
  [SMALL_STATE(1031)] = 12455,
  [SMALL_STATE(1032)] = 12461,
  [SMALL_STATE(1033)] = 12471,
  [SMALL_STATE(1034)] = 12481,
  [SMALL_STATE(1035)] = 12491,
  [SMALL_STATE(1036)] = 12501,
  [SMALL_STATE(1037)] = 12511,
  [SMALL_STATE(1038)] = 12521,
  [SMALL_STATE(1039)] = 12529,
  [SMALL_STATE(1040)] = 12539,
  [SMALL_STATE(1041)] = 12545,
  [SMALL_STATE(1042)] = 12555,
  [SMALL_STATE(1043)] = 12563,
  [SMALL_STATE(1044)] = 12573,
  [SMALL_STATE(1045)] = 12583,
  [SMALL_STATE(1046)] = 12593,
  [SMALL_STATE(1047)] = 12603,
  [SMALL_STATE(1048)] = 12613,
  [SMALL_STATE(1049)] = 12621,
  [SMALL_STATE(1050)] = 12631,
  [SMALL_STATE(1051)] = 12641,
  [SMALL_STATE(1052)] = 12651,
  [SMALL_STATE(1053)] = 12661,
  [SMALL_STATE(1054)] = 12671,
  [SMALL_STATE(1055)] = 12681,
  [SMALL_STATE(1056)] = 12691,
  [SMALL_STATE(1057)] = 12697,
  [SMALL_STATE(1058)] = 12707,
  [SMALL_STATE(1059)] = 12717,
  [SMALL_STATE(1060)] = 12723,
  [SMALL_STATE(1061)] = 12733,
  [SMALL_STATE(1062)] = 12743,
  [SMALL_STATE(1063)] = 12749,
  [SMALL_STATE(1064)] = 12755,
  [SMALL_STATE(1065)] = 12765,
  [SMALL_STATE(1066)] = 12771,
  [SMALL_STATE(1067)] = 12781,
  [SMALL_STATE(1068)] = 12787,
  [SMALL_STATE(1069)] = 12793,
  [SMALL_STATE(1070)] = 12799,
  [SMALL_STATE(1071)] = 12809,
  [SMALL_STATE(1072)] = 12815,
  [SMALL_STATE(1073)] = 12825,
  [SMALL_STATE(1074)] = 12835,
  [SMALL_STATE(1075)] = 12841,
  [SMALL_STATE(1076)] = 12851,
  [SMALL_STATE(1077)] = 12857,
  [SMALL_STATE(1078)] = 12867,
  [SMALL_STATE(1079)] = 12877,
  [SMALL_STATE(1080)] = 12883,
  [SMALL_STATE(1081)] = 12893,
  [SMALL_STATE(1082)] = 12903,
  [SMALL_STATE(1083)] = 12909,
  [SMALL_STATE(1084)] = 12919,
  [SMALL_STATE(1085)] = 12929,
  [SMALL_STATE(1086)] = 12935,
  [SMALL_STATE(1087)] = 12945,
  [SMALL_STATE(1088)] = 12951,
  [SMALL_STATE(1089)] = 12957,
  [SMALL_STATE(1090)] = 12967,
  [SMALL_STATE(1091)] = 12973,
  [SMALL_STATE(1092)] = 12983,
  [SMALL_STATE(1093)] = 12993,
  [SMALL_STATE(1094)] = 13003,
  [SMALL_STATE(1095)] = 13013,
  [SMALL_STATE(1096)] = 13023,
  [SMALL_STATE(1097)] = 13033,
  [SMALL_STATE(1098)] = 13039,
  [SMALL_STATE(1099)] = 13046,
  [SMALL_STATE(1100)] = 13053,
  [SMALL_STATE(1101)] = 13060,
  [SMALL_STATE(1102)] = 13067,
  [SMALL_STATE(1103)] = 13074,
  [SMALL_STATE(1104)] = 13081,
  [SMALL_STATE(1105)] = 13088,
  [SMALL_STATE(1106)] = 13095,
  [SMALL_STATE(1107)] = 13102,
  [SMALL_STATE(1108)] = 13109,
  [SMALL_STATE(1109)] = 13116,
  [SMALL_STATE(1110)] = 13123,
  [SMALL_STATE(1111)] = 13130,
  [SMALL_STATE(1112)] = 13137,
  [SMALL_STATE(1113)] = 13144,
  [SMALL_STATE(1114)] = 13151,
  [SMALL_STATE(1115)] = 13158,
  [SMALL_STATE(1116)] = 13163,
  [SMALL_STATE(1117)] = 13170,
  [SMALL_STATE(1118)] = 13177,
  [SMALL_STATE(1119)] = 13182,
  [SMALL_STATE(1120)] = 13189,
  [SMALL_STATE(1121)] = 13196,
  [SMALL_STATE(1122)] = 13203,
  [SMALL_STATE(1123)] = 13208,
  [SMALL_STATE(1124)] = 13215,
  [SMALL_STATE(1125)] = 13222,
  [SMALL_STATE(1126)] = 13229,
  [SMALL_STATE(1127)] = 13236,
  [SMALL_STATE(1128)] = 13243,
  [SMALL_STATE(1129)] = 13250,
  [SMALL_STATE(1130)] = 13257,
  [SMALL_STATE(1131)] = 13264,
  [SMALL_STATE(1132)] = 13271,
  [SMALL_STATE(1133)] = 13276,
  [SMALL_STATE(1134)] = 13283,
  [SMALL_STATE(1135)] = 13290,
  [SMALL_STATE(1136)] = 13297,
  [SMALL_STATE(1137)] = 13304,
  [SMALL_STATE(1138)] = 13311,
  [SMALL_STATE(1139)] = 13318,
  [SMALL_STATE(1140)] = 13325,
  [SMALL_STATE(1141)] = 13332,
  [SMALL_STATE(1142)] = 13339,
  [SMALL_STATE(1143)] = 13346,
  [SMALL_STATE(1144)] = 13353,
  [SMALL_STATE(1145)] = 13360,
  [SMALL_STATE(1146)] = 13367,
  [SMALL_STATE(1147)] = 13372,
  [SMALL_STATE(1148)] = 13379,
  [SMALL_STATE(1149)] = 13386,
  [SMALL_STATE(1150)] = 13393,
  [SMALL_STATE(1151)] = 13398,
  [SMALL_STATE(1152)] = 13403,
  [SMALL_STATE(1153)] = 13410,
  [SMALL_STATE(1154)] = 13415,
  [SMALL_STATE(1155)] = 13422,
  [SMALL_STATE(1156)] = 13429,
  [SMALL_STATE(1157)] = 13436,
  [SMALL_STATE(1158)] = 13443,
  [SMALL_STATE(1159)] = 13450,
  [SMALL_STATE(1160)] = 13457,
  [SMALL_STATE(1161)] = 13464,
  [SMALL_STATE(1162)] = 13471,
  [SMALL_STATE(1163)] = 13476,
  [SMALL_STATE(1164)] = 13483,
  [SMALL_STATE(1165)] = 13490,
  [SMALL_STATE(1166)] = 13497,
  [SMALL_STATE(1167)] = 13502,
  [SMALL_STATE(1168)] = 13509,
  [SMALL_STATE(1169)] = 13516,
  [SMALL_STATE(1170)] = 13523,
  [SMALL_STATE(1171)] = 13530,
  [SMALL_STATE(1172)] = 13537,
  [SMALL_STATE(1173)] = 13544,
  [SMALL_STATE(1174)] = 13549,
  [SMALL_STATE(1175)] = 13556,
  [SMALL_STATE(1176)] = 13563,
  [SMALL_STATE(1177)] = 13570,
  [SMALL_STATE(1178)] = 13577,
  [SMALL_STATE(1179)] = 13584,
  [SMALL_STATE(1180)] = 13589,
  [SMALL_STATE(1181)] = 13596,
  [SMALL_STATE(1182)] = 13603,
  [SMALL_STATE(1183)] = 13610,
  [SMALL_STATE(1184)] = 13617,
  [SMALL_STATE(1185)] = 13624,
  [SMALL_STATE(1186)] = 13631,
  [SMALL_STATE(1187)] = 13638,
  [SMALL_STATE(1188)] = 13645,
  [SMALL_STATE(1189)] = 13652,
  [SMALL_STATE(1190)] = 13659,
  [SMALL_STATE(1191)] = 13664,
  [SMALL_STATE(1192)] = 13669,
  [SMALL_STATE(1193)] = 13676,
  [SMALL_STATE(1194)] = 13683,
  [SMALL_STATE(1195)] = 13688,
  [SMALL_STATE(1196)] = 13695,
  [SMALL_STATE(1197)] = 13702,
  [SMALL_STATE(1198)] = 13707,
  [SMALL_STATE(1199)] = 13712,
  [SMALL_STATE(1200)] = 13719,
  [SMALL_STATE(1201)] = 13724,
  [SMALL_STATE(1202)] = 13731,
  [SMALL_STATE(1203)] = 13738,
  [SMALL_STATE(1204)] = 13745,
  [SMALL_STATE(1205)] = 13752,
  [SMALL_STATE(1206)] = 13759,
  [SMALL_STATE(1207)] = 13766,
  [SMALL_STATE(1208)] = 13773,
  [SMALL_STATE(1209)] = 13778,
  [SMALL_STATE(1210)] = 13785,
  [SMALL_STATE(1211)] = 13790,
  [SMALL_STATE(1212)] = 13797,
  [SMALL_STATE(1213)] = 13802,
  [SMALL_STATE(1214)] = 13809,
  [SMALL_STATE(1215)] = 13816,
  [SMALL_STATE(1216)] = 13820,
  [SMALL_STATE(1217)] = 13824,
  [SMALL_STATE(1218)] = 13828,
  [SMALL_STATE(1219)] = 13832,
  [SMALL_STATE(1220)] = 13836,
  [SMALL_STATE(1221)] = 13840,
  [SMALL_STATE(1222)] = 13844,
  [SMALL_STATE(1223)] = 13848,
  [SMALL_STATE(1224)] = 13852,
  [SMALL_STATE(1225)] = 13856,
  [SMALL_STATE(1226)] = 13860,
  [SMALL_STATE(1227)] = 13864,
  [SMALL_STATE(1228)] = 13868,
  [SMALL_STATE(1229)] = 13872,
  [SMALL_STATE(1230)] = 13876,
  [SMALL_STATE(1231)] = 13880,
  [SMALL_STATE(1232)] = 13884,
  [SMALL_STATE(1233)] = 13888,
  [SMALL_STATE(1234)] = 13892,
  [SMALL_STATE(1235)] = 13896,
  [SMALL_STATE(1236)] = 13900,
  [SMALL_STATE(1237)] = 13904,
  [SMALL_STATE(1238)] = 13908,
  [SMALL_STATE(1239)] = 13912,
  [SMALL_STATE(1240)] = 13916,
  [SMALL_STATE(1241)] = 13920,
  [SMALL_STATE(1242)] = 13924,
  [SMALL_STATE(1243)] = 13928,
  [SMALL_STATE(1244)] = 13932,
  [SMALL_STATE(1245)] = 13936,
  [SMALL_STATE(1246)] = 13940,
  [SMALL_STATE(1247)] = 13944,
  [SMALL_STATE(1248)] = 13948,
  [SMALL_STATE(1249)] = 13952,
  [SMALL_STATE(1250)] = 13956,
  [SMALL_STATE(1251)] = 13960,
  [SMALL_STATE(1252)] = 13964,
  [SMALL_STATE(1253)] = 13968,
  [SMALL_STATE(1254)] = 13972,
  [SMALL_STATE(1255)] = 13976,
  [SMALL_STATE(1256)] = 13980,
  [SMALL_STATE(1257)] = 13984,
  [SMALL_STATE(1258)] = 13988,
  [SMALL_STATE(1259)] = 13992,
  [SMALL_STATE(1260)] = 13996,
  [SMALL_STATE(1261)] = 14000,
  [SMALL_STATE(1262)] = 14004,
  [SMALL_STATE(1263)] = 14008,
  [SMALL_STATE(1264)] = 14012,
  [SMALL_STATE(1265)] = 14016,
  [SMALL_STATE(1266)] = 14020,
  [SMALL_STATE(1267)] = 14024,
  [SMALL_STATE(1268)] = 14028,
  [SMALL_STATE(1269)] = 14032,
  [SMALL_STATE(1270)] = 14036,
  [SMALL_STATE(1271)] = 14040,
  [SMALL_STATE(1272)] = 14044,
  [SMALL_STATE(1273)] = 14048,
  [SMALL_STATE(1274)] = 14052,
  [SMALL_STATE(1275)] = 14056,
  [SMALL_STATE(1276)] = 14060,
  [SMALL_STATE(1277)] = 14064,
  [SMALL_STATE(1278)] = 14068,
  [SMALL_STATE(1279)] = 14072,
  [SMALL_STATE(1280)] = 14076,
  [SMALL_STATE(1281)] = 14080,
  [SMALL_STATE(1282)] = 14084,
  [SMALL_STATE(1283)] = 14088,
  [SMALL_STATE(1284)] = 14092,
  [SMALL_STATE(1285)] = 14096,
  [SMALL_STATE(1286)] = 14100,
  [SMALL_STATE(1287)] = 14104,
  [SMALL_STATE(1288)] = 14108,
  [SMALL_STATE(1289)] = 14112,
  [SMALL_STATE(1290)] = 14116,
  [SMALL_STATE(1291)] = 14120,
  [SMALL_STATE(1292)] = 14124,
  [SMALL_STATE(1293)] = 14128,
  [SMALL_STATE(1294)] = 14132,
  [SMALL_STATE(1295)] = 14136,
  [SMALL_STATE(1296)] = 14140,
  [SMALL_STATE(1297)] = 14144,
  [SMALL_STATE(1298)] = 14148,
  [SMALL_STATE(1299)] = 14152,
  [SMALL_STATE(1300)] = 14156,
  [SMALL_STATE(1301)] = 14160,
  [SMALL_STATE(1302)] = 14164,
  [SMALL_STATE(1303)] = 14168,
  [SMALL_STATE(1304)] = 14172,
  [SMALL_STATE(1305)] = 14176,
  [SMALL_STATE(1306)] = 14180,
  [SMALL_STATE(1307)] = 14184,
  [SMALL_STATE(1308)] = 14188,
  [SMALL_STATE(1309)] = 14192,
  [SMALL_STATE(1310)] = 14196,
  [SMALL_STATE(1311)] = 14200,
  [SMALL_STATE(1312)] = 14204,
  [SMALL_STATE(1313)] = 14208,
  [SMALL_STATE(1314)] = 14212,
  [SMALL_STATE(1315)] = 14216,
  [SMALL_STATE(1316)] = 14220,
  [SMALL_STATE(1317)] = 14224,
  [SMALL_STATE(1318)] = 14228,
  [SMALL_STATE(1319)] = 14232,
  [SMALL_STATE(1320)] = 14236,
  [SMALL_STATE(1321)] = 14240,
  [SMALL_STATE(1322)] = 14244,
  [SMALL_STATE(1323)] = 14248,
  [SMALL_STATE(1324)] = 14252,
  [SMALL_STATE(1325)] = 14256,
  [SMALL_STATE(1326)] = 14260,
  [SMALL_STATE(1327)] = 14264,
  [SMALL_STATE(1328)] = 14268,
  [SMALL_STATE(1329)] = 14272,
  [SMALL_STATE(1330)] = 14276,
  [SMALL_STATE(1331)] = 14280,
  [SMALL_STATE(1332)] = 14284,
  [SMALL_STATE(1333)] = 14288,
  [SMALL_STATE(1334)] = 14292,
  [SMALL_STATE(1335)] = 14296,
  [SMALL_STATE(1336)] = 14300,
  [SMALL_STATE(1337)] = 14304,
  [SMALL_STATE(1338)] = 14308,
  [SMALL_STATE(1339)] = 14312,
  [SMALL_STATE(1340)] = 14316,
  [SMALL_STATE(1341)] = 14320,
  [SMALL_STATE(1342)] = 14324,
  [SMALL_STATE(1343)] = 14328,
  [SMALL_STATE(1344)] = 14332,
  [SMALL_STATE(1345)] = 14336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1252),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1160),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1244),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1267),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(979),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1152),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1230),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1231),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1042),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1165),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1255),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1256),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(988),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1048),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1035),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1308),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1110),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1270),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1074),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1065),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1218),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1220),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1221),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1091),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1108),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1297),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(74),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(140),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(1199),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1199),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1050),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(90),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1193),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1202),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1247),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1164),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1253),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1111),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1288),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 44),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(978),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(724),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(989),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1264),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 33),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 34),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 2, 0, 35),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 36),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 37),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 1, 0, 38),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 39),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 38),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 39),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 39),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 46),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 35),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 47),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 28),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 48),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 36),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 49),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_using_complement, 2, 0, 35),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 36),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 50),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 2, 0, 46),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 37),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 36),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 38),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 51),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 35),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 38),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 51),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 53),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 53),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 38),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 54),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 60),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 61),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 62),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 50),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_line, 2, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 63),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 37),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 65),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 51),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 65),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 51),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 35),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 38),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 51),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 67),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 68),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 50),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 4, 0, 67),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 63),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 65),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 51),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 6, 0, 68),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 7, 0, 73),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 74),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 75),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 73),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 77),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 74),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 79),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 80),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 81),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 75),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 82),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 83),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 9, 0, 77),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 79),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 80),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 84),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 81),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 85),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 82),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 86),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 83),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 87),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 84),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 85),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 86),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 88),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 87),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 11, 0, 88),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 58),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 59),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1284),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 59),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1335),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1006),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(1087),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [1517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(513),
  [1520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [1523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1264),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 44),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 2, 0, 35),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 45),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 57),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1275),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1240),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 66),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 28),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(942),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1336),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 4, 0, 42),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 69),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 5, 0, 70),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 6, 0, 72),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_text_body, 3, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1179),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1191),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 31),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 7, 0, 76),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1335),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1261),
  [1777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1216),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1004),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 31),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 41),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 42),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 45),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(921),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 35),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(866),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 64),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 35),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 71),
  [1951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until_complement, 3, 2, 78),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 46),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1292),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1219),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 55),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 40),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1280),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1330),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [2131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1250),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [2141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1276),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [2159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 52),
  [2173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1337),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 56),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
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
};

static const bool ts_external_scanner_states[34][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [5] = {
    [ts_external_token__agic_raw_text] = true,
  },
  [6] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__cap_text_start] = true,
  },
  [7] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [8] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [12] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [13] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
  },
  [16] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [17] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [19] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [20] = {
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [21] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [22] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__settle_indent] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [26] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [27] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
  },
  [28] = {
    [ts_external_token__line_start] = true,
  },
  [29] = {
    [ts_external_token__settle_text_start] = true,
  },
  [30] = {
    [ts_external_token__from_start] = true,
  },
  [31] = {
    [ts_external_token__until_start] = true,
  },
  [32] = {
    [ts_external_token__comment_end] = true,
  },
  [33] = {
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
