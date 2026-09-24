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
#define STATE_COUNT 1329
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 260
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 22
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
  sym__settle_text_start = 118,
  sym__text_indent = 119,
  sym__cap_text_start = 120,
  sym_indented_raw_text = 121,
  sym__flow_raw_text = 122,
  sym__agic_raw_text = 123,
  sym__error_line = 124,
  sym_source_file = 125,
  sym_item = 126,
  sym_line_end = 127,
  sym_module_doc_comment = 128,
  sym_item_doc_comment = 129,
  sym_param_doc_tag = 130,
  sym__trivia = 131,
  sym_with = 132,
  sym_type = 133,
  sym_base_type = 134,
  sym_builtin_type = 135,
  sym_user_type = 136,
  sym_type_suffix = 137,
  sym_struct = 138,
  sym_struct_name = 139,
  sym_struct_body = 140,
  sym_field = 141,
  sym_field_name = 142,
  sym_psyche = 143,
  sym_skill = 144,
  sym_service = 145,
  sym_prompt = 146,
  sym__cap_definition = 147,
  sym_cap_body = 148,
  sym__cap_text_body = 149,
  sym_task = 150,
  sym_chore = 151,
  sym_cap_name = 152,
  sym_cap_ref = 153,
  sym_job_name = 154,
  sym_job_body = 155,
  sym_property = 156,
  sym_property_key = 157,
  sym_property_value = 158,
  sym_instruct = 159,
  sym_instruct_name = 160,
  sym_instruct_body = 161,
  sym_context = 162,
  sym_context_name = 163,
  sym_context_body = 164,
  sym_text_inline = 165,
  sym_text_block = 166,
  sym_text_body = 167,
  sym_text_body_line = 168,
  sym_agic = 169,
  sym_agic_name = 170,
  sym_agic_body = 171,
  sym_params = 172,
  sym_param = 173,
  sym_param_name = 174,
  sym_flow = 175,
  sym_flow_name = 176,
  sym_flow_body = 177,
  sym_statements = 178,
  sym__flow_statement = 179,
  sym__flow_operation = 180,
  sym_let_statement = 181,
  sym_run_statement = 182,
  sym_implicit_run_statement = 183,
  sym__implicit_run_line = 184,
  sym_seek_statement = 185,
  sym_ask_statement = 186,
  sym_scatter_statement = 187,
  sym_storm_statement = 188,
  sym_gather_statement = 189,
  sym_settle_statement = 190,
  sym__settle_inline_line = 191,
  sym__settle_line = 192,
  sym__settle_inline_block = 193,
  sym__settle_text_body = 194,
  sym__from_complement = 195,
  sym_map_statement = 196,
  sym_keep_statement = 197,
  sym_drop_statement = 198,
  sym_sort_statement = 199,
  sym__named_using_complement = 200,
  sym__inline_using_complement = 201,
  sym__named_if_complement = 202,
  sym__inline_if_complement = 203,
  sym__named_by_complement = 204,
  sym__inline_by_complement = 205,
  sym__using_complements = 206,
  sym__if_complements = 207,
  sym__by_complements = 208,
  sym__lanes_complement = 209,
  sym__order_complement = 210,
  sym_repeat_statement = 211,
  sym__window_complement = 212,
  sym__repeat_count_complement = 213,
  sym__until_complement = 214,
  sym_invalid_flow_reserved_statement = 215,
  sym_inline_agic = 216,
  sym_inline_agic_body = 217,
  sym_position = 218,
  sym_runnable = 219,
  sym_agent = 220,
  sym_local_name = 221,
  sym_directive = 222,
  sym__query_directive_key = 223,
  sym__route_directive_key = 224,
  sym_directive_key = 225,
  sym_directive_op = 226,
  sym_route_value = 227,
  sym_recall_value = 228,
  sym_recall_source = 229,
  sym__directives = 230,
  sym_text_ref = 231,
  sym_messages = 232,
  sym_message = 233,
  sym_unroled_message = 234,
  sym__unroled_message_line = 235,
  sym_invalid_agic_reserved_message = 236,
  sym_role = 237,
  sym__pass_statement = 238,
  sym_flow_lanes_keyword = 239,
  sym__flow_reserved_word = 240,
  sym__agic_reserved_word = 241,
  sym_assign_operator = 242,
  sym_type_name = 243,
  aux_sym_source_file_repeat1 = 244,
  aux_sym_type_repeat1 = 245,
  aux_sym_struct_body_repeat1 = 246,
  aux_sym_struct_body_repeat2 = 247,
  aux_sym__cap_definition_repeat1 = 248,
  aux_sym__cap_text_body_repeat1 = 249,
  aux_sym_job_body_repeat1 = 250,
  aux_sym_text_body_repeat1 = 251,
  aux_sym_params_repeat1 = 252,
  aux_sym_statements_repeat1 = 253,
  aux_sym_implicit_run_statement_repeat1 = 254,
  aux_sym_route_value_repeat1 = 255,
  aux_sym_recall_value_repeat1 = 256,
  aux_sym__directives_repeat1 = 257,
  aux_sym_messages_repeat1 = 258,
  aux_sym_unroled_message_repeat1 = 259,
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
  [37] = 29,
  [38] = 24,
  [39] = 29,
  [40] = 24,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 46,
  [56] = 47,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 53,
  [61] = 52,
  [62] = 53,
  [63] = 48,
  [64] = 47,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 72,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 66,
  [89] = 81,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 67,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 68,
  [101] = 101,
  [102] = 74,
  [103] = 77,
  [104] = 76,
  [105] = 75,
  [106] = 70,
  [107] = 66,
  [108] = 81,
  [109] = 67,
  [110] = 110,
  [111] = 74,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 98,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 87,
  [125] = 93,
  [126] = 96,
  [127] = 97,
  [128] = 82,
  [129] = 99,
  [130] = 98,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 76,
  [135] = 135,
  [136] = 75,
  [137] = 87,
  [138] = 93,
  [139] = 96,
  [140] = 97,
  [141] = 82,
  [142] = 99,
  [143] = 98,
  [144] = 98,
  [145] = 98,
  [146] = 98,
  [147] = 98,
  [148] = 98,
  [149] = 98,
  [150] = 123,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 155,
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
  [170] = 159,
  [171] = 171,
  [172] = 113,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 115,
  [177] = 177,
  [178] = 175,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 156,
  [185] = 155,
  [186] = 159,
  [187] = 115,
  [188] = 162,
  [189] = 162,
  [190] = 163,
  [191] = 191,
  [192] = 192,
  [193] = 166,
  [194] = 194,
  [195] = 163,
  [196] = 169,
  [197] = 197,
  [198] = 198,
  [199] = 169,
  [200] = 200,
  [201] = 201,
  [202] = 164,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 181,
  [209] = 175,
  [210] = 181,
  [211] = 211,
  [212] = 166,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 113,
  [218] = 183,
  [219] = 219,
  [220] = 183,
  [221] = 164,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 101,
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
  [272] = 200,
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
  [326] = 223,
  [327] = 224,
  [328] = 225,
  [329] = 226,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 324,
  [334] = 325,
  [335] = 223,
  [336] = 224,
  [337] = 225,
  [338] = 226,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 15,
  [345] = 330,
  [346] = 331,
  [347] = 330,
  [348] = 331,
  [349] = 324,
  [350] = 325,
  [351] = 223,
  [352] = 224,
  [353] = 225,
  [354] = 226,
  [355] = 330,
  [356] = 331,
  [357] = 357,
  [358] = 358,
  [359] = 230,
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
  [373] = 222,
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
  [390] = 244,
  [391] = 245,
  [392] = 247,
  [393] = 270,
  [394] = 394,
  [395] = 364,
  [396] = 365,
  [397] = 366,
  [398] = 368,
  [399] = 377,
  [400] = 400,
  [401] = 401,
  [402] = 325,
  [403] = 403,
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
  [430] = 230,
  [431] = 403,
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
  [461] = 244,
  [462] = 245,
  [463] = 247,
  [464] = 270,
  [465] = 423,
  [466] = 364,
  [467] = 365,
  [468] = 366,
  [469] = 368,
  [470] = 377,
  [471] = 400,
  [472] = 401,
  [473] = 424,
  [474] = 403,
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
  [499] = 174,
  [500] = 358,
  [501] = 230,
  [502] = 207,
  [503] = 358,
  [504] = 230,
  [505] = 191,
  [506] = 385,
  [507] = 386,
  [508] = 508,
  [509] = 509,
  [510] = 357,
  [511] = 197,
  [512] = 192,
  [513] = 357,
  [514] = 101,
  [515] = 192,
  [516] = 516,
  [517] = 369,
  [518] = 374,
  [519] = 383,
  [520] = 388,
  [521] = 389,
  [522] = 428,
  [523] = 197,
  [524] = 370,
  [525] = 369,
  [526] = 374,
  [527] = 383,
  [528] = 388,
  [529] = 389,
  [530] = 428,
  [531] = 371,
  [532] = 271,
  [533] = 372,
  [534] = 222,
  [535] = 387,
  [536] = 271,
  [537] = 372,
  [538] = 200,
  [539] = 387,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 324,
  [544] = 544,
  [545] = 319,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 296,
  [552] = 297,
  [553] = 553,
  [554] = 298,
  [555] = 555,
  [556] = 299,
  [557] = 300,
  [558] = 301,
  [559] = 302,
  [560] = 303,
  [561] = 561,
  [562] = 304,
  [563] = 305,
  [564] = 306,
  [565] = 565,
  [566] = 307,
  [567] = 308,
  [568] = 309,
  [569] = 310,
  [570] = 311,
  [571] = 571,
  [572] = 312,
  [573] = 313,
  [574] = 314,
  [575] = 315,
  [576] = 576,
  [577] = 316,
  [578] = 317,
  [579] = 579,
  [580] = 318,
  [581] = 319,
  [582] = 320,
  [583] = 321,
  [584] = 322,
  [585] = 323,
  [586] = 339,
  [587] = 340,
  [588] = 341,
  [589] = 224,
  [590] = 225,
  [591] = 342,
  [592] = 342,
  [593] = 226,
  [594] = 229,
  [595] = 595,
  [596] = 343,
  [597] = 233,
  [598] = 234,
  [599] = 235,
  [600] = 236,
  [601] = 237,
  [602] = 238,
  [603] = 239,
  [604] = 240,
  [605] = 241,
  [606] = 242,
  [607] = 607,
  [608] = 246,
  [609] = 609,
  [610] = 248,
  [611] = 249,
  [612] = 250,
  [613] = 251,
  [614] = 252,
  [615] = 253,
  [616] = 254,
  [617] = 255,
  [618] = 256,
  [619] = 257,
  [620] = 258,
  [621] = 259,
  [622] = 260,
  [623] = 261,
  [624] = 262,
  [625] = 263,
  [626] = 264,
  [627] = 265,
  [628] = 266,
  [629] = 267,
  [630] = 268,
  [631] = 269,
  [632] = 632,
  [633] = 633,
  [634] = 273,
  [635] = 361,
  [636] = 362,
  [637] = 274,
  [638] = 275,
  [639] = 276,
  [640] = 277,
  [641] = 278,
  [642] = 279,
  [643] = 280,
  [644] = 281,
  [645] = 282,
  [646] = 283,
  [647] = 284,
  [648] = 285,
  [649] = 286,
  [650] = 287,
  [651] = 288,
  [652] = 289,
  [653] = 290,
  [654] = 291,
  [655] = 292,
  [656] = 293,
  [657] = 294,
  [658] = 295,
  [659] = 296,
  [660] = 297,
  [661] = 298,
  [662] = 299,
  [663] = 300,
  [664] = 301,
  [665] = 302,
  [666] = 303,
  [667] = 304,
  [668] = 305,
  [669] = 306,
  [670] = 307,
  [671] = 308,
  [672] = 309,
  [673] = 310,
  [674] = 311,
  [675] = 312,
  [676] = 313,
  [677] = 314,
  [678] = 315,
  [679] = 316,
  [680] = 317,
  [681] = 318,
  [682] = 682,
  [683] = 320,
  [684] = 321,
  [685] = 322,
  [686] = 323,
  [687] = 687,
  [688] = 330,
  [689] = 331,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
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
  [704] = 339,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 229,
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
  [720] = 343,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 15,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 324,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 233,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 340,
  [741] = 234,
  [742] = 339,
  [743] = 340,
  [744] = 341,
  [745] = 342,
  [746] = 343,
  [747] = 747,
  [748] = 341,
  [749] = 235,
  [750] = 750,
  [751] = 751,
  [752] = 236,
  [753] = 753,
  [754] = 754,
  [755] = 237,
  [756] = 324,
  [757] = 325,
  [758] = 223,
  [759] = 224,
  [760] = 225,
  [761] = 226,
  [762] = 330,
  [763] = 331,
  [764] = 324,
  [765] = 325,
  [766] = 223,
  [767] = 224,
  [768] = 225,
  [769] = 226,
  [770] = 325,
  [771] = 771,
  [772] = 330,
  [773] = 331,
  [774] = 324,
  [775] = 325,
  [776] = 223,
  [777] = 224,
  [778] = 225,
  [779] = 226,
  [780] = 238,
  [781] = 239,
  [782] = 782,
  [783] = 223,
  [784] = 330,
  [785] = 331,
  [786] = 240,
  [787] = 241,
  [788] = 699,
  [789] = 242,
  [790] = 709,
  [791] = 791,
  [792] = 246,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 771,
  [798] = 295,
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
  [811] = 248,
  [812] = 249,
  [813] = 813,
  [814] = 250,
  [815] = 251,
  [816] = 252,
  [817] = 817,
  [818] = 253,
  [819] = 254,
  [820] = 255,
  [821] = 256,
  [822] = 257,
  [823] = 258,
  [824] = 259,
  [825] = 699,
  [826] = 826,
  [827] = 260,
  [828] = 261,
  [829] = 709,
  [830] = 262,
  [831] = 263,
  [832] = 264,
  [833] = 265,
  [834] = 266,
  [835] = 267,
  [836] = 268,
  [837] = 269,
  [838] = 771,
  [839] = 273,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 274,
  [849] = 275,
  [850] = 276,
  [851] = 277,
  [852] = 278,
  [853] = 279,
  [854] = 854,
  [855] = 280,
  [856] = 281,
  [857] = 282,
  [858] = 699,
  [859] = 283,
  [860] = 284,
  [861] = 285,
  [862] = 699,
  [863] = 286,
  [864] = 287,
  [865] = 747,
  [866] = 854,
  [867] = 701,
  [868] = 703,
  [869] = 725,
  [870] = 726,
  [871] = 747,
  [872] = 854,
  [873] = 701,
  [874] = 703,
  [875] = 747,
  [876] = 854,
  [877] = 747,
  [878] = 854,
  [879] = 687,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 288,
  [884] = 289,
  [885] = 290,
  [886] = 886,
  [887] = 291,
  [888] = 888,
  [889] = 889,
  [890] = 292,
  [891] = 293,
  [892] = 294,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 339,
  [899] = 324,
  [900] = 340,
  [901] = 341,
  [902] = 325,
  [903] = 223,
  [904] = 342,
  [905] = 802,
  [906] = 224,
  [907] = 324,
  [908] = 325,
  [909] = 223,
  [910] = 224,
  [911] = 225,
  [912] = 226,
  [913] = 343,
  [914] = 225,
  [915] = 915,
  [916] = 226,
  [917] = 330,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 707,
  [923] = 923,
  [924] = 921,
  [925] = 711,
  [926] = 926,
  [927] = 712,
  [928] = 894,
  [929] = 929,
  [930] = 930,
  [931] = 331,
  [932] = 932,
  [933] = 933,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 937,
  [938] = 938,
  [939] = 939,
  [940] = 753,
  [941] = 941,
  [942] = 919,
  [943] = 923,
  [944] = 926,
  [945] = 754,
  [946] = 936,
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
  [959] = 947,
  [960] = 960,
  [961] = 961,
  [962] = 948,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 950,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 607,
  [974] = 974,
  [975] = 951,
  [976] = 976,
  [977] = 921,
  [978] = 978,
  [979] = 979,
  [980] = 980,
  [981] = 952,
  [982] = 953,
  [983] = 932,
  [984] = 984,
  [985] = 935,
  [986] = 986,
  [987] = 954,
  [988] = 955,
  [989] = 938,
  [990] = 15,
  [991] = 939,
  [992] = 956,
  [993] = 919,
  [994] = 994,
  [995] = 923,
  [996] = 926,
  [997] = 894,
  [998] = 998,
  [999] = 936,
  [1000] = 950,
  [1001] = 951,
  [1002] = 1002,
  [1003] = 952,
  [1004] = 953,
  [1005] = 954,
  [1006] = 955,
  [1007] = 956,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 960,
  [1011] = 961,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 932,
  [1022] = 921,
  [1023] = 921,
  [1024] = 1024,
  [1025] = 935,
  [1026] = 960,
  [1027] = 961,
  [1028] = 1028,
  [1029] = 971,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 1031,
  [1034] = 1034,
  [1035] = 897,
  [1036] = 918,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 1039,
  [1040] = 1031,
  [1041] = 1034,
  [1042] = 897,
  [1043] = 918,
  [1044] = 1037,
  [1045] = 1045,
  [1046] = 1037,
  [1047] = 1047,
  [1048] = 1028,
  [1049] = 1045,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1052,
  [1053] = 938,
  [1054] = 1054,
  [1055] = 1054,
  [1056] = 1045,
  [1057] = 1057,
  [1058] = 330,
  [1059] = 1028,
  [1060] = 939,
  [1061] = 331,
  [1062] = 1051,
  [1063] = 1052,
  [1064] = 1064,
  [1065] = 1054,
  [1066] = 1045,
  [1067] = 1045,
  [1068] = 1068,
  [1069] = 979,
  [1070] = 998,
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 1032,
  [1074] = 979,
  [1075] = 998,
  [1076] = 1051,
  [1077] = 1052,
  [1078] = 1032,
  [1079] = 1079,
  [1080] = 929,
  [1081] = 930,
  [1082] = 994,
  [1083] = 929,
  [1084] = 930,
  [1085] = 994,
  [1086] = 1034,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1019,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1093,
  [1094] = 1094,
  [1095] = 1095,
  [1096] = 1095,
  [1097] = 1097,
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
  [1111] = 1111,
  [1112] = 1110,
  [1113] = 1106,
  [1114] = 1110,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 1110,
  [1118] = 1106,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1110,
  [1124] = 1106,
  [1125] = 1125,
  [1126] = 1110,
  [1127] = 1106,
  [1128] = 1110,
  [1129] = 1106,
  [1130] = 1110,
  [1131] = 1106,
  [1132] = 1110,
  [1133] = 1106,
  [1134] = 1134,
  [1135] = 1135,
  [1136] = 1106,
  [1137] = 1134,
  [1138] = 331,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1115,
  [1142] = 1142,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1148,
  [1149] = 1140,
  [1150] = 1134,
  [1151] = 1147,
  [1152] = 1142,
  [1153] = 1095,
  [1154] = 1154,
  [1155] = 1115,
  [1156] = 1142,
  [1157] = 1144,
  [1158] = 1145,
  [1159] = 1146,
  [1160] = 1147,
  [1161] = 1161,
  [1162] = 1110,
  [1163] = 1106,
  [1164] = 1140,
  [1165] = 1134,
  [1166] = 1134,
  [1167] = 1167,
  [1168] = 1134,
  [1169] = 1134,
  [1170] = 1134,
  [1171] = 1134,
  [1172] = 1134,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1091,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1161,
  [1180] = 1148,
  [1181] = 1181,
  [1182] = 1143,
  [1183] = 1146,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 330,
  [1189] = 1144,
  [1190] = 1176,
  [1191] = 1139,
  [1192] = 1145,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1018,
  [1196] = 1196,
  [1197] = 1197,
  [1198] = 1174,
  [1199] = 1199,
  [1200] = 1173,
  [1201] = 1161,
  [1202] = 1202,
  [1203] = 1203,
  [1204] = 1204,
  [1205] = 1205,
  [1206] = 1206,
  [1207] = 1207,
  [1208] = 15,
  [1209] = 1209,
  [1210] = 1030,
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
  [1222] = 1222,
  [1223] = 1223,
  [1224] = 1203,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1222,
  [1228] = 1228,
  [1229] = 1219,
  [1230] = 1220,
  [1231] = 1231,
  [1232] = 713,
  [1233] = 1214,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1203,
  [1237] = 1237,
  [1238] = 1238,
  [1239] = 1214,
  [1240] = 1215,
  [1241] = 1241,
  [1242] = 1222,
  [1243] = 1219,
  [1244] = 1220,
  [1245] = 1203,
  [1246] = 1225,
  [1247] = 1225,
  [1248] = 1226,
  [1249] = 1226,
  [1250] = 1215,
  [1251] = 1251,
  [1252] = 1211,
  [1253] = 1253,
  [1254] = 1222,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1257,
  [1258] = 1258,
  [1259] = 1222,
  [1260] = 1260,
  [1261] = 1203,
  [1262] = 1225,
  [1263] = 1226,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1266,
  [1267] = 1267,
  [1268] = 1222,
  [1269] = 1203,
  [1270] = 1225,
  [1271] = 1225,
  [1272] = 1226,
  [1273] = 1273,
  [1274] = 1226,
  [1275] = 1275,
  [1276] = 1225,
  [1277] = 1277,
  [1278] = 1278,
  [1279] = 1265,
  [1280] = 1280,
  [1281] = 1281,
  [1282] = 1226,
  [1283] = 1283,
  [1284] = 1284,
  [1285] = 1285,
  [1286] = 1286,
  [1287] = 1222,
  [1288] = 1288,
  [1289] = 1203,
  [1290] = 1225,
  [1291] = 1226,
  [1292] = 1292,
  [1293] = 1222,
  [1294] = 1294,
  [1295] = 1295,
  [1296] = 1296,
  [1297] = 1297,
  [1298] = 1298,
  [1299] = 1222,
  [1300] = 1265,
  [1301] = 1203,
  [1302] = 1225,
  [1303] = 1303,
  [1304] = 1304,
  [1305] = 1226,
  [1306] = 1306,
  [1307] = 1307,
  [1308] = 1308,
  [1309] = 1309,
  [1310] = 1310,
  [1311] = 1311,
  [1312] = 1222,
  [1313] = 1203,
  [1314] = 1314,
  [1315] = 1225,
  [1316] = 1316,
  [1317] = 1267,
  [1318] = 1318,
  [1319] = 1226,
  [1320] = 1320,
  [1321] = 1267,
  [1322] = 1322,
  [1323] = 1284,
  [1324] = 1309,
  [1325] = 1226,
  [1326] = 1326,
  [1327] = 1309,
  [1328] = 1203,
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
      if (lookahead == 'w') ADVANCE(712);
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
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
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
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(499);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
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
          lookahead == ' ') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 273:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(273);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
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
      if (('0' <= lookahead && lookahead <= '9') ||
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
      if (lookahead == 'w') ADVANCE(712);
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
      if (lookahead == 'e') ADVANCE(726);
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
      if (lookahead == 'i') ADVANCE(725);
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
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(759);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(692);
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
      if (lookahead == 's') ADVANCE(711);
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
      if (lookahead == 'w') ADVANCE(713);
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
  [46] = {.lex_state = 11, .external_lex_state = 4},
  [47] = {.lex_state = 4, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 11, .external_lex_state = 4},
  [50] = {.lex_state = 0, .external_lex_state = 6},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 4},
  [55] = {.lex_state = 11, .external_lex_state = 4},
  [56] = {.lex_state = 4, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 6},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 2, .external_lex_state = 4},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 3, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 0, .external_lex_state = 8},
  [69] = {.lex_state = 3, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 0, .external_lex_state = 6},
  [72] = {.lex_state = 2, .external_lex_state = 4},
  [73] = {.lex_state = 3, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 9},
  [75] = {.lex_state = 0, .external_lex_state = 9},
  [76] = {.lex_state = 0, .external_lex_state = 7},
  [77] = {.lex_state = 0, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 6},
  [79] = {.lex_state = 2, .external_lex_state = 4},
  [80] = {.lex_state = 2, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 9},
  [82] = {.lex_state = 0, .external_lex_state = 10},
  [83] = {.lex_state = 0, .external_lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 11},
  [85] = {.lex_state = 0, .external_lex_state = 12},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 13},
  [88] = {.lex_state = 0, .external_lex_state = 14},
  [89] = {.lex_state = 0, .external_lex_state = 11},
  [90] = {.lex_state = 0, .external_lex_state = 11},
  [91] = {.lex_state = 0, .external_lex_state = 11},
  [92] = {.lex_state = 0, .external_lex_state = 15},
  [93] = {.lex_state = 0, .external_lex_state = 13},
  [94] = {.lex_state = 0, .external_lex_state = 14},
  [95] = {.lex_state = 0, .external_lex_state = 16},
  [96] = {.lex_state = 0, .external_lex_state = 10},
  [97] = {.lex_state = 0, .external_lex_state = 10},
  [98] = {.lex_state = 0, .external_lex_state = 17},
  [99] = {.lex_state = 0, .external_lex_state = 10},
  [100] = {.lex_state = 0, .external_lex_state = 18},
  [101] = {.lex_state = 0, .external_lex_state = 16},
  [102] = {.lex_state = 0, .external_lex_state = 19},
  [103] = {.lex_state = 0, .external_lex_state = 18},
  [104] = {.lex_state = 0, .external_lex_state = 20},
  [105] = {.lex_state = 0, .external_lex_state = 19},
  [106] = {.lex_state = 0, .external_lex_state = 18},
  [107] = {.lex_state = 0, .external_lex_state = 20},
  [108] = {.lex_state = 0, .external_lex_state = 19},
  [109] = {.lex_state = 0, .external_lex_state = 20},
  [110] = {.lex_state = 13, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 11},
  [112] = {.lex_state = 0, .external_lex_state = 12},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 11},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 13, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 17},
  [118] = {.lex_state = 0, .external_lex_state = 15},
  [119] = {.lex_state = 0, .external_lex_state = 16},
  [120] = {.lex_state = 0, .external_lex_state = 11},
  [121] = {.lex_state = 0, .external_lex_state = 12},
  [122] = {.lex_state = 0, .external_lex_state = 15},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 13},
  [125] = {.lex_state = 0, .external_lex_state = 13},
  [126] = {.lex_state = 0, .external_lex_state = 10},
  [127] = {.lex_state = 0, .external_lex_state = 10},
  [128] = {.lex_state = 0, .external_lex_state = 10},
  [129] = {.lex_state = 0, .external_lex_state = 10},
  [130] = {.lex_state = 0, .external_lex_state = 17},
  [131] = {.lex_state = 0, .external_lex_state = 16},
  [132] = {.lex_state = 0, .external_lex_state = 12},
  [133] = {.lex_state = 13, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 14},
  [135] = {.lex_state = 13, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 11},
  [137] = {.lex_state = 0, .external_lex_state = 13},
  [138] = {.lex_state = 0, .external_lex_state = 13},
  [139] = {.lex_state = 0, .external_lex_state = 10},
  [140] = {.lex_state = 0, .external_lex_state = 10},
  [141] = {.lex_state = 0, .external_lex_state = 10},
  [142] = {.lex_state = 0, .external_lex_state = 10},
  [143] = {.lex_state = 0, .external_lex_state = 17},
  [144] = {.lex_state = 0, .external_lex_state = 17},
  [145] = {.lex_state = 0, .external_lex_state = 17},
  [146] = {.lex_state = 0, .external_lex_state = 17},
  [147] = {.lex_state = 0, .external_lex_state = 17},
  [148] = {.lex_state = 0, .external_lex_state = 17},
  [149] = {.lex_state = 0, .external_lex_state = 17},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 11},
  [152] = {.lex_state = 0, .external_lex_state = 11},
  [153] = {.lex_state = 0, .external_lex_state = 16},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 13, .external_lex_state = 4},
  [157] = {.lex_state = 13, .external_lex_state = 4},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 21},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 13, .external_lex_state = 4},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 0, .external_lex_state = 21},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0, .external_lex_state = 21},
  [168] = {.lex_state = 0, .external_lex_state = 21},
  [169] = {.lex_state = 13, .external_lex_state = 4},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0, .external_lex_state = 21},
  [172] = {.lex_state = 0, .external_lex_state = 20},
  [173] = {.lex_state = 0, .external_lex_state = 15},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 12, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 20},
  [177] = {.lex_state = 0, .external_lex_state = 21},
  [178] = {.lex_state = 12, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 21},
  [180] = {.lex_state = 0, .external_lex_state = 21},
  [181] = {.lex_state = 9, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 21},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 13, .external_lex_state = 4},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0, .external_lex_state = 14},
  [188] = {.lex_state = 13, .external_lex_state = 4},
  [189] = {.lex_state = 13, .external_lex_state = 4},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 7},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 21},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 13, .external_lex_state = 4},
  [197] = {.lex_state = 0, .external_lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 21},
  [199] = {.lex_state = 13, .external_lex_state = 4},
  [200] = {.lex_state = 0, .external_lex_state = 7},
  [201] = {.lex_state = 13, .external_lex_state = 4},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 0, .external_lex_state = 21},
  [204] = {.lex_state = 0, .external_lex_state = 21},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 13, .external_lex_state = 4},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 9, .external_lex_state = 4},
  [209] = {.lex_state = 12, .external_lex_state = 4},
  [210] = {.lex_state = 9, .external_lex_state = 4},
  [211] = {.lex_state = 0, .external_lex_state = 21},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 21},
  [214] = {.lex_state = 0, .external_lex_state = 21},
  [215] = {.lex_state = 0, .external_lex_state = 21},
  [216] = {.lex_state = 0, .external_lex_state = 15},
  [217] = {.lex_state = 0, .external_lex_state = 14},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 13, .external_lex_state = 4},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 0, .external_lex_state = 21},
  [223] = {.lex_state = 0, .external_lex_state = 16},
  [224] = {.lex_state = 0, .external_lex_state = 16},
  [225] = {.lex_state = 0, .external_lex_state = 16},
  [226] = {.lex_state = 0, .external_lex_state = 16},
  [227] = {.lex_state = 0, .external_lex_state = 22},
  [228] = {.lex_state = 0, .external_lex_state = 22},
  [229] = {.lex_state = 0, .external_lex_state = 9},
  [230] = {.lex_state = 0, .external_lex_state = 23},
  [231] = {.lex_state = 0, .external_lex_state = 15},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 0, .external_lex_state = 9},
  [234] = {.lex_state = 0, .external_lex_state = 9},
  [235] = {.lex_state = 0, .external_lex_state = 9},
  [236] = {.lex_state = 0, .external_lex_state = 9},
  [237] = {.lex_state = 0, .external_lex_state = 9},
  [238] = {.lex_state = 0, .external_lex_state = 9},
  [239] = {.lex_state = 0, .external_lex_state = 9},
  [240] = {.lex_state = 0, .external_lex_state = 9},
  [241] = {.lex_state = 0, .external_lex_state = 9},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 21},
  [244] = {.lex_state = 0, .external_lex_state = 22},
  [245] = {.lex_state = 0, .external_lex_state = 22},
  [246] = {.lex_state = 0, .external_lex_state = 9},
  [247] = {.lex_state = 16},
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
  [260] = {.lex_state = 0, .external_lex_state = 9},
  [261] = {.lex_state = 0, .external_lex_state = 9},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 0, .external_lex_state = 9},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 9},
  [266] = {.lex_state = 0, .external_lex_state = 9},
  [267] = {.lex_state = 0, .external_lex_state = 9},
  [268] = {.lex_state = 0, .external_lex_state = 9},
  [269] = {.lex_state = 0, .external_lex_state = 9},
  [270] = {.lex_state = 5, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 21},
  [272] = {.lex_state = 0, .external_lex_state = 14},
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
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 9},
  [318] = {.lex_state = 0, .external_lex_state = 9},
  [319] = {.lex_state = 0, .external_lex_state = 9},
  [320] = {.lex_state = 0, .external_lex_state = 9},
  [321] = {.lex_state = 0, .external_lex_state = 9},
  [322] = {.lex_state = 0, .external_lex_state = 9},
  [323] = {.lex_state = 0, .external_lex_state = 9},
  [324] = {.lex_state = 0, .external_lex_state = 6},
  [325] = {.lex_state = 0, .external_lex_state = 6},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 0, .external_lex_state = 6},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 0, .external_lex_state = 16},
  [331] = {.lex_state = 0, .external_lex_state = 16},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 0, .external_lex_state = 8},
  [334] = {.lex_state = 0, .external_lex_state = 8},
  [335] = {.lex_state = 0, .external_lex_state = 8},
  [336] = {.lex_state = 0, .external_lex_state = 8},
  [337] = {.lex_state = 0, .external_lex_state = 8},
  [338] = {.lex_state = 0, .external_lex_state = 8},
  [339] = {.lex_state = 0, .external_lex_state = 9},
  [340] = {.lex_state = 0, .external_lex_state = 9},
  [341] = {.lex_state = 0, .external_lex_state = 9},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 8},
  [346] = {.lex_state = 0, .external_lex_state = 8},
  [347] = {.lex_state = 0, .external_lex_state = 6},
  [348] = {.lex_state = 0, .external_lex_state = 6},
  [349] = {.lex_state = 0, .external_lex_state = 9},
  [350] = {.lex_state = 0, .external_lex_state = 9},
  [351] = {.lex_state = 0, .external_lex_state = 9},
  [352] = {.lex_state = 0, .external_lex_state = 9},
  [353] = {.lex_state = 0, .external_lex_state = 9},
  [354] = {.lex_state = 0, .external_lex_state = 9},
  [355] = {.lex_state = 0, .external_lex_state = 9},
  [356] = {.lex_state = 0, .external_lex_state = 9},
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
  [367] = {.lex_state = 0, .external_lex_state = 21},
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
  [379] = {.lex_state = 0, .external_lex_state = 21},
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
  [394] = {.lex_state = 0, .external_lex_state = 21},
  [395] = {.lex_state = 0, .external_lex_state = 22},
  [396] = {.lex_state = 0, .external_lex_state = 22},
  [397] = {.lex_state = 13, .external_lex_state = 4},
  [398] = {.lex_state = 0, .external_lex_state = 22},
  [399] = {.lex_state = 0, .external_lex_state = 22},
  [400] = {.lex_state = 0, .external_lex_state = 22},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 0, .external_lex_state = 16},
  [403] = {.lex_state = 0, .external_lex_state = 22},
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
  [510] = {.lex_state = 14, .external_lex_state = 4},
  [511] = {.lex_state = 0, .external_lex_state = 14},
  [512] = {.lex_state = 0, .external_lex_state = 14},
  [513] = {.lex_state = 14, .external_lex_state = 4},
  [514] = {.lex_state = 0, .external_lex_state = 21},
  [515] = {.lex_state = 0, .external_lex_state = 20},
  [516] = {.lex_state = 0, .external_lex_state = 23},
  [517] = {.lex_state = 0, .external_lex_state = 21},
  [518] = {.lex_state = 0, .external_lex_state = 21},
  [519] = {.lex_state = 0, .external_lex_state = 21},
  [520] = {.lex_state = 0, .external_lex_state = 21},
  [521] = {.lex_state = 0, .external_lex_state = 21},
  [522] = {.lex_state = 0, .external_lex_state = 21},
  [523] = {.lex_state = 0, .external_lex_state = 20},
  [524] = {.lex_state = 16},
  [525] = {.lex_state = 0, .external_lex_state = 21},
  [526] = {.lex_state = 0, .external_lex_state = 21},
  [527] = {.lex_state = 0, .external_lex_state = 21},
  [528] = {.lex_state = 0, .external_lex_state = 21},
  [529] = {.lex_state = 0, .external_lex_state = 21},
  [530] = {.lex_state = 0, .external_lex_state = 21},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0, .external_lex_state = 21},
  [533] = {.lex_state = 0, .external_lex_state = 21},
  [534] = {.lex_state = 0, .external_lex_state = 21},
  [535] = {.lex_state = 0, .external_lex_state = 21},
  [536] = {.lex_state = 0, .external_lex_state = 21},
  [537] = {.lex_state = 0, .external_lex_state = 21},
  [538] = {.lex_state = 0, .external_lex_state = 20},
  [539] = {.lex_state = 0, .external_lex_state = 21},
  [540] = {.lex_state = 0, .external_lex_state = 15},
  [541] = {.lex_state = 0, .external_lex_state = 22},
  [542] = {.lex_state = 0, .external_lex_state = 15},
  [543] = {.lex_state = 0, .external_lex_state = 16},
  [544] = {.lex_state = 0, .external_lex_state = 23},
  [545] = {.lex_state = 0, .external_lex_state = 19},
  [546] = {.lex_state = 0, .external_lex_state = 13},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 13},
  [550] = {.lex_state = 0, .external_lex_state = 13},
  [551] = {.lex_state = 0, .external_lex_state = 11},
  [552] = {.lex_state = 0, .external_lex_state = 11},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 0, .external_lex_state = 11},
  [555] = {.lex_state = 0, .external_lex_state = 13},
  [556] = {.lex_state = 0, .external_lex_state = 11},
  [557] = {.lex_state = 0, .external_lex_state = 11},
  [558] = {.lex_state = 0, .external_lex_state = 11},
  [559] = {.lex_state = 0, .external_lex_state = 11},
  [560] = {.lex_state = 0, .external_lex_state = 11},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 11},
  [563] = {.lex_state = 0, .external_lex_state = 11},
  [564] = {.lex_state = 0, .external_lex_state = 11},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 11},
  [567] = {.lex_state = 0, .external_lex_state = 11},
  [568] = {.lex_state = 0, .external_lex_state = 11},
  [569] = {.lex_state = 0, .external_lex_state = 11},
  [570] = {.lex_state = 0, .external_lex_state = 11},
  [571] = {.lex_state = 1},
  [572] = {.lex_state = 0, .external_lex_state = 11},
  [573] = {.lex_state = 0, .external_lex_state = 11},
  [574] = {.lex_state = 0, .external_lex_state = 11},
  [575] = {.lex_state = 0, .external_lex_state = 11},
  [576] = {.lex_state = 0, .external_lex_state = 2},
  [577] = {.lex_state = 0, .external_lex_state = 11},
  [578] = {.lex_state = 0, .external_lex_state = 11},
  [579] = {.lex_state = 0, .external_lex_state = 24},
  [580] = {.lex_state = 0, .external_lex_state = 11},
  [581] = {.lex_state = 0, .external_lex_state = 11},
  [582] = {.lex_state = 0, .external_lex_state = 11},
  [583] = {.lex_state = 0, .external_lex_state = 11},
  [584] = {.lex_state = 0, .external_lex_state = 11},
  [585] = {.lex_state = 0, .external_lex_state = 11},
  [586] = {.lex_state = 0, .external_lex_state = 11},
  [587] = {.lex_state = 0, .external_lex_state = 11},
  [588] = {.lex_state = 0, .external_lex_state = 11},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 11},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 19},
  [595] = {.lex_state = 0, .external_lex_state = 2},
  [596] = {.lex_state = 0, .external_lex_state = 11},
  [597] = {.lex_state = 0, .external_lex_state = 19},
  [598] = {.lex_state = 0, .external_lex_state = 19},
  [599] = {.lex_state = 0, .external_lex_state = 19},
  [600] = {.lex_state = 0, .external_lex_state = 19},
  [601] = {.lex_state = 0, .external_lex_state = 19},
  [602] = {.lex_state = 0, .external_lex_state = 19},
  [603] = {.lex_state = 0, .external_lex_state = 19},
  [604] = {.lex_state = 0, .external_lex_state = 19},
  [605] = {.lex_state = 0, .external_lex_state = 19},
  [606] = {.lex_state = 0, .external_lex_state = 19},
  [607] = {.lex_state = 6, .external_lex_state = 4},
  [608] = {.lex_state = 0, .external_lex_state = 19},
  [609] = {.lex_state = 13, .external_lex_state = 4},
  [610] = {.lex_state = 0, .external_lex_state = 19},
  [611] = {.lex_state = 0, .external_lex_state = 19},
  [612] = {.lex_state = 0, .external_lex_state = 19},
  [613] = {.lex_state = 0, .external_lex_state = 19},
  [614] = {.lex_state = 0, .external_lex_state = 19},
  [615] = {.lex_state = 0, .external_lex_state = 19},
  [616] = {.lex_state = 0, .external_lex_state = 19},
  [617] = {.lex_state = 0, .external_lex_state = 19},
  [618] = {.lex_state = 0, .external_lex_state = 19},
  [619] = {.lex_state = 0, .external_lex_state = 19},
  [620] = {.lex_state = 0, .external_lex_state = 19},
  [621] = {.lex_state = 0, .external_lex_state = 19},
  [622] = {.lex_state = 0, .external_lex_state = 19},
  [623] = {.lex_state = 0, .external_lex_state = 19},
  [624] = {.lex_state = 0, .external_lex_state = 19},
  [625] = {.lex_state = 0, .external_lex_state = 19},
  [626] = {.lex_state = 0, .external_lex_state = 19},
  [627] = {.lex_state = 0, .external_lex_state = 19},
  [628] = {.lex_state = 0, .external_lex_state = 19},
  [629] = {.lex_state = 0, .external_lex_state = 19},
  [630] = {.lex_state = 0, .external_lex_state = 19},
  [631] = {.lex_state = 0, .external_lex_state = 19},
  [632] = {.lex_state = 0, .external_lex_state = 11},
  [633] = {.lex_state = 6, .external_lex_state = 4},
  [634] = {.lex_state = 0, .external_lex_state = 19},
  [635] = {.lex_state = 0, .external_lex_state = 18},
  [636] = {.lex_state = 0, .external_lex_state = 18},
  [637] = {.lex_state = 0, .external_lex_state = 19},
  [638] = {.lex_state = 0, .external_lex_state = 19},
  [639] = {.lex_state = 0, .external_lex_state = 19},
  [640] = {.lex_state = 0, .external_lex_state = 19},
  [641] = {.lex_state = 0, .external_lex_state = 19},
  [642] = {.lex_state = 0, .external_lex_state = 19},
  [643] = {.lex_state = 0, .external_lex_state = 19},
  [644] = {.lex_state = 0, .external_lex_state = 19},
  [645] = {.lex_state = 0, .external_lex_state = 19},
  [646] = {.lex_state = 0, .external_lex_state = 19},
  [647] = {.lex_state = 0, .external_lex_state = 19},
  [648] = {.lex_state = 0, .external_lex_state = 19},
  [649] = {.lex_state = 0, .external_lex_state = 19},
  [650] = {.lex_state = 0, .external_lex_state = 19},
  [651] = {.lex_state = 0, .external_lex_state = 19},
  [652] = {.lex_state = 0, .external_lex_state = 19},
  [653] = {.lex_state = 0, .external_lex_state = 19},
  [654] = {.lex_state = 0, .external_lex_state = 19},
  [655] = {.lex_state = 0, .external_lex_state = 19},
  [656] = {.lex_state = 0, .external_lex_state = 19},
  [657] = {.lex_state = 0, .external_lex_state = 19},
  [658] = {.lex_state = 0, .external_lex_state = 19},
  [659] = {.lex_state = 0, .external_lex_state = 19},
  [660] = {.lex_state = 0, .external_lex_state = 19},
  [661] = {.lex_state = 0, .external_lex_state = 19},
  [662] = {.lex_state = 0, .external_lex_state = 19},
  [663] = {.lex_state = 0, .external_lex_state = 19},
  [664] = {.lex_state = 0, .external_lex_state = 19},
  [665] = {.lex_state = 0, .external_lex_state = 19},
  [666] = {.lex_state = 0, .external_lex_state = 19},
  [667] = {.lex_state = 0, .external_lex_state = 19},
  [668] = {.lex_state = 0, .external_lex_state = 19},
  [669] = {.lex_state = 0, .external_lex_state = 19},
  [670] = {.lex_state = 0, .external_lex_state = 19},
  [671] = {.lex_state = 0, .external_lex_state = 19},
  [672] = {.lex_state = 0, .external_lex_state = 19},
  [673] = {.lex_state = 0, .external_lex_state = 19},
  [674] = {.lex_state = 0, .external_lex_state = 19},
  [675] = {.lex_state = 0, .external_lex_state = 19},
  [676] = {.lex_state = 0, .external_lex_state = 19},
  [677] = {.lex_state = 0, .external_lex_state = 19},
  [678] = {.lex_state = 0, .external_lex_state = 19},
  [679] = {.lex_state = 0, .external_lex_state = 19},
  [680] = {.lex_state = 0, .external_lex_state = 19},
  [681] = {.lex_state = 0, .external_lex_state = 19},
  [682] = {.lex_state = 13, .external_lex_state = 4},
  [683] = {.lex_state = 0, .external_lex_state = 19},
  [684] = {.lex_state = 0, .external_lex_state = 19},
  [685] = {.lex_state = 0, .external_lex_state = 19},
  [686] = {.lex_state = 0, .external_lex_state = 19},
  [687] = {.lex_state = 1},
  [688] = {.lex_state = 0, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 2},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 4},
  [692] = {.lex_state = 0, .external_lex_state = 4},
  [693] = {.lex_state = 0, .external_lex_state = 25},
  [694] = {.lex_state = 0, .external_lex_state = 4},
  [695] = {.lex_state = 0, .external_lex_state = 2},
  [696] = {.lex_state = 0, .external_lex_state = 4},
  [697] = {.lex_state = 0, .external_lex_state = 2},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 26},
  [700] = {.lex_state = 0, .external_lex_state = 2},
  [701] = {.lex_state = 6, .external_lex_state = 4},
  [702] = {.lex_state = 0, .external_lex_state = 2},
  [703] = {.lex_state = 15, .external_lex_state = 4},
  [704] = {.lex_state = 0, .external_lex_state = 2},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 0, .external_lex_state = 2},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 11},
  [709] = {.lex_state = 13, .external_lex_state = 4},
  [710] = {.lex_state = 0, .external_lex_state = 2},
  [711] = {.lex_state = 1},
  [712] = {.lex_state = 1},
  [713] = {.lex_state = 1},
  [714] = {.lex_state = 0, .external_lex_state = 2},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 1},
  [717] = {.lex_state = 0, .external_lex_state = 2},
  [718] = {.lex_state = 0, .external_lex_state = 2},
  [719] = {.lex_state = 0, .external_lex_state = 2},
  [720] = {.lex_state = 0, .external_lex_state = 2},
  [721] = {.lex_state = 0, .external_lex_state = 4},
  [722] = {.lex_state = 0, .external_lex_state = 4},
  [723] = {.lex_state = 0, .external_lex_state = 11},
  [724] = {.lex_state = 69},
  [725] = {.lex_state = 69},
  [726] = {.lex_state = 17},
  [727] = {.lex_state = 0, .external_lex_state = 2},
  [728] = {.lex_state = 0, .external_lex_state = 2},
  [729] = {.lex_state = 0, .external_lex_state = 2},
  [730] = {.lex_state = 0, .external_lex_state = 2},
  [731] = {.lex_state = 0, .external_lex_state = 2},
  [732] = {.lex_state = 0, .external_lex_state = 2},
  [733] = {.lex_state = 0, .external_lex_state = 2},
  [734] = {.lex_state = 5, .external_lex_state = 4},
  [735] = {.lex_state = 0, .external_lex_state = 11},
  [736] = {.lex_state = 0, .external_lex_state = 2},
  [737] = {.lex_state = 0, .external_lex_state = 11},
  [738] = {.lex_state = 0, .external_lex_state = 2},
  [739] = {.lex_state = 0, .external_lex_state = 2},
  [740] = {.lex_state = 0, .external_lex_state = 2},
  [741] = {.lex_state = 0, .external_lex_state = 11},
  [742] = {.lex_state = 0, .external_lex_state = 19},
  [743] = {.lex_state = 0, .external_lex_state = 19},
  [744] = {.lex_state = 0, .external_lex_state = 19},
  [745] = {.lex_state = 0, .external_lex_state = 19},
  [746] = {.lex_state = 0, .external_lex_state = 19},
  [747] = {.lex_state = 0, .external_lex_state = 24},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 0, .external_lex_state = 11},
  [750] = {.lex_state = 0, .external_lex_state = 2},
  [751] = {.lex_state = 0, .external_lex_state = 2},
  [752] = {.lex_state = 0, .external_lex_state = 11},
  [753] = {.lex_state = 1},
  [754] = {.lex_state = 1},
  [755] = {.lex_state = 0, .external_lex_state = 11},
  [756] = {.lex_state = 0, .external_lex_state = 11},
  [757] = {.lex_state = 0, .external_lex_state = 11},
  [758] = {.lex_state = 0, .external_lex_state = 11},
  [759] = {.lex_state = 0, .external_lex_state = 11},
  [760] = {.lex_state = 0, .external_lex_state = 11},
  [761] = {.lex_state = 0, .external_lex_state = 11},
  [762] = {.lex_state = 0, .external_lex_state = 11},
  [763] = {.lex_state = 0, .external_lex_state = 11},
  [764] = {.lex_state = 0, .external_lex_state = 18},
  [765] = {.lex_state = 0, .external_lex_state = 18},
  [766] = {.lex_state = 0, .external_lex_state = 18},
  [767] = {.lex_state = 0, .external_lex_state = 18},
  [768] = {.lex_state = 0, .external_lex_state = 18},
  [769] = {.lex_state = 0, .external_lex_state = 18},
  [770] = {.lex_state = 0, .external_lex_state = 2},
  [771] = {.lex_state = 1, .external_lex_state = 4},
  [772] = {.lex_state = 0, .external_lex_state = 18},
  [773] = {.lex_state = 0, .external_lex_state = 18},
  [774] = {.lex_state = 0, .external_lex_state = 19},
  [775] = {.lex_state = 0, .external_lex_state = 19},
  [776] = {.lex_state = 0, .external_lex_state = 19},
  [777] = {.lex_state = 0, .external_lex_state = 19},
  [778] = {.lex_state = 0, .external_lex_state = 19},
  [779] = {.lex_state = 0, .external_lex_state = 19},
  [780] = {.lex_state = 0, .external_lex_state = 11},
  [781] = {.lex_state = 0, .external_lex_state = 11},
  [782] = {.lex_state = 0, .external_lex_state = 2},
  [783] = {.lex_state = 0, .external_lex_state = 2},
  [784] = {.lex_state = 0, .external_lex_state = 19},
  [785] = {.lex_state = 0, .external_lex_state = 19},
  [786] = {.lex_state = 0, .external_lex_state = 11},
  [787] = {.lex_state = 0, .external_lex_state = 11},
  [788] = {.lex_state = 0, .external_lex_state = 26},
  [789] = {.lex_state = 0, .external_lex_state = 11},
  [790] = {.lex_state = 13, .external_lex_state = 4},
  [791] = {.lex_state = 16},
  [792] = {.lex_state = 0, .external_lex_state = 11},
  [793] = {.lex_state = 0, .external_lex_state = 2},
  [794] = {.lex_state = 0, .external_lex_state = 2},
  [795] = {.lex_state = 0, .external_lex_state = 2},
  [796] = {.lex_state = 0, .external_lex_state = 2},
  [797] = {.lex_state = 1, .external_lex_state = 4},
  [798] = {.lex_state = 0, .external_lex_state = 11},
  [799] = {.lex_state = 0, .external_lex_state = 2},
  [800] = {.lex_state = 0, .external_lex_state = 2},
  [801] = {.lex_state = 0, .external_lex_state = 2},
  [802] = {.lex_state = 1},
  [803] = {.lex_state = 0, .external_lex_state = 2},
  [804] = {.lex_state = 0, .external_lex_state = 11},
  [805] = {.lex_state = 0, .external_lex_state = 11},
  [806] = {.lex_state = 1, .external_lex_state = 4},
  [807] = {.lex_state = 1, .external_lex_state = 4},
  [808] = {.lex_state = 0, .external_lex_state = 2},
  [809] = {.lex_state = 0, .external_lex_state = 2},
  [810] = {.lex_state = 0, .external_lex_state = 2},
  [811] = {.lex_state = 0, .external_lex_state = 11},
  [812] = {.lex_state = 0, .external_lex_state = 11},
  [813] = {.lex_state = 0, .external_lex_state = 2},
  [814] = {.lex_state = 0, .external_lex_state = 11},
  [815] = {.lex_state = 0, .external_lex_state = 11},
  [816] = {.lex_state = 0, .external_lex_state = 11},
  [817] = {.lex_state = 5, .external_lex_state = 4},
  [818] = {.lex_state = 0, .external_lex_state = 11},
  [819] = {.lex_state = 0, .external_lex_state = 11},
  [820] = {.lex_state = 0, .external_lex_state = 11},
  [821] = {.lex_state = 0, .external_lex_state = 11},
  [822] = {.lex_state = 0, .external_lex_state = 11},
  [823] = {.lex_state = 0, .external_lex_state = 11},
  [824] = {.lex_state = 0, .external_lex_state = 11},
  [825] = {.lex_state = 0, .external_lex_state = 26},
  [826] = {.lex_state = 0, .external_lex_state = 2},
  [827] = {.lex_state = 0, .external_lex_state = 11},
  [828] = {.lex_state = 0, .external_lex_state = 11},
  [829] = {.lex_state = 13, .external_lex_state = 4},
  [830] = {.lex_state = 0, .external_lex_state = 11},
  [831] = {.lex_state = 0, .external_lex_state = 11},
  [832] = {.lex_state = 0, .external_lex_state = 11},
  [833] = {.lex_state = 0, .external_lex_state = 11},
  [834] = {.lex_state = 0, .external_lex_state = 11},
  [835] = {.lex_state = 0, .external_lex_state = 11},
  [836] = {.lex_state = 0, .external_lex_state = 11},
  [837] = {.lex_state = 0, .external_lex_state = 11},
  [838] = {.lex_state = 1, .external_lex_state = 4},
  [839] = {.lex_state = 0, .external_lex_state = 11},
  [840] = {.lex_state = 0, .external_lex_state = 2},
  [841] = {.lex_state = 0, .external_lex_state = 2},
  [842] = {.lex_state = 0, .external_lex_state = 2},
  [843] = {.lex_state = 0, .external_lex_state = 2},
  [844] = {.lex_state = 0, .external_lex_state = 2},
  [845] = {.lex_state = 1, .external_lex_state = 4},
  [846] = {.lex_state = 1, .external_lex_state = 4},
  [847] = {.lex_state = 0, .external_lex_state = 2},
  [848] = {.lex_state = 0, .external_lex_state = 11},
  [849] = {.lex_state = 0, .external_lex_state = 11},
  [850] = {.lex_state = 0, .external_lex_state = 11},
  [851] = {.lex_state = 0, .external_lex_state = 11},
  [852] = {.lex_state = 0, .external_lex_state = 11},
  [853] = {.lex_state = 0, .external_lex_state = 11},
  [854] = {.lex_state = 0, .external_lex_state = 24},
  [855] = {.lex_state = 0, .external_lex_state = 11},
  [856] = {.lex_state = 0, .external_lex_state = 11},
  [857] = {.lex_state = 0, .external_lex_state = 11},
  [858] = {.lex_state = 0, .external_lex_state = 26},
  [859] = {.lex_state = 0, .external_lex_state = 11},
  [860] = {.lex_state = 0, .external_lex_state = 11},
  [861] = {.lex_state = 0, .external_lex_state = 11},
  [862] = {.lex_state = 0, .external_lex_state = 26},
  [863] = {.lex_state = 0, .external_lex_state = 11},
  [864] = {.lex_state = 0, .external_lex_state = 11},
  [865] = {.lex_state = 0, .external_lex_state = 24},
  [866] = {.lex_state = 0, .external_lex_state = 24},
  [867] = {.lex_state = 6, .external_lex_state = 4},
  [868] = {.lex_state = 15, .external_lex_state = 4},
  [869] = {.lex_state = 69},
  [870] = {.lex_state = 17},
  [871] = {.lex_state = 0, .external_lex_state = 24},
  [872] = {.lex_state = 0, .external_lex_state = 24},
  [873] = {.lex_state = 6, .external_lex_state = 4},
  [874] = {.lex_state = 15, .external_lex_state = 4},
  [875] = {.lex_state = 0, .external_lex_state = 24},
  [876] = {.lex_state = 0, .external_lex_state = 24},
  [877] = {.lex_state = 0, .external_lex_state = 24},
  [878] = {.lex_state = 0, .external_lex_state = 24},
  [879] = {.lex_state = 1},
  [880] = {.lex_state = 0, .external_lex_state = 11},
  [881] = {.lex_state = 1, .external_lex_state = 4},
  [882] = {.lex_state = 1, .external_lex_state = 4},
  [883] = {.lex_state = 0, .external_lex_state = 11},
  [884] = {.lex_state = 0, .external_lex_state = 11},
  [885] = {.lex_state = 0, .external_lex_state = 11},
  [886] = {.lex_state = 0, .external_lex_state = 25},
  [887] = {.lex_state = 0, .external_lex_state = 11},
  [888] = {.lex_state = 0, .external_lex_state = 24},
  [889] = {.lex_state = 0, .external_lex_state = 13},
  [890] = {.lex_state = 0, .external_lex_state = 11},
  [891] = {.lex_state = 0, .external_lex_state = 11},
  [892] = {.lex_state = 0, .external_lex_state = 11},
  [893] = {.lex_state = 0, .external_lex_state = 2},
  [894] = {.lex_state = 0, .external_lex_state = 4},
  [895] = {.lex_state = 0, .external_lex_state = 22},
  [896] = {.lex_state = 0, .external_lex_state = 4},
  [897] = {.lex_state = 0, .external_lex_state = 27},
  [898] = {.lex_state = 0, .external_lex_state = 22},
  [899] = {.lex_state = 0, .external_lex_state = 21},
  [900] = {.lex_state = 0, .external_lex_state = 22},
  [901] = {.lex_state = 0, .external_lex_state = 22},
  [902] = {.lex_state = 0, .external_lex_state = 21},
  [903] = {.lex_state = 0, .external_lex_state = 21},
  [904] = {.lex_state = 0, .external_lex_state = 22},
  [905] = {.lex_state = 1, .external_lex_state = 4},
  [906] = {.lex_state = 0, .external_lex_state = 21},
  [907] = {.lex_state = 0, .external_lex_state = 22},
  [908] = {.lex_state = 0, .external_lex_state = 22},
  [909] = {.lex_state = 0, .external_lex_state = 22},
  [910] = {.lex_state = 0, .external_lex_state = 22},
  [911] = {.lex_state = 0, .external_lex_state = 22},
  [912] = {.lex_state = 0, .external_lex_state = 22},
  [913] = {.lex_state = 0, .external_lex_state = 22},
  [914] = {.lex_state = 0, .external_lex_state = 21},
  [915] = {.lex_state = 0, .external_lex_state = 4},
  [916] = {.lex_state = 0, .external_lex_state = 21},
  [917] = {.lex_state = 0, .external_lex_state = 21},
  [918] = {.lex_state = 0, .external_lex_state = 27},
  [919] = {.lex_state = 1},
  [920] = {.lex_state = 0, .external_lex_state = 4},
  [921] = {.lex_state = 0, .external_lex_state = 4},
  [922] = {.lex_state = 1, .external_lex_state = 4},
  [923] = {.lex_state = 1},
  [924] = {.lex_state = 0, .external_lex_state = 4},
  [925] = {.lex_state = 1, .external_lex_state = 4},
  [926] = {.lex_state = 0, .external_lex_state = 4},
  [927] = {.lex_state = 1, .external_lex_state = 4},
  [928] = {.lex_state = 0, .external_lex_state = 4},
  [929] = {.lex_state = 0, .external_lex_state = 4},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 0, .external_lex_state = 21},
  [932] = {.lex_state = 0, .external_lex_state = 4},
  [933] = {.lex_state = 1},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 1},
  [936] = {.lex_state = 0, .external_lex_state = 4},
  [937] = {.lex_state = 1},
  [938] = {.lex_state = 0, .external_lex_state = 4},
  [939] = {.lex_state = 0, .external_lex_state = 4},
  [940] = {.lex_state = 1, .external_lex_state = 4},
  [941] = {.lex_state = 0, .external_lex_state = 4},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 1},
  [944] = {.lex_state = 0, .external_lex_state = 4},
  [945] = {.lex_state = 1, .external_lex_state = 4},
  [946] = {.lex_state = 0, .external_lex_state = 4},
  [947] = {.lex_state = 0, .external_lex_state = 4},
  [948] = {.lex_state = 0, .external_lex_state = 4},
  [949] = {.lex_state = 0, .external_lex_state = 4},
  [950] = {.lex_state = 0, .external_lex_state = 4},
  [951] = {.lex_state = 0, .external_lex_state = 4},
  [952] = {.lex_state = 0, .external_lex_state = 4},
  [953] = {.lex_state = 0, .external_lex_state = 4},
  [954] = {.lex_state = 0, .external_lex_state = 4},
  [955] = {.lex_state = 0, .external_lex_state = 4},
  [956] = {.lex_state = 1},
  [957] = {.lex_state = 0, .external_lex_state = 22},
  [958] = {.lex_state = 0, .external_lex_state = 27},
  [959] = {.lex_state = 0, .external_lex_state = 4},
  [960] = {.lex_state = 0, .external_lex_state = 4},
  [961] = {.lex_state = 0, .external_lex_state = 4},
  [962] = {.lex_state = 0, .external_lex_state = 4},
  [963] = {.lex_state = 1, .external_lex_state = 4},
  [964] = {.lex_state = 16},
  [965] = {.lex_state = 16},
  [966] = {.lex_state = 0, .external_lex_state = 4},
  [967] = {.lex_state = 0, .external_lex_state = 23},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 0, .external_lex_state = 4},
  [970] = {.lex_state = 0, .external_lex_state = 4},
  [971] = {.lex_state = 1},
  [972] = {.lex_state = 16},
  [973] = {.lex_state = 13, .external_lex_state = 4},
  [974] = {.lex_state = 0, .external_lex_state = 4},
  [975] = {.lex_state = 0, .external_lex_state = 4},
  [976] = {.lex_state = 0, .external_lex_state = 4},
  [977] = {.lex_state = 0, .external_lex_state = 4},
  [978] = {.lex_state = 1},
  [979] = {.lex_state = 0, .external_lex_state = 4},
  [980] = {.lex_state = 0, .external_lex_state = 4},
  [981] = {.lex_state = 0, .external_lex_state = 4},
  [982] = {.lex_state = 0, .external_lex_state = 4},
  [983] = {.lex_state = 0, .external_lex_state = 4},
  [984] = {.lex_state = 5, .external_lex_state = 4},
  [985] = {.lex_state = 1},
  [986] = {.lex_state = 0, .external_lex_state = 4},
  [987] = {.lex_state = 0, .external_lex_state = 4},
  [988] = {.lex_state = 0, .external_lex_state = 4},
  [989] = {.lex_state = 0, .external_lex_state = 4},
  [990] = {.lex_state = 17},
  [991] = {.lex_state = 0, .external_lex_state = 4},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 1},
  [994] = {.lex_state = 0, .external_lex_state = 4},
  [995] = {.lex_state = 1},
  [996] = {.lex_state = 0, .external_lex_state = 4},
  [997] = {.lex_state = 0, .external_lex_state = 4},
  [998] = {.lex_state = 0, .external_lex_state = 4},
  [999] = {.lex_state = 0, .external_lex_state = 4},
  [1000] = {.lex_state = 0, .external_lex_state = 4},
  [1001] = {.lex_state = 0, .external_lex_state = 4},
  [1002] = {.lex_state = 1},
  [1003] = {.lex_state = 0, .external_lex_state = 4},
  [1004] = {.lex_state = 0, .external_lex_state = 4},
  [1005] = {.lex_state = 0, .external_lex_state = 4},
  [1006] = {.lex_state = 0, .external_lex_state = 4},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 0, .external_lex_state = 4},
  [1009] = {.lex_state = 13, .external_lex_state = 4},
  [1010] = {.lex_state = 0, .external_lex_state = 4},
  [1011] = {.lex_state = 0, .external_lex_state = 4},
  [1012] = {.lex_state = 0, .external_lex_state = 4},
  [1013] = {.lex_state = 0, .external_lex_state = 4},
  [1014] = {.lex_state = 1},
  [1015] = {.lex_state = 0, .external_lex_state = 4},
  [1016] = {.lex_state = 0, .external_lex_state = 22},
  [1017] = {.lex_state = 0, .external_lex_state = 26},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 0, .external_lex_state = 4},
  [1021] = {.lex_state = 0, .external_lex_state = 4},
  [1022] = {.lex_state = 0, .external_lex_state = 4},
  [1023] = {.lex_state = 0, .external_lex_state = 4},
  [1024] = {.lex_state = 5, .external_lex_state = 4},
  [1025] = {.lex_state = 1},
  [1026] = {.lex_state = 0, .external_lex_state = 4},
  [1027] = {.lex_state = 0, .external_lex_state = 4},
  [1028] = {.lex_state = 0, .external_lex_state = 27},
  [1029] = {.lex_state = 13, .external_lex_state = 4},
  [1030] = {.lex_state = 13, .external_lex_state = 4},
  [1031] = {.lex_state = 1},
  [1032] = {.lex_state = 0, .external_lex_state = 4},
  [1033] = {.lex_state = 1},
  [1034] = {.lex_state = 0, .external_lex_state = 27},
  [1035] = {.lex_state = 0, .external_lex_state = 27},
  [1036] = {.lex_state = 0, .external_lex_state = 27},
  [1037] = {.lex_state = 0, .external_lex_state = 27},
  [1038] = {.lex_state = 16},
  [1039] = {.lex_state = 0, .external_lex_state = 4},
  [1040] = {.lex_state = 1},
  [1041] = {.lex_state = 0, .external_lex_state = 27},
  [1042] = {.lex_state = 0, .external_lex_state = 27},
  [1043] = {.lex_state = 0, .external_lex_state = 27},
  [1044] = {.lex_state = 0, .external_lex_state = 27},
  [1045] = {.lex_state = 0, .external_lex_state = 26},
  [1046] = {.lex_state = 0, .external_lex_state = 27},
  [1047] = {.lex_state = 1, .external_lex_state = 4},
  [1048] = {.lex_state = 0, .external_lex_state = 27},
  [1049] = {.lex_state = 0, .external_lex_state = 26},
  [1050] = {.lex_state = 1, .external_lex_state = 4},
  [1051] = {.lex_state = 0, .external_lex_state = 27},
  [1052] = {.lex_state = 0, .external_lex_state = 27},
  [1053] = {.lex_state = 0, .external_lex_state = 4},
  [1054] = {.lex_state = 0, .external_lex_state = 27},
  [1055] = {.lex_state = 0, .external_lex_state = 27},
  [1056] = {.lex_state = 0, .external_lex_state = 26},
  [1057] = {.lex_state = 0, .external_lex_state = 4},
  [1058] = {.lex_state = 0, .external_lex_state = 22},
  [1059] = {.lex_state = 0, .external_lex_state = 27},
  [1060] = {.lex_state = 0, .external_lex_state = 4},
  [1061] = {.lex_state = 0, .external_lex_state = 22},
  [1062] = {.lex_state = 0, .external_lex_state = 27},
  [1063] = {.lex_state = 0, .external_lex_state = 27},
  [1064] = {.lex_state = 0, .external_lex_state = 4},
  [1065] = {.lex_state = 0, .external_lex_state = 27},
  [1066] = {.lex_state = 0, .external_lex_state = 26},
  [1067] = {.lex_state = 0, .external_lex_state = 26},
  [1068] = {.lex_state = 0, .external_lex_state = 4},
  [1069] = {.lex_state = 0, .external_lex_state = 4},
  [1070] = {.lex_state = 0, .external_lex_state = 4},
  [1071] = {.lex_state = 0, .external_lex_state = 4},
  [1072] = {.lex_state = 0, .external_lex_state = 27},
  [1073] = {.lex_state = 0, .external_lex_state = 4},
  [1074] = {.lex_state = 0, .external_lex_state = 4},
  [1075] = {.lex_state = 0, .external_lex_state = 4},
  [1076] = {.lex_state = 0, .external_lex_state = 27},
  [1077] = {.lex_state = 0, .external_lex_state = 27},
  [1078] = {.lex_state = 0, .external_lex_state = 4},
  [1079] = {.lex_state = 41},
  [1080] = {.lex_state = 0, .external_lex_state = 4},
  [1081] = {.lex_state = 1},
  [1082] = {.lex_state = 0, .external_lex_state = 4},
  [1083] = {.lex_state = 0, .external_lex_state = 4},
  [1084] = {.lex_state = 1},
  [1085] = {.lex_state = 0, .external_lex_state = 4},
  [1086] = {.lex_state = 0, .external_lex_state = 27},
  [1087] = {.lex_state = 0, .external_lex_state = 4},
  [1088] = {.lex_state = 0, .external_lex_state = 4},
  [1089] = {.lex_state = 272},
  [1090] = {.lex_state = 0, .external_lex_state = 4},
  [1091] = {.lex_state = 1},
  [1092] = {.lex_state = 273},
  [1093] = {.lex_state = 0, .external_lex_state = 4},
  [1094] = {.lex_state = 0, .external_lex_state = 28},
  [1095] = {.lex_state = 0, .external_lex_state = 3},
  [1096] = {.lex_state = 0, .external_lex_state = 3},
  [1097] = {.lex_state = 1},
  [1098] = {.lex_state = 0, .external_lex_state = 5},
  [1099] = {.lex_state = 0, .external_lex_state = 27},
  [1100] = {.lex_state = 0, .external_lex_state = 4},
  [1101] = {.lex_state = 1},
  [1102] = {.lex_state = 1},
  [1103] = {.lex_state = 16},
  [1104] = {.lex_state = 273},
  [1105] = {.lex_state = 1},
  [1106] = {.lex_state = 274, .external_lex_state = 29},
  [1107] = {.lex_state = 0, .external_lex_state = 28},
  [1108] = {.lex_state = 1},
  [1109] = {.lex_state = 0, .external_lex_state = 4},
  [1110] = {.lex_state = 274, .external_lex_state = 29},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 274, .external_lex_state = 29},
  [1113] = {.lex_state = 274, .external_lex_state = 29},
  [1114] = {.lex_state = 274, .external_lex_state = 29},
  [1115] = {.lex_state = 16},
  [1116] = {.lex_state = 1},
  [1117] = {.lex_state = 274, .external_lex_state = 29},
  [1118] = {.lex_state = 274, .external_lex_state = 29},
  [1119] = {.lex_state = 1},
  [1120] = {.lex_state = 0, .external_lex_state = 28},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 1},
  [1123] = {.lex_state = 274, .external_lex_state = 29},
  [1124] = {.lex_state = 274, .external_lex_state = 29},
  [1125] = {.lex_state = 273},
  [1126] = {.lex_state = 274, .external_lex_state = 29},
  [1127] = {.lex_state = 274, .external_lex_state = 29},
  [1128] = {.lex_state = 274, .external_lex_state = 29},
  [1129] = {.lex_state = 274, .external_lex_state = 29},
  [1130] = {.lex_state = 274, .external_lex_state = 29},
  [1131] = {.lex_state = 274, .external_lex_state = 29},
  [1132] = {.lex_state = 274, .external_lex_state = 29},
  [1133] = {.lex_state = 274, .external_lex_state = 29},
  [1134] = {.lex_state = 1},
  [1135] = {.lex_state = 1},
  [1136] = {.lex_state = 274, .external_lex_state = 29},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 0, .external_lex_state = 26},
  [1139] = {.lex_state = 41},
  [1140] = {.lex_state = 0, .external_lex_state = 30},
  [1141] = {.lex_state = 16},
  [1142] = {.lex_state = 1},
  [1143] = {.lex_state = 1},
  [1144] = {.lex_state = 0, .external_lex_state = 31},
  [1145] = {.lex_state = 0, .external_lex_state = 30},
  [1146] = {.lex_state = 0, .external_lex_state = 31},
  [1147] = {.lex_state = 0, .external_lex_state = 30},
  [1148] = {.lex_state = 1},
  [1149] = {.lex_state = 0, .external_lex_state = 30},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 0, .external_lex_state = 30},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 0, .external_lex_state = 3},
  [1154] = {.lex_state = 0, .external_lex_state = 27},
  [1155] = {.lex_state = 16},
  [1156] = {.lex_state = 1},
  [1157] = {.lex_state = 0, .external_lex_state = 31},
  [1158] = {.lex_state = 0, .external_lex_state = 30},
  [1159] = {.lex_state = 0, .external_lex_state = 31},
  [1160] = {.lex_state = 0, .external_lex_state = 30},
  [1161] = {.lex_state = 0, .external_lex_state = 30},
  [1162] = {.lex_state = 274, .external_lex_state = 29},
  [1163] = {.lex_state = 274, .external_lex_state = 29},
  [1164] = {.lex_state = 0, .external_lex_state = 30},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 273},
  [1168] = {.lex_state = 1},
  [1169] = {.lex_state = 1},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 1},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 1},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 16},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 0, .external_lex_state = 30},
  [1180] = {.lex_state = 1},
  [1181] = {.lex_state = 272},
  [1182] = {.lex_state = 1},
  [1183] = {.lex_state = 0, .external_lex_state = 31},
  [1184] = {.lex_state = 0, .external_lex_state = 4},
  [1185] = {.lex_state = 0, .external_lex_state = 28},
  [1186] = {.lex_state = 0, .external_lex_state = 4},
  [1187] = {.lex_state = 273},
  [1188] = {.lex_state = 0, .external_lex_state = 26},
  [1189] = {.lex_state = 0, .external_lex_state = 31},
  [1190] = {.lex_state = 1},
  [1191] = {.lex_state = 41},
  [1192] = {.lex_state = 0, .external_lex_state = 30},
  [1193] = {.lex_state = 5},
  [1194] = {.lex_state = 1},
  [1195] = {.lex_state = 0, .external_lex_state = 4},
  [1196] = {.lex_state = 273},
  [1197] = {.lex_state = 1},
  [1198] = {.lex_state = 1},
  [1199] = {.lex_state = 1},
  [1200] = {.lex_state = 1},
  [1201] = {.lex_state = 0, .external_lex_state = 30},
  [1202] = {.lex_state = 0, .external_lex_state = 32},
  [1203] = {.lex_state = 0, .external_lex_state = 29},
  [1204] = {.lex_state = 1},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 1},
  [1207] = {.lex_state = 1},
  [1208] = {.lex_state = 272},
  [1209] = {.lex_state = 0, .external_lex_state = 32},
  [1210] = {.lex_state = 1},
  [1211] = {.lex_state = 275},
  [1212] = {.lex_state = 1},
  [1213] = {.lex_state = 1},
  [1214] = {.lex_state = 1},
  [1215] = {.lex_state = 41},
  [1216] = {.lex_state = 0, .external_lex_state = 32},
  [1217] = {.lex_state = 0, .external_lex_state = 32},
  [1218] = {.lex_state = 1},
  [1219] = {.lex_state = 1},
  [1220] = {.lex_state = 1},
  [1221] = {.lex_state = 0, .external_lex_state = 32},
  [1222] = {.lex_state = 0, .external_lex_state = 29},
  [1223] = {.lex_state = 1},
  [1224] = {.lex_state = 0, .external_lex_state = 29},
  [1225] = {.lex_state = 0, .external_lex_state = 29},
  [1226] = {.lex_state = 0, .external_lex_state = 4},
  [1227] = {.lex_state = 0, .external_lex_state = 29},
  [1228] = {.lex_state = 276},
  [1229] = {.lex_state = 1},
  [1230] = {.lex_state = 1},
  [1231] = {.lex_state = 41},
  [1232] = {.lex_state = 276},
  [1233] = {.lex_state = 1},
  [1234] = {.lex_state = 41},
  [1235] = {.lex_state = 0, .external_lex_state = 32},
  [1236] = {.lex_state = 0, .external_lex_state = 29},
  [1237] = {.lex_state = 1},
  [1238] = {.lex_state = 0, .external_lex_state = 32},
  [1239] = {.lex_state = 1},
  [1240] = {.lex_state = 41},
  [1241] = {.lex_state = 0, .external_lex_state = 32},
  [1242] = {.lex_state = 0, .external_lex_state = 29},
  [1243] = {.lex_state = 1},
  [1244] = {.lex_state = 1},
  [1245] = {.lex_state = 0, .external_lex_state = 29},
  [1246] = {.lex_state = 0, .external_lex_state = 29},
  [1247] = {.lex_state = 0, .external_lex_state = 29},
  [1248] = {.lex_state = 0, .external_lex_state = 4},
  [1249] = {.lex_state = 0, .external_lex_state = 4},
  [1250] = {.lex_state = 41},
  [1251] = {.lex_state = 29},
  [1252] = {.lex_state = 275},
  [1253] = {.lex_state = 0, .external_lex_state = 29},
  [1254] = {.lex_state = 0, .external_lex_state = 29},
  [1255] = {.lex_state = 1},
  [1256] = {.lex_state = 1},
  [1257] = {.lex_state = 1},
  [1258] = {.lex_state = 0, .external_lex_state = 4},
  [1259] = {.lex_state = 0, .external_lex_state = 29},
  [1260] = {.lex_state = 0, .external_lex_state = 32},
  [1261] = {.lex_state = 0, .external_lex_state = 29},
  [1262] = {.lex_state = 0, .external_lex_state = 29},
  [1263] = {.lex_state = 0, .external_lex_state = 4},
  [1264] = {.lex_state = 0, .external_lex_state = 32},
  [1265] = {.lex_state = 0, .external_lex_state = 4},
  [1266] = {.lex_state = 0, .external_lex_state = 32},
  [1267] = {.lex_state = 1},
  [1268] = {.lex_state = 0, .external_lex_state = 29},
  [1269] = {.lex_state = 0, .external_lex_state = 29},
  [1270] = {.lex_state = 0, .external_lex_state = 29},
  [1271] = {.lex_state = 0, .external_lex_state = 29},
  [1272] = {.lex_state = 0, .external_lex_state = 4},
  [1273] = {.lex_state = 1},
  [1274] = {.lex_state = 0, .external_lex_state = 4},
  [1275] = {.lex_state = 1},
  [1276] = {.lex_state = 0, .external_lex_state = 29},
  [1277] = {.lex_state = 1},
  [1278] = {.lex_state = 1},
  [1279] = {.lex_state = 0, .external_lex_state = 4},
  [1280] = {.lex_state = 1},
  [1281] = {.lex_state = 1},
  [1282] = {.lex_state = 0, .external_lex_state = 4},
  [1283] = {.lex_state = 0},
  [1284] = {.lex_state = 41},
  [1285] = {.lex_state = 5},
  [1286] = {.lex_state = 274},
  [1287] = {.lex_state = 0, .external_lex_state = 29},
  [1288] = {.lex_state = 0, .external_lex_state = 32},
  [1289] = {.lex_state = 0, .external_lex_state = 29},
  [1290] = {.lex_state = 0, .external_lex_state = 29},
  [1291] = {.lex_state = 0, .external_lex_state = 4},
  [1292] = {.lex_state = 1},
  [1293] = {.lex_state = 0, .external_lex_state = 29},
  [1294] = {.lex_state = 1},
  [1295] = {.lex_state = 0, .external_lex_state = 32},
  [1296] = {.lex_state = 0, .external_lex_state = 32},
  [1297] = {.lex_state = 0, .external_lex_state = 4},
  [1298] = {.lex_state = 276},
  [1299] = {.lex_state = 0, .external_lex_state = 29},
  [1300] = {.lex_state = 0, .external_lex_state = 4},
  [1301] = {.lex_state = 0, .external_lex_state = 29},
  [1302] = {.lex_state = 0, .external_lex_state = 29},
  [1303] = {.lex_state = 1},
  [1304] = {.lex_state = 1},
  [1305] = {.lex_state = 0, .external_lex_state = 4},
  [1306] = {.lex_state = 0, .external_lex_state = 32},
  [1307] = {.lex_state = 1},
  [1308] = {.lex_state = 1},
  [1309] = {.lex_state = 1},
  [1310] = {.lex_state = 1},
  [1311] = {.lex_state = 1},
  [1312] = {.lex_state = 0, .external_lex_state = 29},
  [1313] = {.lex_state = 0, .external_lex_state = 29},
  [1314] = {.lex_state = 41},
  [1315] = {.lex_state = 0, .external_lex_state = 29},
  [1316] = {.lex_state = 275},
  [1317] = {.lex_state = 1},
  [1318] = {.lex_state = 1},
  [1319] = {.lex_state = 0, .external_lex_state = 4},
  [1320] = {.lex_state = 1},
  [1321] = {.lex_state = 1},
  [1322] = {.lex_state = 1},
  [1323] = {.lex_state = 41},
  [1324] = {.lex_state = 1},
  [1325] = {.lex_state = 0, .external_lex_state = 4},
  [1326] = {.lex_state = 1},
  [1327] = {.lex_state = 1},
  [1328] = {.lex_state = 0, .external_lex_state = 29},
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
    [sym__settle_text_start] = ACTIONS(1),
    [sym__text_indent] = ACTIONS(1),
    [sym__cap_text_start] = ACTIONS(1),
    [sym_indented_raw_text] = ACTIONS(1),
    [sym__flow_raw_text] = ACTIONS(1),
    [sym__agic_raw_text] = ACTIONS(1),
    [sym__error_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1283),
    [sym_item] = STATE(154),
    [sym__trivia] = STATE(154),
    [aux_sym_source_file_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(708),
    [sym_let_statement] = STATE(708),
    [sym_run_statement] = STATE(708),
    [sym_implicit_run_statement] = STATE(708),
    [sym__implicit_run_line] = STATE(134),
    [sym_seek_statement] = STATE(708),
    [sym_ask_statement] = STATE(708),
    [sym_scatter_statement] = STATE(708),
    [sym_storm_statement] = STATE(708),
    [sym_gather_statement] = STATE(708),
    [sym_settle_statement] = STATE(708),
    [sym_map_statement] = STATE(708),
    [sym_keep_statement] = STATE(708),
    [sym_drop_statement] = STATE(708),
    [sym_sort_statement] = STATE(708),
    [sym_repeat_statement] = STATE(708),
    [sym_invalid_flow_reserved_statement] = STATE(708),
    [sym__query_directive_key] = STATE(1009),
    [sym__route_directive_key] = STATE(1009),
    [sym_directive_key] = STATE(709),
    [sym_role] = STATE(709),
    [sym__flow_reserved_word] = STATE(709),
    [sym__agic_reserved_word] = STATE(709),
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
    [sym__flow_operation] = STATE(708),
    [sym_let_statement] = STATE(708),
    [sym_run_statement] = STATE(708),
    [sym_implicit_run_statement] = STATE(708),
    [sym__implicit_run_line] = STATE(134),
    [sym_seek_statement] = STATE(708),
    [sym_ask_statement] = STATE(708),
    [sym_scatter_statement] = STATE(708),
    [sym_storm_statement] = STATE(708),
    [sym_gather_statement] = STATE(708),
    [sym_settle_statement] = STATE(708),
    [sym_map_statement] = STATE(708),
    [sym_keep_statement] = STATE(708),
    [sym_drop_statement] = STATE(708),
    [sym_sort_statement] = STATE(708),
    [sym_repeat_statement] = STATE(708),
    [sym_invalid_flow_reserved_statement] = STATE(708),
    [sym__query_directive_key] = STATE(1009),
    [sym__route_directive_key] = STATE(1009),
    [sym_directive_key] = STATE(709),
    [sym_role] = STATE(709),
    [sym__flow_reserved_word] = STATE(709),
    [sym__agic_reserved_word] = STATE(709),
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
    [sym__flow_operation] = STATE(594),
    [sym_let_statement] = STATE(594),
    [sym_run_statement] = STATE(594),
    [sym_implicit_run_statement] = STATE(594),
    [sym__implicit_run_line] = STATE(104),
    [sym_seek_statement] = STATE(594),
    [sym_ask_statement] = STATE(594),
    [sym_scatter_statement] = STATE(594),
    [sym_storm_statement] = STATE(594),
    [sym_gather_statement] = STATE(594),
    [sym_settle_statement] = STATE(594),
    [sym_map_statement] = STATE(594),
    [sym_keep_statement] = STATE(594),
    [sym_drop_statement] = STATE(594),
    [sym_sort_statement] = STATE(594),
    [sym_repeat_statement] = STATE(594),
    [sym_invalid_flow_reserved_statement] = STATE(594),
    [sym__query_directive_key] = STATE(1009),
    [sym__route_directive_key] = STATE(1009),
    [sym_directive_key] = STATE(790),
    [sym_role] = STATE(790),
    [sym__flow_reserved_word] = STATE(790),
    [sym__agic_reserved_word] = STATE(790),
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
    [sym__flow_operation] = STATE(229),
    [sym_let_statement] = STATE(229),
    [sym_run_statement] = STATE(229),
    [sym_implicit_run_statement] = STATE(229),
    [sym__implicit_run_line] = STATE(76),
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
    [sym__query_directive_key] = STATE(1009),
    [sym__route_directive_key] = STATE(1009),
    [sym_directive_key] = STATE(829),
    [sym_role] = STATE(829),
    [sym__flow_reserved_word] = STATE(829),
    [sym__agic_reserved_word] = STATE(829),
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
    STATE(586), 1,
      sym_text_block,
    STATE(788), 1,
      sym_line_end,
    STATE(848), 1,
      sym_text_inline,
    STATE(849), 13,
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
    STATE(637), 1,
      sym_text_inline,
    STATE(742), 1,
      sym_text_block,
    STATE(858), 1,
      sym_line_end,
    STATE(638), 13,
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
    STATE(274), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(862), 1,
      sym_line_end,
    STATE(275), 13,
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
    STATE(1152), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(741), 13,
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
    STATE(1142), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(598), 13,
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
    STATE(1156), 1,
      sym_local_name,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(234), 13,
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
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(209), 1,
      anon_sym_tool,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    STATE(118), 1,
      sym__unroled_message_line,
    STATE(633), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(207), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(632), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(682), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1009), 2,
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
    ACTIONS(209), 1,
      anon_sym_tool,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    ACTIONS(213), 1,
      sym_pass_keyword,
    STATE(118), 1,
      sym__unroled_message_line,
    STATE(633), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(207), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(632), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(682), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1009), 2,
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
    STATE(733), 12,
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
    STATE(687), 1,
      sym__query_directive_key,
    STATE(1190), 1,
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
    STATE(879), 1,
      sym__query_directive_key,
    STATE(1176), 1,
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
    STATE(786), 1,
      sym__inline_if_complement,
    STATE(787), 1,
      sym__if_complements,
    STATE(923), 1,
      sym__lanes_complement,
    STATE(926), 1,
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
    STATE(786), 1,
      sym__inline_if_complement,
    STATE(789), 1,
      sym__if_complements,
    STATE(923), 1,
      sym__lanes_complement,
    STATE(928), 1,
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
    STATE(604), 1,
      sym__inline_if_complement,
    STATE(606), 1,
      sym__if_complements,
    STATE(894), 1,
      sym_position,
    STATE(943), 1,
      sym__lanes_complement,
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
    STATE(604), 1,
      sym__inline_if_complement,
    STATE(605), 1,
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
    STATE(240), 1,
      sym__inline_if_complement,
    STATE(241), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(995), 1,
      sym__lanes_complement,
    STATE(996), 1,
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
    STATE(240), 1,
      sym__inline_if_complement,
    STATE(242), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(995), 1,
      sym__lanes_complement,
    STATE(997), 1,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1230), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1320), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1116), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1303), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1304), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1229), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(927), 1,
      sym_type_name,
    STATE(1008), 1,
      sym_type,
    STATE(925), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1292), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(927), 1,
      sym_type_name,
    STATE(1039), 1,
      sym_type,
    STATE(925), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1206), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1275), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1322), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1307), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1219), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1220), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1243), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1244), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(174), 1,
      sym_base_type,
    STATE(712), 1,
      sym_type_name,
    STATE(1097), 1,
      sym_type,
    STATE(711), 2,
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
    STATE(1202), 1,
      sym_cap_body,
    STATE(1221), 1,
      sym__cap_text_body,
    STATE(78), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1293] = 9,
    ACTIONS(277), 1,
      sym_blank_line,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(287), 1,
      sym__dedent,
    STATE(443), 1,
      sym_property,
    STATE(1216), 1,
      sym_cap_body,
    STATE(1221), 1,
      sym__cap_text_body,
    STATE(78), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1322] = 9,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(289), 1,
      sym_blank_line,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(443), 1,
      sym_property,
    STATE(1221), 1,
      sym__cap_text_body,
    STATE(1241), 1,
      sym_cap_body,
    STATE(42), 2,
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
    STATE(1221), 1,
      sym__cap_text_body,
    STATE(1306), 1,
      sym_cap_body,
    STATE(43), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1380] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(297), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(780), 1,
      sym__inline_using_complement,
    STATE(781), 1,
      sym__using_complements,
    STATE(919), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1406] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(305), 1,
      sym_colon,
    STATE(1084), 1,
      sym__repeat_count_complement,
    STATE(1327), 1,
      sym__window_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1432] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(307), 1,
      sym_flow_using_keyword,
    ACTIONS(309), 1,
      sym_arrow,
    ACTIONS(311), 1,
      sym_colon,
    STATE(124), 1,
      sym__settle_inline_block,
    STATE(601), 1,
      sym__settle_inline_line,
    STATE(797), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1458] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(313), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(602), 1,
      sym__inline_using_complement,
    STATE(603), 1,
      sym__using_complements,
    STATE(942), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1484] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(1295), 1,
      sym__cap_text_body,
    STATE(57), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
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
    STATE(1217), 1,
      sym__cap_text_body,
    STATE(71), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1532] = 8,
    ACTIONS(323), 1,
      sym_flow_if_keyword,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(604), 1,
      sym__inline_if_complement,
    STATE(605), 1,
      sym__if_complements,
    STATE(943), 1,
      sym__lanes_complement,
    STATE(944), 1,
      sym_position,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1558] = 8,
    ACTIONS(323), 1,
      sym_flow_if_keyword,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    STATE(386), 1,
      sym__named_if_complement,
    STATE(604), 1,
      sym__inline_if_complement,
    STATE(606), 1,
      sym__if_complements,
    STATE(894), 1,
      sym_position,
    STATE(943), 1,
      sym__lanes_complement,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1584] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(329), 1,
      sym_flow_using_keyword,
    ACTIONS(331), 1,
      sym_arrow,
    ACTIONS(333), 1,
      sym_colon,
    STATE(137), 1,
      sym__settle_inline_block,
    STATE(237), 1,
      sym__settle_inline_line,
    STATE(838), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1610] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_in_keyword,
    ACTIONS(335), 1,
      sym_flow_using_keyword,
    STATE(238), 1,
      sym__inline_using_complement,
    STATE(239), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(993), 1,
      sym__lanes_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1636] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(337), 1,
      sym_colon,
    STATE(930), 1,
      sym__repeat_count_complement,
    STATE(1309), 1,
      sym__window_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1662] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(319), 1,
      sym_blank_line,
    ACTIONS(339), 1,
      sym__dedent,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(71), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1686] = 7,
    ACTIONS(279), 1,
      sym__comment_start,
    ACTIONS(283), 1,
      sym__line_start,
    ACTIONS(285), 1,
      sym__cap_text_start,
    ACTIONS(339), 1,
      sym__dedent,
    ACTIONS(341), 1,
      sym_blank_line,
    STATE(1264), 1,
      sym__cap_text_body,
    STATE(51), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1710] = 8,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(240), 1,
      sym__inline_if_complement,
    STATE(241), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(995), 1,
      sym__lanes_complement,
    STATE(996), 1,
      sym_position,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1736] = 8,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(240), 1,
      sym__inline_if_complement,
    STATE(242), 1,
      sym__if_complements,
    STATE(457), 1,
      sym__named_if_complement,
    STATE(995), 1,
      sym__lanes_complement,
    STATE(997), 1,
      sym_position,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1762] = 8,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(786), 1,
      sym__inline_if_complement,
    STATE(787), 1,
      sym__if_complements,
    STATE(923), 1,
      sym__lanes_complement,
    STATE(926), 1,
      sym_position,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1788] = 8,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(507), 1,
      sym__named_if_complement,
    STATE(786), 1,
      sym__inline_if_complement,
    STATE(789), 1,
      sym__if_complements,
    STATE(923), 1,
      sym__lanes_complement,
    STATE(928), 1,
      sym_position,
    ACTIONS(327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1814] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(347), 1,
      sym_flow_using_keyword,
    ACTIONS(349), 1,
      sym_arrow,
    ACTIONS(351), 1,
      sym_colon,
    STATE(87), 1,
      sym__settle_inline_block,
    STATE(755), 1,
      sym__settle_inline_line,
    STATE(771), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1840] = 8,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(353), 1,
      sym_colon,
    STATE(1081), 1,
      sym__repeat_count_complement,
    STATE(1324), 1,
      sym__window_complement,
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
    STATE(233), 1,
      sym_inline_agic,
    STATE(983), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1889] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(361), 1,
      sym_blank_line,
    STATE(67), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(197), 1,
      sym__implicit_run_line,
    ACTIONS(363), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1908] = 5,
    ACTIONS(365), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__flow_raw_text,
    STATE(67), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(197), 1,
      sym__implicit_run_line,
    ACTIONS(368), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1927] = 5,
    ACTIONS(373), 1,
      sym_blank_line,
    ACTIONS(375), 1,
      sym__comment_start,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(377), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1946] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_snake_name,
    ACTIONS(381), 1,
      sym_arrow,
    ACTIONS(383), 1,
      sym_colon,
    STATE(597), 1,
      sym_inline_agic,
    STATE(932), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [1969] = 5,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(388), 1,
      sym__comment_start,
    ACTIONS(393), 1,
      sym__directive_start,
    ACTIONS(391), 2,
      sym__dedent,
      sym__line_start,
    STATE(70), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1988] = 5,
    ACTIONS(396), 1,
      sym_blank_line,
    ACTIONS(399), 1,
      sym__comment_start,
    ACTIONS(404), 1,
      sym__line_start,
    ACTIONS(402), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(71), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2007] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(381), 1,
      sym_arrow,
    ACTIONS(383), 1,
      sym_colon,
    ACTIONS(407), 1,
      sym_flow_using_keyword,
    STATE(599), 1,
      sym_inline_agic,
    STATE(938), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2030] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_snake_name,
    ACTIONS(409), 1,
      sym_arrow,
    ACTIONS(411), 1,
      sym_colon,
    STATE(735), 1,
      sym_inline_agic,
    STATE(1021), 1,
      sym_runnable,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2053] = 5,
    ACTIONS(413), 1,
      sym_blank_line,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(417), 2,
      sym__dedent,
      sym__until_start,
    STATE(75), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2072] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(421), 1,
      sym_blank_line,
    ACTIONS(423), 2,
      sym__dedent,
      sym__until_start,
    STATE(81), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2091] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(425), 1,
      sym_blank_line,
    STATE(66), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(197), 1,
      sym__implicit_run_line,
    ACTIONS(427), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2110] = 5,
    ACTIONS(375), 1,
      sym__comment_start,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(429), 1,
      sym_blank_line,
    ACTIONS(431), 2,
      sym__dedent,
      sym__line_start,
    STATE(70), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2129] = 6,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(436), 1,
      sym__comment_start,
    ACTIONS(441), 1,
      sym__line_start,
    STATE(443), 1,
      sym_property,
    ACTIONS(439), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(78), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2150] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(409), 1,
      sym_arrow,
    ACTIONS(411), 1,
      sym_colon,
    ACTIONS(444), 1,
      sym_flow_using_keyword,
    STATE(749), 1,
      sym_inline_agic,
    STATE(1053), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2173] = 7,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(355), 1,
      sym_arrow,
    ACTIONS(357), 1,
      sym_colon,
    ACTIONS(446), 1,
      sym_flow_using_keyword,
    STATE(235), 1,
      sym_inline_agic,
    STATE(989), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [2196] = 5,
    ACTIONS(448), 1,
      sym_blank_line,
    ACTIONS(451), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(454), 2,
      sym__dedent,
      sym__until_start,
    STATE(81), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2215] = 6,
    ACTIONS(459), 1,
      sym_blank_line,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym__dedent,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(454), 1,
      sym__until_complement,
    STATE(458), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2235] = 5,
    ACTIONS(467), 1,
      sym_blank_line,
    ACTIONS(470), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__dedent,
    ACTIONS(475), 1,
      sym__line_start,
    STATE(83), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2253] = 5,
    ACTIONS(478), 1,
      sym_blank_line,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(482), 1,
      sym__dedent,
    ACTIONS(484), 1,
      sym__line_start,
    STATE(120), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2271] = 6,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(486), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(84), 1,
      sym_message,
    STATE(693), 1,
      sym__directives,
    STATE(1266), 2,
      sym_messages,
      sym__pass_statement,
  [2291] = 5,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 1,
      sym_blank_line,
    ACTIONS(493), 1,
      sym__comment_start,
    ACTIONS(496), 1,
      sym__line_start,
    STATE(86), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2309] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(499), 1,
      sym_blank_line,
    ACTIONS(501), 1,
      sym__dedent,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(244), 1,
      sym__from_complement,
    STATE(245), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2329] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(505), 1,
      sym_blank_line,
    STATE(94), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(511), 1,
      sym__implicit_run_line,
    ACTIONS(363), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2347] = 5,
    ACTIONS(454), 1,
      sym__dedent,
    ACTIONS(507), 1,
      sym_blank_line,
    ACTIONS(510), 1,
      sym__comment_start,
    ACTIONS(513), 1,
      sym__line_start,
    STATE(89), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2365] = 5,
    ACTIONS(516), 1,
      sym_blank_line,
    ACTIONS(519), 1,
      sym__comment_start,
    ACTIONS(522), 1,
      sym__dedent,
    ACTIONS(524), 1,
      sym__line_start,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2383] = 5,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(529), 1,
      sym__dedent,
    ACTIONS(531), 1,
      sym__line_start,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2401] = 5,
    ACTIONS(533), 1,
      sym_blank_line,
    ACTIONS(538), 1,
      sym__agic_raw_text,
    STATE(92), 1,
      aux_sym_unroled_message_repeat1,
    STATE(231), 1,
      sym__unroled_message_line,
    ACTIONS(536), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2419] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(503), 1,
      sym__from_start,
    ACTIONS(541), 1,
      sym_blank_line,
    ACTIONS(543), 1,
      sym__dedent,
    STATE(364), 1,
      sym__from_complement,
    STATE(365), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2439] = 5,
    ACTIONS(545), 1,
      sym_blank_line,
    ACTIONS(548), 1,
      sym__flow_raw_text,
    STATE(94), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(511), 1,
      sym__implicit_run_line,
    ACTIONS(368), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2457] = 5,
    ACTIONS(553), 1,
      sym_blank_line,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(557), 1,
      sym__indent,
    ACTIONS(551), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2475] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(559), 1,
      sym_blank_line,
    ACTIONS(561), 1,
      sym__dedent,
    STATE(436), 1,
      sym__until_complement,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2495] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(563), 1,
      sym_blank_line,
    ACTIONS(565), 1,
      sym__dedent,
    STATE(450), 1,
      sym__until_complement,
    STATE(452), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2515] = 5,
    ACTIONS(569), 1,
      sym__module_doc_start,
    ACTIONS(571), 1,
      sym__item_doc_start,
    ACTIONS(573), 1,
      sym__param_item_doc_start,
    ACTIONS(567), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(729), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2533] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(575), 1,
      sym_blank_line,
    ACTIONS(577), 1,
      sym__dedent,
    STATE(481), 1,
      sym__until_complement,
    STATE(482), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2553] = 5,
    ACTIONS(377), 1,
      sym__line_start,
    ACTIONS(579), 1,
      sym_blank_line,
    ACTIONS(581), 1,
      sym__comment_start,
    ACTIONS(583), 1,
      sym__directive_start,
    STATE(103), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2571] = 4,
    ACTIONS(587), 1,
      sym_blank_line,
    ACTIONS(590), 1,
      sym__comment_start,
    STATE(101), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(585), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2587] = 5,
    ACTIONS(417), 1,
      sym__until_start,
    ACTIONS(593), 1,
      sym_blank_line,
    ACTIONS(595), 1,
      sym__comment_start,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(105), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2605] = 5,
    ACTIONS(431), 1,
      sym__line_start,
    ACTIONS(581), 1,
      sym__comment_start,
    ACTIONS(583), 1,
      sym__directive_start,
    ACTIONS(599), 1,
      sym_blank_line,
    STATE(106), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2623] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(601), 1,
      sym_blank_line,
    STATE(107), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(427), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2641] = 5,
    ACTIONS(423), 1,
      sym__until_start,
    ACTIONS(595), 1,
      sym__comment_start,
    ACTIONS(597), 1,
      sym__line_start,
    ACTIONS(603), 1,
      sym_blank_line,
    STATE(108), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2659] = 5,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(605), 1,
      sym_blank_line,
    ACTIONS(608), 1,
      sym__comment_start,
    ACTIONS(611), 1,
      sym__directive_start,
    STATE(106), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2677] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(614), 1,
      sym_blank_line,
    STATE(109), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(363), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2695] = 5,
    ACTIONS(454), 1,
      sym__until_start,
    ACTIONS(616), 1,
      sym_blank_line,
    ACTIONS(619), 1,
      sym__comment_start,
    ACTIONS(622), 1,
      sym__line_start,
    STATE(108), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2713] = 5,
    ACTIONS(625), 1,
      sym_blank_line,
    ACTIONS(628), 1,
      sym__flow_raw_text,
    STATE(109), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(523), 1,
      sym__implicit_run_line,
    ACTIONS(368), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2731] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(631), 1,
      sym_text_line,
    STATE(699), 1,
      sym_line_end,
    STATE(700), 1,
      sym_context_body,
    STATE(702), 1,
      sym_text_inline,
    STATE(704), 1,
      sym_text_block,
  [2753] = 5,
    ACTIONS(417), 1,
      sym__dedent,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(633), 1,
      sym_blank_line,
    ACTIONS(635), 1,
      sym__line_start,
    STATE(136), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2771] = 6,
    ACTIONS(583), 1,
      sym__directive_start,
    ACTIONS(637), 1,
      sym__line_start,
    STATE(100), 1,
      sym_directive,
    STATE(111), 1,
      sym__flow_statement,
    STATE(958), 1,
      sym__directives,
    STATE(1238), 2,
      sym_statements,
      sym__pass_statement,
  [2791] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(200), 1,
      sym__implicit_run_line,
    ACTIONS(363), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2805] = 5,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym__line_start,
    ACTIONS(639), 1,
      sym_blank_line,
    ACTIONS(641), 1,
      sym__dedent,
    STATE(151), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2823] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(200), 1,
      sym__implicit_run_line,
    ACTIONS(643), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2837] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(631), 1,
      sym_text_line,
    STATE(699), 1,
      sym_line_end,
    STATE(704), 1,
      sym_text_block,
    STATE(705), 1,
      sym_instruct_body,
    STATE(706), 1,
      sym_text_inline,
  [2859] = 5,
    ACTIONS(647), 1,
      sym__module_doc_start,
    ACTIONS(649), 1,
      sym__item_doc_start,
    ACTIONS(651), 1,
      sym__param_item_doc_start,
    ACTIONS(645), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(899), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2877] = 5,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    ACTIONS(653), 1,
      sym_blank_line,
    STATE(122), 1,
      aux_sym_unroled_message_repeat1,
    STATE(231), 1,
      sym__unroled_message_line,
    ACTIONS(655), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2895] = 5,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(659), 1,
      sym_blank_line,
    ACTIONS(661), 1,
      sym__indent,
    ACTIONS(657), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(153), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2913] = 5,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(484), 1,
      sym__line_start,
    ACTIONS(663), 1,
      sym_blank_line,
    ACTIONS(665), 1,
      sym__dedent,
    STATE(83), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2931] = 6,
    ACTIONS(379), 1,
      sym__directive_start,
    ACTIONS(486), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(84), 1,
      sym_message,
    STATE(886), 1,
      sym__directives,
    STATE(1296), 2,
      sym_messages,
      sym__pass_statement,
  [2951] = 5,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    ACTIONS(667), 1,
      sym_blank_line,
    STATE(92), 1,
      aux_sym_unroled_message_repeat1,
    STATE(231), 1,
      sym__unroled_message_line,
    ACTIONS(669), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2969] = 4,
    STATE(806), 1,
      sym_recall_source,
    STATE(962), 1,
      sym_recall_value,
    ACTIONS(671), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(673), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2985] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(503), 1,
      sym__from_start,
    ACTIONS(675), 1,
      sym_blank_line,
    ACTIONS(677), 1,
      sym__dedent,
    STATE(390), 1,
      sym__from_complement,
    STATE(391), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3005] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(503), 1,
      sym__from_start,
    ACTIONS(679), 1,
      sym_blank_line,
    ACTIONS(681), 1,
      sym__dedent,
    STATE(395), 1,
      sym__from_complement,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3025] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(683), 1,
      sym_blank_line,
    ACTIONS(685), 1,
      sym__dedent,
    STATE(408), 1,
      sym__until_complement,
    STATE(409), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3045] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(687), 1,
      sym_blank_line,
    ACTIONS(689), 1,
      sym__dedent,
    STATE(417), 1,
      sym__until_complement,
    STATE(418), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3065] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(691), 1,
      sym_blank_line,
    ACTIONS(693), 1,
      sym__dedent,
    STATE(419), 1,
      sym__until_complement,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3085] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(695), 1,
      sym_blank_line,
    ACTIONS(697), 1,
      sym__dedent,
    STATE(425), 1,
      sym__until_complement,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3105] = 5,
    ACTIONS(701), 1,
      sym__module_doc_start,
    ACTIONS(703), 1,
      sym__item_doc_start,
    ACTIONS(705), 1,
      sym__param_item_doc_start,
    ACTIONS(699), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(543), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3123] = 5,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(709), 1,
      sym_blank_line,
    ACTIONS(711), 1,
      sym__indent,
    ACTIONS(707), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3141] = 6,
    ACTIONS(583), 1,
      sym__directive_start,
    ACTIONS(637), 1,
      sym__line_start,
    STATE(100), 1,
      sym_directive,
    STATE(111), 1,
      sym__flow_statement,
    STATE(1072), 1,
      sym__directives,
    STATE(1260), 2,
      sym_statements,
      sym__pass_statement,
  [3161] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(631), 1,
      sym_text_line,
    STATE(699), 1,
      sym_line_end,
    STATE(702), 1,
      sym_text_inline,
    STATE(704), 1,
      sym_text_block,
    STATE(750), 1,
      sym_context_body,
  [3183] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(713), 1,
      sym_blank_line,
    STATE(88), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(511), 1,
      sym__implicit_run_line,
    ACTIONS(427), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3201] = 7,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(631), 1,
      sym_text_line,
    STATE(699), 1,
      sym_line_end,
    STATE(704), 1,
      sym_text_block,
    STATE(706), 1,
      sym_text_inline,
    STATE(751), 1,
      sym_instruct_body,
  [3223] = 5,
    ACTIONS(423), 1,
      sym__dedent,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(635), 1,
      sym__line_start,
    ACTIONS(715), 1,
      sym_blank_line,
    STATE(89), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3241] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(503), 1,
      sym__from_start,
    ACTIONS(717), 1,
      sym_blank_line,
    ACTIONS(719), 1,
      sym__dedent,
    STATE(461), 1,
      sym__from_complement,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3261] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(503), 1,
      sym__from_start,
    ACTIONS(721), 1,
      sym_blank_line,
    ACTIONS(723), 1,
      sym__dedent,
    STATE(466), 1,
      sym__from_complement,
    STATE(467), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3281] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(725), 1,
      sym_blank_line,
    ACTIONS(727), 1,
      sym__dedent,
    STATE(479), 1,
      sym__until_complement,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3301] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(729), 1,
      sym_blank_line,
    ACTIONS(731), 1,
      sym__dedent,
    STATE(488), 1,
      sym__until_complement,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3321] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(733), 1,
      sym_blank_line,
    ACTIONS(735), 1,
      sym__dedent,
    STATE(490), 1,
      sym__until_complement,
    STATE(491), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3341] = 6,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__until_start,
    ACTIONS(737), 1,
      sym_blank_line,
    ACTIONS(739), 1,
      sym__dedent,
    STATE(496), 1,
      sym__until_complement,
    STATE(497), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3361] = 5,
    ACTIONS(743), 1,
      sym__module_doc_start,
    ACTIONS(745), 1,
      sym__item_doc_start,
    ACTIONS(747), 1,
      sym__param_item_doc_start,
    ACTIONS(741), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(324), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3379] = 5,
    ACTIONS(751), 1,
      sym__module_doc_start,
    ACTIONS(753), 1,
      sym__item_doc_start,
    ACTIONS(755), 1,
      sym__param_item_doc_start,
    ACTIONS(749), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(333), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3397] = 5,
    ACTIONS(759), 1,
      sym__module_doc_start,
    ACTIONS(761), 1,
      sym__item_doc_start,
    ACTIONS(763), 1,
      sym__param_item_doc_start,
    ACTIONS(757), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(756), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3415] = 5,
    ACTIONS(767), 1,
      sym__module_doc_start,
    ACTIONS(769), 1,
      sym__item_doc_start,
    ACTIONS(771), 1,
      sym__param_item_doc_start,
    ACTIONS(765), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(764), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3433] = 5,
    ACTIONS(775), 1,
      sym__module_doc_start,
    ACTIONS(777), 1,
      sym__item_doc_start,
    ACTIONS(779), 1,
      sym__param_item_doc_start,
    ACTIONS(773), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(907), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3451] = 5,
    ACTIONS(783), 1,
      sym__module_doc_start,
    ACTIONS(785), 1,
      sym__item_doc_start,
    ACTIONS(787), 1,
      sym__param_item_doc_start,
    ACTIONS(781), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(774), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3469] = 5,
    ACTIONS(791), 1,
      sym__module_doc_start,
    ACTIONS(793), 1,
      sym__item_doc_start,
    ACTIONS(795), 1,
      sym__param_item_doc_start,
    ACTIONS(789), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(349), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3487] = 4,
    STATE(806), 1,
      sym_recall_source,
    STATE(948), 1,
      sym_recall_value,
    ACTIONS(671), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(673), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3503] = 5,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(531), 1,
      sym__line_start,
    ACTIONS(797), 1,
      sym__dedent,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3521] = 5,
    ACTIONS(480), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym__line_start,
    ACTIONS(797), 1,
      sym__dedent,
    ACTIONS(799), 1,
      sym_blank_line,
    STATE(91), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3539] = 5,
    ACTIONS(553), 1,
      sym_blank_line,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(803), 1,
      sym__indent,
    ACTIONS(801), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3557] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 1,
      sym_blank_line,
    STATE(86), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3575] = 6,
    ACTIONS(809), 1,
      sym_flow_using_keyword,
    ACTIONS(811), 1,
      sym_arrow,
    ACTIONS(813), 1,
      sym_colon,
    STATE(124), 1,
      sym__settle_inline_block,
    STATE(601), 1,
      sym__settle_inline_line,
    STATE(797), 1,
      sym__named_using_complement,
  [3594] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(788), 1,
      sym_line_end,
    STATE(811), 1,
      sym_text_inline,
  [3613] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(610), 1,
      sym_text_inline,
    STATE(742), 1,
      sym_text_block,
    STATE(858), 1,
      sym_line_end,
  [3632] = 6,
    ACTIONS(815), 1,
      sym_flow_using_keyword,
    ACTIONS(817), 1,
      sym_arrow,
    ACTIONS(819), 1,
      sym_colon,
    STATE(87), 1,
      sym__settle_inline_block,
    STATE(755), 1,
      sym__settle_inline_line,
    STATE(771), 1,
      sym__named_using_complement,
  [3651] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(821), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(602), 1,
      sym__inline_using_complement,
    STATE(603), 1,
      sym__using_complements,
    STATE(942), 1,
      sym__lanes_complement,
  [3670] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(548), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3687] = 6,
    ACTIONS(829), 1,
      sym_arrow,
    ACTIONS(831), 1,
      sym_colon,
    ACTIONS(833), 1,
      sym_lparen,
    ACTIONS(835), 1,
      sym_snake_name,
    STATE(547), 1,
      sym_agic_name,
    STATE(1101), 1,
      sym_params,
  [3706] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(613), 1,
      sym_text_inline,
    STATE(742), 1,
      sym_text_block,
    STATE(858), 1,
      sym_line_end,
  [3725] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(821), 1,
      sym_flow_using_keyword,
    STATE(384), 1,
      sym__named_using_complement,
    STATE(602), 1,
      sym__inline_using_complement,
    STATE(616), 1,
      sym__using_complements,
    STATE(942), 1,
      sym__lanes_complement,
  [3744] = 6,
    ACTIONS(811), 1,
      sym_arrow,
    ACTIONS(813), 1,
      sym_colon,
    ACTIONS(837), 1,
      sym_snake_name,
    STATE(125), 1,
      sym__settle_inline_block,
    STATE(619), 1,
      sym__settle_inline_line,
    STATE(817), 1,
      sym_runnable,
  [3763] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(841), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3780] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(843), 1,
      sym_flow_by_keyword,
    STATE(393), 1,
      sym__named_by_complement,
    STATE(630), 1,
      sym__inline_by_complement,
    STATE(631), 1,
      sym__by_complements,
    STATE(956), 1,
      sym__lanes_complement,
  [3799] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(553), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3816] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(695), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3833] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(651), 1,
      sym_text_inline,
    STATE(742), 1,
      sym_text_block,
    STATE(858), 1,
      sym_line_end,
  [3852] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(845), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(780), 1,
      sym__inline_using_complement,
    STATE(781), 1,
      sym__using_complements,
    STATE(919), 1,
      sym__lanes_complement,
  [3871] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(809), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3888] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(538), 1,
      sym__implicit_run_line,
    ACTIONS(363), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3901] = 3,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
    ACTIONS(847), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3914] = 4,
    ACTIONS(849), 1,
      sym_array_suffix,
    STATE(207), 1,
      aux_sym_type_repeat1,
    STATE(754), 1,
      sym_type_suffix,
    ACTIONS(851), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3929] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(297), 1,
      sym_flow_using_keyword,
    STATE(752), 1,
      sym__inline_using_complement,
    STATE(1060), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [3946] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(538), 1,
      sym__implicit_run_line,
    ACTIONS(643), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3959] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(826), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3976] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(335), 1,
      sym_flow_using_keyword,
    STATE(236), 1,
      sym__inline_using_complement,
    STATE(991), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [3993] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(561), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4010] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(565), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4027] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(212), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(853), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4042] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(698), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4059] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(855), 1,
      sym__other_integer_literal,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(859), 1,
      sym_colon,
    STATE(930), 1,
      sym__repeat_count_complement,
    STATE(1309), 1,
      sym__window_complement,
  [4078] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(248), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(862), 1,
      sym_line_end,
  [4097] = 6,
    ACTIONS(861), 1,
      sym_flow_using_keyword,
    ACTIONS(863), 1,
      sym_arrow,
    ACTIONS(865), 1,
      sym_colon,
    STATE(137), 1,
      sym__settle_inline_block,
    STATE(237), 1,
      sym__settle_inline_line,
    STATE(838), 1,
      sym__named_using_complement,
  [4116] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(238), 1,
      sym__inline_using_complement,
    STATE(239), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(993), 1,
      sym__lanes_complement,
  [4135] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(272), 1,
      sym__implicit_run_line,
    ACTIONS(643), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4148] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(788), 1,
      sym_line_end,
    STATE(815), 1,
      sym_text_inline,
  [4167] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(251), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(862), 1,
      sym_line_end,
  [4186] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(238), 1,
      sym__inline_using_complement,
    STATE(254), 1,
      sym__using_complements,
    STATE(455), 1,
      sym__named_using_complement,
    STATE(993), 1,
      sym__lanes_complement,
  [4205] = 4,
    ACTIONS(869), 1,
      sym_array_suffix,
    STATE(191), 1,
      aux_sym_type_repeat1,
    STATE(754), 1,
      sym_type_suffix,
    ACTIONS(872), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4220] = 1,
    ACTIONS(874), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4229] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(876), 1,
      sym_flow_by_keyword,
    STATE(268), 1,
      sym__inline_by_complement,
    STATE(269), 1,
      sym__by_complements,
    STATE(464), 1,
      sym__named_by_complement,
    STATE(1007), 1,
      sym__lanes_complement,
  [4248] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(794), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4265] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(845), 1,
      sym_flow_using_keyword,
    STATE(459), 1,
      sym__named_using_complement,
    STATE(780), 1,
      sym__inline_using_complement,
    STATE(819), 1,
      sym__using_complements,
    STATE(919), 1,
      sym__lanes_complement,
  [4284] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(199), 1,
      sym_text_line,
    STATE(288), 1,
      sym_text_inline,
    STATE(339), 1,
      sym_text_block,
    STATE(862), 1,
      sym_line_end,
  [4303] = 1,
    ACTIONS(878), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4312] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(714), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4329] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(788), 1,
      sym_line_end,
    STATE(883), 1,
      sym_text_inline,
  [4348] = 1,
    ACTIONS(880), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4357] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(882), 1,
      sym_text_line,
    STATE(825), 1,
      sym_line_end,
    STATE(898), 1,
      sym_text_block,
    STATE(957), 1,
      sym_text_inline,
  [4376] = 6,
    ACTIONS(817), 1,
      sym_arrow,
    ACTIONS(819), 1,
      sym_colon,
    ACTIONS(837), 1,
      sym_snake_name,
    STATE(93), 1,
      sym__settle_inline_block,
    STATE(817), 1,
      sym_runnable,
    STATE(822), 1,
      sym__settle_inline_line,
  [4395] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(884), 1,
      sym_blank_line,
    ACTIONS(886), 1,
      sym__indent,
    STATE(844), 1,
      sym_struct_body,
    STATE(508), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4412] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(782), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4429] = 6,
    ACTIONS(833), 1,
      sym_lparen,
    ACTIONS(888), 1,
      sym_arrow,
    ACTIONS(890), 1,
      sym_colon,
    ACTIONS(892), 1,
      sym_snake_name,
    STATE(571), 1,
      sym_flow_name,
    STATE(1102), 1,
      sym_params,
  [4448] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(147), 1,
      sym_newline,
    ACTIONS(882), 1,
      sym_text_line,
    STATE(825), 1,
      sym_line_end,
    STATE(898), 1,
      sym_text_block,
    STATE(1016), 1,
      sym_text_inline,
  [4467] = 4,
    ACTIONS(849), 1,
      sym_array_suffix,
    STATE(191), 1,
      aux_sym_type_repeat1,
    STATE(754), 1,
      sym_type_suffix,
    ACTIONS(894), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4482] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(166), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(853), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4497] = 5,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(313), 1,
      sym_flow_using_keyword,
    STATE(600), 1,
      sym__inline_using_complement,
    STATE(939), 1,
      sym__named_using_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [4514] = 4,
    ACTIONS(205), 1,
      sym_newline,
    STATE(193), 1,
      sym__order_complement,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(853), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4529] = 5,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(839), 1,
      sym_blank_line,
    ACTIONS(841), 1,
      sym__indent,
    STATE(795), 1,
      sym_flow_body,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4546] = 6,
    ACTIONS(325), 1,
      sym_flow_in_keyword,
    ACTIONS(896), 1,
      sym_flow_by_keyword,
    STATE(270), 1,
      sym__named_by_complement,
    STATE(836), 1,
      sym__inline_by_complement,
    STATE(837), 1,
      sym__by_complements,
    STATE(992), 1,
      sym__lanes_complement,
  [4565] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(728), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4582] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(730), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4599] = 5,
    ACTIONS(823), 1,
      sym_blank_line,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(827), 1,
      sym__indent,
    STATE(595), 1,
      sym_agic_body,
    STATE(363), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4616] = 3,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
    ACTIONS(669), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4629] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(272), 1,
      sym__implicit_run_line,
    ACTIONS(363), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4642] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(855), 1,
      sym__other_integer_literal,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(898), 1,
      sym_colon,
    STATE(1081), 1,
      sym__repeat_count_complement,
    STATE(1324), 1,
      sym__window_complement,
  [4661] = 6,
    ACTIONS(119), 1,
      sym__inline_comment,
    ACTIONS(145), 1,
      sym_text_line,
    ACTIONS(147), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(788), 1,
      sym_line_end,
    STATE(804), 1,
      sym_text_inline,
  [4680] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(855), 1,
      sym__other_integer_literal,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(900), 1,
      sym_colon,
    STATE(1084), 1,
      sym__repeat_count_complement,
    STATE(1327), 1,
      sym__window_complement,
  [4699] = 6,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(863), 1,
      sym_arrow,
    ACTIONS(865), 1,
      sym_colon,
    STATE(138), 1,
      sym__settle_inline_block,
    STATE(257), 1,
      sym__settle_inline_line,
    STATE(817), 1,
      sym_runnable,
  [4718] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(902), 1,
      sym_blank_line,
    ACTIONS(904), 1,
      sym__indent,
    STATE(539), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4732] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4740] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4748] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4756] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4764] = 4,
    ACTIONS(585), 1,
      sym__dedent,
    ACTIONS(914), 1,
      sym_blank_line,
    ACTIONS(917), 1,
      sym__comment_start,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4778] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(920), 1,
      sym_blank_line,
    ACTIONS(922), 1,
      sym__dedent,
    STATE(541), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4792] = 1,
    ACTIONS(924), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4800] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(928), 1,
      sym__dedent,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4814] = 1,
    ACTIONS(932), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [4822] = 4,
    ACTIONS(936), 1,
      sym_rparen,
    STATE(716), 1,
      sym_param_name,
    STATE(968), 1,
      sym_param,
    ACTIONS(934), 2,
      anon_sym__,
      sym_snake_name,
  [4836] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4844] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4852] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4860] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4868] = 1,
    ACTIONS(946), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4876] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4884] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4892] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4900] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4908] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4916] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(960), 1,
      sym__indent,
    STATE(367), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4930] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(962), 1,
      sym_blank_line,
    ACTIONS(964), 1,
      sym__dedent,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4944] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(968), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4958] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4966] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(861), 1,
      sym_inline_agic,
    STATE(1024), 1,
      sym_runnable,
  [4982] = 1,
    ACTIONS(976), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4990] = 1,
    ACTIONS(978), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4998] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5006] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5014] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5022] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5030] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5038] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5046] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5054] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5062] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5070] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5078] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5086] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5094] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5102] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5110] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5118] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5126] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5134] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5142] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5150] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5158] = 5,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(863), 1,
      sym_line_end,
    STATE(1026), 1,
      sym__lanes_complement,
  [5174] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1026), 1,
      sym_blank_line,
    ACTIONS(1028), 1,
      sym__indent,
    STATE(372), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5188] = 1,
    ACTIONS(880), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5196] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5204] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5212] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5220] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5228] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5236] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5244] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5252] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5260] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5268] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5276] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5284] = 1,
    ACTIONS(1052), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5292] = 1,
    ACTIONS(1054), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5300] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5308] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5316] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5324] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5332] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5340] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5348] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5356] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5364] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5372] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5380] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5388] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5396] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5404] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5412] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5420] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5428] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5436] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5444] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5452] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5460] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5468] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5476] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5484] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5492] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5500] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5508] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5516] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5524] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5532] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5540] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5548] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5556] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5564] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5572] = 1,
    ACTIONS(1124), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5580] = 1,
    ACTIONS(1126), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5588] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5596] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5604] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5612] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5620] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5628] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5636] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5644] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5652] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5660] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5668] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(814), 1,
      sym_inline_agic,
    STATE(969), 1,
      sym_runnable,
  [5684] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5692] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5700] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5708] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5716] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5724] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5732] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5740] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5748] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5756] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5764] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5772] = 1,
    ACTIONS(241), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5780] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5788] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5796] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5804] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5812] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5820] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5828] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5836] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5844] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5852] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5860] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5868] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5876] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1150), 1,
      sym_snake_name,
    STATE(332), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [5890] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1152), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5904] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1154), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5918] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(816), 1,
      sym_inline_agic,
    STATE(817), 1,
      sym_runnable,
  [5934] = 1,
    ACTIONS(1156), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5942] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5950] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1162), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5964] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1164), 1,
      sym_blank_line,
    ACTIONS(1166), 1,
      sym__dedent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5978] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1168), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5992] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1172), 1,
      sym_text_line,
    ACTIONS(1174), 1,
      sym_newline,
    STATE(379), 1,
      sym_line_end,
    STATE(887), 1,
      sym__settle_line,
  [6008] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1176), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6022] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6036] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1180), 1,
      sym_blank_line,
    ACTIONS(1182), 1,
      sym__indent,
    STATE(383), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6050] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(597), 1,
      sym_inline_agic,
    STATE(932), 1,
      sym_runnable,
  [6066] = 5,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    ACTIONS(1188), 1,
      sym_flow_using_keyword,
    STATE(599), 1,
      sym_inline_agic,
    STATE(938), 1,
      sym__named_using_complement,
  [6082] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1190), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6096] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1192), 1,
      sym_blank_line,
    ACTIONS(1194), 1,
      sym__indent,
    STATE(387), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6110] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1196), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym__indent,
    STATE(388), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6124] = 1,
    ACTIONS(1200), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6132] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(612), 1,
      sym_inline_agic,
    STATE(950), 1,
      sym_runnable,
  [6148] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1202), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6162] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(614), 1,
      sym_inline_agic,
    STATE(817), 1,
      sym_runnable,
  [6178] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1204), 1,
      sym_blank_line,
    ACTIONS(1206), 1,
      sym__indent,
    STATE(394), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6192] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(617), 1,
      sym_inline_agic,
    STATE(817), 1,
      sym_runnable,
  [6208] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(817), 1,
      sym_runnable,
    STATE(820), 1,
      sym_inline_agic,
  [6224] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1208), 1,
      sym_text_line,
    STATE(243), 1,
      sym_line_end,
    STATE(620), 1,
      sym__settle_line,
  [6240] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1210), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6254] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(623), 1,
      sym_line_end,
    STATE(952), 1,
      sym__lanes_complement,
  [6270] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(625), 1,
      sym_inline_agic,
    STATE(984), 1,
      sym_runnable,
  [6286] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(626), 1,
      sym_line_end,
    STATE(954), 1,
      sym__lanes_complement,
  [6302] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1216), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6316] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1218), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6330] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1220), 1,
      sym_blank_line,
    ACTIONS(1222), 1,
      sym__indent,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6344] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1224), 1,
      sym_blank_line,
    ACTIONS(1226), 1,
      sym__dedent,
    STATE(398), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6358] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1228), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6372] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1184), 1,
      sym_arrow,
    ACTIONS(1186), 1,
      sym_colon,
    STATE(648), 1,
      sym_inline_agic,
    STATE(1024), 1,
      sym_runnable,
  [6388] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(649), 1,
      sym_line_end,
    STATE(960), 1,
      sym__lanes_complement,
  [6404] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6418] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1232), 1,
      sym_blank_line,
    ACTIONS(1234), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6432] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1236), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6446] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1208), 1,
      sym_text_line,
    STATE(379), 1,
      sym_line_end,
    STATE(654), 1,
      sym__settle_line,
  [6462] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1238), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6476] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1240), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6490] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1242), 1,
      sym_blank_line,
    ACTIONS(1244), 1,
      sym__dedent,
    STATE(403), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6504] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1246), 1,
      sym_blank_line,
    ACTIONS(1248), 1,
      sym__dedent,
    STATE(405), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6518] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6526] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1250), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6540] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1252), 1,
      sym_blank_line,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6554] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1256), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6568] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1258), 1,
      sym_blank_line,
    ACTIONS(1260), 1,
      sym__dedent,
    STATE(413), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6582] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1262), 1,
      sym_blank_line,
    ACTIONS(1264), 1,
      sym__dedent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6596] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1266), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__dedent,
    STATE(416), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6610] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1270), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6624] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1272), 1,
      sym_blank_line,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(431), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6638] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1276), 1,
      sym_blank_line,
    ACTIONS(1278), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6652] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1280), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6666] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6680] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1284), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6694] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1286), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__dedent,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6708] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1290), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6722] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1292), 1,
      sym_blank_line,
    ACTIONS(1294), 1,
      sym__dedent,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6736] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6750] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1298), 1,
      sym_blank_line,
    ACTIONS(1300), 1,
      sym__dedent,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6764] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1302), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6778] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6792] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1306), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6806] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1308), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6820] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6834] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1312), 1,
      sym_blank_line,
    ACTIONS(1314), 1,
      sym__dedent,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6848] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6862] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6876] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6890] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6904] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6918] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6932] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1328), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(440), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6946] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1332), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6960] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1334), 1,
      sym_blank_line,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6974] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1338), 1,
      sym_blank_line,
    ACTIONS(1340), 1,
      sym__dedent,
    STATE(445), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6988] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1342), 1,
      sym_blank_line,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(448), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7002] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1346), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7016] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1348), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7030] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1172), 1,
      sym_text_line,
    ACTIONS(1174), 1,
      sym_newline,
    STATE(243), 1,
      sym_line_end,
    STATE(823), 1,
      sym__settle_line,
  [7046] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7060] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(233), 1,
      sym_inline_agic,
    STATE(983), 1,
      sym_runnable,
  [7076] = 5,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    ACTIONS(1356), 1,
      sym_flow_using_keyword,
    STATE(235), 1,
      sym_inline_agic,
    STATE(989), 1,
      sym__named_using_complement,
  [7092] = 1,
    ACTIONS(1358), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7100] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1360), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7114] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1362), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7128] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1364), 1,
      sym_blank_line,
    ACTIONS(1366), 1,
      sym__dedent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7142] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(250), 1,
      sym_inline_agic,
    STATE(1000), 1,
      sym_runnable,
  [7158] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1368), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7172] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(252), 1,
      sym_inline_agic,
    STATE(817), 1,
      sym_runnable,
  [7188] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1370), 1,
      sym_blank_line,
    ACTIONS(1372), 1,
      sym__dedent,
    STATE(465), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7202] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(255), 1,
      sym_inline_agic,
    STATE(817), 1,
      sym_runnable,
  [7218] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7232] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1376), 1,
      sym_text_line,
    STATE(243), 1,
      sym_line_end,
    STATE(258), 1,
      sym__settle_line,
  [7248] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1378), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(473), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7262] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(261), 1,
      sym_line_end,
    STATE(1003), 1,
      sym__lanes_complement,
  [7278] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(263), 1,
      sym_inline_agic,
    STATE(984), 1,
      sym_runnable,
  [7294] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(264), 1,
      sym_line_end,
    STATE(1005), 1,
      sym__lanes_complement,
  [7310] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1386), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7324] = 5,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(828), 1,
      sym_line_end,
    STATE(981), 1,
      sym__lanes_complement,
  [7340] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7354] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1390), 1,
      sym_blank_line,
    ACTIONS(1392), 1,
      sym__dedent,
    STATE(469), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7368] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7382] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
    STATE(285), 1,
      sym_inline_agic,
    STATE(1024), 1,
      sym_runnable,
  [7398] = 5,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(286), 1,
      sym_line_end,
    STATE(1010), 1,
      sym__lanes_complement,
  [7414] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1396), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7428] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1398), 1,
      sym_blank_line,
    ACTIONS(1400), 1,
      sym__dedent,
    STATE(470), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7442] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1402), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7456] = 5,
    ACTIONS(1170), 1,
      sym__inline_comment,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1376), 1,
      sym_text_line,
    STATE(291), 1,
      sym__settle_line,
    STATE(379), 1,
      sym_line_end,
  [7472] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1404), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7486] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1406), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7500] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1408), 1,
      sym_blank_line,
    ACTIONS(1410), 1,
      sym__dedent,
    STATE(474), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7514] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1412), 1,
      sym_blank_line,
    ACTIONS(1414), 1,
      sym__dedent,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7528] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1416), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7542] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1418), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7556] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1420), 1,
      sym_blank_line,
    ACTIONS(1422), 1,
      sym__dedent,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7570] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1424), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7584] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1426), 1,
      sym_blank_line,
    ACTIONS(1428), 1,
      sym__dedent,
    STATE(484), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7598] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1430), 1,
      sym_blank_line,
    ACTIONS(1432), 1,
      sym__dedent,
    STATE(485), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7612] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1434), 1,
      sym_blank_line,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(487), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7626] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1438), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7640] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1440), 1,
      sym_blank_line,
    ACTIONS(1442), 1,
      sym__dedent,
    STATE(492), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7654] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1444), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7668] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1446), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7682] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1448), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7696] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7710] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1452), 1,
      sym_blank_line,
    ACTIONS(1454), 1,
      sym__dedent,
    STATE(493), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7724] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1456), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7738] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1458), 1,
      sym_blank_line,
    ACTIONS(1460), 1,
      sym__dedent,
    STATE(494), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7752] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1462), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7766] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1464), 1,
      sym_blank_line,
    ACTIONS(1466), 1,
      sym__dedent,
    STATE(495), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7780] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1468), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7794] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1470), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7808] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1472), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7822] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1474), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7836] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1476), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7850] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(1478), 1,
      sym_blank_line,
    ACTIONS(1480), 1,
      sym__dedent,
    STATE(498), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7864] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1482), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7878] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1484), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7892] = 4,
    ACTIONS(1486), 1,
      sym_array_suffix,
    STATE(502), 1,
      aux_sym_type_repeat1,
    STATE(945), 1,
      sym_type_suffix,
    ACTIONS(851), 2,
      sym_newline,
      sym__inline_comment,
  [7906] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1488), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7920] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1490), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7934] = 4,
    ACTIONS(1486), 1,
      sym_array_suffix,
    STATE(505), 1,
      aux_sym_type_repeat1,
    STATE(945), 1,
      sym_type_suffix,
    ACTIONS(894), 2,
      sym_newline,
      sym__inline_comment,
  [7948] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1492), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7962] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7976] = 4,
    ACTIONS(1496), 1,
      sym_array_suffix,
    STATE(505), 1,
      aux_sym_type_repeat1,
    STATE(945), 1,
      sym_type_suffix,
    ACTIONS(872), 2,
      sym_newline,
      sym__inline_comment,
  [7990] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(831), 1,
      sym_inline_agic,
    STATE(984), 1,
      sym_runnable,
  [8006] = 5,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1022), 1,
      sym_flow_in_keyword,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(832), 1,
      sym_line_end,
    STATE(987), 1,
      sym__lanes_complement,
  [8022] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1499), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8036] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1501), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8050] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1150), 1,
      sym_snake_name,
    STATE(376), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [8064] = 1,
    ACTIONS(878), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8072] = 1,
    ACTIONS(874), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [8080] = 4,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1150), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [8094] = 4,
    ACTIONS(585), 1,
      sym__indent,
    ACTIONS(1503), 1,
      sym_blank_line,
    ACTIONS(1506), 1,
      sym__comment_start,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8108] = 1,
    ACTIONS(874), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8116] = 4,
    ACTIONS(1509), 1,
      sym_blank_line,
    ACTIONS(1512), 1,
      sym__dedent,
    ACTIONS(1514), 1,
      sym_indented_raw_text,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8130] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1517), 1,
      sym_blank_line,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(519), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8144] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1521), 1,
      sym_blank_line,
    ACTIONS(1523), 1,
      sym__indent,
    STATE(520), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8158] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1525), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8172] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1527), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8186] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1529), 1,
      sym_blank_line,
    ACTIONS(1531), 1,
      sym__indent,
    STATE(522), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8200] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1533), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8214] = 1,
    ACTIONS(878), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8222] = 5,
    ACTIONS(837), 1,
      sym_snake_name,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    STATE(735), 1,
      sym_inline_agic,
    STATE(1021), 1,
      sym_runnable,
  [8238] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1535), 1,
      sym_blank_line,
    ACTIONS(1537), 1,
      sym__indent,
    STATE(527), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8252] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1539), 1,
      sym_blank_line,
    ACTIONS(1541), 1,
      sym__indent,
    STATE(528), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8266] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1543), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8280] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1545), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8294] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1547), 1,
      sym_blank_line,
    ACTIONS(1549), 1,
      sym__indent,
    STATE(530), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8308] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1551), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8322] = 5,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    ACTIONS(1553), 1,
      sym_flow_using_keyword,
    STATE(749), 1,
      sym_inline_agic,
    STATE(1053), 1,
      sym__named_using_complement,
  [8338] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1555), 1,
      sym_blank_line,
    ACTIONS(1557), 1,
      sym__indent,
    STATE(533), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8352] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1559), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8366] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1561), 1,
      sym_blank_line,
    ACTIONS(1563), 1,
      sym__indent,
    STATE(535), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8380] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1565), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8394] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1567), 1,
      sym_blank_line,
    ACTIONS(1569), 1,
      sym__indent,
    STATE(537), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8408] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1571), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8422] = 1,
    ACTIONS(880), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8430] = 4,
    ACTIONS(825), 1,
      sym__comment_start,
    ACTIONS(1160), 1,
      sym_blank_line,
    ACTIONS(1573), 1,
      sym__indent,
    STATE(514), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8444] = 1,
    ACTIONS(1575), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8452] = 4,
    ACTIONS(461), 1,
      sym__comment_start,
    ACTIONS(966), 1,
      sym_blank_line,
    ACTIONS(1577), 1,
      sym__dedent,
    STATE(227), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8466] = 1,
    ACTIONS(1579), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8474] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8482] = 4,
    ACTIONS(926), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1581), 1,
      sym__dedent,
    STATE(516), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8496] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8503] = 1,
    ACTIONS(1583), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8510] = 4,
    ACTIONS(833), 1,
      sym_lparen,
    ACTIONS(1585), 1,
      sym_arrow,
    ACTIONS(1587), 1,
      sym_colon,
    STATE(1178), 1,
      sym_params,
  [8523] = 1,
    ACTIONS(1589), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8530] = 1,
    ACTIONS(1591), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8537] = 1,
    ACTIONS(1593), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8544] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8551] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8558] = 1,
    ACTIONS(1595), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8565] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8572] = 1,
    ACTIONS(1597), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8579] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8586] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8593] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8600] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8607] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8614] = 1,
    ACTIONS(1599), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8621] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8628] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8635] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8642] = 1,
    ACTIONS(1601), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8649] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8656] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8663] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8670] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8677] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8684] = 4,
    ACTIONS(833), 1,
      sym_lparen,
    ACTIONS(1603), 1,
      sym_arrow,
    ACTIONS(1605), 1,
      sym_colon,
    STATE(1105), 1,
      sym_params,
  [8697] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8704] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8711] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8718] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8725] = 1,
    ACTIONS(1607), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8732] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8739] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8746] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1609), 1,
      sym_blank_line,
    STATE(509), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8757] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8764] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8771] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8778] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8785] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8792] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8799] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8806] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8813] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8820] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8827] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8834] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8841] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8848] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8855] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8862] = 1,
    ACTIONS(1611), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8869] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8876] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8883] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8890] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8897] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8904] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8911] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8918] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8925] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8932] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8939] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8946] = 2,
    ACTIONS(1615), 1,
      sym_newline,
    ACTIONS(1613), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [8955] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8962] = 4,
    ACTIONS(1617), 1,
      sym__inline_comment,
    ACTIONS(1619), 1,
      sym_text_line,
    ACTIONS(1621), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [8975] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8982] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8989] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8996] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9003] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9010] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9017] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9024] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9031] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9038] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9045] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9052] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9059] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9066] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9073] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9080] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9087] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9094] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9101] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9108] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9115] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9122] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9129] = 1,
    ACTIONS(1623), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9136] = 3,
    ACTIONS(1625), 1,
      sym_colon,
    ACTIONS(1627), 1,
      sym_newline,
    ACTIONS(1619), 2,
      sym__inline_comment,
      sym_text_line,
  [9147] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9154] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9161] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9168] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9175] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9182] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9189] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9196] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9203] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9210] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9217] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9224] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9231] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9238] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9245] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9252] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9259] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9266] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9273] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9280] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9287] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9294] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9301] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9308] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9315] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9322] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9329] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9336] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9343] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9350] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9357] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9364] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9371] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9378] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9385] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9392] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9399] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9406] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9413] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9420] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9427] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9434] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9441] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9448] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9455] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9462] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9469] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9476] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9483] = 4,
    ACTIONS(1024), 1,
      sym_newline,
    ACTIONS(1629), 1,
      sym__inline_comment,
    ACTIONS(1631), 1,
      sym_text_line,
    STATE(723), 1,
      sym_line_end,
  [9496] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9503] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9510] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9517] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9524] = 2,
    STATE(1252), 1,
      sym_directive_op,
    ACTIONS(1633), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9533] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9540] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9547] = 1,
    ACTIONS(1635), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9554] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(119), 1,
      sym_line_end,
    STATE(736), 1,
      sym__cap_definition,
  [9567] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(119), 1,
      sym_line_end,
    STATE(893), 1,
      sym__cap_definition,
  [9580] = 4,
    ACTIONS(484), 1,
      sym__line_start,
    ACTIONS(1641), 1,
      sym__dedent,
    STATE(84), 1,
      sym_message,
    STATE(1235), 1,
      sym_messages,
  [9593] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(119), 1,
      sym_line_end,
    STATE(738), 1,
      sym__cap_definition,
  [9606] = 1,
    ACTIONS(1643), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9613] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(119), 1,
      sym_line_end,
    STATE(739), 1,
      sym__cap_definition,
  [9626] = 1,
    ACTIONS(1645), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9633] = 1,
    ACTIONS(1647), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9640] = 4,
    ACTIONS(1649), 1,
      sym_blank_line,
    ACTIONS(1651), 1,
      sym__text_indent,
    STATE(748), 1,
      sym_text_body,
    STATE(1049), 1,
      aux_sym_text_body_repeat1,
  [9653] = 1,
    ACTIONS(1653), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9660] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1655), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [9671] = 1,
    ACTIONS(1657), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9678] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1659), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [9689] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9696] = 1,
    ACTIONS(1661), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9703] = 1,
    ACTIONS(1663), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9710] = 1,
    ACTIONS(1665), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9717] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9724] = 4,
    ACTIONS(1024), 1,
      sym_newline,
    ACTIONS(1629), 1,
      sym__inline_comment,
    ACTIONS(1667), 1,
      sym_text_line,
    STATE(792), 1,
      sym_line_end,
  [9737] = 1,
    ACTIONS(1669), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9744] = 1,
    ACTIONS(1671), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9751] = 1,
    ACTIONS(1673), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9758] = 1,
    ACTIONS(1675), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9765] = 1,
    ACTIONS(1677), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9772] = 1,
    ACTIONS(1679), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9779] = 3,
    ACTIONS(1681), 1,
      sym_optional_marker,
    ACTIONS(1683), 1,
      sym_colon,
    ACTIONS(1685), 2,
      sym_rparen,
      sym_comma,
  [9790] = 1,
    ACTIONS(1687), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9797] = 1,
    ACTIONS(1689), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9804] = 1,
    ACTIONS(1691), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9811] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9818] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(131), 1,
      sym_line_end,
    STATE(803), 1,
      sym_job_body,
  [9831] = 4,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(131), 1,
      sym_line_end,
    STATE(813), 1,
      sym_job_body,
  [9844] = 1,
    ACTIONS(1693), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9851] = 2,
    ACTIONS(241), 1,
      sym_integer_literal,
    ACTIONS(239), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9860] = 2,
    STATE(962), 1,
      sym_text_ref,
    ACTIONS(1695), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9869] = 4,
    ACTIONS(1697), 1,
      sym_runnable_ref,
    ACTIONS(1699), 1,
      sym_none_keyword,
    ACTIONS(1701), 1,
      sym_all_keyword,
    STATE(959), 1,
      sym_route_value,
  [9882] = 1,
    ACTIONS(1703), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9889] = 1,
    ACTIONS(1705), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9896] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9903] = 1,
    ACTIONS(1707), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9910] = 1,
    ACTIONS(1709), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9917] = 1,
    ACTIONS(1711), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9924] = 1,
    ACTIONS(1713), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9931] = 1,
    ACTIONS(1715), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [9938] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9945] = 1,
    ACTIONS(1717), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9952] = 1,
    ACTIONS(1719), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9959] = 1,
    ACTIONS(1721), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9966] = 1,
    ACTIONS(1723), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9973] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9980] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9987] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9994] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10001] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10008] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10015] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10022] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1725), 1,
      sym_blank_line,
    STATE(421), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10033] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10040] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10047] = 1,
    ACTIONS(1727), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10054] = 1,
    ACTIONS(1729), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10061] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10068] = 1,
    ACTIONS(1731), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10075] = 1,
    ACTIONS(1733), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10082] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10089] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10096] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10103] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10110] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10117] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10124] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10131] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10138] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10145] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10152] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10159] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10166] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10173] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10180] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10187] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10194] = 4,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    ACTIONS(1735), 1,
      sym_colon,
    STATE(827), 1,
      sym_line_end,
  [10207] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10214] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10221] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10228] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10235] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10242] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10249] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10256] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10263] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10270] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10277] = 1,
    ACTIONS(1737), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10284] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10291] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10298] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10305] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10312] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10319] = 4,
    ACTIONS(1739), 1,
      sym_blank_line,
    ACTIONS(1741), 1,
      sym__text_indent,
    STATE(588), 1,
      sym_text_body,
    STATE(1045), 1,
      aux_sym_text_body_repeat1,
  [10332] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10339] = 4,
    ACTIONS(1214), 1,
      sym_newline,
    ACTIONS(1743), 1,
      sym__inline_comment,
    ACTIONS(1745), 1,
      sym_text_line,
    STATE(608), 1,
      sym_line_end,
  [10352] = 3,
    STATE(716), 1,
      sym_param_name,
    STATE(1199), 1,
      sym_param,
    ACTIONS(934), 2,
      anon_sym__,
      sym_snake_name,
  [10363] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10370] = 1,
    ACTIONS(1747), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10377] = 1,
    ACTIONS(1749), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10384] = 1,
    ACTIONS(1751), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10391] = 1,
    ACTIONS(1753), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10398] = 4,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    ACTIONS(1755), 1,
      sym_colon,
    STATE(622), 1,
      sym_line_end,
  [10411] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10418] = 1,
    ACTIONS(1757), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10425] = 1,
    ACTIONS(1759), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10432] = 1,
    ACTIONS(1761), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10439] = 1,
    ACTIONS(1763), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10446] = 1,
    ACTIONS(1765), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10453] = 1,
    ACTIONS(1767), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10460] = 1,
    ACTIONS(1769), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10467] = 3,
    ACTIONS(1773), 1,
      sym_comma,
    STATE(845), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1771), 2,
      sym_newline,
      sym__inline_comment,
  [10478] = 3,
    ACTIONS(1777), 1,
      sym_comma,
    STATE(846), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1775), 2,
      sym_newline,
      sym__inline_comment,
  [10489] = 1,
    ACTIONS(1779), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10496] = 1,
    ACTIONS(1781), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10503] = 1,
    ACTIONS(1783), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10510] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10517] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10524] = 1,
    ACTIONS(1785), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10531] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10538] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10545] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10552] = 1,
    ACTIONS(1787), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [10559] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10566] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10573] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10580] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10587] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10594] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10601] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10608] = 4,
    ACTIONS(1789), 1,
      sym_blank_line,
    ACTIONS(1791), 1,
      sym__text_indent,
    STATE(901), 1,
      sym_text_body,
    STATE(1056), 1,
      aux_sym_text_body_repeat1,
  [10621] = 1,
    ACTIONS(1793), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10628] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10635] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10642] = 4,
    ACTIONS(1384), 1,
      sym_newline,
    ACTIONS(1795), 1,
      sym__inline_comment,
    ACTIONS(1797), 1,
      sym_text_line,
    STATE(246), 1,
      sym_line_end,
  [10655] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10662] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10669] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10676] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10683] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10690] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10697] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10704] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10711] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    ACTIONS(1799), 1,
      sym_colon,
    STATE(260), 1,
      sym_line_end,
  [10724] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10731] = 1,
    ACTIONS(1801), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10738] = 1,
    ACTIONS(1803), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10745] = 1,
    ACTIONS(1805), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10752] = 1,
    ACTIONS(1807), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10759] = 1,
    ACTIONS(1809), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10766] = 3,
    ACTIONS(1773), 1,
      sym_comma,
    STATE(881), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1811), 2,
      sym_newline,
      sym__inline_comment,
  [10777] = 3,
    ACTIONS(1777), 1,
      sym_comma,
    STATE(882), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1813), 2,
      sym_newline,
      sym__inline_comment,
  [10788] = 1,
    ACTIONS(1815), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10795] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10802] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10809] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10816] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10823] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10830] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10837] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1817), 1,
      sym_blank_line,
    STATE(230), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10848] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10855] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10862] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10869] = 4,
    ACTIONS(1819), 1,
      sym_blank_line,
    ACTIONS(1821), 1,
      sym__text_indent,
    STATE(744), 1,
      sym_text_body,
    STATE(1066), 1,
      aux_sym_text_body_repeat1,
  [10882] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10889] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10896] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10903] = 4,
    ACTIONS(1823), 1,
      sym_blank_line,
    ACTIONS(1825), 1,
      sym__text_indent,
    STATE(341), 1,
      sym_text_body,
    STATE(1067), 1,
      aux_sym_text_body_repeat1,
  [10916] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10923] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10930] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1827), 1,
      sym_blank_line,
    STATE(358), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10941] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1829), 1,
      sym_blank_line,
    STATE(359), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10952] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1831), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10963] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1833), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [10974] = 2,
    STATE(948), 1,
      sym_text_ref,
    ACTIONS(1695), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [10983] = 4,
    ACTIONS(1697), 1,
      sym_runnable_ref,
    ACTIONS(1699), 1,
      sym_none_keyword,
    ACTIONS(1701), 1,
      sym_all_keyword,
    STATE(947), 1,
      sym_route_value,
  [10996] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1835), 1,
      sym_blank_line,
    STATE(429), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11007] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1837), 1,
      sym_blank_line,
    STATE(430), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11018] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1839), 1,
      sym_colon,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [11029] = 3,
    ACTIONS(205), 1,
      sym_newline,
    ACTIONS(1841), 1,
      sym_integer_literal,
    ACTIONS(201), 2,
      sym__inline_comment,
      sym_text_line,
  [11040] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1843), 1,
      sym_blank_line,
    STATE(500), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11051] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1845), 1,
      sym_blank_line,
    STATE(501), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11062] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1847), 1,
      sym_blank_line,
    STATE(503), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11073] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1849), 1,
      sym_blank_line,
    STATE(504), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11084] = 2,
    STATE(1211), 1,
      sym_directive_op,
    ACTIONS(1633), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11093] = 1,
    ACTIONS(1851), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11100] = 3,
    ACTIONS(1855), 1,
      sym_comma,
    STATE(881), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1853), 2,
      sym_newline,
      sym__inline_comment,
  [11111] = 3,
    ACTIONS(1860), 1,
      sym_comma,
    STATE(882), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1858), 2,
      sym_newline,
      sym__inline_comment,
  [11122] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11129] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11136] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11143] = 4,
    ACTIONS(484), 1,
      sym__line_start,
    ACTIONS(1863), 1,
      sym__dedent,
    STATE(84), 1,
      sym_message,
    STATE(1266), 1,
      sym_messages,
  [11156] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11163] = 3,
    ACTIONS(930), 1,
      sym_indented_raw_text,
    ACTIONS(1865), 1,
      sym_blank_line,
    STATE(544), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11174] = 1,
    ACTIONS(1867), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [11181] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11188] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11195] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11202] = 1,
    ACTIONS(1869), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11209] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(629), 1,
      sym_line_end,
  [11219] = 1,
    ACTIONS(1871), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11225] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(203), 1,
      sym_line_end,
  [11235] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(97), 1,
      sym_statements,
  [11245] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11251] = 1,
    ACTIONS(1132), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11257] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11263] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11269] = 1,
    ACTIONS(1134), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11275] = 1,
    ACTIONS(906), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11281] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11287] = 1,
    ACTIONS(1763), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11293] = 1,
    ACTIONS(908), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11299] = 1,
    ACTIONS(1132), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11305] = 1,
    ACTIONS(1134), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11311] = 1,
    ACTIONS(906), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11317] = 1,
    ACTIONS(908), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11323] = 1,
    ACTIONS(910), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11329] = 1,
    ACTIONS(912), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11335] = 1,
    ACTIONS(1148), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11341] = 1,
    ACTIONS(910), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11347] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(171), 1,
      sym_line_end,
  [11357] = 1,
    ACTIONS(912), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11363] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11369] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(82), 1,
      sym_statements,
  [11379] = 3,
    ACTIONS(845), 1,
      sym_flow_using_keyword,
    STATE(830), 1,
      sym__inline_using_complement,
    STATE(982), 1,
      sym__named_using_complement,
  [11389] = 3,
    ACTIONS(1875), 1,
      sym__inline_comment,
    ACTIONS(1877), 1,
      sym_newline,
    STATE(732), 1,
      sym_line_end,
  [11399] = 3,
    ACTIONS(1875), 1,
      sym__inline_comment,
    ACTIONS(1877), 1,
      sym_newline,
    STATE(740), 1,
      sym_line_end,
  [11409] = 1,
    ACTIONS(1665), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11415] = 3,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(833), 1,
      sym__inline_if_complement,
    STATE(988), 1,
      sym__named_if_complement,
  [11425] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(587), 1,
      sym_line_end,
  [11435] = 1,
    ACTIONS(1671), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11441] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(834), 1,
      sym_line_end,
  [11451] = 1,
    ACTIONS(1673), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11457] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(835), 1,
      sym_line_end,
  [11467] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(271), 1,
      sym_line_end,
  [11477] = 3,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1879), 1,
      sym_colon,
    STATE(1267), 1,
      sym__window_complement,
  [11487] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11493] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(611), 1,
      sym_line_end,
  [11503] = 3,
    ACTIONS(1881), 1,
      sym_rparen,
    ACTIONS(1883), 1,
      sym_comma,
    STATE(978), 1,
      aux_sym_params_repeat1,
  [11513] = 2,
    ACTIONS(1885), 1,
      sym_colon,
    ACTIONS(1887), 2,
      sym_rparen,
      sym_comma,
  [11521] = 3,
    ACTIONS(821), 1,
      sym_flow_using_keyword,
    STATE(600), 1,
      sym__inline_using_complement,
    STATE(939), 1,
      sym__named_using_complement,
  [11531] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(839), 1,
      sym_line_end,
  [11541] = 1,
    ACTIONS(1889), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11547] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(615), 1,
      sym_line_end,
  [11557] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(618), 1,
      sym_line_end,
  [11567] = 1,
    ACTIONS(1731), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11573] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(168), 1,
      sym_line_end,
  [11583] = 3,
    ACTIONS(821), 1,
      sym_flow_using_keyword,
    STATE(624), 1,
      sym__inline_using_complement,
    STATE(953), 1,
      sym__named_using_complement,
  [11593] = 3,
    ACTIONS(323), 1,
      sym_flow_if_keyword,
    STATE(627), 1,
      sym__inline_if_complement,
    STATE(955), 1,
      sym__named_if_complement,
  [11603] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(628), 1,
      sym_line_end,
  [11613] = 1,
    ACTIONS(1733), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11619] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(634), 1,
      sym_line_end,
  [11629] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(635), 1,
      sym_line_end,
  [11639] = 3,
    ACTIONS(1891), 1,
      sym__inline_comment,
    ACTIONS(1893), 1,
      sym_newline,
    STATE(636), 1,
      sym_line_end,
  [11649] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(194), 1,
      sym_line_end,
  [11659] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(639), 1,
      sym_line_end,
  [11669] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(641), 1,
      sym_line_end,
  [11679] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(644), 1,
      sym_line_end,
  [11689] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(645), 1,
      sym_line_end,
  [11699] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(646), 1,
      sym_line_end,
  [11709] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(647), 1,
      sym_line_end,
  [11719] = 3,
    ACTIONS(843), 1,
      sym_flow_by_keyword,
    STATE(650), 1,
      sym__inline_by_complement,
    STATE(961), 1,
      sym__named_by_complement,
  [11729] = 1,
    ACTIONS(1895), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11735] = 3,
    ACTIONS(635), 1,
      sym__line_start,
    STATE(111), 1,
      sym__flow_statement,
    STATE(1209), 1,
      sym_statements,
  [11745] = 3,
    ACTIONS(1897), 1,
      sym__inline_comment,
    ACTIONS(1899), 1,
      sym_newline,
    STATE(361), 1,
      sym_line_end,
  [11755] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(656), 1,
      sym_line_end,
  [11765] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(657), 1,
      sym_line_end,
  [11775] = 3,
    ACTIONS(1897), 1,
      sym__inline_comment,
    ACTIONS(1899), 1,
      sym_newline,
    STATE(362), 1,
      sym_line_end,
  [11785] = 1,
    ACTIONS(1901), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [11791] = 3,
    ACTIONS(1903), 1,
      sym_colon,
    ACTIONS(1905), 1,
      sym_snake_name,
    STATE(1308), 1,
      sym_context_name,
  [11801] = 2,
    STATE(1298), 1,
      sym_param_name,
    ACTIONS(1907), 2,
      anon_sym__,
      sym_snake_name,
  [11809] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(165), 1,
      sym_line_end,
  [11819] = 1,
    ACTIONS(1909), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [11825] = 3,
    ACTIONS(1883), 1,
      sym_comma,
    ACTIONS(1911), 1,
      sym_rparen,
    STATE(933), 1,
      aux_sym_params_repeat1,
  [11835] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(850), 1,
      sym_line_end,
  [11845] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(211), 1,
      sym_line_end,
  [11855] = 1,
    ACTIONS(1913), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11861] = 3,
    ACTIONS(1915), 1,
      sym_colon,
    ACTIONS(1917), 1,
      sym_snake_name,
    STATE(1273), 1,
      sym_instruct_name,
  [11871] = 2,
    ACTIONS(1615), 1,
      sym_newline,
    ACTIONS(1613), 2,
      sym__inline_comment,
      sym_text_line,
  [11879] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(182), 1,
      sym_line_end,
  [11889] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(852), 1,
      sym_line_end,
  [11899] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(160), 1,
      sym_line_end,
  [11909] = 3,
    ACTIONS(1621), 1,
      sym_newline,
    ACTIONS(1919), 1,
      sym__inline_comment,
    STATE(900), 1,
      sym_line_end,
  [11919] = 3,
    ACTIONS(1921), 1,
      sym_rparen,
    ACTIONS(1923), 1,
      sym_comma,
    STATE(978), 1,
      aux_sym_params_repeat1,
  [11929] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(369), 1,
      sym_line_end,
  [11939] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(167), 1,
      sym_line_end,
  [11949] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(856), 1,
      sym_line_end,
  [11959] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(857), 1,
      sym_line_end,
  [11969] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(249), 1,
      sym_line_end,
  [11979] = 1,
    ACTIONS(1926), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11985] = 3,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(236), 1,
      sym__inline_using_complement,
    STATE(991), 1,
      sym__named_using_complement,
  [11995] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(805), 1,
      sym_line_end,
  [12005] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(859), 1,
      sym_line_end,
  [12015] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(860), 1,
      sym_line_end,
  [12025] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(253), 1,
      sym_line_end,
  [12035] = 2,
    ACTIONS(241), 1,
      sym_all_keyword,
    ACTIONS(239), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [12043] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [12053] = 3,
    ACTIONS(896), 1,
      sym_flow_by_keyword,
    STATE(864), 1,
      sym__inline_by_complement,
    STATE(1027), 1,
      sym__named_by_complement,
  [12063] = 3,
    ACTIONS(867), 1,
      sym_flow_using_keyword,
    STATE(262), 1,
      sym__inline_using_complement,
    STATE(1004), 1,
      sym__named_using_complement,
  [12073] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(373), 1,
      sym_line_end,
  [12083] = 3,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(265), 1,
      sym__inline_if_complement,
    STATE(1006), 1,
      sym__named_if_complement,
  [12093] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(266), 1,
      sym_line_end,
  [12103] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
  [12113] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(374), 1,
      sym_line_end,
  [12123] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
  [12133] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(276), 1,
      sym_line_end,
  [12143] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [12153] = 1,
    ACTIONS(1928), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12159] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(281), 1,
      sym_line_end,
  [12169] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [12179] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [12189] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(284), 1,
      sym_line_end,
  [12199] = 3,
    ACTIONS(876), 1,
      sym_flow_by_keyword,
    STATE(287), 1,
      sym__inline_by_complement,
    STATE(1011), 1,
      sym__named_by_complement,
  [12209] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(880), 1,
      sym_line_end,
  [12219] = 2,
    ACTIONS(1932), 1,
      sym_newline,
    ACTIONS(1930), 2,
      sym__inline_comment,
      sym_text_line,
  [12227] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
  [12237] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(294), 1,
      sym_line_end,
  [12247] = 3,
    ACTIONS(1934), 1,
      sym__inline_comment,
    ACTIONS(1936), 1,
      sym_newline,
    STATE(375), 1,
      sym_line_end,
  [12257] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(179), 1,
      sym_line_end,
  [12267] = 2,
    STATE(1047), 1,
      sym_recall_source,
    ACTIONS(671), 2,
      anon_sym_far,
      anon_sym_near,
  [12275] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(180), 1,
      sym_line_end,
  [12285] = 1,
    ACTIONS(1938), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12291] = 3,
    ACTIONS(1940), 1,
      sym_blank_line,
    ACTIONS(1943), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12301] = 1,
    ACTIONS(1945), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [12307] = 1,
    ACTIONS(1947), 3,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
  [12313] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(214), 1,
      sym_line_end,
  [12323] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(812), 1,
      sym_line_end,
  [12333] = 3,
    ACTIONS(1212), 1,
      sym__inline_comment,
    ACTIONS(1214), 1,
      sym_newline,
    STATE(743), 1,
      sym_line_end,
  [12343] = 3,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(340), 1,
      sym_line_end,
  [12353] = 1,
    ACTIONS(1949), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [12359] = 3,
    ACTIONS(845), 1,
      sym_flow_using_keyword,
    STATE(752), 1,
      sym__inline_using_complement,
    STATE(1060), 1,
      sym__named_using_complement,
  [12369] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(891), 1,
      sym_line_end,
  [12379] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(892), 1,
      sym_line_end,
  [12389] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1192), 1,
      sym_statements,
  [12399] = 2,
    ACTIONS(1913), 1,
      sym_newline,
    ACTIONS(1951), 2,
      sym__inline_comment,
      sym_text_line,
  [12407] = 2,
    ACTIONS(1955), 1,
      sym_newline,
    ACTIONS(1953), 2,
      sym__inline_comment,
      sym_text_line,
  [12415] = 2,
    STATE(212), 1,
      sym__order_complement,
    ACTIONS(1957), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12423] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(389), 1,
      sym_line_end,
  [12433] = 2,
    STATE(166), 1,
      sym__order_complement,
    ACTIONS(1957), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12441] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(126), 1,
      sym_statements,
  [12451] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(127), 1,
      sym_statements,
  [12461] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(128), 1,
      sym_statements,
  [12471] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(129), 1,
      sym_statements,
  [12481] = 1,
    ACTIONS(1959), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [12487] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(737), 1,
      sym_line_end,
  [12497] = 2,
    STATE(193), 1,
      sym__order_complement,
    ACTIONS(1957), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12505] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(139), 1,
      sym_statements,
  [12515] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(140), 1,
      sym_statements,
  [12525] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(141), 1,
      sym_statements,
  [12535] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(142), 1,
      sym_statements,
  [12545] = 3,
    ACTIONS(1961), 1,
      sym_blank_line,
    ACTIONS(1963), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12555] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(99), 1,
      sym_statements,
  [12565] = 1,
    ACTIONS(1853), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12571] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1145), 1,
      sym_statements,
  [12581] = 3,
    ACTIONS(1961), 1,
      sym_blank_line,
    ACTIONS(1965), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12591] = 1,
    ACTIONS(1858), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12597] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1147), 1,
      sym_statements,
  [12607] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1201), 1,
      sym_statements,
  [12617] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(818), 1,
      sym_line_end,
  [12627] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1149), 1,
      sym_statements,
  [12637] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1140), 1,
      sym_statements,
  [12647] = 3,
    ACTIONS(1961), 1,
      sym_blank_line,
    ACTIONS(1967), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12657] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(213), 1,
      sym_line_end,
  [12667] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12673] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1158), 1,
      sym_statements,
  [12683] = 3,
    ACTIONS(1020), 1,
      sym__inline_comment,
    ACTIONS(1024), 1,
      sym_newline,
    STATE(821), 1,
      sym_line_end,
  [12693] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12699] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1160), 1,
      sym_statements,
  [12709] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1161), 1,
      sym_statements,
  [12719] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(177), 1,
      sym_line_end,
  [12729] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1164), 1,
      sym_statements,
  [12739] = 3,
    ACTIONS(1961), 1,
      sym_blank_line,
    ACTIONS(1969), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12749] = 3,
    ACTIONS(1961), 1,
      sym_blank_line,
    ACTIONS(1971), 1,
      sym__text_indent,
    STATE(1017), 1,
      aux_sym_text_body_repeat1,
  [12759] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(215), 1,
      sym_line_end,
  [12769] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(517), 1,
      sym_line_end,
  [12779] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(518), 1,
      sym_line_end,
  [12789] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(204), 1,
      sym_line_end,
  [12799] = 3,
    ACTIONS(635), 1,
      sym__line_start,
    STATE(111), 1,
      sym__flow_statement,
    STATE(1238), 1,
      sym_statements,
  [12809] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(521), 1,
      sym_line_end,
  [12819] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(525), 1,
      sym_line_end,
  [12829] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(526), 1,
      sym_line_end,
  [12839] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1151), 1,
      sym_statements,
  [12849] = 3,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(102), 1,
      sym__flow_statement,
    STATE(1179), 1,
      sym_statements,
  [12859] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(529), 1,
      sym_line_end,
  [12869] = 3,
    ACTIONS(1973), 1,
      sym_pascal_name,
    STATE(1237), 1,
      sym_struct_name,
    STATE(1280), 1,
      sym_type_name,
  [12879] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(532), 1,
      sym_line_end,
  [12889] = 3,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1975), 1,
      sym_colon,
    STATE(1317), 1,
      sym__window_complement,
  [12899] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(534), 1,
      sym_line_end,
  [12909] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(536), 1,
      sym_line_end,
  [12919] = 3,
    ACTIONS(857), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1977), 1,
      sym_colon,
    STATE(1321), 1,
      sym__window_complement,
  [12929] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(222), 1,
      sym_line_end,
  [12939] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(74), 1,
      sym__flow_statement,
    STATE(96), 1,
      sym_statements,
  [12949] = 3,
    ACTIONS(1174), 1,
      sym_newline,
    ACTIONS(1873), 1,
      sym__inline_comment,
    STATE(198), 1,
      sym_line_end,
  [12959] = 1,
    ACTIONS(1979), 2,
      sym_newline,
      sym__inline_comment,
  [12964] = 2,
    ACTIONS(1981), 1,
      sym_text_line,
    STATE(920), 1,
      sym_cap_ref,
  [12971] = 1,
    ACTIONS(1947), 2,
      sym_newline,
      sym__inline_comment,
  [12976] = 2,
    ACTIONS(1983), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_assign_operator,
  [12983] = 2,
    ACTIONS(1985), 1,
      sym__snake_kebab_name,
    STATE(1257), 1,
      sym_job_name,
  [12990] = 1,
    ACTIONS(1987), 2,
      sym_newline,
      sym__inline_comment,
  [12995] = 2,
    ACTIONS(1989), 1,
      sym__settle_text_start,
    STATE(549), 1,
      sym__settle_text_body,
  [13002] = 2,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(538), 1,
      sym__implicit_run_line,
  [13009] = 2,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(200), 1,
      sym__implicit_run_line,
  [13016] = 1,
    ACTIONS(1991), 2,
      sym_rparen,
      sym_comma,
  [13021] = 2,
    ACTIONS(211), 1,
      sym__agic_raw_text,
    STATE(542), 1,
      sym__unroled_message_line,
  [13028] = 2,
    ACTIONS(531), 1,
      sym__line_start,
    STATE(114), 1,
      sym_field,
  [13035] = 1,
    ACTIONS(1771), 2,
      sym_newline,
      sym__inline_comment,
  [13040] = 2,
    ACTIONS(1993), 1,
      sym_arrow,
    ACTIONS(1995), 1,
      sym_colon,
  [13047] = 2,
    ACTIONS(1997), 1,
      sym_arrow,
    ACTIONS(1999), 1,
      sym_colon,
  [13054] = 2,
    ACTIONS(2001), 1,
      sym_snake_name,
    STATE(1119), 1,
      sym_field_name,
  [13061] = 2,
    ACTIONS(2003), 1,
      sym__snake_kebab_name,
    STATE(1218), 1,
      sym_cap_name,
  [13068] = 2,
    ACTIONS(2005), 1,
      sym_arrow,
    ACTIONS(2007), 1,
      sym_colon,
  [13075] = 2,
    ACTIONS(2009), 1,
      sym_comment_text,
    ACTIONS(2011), 1,
      sym__comment_end,
  [13082] = 2,
    ACTIONS(1989), 1,
      sym__settle_text_start,
    STATE(889), 1,
      sym__settle_text_body,
  [13089] = 2,
    ACTIONS(2013), 1,
      sym_colon,
    STATE(895), 1,
      sym_inline_agic_body,
  [13096] = 1,
    ACTIONS(1775), 2,
      sym_newline,
      sym__inline_comment,
  [13101] = 2,
    ACTIONS(2015), 1,
      sym_comment_text,
    ACTIONS(2017), 1,
      sym__comment_end,
  [13108] = 1,
    ACTIONS(2019), 2,
      sym_optional_marker,
      sym_colon,
  [13113] = 2,
    ACTIONS(2021), 1,
      sym_comment_text,
    ACTIONS(2023), 1,
      sym__comment_end,
  [13120] = 2,
    ACTIONS(2025), 1,
      sym_comment_text,
    ACTIONS(2027), 1,
      sym__comment_end,
  [13127] = 2,
    ACTIONS(2029), 1,
      sym_comment_text,
    ACTIONS(2031), 1,
      sym__comment_end,
  [13134] = 2,
    ACTIONS(2033), 1,
      sym_snake_name,
    STATE(332), 1,
      sym_agent,
  [13141] = 1,
    ACTIONS(2035), 2,
      sym_rparen,
      sym_comma,
  [13146] = 2,
    ACTIONS(2037), 1,
      sym_comment_text,
    ACTIONS(2039), 1,
      sym__comment_end,
  [13153] = 2,
    ACTIONS(2041), 1,
      sym_comment_text,
    ACTIONS(2043), 1,
      sym__comment_end,
  [13160] = 2,
    ACTIONS(2045), 1,
      sym_optional_marker,
    ACTIONS(2047), 1,
      sym_colon,
  [13167] = 2,
    ACTIONS(1989), 1,
      sym__settle_text_start,
    STATE(555), 1,
      sym__settle_text_body,
  [13174] = 1,
    ACTIONS(2049), 2,
      sym_arrow,
      sym_colon,
  [13179] = 1,
    ACTIONS(2051), 2,
      sym_arrow,
      sym_colon,
  [13184] = 2,
    ACTIONS(2053), 1,
      sym_comment_text,
    ACTIONS(2055), 1,
      sym__comment_end,
  [13191] = 2,
    ACTIONS(2057), 1,
      sym_comment_text,
    ACTIONS(2059), 1,
      sym__comment_end,
  [13198] = 2,
    ACTIONS(2003), 1,
      sym__snake_kebab_name,
    STATE(1255), 1,
      sym_cap_name,
  [13205] = 2,
    ACTIONS(2061), 1,
      sym_comment_text,
    ACTIONS(2063), 1,
      sym__comment_end,
  [13212] = 2,
    ACTIONS(2065), 1,
      sym_comment_text,
    ACTIONS(2067), 1,
      sym__comment_end,
  [13219] = 2,
    ACTIONS(2069), 1,
      sym_comment_text,
    ACTIONS(2071), 1,
      sym__comment_end,
  [13226] = 2,
    ACTIONS(2073), 1,
      sym_comment_text,
    ACTIONS(2075), 1,
      sym__comment_end,
  [13233] = 2,
    ACTIONS(2077), 1,
      sym_comment_text,
    ACTIONS(2079), 1,
      sym__comment_end,
  [13240] = 2,
    ACTIONS(2081), 1,
      sym_comment_text,
    ACTIONS(2083), 1,
      sym__comment_end,
  [13247] = 2,
    ACTIONS(2085), 1,
      sym_comment_text,
    ACTIONS(2087), 1,
      sym__comment_end,
  [13254] = 2,
    ACTIONS(2089), 1,
      sym_comment_text,
    ACTIONS(2091), 1,
      sym__comment_end,
  [13261] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1276), 1,
      sym_param_doc_tag,
  [13268] = 2,
    ACTIONS(2095), 1,
      anon_sym_EQ,
    STATE(1181), 1,
      sym_assign_operator,
  [13275] = 2,
    ACTIONS(2097), 1,
      sym_comment_text,
    ACTIONS(2099), 1,
      sym__comment_end,
  [13282] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1247), 1,
      sym_param_doc_tag,
  [13289] = 1,
    ACTIONS(1138), 2,
      sym_blank_line,
      sym__text_indent,
  [13294] = 1,
    ACTIONS(2101), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13299] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(446), 1,
      sym__until_complement,
  [13306] = 2,
    ACTIONS(2033), 1,
      sym_snake_name,
    STATE(376), 1,
      sym_agent,
  [13313] = 2,
    ACTIONS(2103), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [13320] = 2,
    ACTIONS(2105), 1,
      sym__one_integer_literal,
    ACTIONS(2107), 1,
      sym__other_integer_literal,
  [13327] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(400), 1,
      sym__from_complement,
  [13334] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(401), 1,
      sym__until_complement,
  [13341] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(404), 1,
      sym__from_complement,
  [13348] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(406), 1,
      sym__until_complement,
  [13355] = 2,
    ACTIONS(2109), 1,
      anon_sym_lanes,
    STATE(1195), 1,
      sym_flow_lanes_keyword,
  [13362] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(415), 1,
      sym__until_complement,
  [13369] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1270), 1,
      sym_param_doc_tag,
  [13376] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(434), 1,
      sym__until_complement,
  [13383] = 2,
    ACTIONS(2103), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_assign_operator,
  [13390] = 2,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(272), 1,
      sym__implicit_run_line,
  [13397] = 2,
    ACTIONS(531), 1,
      sym__line_start,
    STATE(152), 1,
      sym_field,
  [13404] = 2,
    ACTIONS(2033), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
  [13411] = 2,
    ACTIONS(2103), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [13418] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(471), 1,
      sym__from_complement,
  [13425] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(472), 1,
      sym__until_complement,
  [13432] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(475), 1,
      sym__from_complement,
  [13439] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(477), 1,
      sym__until_complement,
  [13446] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(478), 1,
      sym__until_complement,
  [13453] = 2,
    ACTIONS(2111), 1,
      sym_comment_text,
    ACTIONS(2113), 1,
      sym__comment_end,
  [13460] = 2,
    ACTIONS(2115), 1,
      sym_comment_text,
    ACTIONS(2117), 1,
      sym__comment_end,
  [13467] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(486), 1,
      sym__until_complement,
  [13474] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1225), 1,
      sym_param_doc_tag,
  [13481] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1246), 1,
      sym_param_doc_tag,
  [13488] = 2,
    ACTIONS(2003), 1,
      sym__snake_kebab_name,
    STATE(1205), 1,
      sym_cap_name,
  [13495] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1262), 1,
      sym_param_doc_tag,
  [13502] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1271), 1,
      sym_param_doc_tag,
  [13509] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1290), 1,
      sym_param_doc_tag,
  [13516] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1302), 1,
      sym_param_doc_tag,
  [13523] = 2,
    ACTIONS(2093), 1,
      anon_sym_ATparam,
    STATE(1315), 1,
      sym_param_doc_tag,
  [13530] = 2,
    ACTIONS(2119), 1,
      anon_sym_EQ,
    STATE(1139), 1,
      sym_assign_operator,
  [13537] = 2,
    ACTIONS(2119), 1,
      anon_sym_EQ,
    STATE(869), 1,
      sym_assign_operator,
  [13544] = 2,
    ACTIONS(1983), 1,
      anon_sym_EQ,
    STATE(150), 1,
      sym_assign_operator,
  [13551] = 2,
    ACTIONS(2121), 1,
      anon_sym_EQ,
    STATE(870), 1,
      sym_assign_operator,
  [13558] = 2,
    ACTIONS(2123), 1,
      sym_snake_name,
    STATE(1135), 1,
      sym_property_key,
  [13565] = 2,
    ACTIONS(2125), 1,
      sym_arrow,
    ACTIONS(2127), 1,
      sym_colon,
  [13572] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(435), 1,
      sym__until_complement,
  [13579] = 2,
    ACTIONS(2129), 1,
      anon_sym_lanes,
    STATE(1018), 1,
      sym_flow_lanes_keyword,
  [13586] = 2,
    ACTIONS(2131), 1,
      sym_text_line,
    STATE(1012), 1,
      sym_property_value,
  [13593] = 2,
    ACTIONS(2133), 1,
      sym__one_integer_literal,
    ACTIONS(2135), 1,
      sym__other_integer_literal,
  [13600] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(432), 1,
      sym__from_complement,
  [13607] = 1,
    ACTIONS(2137), 2,
      sym_newline,
      sym__inline_comment,
  [13612] = 2,
    ACTIONS(1989), 1,
      sym__settle_text_start,
    STATE(546), 1,
      sym__settle_text_body,
  [13619] = 1,
    ACTIONS(2139), 2,
      sym_newline,
      sym__inline_comment,
  [13624] = 2,
    ACTIONS(2003), 1,
      sym__snake_kebab_name,
    STATE(1281), 1,
      sym_cap_name,
  [13631] = 1,
    ACTIONS(1136), 2,
      sym_blank_line,
      sym__text_indent,
  [13636] = 2,
    ACTIONS(503), 1,
      sym__from_start,
    STATE(410), 1,
      sym__from_complement,
  [13643] = 2,
    ACTIONS(2121), 1,
      anon_sym_EQ,
    STATE(726), 1,
      sym_assign_operator,
  [13650] = 1,
    ACTIONS(2141), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13655] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(411), 1,
      sym__until_complement,
  [13662] = 1,
    ACTIONS(2143), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [13667] = 1,
    ACTIONS(2145), 2,
      sym_arrow,
      sym_colon,
  [13672] = 1,
    ACTIONS(1945), 2,
      sym_newline,
      sym__inline_comment,
  [13677] = 2,
    ACTIONS(1985), 1,
      sym__snake_kebab_name,
    STATE(1256), 1,
      sym_job_name,
  [13684] = 1,
    ACTIONS(2147), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [13689] = 2,
    ACTIONS(2119), 1,
      anon_sym_EQ,
    STATE(725), 1,
      sym_assign_operator,
  [13696] = 1,
    ACTIONS(2149), 2,
      sym_rparen,
      sym_comma,
  [13701] = 2,
    ACTIONS(2119), 1,
      anon_sym_EQ,
    STATE(1191), 1,
      sym_assign_operator,
  [13708] = 2,
    ACTIONS(465), 1,
      sym__until_start,
    STATE(407), 1,
      sym__until_complement,
  [13715] = 1,
    ACTIONS(2151), 1,
      sym__dedent,
  [13719] = 1,
    ACTIONS(2153), 1,
      sym__comment_end,
  [13723] = 1,
    ACTIONS(2155), 1,
      sym_flow_until_keyword,
  [13727] = 1,
    ACTIONS(2157), 1,
      sym_colon,
  [13731] = 1,
    ACTIONS(2159), 1,
      sym_colon,
  [13735] = 1,
    ACTIONS(2161), 1,
      sym_colon,
  [13739] = 1,
    ACTIONS(241), 1,
      sym_text_line,
  [13743] = 1,
    ACTIONS(2163), 1,
      sym__dedent,
  [13747] = 1,
    ACTIONS(1955), 1,
      anon_sym_EQ,
  [13751] = 1,
    ACTIONS(2101), 1,
      sym_directive_value,
  [13755] = 1,
    ACTIONS(2165), 1,
      anon_sym_EQ,
  [13759] = 1,
    ACTIONS(2167), 1,
      sym_flow_times_keyword,
  [13763] = 1,
    ACTIONS(2169), 1,
      sym_colon,
  [13767] = 1,
    ACTIONS(2171), 1,
      sym_integer_literal,
  [13771] = 1,
    ACTIONS(2173), 1,
      sym__dedent,
  [13775] = 1,
    ACTIONS(2175), 1,
      sym__dedent,
  [13779] = 1,
    ACTIONS(2177), 1,
      sym_colon,
  [13783] = 1,
    ACTIONS(2179), 1,
      sym_colon,
  [13787] = 1,
    ACTIONS(2181), 1,
      sym_colon,
  [13791] = 1,
    ACTIONS(2183), 1,
      sym__dedent,
  [13795] = 1,
    ACTIONS(2185), 1,
      sym__comment_end,
  [13799] = 1,
    ACTIONS(2187), 1,
      sym_colon,
  [13803] = 1,
    ACTIONS(2189), 1,
      sym__comment_end,
  [13807] = 1,
    ACTIONS(2191), 1,
      sym__comment_end,
  [13811] = 1,
    ACTIONS(2193), 1,
      sym_newline,
  [13815] = 1,
    ACTIONS(2195), 1,
      sym__comment_end,
  [13819] = 1,
    ACTIONS(2197), 1,
      sym__doc_space,
  [13823] = 1,
    ACTIONS(2199), 1,
      sym_colon,
  [13827] = 1,
    ACTIONS(2201), 1,
      sym_colon,
  [13831] = 1,
    ACTIONS(2203), 1,
      sym_integer_literal,
  [13835] = 1,
    ACTIONS(1675), 1,
      sym__doc_space,
  [13839] = 1,
    ACTIONS(2205), 1,
      sym_colon,
  [13843] = 1,
    ACTIONS(2207), 1,
      sym_integer_literal,
  [13847] = 1,
    ACTIONS(2209), 1,
      sym__dedent,
  [13851] = 1,
    ACTIONS(2211), 1,
      sym__comment_end,
  [13855] = 1,
    ACTIONS(2213), 1,
      sym_colon,
  [13859] = 1,
    ACTIONS(2215), 1,
      sym__dedent,
  [13863] = 1,
    ACTIONS(2217), 1,
      sym_colon,
  [13867] = 1,
    ACTIONS(2219), 1,
      sym_integer_literal,
  [13871] = 1,
    ACTIONS(2221), 1,
      sym__dedent,
  [13875] = 1,
    ACTIONS(2223), 1,
      sym__comment_end,
  [13879] = 1,
    ACTIONS(2225), 1,
      sym_colon,
  [13883] = 1,
    ACTIONS(2227), 1,
      sym_colon,
  [13887] = 1,
    ACTIONS(2229), 1,
      sym__comment_end,
  [13891] = 1,
    ACTIONS(2231), 1,
      sym__comment_end,
  [13895] = 1,
    ACTIONS(2233), 1,
      sym__comment_end,
  [13899] = 1,
    ACTIONS(2235), 1,
      sym_newline,
  [13903] = 1,
    ACTIONS(2237), 1,
      sym_newline,
  [13907] = 1,
    ACTIONS(2239), 1,
      sym_integer_literal,
  [13911] = 1,
    ACTIONS(2241), 1,
      sym_runnable_ref,
  [13915] = 1,
    ACTIONS(2141), 1,
      sym_directive_value,
  [13919] = 1,
    ACTIONS(2243), 1,
      sym__comment_end,
  [13923] = 1,
    ACTIONS(2245), 1,
      sym__comment_end,
  [13927] = 1,
    ACTIONS(2247), 1,
      sym_colon,
  [13931] = 1,
    ACTIONS(2249), 1,
      sym_colon,
  [13935] = 1,
    ACTIONS(2251), 1,
      sym_colon,
  [13939] = 1,
    ACTIONS(2253), 1,
      sym_newline,
  [13943] = 1,
    ACTIONS(2255), 1,
      sym__comment_end,
  [13947] = 1,
    ACTIONS(2257), 1,
      sym__dedent,
  [13951] = 1,
    ACTIONS(2259), 1,
      sym__comment_end,
  [13955] = 1,
    ACTIONS(2261), 1,
      sym__comment_end,
  [13959] = 1,
    ACTIONS(2263), 1,
      sym_newline,
  [13963] = 1,
    ACTIONS(321), 1,
      sym__dedent,
  [13967] = 1,
    ACTIONS(2265), 1,
      sym_newline,
  [13971] = 1,
    ACTIONS(1641), 1,
      sym__dedent,
  [13975] = 1,
    ACTIONS(2267), 1,
      sym_colon,
  [13979] = 1,
    ACTIONS(2269), 1,
      sym__comment_end,
  [13983] = 1,
    ACTIONS(2271), 1,
      sym__comment_end,
  [13987] = 1,
    ACTIONS(2273), 1,
      sym__comment_end,
  [13991] = 1,
    ACTIONS(2275), 1,
      sym__comment_end,
  [13995] = 1,
    ACTIONS(2277), 1,
      sym_newline,
  [13999] = 1,
    ACTIONS(2279), 1,
      sym_colon,
  [14003] = 1,
    ACTIONS(2281), 1,
      sym_newline,
  [14007] = 1,
    ACTIONS(2283), 1,
      sym_colon,
  [14011] = 1,
    ACTIONS(2285), 1,
      sym__comment_end,
  [14015] = 1,
    ACTIONS(2287), 1,
      sym_flow_from_keyword,
  [14019] = 1,
    ACTIONS(2289), 1,
      sym_colon,
  [14023] = 1,
    ACTIONS(2291), 1,
      sym_newline,
  [14027] = 1,
    ACTIONS(2293), 1,
      sym_colon,
  [14031] = 1,
    ACTIONS(2295), 1,
      sym_colon,
  [14035] = 1,
    ACTIONS(2297), 1,
      sym_newline,
  [14039] = 1,
    ACTIONS(2299), 1,
      ts_builtin_sym_end,
  [14043] = 1,
    ACTIONS(2301), 1,
      sym_flow_lane_keyword,
  [14047] = 1,
    ACTIONS(2303), 1,
      sym_cap_kind,
  [14051] = 1,
    ACTIONS(2305), 1,
      sym_comment_text,
  [14055] = 1,
    ACTIONS(2307), 1,
      sym__comment_end,
  [14059] = 1,
    ACTIONS(2309), 1,
      sym__dedent,
  [14063] = 1,
    ACTIONS(2311), 1,
      sym__comment_end,
  [14067] = 1,
    ACTIONS(2313), 1,
      sym__comment_end,
  [14071] = 1,
    ACTIONS(2315), 1,
      sym_newline,
  [14075] = 1,
    ACTIONS(2317), 1,
      sym_colon,
  [14079] = 1,
    ACTIONS(2319), 1,
      sym__comment_end,
  [14083] = 1,
    ACTIONS(2321), 1,
      anon_sym_EQ,
  [14087] = 1,
    ACTIONS(339), 1,
      sym__dedent,
  [14091] = 1,
    ACTIONS(1863), 1,
      sym__dedent,
  [14095] = 1,
    ACTIONS(2323), 1,
      sym_newline,
  [14099] = 1,
    ACTIONS(2325), 1,
      sym__doc_space,
  [14103] = 1,
    ACTIONS(2327), 1,
      sym__comment_end,
  [14107] = 1,
    ACTIONS(2329), 1,
      sym_newline,
  [14111] = 1,
    ACTIONS(2331), 1,
      sym__comment_end,
  [14115] = 1,
    ACTIONS(2333), 1,
      sym__comment_end,
  [14119] = 1,
    ACTIONS(2335), 1,
      sym_colon,
  [14123] = 1,
    ACTIONS(2337), 1,
      sym_colon,
  [14127] = 1,
    ACTIONS(2339), 1,
      sym_newline,
  [14131] = 1,
    ACTIONS(2341), 1,
      sym__dedent,
  [14135] = 1,
    ACTIONS(2343), 1,
      sym_colon,
  [14139] = 1,
    ACTIONS(2345), 1,
      sym_colon,
  [14143] = 1,
    ACTIONS(2347), 1,
      sym_colon,
  [14147] = 1,
    ACTIONS(2349), 1,
      sym_colon,
  [14151] = 1,
    ACTIONS(2351), 1,
      sym_colon,
  [14155] = 1,
    ACTIONS(2353), 1,
      sym__comment_end,
  [14159] = 1,
    ACTIONS(2355), 1,
      sym__comment_end,
  [14163] = 1,
    ACTIONS(2167), 1,
      sym_flow_time_keyword,
  [14167] = 1,
    ACTIONS(2357), 1,
      sym__comment_end,
  [14171] = 1,
    ACTIONS(2359), 1,
      sym_directive_value,
  [14175] = 1,
    ACTIONS(2361), 1,
      sym_colon,
  [14179] = 1,
    ACTIONS(2363), 1,
      sym_colon,
  [14183] = 1,
    ACTIONS(2365), 1,
      sym_newline,
  [14187] = 1,
    ACTIONS(2367), 1,
      sym_colon,
  [14191] = 1,
    ACTIONS(2369), 1,
      sym_colon,
  [14195] = 1,
    ACTIONS(2371), 1,
      sym_colon,
  [14199] = 1,
    ACTIONS(2373), 1,
      sym_flow_lane_keyword,
  [14203] = 1,
    ACTIONS(2375), 1,
      sym_colon,
  [14207] = 1,
    ACTIONS(2377), 1,
      sym_newline,
  [14211] = 1,
    ACTIONS(2379), 1,
      sym_colon,
  [14215] = 1,
    ACTIONS(2381), 1,
      sym_colon,
  [14219] = 1,
    ACTIONS(2383), 1,
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
  [SMALL_STATE(47)] = 1406,
  [SMALL_STATE(48)] = 1432,
  [SMALL_STATE(49)] = 1458,
  [SMALL_STATE(50)] = 1484,
  [SMALL_STATE(51)] = 1508,
  [SMALL_STATE(52)] = 1532,
  [SMALL_STATE(53)] = 1558,
  [SMALL_STATE(54)] = 1584,
  [SMALL_STATE(55)] = 1610,
  [SMALL_STATE(56)] = 1636,
  [SMALL_STATE(57)] = 1662,
  [SMALL_STATE(58)] = 1686,
  [SMALL_STATE(59)] = 1710,
  [SMALL_STATE(60)] = 1736,
  [SMALL_STATE(61)] = 1762,
  [SMALL_STATE(62)] = 1788,
  [SMALL_STATE(63)] = 1814,
  [SMALL_STATE(64)] = 1840,
  [SMALL_STATE(65)] = 1866,
  [SMALL_STATE(66)] = 1889,
  [SMALL_STATE(67)] = 1908,
  [SMALL_STATE(68)] = 1927,
  [SMALL_STATE(69)] = 1946,
  [SMALL_STATE(70)] = 1969,
  [SMALL_STATE(71)] = 1988,
  [SMALL_STATE(72)] = 2007,
  [SMALL_STATE(73)] = 2030,
  [SMALL_STATE(74)] = 2053,
  [SMALL_STATE(75)] = 2072,
  [SMALL_STATE(76)] = 2091,
  [SMALL_STATE(77)] = 2110,
  [SMALL_STATE(78)] = 2129,
  [SMALL_STATE(79)] = 2150,
  [SMALL_STATE(80)] = 2173,
  [SMALL_STATE(81)] = 2196,
  [SMALL_STATE(82)] = 2215,
  [SMALL_STATE(83)] = 2235,
  [SMALL_STATE(84)] = 2253,
  [SMALL_STATE(85)] = 2271,
  [SMALL_STATE(86)] = 2291,
  [SMALL_STATE(87)] = 2309,
  [SMALL_STATE(88)] = 2329,
  [SMALL_STATE(89)] = 2347,
  [SMALL_STATE(90)] = 2365,
  [SMALL_STATE(91)] = 2383,
  [SMALL_STATE(92)] = 2401,
  [SMALL_STATE(93)] = 2419,
  [SMALL_STATE(94)] = 2439,
  [SMALL_STATE(95)] = 2457,
  [SMALL_STATE(96)] = 2475,
  [SMALL_STATE(97)] = 2495,
  [SMALL_STATE(98)] = 2515,
  [SMALL_STATE(99)] = 2533,
  [SMALL_STATE(100)] = 2553,
  [SMALL_STATE(101)] = 2571,
  [SMALL_STATE(102)] = 2587,
  [SMALL_STATE(103)] = 2605,
  [SMALL_STATE(104)] = 2623,
  [SMALL_STATE(105)] = 2641,
  [SMALL_STATE(106)] = 2659,
  [SMALL_STATE(107)] = 2677,
  [SMALL_STATE(108)] = 2695,
  [SMALL_STATE(109)] = 2713,
  [SMALL_STATE(110)] = 2731,
  [SMALL_STATE(111)] = 2753,
  [SMALL_STATE(112)] = 2771,
  [SMALL_STATE(113)] = 2791,
  [SMALL_STATE(114)] = 2805,
  [SMALL_STATE(115)] = 2823,
  [SMALL_STATE(116)] = 2837,
  [SMALL_STATE(117)] = 2859,
  [SMALL_STATE(118)] = 2877,
  [SMALL_STATE(119)] = 2895,
  [SMALL_STATE(120)] = 2913,
  [SMALL_STATE(121)] = 2931,
  [SMALL_STATE(122)] = 2951,
  [SMALL_STATE(123)] = 2969,
  [SMALL_STATE(124)] = 2985,
  [SMALL_STATE(125)] = 3005,
  [SMALL_STATE(126)] = 3025,
  [SMALL_STATE(127)] = 3045,
  [SMALL_STATE(128)] = 3065,
  [SMALL_STATE(129)] = 3085,
  [SMALL_STATE(130)] = 3105,
  [SMALL_STATE(131)] = 3123,
  [SMALL_STATE(132)] = 3141,
  [SMALL_STATE(133)] = 3161,
  [SMALL_STATE(134)] = 3183,
  [SMALL_STATE(135)] = 3201,
  [SMALL_STATE(136)] = 3223,
  [SMALL_STATE(137)] = 3241,
  [SMALL_STATE(138)] = 3261,
  [SMALL_STATE(139)] = 3281,
  [SMALL_STATE(140)] = 3301,
  [SMALL_STATE(141)] = 3321,
  [SMALL_STATE(142)] = 3341,
  [SMALL_STATE(143)] = 3361,
  [SMALL_STATE(144)] = 3379,
  [SMALL_STATE(145)] = 3397,
  [SMALL_STATE(146)] = 3415,
  [SMALL_STATE(147)] = 3433,
  [SMALL_STATE(148)] = 3451,
  [SMALL_STATE(149)] = 3469,
  [SMALL_STATE(150)] = 3487,
  [SMALL_STATE(151)] = 3503,
  [SMALL_STATE(152)] = 3521,
  [SMALL_STATE(153)] = 3539,
  [SMALL_STATE(154)] = 3557,
  [SMALL_STATE(155)] = 3575,
  [SMALL_STATE(156)] = 3594,
  [SMALL_STATE(157)] = 3613,
  [SMALL_STATE(158)] = 3632,
  [SMALL_STATE(159)] = 3651,
  [SMALL_STATE(160)] = 3670,
  [SMALL_STATE(161)] = 3687,
  [SMALL_STATE(162)] = 3706,
  [SMALL_STATE(163)] = 3725,
  [SMALL_STATE(164)] = 3744,
  [SMALL_STATE(165)] = 3763,
  [SMALL_STATE(166)] = 3780,
  [SMALL_STATE(167)] = 3799,
  [SMALL_STATE(168)] = 3816,
  [SMALL_STATE(169)] = 3833,
  [SMALL_STATE(170)] = 3852,
  [SMALL_STATE(171)] = 3871,
  [SMALL_STATE(172)] = 3888,
  [SMALL_STATE(173)] = 3901,
  [SMALL_STATE(174)] = 3914,
  [SMALL_STATE(175)] = 3929,
  [SMALL_STATE(176)] = 3946,
  [SMALL_STATE(177)] = 3959,
  [SMALL_STATE(178)] = 3976,
  [SMALL_STATE(179)] = 3993,
  [SMALL_STATE(180)] = 4010,
  [SMALL_STATE(181)] = 4027,
  [SMALL_STATE(182)] = 4042,
  [SMALL_STATE(183)] = 4059,
  [SMALL_STATE(184)] = 4078,
  [SMALL_STATE(185)] = 4097,
  [SMALL_STATE(186)] = 4116,
  [SMALL_STATE(187)] = 4135,
  [SMALL_STATE(188)] = 4148,
  [SMALL_STATE(189)] = 4167,
  [SMALL_STATE(190)] = 4186,
  [SMALL_STATE(191)] = 4205,
  [SMALL_STATE(192)] = 4220,
  [SMALL_STATE(193)] = 4229,
  [SMALL_STATE(194)] = 4248,
  [SMALL_STATE(195)] = 4265,
  [SMALL_STATE(196)] = 4284,
  [SMALL_STATE(197)] = 4303,
  [SMALL_STATE(198)] = 4312,
  [SMALL_STATE(199)] = 4329,
  [SMALL_STATE(200)] = 4348,
  [SMALL_STATE(201)] = 4357,
  [SMALL_STATE(202)] = 4376,
  [SMALL_STATE(203)] = 4395,
  [SMALL_STATE(204)] = 4412,
  [SMALL_STATE(205)] = 4429,
  [SMALL_STATE(206)] = 4448,
  [SMALL_STATE(207)] = 4467,
  [SMALL_STATE(208)] = 4482,
  [SMALL_STATE(209)] = 4497,
  [SMALL_STATE(210)] = 4514,
  [SMALL_STATE(211)] = 4529,
  [SMALL_STATE(212)] = 4546,
  [SMALL_STATE(213)] = 4565,
  [SMALL_STATE(214)] = 4582,
  [SMALL_STATE(215)] = 4599,
  [SMALL_STATE(216)] = 4616,
  [SMALL_STATE(217)] = 4629,
  [SMALL_STATE(218)] = 4642,
  [SMALL_STATE(219)] = 4661,
  [SMALL_STATE(220)] = 4680,
  [SMALL_STATE(221)] = 4699,
  [SMALL_STATE(222)] = 4718,
  [SMALL_STATE(223)] = 4732,
  [SMALL_STATE(224)] = 4740,
  [SMALL_STATE(225)] = 4748,
  [SMALL_STATE(226)] = 4756,
  [SMALL_STATE(227)] = 4764,
  [SMALL_STATE(228)] = 4778,
  [SMALL_STATE(229)] = 4792,
  [SMALL_STATE(230)] = 4800,
  [SMALL_STATE(231)] = 4814,
  [SMALL_STATE(232)] = 4822,
  [SMALL_STATE(233)] = 4836,
  [SMALL_STATE(234)] = 4844,
  [SMALL_STATE(235)] = 4852,
  [SMALL_STATE(236)] = 4860,
  [SMALL_STATE(237)] = 4868,
  [SMALL_STATE(238)] = 4876,
  [SMALL_STATE(239)] = 4884,
  [SMALL_STATE(240)] = 4892,
  [SMALL_STATE(241)] = 4900,
  [SMALL_STATE(242)] = 4908,
  [SMALL_STATE(243)] = 4916,
  [SMALL_STATE(244)] = 4930,
  [SMALL_STATE(245)] = 4944,
  [SMALL_STATE(246)] = 4958,
  [SMALL_STATE(247)] = 4966,
  [SMALL_STATE(248)] = 4982,
  [SMALL_STATE(249)] = 4990,
  [SMALL_STATE(250)] = 4998,
  [SMALL_STATE(251)] = 5006,
  [SMALL_STATE(252)] = 5014,
  [SMALL_STATE(253)] = 5022,
  [SMALL_STATE(254)] = 5030,
  [SMALL_STATE(255)] = 5038,
  [SMALL_STATE(256)] = 5046,
  [SMALL_STATE(257)] = 5054,
  [SMALL_STATE(258)] = 5062,
  [SMALL_STATE(259)] = 5070,
  [SMALL_STATE(260)] = 5078,
  [SMALL_STATE(261)] = 5086,
  [SMALL_STATE(262)] = 5094,
  [SMALL_STATE(263)] = 5102,
  [SMALL_STATE(264)] = 5110,
  [SMALL_STATE(265)] = 5118,
  [SMALL_STATE(266)] = 5126,
  [SMALL_STATE(267)] = 5134,
  [SMALL_STATE(268)] = 5142,
  [SMALL_STATE(269)] = 5150,
  [SMALL_STATE(270)] = 5158,
  [SMALL_STATE(271)] = 5174,
  [SMALL_STATE(272)] = 5188,
  [SMALL_STATE(273)] = 5196,
  [SMALL_STATE(274)] = 5204,
  [SMALL_STATE(275)] = 5212,
  [SMALL_STATE(276)] = 5220,
  [SMALL_STATE(277)] = 5228,
  [SMALL_STATE(278)] = 5236,
  [SMALL_STATE(279)] = 5244,
  [SMALL_STATE(280)] = 5252,
  [SMALL_STATE(281)] = 5260,
  [SMALL_STATE(282)] = 5268,
  [SMALL_STATE(283)] = 5276,
  [SMALL_STATE(284)] = 5284,
  [SMALL_STATE(285)] = 5292,
  [SMALL_STATE(286)] = 5300,
  [SMALL_STATE(287)] = 5308,
  [SMALL_STATE(288)] = 5316,
  [SMALL_STATE(289)] = 5324,
  [SMALL_STATE(290)] = 5332,
  [SMALL_STATE(291)] = 5340,
  [SMALL_STATE(292)] = 5348,
  [SMALL_STATE(293)] = 5356,
  [SMALL_STATE(294)] = 5364,
  [SMALL_STATE(295)] = 5372,
  [SMALL_STATE(296)] = 5380,
  [SMALL_STATE(297)] = 5388,
  [SMALL_STATE(298)] = 5396,
  [SMALL_STATE(299)] = 5404,
  [SMALL_STATE(300)] = 5412,
  [SMALL_STATE(301)] = 5420,
  [SMALL_STATE(302)] = 5428,
  [SMALL_STATE(303)] = 5436,
  [SMALL_STATE(304)] = 5444,
  [SMALL_STATE(305)] = 5452,
  [SMALL_STATE(306)] = 5460,
  [SMALL_STATE(307)] = 5468,
  [SMALL_STATE(308)] = 5476,
  [SMALL_STATE(309)] = 5484,
  [SMALL_STATE(310)] = 5492,
  [SMALL_STATE(311)] = 5500,
  [SMALL_STATE(312)] = 5508,
  [SMALL_STATE(313)] = 5516,
  [SMALL_STATE(314)] = 5524,
  [SMALL_STATE(315)] = 5532,
  [SMALL_STATE(316)] = 5540,
  [SMALL_STATE(317)] = 5548,
  [SMALL_STATE(318)] = 5556,
  [SMALL_STATE(319)] = 5564,
  [SMALL_STATE(320)] = 5572,
  [SMALL_STATE(321)] = 5580,
  [SMALL_STATE(322)] = 5588,
  [SMALL_STATE(323)] = 5596,
  [SMALL_STATE(324)] = 5604,
  [SMALL_STATE(325)] = 5612,
  [SMALL_STATE(326)] = 5620,
  [SMALL_STATE(327)] = 5628,
  [SMALL_STATE(328)] = 5636,
  [SMALL_STATE(329)] = 5644,
  [SMALL_STATE(330)] = 5652,
  [SMALL_STATE(331)] = 5660,
  [SMALL_STATE(332)] = 5668,
  [SMALL_STATE(333)] = 5684,
  [SMALL_STATE(334)] = 5692,
  [SMALL_STATE(335)] = 5700,
  [SMALL_STATE(336)] = 5708,
  [SMALL_STATE(337)] = 5716,
  [SMALL_STATE(338)] = 5724,
  [SMALL_STATE(339)] = 5732,
  [SMALL_STATE(340)] = 5740,
  [SMALL_STATE(341)] = 5748,
  [SMALL_STATE(342)] = 5756,
  [SMALL_STATE(343)] = 5764,
  [SMALL_STATE(344)] = 5772,
  [SMALL_STATE(345)] = 5780,
  [SMALL_STATE(346)] = 5788,
  [SMALL_STATE(347)] = 5796,
  [SMALL_STATE(348)] = 5804,
  [SMALL_STATE(349)] = 5812,
  [SMALL_STATE(350)] = 5820,
  [SMALL_STATE(351)] = 5828,
  [SMALL_STATE(352)] = 5836,
  [SMALL_STATE(353)] = 5844,
  [SMALL_STATE(354)] = 5852,
  [SMALL_STATE(355)] = 5860,
  [SMALL_STATE(356)] = 5868,
  [SMALL_STATE(357)] = 5876,
  [SMALL_STATE(358)] = 5890,
  [SMALL_STATE(359)] = 5904,
  [SMALL_STATE(360)] = 5918,
  [SMALL_STATE(361)] = 5934,
  [SMALL_STATE(362)] = 5942,
  [SMALL_STATE(363)] = 5950,
  [SMALL_STATE(364)] = 5964,
  [SMALL_STATE(365)] = 5978,
  [SMALL_STATE(366)] = 5992,
  [SMALL_STATE(367)] = 6008,
  [SMALL_STATE(368)] = 6022,
  [SMALL_STATE(369)] = 6036,
  [SMALL_STATE(370)] = 6050,
  [SMALL_STATE(371)] = 6066,
  [SMALL_STATE(372)] = 6082,
  [SMALL_STATE(373)] = 6096,
  [SMALL_STATE(374)] = 6110,
  [SMALL_STATE(375)] = 6124,
  [SMALL_STATE(376)] = 6132,
  [SMALL_STATE(377)] = 6148,
  [SMALL_STATE(378)] = 6162,
  [SMALL_STATE(379)] = 6178,
  [SMALL_STATE(380)] = 6192,
  [SMALL_STATE(381)] = 6208,
  [SMALL_STATE(382)] = 6224,
  [SMALL_STATE(383)] = 6240,
  [SMALL_STATE(384)] = 6254,
  [SMALL_STATE(385)] = 6270,
  [SMALL_STATE(386)] = 6286,
  [SMALL_STATE(387)] = 6302,
  [SMALL_STATE(388)] = 6316,
  [SMALL_STATE(389)] = 6330,
  [SMALL_STATE(390)] = 6344,
  [SMALL_STATE(391)] = 6358,
  [SMALL_STATE(392)] = 6372,
  [SMALL_STATE(393)] = 6388,
  [SMALL_STATE(394)] = 6404,
  [SMALL_STATE(395)] = 6418,
  [SMALL_STATE(396)] = 6432,
  [SMALL_STATE(397)] = 6446,
  [SMALL_STATE(398)] = 6462,
  [SMALL_STATE(399)] = 6476,
  [SMALL_STATE(400)] = 6490,
  [SMALL_STATE(401)] = 6504,
  [SMALL_STATE(402)] = 6518,
  [SMALL_STATE(403)] = 6526,
  [SMALL_STATE(404)] = 6540,
  [SMALL_STATE(405)] = 6554,
  [SMALL_STATE(406)] = 6568,
  [SMALL_STATE(407)] = 6582,
  [SMALL_STATE(408)] = 6596,
  [SMALL_STATE(409)] = 6610,
  [SMALL_STATE(410)] = 6624,
  [SMALL_STATE(411)] = 6638,
  [SMALL_STATE(412)] = 6652,
  [SMALL_STATE(413)] = 6666,
  [SMALL_STATE(414)] = 6680,
  [SMALL_STATE(415)] = 6694,
  [SMALL_STATE(416)] = 6708,
  [SMALL_STATE(417)] = 6722,
  [SMALL_STATE(418)] = 6736,
  [SMALL_STATE(419)] = 6750,
  [SMALL_STATE(420)] = 6764,
  [SMALL_STATE(421)] = 6778,
  [SMALL_STATE(422)] = 6792,
  [SMALL_STATE(423)] = 6806,
  [SMALL_STATE(424)] = 6820,
  [SMALL_STATE(425)] = 6834,
  [SMALL_STATE(426)] = 6848,
  [SMALL_STATE(427)] = 6862,
  [SMALL_STATE(428)] = 6876,
  [SMALL_STATE(429)] = 6890,
  [SMALL_STATE(430)] = 6904,
  [SMALL_STATE(431)] = 6918,
  [SMALL_STATE(432)] = 6932,
  [SMALL_STATE(433)] = 6946,
  [SMALL_STATE(434)] = 6960,
  [SMALL_STATE(435)] = 6974,
  [SMALL_STATE(436)] = 6988,
  [SMALL_STATE(437)] = 7002,
  [SMALL_STATE(438)] = 7016,
  [SMALL_STATE(439)] = 7030,
  [SMALL_STATE(440)] = 7046,
  [SMALL_STATE(441)] = 7060,
  [SMALL_STATE(442)] = 7076,
  [SMALL_STATE(443)] = 7092,
  [SMALL_STATE(444)] = 7100,
  [SMALL_STATE(445)] = 7114,
  [SMALL_STATE(446)] = 7128,
  [SMALL_STATE(447)] = 7142,
  [SMALL_STATE(448)] = 7158,
  [SMALL_STATE(449)] = 7172,
  [SMALL_STATE(450)] = 7188,
  [SMALL_STATE(451)] = 7202,
  [SMALL_STATE(452)] = 7218,
  [SMALL_STATE(453)] = 7232,
  [SMALL_STATE(454)] = 7248,
  [SMALL_STATE(455)] = 7262,
  [SMALL_STATE(456)] = 7278,
  [SMALL_STATE(457)] = 7294,
  [SMALL_STATE(458)] = 7310,
  [SMALL_STATE(459)] = 7324,
  [SMALL_STATE(460)] = 7340,
  [SMALL_STATE(461)] = 7354,
  [SMALL_STATE(462)] = 7368,
  [SMALL_STATE(463)] = 7382,
  [SMALL_STATE(464)] = 7398,
  [SMALL_STATE(465)] = 7414,
  [SMALL_STATE(466)] = 7428,
  [SMALL_STATE(467)] = 7442,
  [SMALL_STATE(468)] = 7456,
  [SMALL_STATE(469)] = 7472,
  [SMALL_STATE(470)] = 7486,
  [SMALL_STATE(471)] = 7500,
  [SMALL_STATE(472)] = 7514,
  [SMALL_STATE(473)] = 7528,
  [SMALL_STATE(474)] = 7542,
  [SMALL_STATE(475)] = 7556,
  [SMALL_STATE(476)] = 7570,
  [SMALL_STATE(477)] = 7584,
  [SMALL_STATE(478)] = 7598,
  [SMALL_STATE(479)] = 7612,
  [SMALL_STATE(480)] = 7626,
  [SMALL_STATE(481)] = 7640,
  [SMALL_STATE(482)] = 7654,
  [SMALL_STATE(483)] = 7668,
  [SMALL_STATE(484)] = 7682,
  [SMALL_STATE(485)] = 7696,
  [SMALL_STATE(486)] = 7710,
  [SMALL_STATE(487)] = 7724,
  [SMALL_STATE(488)] = 7738,
  [SMALL_STATE(489)] = 7752,
  [SMALL_STATE(490)] = 7766,
  [SMALL_STATE(491)] = 7780,
  [SMALL_STATE(492)] = 7794,
  [SMALL_STATE(493)] = 7808,
  [SMALL_STATE(494)] = 7822,
  [SMALL_STATE(495)] = 7836,
  [SMALL_STATE(496)] = 7850,
  [SMALL_STATE(497)] = 7864,
  [SMALL_STATE(498)] = 7878,
  [SMALL_STATE(499)] = 7892,
  [SMALL_STATE(500)] = 7906,
  [SMALL_STATE(501)] = 7920,
  [SMALL_STATE(502)] = 7934,
  [SMALL_STATE(503)] = 7948,
  [SMALL_STATE(504)] = 7962,
  [SMALL_STATE(505)] = 7976,
  [SMALL_STATE(506)] = 7990,
  [SMALL_STATE(507)] = 8006,
  [SMALL_STATE(508)] = 8022,
  [SMALL_STATE(509)] = 8036,
  [SMALL_STATE(510)] = 8050,
  [SMALL_STATE(511)] = 8064,
  [SMALL_STATE(512)] = 8072,
  [SMALL_STATE(513)] = 8080,
  [SMALL_STATE(514)] = 8094,
  [SMALL_STATE(515)] = 8108,
  [SMALL_STATE(516)] = 8116,
  [SMALL_STATE(517)] = 8130,
  [SMALL_STATE(518)] = 8144,
  [SMALL_STATE(519)] = 8158,
  [SMALL_STATE(520)] = 8172,
  [SMALL_STATE(521)] = 8186,
  [SMALL_STATE(522)] = 8200,
  [SMALL_STATE(523)] = 8214,
  [SMALL_STATE(524)] = 8222,
  [SMALL_STATE(525)] = 8238,
  [SMALL_STATE(526)] = 8252,
  [SMALL_STATE(527)] = 8266,
  [SMALL_STATE(528)] = 8280,
  [SMALL_STATE(529)] = 8294,
  [SMALL_STATE(530)] = 8308,
  [SMALL_STATE(531)] = 8322,
  [SMALL_STATE(532)] = 8338,
  [SMALL_STATE(533)] = 8352,
  [SMALL_STATE(534)] = 8366,
  [SMALL_STATE(535)] = 8380,
  [SMALL_STATE(536)] = 8394,
  [SMALL_STATE(537)] = 8408,
  [SMALL_STATE(538)] = 8422,
  [SMALL_STATE(539)] = 8430,
  [SMALL_STATE(540)] = 8444,
  [SMALL_STATE(541)] = 8452,
  [SMALL_STATE(542)] = 8466,
  [SMALL_STATE(543)] = 8474,
  [SMALL_STATE(544)] = 8482,
  [SMALL_STATE(545)] = 8496,
  [SMALL_STATE(546)] = 8503,
  [SMALL_STATE(547)] = 8510,
  [SMALL_STATE(548)] = 8523,
  [SMALL_STATE(549)] = 8530,
  [SMALL_STATE(550)] = 8537,
  [SMALL_STATE(551)] = 8544,
  [SMALL_STATE(552)] = 8551,
  [SMALL_STATE(553)] = 8558,
  [SMALL_STATE(554)] = 8565,
  [SMALL_STATE(555)] = 8572,
  [SMALL_STATE(556)] = 8579,
  [SMALL_STATE(557)] = 8586,
  [SMALL_STATE(558)] = 8593,
  [SMALL_STATE(559)] = 8600,
  [SMALL_STATE(560)] = 8607,
  [SMALL_STATE(561)] = 8614,
  [SMALL_STATE(562)] = 8621,
  [SMALL_STATE(563)] = 8628,
  [SMALL_STATE(564)] = 8635,
  [SMALL_STATE(565)] = 8642,
  [SMALL_STATE(566)] = 8649,
  [SMALL_STATE(567)] = 8656,
  [SMALL_STATE(568)] = 8663,
  [SMALL_STATE(569)] = 8670,
  [SMALL_STATE(570)] = 8677,
  [SMALL_STATE(571)] = 8684,
  [SMALL_STATE(572)] = 8697,
  [SMALL_STATE(573)] = 8704,
  [SMALL_STATE(574)] = 8711,
  [SMALL_STATE(575)] = 8718,
  [SMALL_STATE(576)] = 8725,
  [SMALL_STATE(577)] = 8732,
  [SMALL_STATE(578)] = 8739,
  [SMALL_STATE(579)] = 8746,
  [SMALL_STATE(580)] = 8757,
  [SMALL_STATE(581)] = 8764,
  [SMALL_STATE(582)] = 8771,
  [SMALL_STATE(583)] = 8778,
  [SMALL_STATE(584)] = 8785,
  [SMALL_STATE(585)] = 8792,
  [SMALL_STATE(586)] = 8799,
  [SMALL_STATE(587)] = 8806,
  [SMALL_STATE(588)] = 8813,
  [SMALL_STATE(589)] = 8820,
  [SMALL_STATE(590)] = 8827,
  [SMALL_STATE(591)] = 8834,
  [SMALL_STATE(592)] = 8841,
  [SMALL_STATE(593)] = 8848,
  [SMALL_STATE(594)] = 8855,
  [SMALL_STATE(595)] = 8862,
  [SMALL_STATE(596)] = 8869,
  [SMALL_STATE(597)] = 8876,
  [SMALL_STATE(598)] = 8883,
  [SMALL_STATE(599)] = 8890,
  [SMALL_STATE(600)] = 8897,
  [SMALL_STATE(601)] = 8904,
  [SMALL_STATE(602)] = 8911,
  [SMALL_STATE(603)] = 8918,
  [SMALL_STATE(604)] = 8925,
  [SMALL_STATE(605)] = 8932,
  [SMALL_STATE(606)] = 8939,
  [SMALL_STATE(607)] = 8946,
  [SMALL_STATE(608)] = 8955,
  [SMALL_STATE(609)] = 8962,
  [SMALL_STATE(610)] = 8975,
  [SMALL_STATE(611)] = 8982,
  [SMALL_STATE(612)] = 8989,
  [SMALL_STATE(613)] = 8996,
  [SMALL_STATE(614)] = 9003,
  [SMALL_STATE(615)] = 9010,
  [SMALL_STATE(616)] = 9017,
  [SMALL_STATE(617)] = 9024,
  [SMALL_STATE(618)] = 9031,
  [SMALL_STATE(619)] = 9038,
  [SMALL_STATE(620)] = 9045,
  [SMALL_STATE(621)] = 9052,
  [SMALL_STATE(622)] = 9059,
  [SMALL_STATE(623)] = 9066,
  [SMALL_STATE(624)] = 9073,
  [SMALL_STATE(625)] = 9080,
  [SMALL_STATE(626)] = 9087,
  [SMALL_STATE(627)] = 9094,
  [SMALL_STATE(628)] = 9101,
  [SMALL_STATE(629)] = 9108,
  [SMALL_STATE(630)] = 9115,
  [SMALL_STATE(631)] = 9122,
  [SMALL_STATE(632)] = 9129,
  [SMALL_STATE(633)] = 9136,
  [SMALL_STATE(634)] = 9147,
  [SMALL_STATE(635)] = 9154,
  [SMALL_STATE(636)] = 9161,
  [SMALL_STATE(637)] = 9168,
  [SMALL_STATE(638)] = 9175,
  [SMALL_STATE(639)] = 9182,
  [SMALL_STATE(640)] = 9189,
  [SMALL_STATE(641)] = 9196,
  [SMALL_STATE(642)] = 9203,
  [SMALL_STATE(643)] = 9210,
  [SMALL_STATE(644)] = 9217,
  [SMALL_STATE(645)] = 9224,
  [SMALL_STATE(646)] = 9231,
  [SMALL_STATE(647)] = 9238,
  [SMALL_STATE(648)] = 9245,
  [SMALL_STATE(649)] = 9252,
  [SMALL_STATE(650)] = 9259,
  [SMALL_STATE(651)] = 9266,
  [SMALL_STATE(652)] = 9273,
  [SMALL_STATE(653)] = 9280,
  [SMALL_STATE(654)] = 9287,
  [SMALL_STATE(655)] = 9294,
  [SMALL_STATE(656)] = 9301,
  [SMALL_STATE(657)] = 9308,
  [SMALL_STATE(658)] = 9315,
  [SMALL_STATE(659)] = 9322,
  [SMALL_STATE(660)] = 9329,
  [SMALL_STATE(661)] = 9336,
  [SMALL_STATE(662)] = 9343,
  [SMALL_STATE(663)] = 9350,
  [SMALL_STATE(664)] = 9357,
  [SMALL_STATE(665)] = 9364,
  [SMALL_STATE(666)] = 9371,
  [SMALL_STATE(667)] = 9378,
  [SMALL_STATE(668)] = 9385,
  [SMALL_STATE(669)] = 9392,
  [SMALL_STATE(670)] = 9399,
  [SMALL_STATE(671)] = 9406,
  [SMALL_STATE(672)] = 9413,
  [SMALL_STATE(673)] = 9420,
  [SMALL_STATE(674)] = 9427,
  [SMALL_STATE(675)] = 9434,
  [SMALL_STATE(676)] = 9441,
  [SMALL_STATE(677)] = 9448,
  [SMALL_STATE(678)] = 9455,
  [SMALL_STATE(679)] = 9462,
  [SMALL_STATE(680)] = 9469,
  [SMALL_STATE(681)] = 9476,
  [SMALL_STATE(682)] = 9483,
  [SMALL_STATE(683)] = 9496,
  [SMALL_STATE(684)] = 9503,
  [SMALL_STATE(685)] = 9510,
  [SMALL_STATE(686)] = 9517,
  [SMALL_STATE(687)] = 9524,
  [SMALL_STATE(688)] = 9533,
  [SMALL_STATE(689)] = 9540,
  [SMALL_STATE(690)] = 9547,
  [SMALL_STATE(691)] = 9554,
  [SMALL_STATE(692)] = 9567,
  [SMALL_STATE(693)] = 9580,
  [SMALL_STATE(694)] = 9593,
  [SMALL_STATE(695)] = 9606,
  [SMALL_STATE(696)] = 9613,
  [SMALL_STATE(697)] = 9626,
  [SMALL_STATE(698)] = 9633,
  [SMALL_STATE(699)] = 9640,
  [SMALL_STATE(700)] = 9653,
  [SMALL_STATE(701)] = 9660,
  [SMALL_STATE(702)] = 9671,
  [SMALL_STATE(703)] = 9678,
  [SMALL_STATE(704)] = 9689,
  [SMALL_STATE(705)] = 9696,
  [SMALL_STATE(706)] = 9703,
  [SMALL_STATE(707)] = 9710,
  [SMALL_STATE(708)] = 9717,
  [SMALL_STATE(709)] = 9724,
  [SMALL_STATE(710)] = 9737,
  [SMALL_STATE(711)] = 9744,
  [SMALL_STATE(712)] = 9751,
  [SMALL_STATE(713)] = 9758,
  [SMALL_STATE(714)] = 9765,
  [SMALL_STATE(715)] = 9772,
  [SMALL_STATE(716)] = 9779,
  [SMALL_STATE(717)] = 9790,
  [SMALL_STATE(718)] = 9797,
  [SMALL_STATE(719)] = 9804,
  [SMALL_STATE(720)] = 9811,
  [SMALL_STATE(721)] = 9818,
  [SMALL_STATE(722)] = 9831,
  [SMALL_STATE(723)] = 9844,
  [SMALL_STATE(724)] = 9851,
  [SMALL_STATE(725)] = 9860,
  [SMALL_STATE(726)] = 9869,
  [SMALL_STATE(727)] = 9882,
  [SMALL_STATE(728)] = 9889,
  [SMALL_STATE(729)] = 9896,
  [SMALL_STATE(730)] = 9903,
  [SMALL_STATE(731)] = 9910,
  [SMALL_STATE(732)] = 9917,
  [SMALL_STATE(733)] = 9924,
  [SMALL_STATE(734)] = 9931,
  [SMALL_STATE(735)] = 9938,
  [SMALL_STATE(736)] = 9945,
  [SMALL_STATE(737)] = 9952,
  [SMALL_STATE(738)] = 9959,
  [SMALL_STATE(739)] = 9966,
  [SMALL_STATE(740)] = 9973,
  [SMALL_STATE(741)] = 9980,
  [SMALL_STATE(742)] = 9987,
  [SMALL_STATE(743)] = 9994,
  [SMALL_STATE(744)] = 10001,
  [SMALL_STATE(745)] = 10008,
  [SMALL_STATE(746)] = 10015,
  [SMALL_STATE(747)] = 10022,
  [SMALL_STATE(748)] = 10033,
  [SMALL_STATE(749)] = 10040,
  [SMALL_STATE(750)] = 10047,
  [SMALL_STATE(751)] = 10054,
  [SMALL_STATE(752)] = 10061,
  [SMALL_STATE(753)] = 10068,
  [SMALL_STATE(754)] = 10075,
  [SMALL_STATE(755)] = 10082,
  [SMALL_STATE(756)] = 10089,
  [SMALL_STATE(757)] = 10096,
  [SMALL_STATE(758)] = 10103,
  [SMALL_STATE(759)] = 10110,
  [SMALL_STATE(760)] = 10117,
  [SMALL_STATE(761)] = 10124,
  [SMALL_STATE(762)] = 10131,
  [SMALL_STATE(763)] = 10138,
  [SMALL_STATE(764)] = 10145,
  [SMALL_STATE(765)] = 10152,
  [SMALL_STATE(766)] = 10159,
  [SMALL_STATE(767)] = 10166,
  [SMALL_STATE(768)] = 10173,
  [SMALL_STATE(769)] = 10180,
  [SMALL_STATE(770)] = 10187,
  [SMALL_STATE(771)] = 10194,
  [SMALL_STATE(772)] = 10207,
  [SMALL_STATE(773)] = 10214,
  [SMALL_STATE(774)] = 10221,
  [SMALL_STATE(775)] = 10228,
  [SMALL_STATE(776)] = 10235,
  [SMALL_STATE(777)] = 10242,
  [SMALL_STATE(778)] = 10249,
  [SMALL_STATE(779)] = 10256,
  [SMALL_STATE(780)] = 10263,
  [SMALL_STATE(781)] = 10270,
  [SMALL_STATE(782)] = 10277,
  [SMALL_STATE(783)] = 10284,
  [SMALL_STATE(784)] = 10291,
  [SMALL_STATE(785)] = 10298,
  [SMALL_STATE(786)] = 10305,
  [SMALL_STATE(787)] = 10312,
  [SMALL_STATE(788)] = 10319,
  [SMALL_STATE(789)] = 10332,
  [SMALL_STATE(790)] = 10339,
  [SMALL_STATE(791)] = 10352,
  [SMALL_STATE(792)] = 10363,
  [SMALL_STATE(793)] = 10370,
  [SMALL_STATE(794)] = 10377,
  [SMALL_STATE(795)] = 10384,
  [SMALL_STATE(796)] = 10391,
  [SMALL_STATE(797)] = 10398,
  [SMALL_STATE(798)] = 10411,
  [SMALL_STATE(799)] = 10418,
  [SMALL_STATE(800)] = 10425,
  [SMALL_STATE(801)] = 10432,
  [SMALL_STATE(802)] = 10439,
  [SMALL_STATE(803)] = 10446,
  [SMALL_STATE(804)] = 10453,
  [SMALL_STATE(805)] = 10460,
  [SMALL_STATE(806)] = 10467,
  [SMALL_STATE(807)] = 10478,
  [SMALL_STATE(808)] = 10489,
  [SMALL_STATE(809)] = 10496,
  [SMALL_STATE(810)] = 10503,
  [SMALL_STATE(811)] = 10510,
  [SMALL_STATE(812)] = 10517,
  [SMALL_STATE(813)] = 10524,
  [SMALL_STATE(814)] = 10531,
  [SMALL_STATE(815)] = 10538,
  [SMALL_STATE(816)] = 10545,
  [SMALL_STATE(817)] = 10552,
  [SMALL_STATE(818)] = 10559,
  [SMALL_STATE(819)] = 10566,
  [SMALL_STATE(820)] = 10573,
  [SMALL_STATE(821)] = 10580,
  [SMALL_STATE(822)] = 10587,
  [SMALL_STATE(823)] = 10594,
  [SMALL_STATE(824)] = 10601,
  [SMALL_STATE(825)] = 10608,
  [SMALL_STATE(826)] = 10621,
  [SMALL_STATE(827)] = 10628,
  [SMALL_STATE(828)] = 10635,
  [SMALL_STATE(829)] = 10642,
  [SMALL_STATE(830)] = 10655,
  [SMALL_STATE(831)] = 10662,
  [SMALL_STATE(832)] = 10669,
  [SMALL_STATE(833)] = 10676,
  [SMALL_STATE(834)] = 10683,
  [SMALL_STATE(835)] = 10690,
  [SMALL_STATE(836)] = 10697,
  [SMALL_STATE(837)] = 10704,
  [SMALL_STATE(838)] = 10711,
  [SMALL_STATE(839)] = 10724,
  [SMALL_STATE(840)] = 10731,
  [SMALL_STATE(841)] = 10738,
  [SMALL_STATE(842)] = 10745,
  [SMALL_STATE(843)] = 10752,
  [SMALL_STATE(844)] = 10759,
  [SMALL_STATE(845)] = 10766,
  [SMALL_STATE(846)] = 10777,
  [SMALL_STATE(847)] = 10788,
  [SMALL_STATE(848)] = 10795,
  [SMALL_STATE(849)] = 10802,
  [SMALL_STATE(850)] = 10809,
  [SMALL_STATE(851)] = 10816,
  [SMALL_STATE(852)] = 10823,
  [SMALL_STATE(853)] = 10830,
  [SMALL_STATE(854)] = 10837,
  [SMALL_STATE(855)] = 10848,
  [SMALL_STATE(856)] = 10855,
  [SMALL_STATE(857)] = 10862,
  [SMALL_STATE(858)] = 10869,
  [SMALL_STATE(859)] = 10882,
  [SMALL_STATE(860)] = 10889,
  [SMALL_STATE(861)] = 10896,
  [SMALL_STATE(862)] = 10903,
  [SMALL_STATE(863)] = 10916,
  [SMALL_STATE(864)] = 10923,
  [SMALL_STATE(865)] = 10930,
  [SMALL_STATE(866)] = 10941,
  [SMALL_STATE(867)] = 10952,
  [SMALL_STATE(868)] = 10963,
  [SMALL_STATE(869)] = 10974,
  [SMALL_STATE(870)] = 10983,
  [SMALL_STATE(871)] = 10996,
  [SMALL_STATE(872)] = 11007,
  [SMALL_STATE(873)] = 11018,
  [SMALL_STATE(874)] = 11029,
  [SMALL_STATE(875)] = 11040,
  [SMALL_STATE(876)] = 11051,
  [SMALL_STATE(877)] = 11062,
  [SMALL_STATE(878)] = 11073,
  [SMALL_STATE(879)] = 11084,
  [SMALL_STATE(880)] = 11093,
  [SMALL_STATE(881)] = 11100,
  [SMALL_STATE(882)] = 11111,
  [SMALL_STATE(883)] = 11122,
  [SMALL_STATE(884)] = 11129,
  [SMALL_STATE(885)] = 11136,
  [SMALL_STATE(886)] = 11143,
  [SMALL_STATE(887)] = 11156,
  [SMALL_STATE(888)] = 11163,
  [SMALL_STATE(889)] = 11174,
  [SMALL_STATE(890)] = 11181,
  [SMALL_STATE(891)] = 11188,
  [SMALL_STATE(892)] = 11195,
  [SMALL_STATE(893)] = 11202,
  [SMALL_STATE(894)] = 11209,
  [SMALL_STATE(895)] = 11219,
  [SMALL_STATE(896)] = 11225,
  [SMALL_STATE(897)] = 11235,
  [SMALL_STATE(898)] = 11245,
  [SMALL_STATE(899)] = 11251,
  [SMALL_STATE(900)] = 11257,
  [SMALL_STATE(901)] = 11263,
  [SMALL_STATE(902)] = 11269,
  [SMALL_STATE(903)] = 11275,
  [SMALL_STATE(904)] = 11281,
  [SMALL_STATE(905)] = 11287,
  [SMALL_STATE(906)] = 11293,
  [SMALL_STATE(907)] = 11299,
  [SMALL_STATE(908)] = 11305,
  [SMALL_STATE(909)] = 11311,
  [SMALL_STATE(910)] = 11317,
  [SMALL_STATE(911)] = 11323,
  [SMALL_STATE(912)] = 11329,
  [SMALL_STATE(913)] = 11335,
  [SMALL_STATE(914)] = 11341,
  [SMALL_STATE(915)] = 11347,
  [SMALL_STATE(916)] = 11357,
  [SMALL_STATE(917)] = 11363,
  [SMALL_STATE(918)] = 11369,
  [SMALL_STATE(919)] = 11379,
  [SMALL_STATE(920)] = 11389,
  [SMALL_STATE(921)] = 11399,
  [SMALL_STATE(922)] = 11409,
  [SMALL_STATE(923)] = 11415,
  [SMALL_STATE(924)] = 11425,
  [SMALL_STATE(925)] = 11435,
  [SMALL_STATE(926)] = 11441,
  [SMALL_STATE(927)] = 11451,
  [SMALL_STATE(928)] = 11457,
  [SMALL_STATE(929)] = 11467,
  [SMALL_STATE(930)] = 11477,
  [SMALL_STATE(931)] = 11487,
  [SMALL_STATE(932)] = 11493,
  [SMALL_STATE(933)] = 11503,
  [SMALL_STATE(934)] = 11513,
  [SMALL_STATE(935)] = 11521,
  [SMALL_STATE(936)] = 11531,
  [SMALL_STATE(937)] = 11541,
  [SMALL_STATE(938)] = 11547,
  [SMALL_STATE(939)] = 11557,
  [SMALL_STATE(940)] = 11567,
  [SMALL_STATE(941)] = 11573,
  [SMALL_STATE(942)] = 11583,
  [SMALL_STATE(943)] = 11593,
  [SMALL_STATE(944)] = 11603,
  [SMALL_STATE(945)] = 11613,
  [SMALL_STATE(946)] = 11619,
  [SMALL_STATE(947)] = 11629,
  [SMALL_STATE(948)] = 11639,
  [SMALL_STATE(949)] = 11649,
  [SMALL_STATE(950)] = 11659,
  [SMALL_STATE(951)] = 11669,
  [SMALL_STATE(952)] = 11679,
  [SMALL_STATE(953)] = 11689,
  [SMALL_STATE(954)] = 11699,
  [SMALL_STATE(955)] = 11709,
  [SMALL_STATE(956)] = 11719,
  [SMALL_STATE(957)] = 11729,
  [SMALL_STATE(958)] = 11735,
  [SMALL_STATE(959)] = 11745,
  [SMALL_STATE(960)] = 11755,
  [SMALL_STATE(961)] = 11765,
  [SMALL_STATE(962)] = 11775,
  [SMALL_STATE(963)] = 11785,
  [SMALL_STATE(964)] = 11791,
  [SMALL_STATE(965)] = 11801,
  [SMALL_STATE(966)] = 11809,
  [SMALL_STATE(967)] = 11819,
  [SMALL_STATE(968)] = 11825,
  [SMALL_STATE(969)] = 11835,
  [SMALL_STATE(970)] = 11845,
  [SMALL_STATE(971)] = 11855,
  [SMALL_STATE(972)] = 11861,
  [SMALL_STATE(973)] = 11871,
  [SMALL_STATE(974)] = 11879,
  [SMALL_STATE(975)] = 11889,
  [SMALL_STATE(976)] = 11899,
  [SMALL_STATE(977)] = 11909,
  [SMALL_STATE(978)] = 11919,
  [SMALL_STATE(979)] = 11929,
  [SMALL_STATE(980)] = 11939,
  [SMALL_STATE(981)] = 11949,
  [SMALL_STATE(982)] = 11959,
  [SMALL_STATE(983)] = 11969,
  [SMALL_STATE(984)] = 11979,
  [SMALL_STATE(985)] = 11985,
  [SMALL_STATE(986)] = 11995,
  [SMALL_STATE(987)] = 12005,
  [SMALL_STATE(988)] = 12015,
  [SMALL_STATE(989)] = 12025,
  [SMALL_STATE(990)] = 12035,
  [SMALL_STATE(991)] = 12043,
  [SMALL_STATE(992)] = 12053,
  [SMALL_STATE(993)] = 12063,
  [SMALL_STATE(994)] = 12073,
  [SMALL_STATE(995)] = 12083,
  [SMALL_STATE(996)] = 12093,
  [SMALL_STATE(997)] = 12103,
  [SMALL_STATE(998)] = 12113,
  [SMALL_STATE(999)] = 12123,
  [SMALL_STATE(1000)] = 12133,
  [SMALL_STATE(1001)] = 12143,
  [SMALL_STATE(1002)] = 12153,
  [SMALL_STATE(1003)] = 12159,
  [SMALL_STATE(1004)] = 12169,
  [SMALL_STATE(1005)] = 12179,
  [SMALL_STATE(1006)] = 12189,
  [SMALL_STATE(1007)] = 12199,
  [SMALL_STATE(1008)] = 12209,
  [SMALL_STATE(1009)] = 12219,
  [SMALL_STATE(1010)] = 12227,
  [SMALL_STATE(1011)] = 12237,
  [SMALL_STATE(1012)] = 12247,
  [SMALL_STATE(1013)] = 12257,
  [SMALL_STATE(1014)] = 12267,
  [SMALL_STATE(1015)] = 12275,
  [SMALL_STATE(1016)] = 12285,
  [SMALL_STATE(1017)] = 12291,
  [SMALL_STATE(1018)] = 12301,
  [SMALL_STATE(1019)] = 12307,
  [SMALL_STATE(1020)] = 12313,
  [SMALL_STATE(1021)] = 12323,
  [SMALL_STATE(1022)] = 12333,
  [SMALL_STATE(1023)] = 12343,
  [SMALL_STATE(1024)] = 12353,
  [SMALL_STATE(1025)] = 12359,
  [SMALL_STATE(1026)] = 12369,
  [SMALL_STATE(1027)] = 12379,
  [SMALL_STATE(1028)] = 12389,
  [SMALL_STATE(1029)] = 12399,
  [SMALL_STATE(1030)] = 12407,
  [SMALL_STATE(1031)] = 12415,
  [SMALL_STATE(1032)] = 12423,
  [SMALL_STATE(1033)] = 12433,
  [SMALL_STATE(1034)] = 12441,
  [SMALL_STATE(1035)] = 12451,
  [SMALL_STATE(1036)] = 12461,
  [SMALL_STATE(1037)] = 12471,
  [SMALL_STATE(1038)] = 12481,
  [SMALL_STATE(1039)] = 12487,
  [SMALL_STATE(1040)] = 12497,
  [SMALL_STATE(1041)] = 12505,
  [SMALL_STATE(1042)] = 12515,
  [SMALL_STATE(1043)] = 12525,
  [SMALL_STATE(1044)] = 12535,
  [SMALL_STATE(1045)] = 12545,
  [SMALL_STATE(1046)] = 12555,
  [SMALL_STATE(1047)] = 12565,
  [SMALL_STATE(1048)] = 12571,
  [SMALL_STATE(1049)] = 12581,
  [SMALL_STATE(1050)] = 12591,
  [SMALL_STATE(1051)] = 12597,
  [SMALL_STATE(1052)] = 12607,
  [SMALL_STATE(1053)] = 12617,
  [SMALL_STATE(1054)] = 12627,
  [SMALL_STATE(1055)] = 12637,
  [SMALL_STATE(1056)] = 12647,
  [SMALL_STATE(1057)] = 12657,
  [SMALL_STATE(1058)] = 12667,
  [SMALL_STATE(1059)] = 12673,
  [SMALL_STATE(1060)] = 12683,
  [SMALL_STATE(1061)] = 12693,
  [SMALL_STATE(1062)] = 12699,
  [SMALL_STATE(1063)] = 12709,
  [SMALL_STATE(1064)] = 12719,
  [SMALL_STATE(1065)] = 12729,
  [SMALL_STATE(1066)] = 12739,
  [SMALL_STATE(1067)] = 12749,
  [SMALL_STATE(1068)] = 12759,
  [SMALL_STATE(1069)] = 12769,
  [SMALL_STATE(1070)] = 12779,
  [SMALL_STATE(1071)] = 12789,
  [SMALL_STATE(1072)] = 12799,
  [SMALL_STATE(1073)] = 12809,
  [SMALL_STATE(1074)] = 12819,
  [SMALL_STATE(1075)] = 12829,
  [SMALL_STATE(1076)] = 12839,
  [SMALL_STATE(1077)] = 12849,
  [SMALL_STATE(1078)] = 12859,
  [SMALL_STATE(1079)] = 12869,
  [SMALL_STATE(1080)] = 12879,
  [SMALL_STATE(1081)] = 12889,
  [SMALL_STATE(1082)] = 12899,
  [SMALL_STATE(1083)] = 12909,
  [SMALL_STATE(1084)] = 12919,
  [SMALL_STATE(1085)] = 12929,
  [SMALL_STATE(1086)] = 12939,
  [SMALL_STATE(1087)] = 12949,
  [SMALL_STATE(1088)] = 12959,
  [SMALL_STATE(1089)] = 12964,
  [SMALL_STATE(1090)] = 12971,
  [SMALL_STATE(1091)] = 12976,
  [SMALL_STATE(1092)] = 12983,
  [SMALL_STATE(1093)] = 12990,
  [SMALL_STATE(1094)] = 12995,
  [SMALL_STATE(1095)] = 13002,
  [SMALL_STATE(1096)] = 13009,
  [SMALL_STATE(1097)] = 13016,
  [SMALL_STATE(1098)] = 13021,
  [SMALL_STATE(1099)] = 13028,
  [SMALL_STATE(1100)] = 13035,
  [SMALL_STATE(1101)] = 13040,
  [SMALL_STATE(1102)] = 13047,
  [SMALL_STATE(1103)] = 13054,
  [SMALL_STATE(1104)] = 13061,
  [SMALL_STATE(1105)] = 13068,
  [SMALL_STATE(1106)] = 13075,
  [SMALL_STATE(1107)] = 13082,
  [SMALL_STATE(1108)] = 13089,
  [SMALL_STATE(1109)] = 13096,
  [SMALL_STATE(1110)] = 13101,
  [SMALL_STATE(1111)] = 13108,
  [SMALL_STATE(1112)] = 13113,
  [SMALL_STATE(1113)] = 13120,
  [SMALL_STATE(1114)] = 13127,
  [SMALL_STATE(1115)] = 13134,
  [SMALL_STATE(1116)] = 13141,
  [SMALL_STATE(1117)] = 13146,
  [SMALL_STATE(1118)] = 13153,
  [SMALL_STATE(1119)] = 13160,
  [SMALL_STATE(1120)] = 13167,
  [SMALL_STATE(1121)] = 13174,
  [SMALL_STATE(1122)] = 13179,
  [SMALL_STATE(1123)] = 13184,
  [SMALL_STATE(1124)] = 13191,
  [SMALL_STATE(1125)] = 13198,
  [SMALL_STATE(1126)] = 13205,
  [SMALL_STATE(1127)] = 13212,
  [SMALL_STATE(1128)] = 13219,
  [SMALL_STATE(1129)] = 13226,
  [SMALL_STATE(1130)] = 13233,
  [SMALL_STATE(1131)] = 13240,
  [SMALL_STATE(1132)] = 13247,
  [SMALL_STATE(1133)] = 13254,
  [SMALL_STATE(1134)] = 13261,
  [SMALL_STATE(1135)] = 13268,
  [SMALL_STATE(1136)] = 13275,
  [SMALL_STATE(1137)] = 13282,
  [SMALL_STATE(1138)] = 13289,
  [SMALL_STATE(1139)] = 13294,
  [SMALL_STATE(1140)] = 13299,
  [SMALL_STATE(1141)] = 13306,
  [SMALL_STATE(1142)] = 13313,
  [SMALL_STATE(1143)] = 13320,
  [SMALL_STATE(1144)] = 13327,
  [SMALL_STATE(1145)] = 13334,
  [SMALL_STATE(1146)] = 13341,
  [SMALL_STATE(1147)] = 13348,
  [SMALL_STATE(1148)] = 13355,
  [SMALL_STATE(1149)] = 13362,
  [SMALL_STATE(1150)] = 13369,
  [SMALL_STATE(1151)] = 13376,
  [SMALL_STATE(1152)] = 13383,
  [SMALL_STATE(1153)] = 13390,
  [SMALL_STATE(1154)] = 13397,
  [SMALL_STATE(1155)] = 13404,
  [SMALL_STATE(1156)] = 13411,
  [SMALL_STATE(1157)] = 13418,
  [SMALL_STATE(1158)] = 13425,
  [SMALL_STATE(1159)] = 13432,
  [SMALL_STATE(1160)] = 13439,
  [SMALL_STATE(1161)] = 13446,
  [SMALL_STATE(1162)] = 13453,
  [SMALL_STATE(1163)] = 13460,
  [SMALL_STATE(1164)] = 13467,
  [SMALL_STATE(1165)] = 13474,
  [SMALL_STATE(1166)] = 13481,
  [SMALL_STATE(1167)] = 13488,
  [SMALL_STATE(1168)] = 13495,
  [SMALL_STATE(1169)] = 13502,
  [SMALL_STATE(1170)] = 13509,
  [SMALL_STATE(1171)] = 13516,
  [SMALL_STATE(1172)] = 13523,
  [SMALL_STATE(1173)] = 13530,
  [SMALL_STATE(1174)] = 13537,
  [SMALL_STATE(1175)] = 13544,
  [SMALL_STATE(1176)] = 13551,
  [SMALL_STATE(1177)] = 13558,
  [SMALL_STATE(1178)] = 13565,
  [SMALL_STATE(1179)] = 13572,
  [SMALL_STATE(1180)] = 13579,
  [SMALL_STATE(1181)] = 13586,
  [SMALL_STATE(1182)] = 13593,
  [SMALL_STATE(1183)] = 13600,
  [SMALL_STATE(1184)] = 13607,
  [SMALL_STATE(1185)] = 13612,
  [SMALL_STATE(1186)] = 13619,
  [SMALL_STATE(1187)] = 13624,
  [SMALL_STATE(1188)] = 13631,
  [SMALL_STATE(1189)] = 13636,
  [SMALL_STATE(1190)] = 13643,
  [SMALL_STATE(1191)] = 13650,
  [SMALL_STATE(1192)] = 13655,
  [SMALL_STATE(1193)] = 13662,
  [SMALL_STATE(1194)] = 13667,
  [SMALL_STATE(1195)] = 13672,
  [SMALL_STATE(1196)] = 13677,
  [SMALL_STATE(1197)] = 13684,
  [SMALL_STATE(1198)] = 13689,
  [SMALL_STATE(1199)] = 13696,
  [SMALL_STATE(1200)] = 13701,
  [SMALL_STATE(1201)] = 13708,
  [SMALL_STATE(1202)] = 13715,
  [SMALL_STATE(1203)] = 13719,
  [SMALL_STATE(1204)] = 13723,
  [SMALL_STATE(1205)] = 13727,
  [SMALL_STATE(1206)] = 13731,
  [SMALL_STATE(1207)] = 13735,
  [SMALL_STATE(1208)] = 13739,
  [SMALL_STATE(1209)] = 13743,
  [SMALL_STATE(1210)] = 13747,
  [SMALL_STATE(1211)] = 13751,
  [SMALL_STATE(1212)] = 13755,
  [SMALL_STATE(1213)] = 13759,
  [SMALL_STATE(1214)] = 13763,
  [SMALL_STATE(1215)] = 13767,
  [SMALL_STATE(1216)] = 13771,
  [SMALL_STATE(1217)] = 13775,
  [SMALL_STATE(1218)] = 13779,
  [SMALL_STATE(1219)] = 13783,
  [SMALL_STATE(1220)] = 13787,
  [SMALL_STATE(1221)] = 13791,
  [SMALL_STATE(1222)] = 13795,
  [SMALL_STATE(1223)] = 13799,
  [SMALL_STATE(1224)] = 13803,
  [SMALL_STATE(1225)] = 13807,
  [SMALL_STATE(1226)] = 13811,
  [SMALL_STATE(1227)] = 13815,
  [SMALL_STATE(1228)] = 13819,
  [SMALL_STATE(1229)] = 13823,
  [SMALL_STATE(1230)] = 13827,
  [SMALL_STATE(1231)] = 13831,
  [SMALL_STATE(1232)] = 13835,
  [SMALL_STATE(1233)] = 13839,
  [SMALL_STATE(1234)] = 13843,
  [SMALL_STATE(1235)] = 13847,
  [SMALL_STATE(1236)] = 13851,
  [SMALL_STATE(1237)] = 13855,
  [SMALL_STATE(1238)] = 13859,
  [SMALL_STATE(1239)] = 13863,
  [SMALL_STATE(1240)] = 13867,
  [SMALL_STATE(1241)] = 13871,
  [SMALL_STATE(1242)] = 13875,
  [SMALL_STATE(1243)] = 13879,
  [SMALL_STATE(1244)] = 13883,
  [SMALL_STATE(1245)] = 13887,
  [SMALL_STATE(1246)] = 13891,
  [SMALL_STATE(1247)] = 13895,
  [SMALL_STATE(1248)] = 13899,
  [SMALL_STATE(1249)] = 13903,
  [SMALL_STATE(1250)] = 13907,
  [SMALL_STATE(1251)] = 13911,
  [SMALL_STATE(1252)] = 13915,
  [SMALL_STATE(1253)] = 13919,
  [SMALL_STATE(1254)] = 13923,
  [SMALL_STATE(1255)] = 13927,
  [SMALL_STATE(1256)] = 13931,
  [SMALL_STATE(1257)] = 13935,
  [SMALL_STATE(1258)] = 13939,
  [SMALL_STATE(1259)] = 13943,
  [SMALL_STATE(1260)] = 13947,
  [SMALL_STATE(1261)] = 13951,
  [SMALL_STATE(1262)] = 13955,
  [SMALL_STATE(1263)] = 13959,
  [SMALL_STATE(1264)] = 13963,
  [SMALL_STATE(1265)] = 13967,
  [SMALL_STATE(1266)] = 13971,
  [SMALL_STATE(1267)] = 13975,
  [SMALL_STATE(1268)] = 13979,
  [SMALL_STATE(1269)] = 13983,
  [SMALL_STATE(1270)] = 13987,
  [SMALL_STATE(1271)] = 13991,
  [SMALL_STATE(1272)] = 13995,
  [SMALL_STATE(1273)] = 13999,
  [SMALL_STATE(1274)] = 14003,
  [SMALL_STATE(1275)] = 14007,
  [SMALL_STATE(1276)] = 14011,
  [SMALL_STATE(1277)] = 14015,
  [SMALL_STATE(1278)] = 14019,
  [SMALL_STATE(1279)] = 14023,
  [SMALL_STATE(1280)] = 14027,
  [SMALL_STATE(1281)] = 14031,
  [SMALL_STATE(1282)] = 14035,
  [SMALL_STATE(1283)] = 14039,
  [SMALL_STATE(1284)] = 14043,
  [SMALL_STATE(1285)] = 14047,
  [SMALL_STATE(1286)] = 14051,
  [SMALL_STATE(1287)] = 14055,
  [SMALL_STATE(1288)] = 14059,
  [SMALL_STATE(1289)] = 14063,
  [SMALL_STATE(1290)] = 14067,
  [SMALL_STATE(1291)] = 14071,
  [SMALL_STATE(1292)] = 14075,
  [SMALL_STATE(1293)] = 14079,
  [SMALL_STATE(1294)] = 14083,
  [SMALL_STATE(1295)] = 14087,
  [SMALL_STATE(1296)] = 14091,
  [SMALL_STATE(1297)] = 14095,
  [SMALL_STATE(1298)] = 14099,
  [SMALL_STATE(1299)] = 14103,
  [SMALL_STATE(1300)] = 14107,
  [SMALL_STATE(1301)] = 14111,
  [SMALL_STATE(1302)] = 14115,
  [SMALL_STATE(1303)] = 14119,
  [SMALL_STATE(1304)] = 14123,
  [SMALL_STATE(1305)] = 14127,
  [SMALL_STATE(1306)] = 14131,
  [SMALL_STATE(1307)] = 14135,
  [SMALL_STATE(1308)] = 14139,
  [SMALL_STATE(1309)] = 14143,
  [SMALL_STATE(1310)] = 14147,
  [SMALL_STATE(1311)] = 14151,
  [SMALL_STATE(1312)] = 14155,
  [SMALL_STATE(1313)] = 14159,
  [SMALL_STATE(1314)] = 14163,
  [SMALL_STATE(1315)] = 14167,
  [SMALL_STATE(1316)] = 14171,
  [SMALL_STATE(1317)] = 14175,
  [SMALL_STATE(1318)] = 14179,
  [SMALL_STATE(1319)] = 14183,
  [SMALL_STATE(1320)] = 14187,
  [SMALL_STATE(1321)] = 14191,
  [SMALL_STATE(1322)] = 14195,
  [SMALL_STATE(1323)] = 14199,
  [SMALL_STATE(1324)] = 14203,
  [SMALL_STATE(1325)] = 14207,
  [SMALL_STATE(1326)] = 14211,
  [SMALL_STATE(1327)] = 14215,
  [SMALL_STATE(1328)] = 14219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1249),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1115),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1233),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1250),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1141),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1214),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1215),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1033),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1155),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1239),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1040),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1212),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1182),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1234),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1314),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1213),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1231),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1083),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1080),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1096),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1279),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1177),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(78),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(143),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 30), SHIFT_REPEAT(1177),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(90),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(145),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1103),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1098),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1258),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1153),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1265),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1095),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1300),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1193),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(753),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 44),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(977),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 33),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 34),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 2, 0, 35),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 36),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 37),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 1, 0, 38),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 39),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 38),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 39),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 39),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 46),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 35),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 47),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 28),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 48),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 36),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 49),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_using_complement, 2, 0, 35),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 36),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 50),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 2, 0, 46),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 37),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 36),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 38),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 2, 0, 51),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 35),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 38),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 51),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 53),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 53),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 38),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 54),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 60),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 61),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 62),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 50),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_line, 2, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 63),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 4, 0, 37),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 65),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__using_complements, 3, 0, 51),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 65),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 51),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 35),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 38),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 51),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 67),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 68),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 50),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_line, 4, 0, 67),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 5, 0, 63),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 65),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 51),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 6, 0, 68),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 7, 0, 73),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 74),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 75),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 73),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 8, 0, 77),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 74),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 79),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 80),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 81),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 75),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 82),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 83),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 9, 0, 77),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 79),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 80),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 84),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 81),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 85),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 82),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 86),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 83),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 87),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 84),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 85),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 86),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 88),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 87),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 11, 0, 88),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1038),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 58),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 59),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1282),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 59),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(940),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [1503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [1509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1297),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 44),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 5, 0, 70),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 6, 0, 72),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_text_body, 3, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 7, 0, 76),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1248),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1263),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(986),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(936),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 28),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1093),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1109),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 31),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 69),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1319),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 31),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 41),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 42),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 45),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 2, 0, 35),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1325),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 45),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 57),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 66),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1014),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1251),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settle_inline_block, 4, 0, 42),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until_complement, 3, 2, 78),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 71),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1232),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(791),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 35),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1305),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 46),
  [1940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1017),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 64),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 35),
  [1951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1278),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1310),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1245),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1261),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1301),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1236),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1323),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1254),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1294),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [2133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1284),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [2137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 52),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 40),
  [2145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 55),
  [2149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [2161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [2289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1253),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [2349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 56),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
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
  ts_external_token__settle_text_start = 15,
  ts_external_token__text_indent = 16,
  ts_external_token__cap_text_start = 17,
  ts_external_token_indented_raw_text = 18,
  ts_external_token__flow_raw_text = 19,
  ts_external_token__agic_raw_text = 20,
  ts_external_token__error_line = 21,
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
  [ts_external_token__settle_text_start] = sym__settle_text_start,
  [ts_external_token__text_indent] = sym__text_indent,
  [ts_external_token__cap_text_start] = sym__cap_text_start,
  [ts_external_token_indented_raw_text] = sym_indented_raw_text,
  [ts_external_token__flow_raw_text] = sym__flow_raw_text,
  [ts_external_token__agic_raw_text] = sym__agic_raw_text,
  [ts_external_token__error_line] = sym__error_line,
};

static const bool ts_external_scanner_states[33][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__flow_raw_text] = true,
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
  },
  [10] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [12] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__agic_raw_text] = true,
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
    [ts_external_token_indented_raw_text] = true,
  },
  [25] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
  },
  [27] = {
    [ts_external_token__line_start] = true,
  },
  [28] = {
    [ts_external_token__settle_text_start] = true,
  },
  [29] = {
    [ts_external_token__comment_end] = true,
  },
  [30] = {
    [ts_external_token__until_start] = true,
  },
  [31] = {
    [ts_external_token__from_start] = true,
  },
  [32] = {
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
