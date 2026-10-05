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
#define STATE_COUNT 1363
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 275
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 26
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 92

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
  sym_source_file = 133,
  sym_item = 134,
  sym_line_end = 135,
  sym_module_doc_comment = 136,
  sym_item_doc_comment = 137,
  sym_param_doc_tag = 138,
  sym__doc_space = 139,
  sym__trivia = 140,
  sym_with = 141,
  sym_type = 142,
  sym_base_type = 143,
  sym_builtin_type = 144,
  sym_user_type = 145,
  sym_type_suffix = 146,
  sym_struct = 147,
  sym_struct_name = 148,
  sym_struct_body = 149,
  sym_field = 150,
  sym_field_name = 151,
  sym_psyche = 152,
  sym_skill = 153,
  sym_service = 154,
  sym_prompt = 155,
  sym__cap_definition = 156,
  sym_cap_body = 157,
  sym__cap_text_body = 158,
  sym_task = 159,
  sym_chore = 160,
  sym_cap_name = 161,
  sym_cap_ref = 162,
  sym_job_name = 163,
  sym_job_body = 164,
  sym_property = 165,
  sym_property_key = 166,
  sym_property_value = 167,
  sym_instruct = 168,
  sym_instruct_name = 169,
  sym_instruct_body = 170,
  sym_context = 171,
  sym_context_name = 172,
  sym_context_body = 173,
  sym_text_inline = 174,
  sym_text_block = 175,
  sym_text_body = 176,
  sym_text_body_line = 177,
  sym_agic = 178,
  sym_agic_name = 179,
  sym_agic_body = 180,
  sym_params = 181,
  sym_param = 182,
  sym_param_name = 183,
  sym_flow = 184,
  sym_flow_name = 185,
  sym_flow_body = 186,
  sym_statements = 187,
  sym__flow_statement = 188,
  sym__flow_operation = 189,
  sym__collection_operation = 190,
  sym__bound_operation = 191,
  sym__invalid_collection_operation = 192,
  sym__invalid_spawn_operation = 193,
  sym_let_statement = 194,
  sym_exec_statement = 195,
  sym_spawn_statement = 196,
  sym__invalid_exec_binding = 197,
  sym_run_statement = 198,
  sym_implicit_run_statement = 199,
  sym__implicit_run_line = 200,
  sym_seek_statement = 201,
  sym_ask_statement = 202,
  sym_generate_statement = 203,
  sym_reduce_statement = 204,
  sym__reduce_inline_line = 205,
  sym__reduce_line = 206,
  sym__reduce_inline_block = 207,
  sym__reduce_text_body = 208,
  sym__from_complement = 209,
  sym_map_statement = 210,
  sym_keep_statement = 211,
  sym_drop_statement = 212,
  sym_sort_statement = 213,
  sym__named_using_complement = 214,
  sym__using_space = 215,
  sym__named_if_complement = 216,
  sym__inline_if_complement = 217,
  sym__named_by_complement = 218,
  sym__inline_by_complement = 219,
  sym__runnable_complements = 220,
  sym__if_complements = 221,
  sym__by_complements = 222,
  sym__lanes_complement = 223,
  sym__order_complement = 224,
  sym_repeat_statement = 225,
  sym__window_complement = 226,
  sym__repeat_count_complement = 227,
  sym__until_complement = 228,
  sym_invalid_flow_reserved_statement = 229,
  sym_inline_agic = 230,
  sym_inline_agic_body = 231,
  sym_position = 232,
  sym_runnable = 233,
  sym_agent = 234,
  sym_local_name = 235,
  sym_directive = 236,
  sym__query_directive_key = 237,
  sym__route_directive_key = 238,
  sym_directive_key = 239,
  sym_directive_op = 240,
  sym_route_value = 241,
  sym_recall_value = 242,
  sym_recall_source = 243,
  sym__directives = 244,
  sym_text_ref = 245,
  sym_messages = 246,
  sym_message = 247,
  sym_unroled_message = 248,
  sym__unroled_message_line = 249,
  sym_invalid_agic_reserved_message = 250,
  sym_role = 251,
  sym__pass_statement = 252,
  sym_flow_lanes_keyword = 253,
  sym__flow_reserved_word = 254,
  sym__collection_binding_word = 255,
  sym__agic_reserved_word = 256,
  sym_assign_operator = 257,
  sym_type_name = 258,
  aux_sym_source_file_repeat1 = 259,
  aux_sym_type_repeat1 = 260,
  aux_sym_struct_body_repeat1 = 261,
  aux_sym_struct_body_repeat2 = 262,
  aux_sym__cap_definition_repeat1 = 263,
  aux_sym__cap_text_body_repeat1 = 264,
  aux_sym_job_body_repeat1 = 265,
  aux_sym_text_body_repeat1 = 266,
  aux_sym_params_repeat1 = 267,
  aux_sym_statements_repeat1 = 268,
  aux_sym_implicit_run_statement_repeat1 = 269,
  aux_sym_route_value_repeat1 = 270,
  aux_sym_recall_value_repeat1 = 271,
  aux_sym__directives_repeat1 = 272,
  aux_sym_messages_repeat1 = 273,
  aux_sym_unroled_message_repeat1 = 274,
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
  [65] = {.index = 140, .length = 1},
  [66] = {.index = 141, .length = 5},
  [67] = {.index = 146, .length = 1},
  [68] = {.index = 147, .length = 2},
  [69] = {.index = 149, .length = 3},
  [70] = {.index = 152, .length = 3},
  [71] = {.index = 155, .length = 4},
  [72] = {.index = 159, .length = 1},
  [73] = {.index = 160, .length = 1},
  [74] = {.index = 161, .length = 1},
  [75] = {.index = 162, .length = 3},
  [76] = {.index = 165, .length = 2},
  [77] = {.index = 167, .length = 2},
  [78] = {.index = 169, .length = 2},
  [79] = {.index = 171, .length = 3},
  [80] = {.index = 174, .length = 2},
  [81] = {.index = 176, .length = 1},
  [82] = {.index = 177, .length = 2},
  [83] = {.index = 179, .length = 3},
  [84] = {.index = 182, .length = 3},
  [85] = {.index = 185, .length = 2},
  [86] = {.index = 187, .length = 3},
  [87] = {.index = 190, .length = 3},
  [88] = {.index = 193, .length = 3},
  [89] = {.index = 196, .length = 4},
  [90] = {.index = 200, .length = 3},
  [91] = {.index = 203, .length = 4},
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
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [159] =
    {field_name, 1},
  [160] =
    {field_body, 4},
  [161] =
    {field_from, 3},
  [162] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [165] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [167] =
    {field_body, 4},
    {field_until, 5, .inherited = true},
  [169] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
  [171] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [174] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [176] =
    {field_until, 2},
  [177] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
  [179] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
    {field_window, 1, .inherited = true},
  [182] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_until, 6, .inherited = true},
  [185] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
  [187] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [190] =
    {field_body, 6},
    {field_until, 7, .inherited = true},
    {field_window, 1, .inherited = true},
  [193] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
  [196] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
    {field_window, 2, .inherited = true},
  [200] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [203] =
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
  [4] = 2,
  [5] = 2,
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
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
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
  [38] = 28,
  [39] = 39,
  [40] = 28,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 34,
  [46] = 32,
  [47] = 34,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 52,
  [59] = 57,
  [60] = 53,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 61,
  [68] = 61,
  [69] = 53,
  [70] = 54,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 74,
  [82] = 74,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 84,
  [87] = 75,
  [88] = 88,
  [89] = 75,
  [90] = 90,
  [91] = 71,
  [92] = 84,
  [93] = 93,
  [94] = 94,
  [95] = 83,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 72,
  [100] = 100,
  [101] = 93,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 78,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 80,
  [114] = 114,
  [115] = 93,
  [116] = 96,
  [117] = 94,
  [118] = 88,
  [119] = 77,
  [120] = 72,
  [121] = 73,
  [122] = 78,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 94,
  [134] = 98,
  [135] = 88,
  [136] = 109,
  [137] = 110,
  [138] = 111,
  [139] = 112,
  [140] = 128,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 98,
  [151] = 151,
  [152] = 109,
  [153] = 110,
  [154] = 111,
  [155] = 112,
  [156] = 128,
  [157] = 128,
  [158] = 128,
  [159] = 128,
  [160] = 128,
  [161] = 128,
  [162] = 128,
  [163] = 128,
  [164] = 146,
  [165] = 165,
  [166] = 128,
  [167] = 73,
  [168] = 168,
  [169] = 127,
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
  [180] = 180,
  [181] = 125,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 127,
  [191] = 168,
  [192] = 192,
  [193] = 185,
  [194] = 183,
  [195] = 184,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 125,
  [200] = 183,
  [201] = 184,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 188,
  [206] = 206,
  [207] = 207,
  [208] = 202,
  [209] = 168,
  [210] = 202,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 188,
  [216] = 216,
  [217] = 185,
  [218] = 218,
  [219] = 214,
  [220] = 220,
  [221] = 214,
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
  [242] = 175,
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
  [330] = 114,
  [331] = 331,
  [332] = 322,
  [333] = 323,
  [334] = 324,
  [335] = 325,
  [336] = 326,
  [337] = 327,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 19,
  [344] = 328,
  [345] = 329,
  [346] = 328,
  [347] = 329,
  [348] = 322,
  [349] = 323,
  [350] = 324,
  [351] = 325,
  [352] = 326,
  [353] = 327,
  [354] = 328,
  [355] = 329,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 357,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 223,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 265,
  [376] = 376,
  [377] = 377,
  [378] = 374,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 227,
  [386] = 228,
  [387] = 229,
  [388] = 240,
  [389] = 389,
  [390] = 390,
  [391] = 360,
  [392] = 362,
  [393] = 393,
  [394] = 390,
  [395] = 114,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 397,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 398,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 399,
  [423] = 357,
  [424] = 358,
  [425] = 400,
  [426] = 401,
  [427] = 402,
  [428] = 403,
  [429] = 380,
  [430] = 381,
  [431] = 406,
  [432] = 382,
  [433] = 407,
  [434] = 408,
  [435] = 369,
  [436] = 370,
  [437] = 409,
  [438] = 410,
  [439] = 411,
  [440] = 412,
  [441] = 265,
  [442] = 413,
  [443] = 414,
  [444] = 374,
  [445] = 445,
  [446] = 380,
  [447] = 381,
  [448] = 382,
  [449] = 416,
  [450] = 417,
  [451] = 227,
  [452] = 228,
  [453] = 229,
  [454] = 240,
  [455] = 418,
  [456] = 419,
  [457] = 360,
  [458] = 362,
  [459] = 420,
  [460] = 390,
  [461] = 393,
  [462] = 421,
  [463] = 397,
  [464] = 398,
  [465] = 399,
  [466] = 400,
  [467] = 401,
  [468] = 402,
  [469] = 403,
  [470] = 197,
  [471] = 204,
  [472] = 406,
  [473] = 407,
  [474] = 408,
  [475] = 409,
  [476] = 410,
  [477] = 411,
  [478] = 412,
  [479] = 413,
  [480] = 414,
  [481] = 206,
  [482] = 416,
  [483] = 417,
  [484] = 418,
  [485] = 419,
  [486] = 420,
  [487] = 421,
  [488] = 488,
  [489] = 357,
  [490] = 358,
  [491] = 172,
  [492] = 357,
  [493] = 358,
  [494] = 494,
  [495] = 170,
  [496] = 114,
  [497] = 497,
  [498] = 369,
  [499] = 170,
  [500] = 372,
  [501] = 370,
  [502] = 172,
  [503] = 372,
  [504] = 504,
  [505] = 505,
  [506] = 175,
  [507] = 507,
  [508] = 363,
  [509] = 368,
  [510] = 376,
  [511] = 379,
  [512] = 383,
  [513] = 404,
  [514] = 514,
  [515] = 358,
  [516] = 363,
  [517] = 368,
  [518] = 376,
  [519] = 379,
  [520] = 383,
  [521] = 404,
  [522] = 322,
  [523] = 241,
  [524] = 223,
  [525] = 367,
  [526] = 377,
  [527] = 241,
  [528] = 323,
  [529] = 367,
  [530] = 377,
  [531] = 324,
  [532] = 325,
  [533] = 326,
  [534] = 327,
  [535] = 393,
  [536] = 311,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 338,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 245,
  [551] = 246,
  [552] = 247,
  [553] = 248,
  [554] = 554,
  [555] = 555,
  [556] = 249,
  [557] = 250,
  [558] = 251,
  [559] = 559,
  [560] = 252,
  [561] = 253,
  [562] = 562,
  [563] = 563,
  [564] = 254,
  [565] = 255,
  [566] = 256,
  [567] = 257,
  [568] = 258,
  [569] = 259,
  [570] = 260,
  [571] = 261,
  [572] = 572,
  [573] = 573,
  [574] = 262,
  [575] = 263,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 322,
  [580] = 267,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 323,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 268,
  [593] = 225,
  [594] = 269,
  [595] = 270,
  [596] = 271,
  [597] = 226,
  [598] = 272,
  [599] = 599,
  [600] = 273,
  [601] = 601,
  [602] = 274,
  [603] = 603,
  [604] = 324,
  [605] = 605,
  [606] = 275,
  [607] = 276,
  [608] = 277,
  [609] = 278,
  [610] = 279,
  [611] = 280,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 281,
  [620] = 282,
  [621] = 621,
  [622] = 283,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 284,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 285,
  [631] = 631,
  [632] = 338,
  [633] = 286,
  [634] = 339,
  [635] = 340,
  [636] = 287,
  [637] = 341,
  [638] = 342,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 288,
  [644] = 289,
  [645] = 290,
  [646] = 646,
  [647] = 342,
  [648] = 648,
  [649] = 649,
  [650] = 325,
  [651] = 326,
  [652] = 322,
  [653] = 323,
  [654] = 324,
  [655] = 325,
  [656] = 326,
  [657] = 327,
  [658] = 328,
  [659] = 329,
  [660] = 322,
  [661] = 323,
  [662] = 324,
  [663] = 325,
  [664] = 326,
  [665] = 327,
  [666] = 666,
  [667] = 291,
  [668] = 328,
  [669] = 329,
  [670] = 322,
  [671] = 323,
  [672] = 324,
  [673] = 325,
  [674] = 326,
  [675] = 327,
  [676] = 292,
  [677] = 293,
  [678] = 678,
  [679] = 679,
  [680] = 294,
  [681] = 681,
  [682] = 327,
  [683] = 295,
  [684] = 328,
  [685] = 329,
  [686] = 686,
  [687] = 19,
  [688] = 688,
  [689] = 689,
  [690] = 296,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 297,
  [697] = 298,
  [698] = 698,
  [699] = 699,
  [700] = 601,
  [701] = 299,
  [702] = 300,
  [703] = 703,
  [704] = 301,
  [705] = 705,
  [706] = 706,
  [707] = 302,
  [708] = 708,
  [709] = 303,
  [710] = 304,
  [711] = 711,
  [712] = 339,
  [713] = 305,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 306,
  [719] = 554,
  [720] = 307,
  [721] = 308,
  [722] = 309,
  [723] = 230,
  [724] = 310,
  [725] = 311,
  [726] = 231,
  [727] = 312,
  [728] = 313,
  [729] = 621,
  [730] = 623,
  [731] = 232,
  [732] = 314,
  [733] = 315,
  [734] = 734,
  [735] = 340,
  [736] = 736,
  [737] = 317,
  [738] = 318,
  [739] = 319,
  [740] = 740,
  [741] = 320,
  [742] = 321,
  [743] = 338,
  [744] = 744,
  [745] = 339,
  [746] = 340,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 233,
  [751] = 341,
  [752] = 341,
  [753] = 753,
  [754] = 225,
  [755] = 226,
  [756] = 756,
  [757] = 757,
  [758] = 342,
  [759] = 759,
  [760] = 234,
  [761] = 689,
  [762] = 230,
  [763] = 231,
  [764] = 232,
  [765] = 233,
  [766] = 234,
  [767] = 235,
  [768] = 236,
  [769] = 237,
  [770] = 238,
  [771] = 239,
  [772] = 601,
  [773] = 773,
  [774] = 714,
  [775] = 235,
  [776] = 243,
  [777] = 777,
  [778] = 245,
  [779] = 246,
  [780] = 247,
  [781] = 248,
  [782] = 249,
  [783] = 250,
  [784] = 251,
  [785] = 252,
  [786] = 714,
  [787] = 253,
  [788] = 254,
  [789] = 255,
  [790] = 256,
  [791] = 554,
  [792] = 257,
  [793] = 258,
  [794] = 259,
  [795] = 260,
  [796] = 261,
  [797] = 262,
  [798] = 263,
  [799] = 236,
  [800] = 800,
  [801] = 621,
  [802] = 623,
  [803] = 803,
  [804] = 267,
  [805] = 266,
  [806] = 331,
  [807] = 268,
  [808] = 269,
  [809] = 270,
  [810] = 271,
  [811] = 272,
  [812] = 273,
  [813] = 274,
  [814] = 275,
  [815] = 276,
  [816] = 277,
  [817] = 278,
  [818] = 279,
  [819] = 280,
  [820] = 281,
  [821] = 282,
  [822] = 283,
  [823] = 284,
  [824] = 285,
  [825] = 286,
  [826] = 287,
  [827] = 288,
  [828] = 289,
  [829] = 290,
  [830] = 291,
  [831] = 292,
  [832] = 293,
  [833] = 689,
  [834] = 294,
  [835] = 295,
  [836] = 296,
  [837] = 689,
  [838] = 297,
  [839] = 298,
  [840] = 299,
  [841] = 300,
  [842] = 301,
  [843] = 302,
  [844] = 303,
  [845] = 304,
  [846] = 734,
  [847] = 612,
  [848] = 305,
  [849] = 576,
  [850] = 577,
  [851] = 306,
  [852] = 688,
  [853] = 307,
  [854] = 692,
  [855] = 734,
  [856] = 612,
  [857] = 308,
  [858] = 576,
  [859] = 577,
  [860] = 309,
  [861] = 310,
  [862] = 734,
  [863] = 612,
  [864] = 734,
  [865] = 612,
  [866] = 866,
  [867] = 237,
  [868] = 312,
  [869] = 313,
  [870] = 314,
  [871] = 315,
  [872] = 316,
  [873] = 317,
  [874] = 318,
  [875] = 319,
  [876] = 320,
  [877] = 321,
  [878] = 238,
  [879] = 239,
  [880] = 880,
  [881] = 866,
  [882] = 882,
  [883] = 883,
  [884] = 328,
  [885] = 329,
  [886] = 243,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 689,
  [895] = 895,
  [896] = 316,
  [897] = 897,
  [898] = 329,
  [899] = 328,
  [900] = 329,
  [901] = 749,
  [902] = 753,
  [903] = 903,
  [904] = 759,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 19,
  [909] = 328,
  [910] = 329,
  [911] = 322,
  [912] = 323,
  [913] = 325,
  [914] = 326,
  [915] = 327,
  [916] = 322,
  [917] = 323,
  [918] = 324,
  [919] = 325,
  [920] = 326,
  [921] = 327,
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
  [949] = 949,
  [950] = 950,
  [951] = 905,
  [952] = 907,
  [953] = 953,
  [954] = 923,
  [955] = 926,
  [956] = 927,
  [957] = 957,
  [958] = 932,
  [959] = 959,
  [960] = 953,
  [961] = 961,
  [962] = 961,
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
  [977] = 963,
  [978] = 964,
  [979] = 979,
  [980] = 980,
  [981] = 981,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 930,
  [987] = 987,
  [988] = 936,
  [989] = 937,
  [990] = 938,
  [991] = 338,
  [992] = 339,
  [993] = 340,
  [994] = 936,
  [995] = 937,
  [996] = 938,
  [997] = 341,
  [998] = 342,
  [999] = 897,
  [1000] = 943,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 944,
  [1004] = 945,
  [1005] = 946,
  [1006] = 947,
  [1007] = 1007,
  [1008] = 905,
  [1009] = 907,
  [1010] = 1010,
  [1011] = 923,
  [1012] = 926,
  [1013] = 927,
  [1014] = 966,
  [1015] = 1015,
  [1016] = 932,
  [1017] = 967,
  [1018] = 953,
  [1019] = 961,
  [1020] = 968,
  [1021] = 1021,
  [1022] = 963,
  [1023] = 964,
  [1024] = 1024,
  [1025] = 966,
  [1026] = 967,
  [1027] = 968,
  [1028] = 1028,
  [1029] = 1029,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 943,
  [1034] = 1034,
  [1035] = 903,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 1038,
  [1039] = 944,
  [1040] = 945,
  [1041] = 930,
  [1042] = 946,
  [1043] = 1043,
  [1044] = 930,
  [1045] = 1045,
  [1046] = 1046,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 947,
  [1050] = 1050,
  [1051] = 897,
  [1052] = 1007,
  [1053] = 1031,
  [1054] = 1032,
  [1055] = 1045,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1007,
  [1060] = 1031,
  [1061] = 1032,
  [1062] = 1045,
  [1063] = 1063,
  [1064] = 1064,
  [1065] = 1029,
  [1066] = 1066,
  [1067] = 979,
  [1068] = 1001,
  [1069] = 1002,
  [1070] = 948,
  [1071] = 1030,
  [1072] = 1029,
  [1073] = 949,
  [1074] = 1074,
  [1075] = 979,
  [1076] = 930,
  [1077] = 1001,
  [1078] = 1002,
  [1079] = 1030,
  [1080] = 1080,
  [1081] = 1029,
  [1082] = 1029,
  [1083] = 322,
  [1084] = 922,
  [1085] = 323,
  [1086] = 934,
  [1087] = 324,
  [1088] = 625,
  [1089] = 983,
  [1090] = 325,
  [1091] = 922,
  [1092] = 326,
  [1093] = 934,
  [1094] = 327,
  [1095] = 328,
  [1096] = 983,
  [1097] = 1046,
  [1098] = 1047,
  [1099] = 933,
  [1100] = 1046,
  [1101] = 1047,
  [1102] = 933,
  [1103] = 583,
  [1104] = 591,
  [1105] = 599,
  [1106] = 324,
  [1107] = 1107,
  [1108] = 1108,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1112,
  [1113] = 1113,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 329,
  [1118] = 1118,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1120,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1130,
  [1131] = 1131,
  [1132] = 1132,
  [1133] = 1133,
  [1134] = 1134,
  [1135] = 1135,
  [1136] = 1136,
  [1137] = 1118,
  [1138] = 1138,
  [1139] = 1119,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1142,
  [1143] = 1118,
  [1144] = 1119,
  [1145] = 1145,
  [1146] = 1118,
  [1147] = 1119,
  [1148] = 1118,
  [1149] = 1119,
  [1150] = 1118,
  [1151] = 1119,
  [1152] = 1152,
  [1153] = 1118,
  [1154] = 1119,
  [1155] = 1118,
  [1156] = 1119,
  [1157] = 1157,
  [1158] = 1118,
  [1159] = 1119,
  [1160] = 1160,
  [1161] = 1118,
  [1162] = 1119,
  [1163] = 1163,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1163,
  [1168] = 1128,
  [1169] = 1169,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1133,
  [1173] = 1173,
  [1174] = 1170,
  [1175] = 1175,
  [1176] = 1127,
  [1177] = 1129,
  [1178] = 1130,
  [1179] = 1179,
  [1180] = 1141,
  [1181] = 1163,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1107,
  [1185] = 1111,
  [1186] = 1173,
  [1187] = 1170,
  [1188] = 1120,
  [1189] = 1127,
  [1190] = 1129,
  [1191] = 1130,
  [1192] = 1192,
  [1193] = 1141,
  [1194] = 1163,
  [1195] = 1195,
  [1196] = 1163,
  [1197] = 1118,
  [1198] = 1163,
  [1199] = 1163,
  [1200] = 1163,
  [1201] = 1163,
  [1202] = 1163,
  [1203] = 1163,
  [1204] = 1119,
  [1205] = 1157,
  [1206] = 1160,
  [1207] = 1164,
  [1208] = 1166,
  [1209] = 328,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1212,
  [1213] = 1213,
  [1214] = 1214,
  [1215] = 1215,
  [1216] = 1216,
  [1217] = 1217,
  [1218] = 1107,
  [1219] = 1219,
  [1220] = 364,
  [1221] = 365,
  [1222] = 1222,
  [1223] = 1223,
  [1224] = 1173,
  [1225] = 1225,
  [1226] = 1113,
  [1227] = 1111,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1232,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1237,
  [1238] = 1230,
  [1239] = 1239,
  [1240] = 1240,
  [1241] = 1241,
  [1242] = 1242,
  [1243] = 1229,
  [1244] = 1244,
  [1245] = 1245,
  [1246] = 1246,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1250,
  [1251] = 1251,
  [1252] = 1251,
  [1253] = 1250,
  [1254] = 1254,
  [1255] = 1255,
  [1256] = 1256,
  [1257] = 1235,
  [1258] = 1237,
  [1259] = 1259,
  [1260] = 1230,
  [1261] = 1261,
  [1262] = 1229,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1265,
  [1266] = 1266,
  [1267] = 1235,
  [1268] = 1268,
  [1269] = 1242,
  [1270] = 1270,
  [1271] = 1244,
  [1272] = 1245,
  [1273] = 1273,
  [1274] = 1274,
  [1275] = 1249,
  [1276] = 1250,
  [1277] = 1251,
  [1278] = 1278,
  [1279] = 1279,
  [1280] = 1280,
  [1281] = 1235,
  [1282] = 1237,
  [1283] = 1230,
  [1284] = 1284,
  [1285] = 1229,
  [1286] = 1228,
  [1287] = 1287,
  [1288] = 1288,
  [1289] = 1289,
  [1290] = 1290,
  [1291] = 1235,
  [1292] = 1292,
  [1293] = 1237,
  [1294] = 1230,
  [1295] = 1229,
  [1296] = 1229,
  [1297] = 1297,
  [1298] = 1298,
  [1299] = 1235,
  [1300] = 605,
  [1301] = 1230,
  [1302] = 1229,
  [1303] = 1303,
  [1304] = 1304,
  [1305] = 1305,
  [1306] = 1306,
  [1307] = 1307,
  [1308] = 1235,
  [1309] = 1237,
  [1310] = 1310,
  [1311] = 1229,
  [1312] = 1230,
  [1313] = 1229,
  [1314] = 1290,
  [1315] = 1315,
  [1316] = 1316,
  [1317] = 1235,
  [1318] = 1318,
  [1319] = 1237,
  [1320] = 1290,
  [1321] = 1230,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1237,
  [1325] = 1229,
  [1326] = 1326,
  [1327] = 1327,
  [1328] = 1235,
  [1329] = 1242,
  [1330] = 1330,
  [1331] = 1331,
  [1332] = 1235,
  [1333] = 1237,
  [1334] = 1334,
  [1335] = 1230,
  [1336] = 1336,
  [1337] = 1232,
  [1338] = 1229,
  [1339] = 1244,
  [1340] = 1245,
  [1341] = 1237,
  [1342] = 1240,
  [1343] = 1343,
  [1344] = 1344,
  [1345] = 1235,
  [1346] = 1237,
  [1347] = 1230,
  [1348] = 19,
  [1349] = 1349,
  [1350] = 1350,
  [1351] = 1303,
  [1352] = 1230,
  [1353] = 1353,
  [1354] = 1229,
  [1355] = 1303,
  [1356] = 1249,
  [1357] = 1357,
  [1358] = 1358,
  [1359] = 1359,
  [1360] = 1036,
  [1361] = 1228,
  [1362] = 1237,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(290);
      ADVANCE_MAP(
        '#', 291,
        '(', 626,
        ')', 627,
        '*', 541,
        '+', 319,
        ',', 628,
        '-', 320,
        '0', 302,
        '1', 303,
        ':', 625,
        '=', 316,
        '?', 623,
        '@', 468,
        'B', 642,
        'J', 645,
        'N', 648,
        'P', 630,
        'T', 633,
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 291,
        '(', 626,
        ')', 627,
        '*', 541,
        '+', 19,
        ',', 628,
        '-', 20,
        '0', 305,
        '1', 304,
        ':', 625,
        '=', 316,
        '?', 623,
        '@', 216,
        'B', 642,
        'J', 645,
        'N', 648,
        'P', 630,
        'T', 633,
        '[', 22,
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(650);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(698);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 291,
        '-', 21,
        ':', 625,
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
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'w') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 291,
        'a', 686,
        'd', 683,
        'g', 658,
        'k', 666,
        'm', 651,
        'r', 659,
        's', 669,
        '\t', 701,
        ' ', 701,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 291,
        'a', 755,
        'd', 752,
        'k', 718,
        'r', 716,
        's', 720,
        '\t', 702,
        ' ', 702,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(626);
      if (lookahead == ')') ADVANCE(627);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
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
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(624);
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
      if (lookahead == 'o') ADVANCE(71);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(650);
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
      if (lookahead == 'c') ADVANCE(564);
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
      if (lookahead == 'k') ADVANCE(570);
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
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(618);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(617);
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
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(629);
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
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(599);
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
      if (lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(602);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(603);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(619);
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
      if (lookahead == 'k') ADVANCE(588);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(568);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(558);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(612);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(614);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(615);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(629);
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
      if (lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(573);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(611);
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
      if (lookahead == 'n') ADVANCE(565);
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
      if (lookahead == 'n') ADVANCE(72);
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
      if (lookahead == 'n') ADVANCE(70);
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
      if (lookahead == 'y') ADVANCE(596);
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
      if (lookahead == 'p') ADVANCE(610);
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
      if (lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(584);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(582);
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
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(572);
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
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(589);
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
      if (lookahead == 't') ADVANCE(629);
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
      if (lookahead == 'y') ADVANCE(596);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(695);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 287:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 288:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
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
      if (lookahead == '>') ADVANCE(624);
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
      if (lookahead == 'c') ADVANCE(564);
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
      if (lookahead == 'k') ADVANCE(570);
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
      if (lookahead == 'd') ADVANCE(620);
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
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(618);
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
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(601);
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
      if (lookahead == 'e') ADVANCE(605);
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
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(577);
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
      if (lookahead == 'e') ADVANCE(574);
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
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(598);
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
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(603);
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
      if (lookahead == 'h') ADVANCE(619);
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
      if (lookahead == 'k') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(568);
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
      if (lookahead == 'k') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(622);
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
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(615);
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
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(573);
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
      if (lookahead == 'm') ADVANCE(611);
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
      if (lookahead == 'n') ADVANCE(565);
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
      if (lookahead == 'y') ADVANCE(596);
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
      if (lookahead == 'p') ADVANCE(610);
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
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(582);
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
      if (lookahead == 'r') ADVANCE(607);
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
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(572);
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
      if (lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(608);
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
      if (lookahead == 't') ADVANCE(589);
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
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
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
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
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
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == 'p') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'o') ADVANCE(684);
      if (lookahead == 'p') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'f') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'k') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'k') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'o') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'p') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'p') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'p') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'r') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'r') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'u') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'u') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == 'w') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(698);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == 'w') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 291,
        'a', 686,
        'd', 683,
        'g', 658,
        'k', 666,
        'm', 651,
        'r', 659,
        's', 669,
        '\t', 701,
        ' ', 701,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 291,
        'a', 755,
        'd', 752,
        'k', 718,
        'r', 716,
        's', 720,
        '\t', 702,
        ' ', 702,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(706);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(733);
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
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 8, .external_lex_state = 4},
  [7] = {.lex_state = 8, .external_lex_state = 4},
  [8] = {.lex_state = 8, .external_lex_state = 4},
  [9] = {.lex_state = 1, .external_lex_state = 5},
  [10] = {.lex_state = 1, .external_lex_state = 5},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 9, .external_lex_state = 6},
  [13] = {.lex_state = 9, .external_lex_state = 6},
  [14] = {.lex_state = 9, .external_lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 9, .external_lex_state = 6},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 11, .external_lex_state = 7},
  [22] = {.lex_state = 11, .external_lex_state = 7},
  [23] = {.lex_state = 11, .external_lex_state = 7},
  [24] = {.lex_state = 11, .external_lex_state = 7},
  [25] = {.lex_state = 11, .external_lex_state = 7},
  [26] = {.lex_state = 11, .external_lex_state = 7},
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
  [38] = {.lex_state = 2, .external_lex_state = 7},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2, .external_lex_state = 7},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 0, .external_lex_state = 8},
  [50] = {.lex_state = 0, .external_lex_state = 8},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 6, .external_lex_state = 7},
  [54] = {.lex_state = 3, .external_lex_state = 7},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 8},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6, .external_lex_state = 7},
  [61] = {.lex_state = 4, .external_lex_state = 7},
  [62] = {.lex_state = 3, .external_lex_state = 7},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 0, .external_lex_state = 8},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4, .external_lex_state = 7},
  [68] = {.lex_state = 4, .external_lex_state = 7},
  [69] = {.lex_state = 6, .external_lex_state = 7},
  [70] = {.lex_state = 3, .external_lex_state = 7},
  [71] = {.lex_state = 4, .external_lex_state = 7},
  [72] = {.lex_state = 0, .external_lex_state = 9},
  [73] = {.lex_state = 0, .external_lex_state = 10},
  [74] = {.lex_state = 4, .external_lex_state = 7},
  [75] = {.lex_state = 4, .external_lex_state = 7},
  [76] = {.lex_state = 4, .external_lex_state = 7},
  [77] = {.lex_state = 0, .external_lex_state = 11},
  [78] = {.lex_state = 0, .external_lex_state = 9},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 0, .external_lex_state = 11},
  [81] = {.lex_state = 4, .external_lex_state = 7},
  [82] = {.lex_state = 4, .external_lex_state = 7},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4, .external_lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 10},
  [89] = {.lex_state = 4, .external_lex_state = 7},
  [90] = {.lex_state = 0, .external_lex_state = 8},
  [91] = {.lex_state = 4, .external_lex_state = 7},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 10},
  [94] = {.lex_state = 0, .external_lex_state = 9},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 11},
  [97] = {.lex_state = 0, .external_lex_state = 12},
  [98] = {.lex_state = 0, .external_lex_state = 13},
  [99] = {.lex_state = 0, .external_lex_state = 14},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 15},
  [102] = {.lex_state = 0, .external_lex_state = 15},
  [103] = {.lex_state = 0, .external_lex_state = 15},
  [104] = {.lex_state = 0, .external_lex_state = 16},
  [105] = {.lex_state = 0, .external_lex_state = 12},
  [106] = {.lex_state = 0, .external_lex_state = 14},
  [107] = {.lex_state = 0, .external_lex_state = 15},
  [108] = {.lex_state = 0, .external_lex_state = 17},
  [109] = {.lex_state = 0, .external_lex_state = 18},
  [110] = {.lex_state = 0, .external_lex_state = 18},
  [111] = {.lex_state = 0, .external_lex_state = 18},
  [112] = {.lex_state = 0, .external_lex_state = 18},
  [113] = {.lex_state = 0, .external_lex_state = 19},
  [114] = {.lex_state = 0, .external_lex_state = 17},
  [115] = {.lex_state = 0, .external_lex_state = 20},
  [116] = {.lex_state = 0, .external_lex_state = 19},
  [117] = {.lex_state = 0, .external_lex_state = 21},
  [118] = {.lex_state = 0, .external_lex_state = 20},
  [119] = {.lex_state = 0, .external_lex_state = 19},
  [120] = {.lex_state = 0, .external_lex_state = 21},
  [121] = {.lex_state = 0, .external_lex_state = 20},
  [122] = {.lex_state = 0, .external_lex_state = 21},
  [123] = {.lex_state = 0, .external_lex_state = 16},
  [124] = {.lex_state = 12, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 0, .external_lex_state = 15},
  [127] = {.lex_state = 0, .external_lex_state = 9},
  [128] = {.lex_state = 0, .external_lex_state = 22},
  [129] = {.lex_state = 12, .external_lex_state = 7},
  [130] = {.lex_state = 0, .external_lex_state = 17},
  [131] = {.lex_state = 0, .external_lex_state = 12},
  [132] = {.lex_state = 0, .external_lex_state = 17},
  [133] = {.lex_state = 0, .external_lex_state = 14},
  [134] = {.lex_state = 0, .external_lex_state = 13},
  [135] = {.lex_state = 0, .external_lex_state = 15},
  [136] = {.lex_state = 0, .external_lex_state = 18},
  [137] = {.lex_state = 0, .external_lex_state = 18},
  [138] = {.lex_state = 0, .external_lex_state = 18},
  [139] = {.lex_state = 0, .external_lex_state = 18},
  [140] = {.lex_state = 0, .external_lex_state = 22},
  [141] = {.lex_state = 0, .external_lex_state = 15},
  [142] = {.lex_state = 0, .external_lex_state = 15},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 12, .external_lex_state = 7},
  [145] = {.lex_state = 0, .external_lex_state = 16},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 15},
  [148] = {.lex_state = 0, .external_lex_state = 15},
  [149] = {.lex_state = 0, .external_lex_state = 12},
  [150] = {.lex_state = 0, .external_lex_state = 13},
  [151] = {.lex_state = 12, .external_lex_state = 7},
  [152] = {.lex_state = 0, .external_lex_state = 18},
  [153] = {.lex_state = 0, .external_lex_state = 18},
  [154] = {.lex_state = 0, .external_lex_state = 18},
  [155] = {.lex_state = 0, .external_lex_state = 18},
  [156] = {.lex_state = 0, .external_lex_state = 22},
  [157] = {.lex_state = 0, .external_lex_state = 22},
  [158] = {.lex_state = 0, .external_lex_state = 22},
  [159] = {.lex_state = 0, .external_lex_state = 22},
  [160] = {.lex_state = 0, .external_lex_state = 22},
  [161] = {.lex_state = 0, .external_lex_state = 22},
  [162] = {.lex_state = 0, .external_lex_state = 22},
  [163] = {.lex_state = 0, .external_lex_state = 22},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 17},
  [166] = {.lex_state = 0, .external_lex_state = 22},
  [167] = {.lex_state = 0, .external_lex_state = 15},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0, .external_lex_state = 14},
  [170] = {.lex_state = 0, .external_lex_state = 9},
  [171] = {.lex_state = 0, .external_lex_state = 16},
  [172] = {.lex_state = 0, .external_lex_state = 9},
  [173] = {.lex_state = 0, .external_lex_state = 23},
  [174] = {.lex_state = 0, .external_lex_state = 23},
  [175] = {.lex_state = 0, .external_lex_state = 9},
  [176] = {.lex_state = 12, .external_lex_state = 7},
  [177] = {.lex_state = 0, .external_lex_state = 23},
  [178] = {.lex_state = 0, .external_lex_state = 16},
  [179] = {.lex_state = 0, .external_lex_state = 23},
  [180] = {.lex_state = 12, .external_lex_state = 7},
  [181] = {.lex_state = 0, .external_lex_state = 21},
  [182] = {.lex_state = 0, .external_lex_state = 23},
  [183] = {.lex_state = 12, .external_lex_state = 7},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 12, .external_lex_state = 7},
  [186] = {.lex_state = 0, .external_lex_state = 23},
  [187] = {.lex_state = 0, .external_lex_state = 23},
  [188] = {.lex_state = 12, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 23},
  [190] = {.lex_state = 0, .external_lex_state = 21},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 0, .external_lex_state = 23},
  [193] = {.lex_state = 12, .external_lex_state = 7},
  [194] = {.lex_state = 12, .external_lex_state = 7},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 23},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 23},
  [199] = {.lex_state = 0, .external_lex_state = 14},
  [200] = {.lex_state = 12, .external_lex_state = 7},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 10, .external_lex_state = 7},
  [203] = {.lex_state = 0, .external_lex_state = 23},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 12, .external_lex_state = 7},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 12, .external_lex_state = 7},
  [208] = {.lex_state = 10, .external_lex_state = 7},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 10, .external_lex_state = 7},
  [211] = {.lex_state = 0, .external_lex_state = 23},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 12, .external_lex_state = 7},
  [216] = {.lex_state = 0, .external_lex_state = 23},
  [217] = {.lex_state = 12, .external_lex_state = 7},
  [218] = {.lex_state = 0, .external_lex_state = 23},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 23},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0, .external_lex_state = 23},
  [223] = {.lex_state = 0, .external_lex_state = 23},
  [224] = {.lex_state = 0, .external_lex_state = 24},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 0, .external_lex_state = 10},
  [227] = {.lex_state = 0, .external_lex_state = 25},
  [228] = {.lex_state = 0, .external_lex_state = 25},
  [229] = {.lex_state = 15},
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
  [240] = {.lex_state = 5, .external_lex_state = 7},
  [241] = {.lex_state = 0, .external_lex_state = 23},
  [242] = {.lex_state = 0, .external_lex_state = 14},
  [243] = {.lex_state = 0, .external_lex_state = 10},
  [244] = {.lex_state = 0, .external_lex_state = 16},
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
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 0, .external_lex_state = 11},
  [267] = {.lex_state = 0, .external_lex_state = 10},
  [268] = {.lex_state = 0, .external_lex_state = 10},
  [269] = {.lex_state = 0, .external_lex_state = 10},
  [270] = {.lex_state = 0, .external_lex_state = 10},
  [271] = {.lex_state = 0, .external_lex_state = 10},
  [272] = {.lex_state = 0, .external_lex_state = 10},
  [273] = {.lex_state = 0, .external_lex_state = 10},
  [274] = {.lex_state = 0, .external_lex_state = 10},
  [275] = {.lex_state = 0, .external_lex_state = 10},
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
  [322] = {.lex_state = 0, .external_lex_state = 8},
  [323] = {.lex_state = 0, .external_lex_state = 8},
  [324] = {.lex_state = 0, .external_lex_state = 8},
  [325] = {.lex_state = 0, .external_lex_state = 8},
  [326] = {.lex_state = 0, .external_lex_state = 8},
  [327] = {.lex_state = 0, .external_lex_state = 8},
  [328] = {.lex_state = 0, .external_lex_state = 17},
  [329] = {.lex_state = 0, .external_lex_state = 17},
  [330] = {.lex_state = 0, .external_lex_state = 24},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 0, .external_lex_state = 11},
  [333] = {.lex_state = 0, .external_lex_state = 11},
  [334] = {.lex_state = 0, .external_lex_state = 11},
  [335] = {.lex_state = 0, .external_lex_state = 11},
  [336] = {.lex_state = 0, .external_lex_state = 11},
  [337] = {.lex_state = 0, .external_lex_state = 11},
  [338] = {.lex_state = 0, .external_lex_state = 10},
  [339] = {.lex_state = 0, .external_lex_state = 10},
  [340] = {.lex_state = 0, .external_lex_state = 10},
  [341] = {.lex_state = 0, .external_lex_state = 10},
  [342] = {.lex_state = 0, .external_lex_state = 10},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 11},
  [345] = {.lex_state = 0, .external_lex_state = 11},
  [346] = {.lex_state = 0, .external_lex_state = 8},
  [347] = {.lex_state = 0, .external_lex_state = 8},
  [348] = {.lex_state = 0, .external_lex_state = 10},
  [349] = {.lex_state = 0, .external_lex_state = 10},
  [350] = {.lex_state = 0, .external_lex_state = 10},
  [351] = {.lex_state = 0, .external_lex_state = 10},
  [352] = {.lex_state = 0, .external_lex_state = 10},
  [353] = {.lex_state = 0, .external_lex_state = 10},
  [354] = {.lex_state = 0, .external_lex_state = 10},
  [355] = {.lex_state = 0, .external_lex_state = 10},
  [356] = {.lex_state = 0, .external_lex_state = 23},
  [357] = {.lex_state = 0, .external_lex_state = 26},
  [358] = {.lex_state = 0, .external_lex_state = 26},
  [359] = {.lex_state = 0, .external_lex_state = 26},
  [360] = {.lex_state = 12, .external_lex_state = 7},
  [361] = {.lex_state = 0, .external_lex_state = 24},
  [362] = {.lex_state = 0, .external_lex_state = 25},
  [363] = {.lex_state = 0, .external_lex_state = 23},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 0, .external_lex_state = 23},
  [367] = {.lex_state = 0, .external_lex_state = 23},
  [368] = {.lex_state = 0, .external_lex_state = 23},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 0, .external_lex_state = 8},
  [372] = {.lex_state = 13, .external_lex_state = 7},
  [373] = {.lex_state = 0, .external_lex_state = 24},
  [374] = {.lex_state = 12, .external_lex_state = 7},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 0, .external_lex_state = 23},
  [377] = {.lex_state = 0, .external_lex_state = 23},
  [378] = {.lex_state = 12, .external_lex_state = 7},
  [379] = {.lex_state = 0, .external_lex_state = 23},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 5, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 23},
  [384] = {.lex_state = 0, .external_lex_state = 24},
  [385] = {.lex_state = 0, .external_lex_state = 25},
  [386] = {.lex_state = 0, .external_lex_state = 25},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 5, .external_lex_state = 7},
  [389] = {.lex_state = 0, .external_lex_state = 26},
  [390] = {.lex_state = 0, .external_lex_state = 25},
  [391] = {.lex_state = 12, .external_lex_state = 7},
  [392] = {.lex_state = 0, .external_lex_state = 25},
  [393] = {.lex_state = 0, .external_lex_state = 25},
  [394] = {.lex_state = 0, .external_lex_state = 25},
  [395] = {.lex_state = 0, .external_lex_state = 25},
  [396] = {.lex_state = 0, .external_lex_state = 23},
  [397] = {.lex_state = 0, .external_lex_state = 25},
  [398] = {.lex_state = 0, .external_lex_state = 25},
  [399] = {.lex_state = 0, .external_lex_state = 25},
  [400] = {.lex_state = 0, .external_lex_state = 25},
  [401] = {.lex_state = 0, .external_lex_state = 25},
  [402] = {.lex_state = 0, .external_lex_state = 25},
  [403] = {.lex_state = 0, .external_lex_state = 25},
  [404] = {.lex_state = 0, .external_lex_state = 23},
  [405] = {.lex_state = 0, .external_lex_state = 25},
  [406] = {.lex_state = 0, .external_lex_state = 25},
  [407] = {.lex_state = 0, .external_lex_state = 25},
  [408] = {.lex_state = 0, .external_lex_state = 25},
  [409] = {.lex_state = 0, .external_lex_state = 25},
  [410] = {.lex_state = 0, .external_lex_state = 25},
  [411] = {.lex_state = 0, .external_lex_state = 25},
  [412] = {.lex_state = 0, .external_lex_state = 25},
  [413] = {.lex_state = 0, .external_lex_state = 25},
  [414] = {.lex_state = 0, .external_lex_state = 25},
  [415] = {.lex_state = 0, .external_lex_state = 25},
  [416] = {.lex_state = 0, .external_lex_state = 25},
  [417] = {.lex_state = 0, .external_lex_state = 25},
  [418] = {.lex_state = 0, .external_lex_state = 25},
  [419] = {.lex_state = 0, .external_lex_state = 25},
  [420] = {.lex_state = 0, .external_lex_state = 25},
  [421] = {.lex_state = 0, .external_lex_state = 25},
  [422] = {.lex_state = 0, .external_lex_state = 25},
  [423] = {.lex_state = 0, .external_lex_state = 26},
  [424] = {.lex_state = 0, .external_lex_state = 26},
  [425] = {.lex_state = 0, .external_lex_state = 25},
  [426] = {.lex_state = 0, .external_lex_state = 25},
  [427] = {.lex_state = 0, .external_lex_state = 25},
  [428] = {.lex_state = 0, .external_lex_state = 25},
  [429] = {.lex_state = 1},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 0, .external_lex_state = 25},
  [432] = {.lex_state = 5, .external_lex_state = 7},
  [433] = {.lex_state = 0, .external_lex_state = 25},
  [434] = {.lex_state = 0, .external_lex_state = 25},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 0, .external_lex_state = 25},
  [438] = {.lex_state = 0, .external_lex_state = 25},
  [439] = {.lex_state = 0, .external_lex_state = 25},
  [440] = {.lex_state = 0, .external_lex_state = 25},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 0, .external_lex_state = 25},
  [443] = {.lex_state = 0, .external_lex_state = 25},
  [444] = {.lex_state = 12, .external_lex_state = 7},
  [445] = {.lex_state = 0, .external_lex_state = 8},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 5, .external_lex_state = 7},
  [449] = {.lex_state = 0, .external_lex_state = 25},
  [450] = {.lex_state = 0, .external_lex_state = 25},
  [451] = {.lex_state = 0, .external_lex_state = 25},
  [452] = {.lex_state = 0, .external_lex_state = 25},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 5, .external_lex_state = 7},
  [455] = {.lex_state = 0, .external_lex_state = 25},
  [456] = {.lex_state = 0, .external_lex_state = 25},
  [457] = {.lex_state = 12, .external_lex_state = 7},
  [458] = {.lex_state = 0, .external_lex_state = 25},
  [459] = {.lex_state = 0, .external_lex_state = 25},
  [460] = {.lex_state = 0, .external_lex_state = 25},
  [461] = {.lex_state = 0, .external_lex_state = 25},
  [462] = {.lex_state = 0, .external_lex_state = 25},
  [463] = {.lex_state = 0, .external_lex_state = 25},
  [464] = {.lex_state = 0, .external_lex_state = 25},
  [465] = {.lex_state = 0, .external_lex_state = 25},
  [466] = {.lex_state = 0, .external_lex_state = 25},
  [467] = {.lex_state = 0, .external_lex_state = 25},
  [468] = {.lex_state = 0, .external_lex_state = 25},
  [469] = {.lex_state = 0, .external_lex_state = 25},
  [470] = {.lex_state = 1, .external_lex_state = 7},
  [471] = {.lex_state = 1, .external_lex_state = 7},
  [472] = {.lex_state = 0, .external_lex_state = 25},
  [473] = {.lex_state = 0, .external_lex_state = 25},
  [474] = {.lex_state = 0, .external_lex_state = 25},
  [475] = {.lex_state = 0, .external_lex_state = 25},
  [476] = {.lex_state = 0, .external_lex_state = 25},
  [477] = {.lex_state = 0, .external_lex_state = 25},
  [478] = {.lex_state = 0, .external_lex_state = 25},
  [479] = {.lex_state = 0, .external_lex_state = 25},
  [480] = {.lex_state = 0, .external_lex_state = 25},
  [481] = {.lex_state = 1, .external_lex_state = 7},
  [482] = {.lex_state = 0, .external_lex_state = 25},
  [483] = {.lex_state = 0, .external_lex_state = 25},
  [484] = {.lex_state = 0, .external_lex_state = 25},
  [485] = {.lex_state = 0, .external_lex_state = 25},
  [486] = {.lex_state = 0, .external_lex_state = 25},
  [487] = {.lex_state = 0, .external_lex_state = 25},
  [488] = {.lex_state = 0, .external_lex_state = 23},
  [489] = {.lex_state = 0, .external_lex_state = 26},
  [490] = {.lex_state = 0, .external_lex_state = 26},
  [491] = {.lex_state = 0, .external_lex_state = 14},
  [492] = {.lex_state = 0, .external_lex_state = 26},
  [493] = {.lex_state = 0, .external_lex_state = 26},
  [494] = {.lex_state = 0, .external_lex_state = 26},
  [495] = {.lex_state = 0, .external_lex_state = 14},
  [496] = {.lex_state = 0, .external_lex_state = 23},
  [497] = {.lex_state = 0, .external_lex_state = 26},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 0, .external_lex_state = 21},
  [500] = {.lex_state = 13, .external_lex_state = 7},
  [501] = {.lex_state = 15},
  [502] = {.lex_state = 0, .external_lex_state = 21},
  [503] = {.lex_state = 13, .external_lex_state = 7},
  [504] = {.lex_state = 0, .external_lex_state = 25},
  [505] = {.lex_state = 0, .external_lex_state = 16},
  [506] = {.lex_state = 0, .external_lex_state = 21},
  [507] = {.lex_state = 0, .external_lex_state = 16},
  [508] = {.lex_state = 0, .external_lex_state = 23},
  [509] = {.lex_state = 0, .external_lex_state = 23},
  [510] = {.lex_state = 0, .external_lex_state = 23},
  [511] = {.lex_state = 0, .external_lex_state = 23},
  [512] = {.lex_state = 0, .external_lex_state = 23},
  [513] = {.lex_state = 0, .external_lex_state = 23},
  [514] = {.lex_state = 0, .external_lex_state = 25},
  [515] = {.lex_state = 0, .external_lex_state = 26},
  [516] = {.lex_state = 0, .external_lex_state = 23},
  [517] = {.lex_state = 0, .external_lex_state = 23},
  [518] = {.lex_state = 0, .external_lex_state = 23},
  [519] = {.lex_state = 0, .external_lex_state = 23},
  [520] = {.lex_state = 0, .external_lex_state = 23},
  [521] = {.lex_state = 0, .external_lex_state = 23},
  [522] = {.lex_state = 0, .external_lex_state = 17},
  [523] = {.lex_state = 0, .external_lex_state = 23},
  [524] = {.lex_state = 0, .external_lex_state = 23},
  [525] = {.lex_state = 0, .external_lex_state = 23},
  [526] = {.lex_state = 0, .external_lex_state = 23},
  [527] = {.lex_state = 0, .external_lex_state = 23},
  [528] = {.lex_state = 0, .external_lex_state = 17},
  [529] = {.lex_state = 0, .external_lex_state = 23},
  [530] = {.lex_state = 0, .external_lex_state = 23},
  [531] = {.lex_state = 0, .external_lex_state = 17},
  [532] = {.lex_state = 0, .external_lex_state = 17},
  [533] = {.lex_state = 0, .external_lex_state = 17},
  [534] = {.lex_state = 0, .external_lex_state = 17},
  [535] = {.lex_state = 0, .external_lex_state = 25},
  [536] = {.lex_state = 0, .external_lex_state = 20},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 15},
  [544] = {.lex_state = 0, .external_lex_state = 15},
  [545] = {.lex_state = 1, .external_lex_state = 7},
  [546] = {.lex_state = 1, .external_lex_state = 7},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 2},
  [550] = {.lex_state = 0, .external_lex_state = 15},
  [551] = {.lex_state = 0, .external_lex_state = 15},
  [552] = {.lex_state = 0, .external_lex_state = 15},
  [553] = {.lex_state = 0, .external_lex_state = 15},
  [554] = {.lex_state = 12, .external_lex_state = 7},
  [555] = {.lex_state = 0, .external_lex_state = 2},
  [556] = {.lex_state = 0, .external_lex_state = 15},
  [557] = {.lex_state = 0, .external_lex_state = 15},
  [558] = {.lex_state = 0, .external_lex_state = 15},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 15},
  [561] = {.lex_state = 0, .external_lex_state = 15},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 15},
  [565] = {.lex_state = 0, .external_lex_state = 15},
  [566] = {.lex_state = 0, .external_lex_state = 15},
  [567] = {.lex_state = 0, .external_lex_state = 15},
  [568] = {.lex_state = 0, .external_lex_state = 15},
  [569] = {.lex_state = 0, .external_lex_state = 15},
  [570] = {.lex_state = 0, .external_lex_state = 15},
  [571] = {.lex_state = 0, .external_lex_state = 15},
  [572] = {.lex_state = 0, .external_lex_state = 2},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 0, .external_lex_state = 15},
  [575] = {.lex_state = 0, .external_lex_state = 15},
  [576] = {.lex_state = 7, .external_lex_state = 7},
  [577] = {.lex_state = 14, .external_lex_state = 7},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 2},
  [580] = {.lex_state = 0, .external_lex_state = 15},
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 1, .external_lex_state = 7},
  [589] = {.lex_state = 1, .external_lex_state = 7},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 1},
  [592] = {.lex_state = 0, .external_lex_state = 15},
  [593] = {.lex_state = 0, .external_lex_state = 15},
  [594] = {.lex_state = 0, .external_lex_state = 15},
  [595] = {.lex_state = 0, .external_lex_state = 15},
  [596] = {.lex_state = 0, .external_lex_state = 15},
  [597] = {.lex_state = 0, .external_lex_state = 15},
  [598] = {.lex_state = 0, .external_lex_state = 15},
  [599] = {.lex_state = 1},
  [600] = {.lex_state = 0, .external_lex_state = 15},
  [601] = {.lex_state = 12, .external_lex_state = 7},
  [602] = {.lex_state = 0, .external_lex_state = 15},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 1},
  [606] = {.lex_state = 0, .external_lex_state = 15},
  [607] = {.lex_state = 0, .external_lex_state = 15},
  [608] = {.lex_state = 0, .external_lex_state = 15},
  [609] = {.lex_state = 0, .external_lex_state = 15},
  [610] = {.lex_state = 0, .external_lex_state = 15},
  [611] = {.lex_state = 0, .external_lex_state = 15},
  [612] = {.lex_state = 0, .external_lex_state = 27},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 15},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 1, .external_lex_state = 7},
  [618] = {.lex_state = 1, .external_lex_state = 7},
  [619] = {.lex_state = 0, .external_lex_state = 15},
  [620] = {.lex_state = 0, .external_lex_state = 15},
  [621] = {.lex_state = 12, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 15},
  [623] = {.lex_state = 12, .external_lex_state = 7},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 15},
  [627] = {.lex_state = 0, .external_lex_state = 27},
  [628] = {.lex_state = 0, .external_lex_state = 13},
  [629] = {.lex_state = 0, .external_lex_state = 7},
  [630] = {.lex_state = 0, .external_lex_state = 15},
  [631] = {.lex_state = 0, .external_lex_state = 2},
  [632] = {.lex_state = 0, .external_lex_state = 20},
  [633] = {.lex_state = 0, .external_lex_state = 15},
  [634] = {.lex_state = 0, .external_lex_state = 20},
  [635] = {.lex_state = 0, .external_lex_state = 20},
  [636] = {.lex_state = 0, .external_lex_state = 15},
  [637] = {.lex_state = 0, .external_lex_state = 20},
  [638] = {.lex_state = 0, .external_lex_state = 20},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 7},
  [641] = {.lex_state = 0, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 15},
  [643] = {.lex_state = 0, .external_lex_state = 15},
  [644] = {.lex_state = 0, .external_lex_state = 15},
  [645] = {.lex_state = 0, .external_lex_state = 15},
  [646] = {.lex_state = 0, .external_lex_state = 28},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 13},
  [649] = {.lex_state = 1},
  [650] = {.lex_state = 0, .external_lex_state = 2},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 15},
  [653] = {.lex_state = 0, .external_lex_state = 15},
  [654] = {.lex_state = 0, .external_lex_state = 15},
  [655] = {.lex_state = 0, .external_lex_state = 15},
  [656] = {.lex_state = 0, .external_lex_state = 15},
  [657] = {.lex_state = 0, .external_lex_state = 15},
  [658] = {.lex_state = 0, .external_lex_state = 15},
  [659] = {.lex_state = 0, .external_lex_state = 15},
  [660] = {.lex_state = 0, .external_lex_state = 19},
  [661] = {.lex_state = 0, .external_lex_state = 19},
  [662] = {.lex_state = 0, .external_lex_state = 19},
  [663] = {.lex_state = 0, .external_lex_state = 19},
  [664] = {.lex_state = 0, .external_lex_state = 19},
  [665] = {.lex_state = 0, .external_lex_state = 19},
  [666] = {.lex_state = 0, .external_lex_state = 2},
  [667] = {.lex_state = 0, .external_lex_state = 15},
  [668] = {.lex_state = 0, .external_lex_state = 19},
  [669] = {.lex_state = 0, .external_lex_state = 19},
  [670] = {.lex_state = 0, .external_lex_state = 20},
  [671] = {.lex_state = 0, .external_lex_state = 20},
  [672] = {.lex_state = 0, .external_lex_state = 20},
  [673] = {.lex_state = 0, .external_lex_state = 20},
  [674] = {.lex_state = 0, .external_lex_state = 20},
  [675] = {.lex_state = 0, .external_lex_state = 20},
  [676] = {.lex_state = 0, .external_lex_state = 15},
  [677] = {.lex_state = 0, .external_lex_state = 15},
  [678] = {.lex_state = 0, .external_lex_state = 13},
  [679] = {.lex_state = 0, .external_lex_state = 13},
  [680] = {.lex_state = 0, .external_lex_state = 15},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 15},
  [684] = {.lex_state = 0, .external_lex_state = 20},
  [685] = {.lex_state = 0, .external_lex_state = 20},
  [686] = {.lex_state = 0, .external_lex_state = 15},
  [687] = {.lex_state = 73},
  [688] = {.lex_state = 73},
  [689] = {.lex_state = 0, .external_lex_state = 29},
  [690] = {.lex_state = 0, .external_lex_state = 15},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 16},
  [693] = {.lex_state = 0, .external_lex_state = 7},
  [694] = {.lex_state = 0, .external_lex_state = 2},
  [695] = {.lex_state = 0, .external_lex_state = 13},
  [696] = {.lex_state = 0, .external_lex_state = 15},
  [697] = {.lex_state = 0, .external_lex_state = 15},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 12, .external_lex_state = 7},
  [701] = {.lex_state = 0, .external_lex_state = 15},
  [702] = {.lex_state = 0, .external_lex_state = 15},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 15},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 0, .external_lex_state = 2},
  [707] = {.lex_state = 0, .external_lex_state = 15},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 15},
  [710] = {.lex_state = 0, .external_lex_state = 15},
  [711] = {.lex_state = 0, .external_lex_state = 2},
  [712] = {.lex_state = 0, .external_lex_state = 2},
  [713] = {.lex_state = 0, .external_lex_state = 15},
  [714] = {.lex_state = 1, .external_lex_state = 7},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 0, .external_lex_state = 2},
  [717] = {.lex_state = 5, .external_lex_state = 7},
  [718] = {.lex_state = 0, .external_lex_state = 15},
  [719] = {.lex_state = 12, .external_lex_state = 7},
  [720] = {.lex_state = 0, .external_lex_state = 15},
  [721] = {.lex_state = 0, .external_lex_state = 15},
  [722] = {.lex_state = 0, .external_lex_state = 15},
  [723] = {.lex_state = 0, .external_lex_state = 15},
  [724] = {.lex_state = 0, .external_lex_state = 15},
  [725] = {.lex_state = 0, .external_lex_state = 15},
  [726] = {.lex_state = 0, .external_lex_state = 15},
  [727] = {.lex_state = 0, .external_lex_state = 15},
  [728] = {.lex_state = 0, .external_lex_state = 15},
  [729] = {.lex_state = 12, .external_lex_state = 7},
  [730] = {.lex_state = 12, .external_lex_state = 7},
  [731] = {.lex_state = 0, .external_lex_state = 15},
  [732] = {.lex_state = 0, .external_lex_state = 15},
  [733] = {.lex_state = 0, .external_lex_state = 15},
  [734] = {.lex_state = 0, .external_lex_state = 27},
  [735] = {.lex_state = 0, .external_lex_state = 2},
  [736] = {.lex_state = 0, .external_lex_state = 2},
  [737] = {.lex_state = 0, .external_lex_state = 15},
  [738] = {.lex_state = 0, .external_lex_state = 15},
  [739] = {.lex_state = 0, .external_lex_state = 15},
  [740] = {.lex_state = 0, .external_lex_state = 2},
  [741] = {.lex_state = 0, .external_lex_state = 15},
  [742] = {.lex_state = 0, .external_lex_state = 15},
  [743] = {.lex_state = 0, .external_lex_state = 15},
  [744] = {.lex_state = 0, .external_lex_state = 27},
  [745] = {.lex_state = 0, .external_lex_state = 15},
  [746] = {.lex_state = 0, .external_lex_state = 15},
  [747] = {.lex_state = 0, .external_lex_state = 2},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 1},
  [750] = {.lex_state = 0, .external_lex_state = 15},
  [751] = {.lex_state = 0, .external_lex_state = 2},
  [752] = {.lex_state = 0, .external_lex_state = 15},
  [753] = {.lex_state = 1},
  [754] = {.lex_state = 0, .external_lex_state = 20},
  [755] = {.lex_state = 0, .external_lex_state = 20},
  [756] = {.lex_state = 0, .external_lex_state = 7},
  [757] = {.lex_state = 0, .external_lex_state = 2},
  [758] = {.lex_state = 0, .external_lex_state = 15},
  [759] = {.lex_state = 7, .external_lex_state = 7},
  [760] = {.lex_state = 0, .external_lex_state = 15},
  [761] = {.lex_state = 0, .external_lex_state = 29},
  [762] = {.lex_state = 0, .external_lex_state = 20},
  [763] = {.lex_state = 0, .external_lex_state = 20},
  [764] = {.lex_state = 0, .external_lex_state = 20},
  [765] = {.lex_state = 0, .external_lex_state = 20},
  [766] = {.lex_state = 0, .external_lex_state = 20},
  [767] = {.lex_state = 0, .external_lex_state = 20},
  [768] = {.lex_state = 0, .external_lex_state = 20},
  [769] = {.lex_state = 0, .external_lex_state = 20},
  [770] = {.lex_state = 0, .external_lex_state = 20},
  [771] = {.lex_state = 0, .external_lex_state = 20},
  [772] = {.lex_state = 12, .external_lex_state = 7},
  [773] = {.lex_state = 12, .external_lex_state = 7},
  [774] = {.lex_state = 1, .external_lex_state = 7},
  [775] = {.lex_state = 0, .external_lex_state = 15},
  [776] = {.lex_state = 0, .external_lex_state = 20},
  [777] = {.lex_state = 0, .external_lex_state = 15},
  [778] = {.lex_state = 0, .external_lex_state = 20},
  [779] = {.lex_state = 0, .external_lex_state = 20},
  [780] = {.lex_state = 0, .external_lex_state = 20},
  [781] = {.lex_state = 0, .external_lex_state = 20},
  [782] = {.lex_state = 0, .external_lex_state = 20},
  [783] = {.lex_state = 0, .external_lex_state = 20},
  [784] = {.lex_state = 0, .external_lex_state = 20},
  [785] = {.lex_state = 0, .external_lex_state = 20},
  [786] = {.lex_state = 1, .external_lex_state = 7},
  [787] = {.lex_state = 0, .external_lex_state = 20},
  [788] = {.lex_state = 0, .external_lex_state = 20},
  [789] = {.lex_state = 0, .external_lex_state = 20},
  [790] = {.lex_state = 0, .external_lex_state = 20},
  [791] = {.lex_state = 12, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 20},
  [793] = {.lex_state = 0, .external_lex_state = 20},
  [794] = {.lex_state = 0, .external_lex_state = 20},
  [795] = {.lex_state = 0, .external_lex_state = 20},
  [796] = {.lex_state = 0, .external_lex_state = 20},
  [797] = {.lex_state = 0, .external_lex_state = 20},
  [798] = {.lex_state = 0, .external_lex_state = 20},
  [799] = {.lex_state = 0, .external_lex_state = 15},
  [800] = {.lex_state = 0, .external_lex_state = 7},
  [801] = {.lex_state = 12, .external_lex_state = 7},
  [802] = {.lex_state = 12, .external_lex_state = 7},
  [803] = {.lex_state = 7, .external_lex_state = 7},
  [804] = {.lex_state = 0, .external_lex_state = 20},
  [805] = {.lex_state = 0, .external_lex_state = 19},
  [806] = {.lex_state = 0, .external_lex_state = 19},
  [807] = {.lex_state = 0, .external_lex_state = 20},
  [808] = {.lex_state = 0, .external_lex_state = 20},
  [809] = {.lex_state = 0, .external_lex_state = 20},
  [810] = {.lex_state = 0, .external_lex_state = 20},
  [811] = {.lex_state = 0, .external_lex_state = 20},
  [812] = {.lex_state = 0, .external_lex_state = 20},
  [813] = {.lex_state = 0, .external_lex_state = 20},
  [814] = {.lex_state = 0, .external_lex_state = 20},
  [815] = {.lex_state = 0, .external_lex_state = 20},
  [816] = {.lex_state = 0, .external_lex_state = 20},
  [817] = {.lex_state = 0, .external_lex_state = 20},
  [818] = {.lex_state = 0, .external_lex_state = 20},
  [819] = {.lex_state = 0, .external_lex_state = 20},
  [820] = {.lex_state = 0, .external_lex_state = 20},
  [821] = {.lex_state = 0, .external_lex_state = 20},
  [822] = {.lex_state = 0, .external_lex_state = 20},
  [823] = {.lex_state = 0, .external_lex_state = 20},
  [824] = {.lex_state = 0, .external_lex_state = 20},
  [825] = {.lex_state = 0, .external_lex_state = 20},
  [826] = {.lex_state = 0, .external_lex_state = 20},
  [827] = {.lex_state = 0, .external_lex_state = 20},
  [828] = {.lex_state = 0, .external_lex_state = 20},
  [829] = {.lex_state = 0, .external_lex_state = 20},
  [830] = {.lex_state = 0, .external_lex_state = 20},
  [831] = {.lex_state = 0, .external_lex_state = 20},
  [832] = {.lex_state = 0, .external_lex_state = 20},
  [833] = {.lex_state = 0, .external_lex_state = 29},
  [834] = {.lex_state = 0, .external_lex_state = 20},
  [835] = {.lex_state = 0, .external_lex_state = 20},
  [836] = {.lex_state = 0, .external_lex_state = 20},
  [837] = {.lex_state = 0, .external_lex_state = 29},
  [838] = {.lex_state = 0, .external_lex_state = 20},
  [839] = {.lex_state = 0, .external_lex_state = 20},
  [840] = {.lex_state = 0, .external_lex_state = 20},
  [841] = {.lex_state = 0, .external_lex_state = 20},
  [842] = {.lex_state = 0, .external_lex_state = 20},
  [843] = {.lex_state = 0, .external_lex_state = 20},
  [844] = {.lex_state = 0, .external_lex_state = 20},
  [845] = {.lex_state = 0, .external_lex_state = 20},
  [846] = {.lex_state = 0, .external_lex_state = 27},
  [847] = {.lex_state = 0, .external_lex_state = 27},
  [848] = {.lex_state = 0, .external_lex_state = 20},
  [849] = {.lex_state = 7, .external_lex_state = 7},
  [850] = {.lex_state = 14, .external_lex_state = 7},
  [851] = {.lex_state = 0, .external_lex_state = 20},
  [852] = {.lex_state = 73},
  [853] = {.lex_state = 0, .external_lex_state = 20},
  [854] = {.lex_state = 16},
  [855] = {.lex_state = 0, .external_lex_state = 27},
  [856] = {.lex_state = 0, .external_lex_state = 27},
  [857] = {.lex_state = 0, .external_lex_state = 20},
  [858] = {.lex_state = 7, .external_lex_state = 7},
  [859] = {.lex_state = 14, .external_lex_state = 7},
  [860] = {.lex_state = 0, .external_lex_state = 20},
  [861] = {.lex_state = 0, .external_lex_state = 20},
  [862] = {.lex_state = 0, .external_lex_state = 27},
  [863] = {.lex_state = 0, .external_lex_state = 27},
  [864] = {.lex_state = 0, .external_lex_state = 27},
  [865] = {.lex_state = 0, .external_lex_state = 27},
  [866] = {.lex_state = 1},
  [867] = {.lex_state = 0, .external_lex_state = 15},
  [868] = {.lex_state = 0, .external_lex_state = 20},
  [869] = {.lex_state = 0, .external_lex_state = 20},
  [870] = {.lex_state = 0, .external_lex_state = 20},
  [871] = {.lex_state = 0, .external_lex_state = 20},
  [872] = {.lex_state = 0, .external_lex_state = 20},
  [873] = {.lex_state = 0, .external_lex_state = 20},
  [874] = {.lex_state = 0, .external_lex_state = 20},
  [875] = {.lex_state = 0, .external_lex_state = 20},
  [876] = {.lex_state = 0, .external_lex_state = 20},
  [877] = {.lex_state = 0, .external_lex_state = 20},
  [878] = {.lex_state = 0, .external_lex_state = 15},
  [879] = {.lex_state = 0, .external_lex_state = 15},
  [880] = {.lex_state = 12, .external_lex_state = 7},
  [881] = {.lex_state = 1},
  [882] = {.lex_state = 0, .external_lex_state = 2},
  [883] = {.lex_state = 0, .external_lex_state = 2},
  [884] = {.lex_state = 0, .external_lex_state = 2},
  [885] = {.lex_state = 0, .external_lex_state = 2},
  [886] = {.lex_state = 0, .external_lex_state = 15},
  [887] = {.lex_state = 0, .external_lex_state = 7},
  [888] = {.lex_state = 0, .external_lex_state = 2},
  [889] = {.lex_state = 0, .external_lex_state = 2},
  [890] = {.lex_state = 0, .external_lex_state = 2},
  [891] = {.lex_state = 15},
  [892] = {.lex_state = 0, .external_lex_state = 28},
  [893] = {.lex_state = 0, .external_lex_state = 2},
  [894] = {.lex_state = 0, .external_lex_state = 29},
  [895] = {.lex_state = 0, .external_lex_state = 2},
  [896] = {.lex_state = 0, .external_lex_state = 15},
  [897] = {.lex_state = 1},
  [898] = {.lex_state = 0, .external_lex_state = 23},
  [899] = {.lex_state = 0, .external_lex_state = 25},
  [900] = {.lex_state = 0, .external_lex_state = 25},
  [901] = {.lex_state = 1, .external_lex_state = 7},
  [902] = {.lex_state = 1, .external_lex_state = 7},
  [903] = {.lex_state = 1},
  [904] = {.lex_state = 12, .external_lex_state = 7},
  [905] = {.lex_state = 0, .external_lex_state = 7},
  [906] = {.lex_state = 0, .external_lex_state = 7},
  [907] = {.lex_state = 0, .external_lex_state = 7},
  [908] = {.lex_state = 16},
  [909] = {.lex_state = 0, .external_lex_state = 24},
  [910] = {.lex_state = 0, .external_lex_state = 24},
  [911] = {.lex_state = 0, .external_lex_state = 25},
  [912] = {.lex_state = 0, .external_lex_state = 25},
  [913] = {.lex_state = 0, .external_lex_state = 25},
  [914] = {.lex_state = 0, .external_lex_state = 25},
  [915] = {.lex_state = 0, .external_lex_state = 25},
  [916] = {.lex_state = 0, .external_lex_state = 24},
  [917] = {.lex_state = 0, .external_lex_state = 24},
  [918] = {.lex_state = 0, .external_lex_state = 24},
  [919] = {.lex_state = 0, .external_lex_state = 24},
  [920] = {.lex_state = 0, .external_lex_state = 24},
  [921] = {.lex_state = 0, .external_lex_state = 24},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 30},
  [925] = {.lex_state = 5, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 7},
  [927] = {.lex_state = 0, .external_lex_state = 7},
  [928] = {.lex_state = 0, .external_lex_state = 7},
  [929] = {.lex_state = 0, .external_lex_state = 29},
  [930] = {.lex_state = 0, .external_lex_state = 7},
  [931] = {.lex_state = 1},
  [932] = {.lex_state = 1},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 0, .external_lex_state = 7},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 0, .external_lex_state = 7},
  [937] = {.lex_state = 0, .external_lex_state = 7},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 7},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 1},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 0, .external_lex_state = 7},
  [947] = {.lex_state = 0, .external_lex_state = 7},
  [948] = {.lex_state = 0, .external_lex_state = 7},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 1},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 0, .external_lex_state = 7},
  [953] = {.lex_state = 0, .external_lex_state = 7},
  [954] = {.lex_state = 0, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 0, .external_lex_state = 7},
  [958] = {.lex_state = 1},
  [959] = {.lex_state = 0, .external_lex_state = 7},
  [960] = {.lex_state = 0, .external_lex_state = 7},
  [961] = {.lex_state = 1},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 0, .external_lex_state = 7},
  [964] = {.lex_state = 0, .external_lex_state = 7},
  [965] = {.lex_state = 1, .external_lex_state = 7},
  [966] = {.lex_state = 0, .external_lex_state = 7},
  [967] = {.lex_state = 0, .external_lex_state = 7},
  [968] = {.lex_state = 0, .external_lex_state = 7},
  [969] = {.lex_state = 0, .external_lex_state = 7},
  [970] = {.lex_state = 0, .external_lex_state = 7},
  [971] = {.lex_state = 15},
  [972] = {.lex_state = 0, .external_lex_state = 7},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 0, .external_lex_state = 7},
  [975] = {.lex_state = 0, .external_lex_state = 30},
  [976] = {.lex_state = 5, .external_lex_state = 7},
  [977] = {.lex_state = 0, .external_lex_state = 7},
  [978] = {.lex_state = 0, .external_lex_state = 7},
  [979] = {.lex_state = 0, .external_lex_state = 30},
  [980] = {.lex_state = 0, .external_lex_state = 7},
  [981] = {.lex_state = 15},
  [982] = {.lex_state = 0, .external_lex_state = 7},
  [983] = {.lex_state = 0, .external_lex_state = 7},
  [984] = {.lex_state = 0, .external_lex_state = 7},
  [985] = {.lex_state = 1, .external_lex_state = 7},
  [986] = {.lex_state = 0, .external_lex_state = 7},
  [987] = {.lex_state = 1, .external_lex_state = 7},
  [988] = {.lex_state = 0, .external_lex_state = 7},
  [989] = {.lex_state = 0, .external_lex_state = 7},
  [990] = {.lex_state = 0, .external_lex_state = 7},
  [991] = {.lex_state = 0, .external_lex_state = 25},
  [992] = {.lex_state = 0, .external_lex_state = 25},
  [993] = {.lex_state = 0, .external_lex_state = 25},
  [994] = {.lex_state = 0, .external_lex_state = 7},
  [995] = {.lex_state = 0, .external_lex_state = 7},
  [996] = {.lex_state = 0, .external_lex_state = 7},
  [997] = {.lex_state = 0, .external_lex_state = 25},
  [998] = {.lex_state = 0, .external_lex_state = 25},
  [999] = {.lex_state = 1},
  [1000] = {.lex_state = 0, .external_lex_state = 7},
  [1001] = {.lex_state = 0, .external_lex_state = 30},
  [1002] = {.lex_state = 0, .external_lex_state = 30},
  [1003] = {.lex_state = 1},
  [1004] = {.lex_state = 0, .external_lex_state = 7},
  [1005] = {.lex_state = 0, .external_lex_state = 7},
  [1006] = {.lex_state = 0, .external_lex_state = 7},
  [1007] = {.lex_state = 0, .external_lex_state = 30},
  [1008] = {.lex_state = 0, .external_lex_state = 7},
  [1009] = {.lex_state = 0, .external_lex_state = 7},
  [1010] = {.lex_state = 0, .external_lex_state = 7},
  [1011] = {.lex_state = 0, .external_lex_state = 7},
  [1012] = {.lex_state = 0, .external_lex_state = 7},
  [1013] = {.lex_state = 0, .external_lex_state = 7},
  [1014] = {.lex_state = 0, .external_lex_state = 7},
  [1015] = {.lex_state = 15},
  [1016] = {.lex_state = 1},
  [1017] = {.lex_state = 0, .external_lex_state = 7},
  [1018] = {.lex_state = 0, .external_lex_state = 7},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 0, .external_lex_state = 7},
  [1021] = {.lex_state = 1},
  [1022] = {.lex_state = 0, .external_lex_state = 7},
  [1023] = {.lex_state = 0, .external_lex_state = 7},
  [1024] = {.lex_state = 0, .external_lex_state = 26},
  [1025] = {.lex_state = 0, .external_lex_state = 7},
  [1026] = {.lex_state = 0, .external_lex_state = 7},
  [1027] = {.lex_state = 0, .external_lex_state = 7},
  [1028] = {.lex_state = 0, .external_lex_state = 25},
  [1029] = {.lex_state = 0, .external_lex_state = 29},
  [1030] = {.lex_state = 0, .external_lex_state = 30},
  [1031] = {.lex_state = 0, .external_lex_state = 30},
  [1032] = {.lex_state = 0, .external_lex_state = 30},
  [1033] = {.lex_state = 0, .external_lex_state = 7},
  [1034] = {.lex_state = 12, .external_lex_state = 7},
  [1035] = {.lex_state = 12, .external_lex_state = 7},
  [1036] = {.lex_state = 12, .external_lex_state = 7},
  [1037] = {.lex_state = 0, .external_lex_state = 7},
  [1038] = {.lex_state = 15},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 0, .external_lex_state = 7},
  [1041] = {.lex_state = 0, .external_lex_state = 7},
  [1042] = {.lex_state = 0, .external_lex_state = 7},
  [1043] = {.lex_state = 0, .external_lex_state = 7},
  [1044] = {.lex_state = 0, .external_lex_state = 7},
  [1045] = {.lex_state = 0, .external_lex_state = 30},
  [1046] = {.lex_state = 0, .external_lex_state = 7},
  [1047] = {.lex_state = 1},
  [1048] = {.lex_state = 0, .external_lex_state = 25},
  [1049] = {.lex_state = 0, .external_lex_state = 7},
  [1050] = {.lex_state = 0, .external_lex_state = 7},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 0, .external_lex_state = 30},
  [1053] = {.lex_state = 0, .external_lex_state = 30},
  [1054] = {.lex_state = 0, .external_lex_state = 30},
  [1055] = {.lex_state = 0, .external_lex_state = 30},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 0, .external_lex_state = 25},
  [1059] = {.lex_state = 0, .external_lex_state = 30},
  [1060] = {.lex_state = 0, .external_lex_state = 30},
  [1061] = {.lex_state = 0, .external_lex_state = 30},
  [1062] = {.lex_state = 0, .external_lex_state = 30},
  [1063] = {.lex_state = 0, .external_lex_state = 7},
  [1064] = {.lex_state = 41},
  [1065] = {.lex_state = 0, .external_lex_state = 29},
  [1066] = {.lex_state = 0, .external_lex_state = 7},
  [1067] = {.lex_state = 0, .external_lex_state = 30},
  [1068] = {.lex_state = 0, .external_lex_state = 30},
  [1069] = {.lex_state = 0, .external_lex_state = 30},
  [1070] = {.lex_state = 0, .external_lex_state = 7},
  [1071] = {.lex_state = 0, .external_lex_state = 30},
  [1072] = {.lex_state = 0, .external_lex_state = 29},
  [1073] = {.lex_state = 0, .external_lex_state = 7},
  [1074] = {.lex_state = 1, .external_lex_state = 7},
  [1075] = {.lex_state = 0, .external_lex_state = 30},
  [1076] = {.lex_state = 0, .external_lex_state = 7},
  [1077] = {.lex_state = 0, .external_lex_state = 30},
  [1078] = {.lex_state = 0, .external_lex_state = 30},
  [1079] = {.lex_state = 0, .external_lex_state = 30},
  [1080] = {.lex_state = 0, .external_lex_state = 7},
  [1081] = {.lex_state = 0, .external_lex_state = 29},
  [1082] = {.lex_state = 0, .external_lex_state = 29},
  [1083] = {.lex_state = 0, .external_lex_state = 23},
  [1084] = {.lex_state = 0, .external_lex_state = 7},
  [1085] = {.lex_state = 0, .external_lex_state = 23},
  [1086] = {.lex_state = 0, .external_lex_state = 7},
  [1087] = {.lex_state = 0, .external_lex_state = 23},
  [1088] = {.lex_state = 1, .external_lex_state = 7},
  [1089] = {.lex_state = 0, .external_lex_state = 7},
  [1090] = {.lex_state = 0, .external_lex_state = 23},
  [1091] = {.lex_state = 0, .external_lex_state = 7},
  [1092] = {.lex_state = 0, .external_lex_state = 23},
  [1093] = {.lex_state = 0, .external_lex_state = 7},
  [1094] = {.lex_state = 0, .external_lex_state = 23},
  [1095] = {.lex_state = 0, .external_lex_state = 23},
  [1096] = {.lex_state = 0, .external_lex_state = 7},
  [1097] = {.lex_state = 0, .external_lex_state = 7},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 0, .external_lex_state = 7},
  [1100] = {.lex_state = 0, .external_lex_state = 7},
  [1101] = {.lex_state = 1},
  [1102] = {.lex_state = 0, .external_lex_state = 7},
  [1103] = {.lex_state = 1, .external_lex_state = 7},
  [1104] = {.lex_state = 1, .external_lex_state = 7},
  [1105] = {.lex_state = 1, .external_lex_state = 7},
  [1106] = {.lex_state = 0, .external_lex_state = 25},
  [1107] = {.lex_state = 15},
  [1108] = {.lex_state = 285},
  [1109] = {.lex_state = 286},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 285},
  [1113] = {.lex_state = 1},
  [1114] = {.lex_state = 0, .external_lex_state = 30},
  [1115] = {.lex_state = 1},
  [1116] = {.lex_state = 1},
  [1117] = {.lex_state = 0, .external_lex_state = 29},
  [1118] = {.lex_state = 287, .external_lex_state = 31},
  [1119] = {.lex_state = 287, .external_lex_state = 31},
  [1120] = {.lex_state = 0, .external_lex_state = 3},
  [1121] = {.lex_state = 0, .external_lex_state = 32},
  [1122] = {.lex_state = 285},
  [1123] = {.lex_state = 288},
  [1124] = {.lex_state = 1},
  [1125] = {.lex_state = 0, .external_lex_state = 3},
  [1126] = {.lex_state = 285},
  [1127] = {.lex_state = 0, .external_lex_state = 33},
  [1128] = {.lex_state = 41},
  [1129] = {.lex_state = 0, .external_lex_state = 34},
  [1130] = {.lex_state = 0, .external_lex_state = 34},
  [1131] = {.lex_state = 285},
  [1132] = {.lex_state = 1},
  [1133] = {.lex_state = 1},
  [1134] = {.lex_state = 15},
  [1135] = {.lex_state = 0, .external_lex_state = 32},
  [1136] = {.lex_state = 0, .external_lex_state = 32},
  [1137] = {.lex_state = 287, .external_lex_state = 31},
  [1138] = {.lex_state = 1},
  [1139] = {.lex_state = 287, .external_lex_state = 31},
  [1140] = {.lex_state = 1},
  [1141] = {.lex_state = 0, .external_lex_state = 34},
  [1142] = {.lex_state = 0, .external_lex_state = 7},
  [1143] = {.lex_state = 287, .external_lex_state = 31},
  [1144] = {.lex_state = 287, .external_lex_state = 31},
  [1145] = {.lex_state = 5},
  [1146] = {.lex_state = 287, .external_lex_state = 31},
  [1147] = {.lex_state = 287, .external_lex_state = 31},
  [1148] = {.lex_state = 287, .external_lex_state = 31},
  [1149] = {.lex_state = 287, .external_lex_state = 31},
  [1150] = {.lex_state = 287, .external_lex_state = 31},
  [1151] = {.lex_state = 287, .external_lex_state = 31},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 287, .external_lex_state = 31},
  [1154] = {.lex_state = 287, .external_lex_state = 31},
  [1155] = {.lex_state = 287, .external_lex_state = 31},
  [1156] = {.lex_state = 287, .external_lex_state = 31},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 287, .external_lex_state = 31},
  [1159] = {.lex_state = 287, .external_lex_state = 31},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 287, .external_lex_state = 31},
  [1162] = {.lex_state = 287, .external_lex_state = 31},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 41},
  [1169] = {.lex_state = 1},
  [1170] = {.lex_state = 0, .external_lex_state = 34},
  [1171] = {.lex_state = 0, .external_lex_state = 7},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 0, .external_lex_state = 33},
  [1174] = {.lex_state = 0, .external_lex_state = 34},
  [1175] = {.lex_state = 285},
  [1176] = {.lex_state = 0, .external_lex_state = 33},
  [1177] = {.lex_state = 0, .external_lex_state = 34},
  [1178] = {.lex_state = 0, .external_lex_state = 34},
  [1179] = {.lex_state = 288},
  [1180] = {.lex_state = 0, .external_lex_state = 34},
  [1181] = {.lex_state = 1},
  [1182] = {.lex_state = 1},
  [1183] = {.lex_state = 286},
  [1184] = {.lex_state = 15},
  [1185] = {.lex_state = 1},
  [1186] = {.lex_state = 0, .external_lex_state = 33},
  [1187] = {.lex_state = 0, .external_lex_state = 34},
  [1188] = {.lex_state = 0, .external_lex_state = 3},
  [1189] = {.lex_state = 0, .external_lex_state = 33},
  [1190] = {.lex_state = 0, .external_lex_state = 34},
  [1191] = {.lex_state = 0, .external_lex_state = 34},
  [1192] = {.lex_state = 1},
  [1193] = {.lex_state = 0, .external_lex_state = 34},
  [1194] = {.lex_state = 1},
  [1195] = {.lex_state = 1},
  [1196] = {.lex_state = 1},
  [1197] = {.lex_state = 287, .external_lex_state = 31},
  [1198] = {.lex_state = 1},
  [1199] = {.lex_state = 1},
  [1200] = {.lex_state = 1},
  [1201] = {.lex_state = 1},
  [1202] = {.lex_state = 1},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 287, .external_lex_state = 31},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 1},
  [1207] = {.lex_state = 1},
  [1208] = {.lex_state = 1},
  [1209] = {.lex_state = 0, .external_lex_state = 29},
  [1210] = {.lex_state = 0, .external_lex_state = 7},
  [1211] = {.lex_state = 0, .external_lex_state = 7},
  [1212] = {.lex_state = 0, .external_lex_state = 7},
  [1213] = {.lex_state = 15},
  [1214] = {.lex_state = 0, .external_lex_state = 7},
  [1215] = {.lex_state = 288},
  [1216] = {.lex_state = 0, .external_lex_state = 30},
  [1217] = {.lex_state = 0, .external_lex_state = 5},
  [1218] = {.lex_state = 15},
  [1219] = {.lex_state = 1},
  [1220] = {.lex_state = 0, .external_lex_state = 7},
  [1221] = {.lex_state = 0, .external_lex_state = 7},
  [1222] = {.lex_state = 0, .external_lex_state = 32},
  [1223] = {.lex_state = 15},
  [1224] = {.lex_state = 0, .external_lex_state = 33},
  [1225] = {.lex_state = 1},
  [1226] = {.lex_state = 1},
  [1227] = {.lex_state = 1},
  [1228] = {.lex_state = 1},
  [1229] = {.lex_state = 0, .external_lex_state = 7},
  [1230] = {.lex_state = 0, .external_lex_state = 31},
  [1231] = {.lex_state = 1},
  [1232] = {.lex_state = 41},
  [1233] = {.lex_state = 0, .external_lex_state = 35},
  [1234] = {.lex_state = 1},
  [1235] = {.lex_state = 0, .external_lex_state = 31},
  [1236] = {.lex_state = 0, .external_lex_state = 35},
  [1237] = {.lex_state = 0, .external_lex_state = 31},
  [1238] = {.lex_state = 0, .external_lex_state = 31},
  [1239] = {.lex_state = 5},
  [1240] = {.lex_state = 289},
  [1241] = {.lex_state = 0, .external_lex_state = 35},
  [1242] = {.lex_state = 1},
  [1243] = {.lex_state = 0, .external_lex_state = 7},
  [1244] = {.lex_state = 1},
  [1245] = {.lex_state = 41},
  [1246] = {.lex_state = 1},
  [1247] = {.lex_state = 1},
  [1248] = {.lex_state = 1},
  [1249] = {.lex_state = 1},
  [1250] = {.lex_state = 1},
  [1251] = {.lex_state = 1},
  [1252] = {.lex_state = 1},
  [1253] = {.lex_state = 1},
  [1254] = {.lex_state = 41},
  [1255] = {.lex_state = 1},
  [1256] = {.lex_state = 1},
  [1257] = {.lex_state = 0, .external_lex_state = 31},
  [1258] = {.lex_state = 0, .external_lex_state = 31},
  [1259] = {.lex_state = 1},
  [1260] = {.lex_state = 0, .external_lex_state = 31},
  [1261] = {.lex_state = 1},
  [1262] = {.lex_state = 0, .external_lex_state = 7},
  [1263] = {.lex_state = 1},
  [1264] = {.lex_state = 1},
  [1265] = {.lex_state = 1},
  [1266] = {.lex_state = 0, .external_lex_state = 35},
  [1267] = {.lex_state = 0, .external_lex_state = 31},
  [1268] = {.lex_state = 1},
  [1269] = {.lex_state = 1},
  [1270] = {.lex_state = 1},
  [1271] = {.lex_state = 1},
  [1272] = {.lex_state = 41},
  [1273] = {.lex_state = 0, .external_lex_state = 35},
  [1274] = {.lex_state = 41},
  [1275] = {.lex_state = 1},
  [1276] = {.lex_state = 1},
  [1277] = {.lex_state = 1},
  [1278] = {.lex_state = 0, .external_lex_state = 35},
  [1279] = {.lex_state = 0, .external_lex_state = 7},
  [1280] = {.lex_state = 1},
  [1281] = {.lex_state = 0, .external_lex_state = 31},
  [1282] = {.lex_state = 0, .external_lex_state = 31},
  [1283] = {.lex_state = 0, .external_lex_state = 31},
  [1284] = {.lex_state = 0, .external_lex_state = 35},
  [1285] = {.lex_state = 0, .external_lex_state = 7},
  [1286] = {.lex_state = 1},
  [1287] = {.lex_state = 1},
  [1288] = {.lex_state = 287},
  [1289] = {.lex_state = 0, .external_lex_state = 35},
  [1290] = {.lex_state = 0, .external_lex_state = 7},
  [1291] = {.lex_state = 0, .external_lex_state = 31},
  [1292] = {.lex_state = 1},
  [1293] = {.lex_state = 0, .external_lex_state = 31},
  [1294] = {.lex_state = 0, .external_lex_state = 31},
  [1295] = {.lex_state = 0, .external_lex_state = 7},
  [1296] = {.lex_state = 0, .external_lex_state = 7},
  [1297] = {.lex_state = 1},
  [1298] = {.lex_state = 1},
  [1299] = {.lex_state = 0, .external_lex_state = 31},
  [1300] = {.lex_state = 288},
  [1301] = {.lex_state = 0, .external_lex_state = 31},
  [1302] = {.lex_state = 0, .external_lex_state = 7},
  [1303] = {.lex_state = 1},
  [1304] = {.lex_state = 0, .external_lex_state = 35},
  [1305] = {.lex_state = 0, .external_lex_state = 35},
  [1306] = {.lex_state = 41},
  [1307] = {.lex_state = 0, .external_lex_state = 35},
  [1308] = {.lex_state = 0, .external_lex_state = 31},
  [1309] = {.lex_state = 0, .external_lex_state = 31},
  [1310] = {.lex_state = 1},
  [1311] = {.lex_state = 0, .external_lex_state = 7},
  [1312] = {.lex_state = 0, .external_lex_state = 31},
  [1313] = {.lex_state = 0, .external_lex_state = 7},
  [1314] = {.lex_state = 0, .external_lex_state = 7},
  [1315] = {.lex_state = 1},
  [1316] = {.lex_state = 1},
  [1317] = {.lex_state = 0, .external_lex_state = 31},
  [1318] = {.lex_state = 0, .external_lex_state = 35},
  [1319] = {.lex_state = 0, .external_lex_state = 31},
  [1320] = {.lex_state = 0, .external_lex_state = 7},
  [1321] = {.lex_state = 0, .external_lex_state = 31},
  [1322] = {.lex_state = 0, .external_lex_state = 31},
  [1323] = {.lex_state = 1},
  [1324] = {.lex_state = 0, .external_lex_state = 31},
  [1325] = {.lex_state = 0, .external_lex_state = 7},
  [1326] = {.lex_state = 1},
  [1327] = {.lex_state = 289},
  [1328] = {.lex_state = 0, .external_lex_state = 31},
  [1329] = {.lex_state = 1},
  [1330] = {.lex_state = 1},
  [1331] = {.lex_state = 1},
  [1332] = {.lex_state = 0, .external_lex_state = 31},
  [1333] = {.lex_state = 0, .external_lex_state = 31},
  [1334] = {.lex_state = 1},
  [1335] = {.lex_state = 0, .external_lex_state = 31},
  [1336] = {.lex_state = 0, .external_lex_state = 7},
  [1337] = {.lex_state = 41},
  [1338] = {.lex_state = 0, .external_lex_state = 7},
  [1339] = {.lex_state = 1},
  [1340] = {.lex_state = 41},
  [1341] = {.lex_state = 0, .external_lex_state = 31},
  [1342] = {.lex_state = 289},
  [1343] = {.lex_state = 1},
  [1344] = {.lex_state = 1},
  [1345] = {.lex_state = 0, .external_lex_state = 31},
  [1346] = {.lex_state = 0, .external_lex_state = 31},
  [1347] = {.lex_state = 0, .external_lex_state = 31},
  [1348] = {.lex_state = 286},
  [1349] = {.lex_state = 0},
  [1350] = {.lex_state = 0, .external_lex_state = 35},
  [1351] = {.lex_state = 1},
  [1352] = {.lex_state = 0, .external_lex_state = 31},
  [1353] = {.lex_state = 0, .external_lex_state = 35},
  [1354] = {.lex_state = 0, .external_lex_state = 7},
  [1355] = {.lex_state = 1},
  [1356] = {.lex_state = 1},
  [1357] = {.lex_state = 0, .external_lex_state = 35},
  [1358] = {.lex_state = 1},
  [1359] = {.lex_state = 28},
  [1360] = {.lex_state = 1},
  [1361] = {.lex_state = 1},
  [1362] = {.lex_state = 0, .external_lex_state = 31},
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
  },
  [1] = {
    [sym_source_file] = STATE(1349),
    [sym_item] = STATE(100),
    [sym__trivia] = STATE(100),
    [aux_sym_source_file_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(593),
    [sym__collection_operation] = STATE(593),
    [sym_let_statement] = STATE(593),
    [sym_exec_statement] = STATE(593),
    [sym_spawn_statement] = STATE(593),
    [sym__invalid_exec_binding] = STATE(597),
    [sym_run_statement] = STATE(593),
    [sym_implicit_run_statement] = STATE(593),
    [sym__implicit_run_line] = STATE(133),
    [sym_seek_statement] = STATE(593),
    [sym_ask_statement] = STATE(593),
    [sym_generate_statement] = STATE(593),
    [sym_reduce_statement] = STATE(593),
    [sym_map_statement] = STATE(593),
    [sym_keep_statement] = STATE(593),
    [sym_drop_statement] = STATE(593),
    [sym_sort_statement] = STATE(593),
    [sym_repeat_statement] = STATE(593),
    [sym_invalid_flow_reserved_statement] = STATE(593),
    [sym__query_directive_key] = STATE(1034),
    [sym__route_directive_key] = STATE(1034),
    [sym_directive_key] = STATE(601),
    [sym_role] = STATE(601),
    [sym__flow_reserved_word] = STATE(601),
    [sym__collection_binding_word] = STATE(601),
    [sym__agic_reserved_word] = STATE(601),
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
    [sym_flow_exec_keyword] = ACTIONS(27),
    [sym_flow_spawn_keyword] = ACTIONS(29),
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
    [sym__flow_operation] = STATE(593),
    [sym__collection_operation] = STATE(593),
    [sym_let_statement] = STATE(593),
    [sym_exec_statement] = STATE(593),
    [sym_spawn_statement] = STATE(593),
    [sym__invalid_exec_binding] = STATE(597),
    [sym_run_statement] = STATE(593),
    [sym_implicit_run_statement] = STATE(593),
    [sym__implicit_run_line] = STATE(133),
    [sym_seek_statement] = STATE(593),
    [sym_ask_statement] = STATE(593),
    [sym_generate_statement] = STATE(593),
    [sym_reduce_statement] = STATE(593),
    [sym_map_statement] = STATE(593),
    [sym_keep_statement] = STATE(593),
    [sym_drop_statement] = STATE(593),
    [sym_sort_statement] = STATE(593),
    [sym_repeat_statement] = STATE(593),
    [sym_invalid_flow_reserved_statement] = STATE(593),
    [sym__query_directive_key] = STATE(1034),
    [sym__route_directive_key] = STATE(1034),
    [sym_directive_key] = STATE(601),
    [sym_role] = STATE(601),
    [sym__flow_reserved_word] = STATE(601),
    [sym__collection_binding_word] = STATE(601),
    [sym__agic_reserved_word] = STATE(601),
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
    [sym_pass_keyword] = ACTIONS(53),
    [sym_flow_run_keyword] = ACTIONS(25),
    [sym_flow_exec_keyword] = ACTIONS(27),
    [sym_flow_spawn_keyword] = ACTIONS(29),
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
    [sym__flow_operation] = STATE(754),
    [sym__collection_operation] = STATE(754),
    [sym_let_statement] = STATE(754),
    [sym_exec_statement] = STATE(754),
    [sym_spawn_statement] = STATE(754),
    [sym__invalid_exec_binding] = STATE(755),
    [sym_run_statement] = STATE(754),
    [sym_implicit_run_statement] = STATE(754),
    [sym__implicit_run_line] = STATE(117),
    [sym_seek_statement] = STATE(754),
    [sym_ask_statement] = STATE(754),
    [sym_generate_statement] = STATE(754),
    [sym_reduce_statement] = STATE(754),
    [sym_map_statement] = STATE(754),
    [sym_keep_statement] = STATE(754),
    [sym_drop_statement] = STATE(754),
    [sym_sort_statement] = STATE(754),
    [sym_repeat_statement] = STATE(754),
    [sym_invalid_flow_reserved_statement] = STATE(754),
    [sym__query_directive_key] = STATE(1034),
    [sym__route_directive_key] = STATE(1034),
    [sym_directive_key] = STATE(700),
    [sym_role] = STATE(700),
    [sym__flow_reserved_word] = STATE(700),
    [sym__collection_binding_word] = STATE(700),
    [sym__agic_reserved_word] = STATE(700),
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
  [5] = {
    [sym__flow_operation] = STATE(225),
    [sym__collection_operation] = STATE(225),
    [sym_let_statement] = STATE(225),
    [sym_exec_statement] = STATE(225),
    [sym_spawn_statement] = STATE(225),
    [sym__invalid_exec_binding] = STATE(226),
    [sym_run_statement] = STATE(225),
    [sym_implicit_run_statement] = STATE(225),
    [sym__implicit_run_line] = STATE(94),
    [sym_seek_statement] = STATE(225),
    [sym_ask_statement] = STATE(225),
    [sym_generate_statement] = STATE(225),
    [sym_reduce_statement] = STATE(225),
    [sym_map_statement] = STATE(225),
    [sym_keep_statement] = STATE(225),
    [sym_drop_statement] = STATE(225),
    [sym_sort_statement] = STATE(225),
    [sym_repeat_statement] = STATE(225),
    [sym_invalid_flow_reserved_statement] = STATE(225),
    [sym__query_directive_key] = STATE(1034),
    [sym__route_directive_key] = STATE(1034),
    [sym_directive_key] = STATE(772),
    [sym_role] = STATE(772),
    [sym__flow_reserved_word] = STATE(772),
    [sym__collection_binding_word] = STATE(772),
    [sym__agic_reserved_word] = STATE(772),
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
    [sym_flow_exec_keyword] = ACTIONS(93),
    [sym_flow_spawn_keyword] = ACTIONS(95),
    [sym_flow_let_keyword] = ACTIONS(97),
    [sym_flow_seek_keyword] = ACTIONS(99),
    [sym_flow_ask_keyword] = ACTIONS(101),
    [sym_flow_scatter_keyword] = ACTIONS(87),
    [sym_flow_storm_keyword] = ACTIONS(87),
    [sym_flow_generate_keyword] = ACTIONS(103),
    [sym_flow_gather_keyword] = ACTIONS(87),
    [sym_flow_settle_keyword] = ACTIONS(87),
    [sym_flow_reduce_keyword] = ACTIONS(105),
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
  [0] = 17,
    ACTIONS(121), 1,
      sym_flow_run_keyword,
    ACTIONS(123), 1,
      sym_flow_spawn_keyword,
    ACTIONS(125), 1,
      sym_flow_seek_keyword,
    ACTIONS(127), 1,
      sym_flow_ask_keyword,
    ACTIONS(129), 1,
      sym_flow_generate_keyword,
    ACTIONS(131), 1,
      sym_flow_reduce_keyword,
    ACTIONS(133), 1,
      sym_flow_map_keyword,
    ACTIONS(135), 1,
      sym_flow_keep_keyword,
    ACTIONS(137), 1,
      sym_flow_drop_keyword,
    ACTIONS(139), 1,
      sym_flow_sort_keyword,
    ACTIONS(141), 1,
      sym_flow_repeat_keyword,
    ACTIONS(143), 1,
      sym_snake_name,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(147), 1,
      sym__exec_binding_start,
    STATE(1111), 1,
      sym_local_name,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(750), 13,
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
  [65] = 17,
    ACTIONS(143), 1,
      sym_snake_name,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(149), 1,
      sym_flow_run_keyword,
    ACTIONS(151), 1,
      sym_flow_spawn_keyword,
    ACTIONS(153), 1,
      sym_flow_seek_keyword,
    ACTIONS(155), 1,
      sym_flow_ask_keyword,
    ACTIONS(157), 1,
      sym_flow_generate_keyword,
    ACTIONS(159), 1,
      sym_flow_reduce_keyword,
    ACTIONS(161), 1,
      sym_flow_map_keyword,
    ACTIONS(163), 1,
      sym_flow_keep_keyword,
    ACTIONS(165), 1,
      sym_flow_drop_keyword,
    ACTIONS(167), 1,
      sym_flow_sort_keyword,
    ACTIONS(169), 1,
      sym_flow_repeat_keyword,
    ACTIONS(171), 1,
      sym__exec_binding_start,
    STATE(1185), 1,
      sym_local_name,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(233), 13,
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
  [130] = 17,
    ACTIONS(143), 1,
      sym_snake_name,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_flow_run_keyword,
    ACTIONS(175), 1,
      sym_flow_spawn_keyword,
    ACTIONS(177), 1,
      sym_flow_seek_keyword,
    ACTIONS(179), 1,
      sym_flow_ask_keyword,
    ACTIONS(181), 1,
      sym_flow_generate_keyword,
    ACTIONS(183), 1,
      sym_flow_reduce_keyword,
    ACTIONS(185), 1,
      sym_flow_map_keyword,
    ACTIONS(187), 1,
      sym_flow_keep_keyword,
    ACTIONS(189), 1,
      sym_flow_drop_keyword,
    ACTIONS(191), 1,
      sym_flow_sort_keyword,
    ACTIONS(193), 1,
      sym_flow_repeat_keyword,
    ACTIONS(195), 1,
      sym__exec_binding_start,
    STATE(1227), 1,
      sym_local_name,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(765), 13,
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
  [195] = 12,
    ACTIONS(199), 1,
      anon_sym_tool,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    STATE(123), 1,
      sym__unroled_message_line,
    STATE(803), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(197), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(777), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(880), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1034), 2,
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
  [245] = 12,
    ACTIONS(53), 1,
      sym_pass_keyword,
    ACTIONS(199), 1,
      anon_sym_tool,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    STATE(123), 1,
      sym__unroled_message_line,
    STATE(803), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(197), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(777), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(880), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(1034), 2,
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
  [295] = 13,
    ACTIONS(205), 1,
      sym_with_keyword,
    ACTIONS(207), 1,
      sym_struct_keyword,
    ACTIONS(209), 1,
      sym_psyche_keyword,
    ACTIONS(211), 1,
      sym_skill_keyword,
    ACTIONS(213), 1,
      sym_service_keyword,
    ACTIONS(215), 1,
      sym_prompt_keyword,
    ACTIONS(217), 1,
      sym_context_keyword,
    ACTIONS(219), 1,
      sym_instruct_keyword,
    ACTIONS(221), 1,
      sym_agic_keyword,
    ACTIONS(223), 1,
      sym_task_keyword,
    ACTIONS(225), 1,
      sym_chore_keyword,
    ACTIONS(227), 1,
      sym_flow_keyword,
    STATE(559), 12,
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
  [346] = 17,
    ACTIONS(121), 1,
      sym_flow_run_keyword,
    ACTIONS(125), 1,
      sym_flow_seek_keyword,
    ACTIONS(127), 1,
      sym_flow_ask_keyword,
    ACTIONS(135), 1,
      sym_flow_keep_keyword,
    ACTIONS(137), 1,
      sym_flow_drop_keyword,
    ACTIONS(139), 1,
      sym_flow_sort_keyword,
    ACTIONS(141), 1,
      sym_flow_repeat_keyword,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(231), 1,
      sym_text_line,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(235), 1,
      sym__exec_binding_start,
    ACTIONS(237), 1,
      sym__collection_binding_start,
    ACTIONS(239), 1,
      sym__spawn_binding_start,
    STATE(594), 1,
      sym_text_inline,
    STATE(689), 1,
      sym_line_end,
    STATE(743), 1,
      sym_text_block,
    STATE(595), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [405] = 17,
    ACTIONS(149), 1,
      sym_flow_run_keyword,
    ACTIONS(153), 1,
      sym_flow_seek_keyword,
    ACTIONS(155), 1,
      sym_flow_ask_keyword,
    ACTIONS(163), 1,
      sym_flow_keep_keyword,
    ACTIONS(165), 1,
      sym_flow_drop_keyword,
    ACTIONS(167), 1,
      sym_flow_sort_keyword,
    ACTIONS(169), 1,
      sym_flow_repeat_keyword,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_text_line,
    ACTIONS(243), 1,
      sym__exec_binding_start,
    ACTIONS(245), 1,
      sym__collection_binding_start,
    ACTIONS(247), 1,
      sym__spawn_binding_start,
    STATE(269), 1,
      sym_text_inline,
    STATE(338), 1,
      sym_text_block,
    STATE(837), 1,
      sym_line_end,
    STATE(270), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [464] = 17,
    ACTIONS(173), 1,
      sym_flow_run_keyword,
    ACTIONS(177), 1,
      sym_flow_seek_keyword,
    ACTIONS(179), 1,
      sym_flow_ask_keyword,
    ACTIONS(187), 1,
      sym_flow_keep_keyword,
    ACTIONS(189), 1,
      sym_flow_drop_keyword,
    ACTIONS(191), 1,
      sym_flow_sort_keyword,
    ACTIONS(193), 1,
      sym_flow_repeat_keyword,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(249), 1,
      sym_text_line,
    ACTIONS(251), 1,
      sym__exec_binding_start,
    ACTIONS(253), 1,
      sym__collection_binding_start,
    ACTIONS(255), 1,
      sym__spawn_binding_start,
    STATE(632), 1,
      sym_text_block,
    STATE(808), 1,
      sym_text_inline,
    STATE(833), 1,
      sym_line_end,
    STATE(809), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [523] = 7,
    ACTIONS(257), 1,
      anon_sym_lanes,
    ACTIONS(265), 1,
      sym_recall_keyword,
    STATE(881), 1,
      sym__query_directive_key,
    STATE(1166), 1,
      sym__route_directive_key,
    ACTIONS(261), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(263), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(259), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [552] = 7,
    ACTIONS(267), 1,
      anon_sym_lanes,
    ACTIONS(271), 1,
      sym_recall_keyword,
    STATE(866), 1,
      sym__query_directive_key,
    STATE(1208), 1,
      sym__route_directive_key,
    ACTIONS(261), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(269), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(259), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [581] = 6,
    ACTIONS(37), 1,
      sym_flow_generate_keyword,
    ACTIONS(39), 1,
      sym_flow_reduce_keyword,
    ACTIONS(41), 1,
      sym_flow_map_keyword,
    STATE(623), 1,
      sym__collection_binding_word,
    ACTIONS(273), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(622), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [607] = 6,
    ACTIONS(103), 1,
      sym_flow_generate_keyword,
    ACTIONS(105), 1,
      sym_flow_reduce_keyword,
    ACTIONS(107), 1,
      sym_flow_map_keyword,
    STATE(802), 1,
      sym__collection_binding_word,
    ACTIONS(275), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(283), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [633] = 2,
    ACTIONS(279), 4,
      sym_newline,
      sym__exec_binding_start,
      sym__collection_binding_start,
      sym__spawn_binding_start,
    ACTIONS(277), 9,
      sym__inline_comment,
      sym_flow_run_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_sort_keyword,
      sym_flow_repeat_keyword,
      sym_text_line,
  [651] = 6,
    ACTIONS(71), 1,
      sym_flow_generate_keyword,
    ACTIONS(73), 1,
      sym_flow_reduce_keyword,
    ACTIONS(75), 1,
      sym_flow_map_keyword,
    STATE(730), 1,
      sym__collection_binding_word,
    ACTIONS(281), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(822), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [677] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(283), 1,
      sym_flow_if_keyword,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    STATE(432), 1,
      sym__named_if_complement,
    STATE(867), 1,
      sym__inline_if_complement,
    STATE(878), 1,
      sym__if_complements,
    STATE(1039), 1,
      sym__lanes_complement,
    STATE(1040), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [710] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(283), 1,
      sym_flow_if_keyword,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    STATE(432), 1,
      sym__named_if_complement,
    STATE(867), 1,
      sym__inline_if_complement,
    STATE(879), 1,
      sym__if_complements,
    STATE(1039), 1,
      sym__lanes_complement,
    STATE(1042), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [743] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(289), 1,
      sym_flow_if_keyword,
    STATE(382), 1,
      sym__named_if_complement,
    STATE(769), 1,
      sym__inline_if_complement,
    STATE(770), 1,
      sym__if_complements,
    STATE(944), 1,
      sym__lanes_complement,
    STATE(945), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [776] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(291), 1,
      sym_flow_if_keyword,
    STATE(237), 1,
      sym__inline_if_complement,
    STATE(239), 1,
      sym__if_complements,
    STATE(448), 1,
      sym__named_if_complement,
    STATE(1003), 1,
      sym__lanes_complement,
    STATE(1005), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [809] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(289), 1,
      sym_flow_if_keyword,
    STATE(382), 1,
      sym__named_if_complement,
    STATE(769), 1,
      sym__inline_if_complement,
    STATE(771), 1,
      sym__if_complements,
    STATE(944), 1,
      sym__lanes_complement,
    STATE(946), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [842] = 10,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(291), 1,
      sym_flow_if_keyword,
    STATE(237), 1,
      sym__inline_if_complement,
    STATE(238), 1,
      sym__if_complements,
    STATE(448), 1,
      sym__named_if_complement,
    STATE(1003), 1,
      sym__lanes_complement,
    STATE(1004), 1,
      sym_position,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(287), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [875] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1310), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [899] = 10,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_newline,
    STATE(429), 1,
      sym__lanes_complement,
    STATE(775), 1,
      sym__runnable_complements,
    STATE(799), 1,
      sym_inline_agic,
    STATE(1033), 1,
      sym__named_using_complement,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [931] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1110), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [955] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1280), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [979] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1287), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1003] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1356), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1027] = 6,
    ACTIONS(309), 1,
      sym_pascal_name,
    STATE(470), 1,
      sym_base_type,
    STATE(939), 1,
      sym_type,
    STATE(1105), 1,
      sym_type_name,
    STATE(1104), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(307), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1051] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1253), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1075] = 6,
    ACTIONS(309), 1,
      sym_pascal_name,
    STATE(470), 1,
      sym_base_type,
    STATE(984), 1,
      sym_type,
    STATE(1105), 1,
      sym_type_name,
    STATE(1104), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(307), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1099] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1292), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1123] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1182), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1147] = 10,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(311), 1,
      sym_arrow,
    ACTIONS(313), 1,
      sym_colon,
    STATE(380), 1,
      sym__lanes_complement,
    STATE(767), 1,
      sym__runnable_complements,
    STATE(768), 1,
      sym_inline_agic,
    STATE(943), 1,
      sym__named_using_complement,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [1179] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1298), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1203] = 10,
    ACTIONS(285), 1,
      sym_flow_in_keyword,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym_arrow,
    ACTIONS(317), 1,
      sym_colon,
    STATE(235), 1,
      sym__runnable_complements,
    STATE(236), 1,
      sym_inline_agic,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(1000), 1,
      sym__named_using_complement,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [1235] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1249), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1259] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1259), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1283] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1264), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1307] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1255), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1331] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1250), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1355] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1275), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1379] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type_name,
    STATE(1276), 1,
      sym_type,
    STATE(591), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1403] = 9,
    ACTIONS(319), 1,
      sym_blank_line,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(323), 1,
      sym__dedent,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    STATE(445), 1,
      sym_property,
    STATE(1304), 1,
      sym_cap_body,
    STATE(1305), 1,
      sym__cap_text_body,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1432] = 9,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(329), 1,
      sym_blank_line,
    ACTIONS(331), 1,
      sym__dedent,
    STATE(445), 1,
      sym_property,
    STATE(1305), 1,
      sym__cap_text_body,
    STATE(1350), 1,
      sym_cap_body,
    STATE(50), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1461] = 9,
    ACTIONS(319), 1,
      sym_blank_line,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(333), 1,
      sym__dedent,
    STATE(445), 1,
      sym_property,
    STATE(1273), 1,
      sym_cap_body,
    STATE(1305), 1,
      sym__cap_text_body,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1490] = 9,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(335), 1,
      sym_blank_line,
    ACTIONS(337), 1,
      sym__dedent,
    STATE(445), 1,
      sym_property,
    STATE(1305), 1,
      sym__cap_text_body,
    STATE(1318), 1,
      sym_cap_body,
    STATE(48), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1519] = 8,
    ACTIONS(339), 1,
      sym_flow_if_keyword,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    STATE(237), 1,
      sym__inline_if_complement,
    STATE(238), 1,
      sym__if_complements,
    STATE(448), 1,
      sym__named_if_complement,
    STATE(1003), 1,
      sym__lanes_complement,
    STATE(1004), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1545] = 8,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(347), 1,
      sym__other_integer_literal,
    ACTIONS(349), 1,
      sym_flow_windowing_keyword,
    ACTIONS(351), 1,
      sym_colon,
    STATE(1098), 1,
      sym__repeat_count_complement,
    STATE(1228), 1,
      sym__window_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [1571] = 8,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_colon,
    STATE(134), 1,
      sym__reduce_inline_block,
    STATE(714), 1,
      sym__named_using_complement,
    STATE(766), 1,
      sym__reduce_inline_line,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [1597] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(357), 1,
      sym_flow_if_keyword,
    STATE(432), 1,
      sym__named_if_complement,
    STATE(867), 1,
      sym__inline_if_complement,
    STATE(878), 1,
      sym__if_complements,
    STATE(1039), 1,
      sym__lanes_complement,
    STATE(1040), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1623] = 7,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(359), 1,
      sym_blank_line,
    ACTIONS(361), 1,
      sym__dedent,
    STATE(1307), 1,
      sym__cap_text_body,
    STATE(63), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1647] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(357), 1,
      sym_flow_if_keyword,
    STATE(432), 1,
      sym__named_if_complement,
    STATE(867), 1,
      sym__inline_if_complement,
    STATE(879), 1,
      sym__if_complements,
    STATE(1039), 1,
      sym__lanes_complement,
    STATE(1042), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1673] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(382), 1,
      sym__named_if_complement,
    STATE(769), 1,
      sym__inline_if_complement,
    STATE(770), 1,
      sym__if_complements,
    STATE(944), 1,
      sym__lanes_complement,
    STATE(945), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1699] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(382), 1,
      sym__named_if_complement,
    STATE(769), 1,
      sym__inline_if_complement,
    STATE(771), 1,
      sym__if_complements,
    STATE(944), 1,
      sym__lanes_complement,
    STATE(946), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1725] = 8,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(347), 1,
      sym__other_integer_literal,
    ACTIONS(349), 1,
      sym_flow_windowing_keyword,
    ACTIONS(365), 1,
      sym_colon,
    STATE(1047), 1,
      sym__repeat_count_complement,
    STATE(1286), 1,
      sym__window_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [1751] = 9,
    ACTIONS(311), 1,
      sym_arrow,
    ACTIONS(313), 1,
      sym_colon,
    ACTIONS(367), 1,
      sym__inline_comment,
    ACTIONS(369), 1,
      sym_snake_name,
    ACTIONS(371), 1,
      sym_text_line,
    ACTIONS(373), 1,
      sym_newline,
    STATE(764), 1,
      sym_inline_agic,
    STATE(829), 1,
      sym_line_end,
    STATE(938), 1,
      sym_runnable,
  [1779] = 8,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(375), 1,
      sym_arrow,
    ACTIONS(377), 1,
      sym_colon,
    STATE(150), 1,
      sym__reduce_inline_block,
    STATE(234), 1,
      sym__reduce_inline_line,
    STATE(786), 1,
      sym__named_using_complement,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [1805] = 7,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(379), 1,
      sym_blank_line,
    ACTIONS(381), 1,
      sym__dedent,
    STATE(1233), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1829] = 7,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(381), 1,
      sym__dedent,
    ACTIONS(383), 1,
      sym_blank_line,
    STATE(1233), 1,
      sym__cap_text_body,
    STATE(65), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1853] = 7,
    ACTIONS(321), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    ACTIONS(327), 1,
      sym__cap_text_start,
    ACTIONS(379), 1,
      sym_blank_line,
    ACTIONS(385), 1,
      sym__dedent,
    STATE(1357), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1877] = 8,
    ACTIONS(339), 1,
      sym_flow_if_keyword,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    STATE(237), 1,
      sym__inline_if_complement,
    STATE(239), 1,
      sym__if_complements,
    STATE(448), 1,
      sym__named_if_complement,
    STATE(1003), 1,
      sym__lanes_complement,
    STATE(1005), 1,
      sym_position,
    ACTIONS(343), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1903] = 9,
    ACTIONS(315), 1,
      sym_arrow,
    ACTIONS(317), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    ACTIONS(387), 1,
      sym__inline_comment,
    ACTIONS(389), 1,
      sym_text_line,
    ACTIONS(391), 1,
      sym_newline,
    STATE(232), 1,
      sym_inline_agic,
    STATE(290), 1,
      sym_line_end,
    STATE(996), 1,
      sym_runnable,
  [1931] = 9,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(395), 1,
      sym_text_line,
    ACTIONS(397), 1,
      sym_newline,
    STATE(645), 1,
      sym_line_end,
    STATE(731), 1,
      sym_inline_agic,
    STATE(990), 1,
      sym_runnable,
  [1959] = 8,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(347), 1,
      sym__other_integer_literal,
    ACTIONS(349), 1,
      sym_flow_windowing_keyword,
    ACTIONS(399), 1,
      sym_colon,
    STATE(1101), 1,
      sym__repeat_count_complement,
    STATE(1361), 1,
      sym__window_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [1985] = 8,
    ACTIONS(299), 1,
      sym_flow_using_keyword,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(401), 1,
      sym_arrow,
    ACTIONS(403), 1,
      sym_colon,
    STATE(98), 1,
      sym__reduce_inline_block,
    STATE(760), 1,
      sym__reduce_inline_line,
    STATE(774), 1,
      sym__named_using_complement,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [2011] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(731), 1,
      sym_inline_agic,
    STATE(990), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2034] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(405), 1,
      sym_blank_line,
    STATE(78), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(172), 1,
      sym__implicit_run_line,
    ACTIONS(407), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2053] = 5,
    ACTIONS(409), 1,
      sym_blank_line,
    ACTIONS(412), 1,
      sym__comment_start,
    ACTIONS(417), 1,
      sym__line_start,
    ACTIONS(415), 2,
      sym__dedent,
      sym__until_start,
    STATE(73), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2072] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym_arrow,
    ACTIONS(317), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(230), 1,
      sym_inline_agic,
    STATE(994), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2095] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym_arrow,
    ACTIONS(317), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(231), 1,
      sym_inline_agic,
    STATE(995), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2118] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym_arrow,
    ACTIONS(317), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(232), 1,
      sym_inline_agic,
    STATE(996), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2141] = 5,
    ACTIONS(420), 1,
      sym_blank_line,
    ACTIONS(423), 1,
      sym__comment_start,
    ACTIONS(428), 1,
      sym__directive_start,
    ACTIONS(426), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2160] = 5,
    ACTIONS(431), 1,
      sym_blank_line,
    ACTIONS(436), 1,
      sym__flow_raw_text,
    STATE(78), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(172), 1,
      sym__implicit_run_line,
    ACTIONS(434), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2179] = 5,
    ACTIONS(439), 1,
      sym_blank_line,
    ACTIONS(442), 1,
      sym__comment_start,
    ACTIONS(447), 1,
      sym__line_start,
    ACTIONS(445), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2198] = 5,
    ACTIONS(450), 1,
      sym_blank_line,
    ACTIONS(452), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__directive_start,
    ACTIONS(454), 2,
      sym__dedent,
      sym__line_start,
    STATE(96), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2217] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(311), 1,
      sym_arrow,
    ACTIONS(313), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(762), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2240] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(723), 1,
      sym_inline_agic,
    STATE(988), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2263] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    STATE(235), 1,
      sym__runnable_complements,
    STATE(236), 1,
      sym_inline_agic,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(1000), 1,
      sym__named_using_complement,
  [2288] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    STATE(429), 1,
      sym__lanes_complement,
    STATE(558), 1,
      sym__runnable_complements,
    STATE(799), 1,
      sym_inline_agic,
    STATE(1033), 1,
      sym__named_using_complement,
  [2313] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    STATE(380), 1,
      sym__lanes_complement,
    STATE(767), 1,
      sym__runnable_complements,
    STATE(768), 1,
      sym_inline_agic,
    STATE(943), 1,
      sym__named_using_complement,
  [2338] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    STATE(236), 1,
      sym_inline_agic,
    STATE(251), 1,
      sym__runnable_complements,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(1000), 1,
      sym__named_using_complement,
  [2363] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(726), 1,
      sym_inline_agic,
    STATE(989), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2386] = 5,
    ACTIONS(472), 1,
      sym_blank_line,
    ACTIONS(474), 1,
      sym__comment_start,
    ACTIONS(478), 1,
      sym__line_start,
    ACTIONS(476), 2,
      sym__dedent,
      sym__until_start,
    STATE(73), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2405] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(311), 1,
      sym_arrow,
    ACTIONS(313), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(763), 1,
      sym_inline_agic,
    STATE(937), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2428] = 6,
    ACTIONS(480), 1,
      sym_blank_line,
    ACTIONS(483), 1,
      sym__comment_start,
    ACTIONS(488), 1,
      sym__line_start,
    STATE(445), 1,
      sym_property,
    ACTIONS(486), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2449] = 7,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(311), 1,
      sym_arrow,
    ACTIONS(313), 1,
      sym_colon,
    ACTIONS(369), 1,
      sym_snake_name,
    STATE(764), 1,
      sym_inline_agic,
    STATE(938), 1,
      sym_runnable,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [2472] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    STATE(380), 1,
      sym__lanes_complement,
    STATE(768), 1,
      sym_inline_agic,
    STATE(784), 1,
      sym__runnable_complements,
    STATE(943), 1,
      sym__named_using_complement,
  [2497] = 5,
    ACTIONS(474), 1,
      sym__comment_start,
    ACTIONS(478), 1,
      sym__line_start,
    ACTIONS(491), 1,
      sym_blank_line,
    ACTIONS(493), 2,
      sym__dedent,
      sym__until_start,
    STATE(88), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2516] = 5,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    ACTIONS(495), 1,
      sym_blank_line,
    STATE(72), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(172), 1,
      sym__implicit_run_line,
    ACTIONS(497), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2535] = 8,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    STATE(429), 1,
      sym__lanes_complement,
    STATE(775), 1,
      sym__runnable_complements,
    STATE(799), 1,
      sym_inline_agic,
    STATE(1033), 1,
      sym__named_using_complement,
  [2560] = 5,
    ACTIONS(452), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__directive_start,
    ACTIONS(499), 1,
      sym_blank_line,
    ACTIONS(501), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2579] = 6,
    ACTIONS(456), 1,
      sym__directive_start,
    ACTIONS(503), 1,
      sym__line_start,
    STATE(80), 1,
      sym_directive,
    STATE(148), 1,
      sym_message,
    STATE(646), 1,
      sym__directives,
    STATE(1284), 2,
      sym_messages,
      sym__pass_statement,
  [2599] = 6,
    ACTIONS(505), 1,
      sym_blank_line,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(509), 1,
      sym__dedent,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(227), 1,
      sym__from_complement,
    STATE(228), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2619] = 5,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    ACTIONS(513), 1,
      sym_blank_line,
    STATE(106), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(491), 1,
      sym__implicit_run_line,
    ACTIONS(407), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2637] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 1,
      sym_blank_line,
    STATE(143), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2655] = 5,
    ACTIONS(493), 1,
      sym__dedent,
    ACTIONS(519), 1,
      sym_blank_line,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(523), 1,
      sym__line_start,
    STATE(135), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2673] = 5,
    ACTIONS(525), 1,
      sym_blank_line,
    ACTIONS(528), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym__dedent,
    ACTIONS(533), 1,
      sym__line_start,
    STATE(102), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2691] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(536), 1,
      sym_blank_line,
    ACTIONS(538), 1,
      sym__dedent,
    ACTIONS(540), 1,
      sym__line_start,
    STATE(102), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2709] = 5,
    ACTIONS(542), 1,
      sym_blank_line,
    ACTIONS(547), 1,
      sym__agic_raw_text,
    STATE(104), 1,
      aux_sym_unroled_message_repeat1,
    STATE(244), 1,
      sym__unroled_message_line,
    ACTIONS(545), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2727] = 6,
    ACTIONS(550), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(113), 1,
      sym_directive,
    STATE(924), 1,
      sym__directives,
    STATE(1353), 2,
      sym_statements,
      sym__pass_statement,
  [2747] = 5,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(557), 1,
      sym__flow_raw_text,
    STATE(106), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(491), 1,
      sym__implicit_run_line,
    ACTIONS(434), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2765] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(540), 1,
      sym__line_start,
    ACTIONS(560), 1,
      sym_blank_line,
    ACTIONS(562), 1,
      sym__dedent,
    STATE(141), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2783] = 5,
    ACTIONS(566), 1,
      sym_blank_line,
    ACTIONS(568), 1,
      sym__comment_start,
    ACTIONS(570), 1,
      sym__indent,
    ACTIONS(564), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(132), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2801] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(572), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym__dedent,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(427), 1,
      sym__until_complement,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2821] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(578), 1,
      sym_blank_line,
    ACTIONS(580), 1,
      sym__dedent,
    STATE(439), 1,
      sym__until_complement,
    STATE(440), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2841] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(582), 1,
      sym_blank_line,
    ACTIONS(584), 1,
      sym__dedent,
    STATE(442), 1,
      sym__until_complement,
    STATE(443), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2861] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(586), 1,
      sym_blank_line,
    ACTIONS(588), 1,
      sym__dedent,
    STATE(456), 1,
      sym__until_complement,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2881] = 5,
    ACTIONS(454), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    ACTIONS(590), 1,
      sym_blank_line,
    ACTIONS(592), 1,
      sym__comment_start,
    STATE(116), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2899] = 4,
    ACTIONS(596), 1,
      sym_blank_line,
    ACTIONS(599), 1,
      sym__comment_start,
    STATE(114), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(594), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2915] = 5,
    ACTIONS(493), 1,
      sym__until_start,
    ACTIONS(602), 1,
      sym_blank_line,
    ACTIONS(604), 1,
      sym__comment_start,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(118), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2933] = 5,
    ACTIONS(501), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    ACTIONS(592), 1,
      sym__comment_start,
    ACTIONS(608), 1,
      sym_blank_line,
    STATE(119), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2951] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(610), 1,
      sym_blank_line,
    STATE(120), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(502), 1,
      sym__implicit_run_line,
    ACTIONS(497), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2969] = 5,
    ACTIONS(476), 1,
      sym__until_start,
    ACTIONS(604), 1,
      sym__comment_start,
    ACTIONS(606), 1,
      sym__line_start,
    ACTIONS(612), 1,
      sym_blank_line,
    STATE(121), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2987] = 5,
    ACTIONS(426), 1,
      sym__line_start,
    ACTIONS(614), 1,
      sym_blank_line,
    ACTIONS(617), 1,
      sym__comment_start,
    ACTIONS(620), 1,
      sym__directive_start,
    STATE(119), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3005] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(623), 1,
      sym_blank_line,
    STATE(122), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(502), 1,
      sym__implicit_run_line,
    ACTIONS(407), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3023] = 5,
    ACTIONS(415), 1,
      sym__until_start,
    ACTIONS(625), 1,
      sym_blank_line,
    ACTIONS(628), 1,
      sym__comment_start,
    ACTIONS(631), 1,
      sym__line_start,
    STATE(121), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3041] = 5,
    ACTIONS(634), 1,
      sym_blank_line,
    ACTIONS(637), 1,
      sym__flow_raw_text,
    STATE(122), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(502), 1,
      sym__implicit_run_line,
    ACTIONS(434), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [3059] = 5,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    ACTIONS(640), 1,
      sym_blank_line,
    STATE(145), 1,
      aux_sym_unroled_message_repeat1,
    STATE(244), 1,
      sym__unroled_message_line,
    ACTIONS(642), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3077] = 7,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(644), 1,
      sym_text_line,
    STATE(541), 1,
      sym_text_inline,
    STATE(542), 1,
      sym_text_block,
    STATE(747), 1,
      sym_context_body,
    STATE(894), 1,
      sym_line_end,
  [3099] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(175), 1,
      sym__implicit_run_line,
    ACTIONS(407), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3113] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(646), 1,
      sym_blank_line,
    ACTIONS(648), 1,
      sym__dedent,
    ACTIONS(650), 1,
      sym__line_start,
    STATE(147), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3131] = 3,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(175), 1,
      sym__implicit_run_line,
    ACTIONS(652), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3145] = 5,
    ACTIONS(656), 1,
      sym__module_doc_start,
    ACTIONS(658), 1,
      sym__item_doc_start,
    ACTIONS(660), 1,
      sym__param_item_doc_start,
    ACTIONS(654), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(1083), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3163] = 7,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(644), 1,
      sym_text_line,
    STATE(542), 1,
      sym_text_block,
    STATE(578), 1,
      sym_text_inline,
    STATE(748), 1,
      sym_instruct_body,
    STATE(894), 1,
      sym_line_end,
  [3185] = 5,
    ACTIONS(568), 1,
      sym__comment_start,
    ACTIONS(664), 1,
      sym_blank_line,
    ACTIONS(666), 1,
      sym__indent,
    ACTIONS(662), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(165), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3203] = 6,
    ACTIONS(550), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(113), 1,
      sym_directive,
    STATE(975), 1,
      sym__directives,
    STATE(1278), 2,
      sym_statements,
      sym__pass_statement,
  [3223] = 5,
    ACTIONS(568), 1,
      sym__comment_start,
    ACTIONS(670), 1,
      sym_blank_line,
    ACTIONS(672), 1,
      sym__indent,
    ACTIONS(668), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3241] = 5,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    ACTIONS(674), 1,
      sym_blank_line,
    STATE(99), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(491), 1,
      sym__implicit_run_line,
    ACTIONS(497), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3259] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(511), 1,
      sym__from_start,
    ACTIONS(676), 1,
      sym_blank_line,
    ACTIONS(678), 1,
      sym__dedent,
    STATE(385), 1,
      sym__from_complement,
    STATE(386), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3279] = 5,
    ACTIONS(476), 1,
      sym__dedent,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(523), 1,
      sym__line_start,
    ACTIONS(680), 1,
      sym_blank_line,
    STATE(167), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3297] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(682), 1,
      sym_blank_line,
    ACTIONS(684), 1,
      sym__dedent,
    STATE(402), 1,
      sym__until_complement,
    STATE(403), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3317] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(686), 1,
      sym_blank_line,
    ACTIONS(688), 1,
      sym__dedent,
    STATE(411), 1,
      sym__until_complement,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3337] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(690), 1,
      sym_blank_line,
    ACTIONS(692), 1,
      sym__dedent,
    STATE(413), 1,
      sym__until_complement,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3357] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(694), 1,
      sym_blank_line,
    ACTIONS(696), 1,
      sym__dedent,
    STATE(419), 1,
      sym__until_complement,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3377] = 5,
    ACTIONS(700), 1,
      sym__module_doc_start,
    ACTIONS(702), 1,
      sym__item_doc_start,
    ACTIONS(704), 1,
      sym__param_item_doc_start,
    ACTIONS(698), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(522), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3395] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(536), 1,
      sym_blank_line,
    ACTIONS(540), 1,
      sym__line_start,
    ACTIONS(706), 1,
      sym__dedent,
    STATE(102), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3413] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(540), 1,
      sym__line_start,
    ACTIONS(706), 1,
      sym__dedent,
    ACTIONS(708), 1,
      sym_blank_line,
    STATE(103), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3431] = 5,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      sym_blank_line,
    ACTIONS(715), 1,
      sym__comment_start,
    ACTIONS(718), 1,
      sym__line_start,
    STATE(143), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3449] = 7,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(644), 1,
      sym_text_line,
    STATE(539), 1,
      sym_context_body,
    STATE(541), 1,
      sym_text_inline,
    STATE(542), 1,
      sym_text_block,
    STATE(894), 1,
      sym_line_end,
  [3471] = 5,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    ACTIONS(721), 1,
      sym_blank_line,
    STATE(104), 1,
      aux_sym_unroled_message_repeat1,
    STATE(244), 1,
      sym__unroled_message_line,
    ACTIONS(723), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3489] = 4,
    STATE(545), 1,
      sym_recall_source,
    STATE(1073), 1,
      sym_recall_value,
    ACTIONS(725), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(727), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3505] = 5,
    ACTIONS(729), 1,
      sym_blank_line,
    ACTIONS(732), 1,
      sym__comment_start,
    ACTIONS(735), 1,
      sym__dedent,
    ACTIONS(737), 1,
      sym__line_start,
    STATE(147), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3523] = 5,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(650), 1,
      sym__line_start,
    ACTIONS(740), 1,
      sym_blank_line,
    ACTIONS(742), 1,
      sym__dedent,
    STATE(126), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3541] = 6,
    ACTIONS(456), 1,
      sym__directive_start,
    ACTIONS(503), 1,
      sym__line_start,
    STATE(80), 1,
      sym_directive,
    STATE(148), 1,
      sym_message,
    STATE(892), 1,
      sym__directives,
    STATE(1241), 2,
      sym_messages,
      sym__pass_statement,
  [3561] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(511), 1,
      sym__from_start,
    ACTIONS(744), 1,
      sym_blank_line,
    ACTIONS(746), 1,
      sym__dedent,
    STATE(451), 1,
      sym__from_complement,
    STATE(452), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3581] = 7,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(644), 1,
      sym_text_line,
    STATE(542), 1,
      sym_text_block,
    STATE(572), 1,
      sym_instruct_body,
    STATE(578), 1,
      sym_text_inline,
    STATE(894), 1,
      sym_line_end,
  [3603] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(748), 1,
      sym_blank_line,
    ACTIONS(750), 1,
      sym__dedent,
    STATE(468), 1,
      sym__until_complement,
    STATE(469), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3623] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(752), 1,
      sym_blank_line,
    ACTIONS(754), 1,
      sym__dedent,
    STATE(477), 1,
      sym__until_complement,
    STATE(478), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3643] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(756), 1,
      sym_blank_line,
    ACTIONS(758), 1,
      sym__dedent,
    STATE(479), 1,
      sym__until_complement,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3663] = 6,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__until_start,
    ACTIONS(760), 1,
      sym_blank_line,
    ACTIONS(762), 1,
      sym__dedent,
    STATE(485), 1,
      sym__until_complement,
    STATE(486), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3683] = 5,
    ACTIONS(766), 1,
      sym__module_doc_start,
    ACTIONS(768), 1,
      sym__item_doc_start,
    ACTIONS(770), 1,
      sym__param_item_doc_start,
    ACTIONS(764), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(322), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3701] = 5,
    ACTIONS(774), 1,
      sym__module_doc_start,
    ACTIONS(776), 1,
      sym__item_doc_start,
    ACTIONS(778), 1,
      sym__param_item_doc_start,
    ACTIONS(772), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(332), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3719] = 5,
    ACTIONS(782), 1,
      sym__module_doc_start,
    ACTIONS(784), 1,
      sym__item_doc_start,
    ACTIONS(786), 1,
      sym__param_item_doc_start,
    ACTIONS(780), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(652), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3737] = 5,
    ACTIONS(790), 1,
      sym__module_doc_start,
    ACTIONS(792), 1,
      sym__item_doc_start,
    ACTIONS(794), 1,
      sym__param_item_doc_start,
    ACTIONS(788), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(660), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3755] = 5,
    ACTIONS(798), 1,
      sym__module_doc_start,
    ACTIONS(800), 1,
      sym__item_doc_start,
    ACTIONS(802), 1,
      sym__param_item_doc_start,
    ACTIONS(796), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(911), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3773] = 5,
    ACTIONS(806), 1,
      sym__module_doc_start,
    ACTIONS(808), 1,
      sym__item_doc_start,
    ACTIONS(810), 1,
      sym__param_item_doc_start,
    ACTIONS(804), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(916), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3791] = 5,
    ACTIONS(814), 1,
      sym__module_doc_start,
    ACTIONS(816), 1,
      sym__item_doc_start,
    ACTIONS(818), 1,
      sym__param_item_doc_start,
    ACTIONS(812), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(670), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3809] = 5,
    ACTIONS(822), 1,
      sym__module_doc_start,
    ACTIONS(824), 1,
      sym__item_doc_start,
    ACTIONS(826), 1,
      sym__param_item_doc_start,
    ACTIONS(820), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(348), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3827] = 4,
    STATE(545), 1,
      sym_recall_source,
    STATE(949), 1,
      sym_recall_value,
    ACTIONS(725), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(727), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3843] = 5,
    ACTIONS(568), 1,
      sym__comment_start,
    ACTIONS(670), 1,
      sym_blank_line,
    ACTIONS(830), 1,
      sym__indent,
    ACTIONS(828), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3861] = 5,
    ACTIONS(834), 1,
      sym__module_doc_start,
    ACTIONS(836), 1,
      sym__item_doc_start,
    ACTIONS(838), 1,
      sym__param_item_doc_start,
    ACTIONS(832), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(579), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3879] = 5,
    ACTIONS(415), 1,
      sym__dedent,
    ACTIONS(840), 1,
      sym_blank_line,
    ACTIONS(843), 1,
      sym__comment_start,
    ACTIONS(846), 1,
      sym__line_start,
    STATE(167), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3897] = 6,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(849), 1,
      sym_flow_by_keyword,
    STATE(262), 1,
      sym__inline_by_complement,
    STATE(263), 1,
      sym__by_complements,
    STATE(454), 1,
      sym__named_by_complement,
    STATE(1016), 1,
      sym__lanes_complement,
  [3916] = 3,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(242), 1,
      sym__implicit_run_line,
    ACTIONS(652), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3929] = 1,
    ACTIONS(851), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3938] = 3,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    STATE(505), 1,
      sym__unroled_message_line,
    ACTIONS(853), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3951] = 1,
    ACTIONS(855), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3960] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(614), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3977] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(699), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3994] = 1,
    ACTIONS(867), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4003] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(869), 1,
      sym_text_line,
    STATE(761), 1,
      sym_line_end,
    STATE(991), 1,
      sym_text_block,
    STATE(1058), 1,
      sym_text_inline,
  [4022] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(705), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4039] = 3,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    STATE(505), 1,
      sym__unroled_message_line,
    ACTIONS(723), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4052] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(681), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4069] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(231), 1,
      sym_text_line,
    ACTIONS(233), 1,
      sym_newline,
    STATE(543), 1,
      sym_text_inline,
    STATE(689), 1,
      sym_line_end,
    STATE(743), 1,
      sym_text_block,
  [4088] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(506), 1,
      sym__implicit_run_line,
    ACTIONS(407), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [4101] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(573), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4118] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_text_line,
    STATE(245), 1,
      sym_text_inline,
    STATE(338), 1,
      sym_text_block,
    STATE(837), 1,
      sym_line_end,
  [4137] = 6,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(871), 1,
      sym_arrow,
    ACTIONS(873), 1,
      sym_colon,
    STATE(150), 1,
      sym__reduce_inline_block,
    STATE(234), 1,
      sym__reduce_inline_line,
    STATE(786), 1,
      sym__named_using_complement,
  [4156] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(231), 1,
      sym_text_line,
    ACTIONS(233), 1,
      sym_newline,
    STATE(619), 1,
      sym_text_inline,
    STATE(689), 1,
      sym_line_end,
    STATE(743), 1,
      sym_text_block,
  [4175] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(548), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4192] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(691), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4209] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_text_line,
    STATE(250), 1,
      sym_text_inline,
    STATE(338), 1,
      sym_text_block,
    STATE(837), 1,
      sym_line_end,
  [4228] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(582), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4245] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(506), 1,
      sym__implicit_run_line,
    ACTIONS(652), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [4258] = 6,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(875), 1,
      sym_flow_by_keyword,
    STATE(240), 1,
      sym__named_by_complement,
    STATE(574), 1,
      sym__inline_by_complement,
    STATE(575), 1,
      sym__by_complements,
    STATE(932), 1,
      sym__lanes_complement,
  [4277] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(890), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4294] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_text_line,
    STATE(281), 1,
      sym_text_inline,
    STATE(338), 1,
      sym_text_block,
    STATE(837), 1,
      sym_line_end,
  [4313] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(231), 1,
      sym_text_line,
    ACTIONS(233), 1,
      sym_newline,
    STATE(550), 1,
      sym_text_inline,
    STATE(689), 1,
      sym_line_end,
    STATE(743), 1,
      sym_text_block,
  [4332] = 6,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(877), 1,
      sym_arrow,
    ACTIONS(879), 1,
      sym_colon,
    STATE(98), 1,
      sym__reduce_inline_block,
    STATE(760), 1,
      sym__reduce_inline_line,
    STATE(774), 1,
      sym__named_using_complement,
  [4351] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(716), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4368] = 4,
    ACTIONS(881), 1,
      sym_array_suffix,
    STATE(204), 1,
      aux_sym_type_repeat1,
    STATE(753), 1,
      sym_type_suffix,
    ACTIONS(883), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4383] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(882), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4400] = 3,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(242), 1,
      sym__implicit_run_line,
    ACTIONS(407), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4413] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(249), 1,
      sym_text_line,
    STATE(632), 1,
      sym_text_block,
    STATE(778), 1,
      sym_text_inline,
    STATE(833), 1,
      sym_line_end,
  [4432] = 6,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(885), 1,
      sym_arrow,
    ACTIONS(887), 1,
      sym_colon,
    STATE(134), 1,
      sym__reduce_inline_block,
    STATE(714), 1,
      sym__named_using_complement,
    STATE(766), 1,
      sym__reduce_inline_line,
  [4451] = 4,
    ACTIONS(145), 1,
      sym_newline,
    STATE(191), 1,
      sym__order_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(889), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4466] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(757), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4483] = 4,
    ACTIONS(881), 1,
      sym_array_suffix,
    STATE(206), 1,
      aux_sym_type_repeat1,
    STATE(753), 1,
      sym_type_suffix,
    ACTIONS(891), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4498] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(249), 1,
      sym_text_line,
    STATE(632), 1,
      sym_text_block,
    STATE(783), 1,
      sym_text_inline,
    STATE(833), 1,
      sym_line_end,
  [4517] = 4,
    ACTIONS(893), 1,
      sym_array_suffix,
    STATE(206), 1,
      aux_sym_type_repeat1,
    STATE(753), 1,
      sym_type_suffix,
    ACTIONS(896), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4532] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(869), 1,
      sym_text_line,
    STATE(761), 1,
      sym_line_end,
    STATE(991), 1,
      sym_text_block,
    STATE(1028), 1,
      sym_text_inline,
  [4551] = 4,
    ACTIONS(145), 1,
      sym_newline,
    STATE(209), 1,
      sym__order_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(889), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4566] = 6,
    ACTIONS(341), 1,
      sym_flow_in_keyword,
    ACTIONS(898), 1,
      sym_flow_by_keyword,
    STATE(388), 1,
      sym__named_by_complement,
    STATE(797), 1,
      sym__inline_by_complement,
    STATE(798), 1,
      sym__by_complements,
    STATE(958), 1,
      sym__lanes_complement,
  [4585] = 4,
    ACTIONS(145), 1,
      sym_newline,
    STATE(168), 1,
      sym__order_complement,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(889), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4600] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(863), 1,
      sym_blank_line,
    ACTIONS(865), 1,
      sym__indent,
    STATE(895), 1,
      sym_agic_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4617] = 6,
    ACTIONS(900), 1,
      sym_arrow,
    ACTIONS(902), 1,
      sym_colon,
    ACTIONS(904), 1,
      sym_lparen,
    ACTIONS(906), 1,
      sym_snake_name,
    STATE(624), 1,
      sym_agic_name,
    STATE(1192), 1,
      sym_params,
  [4636] = 6,
    ACTIONS(904), 1,
      sym_lparen,
    ACTIONS(908), 1,
      sym_arrow,
    ACTIONS(910), 1,
      sym_colon,
    ACTIONS(912), 1,
      sym_snake_name,
    STATE(649), 1,
      sym_flow_name,
    STATE(1124), 1,
      sym_params,
  [4655] = 6,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(914), 1,
      sym__other_integer_literal,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(918), 1,
      sym_colon,
    STATE(1047), 1,
      sym__repeat_count_complement,
    STATE(1286), 1,
      sym__window_complement,
  [4674] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(231), 1,
      sym_text_line,
    ACTIONS(233), 1,
      sym_newline,
    STATE(557), 1,
      sym_text_inline,
    STATE(689), 1,
      sym_line_end,
    STATE(743), 1,
      sym_text_block,
  [4693] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(555), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4710] = 6,
    ACTIONS(229), 1,
      sym__inline_comment,
    ACTIONS(233), 1,
      sym_newline,
    ACTIONS(249), 1,
      sym_text_line,
    STATE(632), 1,
      sym_text_block,
    STATE(820), 1,
      sym_text_inline,
    STATE(833), 1,
      sym_line_end,
  [4729] = 5,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(920), 1,
      sym_blank_line,
    ACTIONS(922), 1,
      sym__indent,
    STATE(587), 1,
      sym_struct_body,
    STATE(488), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4746] = 6,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(914), 1,
      sym__other_integer_literal,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(924), 1,
      sym_colon,
    STATE(1098), 1,
      sym__repeat_count_complement,
    STATE(1228), 1,
      sym__window_complement,
  [4765] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(889), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4782] = 6,
    ACTIONS(345), 1,
      sym__one_integer_literal,
    ACTIONS(914), 1,
      sym__other_integer_literal,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(926), 1,
      sym_colon,
    STATE(1101), 1,
      sym__repeat_count_complement,
    STATE(1361), 1,
      sym__window_complement,
  [4801] = 5,
    ACTIONS(857), 1,
      sym_blank_line,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(861), 1,
      sym__indent,
    STATE(715), 1,
      sym_flow_body,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4818] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(930), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4832] = 4,
    ACTIONS(932), 1,
      sym_blank_line,
    ACTIONS(934), 1,
      sym__comment_start,
    ACTIONS(936), 1,
      sym__reduce_indent,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4846] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4854] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4862] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(942), 1,
      sym_blank_line,
    ACTIONS(944), 1,
      sym__dedent,
    STATE(362), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4876] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(948), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4890] = 5,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(609), 1,
      sym_inline_agic,
    STATE(976), 1,
      sym_runnable,
  [4906] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4914] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4922] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4930] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4938] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4946] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4954] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4962] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4970] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4978] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4986] = 5,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    STATE(610), 1,
      sym_line_end,
    STATE(977), 1,
      sym__lanes_complement,
  [5002] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(978), 1,
      sym__indent,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5016] = 1,
    ACTIONS(867), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5024] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5032] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5040] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5048] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5056] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5064] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5072] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5080] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5088] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5096] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5104] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5112] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5120] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5168] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5176] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 4,
    ACTIONS(1024), 1,
      sym_rparen,
    STATE(613), 1,
      sym_param_name,
    STATE(931), 1,
      sym_param,
    ACTIONS(1022), 2,
      anon_sym__,
      sym_snake_name,
  [5206] = 5,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(556), 1,
      sym_inline_agic,
    STATE(905), 1,
      sym_runnable,
  [5222] = 1,
    ACTIONS(1026), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5230] = 1,
    ACTIONS(1028), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5238] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5246] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5254] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5262] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5270] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5278] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5286] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5294] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(1052), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(1054), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5414] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5494] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5502] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5526] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5534] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5542] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5550] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5558] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5566] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5574] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5582] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5590] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5598] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5606] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5614] = 1,
    ACTIONS(1124), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5622] = 1,
    ACTIONS(1126), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5630] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5638] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5646] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5654] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5662] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5670] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5678] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5686] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5694] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5702] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5710] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5718] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5726] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5734] = 4,
    ACTIONS(594), 1,
      sym__reduce_indent,
    ACTIONS(1154), 1,
      sym_blank_line,
    ACTIONS(1157), 1,
      sym__comment_start,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5748] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5756] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5764] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5772] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5780] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5788] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5796] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5804] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5812] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5820] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5828] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5836] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5844] = 1,
    ACTIONS(279), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5852] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5860] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5868] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5876] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5884] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5892] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5900] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5908] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5916] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5924] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5932] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5940] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5948] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1172), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5962] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1176), 1,
      sym__dedent,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5976] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1180), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5990] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1182), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6004] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_text_line,
    ACTIONS(1188), 1,
      sym_newline,
    STATE(373), 1,
      sym_line_end,
    STATE(626), 1,
      sym__reduce_line,
  [6020] = 4,
    ACTIONS(934), 1,
      sym__comment_start,
    ACTIONS(1190), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__reduce_indent,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6034] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1194), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6048] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1196), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym__indent,
    STATE(376), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6062] = 1,
    ACTIONS(1200), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [6070] = 1,
    ACTIONS(1202), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [6078] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1204), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6092] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1206), 1,
      sym_blank_line,
    ACTIONS(1208), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6106] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1210), 1,
      sym_blank_line,
    ACTIONS(1212), 1,
      sym__indent,
    STATE(379), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6120] = 5,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(762), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
  [6136] = 5,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(764), 1,
      sym_inline_agic,
    STATE(938), 1,
      sym_runnable,
  [6152] = 1,
    ACTIONS(1214), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6160] = 4,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1216), 1,
      sym_snake_name,
    STATE(265), 1,
      sym_agent,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [6174] = 4,
    ACTIONS(934), 1,
      sym__comment_start,
    ACTIONS(1218), 1,
      sym_blank_line,
    ACTIONS(1220), 1,
      sym__reduce_indent,
    STATE(384), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6188] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1186), 1,
      sym_text_line,
    ACTIONS(1188), 1,
      sym_newline,
    STATE(224), 1,
      sym_line_end,
    STATE(560), 1,
      sym__reduce_line,
  [6204] = 5,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(782), 1,
      sym_inline_agic,
    STATE(951), 1,
      sym_runnable,
  [6220] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1222), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6234] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1224), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6248] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1226), 1,
      sym_text_line,
    STATE(224), 1,
      sym_line_end,
    STATE(785), 1,
      sym__reduce_line,
  [6264] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1228), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6278] = 5,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    STATE(790), 1,
      sym_inline_agic,
    STATE(954), 1,
      sym__named_using_complement,
  [6294] = 5,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(792), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [6310] = 5,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(793), 1,
      sym_line_end,
    STATE(955), 1,
      sym__lanes_complement,
  [6326] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1232), 1,
      sym_blank_line,
    ACTIONS(1234), 1,
      sym__indent,
    STATE(404), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6340] = 4,
    ACTIONS(934), 1,
      sym__comment_start,
    ACTIONS(1190), 1,
      sym_blank_line,
    ACTIONS(1236), 1,
      sym__reduce_indent,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6354] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1238), 1,
      sym_blank_line,
    ACTIONS(1240), 1,
      sym__dedent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6368] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1242), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6382] = 5,
    ACTIONS(468), 1,
      sym_arrow,
    ACTIONS(470), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(817), 1,
      sym_inline_agic,
    STATE(976), 1,
      sym_runnable,
  [6398] = 5,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(818), 1,
      sym_line_end,
    STATE(963), 1,
      sym__lanes_complement,
  [6414] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1244), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6428] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1246), 1,
      sym_blank_line,
    ACTIONS(1248), 1,
      sym__dedent,
    STATE(405), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6442] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1226), 1,
      sym_text_line,
    STATE(373), 1,
      sym_line_end,
    STATE(823), 1,
      sym__reduce_line,
  [6458] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1250), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6472] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1252), 1,
      sym_blank_line,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6486] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1256), 1,
      sym_blank_line,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(397), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6500] = 4,
    ACTIONS(594), 1,
      sym__dedent,
    ACTIONS(1260), 1,
      sym_blank_line,
    ACTIONS(1263), 1,
      sym__comment_start,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6514] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1266), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6528] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6542] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1270), 1,
      sym_blank_line,
    ACTIONS(1272), 1,
      sym__dedent,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6556] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6570] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1276), 1,
      sym_blank_line,
    ACTIONS(1278), 1,
      sym__dedent,
    STATE(407), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6584] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1280), 1,
      sym_blank_line,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(408), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6598] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1284), 1,
      sym_blank_line,
    ACTIONS(1286), 1,
      sym__dedent,
    STATE(410), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6612] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6626] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1290), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6640] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1292), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6654] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1294), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6668] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6682] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1298), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6696] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1300), 1,
      sym_blank_line,
    ACTIONS(1302), 1,
      sym__dedent,
    STATE(416), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6710] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6724] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1306), 1,
      sym_blank_line,
    ACTIONS(1308), 1,
      sym__dedent,
    STATE(417), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6738] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6752] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1312), 1,
      sym_blank_line,
    ACTIONS(1314), 1,
      sym__dedent,
    STATE(418), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6766] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6780] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1318), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__dedent,
    STATE(431), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6794] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6808] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6822] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6836] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1328), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6850] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1332), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6864] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6878] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6892] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1338), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6906] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1340), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6920] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1342), 1,
      sym_blank_line,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6934] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1346), 1,
      sym_blank_line,
    ACTIONS(1348), 1,
      sym__dedent,
    STATE(434), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6948] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1350), 1,
      sym_blank_line,
    ACTIONS(1352), 1,
      sym__dedent,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6962] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1354), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6976] = 5,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    STATE(566), 1,
      sym_inline_agic,
    STATE(923), 1,
      sym__named_using_complement,
  [6992] = 5,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(567), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [7008] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7022] = 5,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    STATE(568), 1,
      sym_line_end,
    STATE(926), 1,
      sym__lanes_complement,
  [7038] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1358), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7052] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1360), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7066] = 5,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(230), 1,
      sym_inline_agic,
    STATE(994), 1,
      sym_runnable,
  [7082] = 5,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(232), 1,
      sym_inline_agic,
    STATE(996), 1,
      sym_runnable,
  [7098] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1362), 1,
      sym_blank_line,
    ACTIONS(1364), 1,
      sym__dedent,
    STATE(449), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7112] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1366), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7126] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1368), 1,
      sym_blank_line,
    ACTIONS(1370), 1,
      sym__dedent,
    STATE(450), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7140] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1372), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7154] = 5,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(249), 1,
      sym_inline_agic,
    STATE(1008), 1,
      sym_runnable,
  [7170] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1374), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(455), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7184] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1378), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7198] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_text_line,
    STATE(224), 1,
      sym_line_end,
    STATE(252), 1,
      sym__reduce_line,
  [7214] = 1,
    ACTIONS(1382), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7222] = 5,
    ACTIONS(458), 1,
      sym_flow_using_keyword,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    STATE(256), 1,
      sym_inline_agic,
    STATE(1011), 1,
      sym__named_using_complement,
  [7238] = 5,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(257), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [7254] = 5,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(258), 1,
      sym_line_end,
    STATE(1012), 1,
      sym__lanes_complement,
  [7270] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1386), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7284] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7298] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1390), 1,
      sym_blank_line,
    ACTIONS(1392), 1,
      sym__dedent,
    STATE(458), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7312] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7326] = 5,
    ACTIONS(460), 1,
      sym_arrow,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(278), 1,
      sym_inline_agic,
    STATE(976), 1,
      sym_runnable,
  [7342] = 5,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(974), 1,
      sym_flow_in_keyword,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(279), 1,
      sym_line_end,
    STATE(1022), 1,
      sym__lanes_complement,
  [7358] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1396), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7372] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1398), 1,
      sym_blank_line,
    ACTIONS(1400), 1,
      sym__dedent,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7386] = 5,
    ACTIONS(1184), 1,
      sym__inline_comment,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_text_line,
    STATE(284), 1,
      sym__reduce_line,
    STATE(373), 1,
      sym_line_end,
  [7402] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1402), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7416] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1404), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7430] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1406), 1,
      sym_blank_line,
    ACTIONS(1408), 1,
      sym__dedent,
    STATE(463), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7444] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1410), 1,
      sym_blank_line,
    ACTIONS(1412), 1,
      sym__dedent,
    STATE(465), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7458] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1414), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7472] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1416), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7486] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1418), 1,
      sym_blank_line,
    ACTIONS(1420), 1,
      sym__dedent,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7500] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1422), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7514] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1424), 1,
      sym_blank_line,
    ACTIONS(1426), 1,
      sym__dedent,
    STATE(473), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7528] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1428), 1,
      sym_blank_line,
    ACTIONS(1430), 1,
      sym__dedent,
    STATE(474), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7542] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1432), 1,
      sym_blank_line,
    ACTIONS(1434), 1,
      sym__dedent,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7556] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7570] = 4,
    ACTIONS(1438), 1,
      sym_array_suffix,
    STATE(471), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(883), 2,
      sym_newline,
      sym__inline_comment,
  [7584] = 4,
    ACTIONS(1438), 1,
      sym_array_suffix,
    STATE(481), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(891), 2,
      sym_newline,
      sym__inline_comment,
  [7598] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1440), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7612] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1442), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7626] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1444), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7640] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1446), 1,
      sym_blank_line,
    ACTIONS(1448), 1,
      sym__dedent,
    STATE(482), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7654] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7668] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1452), 1,
      sym_blank_line,
    ACTIONS(1454), 1,
      sym__dedent,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7682] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1456), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7696] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1458), 1,
      sym_blank_line,
    ACTIONS(1460), 1,
      sym__dedent,
    STATE(484), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7710] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1462), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7724] = 4,
    ACTIONS(1464), 1,
      sym_array_suffix,
    STATE(481), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(896), 2,
      sym_newline,
      sym__inline_comment,
  [7738] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1467), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7752] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1469), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7766] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1471), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7780] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1473), 1,
      sym_blank_line,
    ACTIONS(1475), 1,
      sym__dedent,
    STATE(487), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7794] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1477), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7808] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1479), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7822] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1481), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7836] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1483), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7850] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1485), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7864] = 1,
    ACTIONS(855), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7872] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1487), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7886] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1489), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7900] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1491), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7914] = 1,
    ACTIONS(851), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7922] = 4,
    ACTIONS(594), 1,
      sym__indent,
    ACTIONS(1493), 1,
      sym_blank_line,
    ACTIONS(1496), 1,
      sym__comment_start,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7936] = 4,
    ACTIONS(1499), 1,
      sym_blank_line,
    ACTIONS(1502), 1,
      sym__dedent,
    ACTIONS(1504), 1,
      sym_indented_raw_text,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7950] = 5,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(723), 1,
      sym_inline_agic,
    STATE(988), 1,
      sym_runnable,
  [7966] = 1,
    ACTIONS(851), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [7974] = 4,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1216), 1,
      sym_snake_name,
    STATE(375), 1,
      sym_agent,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [7988] = 5,
    ACTIONS(464), 1,
      sym_arrow,
    ACTIONS(466), 1,
      sym_colon,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(731), 1,
      sym_inline_agic,
    STATE(990), 1,
      sym_runnable,
  [8004] = 1,
    ACTIONS(855), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8012] = 4,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1216), 1,
      sym_snake_name,
    STATE(441), 1,
      sym_agent,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [8026] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(1507), 1,
      sym__dedent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8040] = 1,
    ACTIONS(1509), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8048] = 1,
    ACTIONS(867), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8056] = 1,
    ACTIONS(1511), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8064] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1513), 1,
      sym_blank_line,
    ACTIONS(1515), 1,
      sym__indent,
    STATE(510), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8078] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1517), 1,
      sym_blank_line,
    ACTIONS(1519), 1,
      sym__indent,
    STATE(511), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8092] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1521), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8106] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1523), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8120] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1525), 1,
      sym_blank_line,
    ACTIONS(1527), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8134] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1529), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8148] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1531), 1,
      sym_blank_line,
    ACTIONS(1533), 1,
      sym__dedent,
    STATE(504), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8162] = 4,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1535), 1,
      sym__dedent,
    STATE(497), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8176] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1537), 1,
      sym_blank_line,
    ACTIONS(1539), 1,
      sym__indent,
    STATE(518), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8190] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1541), 1,
      sym_blank_line,
    ACTIONS(1543), 1,
      sym__indent,
    STATE(519), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8204] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1545), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8218] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1547), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8232] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1549), 1,
      sym_blank_line,
    ACTIONS(1551), 1,
      sym__indent,
    STATE(521), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8246] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1553), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8260] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8268] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1555), 1,
      sym_blank_line,
    ACTIONS(1557), 1,
      sym__indent,
    STATE(524), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8282] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1559), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8296] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1561), 1,
      sym_blank_line,
    ACTIONS(1563), 1,
      sym__indent,
    STATE(526), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8310] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1565), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8324] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1567), 1,
      sym_blank_line,
    ACTIONS(1569), 1,
      sym__indent,
    STATE(223), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8338] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8346] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(1571), 1,
      sym_blank_line,
    ACTIONS(1573), 1,
      sym__indent,
    STATE(530), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8360] = 4,
    ACTIONS(859), 1,
      sym__comment_start,
    ACTIONS(928), 1,
      sym_blank_line,
    ACTIONS(1575), 1,
      sym__indent,
    STATE(496), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8374] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8382] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8390] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8398] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8406] = 4,
    ACTIONS(507), 1,
      sym__comment_start,
    ACTIONS(1577), 1,
      sym_blank_line,
    ACTIONS(1579), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8420] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8427] = 1,
    ACTIONS(1581), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8434] = 1,
    ACTIONS(1583), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8441] = 1,
    ACTIONS(1585), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8448] = 1,
    ACTIONS(1587), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8455] = 1,
    ACTIONS(1589), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8462] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8469] = 1,
    ACTIONS(1591), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8476] = 1,
    ACTIONS(1593), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8483] = 3,
    ACTIONS(1597), 1,
      sym_comma,
    STATE(588), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1595), 2,
      sym_newline,
      sym__inline_comment,
  [8494] = 3,
    ACTIONS(1601), 1,
      sym_comma,
    STATE(589), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1599), 2,
      sym_newline,
      sym__inline_comment,
  [8505] = 1,
    ACTIONS(1603), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8512] = 1,
    ACTIONS(1605), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8519] = 1,
    ACTIONS(1607), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8526] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8533] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8540] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8547] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8554] = 4,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(1609), 1,
      sym_text_line,
    STATE(592), 1,
      sym_line_end,
  [8567] = 1,
    ACTIONS(1611), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8574] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8581] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8588] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8595] = 1,
    ACTIONS(1613), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8602] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8609] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8616] = 1,
    ACTIONS(1615), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8623] = 1,
    ACTIONS(1617), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8630] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8637] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8644] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8651] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8658] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8665] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8672] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8679] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8686] = 1,
    ACTIONS(1619), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8693] = 1,
    ACTIONS(1621), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8700] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8707] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8714] = 3,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1623), 1,
      sym_colon,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [8725] = 3,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(1625), 1,
      sym_integer_literal,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [8736] = 1,
    ACTIONS(1627), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8743] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8750] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8757] = 1,
    ACTIONS(1629), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8764] = 1,
    ACTIONS(1631), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8771] = 1,
    ACTIONS(1633), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8778] = 1,
    ACTIONS(1635), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8785] = 1,
    ACTIONS(1637), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8792] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8799] = 1,
    ACTIONS(1639), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8806] = 3,
    ACTIONS(1597), 1,
      sym_comma,
    STATE(617), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1641), 2,
      sym_newline,
      sym__inline_comment,
  [8817] = 3,
    ACTIONS(1601), 1,
      sym_comma,
    STATE(618), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1643), 2,
      sym_newline,
      sym__inline_comment,
  [8828] = 1,
    ACTIONS(1645), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8835] = 1,
    ACTIONS(1647), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8842] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8849] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8856] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8863] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8870] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8877] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8884] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8891] = 1,
    ACTIONS(1649), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8898] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8905] = 4,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(1651), 1,
      sym_text_line,
    STATE(886), 1,
      sym_line_end,
  [8918] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8925] = 1,
    ACTIONS(1653), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8932] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8939] = 1,
    ACTIONS(1655), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8946] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8953] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8960] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8967] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8974] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8981] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8988] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1657), 1,
      sym_blank_line,
    STATE(515), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8999] = 3,
    ACTIONS(1659), 1,
      sym_optional_marker,
    ACTIONS(1661), 1,
      sym_colon,
    ACTIONS(1663), 2,
      sym_rparen,
      sym_comma,
  [9010] = 1,
    ACTIONS(1665), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9017] = 1,
    ACTIONS(1667), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9024] = 1,
    ACTIONS(1669), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9031] = 3,
    ACTIONS(1673), 1,
      sym_comma,
    STATE(617), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1671), 2,
      sym_newline,
      sym__inline_comment,
  [9042] = 3,
    ACTIONS(1678), 1,
      sym_comma,
    STATE(618), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1676), 2,
      sym_newline,
      sym__inline_comment,
  [9053] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9060] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9067] = 4,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(1681), 1,
      sym_text_line,
    STATE(643), 1,
      sym_line_end,
  [9080] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9087] = 4,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(1683), 1,
      sym_text_line,
    STATE(644), 1,
      sym_line_end,
  [9100] = 4,
    ACTIONS(904), 1,
      sym_lparen,
    ACTIONS(1685), 1,
      sym_arrow,
    ACTIONS(1687), 1,
      sym_colon,
    STATE(1195), 1,
      sym_params,
  [9113] = 1,
    ACTIONS(1689), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9120] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9127] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1691), 1,
      sym_blank_line,
    STATE(389), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9138] = 1,
    ACTIONS(1693), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9145] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(130), 1,
      sym_line_end,
    STATE(562), 1,
      sym_job_body,
  [9158] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9165] = 1,
    ACTIONS(1699), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9172] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9179] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9186] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9193] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9200] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9207] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9214] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9221] = 1,
    ACTIONS(1701), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9228] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(130), 1,
      sym_line_end,
    STATE(563), 1,
      sym_job_body,
  [9241] = 1,
    ACTIONS(1703), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9248] = 1,
    ACTIONS(1705), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9255] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9262] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9269] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9276] = 4,
    ACTIONS(650), 1,
      sym__line_start,
    ACTIONS(1707), 1,
      sym__dedent,
    STATE(148), 1,
      sym_message,
    STATE(1241), 1,
      sym_messages,
  [9289] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9296] = 1,
    ACTIONS(1709), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9303] = 4,
    ACTIONS(904), 1,
      sym_lparen,
    ACTIONS(1711), 1,
      sym_arrow,
    ACTIONS(1713), 1,
      sym_colon,
    STATE(1152), 1,
      sym_params,
  [9316] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9323] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9330] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9337] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9344] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9351] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9358] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9365] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9372] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9379] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9386] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9393] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9400] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9407] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9414] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9421] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9428] = 1,
    ACTIONS(1715), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9435] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9442] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9449] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9456] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9463] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9470] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9477] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9484] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9491] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9498] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9505] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9512] = 1,
    ACTIONS(1717), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9519] = 1,
    ACTIONS(1719), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9526] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9533] = 1,
    ACTIONS(1721), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9540] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9547] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9554] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9561] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9568] = 1,
    ACTIONS(1723), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9575] = 2,
    ACTIONS(279), 1,
      sym_integer_literal,
    ACTIONS(277), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9584] = 2,
    STATE(1073), 1,
      sym_text_ref,
    ACTIONS(1725), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9593] = 4,
    ACTIONS(1727), 1,
      sym_blank_line,
    ACTIONS(1729), 1,
      sym__text_indent,
    STATE(746), 1,
      sym_text_body,
    STATE(1065), 1,
      aux_sym_text_body_repeat1,
  [9606] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9613] = 1,
    ACTIONS(1731), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9620] = 4,
    ACTIONS(1733), 1,
      sym_runnable_ref,
    ACTIONS(1735), 1,
      sym_none_keyword,
    ACTIONS(1737), 1,
      sym_all_keyword,
    STATE(1070), 1,
      sym_route_value,
  [9633] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(108), 1,
      sym_line_end,
    STATE(698), 1,
      sym__cap_definition,
  [9646] = 1,
    ACTIONS(1739), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9653] = 1,
    ACTIONS(1741), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9660] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9667] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9674] = 1,
    ACTIONS(1743), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9681] = 1,
    ACTIONS(1745), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9688] = 4,
    ACTIONS(367), 1,
      sym__inline_comment,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1747), 1,
      sym_text_line,
    STATE(776), 1,
      sym_line_end,
  [9701] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9708] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9715] = 1,
    ACTIONS(1749), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9722] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9729] = 1,
    ACTIONS(1751), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9736] = 1,
    ACTIONS(1753), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9743] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9750] = 1,
    ACTIONS(1755), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9757] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9764] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9771] = 1,
    ACTIONS(1757), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9778] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9785] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9792] = 4,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    ACTIONS(1759), 1,
      sym_colon,
    STATE(788), 1,
      sym_line_end,
  [9805] = 1,
    ACTIONS(1761), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9812] = 1,
    ACTIONS(1763), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9819] = 1,
    ACTIONS(1765), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [9826] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9833] = 4,
    ACTIONS(367), 1,
      sym__inline_comment,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1767), 1,
      sym_text_line,
    STATE(807), 1,
      sym_line_end,
  [9846] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9853] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9860] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9867] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9874] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9881] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9888] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9895] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9902] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9909] = 4,
    ACTIONS(367), 1,
      sym__inline_comment,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1769), 1,
      sym_text_line,
    STATE(827), 1,
      sym_line_end,
  [9922] = 4,
    ACTIONS(367), 1,
      sym__inline_comment,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1771), 1,
      sym_text_line,
    STATE(828), 1,
      sym_line_end,
  [9935] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9942] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9949] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9956] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1773), 1,
      sym_blank_line,
    STATE(359), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9967] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9974] = 1,
    ACTIONS(1775), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9981] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9988] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9995] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10002] = 1,
    ACTIONS(1777), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10009] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10016] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10023] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10030] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1779), 1,
      sym_blank_line,
    STATE(494), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10041] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10048] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10055] = 1,
    ACTIONS(1781), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10062] = 1,
    ACTIONS(1783), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10069] = 1,
    ACTIONS(1785), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10076] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10083] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10090] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10097] = 1,
    ACTIONS(1787), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10104] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10111] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10118] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(108), 1,
      sym_line_end,
    STATE(703), 1,
      sym__cap_definition,
  [10131] = 1,
    ACTIONS(1789), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10138] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10145] = 2,
    ACTIONS(1793), 1,
      sym_newline,
    ACTIONS(1791), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [10154] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10161] = 4,
    ACTIONS(1795), 1,
      sym_blank_line,
    ACTIONS(1797), 1,
      sym__text_indent,
    STATE(993), 1,
      sym_text_body,
    STATE(1072), 1,
      aux_sym_text_body_repeat1,
  [10174] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10181] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10188] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10195] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10202] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10209] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10216] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10223] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10230] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10237] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10244] = 4,
    ACTIONS(387), 1,
      sym__inline_comment,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1799), 1,
      sym_text_line,
    STATE(243), 1,
      sym_line_end,
  [10257] = 4,
    ACTIONS(1801), 1,
      sym__inline_comment,
    ACTIONS(1803), 1,
      sym_text_line,
    ACTIONS(1805), 1,
      sym_newline,
    STATE(514), 1,
      sym_line_end,
  [10270] = 4,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    ACTIONS(1807), 1,
      sym_colon,
    STATE(564), 1,
      sym_line_end,
  [10283] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10290] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10297] = 1,
    ACTIONS(1809), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10304] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10311] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10318] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10325] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10332] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10339] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10346] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10353] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10360] = 4,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    ACTIONS(1811), 1,
      sym_colon,
    STATE(254), 1,
      sym_line_end,
  [10373] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10380] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10387] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10394] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10401] = 4,
    ACTIONS(387), 1,
      sym__inline_comment,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1813), 1,
      sym_text_line,
    STATE(268), 1,
      sym_line_end,
  [10414] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10421] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10428] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10435] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10442] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10449] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10456] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10463] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10470] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(108), 1,
      sym_line_end,
    STATE(708), 1,
      sym__cap_definition,
  [10483] = 4,
    ACTIONS(387), 1,
      sym__inline_comment,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1815), 1,
      sym_text_line,
    STATE(288), 1,
      sym_line_end,
  [10496] = 4,
    ACTIONS(387), 1,
      sym__inline_comment,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1817), 1,
      sym_text_line,
    STATE(289), 1,
      sym_line_end,
  [10509] = 3,
    ACTIONS(1819), 1,
      sym_colon,
    ACTIONS(1821), 1,
      sym_newline,
    ACTIONS(1803), 2,
      sym__inline_comment,
      sym_text_line,
  [10520] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10527] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10534] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [10541] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10548] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10555] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10562] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10569] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10576] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10583] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10590] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10597] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10604] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10611] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10618] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10625] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10632] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10639] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10646] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10653] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10660] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10667] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10674] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10681] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10688] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10695] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10702] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10709] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10716] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10723] = 4,
    ACTIONS(1823), 1,
      sym_blank_line,
    ACTIONS(1825), 1,
      sym__text_indent,
    STATE(635), 1,
      sym_text_body,
    STATE(1081), 1,
      aux_sym_text_body_repeat1,
  [10736] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10743] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10750] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10757] = 4,
    ACTIONS(1827), 1,
      sym_blank_line,
    ACTIONS(1829), 1,
      sym__text_indent,
    STATE(340), 1,
      sym_text_body,
    STATE(1082), 1,
      aux_sym_text_body_repeat1,
  [10770] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10777] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10784] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10791] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10798] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10805] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10812] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10819] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10826] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1831), 1,
      sym_blank_line,
    STATE(357), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10837] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1833), 1,
      sym_blank_line,
    STATE(358), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10848] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10855] = 3,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1835), 1,
      sym_colon,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [10866] = 3,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(1837), 1,
      sym_integer_literal,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [10877] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10884] = 2,
    STATE(949), 1,
      sym_text_ref,
    ACTIONS(1725), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [10893] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10900] = 4,
    ACTIONS(1733), 1,
      sym_runnable_ref,
    ACTIONS(1735), 1,
      sym_none_keyword,
    ACTIONS(1737), 1,
      sym_all_keyword,
    STATE(948), 1,
      sym_route_value,
  [10913] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1839), 1,
      sym_blank_line,
    STATE(423), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10924] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1841), 1,
      sym_blank_line,
    STATE(424), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10935] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10942] = 3,
    ACTIONS(145), 1,
      sym_newline,
    ACTIONS(1843), 1,
      sym_colon,
    ACTIONS(119), 2,
      sym__inline_comment,
      sym_text_line,
  [10953] = 3,
    ACTIONS(305), 1,
      sym_newline,
    ACTIONS(1845), 1,
      sym_integer_literal,
    ACTIONS(297), 2,
      sym__inline_comment,
      sym_text_line,
  [10964] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10971] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [10978] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1847), 1,
      sym_blank_line,
    STATE(489), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10989] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1849), 1,
      sym_blank_line,
    STATE(490), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11000] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1851), 1,
      sym_blank_line,
    STATE(492), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11011] = 3,
    ACTIONS(1178), 1,
      sym_indented_raw_text,
    ACTIONS(1853), 1,
      sym_blank_line,
    STATE(493), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [11022] = 2,
    STATE(1240), 1,
      sym_directive_op,
    ACTIONS(1855), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11031] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11038] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11045] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11052] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11059] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11066] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11073] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11080] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11087] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11094] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11101] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [11108] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11115] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11122] = 4,
    ACTIONS(393), 1,
      sym__inline_comment,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(1857), 1,
      sym_text_line,
    STATE(686), 1,
      sym_line_end,
  [11135] = 2,
    STATE(1342), 1,
      sym_directive_op,
    ACTIONS(1855), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11144] = 1,
    ACTIONS(1859), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11151] = 1,
    ACTIONS(1861), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11158] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11165] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11172] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11179] = 4,
    ACTIONS(1695), 1,
      sym__inline_comment,
    ACTIONS(1697), 1,
      sym_newline,
    STATE(108), 1,
      sym_line_end,
    STATE(711), 1,
      sym__cap_definition,
  [11192] = 1,
    ACTIONS(1863), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11199] = 1,
    ACTIONS(1865), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11206] = 1,
    ACTIONS(1867), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11213] = 3,
    STATE(613), 1,
      sym_param_name,
    STATE(1219), 1,
      sym_param,
    ACTIONS(1022), 2,
      anon_sym__,
      sym_snake_name,
  [11224] = 4,
    ACTIONS(650), 1,
      sym__line_start,
    ACTIONS(1869), 1,
      sym__dedent,
    STATE(148), 1,
      sym_message,
    STATE(1266), 1,
      sym_messages,
  [11237] = 1,
    ACTIONS(1871), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11244] = 4,
    ACTIONS(1873), 1,
      sym_blank_line,
    ACTIONS(1875), 1,
      sym__text_indent,
    STATE(735), 1,
      sym_text_body,
    STATE(1029), 1,
      aux_sym_text_body_repeat1,
  [11257] = 1,
    ACTIONS(1877), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [11264] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [11271] = 2,
    STATE(168), 1,
      sym__order_complement,
    ACTIONS(1879), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11279] = 1,
    ACTIONS(1152), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11285] = 1,
    ACTIONS(1150), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11291] = 1,
    ACTIONS(1152), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11297] = 1,
    ACTIONS(1785), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11303] = 1,
    ACTIONS(1787), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11309] = 1,
    ACTIONS(1881), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11315] = 2,
    ACTIONS(1793), 1,
      sym_newline,
    ACTIONS(1791), 2,
      sym__inline_comment,
      sym_text_line,
  [11323] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(596), 1,
      sym_line_end,
  [11333] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [11343] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(598), 1,
      sym_line_end,
  [11353] = 2,
    ACTIONS(279), 1,
      sym_all_keyword,
    ACTIONS(277), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [11361] = 1,
    ACTIONS(1150), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11367] = 1,
    ACTIONS(1152), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11373] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11379] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11385] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11391] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11397] = 1,
    ACTIONS(1148), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11403] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11409] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11415] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11421] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11427] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11433] = 1,
    ACTIONS(1148), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11439] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(363), 1,
      sym_line_end,
  [11449] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(606), 1,
      sym_line_end,
  [11459] = 3,
    ACTIONS(523), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1236), 1,
      sym_statements,
  [11469] = 1,
    ACTIONS(1887), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11475] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(607), 1,
      sym_line_end,
  [11485] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(608), 1,
      sym_line_end,
  [11495] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(189), 1,
      sym_line_end,
  [11505] = 3,
    ACTIONS(1889), 1,
      sym_blank_line,
    ACTIONS(1892), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [11515] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(745), 1,
      sym_line_end,
  [11525] = 3,
    ACTIONS(1894), 1,
      sym_rparen,
    ACTIONS(1896), 1,
      sym_comma,
    STATE(1056), 1,
      aux_sym_params_repeat1,
  [11535] = 3,
    ACTIONS(875), 1,
      sym_flow_by_keyword,
    STATE(611), 1,
      sym__inline_by_complement,
    STATE(978), 1,
      sym__named_by_complement,
  [11545] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(367), 1,
      sym_line_end,
  [11555] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(368), 1,
      sym_line_end,
  [11565] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [11575] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(779), 1,
      sym_line_end,
  [11585] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(780), 1,
      sym_line_end,
  [11595] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(781), 1,
      sym_line_end,
  [11605] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(615), 1,
      sym_line_end,
  [11615] = 3,
    ACTIONS(1898), 1,
      sym__inline_comment,
    ACTIONS(1900), 1,
      sym_newline,
    STATE(371), 1,
      sym_line_end,
  [11625] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(187), 1,
      sym_line_end,
  [11635] = 2,
    STATE(985), 1,
      sym_recall_source,
    ACTIONS(725), 2,
      anon_sym_far,
      anon_sym_near,
  [11643] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(789), 1,
      sym_line_end,
  [11653] = 3,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(794), 1,
      sym__inline_if_complement,
    STATE(956), 1,
      sym__named_if_complement,
  [11663] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(795), 1,
      sym_line_end,
  [11673] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(796), 1,
      sym_line_end,
  [11683] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(804), 1,
      sym_line_end,
  [11693] = 3,
    ACTIONS(1902), 1,
      sym__inline_comment,
    ACTIONS(1904), 1,
      sym_newline,
    STATE(805), 1,
      sym_line_end,
  [11703] = 3,
    ACTIONS(1902), 1,
      sym__inline_comment,
    ACTIONS(1904), 1,
      sym_newline,
    STATE(806), 1,
      sym_line_end,
  [11713] = 3,
    ACTIONS(1906), 1,
      sym_rparen,
    ACTIONS(1908), 1,
      sym_comma,
    STATE(950), 1,
      aux_sym_params_repeat1,
  [11723] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(810), 1,
      sym_line_end,
  [11733] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(811), 1,
      sym_line_end,
  [11743] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(620), 1,
      sym_line_end,
  [11753] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(814), 1,
      sym_line_end,
  [11763] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(815), 1,
      sym_line_end,
  [11773] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(816), 1,
      sym_line_end,
  [11783] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [11793] = 3,
    ACTIONS(898), 1,
      sym_flow_by_keyword,
    STATE(819), 1,
      sym__inline_by_complement,
    STATE(964), 1,
      sym__named_by_complement,
  [11803] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(544), 1,
      sym_line_end,
  [11813] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(821), 1,
      sym_line_end,
  [11823] = 2,
    ACTIONS(1911), 1,
      sym_flow_spawn_keyword,
    STATE(622), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11831] = 2,
    ACTIONS(1913), 1,
      sym_flow_spawn_keyword,
    STATE(822), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11839] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(825), 1,
      sym_line_end,
  [11849] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(826), 1,
      sym_line_end,
  [11859] = 1,
    ACTIONS(1915), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [11865] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(830), 1,
      sym_line_end,
  [11875] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(831), 1,
      sym_line_end,
  [11885] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(832), 1,
      sym_line_end,
  [11895] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(177), 1,
      sym_line_end,
  [11905] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [11915] = 3,
    ACTIONS(1917), 1,
      sym_colon,
    ACTIONS(1919), 1,
      sym_snake_name,
    STATE(1246), 1,
      sym_context_name,
  [11925] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(222), 1,
      sym_line_end,
  [11935] = 1,
    ACTIONS(1921), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11941] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(196), 1,
      sym_line_end,
  [11951] = 3,
    ACTIONS(523), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1353), 1,
      sym_statements,
  [11961] = 1,
    ACTIONS(1923), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11967] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(633), 1,
      sym_line_end,
  [11977] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(636), 1,
      sym_line_end,
  [11987] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1170), 1,
      sym_statements,
  [11997] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [12007] = 3,
    ACTIONS(1925), 1,
      sym_colon,
    ACTIONS(1927), 1,
      sym_snake_name,
    STATE(1231), 1,
      sym_instruct_name,
  [12017] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(192), 1,
      sym_line_end,
  [12027] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(383), 1,
      sym_line_end,
  [12037] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(642), 1,
      sym_line_end,
  [12047] = 1,
    ACTIONS(1671), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12053] = 3,
    ACTIONS(1805), 1,
      sym_newline,
    ACTIONS(1929), 1,
      sym__inline_comment,
    STATE(992), 1,
      sym_line_end,
  [12063] = 1,
    ACTIONS(1676), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12069] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(551), 1,
      sym_line_end,
  [12079] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(552), 1,
      sym_line_end,
  [12089] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(553), 1,
      sym_line_end,
  [12099] = 1,
    ACTIONS(1162), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12105] = 1,
    ACTIONS(1164), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12111] = 1,
    ACTIONS(1166), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12117] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(246), 1,
      sym_line_end,
  [12127] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(247), 1,
      sym_line_end,
  [12137] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(248), 1,
      sym_line_end,
  [12147] = 1,
    ACTIONS(1168), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12153] = 1,
    ACTIONS(1170), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12159] = 2,
    STATE(191), 1,
      sym__order_complement,
    ACTIONS(1879), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12167] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(255), 1,
      sym_line_end,
  [12177] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1129), 1,
      sym_statements,
  [12187] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1130), 1,
      sym_statements,
  [12197] = 3,
    ACTIONS(339), 1,
      sym_flow_if_keyword,
    STATE(259), 1,
      sym__inline_if_complement,
    STATE(1013), 1,
      sym__named_if_complement,
  [12207] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(260), 1,
      sym_line_end,
  [12217] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(261), 1,
      sym_line_end,
  [12227] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(267), 1,
      sym_line_end,
  [12237] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(109), 1,
      sym_statements,
  [12247] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(271), 1,
      sym_line_end,
  [12257] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(272), 1,
      sym_line_end,
  [12267] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(182), 1,
      sym_line_end,
  [12277] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(275), 1,
      sym_line_end,
  [12287] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(276), 1,
      sym_line_end,
  [12297] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(277), 1,
      sym_line_end,
  [12307] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(667), 1,
      sym_line_end,
  [12317] = 1,
    ACTIONS(1931), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [12323] = 3,
    ACTIONS(849), 1,
      sym_flow_by_keyword,
    STATE(280), 1,
      sym__inline_by_complement,
    STATE(1023), 1,
      sym__named_by_complement,
  [12333] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(676), 1,
      sym_line_end,
  [12343] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(282), 1,
      sym_line_end,
  [12353] = 2,
    ACTIONS(1933), 1,
      sym_flow_spawn_keyword,
    STATE(283), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [12361] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(677), 1,
      sym_line_end,
  [12371] = 1,
    ACTIONS(1935), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12377] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(286), 1,
      sym_line_end,
  [12387] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(287), 1,
      sym_line_end,
  [12397] = 1,
    ACTIONS(1937), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [12403] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(291), 1,
      sym_line_end,
  [12413] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(292), 1,
      sym_line_end,
  [12423] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(293), 1,
      sym_line_end,
  [12433] = 1,
    ACTIONS(1939), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12439] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1943), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [12449] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1141), 1,
      sym_statements,
  [12459] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(110), 1,
      sym_statements,
  [12469] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(111), 1,
      sym_statements,
  [12479] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(565), 1,
      sym_line_end,
  [12489] = 2,
    ACTIONS(1947), 1,
      sym_newline,
    ACTIONS(1945), 2,
      sym__inline_comment,
      sym_text_line,
  [12497] = 2,
    ACTIONS(1881), 1,
      sym_newline,
    ACTIONS(1949), 2,
      sym__inline_comment,
      sym_text_line,
  [12505] = 2,
    ACTIONS(1953), 1,
      sym_newline,
    ACTIONS(1951), 2,
      sym__inline_comment,
      sym_text_line,
  [12513] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [12523] = 2,
    STATE(1179), 1,
      sym_param_name,
    ACTIONS(1955), 2,
      anon_sym__,
      sym_snake_name,
  [12531] = 3,
    ACTIONS(357), 1,
      sym_flow_if_keyword,
    STATE(569), 1,
      sym__inline_if_complement,
    STATE(927), 1,
      sym__named_if_complement,
  [12541] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(570), 1,
      sym_line_end,
  [12551] = 3,
    ACTIONS(373), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym__inline_comment,
    STATE(634), 1,
      sym_line_end,
  [12561] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(571), 1,
      sym_line_end,
  [12571] = 3,
    ACTIONS(1957), 1,
      sym__inline_comment,
    ACTIONS(1959), 1,
      sym_newline,
    STATE(666), 1,
      sym_line_end,
  [12581] = 3,
    ACTIONS(391), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym__inline_comment,
    STATE(339), 1,
      sym_line_end,
  [12591] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(112), 1,
      sym_statements,
  [12601] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(241), 1,
      sym_line_end,
  [12611] = 3,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1961), 1,
      sym_colon,
    STATE(1303), 1,
      sym__window_complement,
  [12621] = 1,
    ACTIONS(1963), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12627] = 3,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(972), 1,
      sym__inline_comment,
    STATE(580), 1,
      sym_line_end,
  [12637] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [12647] = 2,
    STATE(209), 1,
      sym__order_complement,
    ACTIONS(1879), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12655] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(136), 1,
      sym_statements,
  [12665] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(137), 1,
      sym_statements,
  [12675] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(138), 1,
      sym_statements,
  [12685] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(139), 1,
      sym_statements,
  [12695] = 3,
    ACTIONS(1896), 1,
      sym_comma,
    ACTIONS(1965), 1,
      sym_rparen,
    STATE(950), 1,
      aux_sym_params_repeat1,
  [12705] = 2,
    ACTIONS(1967), 1,
      sym_colon,
    ACTIONS(1969), 2,
      sym_rparen,
      sym_comma,
  [12713] = 1,
    ACTIONS(1971), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [12719] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(152), 1,
      sym_statements,
  [12729] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(153), 1,
      sym_statements,
  [12739] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(154), 1,
      sym_statements,
  [12749] = 3,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(93), 1,
      sym__flow_statement,
    STATE(155), 1,
      sym_statements,
  [12759] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(186), 1,
      sym_line_end,
  [12769] = 3,
    ACTIONS(1973), 1,
      sym_pascal_name,
    STATE(1261), 1,
      sym_type_name,
    STATE(1268), 1,
      sym_struct_name,
  [12779] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1975), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [12789] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(211), 1,
      sym_line_end,
  [12799] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1174), 1,
      sym_statements,
  [12809] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1177), 1,
      sym_statements,
  [12819] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1178), 1,
      sym_statements,
  [12829] = 3,
    ACTIONS(1977), 1,
      sym__inline_comment,
    ACTIONS(1979), 1,
      sym_newline,
    STATE(266), 1,
      sym_line_end,
  [12839] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1180), 1,
      sym_statements,
  [12849] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1981), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [12859] = 3,
    ACTIONS(1977), 1,
      sym__inline_comment,
    ACTIONS(1979), 1,
      sym_newline,
    STATE(331), 1,
      sym_line_end,
  [12869] = 1,
    ACTIONS(1983), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12875] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1187), 1,
      sym_statements,
  [12885] = 3,
    ACTIONS(1957), 1,
      sym__inline_comment,
    ACTIONS(1959), 1,
      sym_newline,
    STATE(712), 1,
      sym_line_end,
  [12895] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1190), 1,
      sym_statements,
  [12905] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1191), 1,
      sym_statements,
  [12915] = 3,
    ACTIONS(606), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1193), 1,
      sym_statements,
  [12925] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(216), 1,
      sym_line_end,
  [12935] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1985), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [12945] = 3,
    ACTIONS(1941), 1,
      sym_blank_line,
    ACTIONS(1987), 1,
      sym__text_indent,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [12955] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12961] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(508), 1,
      sym_line_end,
  [12971] = 1,
    ACTIONS(1140), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12977] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(509), 1,
      sym_line_end,
  [12987] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12993] = 1,
    ACTIONS(1689), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12999] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(512), 1,
      sym_line_end,
  [13009] = 1,
    ACTIONS(1144), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13015] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(516), 1,
      sym_line_end,
  [13025] = 1,
    ACTIONS(1146), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13031] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(517), 1,
      sym_line_end,
  [13041] = 1,
    ACTIONS(1148), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13047] = 1,
    ACTIONS(1150), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [13053] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(520), 1,
      sym_line_end,
  [13063] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(523), 1,
      sym_line_end,
  [13073] = 3,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1989), 1,
      sym_colon,
    STATE(1351), 1,
      sym__window_complement,
  [13083] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(525), 1,
      sym_line_end,
  [13093] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(527), 1,
      sym_line_end,
  [13103] = 3,
    ACTIONS(916), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1991), 1,
      sym_colon,
    STATE(1355), 1,
      sym__window_complement,
  [13113] = 3,
    ACTIONS(1883), 1,
      sym__inline_comment,
    ACTIONS(1885), 1,
      sym_newline,
    STATE(529), 1,
      sym_line_end,
  [13123] = 1,
    ACTIONS(1633), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13129] = 1,
    ACTIONS(1647), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13135] = 1,
    ACTIONS(1649), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [13141] = 1,
    ACTIONS(1142), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [13147] = 2,
    ACTIONS(1993), 1,
      sym_snake_name,
    STATE(375), 1,
      sym_agent,
  [13154] = 2,
    ACTIONS(1995), 1,
      sym__snake_kebab_name,
    STATE(1315), 1,
      sym_cap_name,
  [13161] = 2,
    ACTIONS(1997), 1,
      sym_text_line,
    STATE(1043), 1,
      sym_cap_ref,
  [13168] = 1,
    ACTIONS(1999), 2,
      sym_rparen,
      sym_comma,
  [13173] = 2,
    ACTIONS(2001), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_assign_operator,
  [13180] = 2,
    ACTIONS(1995), 1,
      sym__snake_kebab_name,
    STATE(1297), 1,
      sym_cap_name,
  [13187] = 2,
    ACTIONS(2003), 1,
      anon_sym_lanes,
    STATE(1220), 1,
      sym_flow_lanes_keyword,
  [13194] = 2,
    ACTIONS(540), 1,
      sym__line_start,
    STATE(107), 1,
      sym_field,
  [13201] = 1,
    ACTIONS(2005), 2,
      sym_optional_marker,
      sym_colon,
  [13206] = 2,
    ACTIONS(2007), 1,
      sym_optional_marker,
    ACTIONS(2009), 1,
      sym_colon,
  [13213] = 1,
    ACTIONS(1152), 2,
      sym_blank_line,
      sym__text_indent,
  [13218] = 2,
    ACTIONS(2011), 1,
      sym_comment_text,
    ACTIONS(2013), 1,
      sym__comment_end,
  [13225] = 2,
    ACTIONS(2015), 1,
      sym_comment_text,
    ACTIONS(2017), 1,
      sym__comment_end,
  [13232] = 2,
    ACTIONS(117), 1,
      sym__flow_raw_text,
    STATE(175), 1,
      sym__implicit_run_line,
  [13239] = 2,
    ACTIONS(2019), 1,
      sym__reduce_text_start,
    STATE(678), 1,
      sym__reduce_text_body,
  [13246] = 2,
    ACTIONS(1995), 1,
      sym__snake_kebab_name,
    STATE(1358), 1,
      sym_cap_name,
  [13253] = 2,
    ACTIONS(2021), 1,
      aux_sym__doc_space_token1,
    STATE(1134), 1,
      sym__using_space,
  [13260] = 2,
    ACTIONS(2023), 1,
      sym_arrow,
    ACTIONS(2025), 1,
      sym_colon,
  [13267] = 2,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(506), 1,
      sym__implicit_run_line,
  [13274] = 2,
    ACTIONS(2027), 1,
      sym__snake_kebab_name,
    STATE(1330), 1,
      sym_job_name,
  [13281] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(415), 1,
      sym__from_complement,
  [13288] = 1,
    ACTIONS(2029), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13293] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(425), 1,
      sym__until_complement,
  [13300] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(426), 1,
      sym__until_complement,
  [13307] = 2,
    ACTIONS(2027), 1,
      sym__snake_kebab_name,
    STATE(1343), 1,
      sym_job_name,
  [13314] = 1,
    ACTIONS(2031), 2,
      sym_arrow,
      sym_colon,
  [13319] = 2,
    ACTIONS(2033), 1,
      sym__one_integer_literal,
    ACTIONS(2035), 1,
      sym__other_integer_literal,
  [13326] = 2,
    ACTIONS(950), 1,
      sym_snake_name,
    STATE(965), 1,
      sym_runnable,
  [13333] = 2,
    ACTIONS(2019), 1,
      sym__reduce_text_start,
    STATE(695), 1,
      sym__reduce_text_body,
  [13340] = 2,
    ACTIONS(2019), 1,
      sym__reduce_text_start,
    STATE(628), 1,
      sym__reduce_text_body,
  [13347] = 2,
    ACTIONS(2037), 1,
      sym_comment_text,
    ACTIONS(2039), 1,
      sym__comment_end,
  [13354] = 2,
    ACTIONS(2041), 1,
      sym_colon,
    STATE(1048), 1,
      sym_inline_agic_body,
  [13361] = 2,
    ACTIONS(2043), 1,
      sym_comment_text,
    ACTIONS(2045), 1,
      sym__comment_end,
  [13368] = 1,
    ACTIONS(2047), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [13373] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(437), 1,
      sym__until_complement,
  [13380] = 1,
    ACTIONS(2049), 2,
      sym_newline,
      sym__inline_comment,
  [13385] = 2,
    ACTIONS(2051), 1,
      sym_comment_text,
    ACTIONS(2053), 1,
      sym__comment_end,
  [13392] = 2,
    ACTIONS(2055), 1,
      sym_comment_text,
    ACTIONS(2057), 1,
      sym__comment_end,
  [13399] = 1,
    ACTIONS(2059), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [13404] = 2,
    ACTIONS(2061), 1,
      sym_comment_text,
    ACTIONS(2063), 1,
      sym__comment_end,
  [13411] = 2,
    ACTIONS(2065), 1,
      sym_comment_text,
    ACTIONS(2067), 1,
      sym__comment_end,
  [13418] = 2,
    ACTIONS(2069), 1,
      sym_comment_text,
    ACTIONS(2071), 1,
      sym__comment_end,
  [13425] = 2,
    ACTIONS(2073), 1,
      sym_comment_text,
    ACTIONS(2075), 1,
      sym__comment_end,
  [13432] = 2,
    ACTIONS(2077), 1,
      sym_comment_text,
    ACTIONS(2079), 1,
      sym__comment_end,
  [13439] = 2,
    ACTIONS(2081), 1,
      sym_comment_text,
    ACTIONS(2083), 1,
      sym__comment_end,
  [13446] = 2,
    ACTIONS(2085), 1,
      sym_arrow,
    ACTIONS(2087), 1,
      sym_colon,
  [13453] = 2,
    ACTIONS(2089), 1,
      sym_comment_text,
    ACTIONS(2091), 1,
      sym__comment_end,
  [13460] = 2,
    ACTIONS(2093), 1,
      sym_comment_text,
    ACTIONS(2095), 1,
      sym__comment_end,
  [13467] = 2,
    ACTIONS(2097), 1,
      sym_comment_text,
    ACTIONS(2099), 1,
      sym__comment_end,
  [13474] = 2,
    ACTIONS(2101), 1,
      sym_comment_text,
    ACTIONS(2103), 1,
      sym__comment_end,
  [13481] = 2,
    ACTIONS(2105), 1,
      anon_sym_EQ,
    STATE(1128), 1,
      sym_assign_operator,
  [13488] = 2,
    ACTIONS(2107), 1,
      sym_comment_text,
    ACTIONS(2109), 1,
      sym__comment_end,
  [13495] = 2,
    ACTIONS(2111), 1,
      sym_comment_text,
    ACTIONS(2113), 1,
      sym__comment_end,
  [13502] = 2,
    ACTIONS(2105), 1,
      anon_sym_EQ,
    STATE(688), 1,
      sym_assign_operator,
  [13509] = 2,
    ACTIONS(2115), 1,
      sym_comment_text,
    ACTIONS(2117), 1,
      sym__comment_end,
  [13516] = 2,
    ACTIONS(2119), 1,
      sym_comment_text,
    ACTIONS(2121), 1,
      sym__comment_end,
  [13523] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1230), 1,
      sym_param_doc_tag,
  [13530] = 2,
    ACTIONS(2125), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_assign_operator,
  [13537] = 2,
    ACTIONS(2127), 1,
      anon_sym_EQ,
    STATE(1183), 1,
      sym_assign_operator,
  [13544] = 2,
    ACTIONS(2129), 1,
      anon_sym_EQ,
    STATE(692), 1,
      sym_assign_operator,
  [13551] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1347), 1,
      sym_param_doc_tag,
  [13558] = 1,
    ACTIONS(2131), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13563] = 1,
    ACTIONS(2133), 2,
      sym_arrow,
      sym_colon,
  [13568] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(393), 1,
      sym__until_complement,
  [13575] = 1,
    ACTIONS(2135), 2,
      sym_newline,
      sym__inline_comment,
  [13580] = 2,
    ACTIONS(2137), 1,
      sym__one_integer_literal,
    ACTIONS(2139), 1,
      sym__other_integer_literal,
  [13587] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(394), 1,
      sym__from_complement,
  [13594] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(535), 1,
      sym__until_complement,
  [13601] = 2,
    ACTIONS(1995), 1,
      sym__snake_kebab_name,
    STATE(1323), 1,
      sym_cap_name,
  [13608] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(398), 1,
      sym__from_complement,
  [13615] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(400), 1,
      sym__until_complement,
  [13622] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(401), 1,
      sym__until_complement,
  [13629] = 2,
    ACTIONS(2141), 1,
      aux_sym__doc_space_token1,
    STATE(1288), 1,
      sym__doc_space,
  [13636] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(409), 1,
      sym__until_complement,
  [13643] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1312), 1,
      sym_param_doc_tag,
  [13650] = 1,
    ACTIONS(2143), 2,
      sym_rparen,
      sym_comma,
  [13655] = 2,
    ACTIONS(2145), 1,
      sym_text_line,
    STATE(940), 1,
      sym_property_value,
  [13662] = 2,
    ACTIONS(1993), 1,
      sym_snake_name,
    STATE(441), 1,
      sym_agent,
  [13669] = 2,
    ACTIONS(2001), 1,
      anon_sym_EQ,
    STATE(13), 1,
      sym_assign_operator,
  [13676] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(460), 1,
      sym__from_complement,
  [13683] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(461), 1,
      sym__until_complement,
  [13690] = 2,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(242), 1,
      sym__implicit_run_line,
  [13697] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(464), 1,
      sym__from_complement,
  [13704] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(466), 1,
      sym__until_complement,
  [13711] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(467), 1,
      sym__until_complement,
  [13718] = 2,
    ACTIONS(2147), 1,
      sym_arrow,
    ACTIONS(2149), 1,
      sym_colon,
  [13725] = 2,
    ACTIONS(576), 1,
      sym__until_start,
    STATE(475), 1,
      sym__until_complement,
  [13732] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1238), 1,
      sym_param_doc_tag,
  [13739] = 2,
    ACTIONS(2151), 1,
      sym_arrow,
    ACTIONS(2153), 1,
      sym_colon,
  [13746] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1260), 1,
      sym_param_doc_tag,
  [13753] = 2,
    ACTIONS(2155), 1,
      sym_comment_text,
    ACTIONS(2157), 1,
      sym__comment_end,
  [13760] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1283), 1,
      sym_param_doc_tag,
  [13767] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1294), 1,
      sym_param_doc_tag,
  [13774] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1301), 1,
      sym_param_doc_tag,
  [13781] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1321), 1,
      sym_param_doc_tag,
  [13788] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1335), 1,
      sym_param_doc_tag,
  [13795] = 2,
    ACTIONS(2123), 1,
      anon_sym_ATparam,
    STATE(1352), 1,
      sym_param_doc_tag,
  [13802] = 2,
    ACTIONS(2159), 1,
      sym_comment_text,
    ACTIONS(2161), 1,
      sym__comment_end,
  [13809] = 2,
    ACTIONS(2105), 1,
      anon_sym_EQ,
    STATE(1168), 1,
      sym_assign_operator,
  [13816] = 2,
    ACTIONS(2105), 1,
      anon_sym_EQ,
    STATE(852), 1,
      sym_assign_operator,
  [13823] = 2,
    ACTIONS(2125), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_assign_operator,
  [13830] = 2,
    ACTIONS(2129), 1,
      anon_sym_EQ,
    STATE(854), 1,
      sym_assign_operator,
  [13837] = 1,
    ACTIONS(1150), 2,
      sym_blank_line,
      sym__text_indent,
  [13842] = 1,
    ACTIONS(2163), 2,
      sym_newline,
      sym__inline_comment,
  [13847] = 1,
    ACTIONS(2165), 2,
      sym_newline,
      sym__inline_comment,
  [13852] = 1,
    ACTIONS(1595), 2,
      sym_newline,
      sym__inline_comment,
  [13857] = 2,
    ACTIONS(2167), 1,
      sym_snake_name,
    STATE(1116), 1,
      sym_field_name,
  [13864] = 1,
    ACTIONS(1599), 2,
      sym_newline,
      sym__inline_comment,
  [13869] = 2,
    ACTIONS(2169), 1,
      aux_sym__doc_space_token1,
    STATE(1038), 1,
      sym__doc_space,
  [13876] = 2,
    ACTIONS(540), 1,
      sym__line_start,
    STATE(142), 1,
      sym_field,
  [13883] = 2,
    ACTIONS(203), 1,
      sym__agic_raw_text,
    STATE(505), 1,
      sym__unroled_message_line,
  [13890] = 2,
    ACTIONS(1993), 1,
      sym_snake_name,
    STATE(265), 1,
      sym_agent,
  [13897] = 1,
    ACTIONS(2171), 2,
      sym_rparen,
      sym_comma,
  [13902] = 1,
    ACTIONS(1200), 2,
      sym_newline,
      sym__inline_comment,
  [13907] = 1,
    ACTIONS(1202), 2,
      sym_newline,
      sym__inline_comment,
  [13912] = 2,
    ACTIONS(2019), 1,
      sym__reduce_text_start,
    STATE(648), 1,
      sym__reduce_text_body,
  [13919] = 2,
    ACTIONS(2173), 1,
      sym_snake_name,
    STATE(1165), 1,
      sym_property_key,
  [13926] = 2,
    ACTIONS(511), 1,
      sym__from_start,
    STATE(390), 1,
      sym__from_complement,
  [13933] = 1,
    ACTIONS(2175), 2,
      sym_arrow,
      sym_colon,
  [13938] = 2,
    ACTIONS(2177), 1,
      anon_sym_lanes,
    STATE(364), 1,
      sym_flow_lanes_keyword,
  [13945] = 2,
    ACTIONS(2001), 1,
      anon_sym_EQ,
    STATE(14), 1,
      sym_assign_operator,
  [13952] = 1,
    ACTIONS(2179), 1,
      sym_colon,
  [13956] = 1,
    ACTIONS(2181), 1,
      sym_newline,
  [13960] = 1,
    ACTIONS(2183), 1,
      sym__comment_end,
  [13964] = 1,
    ACTIONS(2185), 1,
      sym_colon,
  [13968] = 1,
    ACTIONS(2187), 1,
      sym_flow_lane_keyword,
  [13972] = 1,
    ACTIONS(385), 1,
      sym__dedent,
  [13976] = 1,
    ACTIONS(2189), 1,
      sym_colon,
  [13980] = 1,
    ACTIONS(2191), 1,
      sym__comment_end,
  [13984] = 1,
    ACTIONS(2193), 1,
      sym__dedent,
  [13988] = 1,
    ACTIONS(2195), 1,
      sym__comment_end,
  [13992] = 1,
    ACTIONS(2197), 1,
      sym__comment_end,
  [13996] = 1,
    ACTIONS(2199), 1,
      sym_cap_kind,
  [14000] = 1,
    ACTIONS(2131), 1,
      sym_directive_value,
  [14004] = 1,
    ACTIONS(1869), 1,
      sym__dedent,
  [14008] = 1,
    ACTIONS(2201), 1,
      sym_flow_exec_keyword,
  [14012] = 1,
    ACTIONS(2203), 1,
      sym_newline,
  [14016] = 1,
    ACTIONS(2205), 1,
      sym_colon,
  [14020] = 1,
    ACTIONS(2207), 1,
      sym_integer_literal,
  [14024] = 1,
    ACTIONS(2209), 1,
      sym_colon,
  [14028] = 1,
    ACTIONS(2211), 1,
      sym_colon,
  [14032] = 1,
    ACTIONS(2213), 1,
      anon_sym_EQ,
  [14036] = 1,
    ACTIONS(2215), 1,
      sym_colon,
  [14040] = 1,
    ACTIONS(2217), 1,
      sym_colon,
  [14044] = 1,
    ACTIONS(2219), 1,
      sym_flow_exec_keyword,
  [14048] = 1,
    ACTIONS(2221), 1,
      sym_flow_exec_keyword,
  [14052] = 1,
    ACTIONS(2223), 1,
      sym_colon,
  [14056] = 1,
    ACTIONS(2225), 1,
      sym_flow_time_keyword,
  [14060] = 1,
    ACTIONS(2227), 1,
      sym_colon,
  [14064] = 1,
    ACTIONS(2229), 1,
      anon_sym_EQ,
  [14068] = 1,
    ACTIONS(2231), 1,
      sym__comment_end,
  [14072] = 1,
    ACTIONS(2233), 1,
      sym__comment_end,
  [14076] = 1,
    ACTIONS(2235), 1,
      sym_colon,
  [14080] = 1,
    ACTIONS(2237), 1,
      sym__comment_end,
  [14084] = 1,
    ACTIONS(2239), 1,
      sym_colon,
  [14088] = 1,
    ACTIONS(2241), 1,
      sym_newline,
  [14092] = 1,
    ACTIONS(2243), 1,
      sym_colon,
  [14096] = 1,
    ACTIONS(2245), 1,
      sym_colon,
  [14100] = 1,
    ACTIONS(2247), 1,
      sym_flow_from_keyword,
  [14104] = 1,
    ACTIONS(2249), 1,
      sym__dedent,
  [14108] = 1,
    ACTIONS(2251), 1,
      sym__comment_end,
  [14112] = 1,
    ACTIONS(2253), 1,
      sym_colon,
  [14116] = 1,
    ACTIONS(2255), 1,
      sym_flow_exec_keyword,
  [14120] = 1,
    ACTIONS(2225), 1,
      sym_flow_times_keyword,
  [14124] = 1,
    ACTIONS(2257), 1,
      sym_colon,
  [14128] = 1,
    ACTIONS(2259), 1,
      sym_integer_literal,
  [14132] = 1,
    ACTIONS(2261), 1,
      sym__dedent,
  [14136] = 1,
    ACTIONS(2263), 1,
      sym_integer_literal,
  [14140] = 1,
    ACTIONS(2265), 1,
      sym_colon,
  [14144] = 1,
    ACTIONS(2267), 1,
      sym_colon,
  [14148] = 1,
    ACTIONS(2269), 1,
      sym_flow_exec_keyword,
  [14152] = 1,
    ACTIONS(2271), 1,
      sym__dedent,
  [14156] = 1,
    ACTIONS(2273), 1,
      sym_newline,
  [14160] = 1,
    ACTIONS(2275), 1,
      sym_colon,
  [14164] = 1,
    ACTIONS(2277), 1,
      sym__comment_end,
  [14168] = 1,
    ACTIONS(2279), 1,
      sym__comment_end,
  [14172] = 1,
    ACTIONS(2281), 1,
      sym__comment_end,
  [14176] = 1,
    ACTIONS(1707), 1,
      sym__dedent,
  [14180] = 1,
    ACTIONS(2283), 1,
      sym_newline,
  [14184] = 1,
    ACTIONS(2285), 1,
      sym_colon,
  [14188] = 1,
    ACTIONS(2287), 1,
      sym_colon,
  [14192] = 1,
    ACTIONS(2289), 1,
      sym_comment_text,
  [14196] = 1,
    ACTIONS(2291), 1,
      sym__dedent,
  [14200] = 1,
    ACTIONS(2293), 1,
      sym_newline,
  [14204] = 1,
    ACTIONS(2295), 1,
      sym__comment_end,
  [14208] = 1,
    ACTIONS(2297), 1,
      sym_colon,
  [14212] = 1,
    ACTIONS(2299), 1,
      sym__comment_end,
  [14216] = 1,
    ACTIONS(2301), 1,
      sym__comment_end,
  [14220] = 1,
    ACTIONS(2303), 1,
      sym_newline,
  [14224] = 1,
    ACTIONS(2305), 1,
      sym_newline,
  [14228] = 1,
    ACTIONS(2307), 1,
      sym_colon,
  [14232] = 1,
    ACTIONS(2309), 1,
      sym_colon,
  [14236] = 1,
    ACTIONS(2311), 1,
      sym__comment_end,
  [14240] = 1,
    ACTIONS(1655), 1,
      aux_sym__doc_space_token1,
  [14244] = 1,
    ACTIONS(2313), 1,
      sym__comment_end,
  [14248] = 1,
    ACTIONS(2315), 1,
      sym_newline,
  [14252] = 1,
    ACTIONS(2317), 1,
      sym_colon,
  [14256] = 1,
    ACTIONS(2319), 1,
      sym__dedent,
  [14260] = 1,
    ACTIONS(2321), 1,
      sym__dedent,
  [14264] = 1,
    ACTIONS(2323), 1,
      sym_integer_literal,
  [14268] = 1,
    ACTIONS(381), 1,
      sym__dedent,
  [14272] = 1,
    ACTIONS(2325), 1,
      sym__comment_end,
  [14276] = 1,
    ACTIONS(2327), 1,
      sym__comment_end,
  [14280] = 1,
    ACTIONS(2329), 1,
      sym_colon,
  [14284] = 1,
    ACTIONS(2331), 1,
      sym_newline,
  [14288] = 1,
    ACTIONS(2333), 1,
      sym__comment_end,
  [14292] = 1,
    ACTIONS(2335), 1,
      sym_newline,
  [14296] = 1,
    ACTIONS(2337), 1,
      sym_newline,
  [14300] = 1,
    ACTIONS(2339), 1,
      sym_colon,
  [14304] = 1,
    ACTIONS(2341), 1,
      sym_colon,
  [14308] = 1,
    ACTIONS(2343), 1,
      sym__comment_end,
  [14312] = 1,
    ACTIONS(2345), 1,
      sym__dedent,
  [14316] = 1,
    ACTIONS(2347), 1,
      sym__comment_end,
  [14320] = 1,
    ACTIONS(2349), 1,
      sym_newline,
  [14324] = 1,
    ACTIONS(2351), 1,
      sym__comment_end,
  [14328] = 1,
    ACTIONS(2353), 1,
      sym__comment_end,
  [14332] = 1,
    ACTIONS(2355), 1,
      sym_colon,
  [14336] = 1,
    ACTIONS(2357), 1,
      sym__comment_end,
  [14340] = 1,
    ACTIONS(2359), 1,
      sym_newline,
  [14344] = 1,
    ACTIONS(2361), 1,
      sym_colon,
  [14348] = 1,
    ACTIONS(2363), 1,
      sym_directive_value,
  [14352] = 1,
    ACTIONS(2365), 1,
      sym__comment_end,
  [14356] = 1,
    ACTIONS(2367), 1,
      sym_flow_exec_keyword,
  [14360] = 1,
    ACTIONS(2369), 1,
      sym_colon,
  [14364] = 1,
    ACTIONS(2371), 1,
      sym_colon,
  [14368] = 1,
    ACTIONS(2373), 1,
      sym__comment_end,
  [14372] = 1,
    ACTIONS(2375), 1,
      sym__comment_end,
  [14376] = 1,
    ACTIONS(2377), 1,
      sym_colon,
  [14380] = 1,
    ACTIONS(2379), 1,
      sym__comment_end,
  [14384] = 1,
    ACTIONS(2381), 1,
      sym_newline,
  [14388] = 1,
    ACTIONS(2383), 1,
      sym_flow_lane_keyword,
  [14392] = 1,
    ACTIONS(2385), 1,
      sym_newline,
  [14396] = 1,
    ACTIONS(2387), 1,
      sym_colon,
  [14400] = 1,
    ACTIONS(2389), 1,
      sym_integer_literal,
  [14404] = 1,
    ACTIONS(2391), 1,
      sym__comment_end,
  [14408] = 1,
    ACTIONS(2029), 1,
      sym_directive_value,
  [14412] = 1,
    ACTIONS(2393), 1,
      sym_colon,
  [14416] = 1,
    ACTIONS(2395), 1,
      sym_flow_until_keyword,
  [14420] = 1,
    ACTIONS(2397), 1,
      sym__comment_end,
  [14424] = 1,
    ACTIONS(2399), 1,
      sym__comment_end,
  [14428] = 1,
    ACTIONS(2401), 1,
      sym__comment_end,
  [14432] = 1,
    ACTIONS(279), 1,
      sym_text_line,
  [14436] = 1,
    ACTIONS(2403), 1,
      ts_builtin_sym_end,
  [14440] = 1,
    ACTIONS(2405), 1,
      sym__dedent,
  [14444] = 1,
    ACTIONS(2407), 1,
      sym_colon,
  [14448] = 1,
    ACTIONS(2409), 1,
      sym__comment_end,
  [14452] = 1,
    ACTIONS(2411), 1,
      sym__dedent,
  [14456] = 1,
    ACTIONS(2413), 1,
      sym_newline,
  [14460] = 1,
    ACTIONS(2415), 1,
      sym_colon,
  [14464] = 1,
    ACTIONS(2417), 1,
      sym_colon,
  [14468] = 1,
    ACTIONS(2419), 1,
      sym__dedent,
  [14472] = 1,
    ACTIONS(2421), 1,
      sym_colon,
  [14476] = 1,
    ACTIONS(2423), 1,
      sym_runnable_ref,
  [14480] = 1,
    ACTIONS(1953), 1,
      anon_sym_EQ,
  [14484] = 1,
    ACTIONS(2425), 1,
      sym_colon,
  [14488] = 1,
    ACTIONS(2427), 1,
      sym__comment_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 295,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 405,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 523,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 581,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 677,
  [SMALL_STATE(22)] = 710,
  [SMALL_STATE(23)] = 743,
  [SMALL_STATE(24)] = 776,
  [SMALL_STATE(25)] = 809,
  [SMALL_STATE(26)] = 842,
  [SMALL_STATE(27)] = 875,
  [SMALL_STATE(28)] = 899,
  [SMALL_STATE(29)] = 931,
  [SMALL_STATE(30)] = 955,
  [SMALL_STATE(31)] = 979,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1051,
  [SMALL_STATE(35)] = 1075,
  [SMALL_STATE(36)] = 1099,
  [SMALL_STATE(37)] = 1123,
  [SMALL_STATE(38)] = 1147,
  [SMALL_STATE(39)] = 1179,
  [SMALL_STATE(40)] = 1203,
  [SMALL_STATE(41)] = 1235,
  [SMALL_STATE(42)] = 1259,
  [SMALL_STATE(43)] = 1283,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1331,
  [SMALL_STATE(46)] = 1355,
  [SMALL_STATE(47)] = 1379,
  [SMALL_STATE(48)] = 1403,
  [SMALL_STATE(49)] = 1432,
  [SMALL_STATE(50)] = 1461,
  [SMALL_STATE(51)] = 1490,
  [SMALL_STATE(52)] = 1519,
  [SMALL_STATE(53)] = 1545,
  [SMALL_STATE(54)] = 1571,
  [SMALL_STATE(55)] = 1597,
  [SMALL_STATE(56)] = 1623,
  [SMALL_STATE(57)] = 1647,
  [SMALL_STATE(58)] = 1673,
  [SMALL_STATE(59)] = 1699,
  [SMALL_STATE(60)] = 1725,
  [SMALL_STATE(61)] = 1751,
  [SMALL_STATE(62)] = 1779,
  [SMALL_STATE(63)] = 1805,
  [SMALL_STATE(64)] = 1829,
  [SMALL_STATE(65)] = 1853,
  [SMALL_STATE(66)] = 1877,
  [SMALL_STATE(67)] = 1903,
  [SMALL_STATE(68)] = 1931,
  [SMALL_STATE(69)] = 1959,
  [SMALL_STATE(70)] = 1985,
  [SMALL_STATE(71)] = 2011,
  [SMALL_STATE(72)] = 2034,
  [SMALL_STATE(73)] = 2053,
  [SMALL_STATE(74)] = 2072,
  [SMALL_STATE(75)] = 2095,
  [SMALL_STATE(76)] = 2118,
  [SMALL_STATE(77)] = 2141,
  [SMALL_STATE(78)] = 2160,
  [SMALL_STATE(79)] = 2179,
  [SMALL_STATE(80)] = 2198,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2240,
  [SMALL_STATE(83)] = 2263,
  [SMALL_STATE(84)] = 2288,
  [SMALL_STATE(85)] = 2313,
  [SMALL_STATE(86)] = 2338,
  [SMALL_STATE(87)] = 2363,
  [SMALL_STATE(88)] = 2386,
  [SMALL_STATE(89)] = 2405,
  [SMALL_STATE(90)] = 2428,
  [SMALL_STATE(91)] = 2449,
  [SMALL_STATE(92)] = 2472,
  [SMALL_STATE(93)] = 2497,
  [SMALL_STATE(94)] = 2516,
  [SMALL_STATE(95)] = 2535,
  [SMALL_STATE(96)] = 2560,
  [SMALL_STATE(97)] = 2579,
  [SMALL_STATE(98)] = 2599,
  [SMALL_STATE(99)] = 2619,
  [SMALL_STATE(100)] = 2637,
  [SMALL_STATE(101)] = 2655,
  [SMALL_STATE(102)] = 2673,
  [SMALL_STATE(103)] = 2691,
  [SMALL_STATE(104)] = 2709,
  [SMALL_STATE(105)] = 2727,
  [SMALL_STATE(106)] = 2747,
  [SMALL_STATE(107)] = 2765,
  [SMALL_STATE(108)] = 2783,
  [SMALL_STATE(109)] = 2801,
  [SMALL_STATE(110)] = 2821,
  [SMALL_STATE(111)] = 2841,
  [SMALL_STATE(112)] = 2861,
  [SMALL_STATE(113)] = 2881,
  [SMALL_STATE(114)] = 2899,
  [SMALL_STATE(115)] = 2915,
  [SMALL_STATE(116)] = 2933,
  [SMALL_STATE(117)] = 2951,
  [SMALL_STATE(118)] = 2969,
  [SMALL_STATE(119)] = 2987,
  [SMALL_STATE(120)] = 3005,
  [SMALL_STATE(121)] = 3023,
  [SMALL_STATE(122)] = 3041,
  [SMALL_STATE(123)] = 3059,
  [SMALL_STATE(124)] = 3077,
  [SMALL_STATE(125)] = 3099,
  [SMALL_STATE(126)] = 3113,
  [SMALL_STATE(127)] = 3131,
  [SMALL_STATE(128)] = 3145,
  [SMALL_STATE(129)] = 3163,
  [SMALL_STATE(130)] = 3185,
  [SMALL_STATE(131)] = 3203,
  [SMALL_STATE(132)] = 3223,
  [SMALL_STATE(133)] = 3241,
  [SMALL_STATE(134)] = 3259,
  [SMALL_STATE(135)] = 3279,
  [SMALL_STATE(136)] = 3297,
  [SMALL_STATE(137)] = 3317,
  [SMALL_STATE(138)] = 3337,
  [SMALL_STATE(139)] = 3357,
  [SMALL_STATE(140)] = 3377,
  [SMALL_STATE(141)] = 3395,
  [SMALL_STATE(142)] = 3413,
  [SMALL_STATE(143)] = 3431,
  [SMALL_STATE(144)] = 3449,
  [SMALL_STATE(145)] = 3471,
  [SMALL_STATE(146)] = 3489,
  [SMALL_STATE(147)] = 3505,
  [SMALL_STATE(148)] = 3523,
  [SMALL_STATE(149)] = 3541,
  [SMALL_STATE(150)] = 3561,
  [SMALL_STATE(151)] = 3581,
  [SMALL_STATE(152)] = 3603,
  [SMALL_STATE(153)] = 3623,
  [SMALL_STATE(154)] = 3643,
  [SMALL_STATE(155)] = 3663,
  [SMALL_STATE(156)] = 3683,
  [SMALL_STATE(157)] = 3701,
  [SMALL_STATE(158)] = 3719,
  [SMALL_STATE(159)] = 3737,
  [SMALL_STATE(160)] = 3755,
  [SMALL_STATE(161)] = 3773,
  [SMALL_STATE(162)] = 3791,
  [SMALL_STATE(163)] = 3809,
  [SMALL_STATE(164)] = 3827,
  [SMALL_STATE(165)] = 3843,
  [SMALL_STATE(166)] = 3861,
  [SMALL_STATE(167)] = 3879,
  [SMALL_STATE(168)] = 3897,
  [SMALL_STATE(169)] = 3916,
  [SMALL_STATE(170)] = 3929,
  [SMALL_STATE(171)] = 3938,
  [SMALL_STATE(172)] = 3951,
  [SMALL_STATE(173)] = 3960,
  [SMALL_STATE(174)] = 3977,
  [SMALL_STATE(175)] = 3994,
  [SMALL_STATE(176)] = 4003,
  [SMALL_STATE(177)] = 4022,
  [SMALL_STATE(178)] = 4039,
  [SMALL_STATE(179)] = 4052,
  [SMALL_STATE(180)] = 4069,
  [SMALL_STATE(181)] = 4088,
  [SMALL_STATE(182)] = 4101,
  [SMALL_STATE(183)] = 4118,
  [SMALL_STATE(184)] = 4137,
  [SMALL_STATE(185)] = 4156,
  [SMALL_STATE(186)] = 4175,
  [SMALL_STATE(187)] = 4192,
  [SMALL_STATE(188)] = 4209,
  [SMALL_STATE(189)] = 4228,
  [SMALL_STATE(190)] = 4245,
  [SMALL_STATE(191)] = 4258,
  [SMALL_STATE(192)] = 4277,
  [SMALL_STATE(193)] = 4294,
  [SMALL_STATE(194)] = 4313,
  [SMALL_STATE(195)] = 4332,
  [SMALL_STATE(196)] = 4351,
  [SMALL_STATE(197)] = 4368,
  [SMALL_STATE(198)] = 4383,
  [SMALL_STATE(199)] = 4400,
  [SMALL_STATE(200)] = 4413,
  [SMALL_STATE(201)] = 4432,
  [SMALL_STATE(202)] = 4451,
  [SMALL_STATE(203)] = 4466,
  [SMALL_STATE(204)] = 4483,
  [SMALL_STATE(205)] = 4498,
  [SMALL_STATE(206)] = 4517,
  [SMALL_STATE(207)] = 4532,
  [SMALL_STATE(208)] = 4551,
  [SMALL_STATE(209)] = 4566,
  [SMALL_STATE(210)] = 4585,
  [SMALL_STATE(211)] = 4600,
  [SMALL_STATE(212)] = 4617,
  [SMALL_STATE(213)] = 4636,
  [SMALL_STATE(214)] = 4655,
  [SMALL_STATE(215)] = 4674,
  [SMALL_STATE(216)] = 4693,
  [SMALL_STATE(217)] = 4710,
  [SMALL_STATE(218)] = 4729,
  [SMALL_STATE(219)] = 4746,
  [SMALL_STATE(220)] = 4765,
  [SMALL_STATE(221)] = 4782,
  [SMALL_STATE(222)] = 4801,
  [SMALL_STATE(223)] = 4818,
  [SMALL_STATE(224)] = 4832,
  [SMALL_STATE(225)] = 4846,
  [SMALL_STATE(226)] = 4854,
  [SMALL_STATE(227)] = 4862,
  [SMALL_STATE(228)] = 4876,
  [SMALL_STATE(229)] = 4890,
  [SMALL_STATE(230)] = 4906,
  [SMALL_STATE(231)] = 4914,
  [SMALL_STATE(232)] = 4922,
  [SMALL_STATE(233)] = 4930,
  [SMALL_STATE(234)] = 4938,
  [SMALL_STATE(235)] = 4946,
  [SMALL_STATE(236)] = 4954,
  [SMALL_STATE(237)] = 4962,
  [SMALL_STATE(238)] = 4970,
  [SMALL_STATE(239)] = 4978,
  [SMALL_STATE(240)] = 4986,
  [SMALL_STATE(241)] = 5002,
  [SMALL_STATE(242)] = 5016,
  [SMALL_STATE(243)] = 5024,
  [SMALL_STATE(244)] = 5032,
  [SMALL_STATE(245)] = 5040,
  [SMALL_STATE(246)] = 5048,
  [SMALL_STATE(247)] = 5056,
  [SMALL_STATE(248)] = 5064,
  [SMALL_STATE(249)] = 5072,
  [SMALL_STATE(250)] = 5080,
  [SMALL_STATE(251)] = 5088,
  [SMALL_STATE(252)] = 5096,
  [SMALL_STATE(253)] = 5104,
  [SMALL_STATE(254)] = 5112,
  [SMALL_STATE(255)] = 5120,
  [SMALL_STATE(256)] = 5128,
  [SMALL_STATE(257)] = 5136,
  [SMALL_STATE(258)] = 5144,
  [SMALL_STATE(259)] = 5152,
  [SMALL_STATE(260)] = 5160,
  [SMALL_STATE(261)] = 5168,
  [SMALL_STATE(262)] = 5176,
  [SMALL_STATE(263)] = 5184,
  [SMALL_STATE(264)] = 5192,
  [SMALL_STATE(265)] = 5206,
  [SMALL_STATE(266)] = 5222,
  [SMALL_STATE(267)] = 5230,
  [SMALL_STATE(268)] = 5238,
  [SMALL_STATE(269)] = 5246,
  [SMALL_STATE(270)] = 5254,
  [SMALL_STATE(271)] = 5262,
  [SMALL_STATE(272)] = 5270,
  [SMALL_STATE(273)] = 5278,
  [SMALL_STATE(274)] = 5286,
  [SMALL_STATE(275)] = 5294,
  [SMALL_STATE(276)] = 5302,
  [SMALL_STATE(277)] = 5310,
  [SMALL_STATE(278)] = 5318,
  [SMALL_STATE(279)] = 5326,
  [SMALL_STATE(280)] = 5334,
  [SMALL_STATE(281)] = 5342,
  [SMALL_STATE(282)] = 5350,
  [SMALL_STATE(283)] = 5358,
  [SMALL_STATE(284)] = 5366,
  [SMALL_STATE(285)] = 5374,
  [SMALL_STATE(286)] = 5382,
  [SMALL_STATE(287)] = 5390,
  [SMALL_STATE(288)] = 5398,
  [SMALL_STATE(289)] = 5406,
  [SMALL_STATE(290)] = 5414,
  [SMALL_STATE(291)] = 5422,
  [SMALL_STATE(292)] = 5430,
  [SMALL_STATE(293)] = 5438,
  [SMALL_STATE(294)] = 5446,
  [SMALL_STATE(295)] = 5454,
  [SMALL_STATE(296)] = 5462,
  [SMALL_STATE(297)] = 5470,
  [SMALL_STATE(298)] = 5478,
  [SMALL_STATE(299)] = 5486,
  [SMALL_STATE(300)] = 5494,
  [SMALL_STATE(301)] = 5502,
  [SMALL_STATE(302)] = 5510,
  [SMALL_STATE(303)] = 5518,
  [SMALL_STATE(304)] = 5526,
  [SMALL_STATE(305)] = 5534,
  [SMALL_STATE(306)] = 5542,
  [SMALL_STATE(307)] = 5550,
  [SMALL_STATE(308)] = 5558,
  [SMALL_STATE(309)] = 5566,
  [SMALL_STATE(310)] = 5574,
  [SMALL_STATE(311)] = 5582,
  [SMALL_STATE(312)] = 5590,
  [SMALL_STATE(313)] = 5598,
  [SMALL_STATE(314)] = 5606,
  [SMALL_STATE(315)] = 5614,
  [SMALL_STATE(316)] = 5622,
  [SMALL_STATE(317)] = 5630,
  [SMALL_STATE(318)] = 5638,
  [SMALL_STATE(319)] = 5646,
  [SMALL_STATE(320)] = 5654,
  [SMALL_STATE(321)] = 5662,
  [SMALL_STATE(322)] = 5670,
  [SMALL_STATE(323)] = 5678,
  [SMALL_STATE(324)] = 5686,
  [SMALL_STATE(325)] = 5694,
  [SMALL_STATE(326)] = 5702,
  [SMALL_STATE(327)] = 5710,
  [SMALL_STATE(328)] = 5718,
  [SMALL_STATE(329)] = 5726,
  [SMALL_STATE(330)] = 5734,
  [SMALL_STATE(331)] = 5748,
  [SMALL_STATE(332)] = 5756,
  [SMALL_STATE(333)] = 5764,
  [SMALL_STATE(334)] = 5772,
  [SMALL_STATE(335)] = 5780,
  [SMALL_STATE(336)] = 5788,
  [SMALL_STATE(337)] = 5796,
  [SMALL_STATE(338)] = 5804,
  [SMALL_STATE(339)] = 5812,
  [SMALL_STATE(340)] = 5820,
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
  [SMALL_STATE(357)] = 5962,
  [SMALL_STATE(358)] = 5976,
  [SMALL_STATE(359)] = 5990,
  [SMALL_STATE(360)] = 6004,
  [SMALL_STATE(361)] = 6020,
  [SMALL_STATE(362)] = 6034,
  [SMALL_STATE(363)] = 6048,
  [SMALL_STATE(364)] = 6062,
  [SMALL_STATE(365)] = 6070,
  [SMALL_STATE(366)] = 6078,
  [SMALL_STATE(367)] = 6092,
  [SMALL_STATE(368)] = 6106,
  [SMALL_STATE(369)] = 6120,
  [SMALL_STATE(370)] = 6136,
  [SMALL_STATE(371)] = 6152,
  [SMALL_STATE(372)] = 6160,
  [SMALL_STATE(373)] = 6174,
  [SMALL_STATE(374)] = 6188,
  [SMALL_STATE(375)] = 6204,
  [SMALL_STATE(376)] = 6220,
  [SMALL_STATE(377)] = 6234,
  [SMALL_STATE(378)] = 6248,
  [SMALL_STATE(379)] = 6264,
  [SMALL_STATE(380)] = 6278,
  [SMALL_STATE(381)] = 6294,
  [SMALL_STATE(382)] = 6310,
  [SMALL_STATE(383)] = 6326,
  [SMALL_STATE(384)] = 6340,
  [SMALL_STATE(385)] = 6354,
  [SMALL_STATE(386)] = 6368,
  [SMALL_STATE(387)] = 6382,
  [SMALL_STATE(388)] = 6398,
  [SMALL_STATE(389)] = 6414,
  [SMALL_STATE(390)] = 6428,
  [SMALL_STATE(391)] = 6442,
  [SMALL_STATE(392)] = 6458,
  [SMALL_STATE(393)] = 6472,
  [SMALL_STATE(394)] = 6486,
  [SMALL_STATE(395)] = 6500,
  [SMALL_STATE(396)] = 6514,
  [SMALL_STATE(397)] = 6528,
  [SMALL_STATE(398)] = 6542,
  [SMALL_STATE(399)] = 6556,
  [SMALL_STATE(400)] = 6570,
  [SMALL_STATE(401)] = 6584,
  [SMALL_STATE(402)] = 6598,
  [SMALL_STATE(403)] = 6612,
  [SMALL_STATE(404)] = 6626,
  [SMALL_STATE(405)] = 6640,
  [SMALL_STATE(406)] = 6654,
  [SMALL_STATE(407)] = 6668,
  [SMALL_STATE(408)] = 6682,
  [SMALL_STATE(409)] = 6696,
  [SMALL_STATE(410)] = 6710,
  [SMALL_STATE(411)] = 6724,
  [SMALL_STATE(412)] = 6738,
  [SMALL_STATE(413)] = 6752,
  [SMALL_STATE(414)] = 6766,
  [SMALL_STATE(415)] = 6780,
  [SMALL_STATE(416)] = 6794,
  [SMALL_STATE(417)] = 6808,
  [SMALL_STATE(418)] = 6822,
  [SMALL_STATE(419)] = 6836,
  [SMALL_STATE(420)] = 6850,
  [SMALL_STATE(421)] = 6864,
  [SMALL_STATE(422)] = 6878,
  [SMALL_STATE(423)] = 6892,
  [SMALL_STATE(424)] = 6906,
  [SMALL_STATE(425)] = 6920,
  [SMALL_STATE(426)] = 6934,
  [SMALL_STATE(427)] = 6948,
  [SMALL_STATE(428)] = 6962,
  [SMALL_STATE(429)] = 6976,
  [SMALL_STATE(430)] = 6992,
  [SMALL_STATE(431)] = 7008,
  [SMALL_STATE(432)] = 7022,
  [SMALL_STATE(433)] = 7038,
  [SMALL_STATE(434)] = 7052,
  [SMALL_STATE(435)] = 7066,
  [SMALL_STATE(436)] = 7082,
  [SMALL_STATE(437)] = 7098,
  [SMALL_STATE(438)] = 7112,
  [SMALL_STATE(439)] = 7126,
  [SMALL_STATE(440)] = 7140,
  [SMALL_STATE(441)] = 7154,
  [SMALL_STATE(442)] = 7170,
  [SMALL_STATE(443)] = 7184,
  [SMALL_STATE(444)] = 7198,
  [SMALL_STATE(445)] = 7214,
  [SMALL_STATE(446)] = 7222,
  [SMALL_STATE(447)] = 7238,
  [SMALL_STATE(448)] = 7254,
  [SMALL_STATE(449)] = 7270,
  [SMALL_STATE(450)] = 7284,
  [SMALL_STATE(451)] = 7298,
  [SMALL_STATE(452)] = 7312,
  [SMALL_STATE(453)] = 7326,
  [SMALL_STATE(454)] = 7342,
  [SMALL_STATE(455)] = 7358,
  [SMALL_STATE(456)] = 7372,
  [SMALL_STATE(457)] = 7386,
  [SMALL_STATE(458)] = 7402,
  [SMALL_STATE(459)] = 7416,
  [SMALL_STATE(460)] = 7430,
  [SMALL_STATE(461)] = 7444,
  [SMALL_STATE(462)] = 7458,
  [SMALL_STATE(463)] = 7472,
  [SMALL_STATE(464)] = 7486,
  [SMALL_STATE(465)] = 7500,
  [SMALL_STATE(466)] = 7514,
  [SMALL_STATE(467)] = 7528,
  [SMALL_STATE(468)] = 7542,
  [SMALL_STATE(469)] = 7556,
  [SMALL_STATE(470)] = 7570,
  [SMALL_STATE(471)] = 7584,
  [SMALL_STATE(472)] = 7598,
  [SMALL_STATE(473)] = 7612,
  [SMALL_STATE(474)] = 7626,
  [SMALL_STATE(475)] = 7640,
  [SMALL_STATE(476)] = 7654,
  [SMALL_STATE(477)] = 7668,
  [SMALL_STATE(478)] = 7682,
  [SMALL_STATE(479)] = 7696,
  [SMALL_STATE(480)] = 7710,
  [SMALL_STATE(481)] = 7724,
  [SMALL_STATE(482)] = 7738,
  [SMALL_STATE(483)] = 7752,
  [SMALL_STATE(484)] = 7766,
  [SMALL_STATE(485)] = 7780,
  [SMALL_STATE(486)] = 7794,
  [SMALL_STATE(487)] = 7808,
  [SMALL_STATE(488)] = 7822,
  [SMALL_STATE(489)] = 7836,
  [SMALL_STATE(490)] = 7850,
  [SMALL_STATE(491)] = 7864,
  [SMALL_STATE(492)] = 7872,
  [SMALL_STATE(493)] = 7886,
  [SMALL_STATE(494)] = 7900,
  [SMALL_STATE(495)] = 7914,
  [SMALL_STATE(496)] = 7922,
  [SMALL_STATE(497)] = 7936,
  [SMALL_STATE(498)] = 7950,
  [SMALL_STATE(499)] = 7966,
  [SMALL_STATE(500)] = 7974,
  [SMALL_STATE(501)] = 7988,
  [SMALL_STATE(502)] = 8004,
  [SMALL_STATE(503)] = 8012,
  [SMALL_STATE(504)] = 8026,
  [SMALL_STATE(505)] = 8040,
  [SMALL_STATE(506)] = 8048,
  [SMALL_STATE(507)] = 8056,
  [SMALL_STATE(508)] = 8064,
  [SMALL_STATE(509)] = 8078,
  [SMALL_STATE(510)] = 8092,
  [SMALL_STATE(511)] = 8106,
  [SMALL_STATE(512)] = 8120,
  [SMALL_STATE(513)] = 8134,
  [SMALL_STATE(514)] = 8148,
  [SMALL_STATE(515)] = 8162,
  [SMALL_STATE(516)] = 8176,
  [SMALL_STATE(517)] = 8190,
  [SMALL_STATE(518)] = 8204,
  [SMALL_STATE(519)] = 8218,
  [SMALL_STATE(520)] = 8232,
  [SMALL_STATE(521)] = 8246,
  [SMALL_STATE(522)] = 8260,
  [SMALL_STATE(523)] = 8268,
  [SMALL_STATE(524)] = 8282,
  [SMALL_STATE(525)] = 8296,
  [SMALL_STATE(526)] = 8310,
  [SMALL_STATE(527)] = 8324,
  [SMALL_STATE(528)] = 8338,
  [SMALL_STATE(529)] = 8346,
  [SMALL_STATE(530)] = 8360,
  [SMALL_STATE(531)] = 8374,
  [SMALL_STATE(532)] = 8382,
  [SMALL_STATE(533)] = 8390,
  [SMALL_STATE(534)] = 8398,
  [SMALL_STATE(535)] = 8406,
  [SMALL_STATE(536)] = 8420,
  [SMALL_STATE(537)] = 8427,
  [SMALL_STATE(538)] = 8434,
  [SMALL_STATE(539)] = 8441,
  [SMALL_STATE(540)] = 8448,
  [SMALL_STATE(541)] = 8455,
  [SMALL_STATE(542)] = 8462,
  [SMALL_STATE(543)] = 8469,
  [SMALL_STATE(544)] = 8476,
  [SMALL_STATE(545)] = 8483,
  [SMALL_STATE(546)] = 8494,
  [SMALL_STATE(547)] = 8505,
  [SMALL_STATE(548)] = 8512,
  [SMALL_STATE(549)] = 8519,
  [SMALL_STATE(550)] = 8526,
  [SMALL_STATE(551)] = 8533,
  [SMALL_STATE(552)] = 8540,
  [SMALL_STATE(553)] = 8547,
  [SMALL_STATE(554)] = 8554,
  [SMALL_STATE(555)] = 8567,
  [SMALL_STATE(556)] = 8574,
  [SMALL_STATE(557)] = 8581,
  [SMALL_STATE(558)] = 8588,
  [SMALL_STATE(559)] = 8595,
  [SMALL_STATE(560)] = 8602,
  [SMALL_STATE(561)] = 8609,
  [SMALL_STATE(562)] = 8616,
  [SMALL_STATE(563)] = 8623,
  [SMALL_STATE(564)] = 8630,
  [SMALL_STATE(565)] = 8637,
  [SMALL_STATE(566)] = 8644,
  [SMALL_STATE(567)] = 8651,
  [SMALL_STATE(568)] = 8658,
  [SMALL_STATE(569)] = 8665,
  [SMALL_STATE(570)] = 8672,
  [SMALL_STATE(571)] = 8679,
  [SMALL_STATE(572)] = 8686,
  [SMALL_STATE(573)] = 8693,
  [SMALL_STATE(574)] = 8700,
  [SMALL_STATE(575)] = 8707,
  [SMALL_STATE(576)] = 8714,
  [SMALL_STATE(577)] = 8725,
  [SMALL_STATE(578)] = 8736,
  [SMALL_STATE(579)] = 8743,
  [SMALL_STATE(580)] = 8750,
  [SMALL_STATE(581)] = 8757,
  [SMALL_STATE(582)] = 8764,
  [SMALL_STATE(583)] = 8771,
  [SMALL_STATE(584)] = 8778,
  [SMALL_STATE(585)] = 8785,
  [SMALL_STATE(586)] = 8792,
  [SMALL_STATE(587)] = 8799,
  [SMALL_STATE(588)] = 8806,
  [SMALL_STATE(589)] = 8817,
  [SMALL_STATE(590)] = 8828,
  [SMALL_STATE(591)] = 8835,
  [SMALL_STATE(592)] = 8842,
  [SMALL_STATE(593)] = 8849,
  [SMALL_STATE(594)] = 8856,
  [SMALL_STATE(595)] = 8863,
  [SMALL_STATE(596)] = 8870,
  [SMALL_STATE(597)] = 8877,
  [SMALL_STATE(598)] = 8884,
  [SMALL_STATE(599)] = 8891,
  [SMALL_STATE(600)] = 8898,
  [SMALL_STATE(601)] = 8905,
  [SMALL_STATE(602)] = 8918,
  [SMALL_STATE(603)] = 8925,
  [SMALL_STATE(604)] = 8932,
  [SMALL_STATE(605)] = 8939,
  [SMALL_STATE(606)] = 8946,
  [SMALL_STATE(607)] = 8953,
  [SMALL_STATE(608)] = 8960,
  [SMALL_STATE(609)] = 8967,
  [SMALL_STATE(610)] = 8974,
  [SMALL_STATE(611)] = 8981,
  [SMALL_STATE(612)] = 8988,
  [SMALL_STATE(613)] = 8999,
  [SMALL_STATE(614)] = 9010,
  [SMALL_STATE(615)] = 9017,
  [SMALL_STATE(616)] = 9024,
  [SMALL_STATE(617)] = 9031,
  [SMALL_STATE(618)] = 9042,
  [SMALL_STATE(619)] = 9053,
  [SMALL_STATE(620)] = 9060,
  [SMALL_STATE(621)] = 9067,
  [SMALL_STATE(622)] = 9080,
  [SMALL_STATE(623)] = 9087,
  [SMALL_STATE(624)] = 9100,
  [SMALL_STATE(625)] = 9113,
  [SMALL_STATE(626)] = 9120,
  [SMALL_STATE(627)] = 9127,
  [SMALL_STATE(628)] = 9138,
  [SMALL_STATE(629)] = 9145,
  [SMALL_STATE(630)] = 9158,
  [SMALL_STATE(631)] = 9165,
  [SMALL_STATE(632)] = 9172,
  [SMALL_STATE(633)] = 9179,
  [SMALL_STATE(634)] = 9186,
  [SMALL_STATE(635)] = 9193,
  [SMALL_STATE(636)] = 9200,
  [SMALL_STATE(637)] = 9207,
  [SMALL_STATE(638)] = 9214,
  [SMALL_STATE(639)] = 9221,
  [SMALL_STATE(640)] = 9228,
  [SMALL_STATE(641)] = 9241,
  [SMALL_STATE(642)] = 9248,
  [SMALL_STATE(643)] = 9255,
  [SMALL_STATE(644)] = 9262,
  [SMALL_STATE(645)] = 9269,
  [SMALL_STATE(646)] = 9276,
  [SMALL_STATE(647)] = 9289,
  [SMALL_STATE(648)] = 9296,
  [SMALL_STATE(649)] = 9303,
  [SMALL_STATE(650)] = 9316,
  [SMALL_STATE(651)] = 9323,
  [SMALL_STATE(652)] = 9330,
  [SMALL_STATE(653)] = 9337,
  [SMALL_STATE(654)] = 9344,
  [SMALL_STATE(655)] = 9351,
  [SMALL_STATE(656)] = 9358,
  [SMALL_STATE(657)] = 9365,
  [SMALL_STATE(658)] = 9372,
  [SMALL_STATE(659)] = 9379,
  [SMALL_STATE(660)] = 9386,
  [SMALL_STATE(661)] = 9393,
  [SMALL_STATE(662)] = 9400,
  [SMALL_STATE(663)] = 9407,
  [SMALL_STATE(664)] = 9414,
  [SMALL_STATE(665)] = 9421,
  [SMALL_STATE(666)] = 9428,
  [SMALL_STATE(667)] = 9435,
  [SMALL_STATE(668)] = 9442,
  [SMALL_STATE(669)] = 9449,
  [SMALL_STATE(670)] = 9456,
  [SMALL_STATE(671)] = 9463,
  [SMALL_STATE(672)] = 9470,
  [SMALL_STATE(673)] = 9477,
  [SMALL_STATE(674)] = 9484,
  [SMALL_STATE(675)] = 9491,
  [SMALL_STATE(676)] = 9498,
  [SMALL_STATE(677)] = 9505,
  [SMALL_STATE(678)] = 9512,
  [SMALL_STATE(679)] = 9519,
  [SMALL_STATE(680)] = 9526,
  [SMALL_STATE(681)] = 9533,
  [SMALL_STATE(682)] = 9540,
  [SMALL_STATE(683)] = 9547,
  [SMALL_STATE(684)] = 9554,
  [SMALL_STATE(685)] = 9561,
  [SMALL_STATE(686)] = 9568,
  [SMALL_STATE(687)] = 9575,
  [SMALL_STATE(688)] = 9584,
  [SMALL_STATE(689)] = 9593,
  [SMALL_STATE(690)] = 9606,
  [SMALL_STATE(691)] = 9613,
  [SMALL_STATE(692)] = 9620,
  [SMALL_STATE(693)] = 9633,
  [SMALL_STATE(694)] = 9646,
  [SMALL_STATE(695)] = 9653,
  [SMALL_STATE(696)] = 9660,
  [SMALL_STATE(697)] = 9667,
  [SMALL_STATE(698)] = 9674,
  [SMALL_STATE(699)] = 9681,
  [SMALL_STATE(700)] = 9688,
  [SMALL_STATE(701)] = 9701,
  [SMALL_STATE(702)] = 9708,
  [SMALL_STATE(703)] = 9715,
  [SMALL_STATE(704)] = 9722,
  [SMALL_STATE(705)] = 9729,
  [SMALL_STATE(706)] = 9736,
  [SMALL_STATE(707)] = 9743,
  [SMALL_STATE(708)] = 9750,
  [SMALL_STATE(709)] = 9757,
  [SMALL_STATE(710)] = 9764,
  [SMALL_STATE(711)] = 9771,
  [SMALL_STATE(712)] = 9778,
  [SMALL_STATE(713)] = 9785,
  [SMALL_STATE(714)] = 9792,
  [SMALL_STATE(715)] = 9805,
  [SMALL_STATE(716)] = 9812,
  [SMALL_STATE(717)] = 9819,
  [SMALL_STATE(718)] = 9826,
  [SMALL_STATE(719)] = 9833,
  [SMALL_STATE(720)] = 9846,
  [SMALL_STATE(721)] = 9853,
  [SMALL_STATE(722)] = 9860,
  [SMALL_STATE(723)] = 9867,
  [SMALL_STATE(724)] = 9874,
  [SMALL_STATE(725)] = 9881,
  [SMALL_STATE(726)] = 9888,
  [SMALL_STATE(727)] = 9895,
  [SMALL_STATE(728)] = 9902,
  [SMALL_STATE(729)] = 9909,
  [SMALL_STATE(730)] = 9922,
  [SMALL_STATE(731)] = 9935,
  [SMALL_STATE(732)] = 9942,
  [SMALL_STATE(733)] = 9949,
  [SMALL_STATE(734)] = 9956,
  [SMALL_STATE(735)] = 9967,
  [SMALL_STATE(736)] = 9974,
  [SMALL_STATE(737)] = 9981,
  [SMALL_STATE(738)] = 9988,
  [SMALL_STATE(739)] = 9995,
  [SMALL_STATE(740)] = 10002,
  [SMALL_STATE(741)] = 10009,
  [SMALL_STATE(742)] = 10016,
  [SMALL_STATE(743)] = 10023,
  [SMALL_STATE(744)] = 10030,
  [SMALL_STATE(745)] = 10041,
  [SMALL_STATE(746)] = 10048,
  [SMALL_STATE(747)] = 10055,
  [SMALL_STATE(748)] = 10062,
  [SMALL_STATE(749)] = 10069,
  [SMALL_STATE(750)] = 10076,
  [SMALL_STATE(751)] = 10083,
  [SMALL_STATE(752)] = 10090,
  [SMALL_STATE(753)] = 10097,
  [SMALL_STATE(754)] = 10104,
  [SMALL_STATE(755)] = 10111,
  [SMALL_STATE(756)] = 10118,
  [SMALL_STATE(757)] = 10131,
  [SMALL_STATE(758)] = 10138,
  [SMALL_STATE(759)] = 10145,
  [SMALL_STATE(760)] = 10154,
  [SMALL_STATE(761)] = 10161,
  [SMALL_STATE(762)] = 10174,
  [SMALL_STATE(763)] = 10181,
  [SMALL_STATE(764)] = 10188,
  [SMALL_STATE(765)] = 10195,
  [SMALL_STATE(766)] = 10202,
  [SMALL_STATE(767)] = 10209,
  [SMALL_STATE(768)] = 10216,
  [SMALL_STATE(769)] = 10223,
  [SMALL_STATE(770)] = 10230,
  [SMALL_STATE(771)] = 10237,
  [SMALL_STATE(772)] = 10244,
  [SMALL_STATE(773)] = 10257,
  [SMALL_STATE(774)] = 10270,
  [SMALL_STATE(775)] = 10283,
  [SMALL_STATE(776)] = 10290,
  [SMALL_STATE(777)] = 10297,
  [SMALL_STATE(778)] = 10304,
  [SMALL_STATE(779)] = 10311,
  [SMALL_STATE(780)] = 10318,
  [SMALL_STATE(781)] = 10325,
  [SMALL_STATE(782)] = 10332,
  [SMALL_STATE(783)] = 10339,
  [SMALL_STATE(784)] = 10346,
  [SMALL_STATE(785)] = 10353,
  [SMALL_STATE(786)] = 10360,
  [SMALL_STATE(787)] = 10373,
  [SMALL_STATE(788)] = 10380,
  [SMALL_STATE(789)] = 10387,
  [SMALL_STATE(790)] = 10394,
  [SMALL_STATE(791)] = 10401,
  [SMALL_STATE(792)] = 10414,
  [SMALL_STATE(793)] = 10421,
  [SMALL_STATE(794)] = 10428,
  [SMALL_STATE(795)] = 10435,
  [SMALL_STATE(796)] = 10442,
  [SMALL_STATE(797)] = 10449,
  [SMALL_STATE(798)] = 10456,
  [SMALL_STATE(799)] = 10463,
  [SMALL_STATE(800)] = 10470,
  [SMALL_STATE(801)] = 10483,
  [SMALL_STATE(802)] = 10496,
  [SMALL_STATE(803)] = 10509,
  [SMALL_STATE(804)] = 10520,
  [SMALL_STATE(805)] = 10527,
  [SMALL_STATE(806)] = 10534,
  [SMALL_STATE(807)] = 10541,
  [SMALL_STATE(808)] = 10548,
  [SMALL_STATE(809)] = 10555,
  [SMALL_STATE(810)] = 10562,
  [SMALL_STATE(811)] = 10569,
  [SMALL_STATE(812)] = 10576,
  [SMALL_STATE(813)] = 10583,
  [SMALL_STATE(814)] = 10590,
  [SMALL_STATE(815)] = 10597,
  [SMALL_STATE(816)] = 10604,
  [SMALL_STATE(817)] = 10611,
  [SMALL_STATE(818)] = 10618,
  [SMALL_STATE(819)] = 10625,
  [SMALL_STATE(820)] = 10632,
  [SMALL_STATE(821)] = 10639,
  [SMALL_STATE(822)] = 10646,
  [SMALL_STATE(823)] = 10653,
  [SMALL_STATE(824)] = 10660,
  [SMALL_STATE(825)] = 10667,
  [SMALL_STATE(826)] = 10674,
  [SMALL_STATE(827)] = 10681,
  [SMALL_STATE(828)] = 10688,
  [SMALL_STATE(829)] = 10695,
  [SMALL_STATE(830)] = 10702,
  [SMALL_STATE(831)] = 10709,
  [SMALL_STATE(832)] = 10716,
  [SMALL_STATE(833)] = 10723,
  [SMALL_STATE(834)] = 10736,
  [SMALL_STATE(835)] = 10743,
  [SMALL_STATE(836)] = 10750,
  [SMALL_STATE(837)] = 10757,
  [SMALL_STATE(838)] = 10770,
  [SMALL_STATE(839)] = 10777,
  [SMALL_STATE(840)] = 10784,
  [SMALL_STATE(841)] = 10791,
  [SMALL_STATE(842)] = 10798,
  [SMALL_STATE(843)] = 10805,
  [SMALL_STATE(844)] = 10812,
  [SMALL_STATE(845)] = 10819,
  [SMALL_STATE(846)] = 10826,
  [SMALL_STATE(847)] = 10837,
  [SMALL_STATE(848)] = 10848,
  [SMALL_STATE(849)] = 10855,
  [SMALL_STATE(850)] = 10866,
  [SMALL_STATE(851)] = 10877,
  [SMALL_STATE(852)] = 10884,
  [SMALL_STATE(853)] = 10893,
  [SMALL_STATE(854)] = 10900,
  [SMALL_STATE(855)] = 10913,
  [SMALL_STATE(856)] = 10924,
  [SMALL_STATE(857)] = 10935,
  [SMALL_STATE(858)] = 10942,
  [SMALL_STATE(859)] = 10953,
  [SMALL_STATE(860)] = 10964,
  [SMALL_STATE(861)] = 10971,
  [SMALL_STATE(862)] = 10978,
  [SMALL_STATE(863)] = 10989,
  [SMALL_STATE(864)] = 11000,
  [SMALL_STATE(865)] = 11011,
  [SMALL_STATE(866)] = 11022,
  [SMALL_STATE(867)] = 11031,
  [SMALL_STATE(868)] = 11038,
  [SMALL_STATE(869)] = 11045,
  [SMALL_STATE(870)] = 11052,
  [SMALL_STATE(871)] = 11059,
  [SMALL_STATE(872)] = 11066,
  [SMALL_STATE(873)] = 11073,
  [SMALL_STATE(874)] = 11080,
  [SMALL_STATE(875)] = 11087,
  [SMALL_STATE(876)] = 11094,
  [SMALL_STATE(877)] = 11101,
  [SMALL_STATE(878)] = 11108,
  [SMALL_STATE(879)] = 11115,
  [SMALL_STATE(880)] = 11122,
  [SMALL_STATE(881)] = 11135,
  [SMALL_STATE(882)] = 11144,
  [SMALL_STATE(883)] = 11151,
  [SMALL_STATE(884)] = 11158,
  [SMALL_STATE(885)] = 11165,
  [SMALL_STATE(886)] = 11172,
  [SMALL_STATE(887)] = 11179,
  [SMALL_STATE(888)] = 11192,
  [SMALL_STATE(889)] = 11199,
  [SMALL_STATE(890)] = 11206,
  [SMALL_STATE(891)] = 11213,
  [SMALL_STATE(892)] = 11224,
  [SMALL_STATE(893)] = 11237,
  [SMALL_STATE(894)] = 11244,
  [SMALL_STATE(895)] = 11257,
  [SMALL_STATE(896)] = 11264,
  [SMALL_STATE(897)] = 11271,
  [SMALL_STATE(898)] = 11279,
  [SMALL_STATE(899)] = 11285,
  [SMALL_STATE(900)] = 11291,
  [SMALL_STATE(901)] = 11297,
  [SMALL_STATE(902)] = 11303,
  [SMALL_STATE(903)] = 11309,
  [SMALL_STATE(904)] = 11315,
  [SMALL_STATE(905)] = 11323,
  [SMALL_STATE(906)] = 11333,
  [SMALL_STATE(907)] = 11343,
  [SMALL_STATE(908)] = 11353,
  [SMALL_STATE(909)] = 11361,
  [SMALL_STATE(910)] = 11367,
  [SMALL_STATE(911)] = 11373,
  [SMALL_STATE(912)] = 11379,
  [SMALL_STATE(913)] = 11385,
  [SMALL_STATE(914)] = 11391,
  [SMALL_STATE(915)] = 11397,
  [SMALL_STATE(916)] = 11403,
  [SMALL_STATE(917)] = 11409,
  [SMALL_STATE(918)] = 11415,
  [SMALL_STATE(919)] = 11421,
  [SMALL_STATE(920)] = 11427,
  [SMALL_STATE(921)] = 11433,
  [SMALL_STATE(922)] = 11439,
  [SMALL_STATE(923)] = 11449,
  [SMALL_STATE(924)] = 11459,
  [SMALL_STATE(925)] = 11469,
  [SMALL_STATE(926)] = 11475,
  [SMALL_STATE(927)] = 11485,
  [SMALL_STATE(928)] = 11495,
  [SMALL_STATE(929)] = 11505,
  [SMALL_STATE(930)] = 11515,
  [SMALL_STATE(931)] = 11525,
  [SMALL_STATE(932)] = 11535,
  [SMALL_STATE(933)] = 11545,
  [SMALL_STATE(934)] = 11555,
  [SMALL_STATE(935)] = 11565,
  [SMALL_STATE(936)] = 11575,
  [SMALL_STATE(937)] = 11585,
  [SMALL_STATE(938)] = 11595,
  [SMALL_STATE(939)] = 11605,
  [SMALL_STATE(940)] = 11615,
  [SMALL_STATE(941)] = 11625,
  [SMALL_STATE(942)] = 11635,
  [SMALL_STATE(943)] = 11643,
  [SMALL_STATE(944)] = 11653,
  [SMALL_STATE(945)] = 11663,
  [SMALL_STATE(946)] = 11673,
  [SMALL_STATE(947)] = 11683,
  [SMALL_STATE(948)] = 11693,
  [SMALL_STATE(949)] = 11703,
  [SMALL_STATE(950)] = 11713,
  [SMALL_STATE(951)] = 11723,
  [SMALL_STATE(952)] = 11733,
  [SMALL_STATE(953)] = 11743,
  [SMALL_STATE(954)] = 11753,
  [SMALL_STATE(955)] = 11763,
  [SMALL_STATE(956)] = 11773,
  [SMALL_STATE(957)] = 11783,
  [SMALL_STATE(958)] = 11793,
  [SMALL_STATE(959)] = 11803,
  [SMALL_STATE(960)] = 11813,
  [SMALL_STATE(961)] = 11823,
  [SMALL_STATE(962)] = 11831,
  [SMALL_STATE(963)] = 11839,
  [SMALL_STATE(964)] = 11849,
  [SMALL_STATE(965)] = 11859,
  [SMALL_STATE(966)] = 11865,
  [SMALL_STATE(967)] = 11875,
  [SMALL_STATE(968)] = 11885,
  [SMALL_STATE(969)] = 11895,
  [SMALL_STATE(970)] = 11905,
  [SMALL_STATE(971)] = 11915,
  [SMALL_STATE(972)] = 11925,
  [SMALL_STATE(973)] = 11935,
  [SMALL_STATE(974)] = 11941,
  [SMALL_STATE(975)] = 11951,
  [SMALL_STATE(976)] = 11961,
  [SMALL_STATE(977)] = 11967,
  [SMALL_STATE(978)] = 11977,
  [SMALL_STATE(979)] = 11987,
  [SMALL_STATE(980)] = 11997,
  [SMALL_STATE(981)] = 12007,
  [SMALL_STATE(982)] = 12017,
  [SMALL_STATE(983)] = 12027,
  [SMALL_STATE(984)] = 12037,
  [SMALL_STATE(985)] = 12047,
  [SMALL_STATE(986)] = 12053,
  [SMALL_STATE(987)] = 12063,
  [SMALL_STATE(988)] = 12069,
  [SMALL_STATE(989)] = 12079,
  [SMALL_STATE(990)] = 12089,
  [SMALL_STATE(991)] = 12099,
  [SMALL_STATE(992)] = 12105,
  [SMALL_STATE(993)] = 12111,
  [SMALL_STATE(994)] = 12117,
  [SMALL_STATE(995)] = 12127,
  [SMALL_STATE(996)] = 12137,
  [SMALL_STATE(997)] = 12147,
  [SMALL_STATE(998)] = 12153,
  [SMALL_STATE(999)] = 12159,
  [SMALL_STATE(1000)] = 12167,
  [SMALL_STATE(1001)] = 12177,
  [SMALL_STATE(1002)] = 12187,
  [SMALL_STATE(1003)] = 12197,
  [SMALL_STATE(1004)] = 12207,
  [SMALL_STATE(1005)] = 12217,
  [SMALL_STATE(1006)] = 12227,
  [SMALL_STATE(1007)] = 12237,
  [SMALL_STATE(1008)] = 12247,
  [SMALL_STATE(1009)] = 12257,
  [SMALL_STATE(1010)] = 12267,
  [SMALL_STATE(1011)] = 12277,
  [SMALL_STATE(1012)] = 12287,
  [SMALL_STATE(1013)] = 12297,
  [SMALL_STATE(1014)] = 12307,
  [SMALL_STATE(1015)] = 12317,
  [SMALL_STATE(1016)] = 12323,
  [SMALL_STATE(1017)] = 12333,
  [SMALL_STATE(1018)] = 12343,
  [SMALL_STATE(1019)] = 12353,
  [SMALL_STATE(1020)] = 12361,
  [SMALL_STATE(1021)] = 12371,
  [SMALL_STATE(1022)] = 12377,
  [SMALL_STATE(1023)] = 12387,
  [SMALL_STATE(1024)] = 12397,
  [SMALL_STATE(1025)] = 12403,
  [SMALL_STATE(1026)] = 12413,
  [SMALL_STATE(1027)] = 12423,
  [SMALL_STATE(1028)] = 12433,
  [SMALL_STATE(1029)] = 12439,
  [SMALL_STATE(1030)] = 12449,
  [SMALL_STATE(1031)] = 12459,
  [SMALL_STATE(1032)] = 12469,
  [SMALL_STATE(1033)] = 12479,
  [SMALL_STATE(1034)] = 12489,
  [SMALL_STATE(1035)] = 12497,
  [SMALL_STATE(1036)] = 12505,
  [SMALL_STATE(1037)] = 12513,
  [SMALL_STATE(1038)] = 12523,
  [SMALL_STATE(1039)] = 12531,
  [SMALL_STATE(1040)] = 12541,
  [SMALL_STATE(1041)] = 12551,
  [SMALL_STATE(1042)] = 12561,
  [SMALL_STATE(1043)] = 12571,
  [SMALL_STATE(1044)] = 12581,
  [SMALL_STATE(1045)] = 12591,
  [SMALL_STATE(1046)] = 12601,
  [SMALL_STATE(1047)] = 12611,
  [SMALL_STATE(1048)] = 12621,
  [SMALL_STATE(1049)] = 12627,
  [SMALL_STATE(1050)] = 12637,
  [SMALL_STATE(1051)] = 12647,
  [SMALL_STATE(1052)] = 12655,
  [SMALL_STATE(1053)] = 12665,
  [SMALL_STATE(1054)] = 12675,
  [SMALL_STATE(1055)] = 12685,
  [SMALL_STATE(1056)] = 12695,
  [SMALL_STATE(1057)] = 12705,
  [SMALL_STATE(1058)] = 12713,
  [SMALL_STATE(1059)] = 12719,
  [SMALL_STATE(1060)] = 12729,
  [SMALL_STATE(1061)] = 12739,
  [SMALL_STATE(1062)] = 12749,
  [SMALL_STATE(1063)] = 12759,
  [SMALL_STATE(1064)] = 12769,
  [SMALL_STATE(1065)] = 12779,
  [SMALL_STATE(1066)] = 12789,
  [SMALL_STATE(1067)] = 12799,
  [SMALL_STATE(1068)] = 12809,
  [SMALL_STATE(1069)] = 12819,
  [SMALL_STATE(1070)] = 12829,
  [SMALL_STATE(1071)] = 12839,
  [SMALL_STATE(1072)] = 12849,
  [SMALL_STATE(1073)] = 12859,
  [SMALL_STATE(1074)] = 12869,
  [SMALL_STATE(1075)] = 12875,
  [SMALL_STATE(1076)] = 12885,
  [SMALL_STATE(1077)] = 12895,
  [SMALL_STATE(1078)] = 12905,
  [SMALL_STATE(1079)] = 12915,
  [SMALL_STATE(1080)] = 12925,
  [SMALL_STATE(1081)] = 12935,
  [SMALL_STATE(1082)] = 12945,
  [SMALL_STATE(1083)] = 12955,
  [SMALL_STATE(1084)] = 12961,
  [SMALL_STATE(1085)] = 12971,
  [SMALL_STATE(1086)] = 12977,
  [SMALL_STATE(1087)] = 12987,
  [SMALL_STATE(1088)] = 12993,
  [SMALL_STATE(1089)] = 12999,
  [SMALL_STATE(1090)] = 13009,
  [SMALL_STATE(1091)] = 13015,
  [SMALL_STATE(1092)] = 13025,
  [SMALL_STATE(1093)] = 13031,
  [SMALL_STATE(1094)] = 13041,
  [SMALL_STATE(1095)] = 13047,
  [SMALL_STATE(1096)] = 13053,
  [SMALL_STATE(1097)] = 13063,
  [SMALL_STATE(1098)] = 13073,
  [SMALL_STATE(1099)] = 13083,
  [SMALL_STATE(1100)] = 13093,
  [SMALL_STATE(1101)] = 13103,
  [SMALL_STATE(1102)] = 13113,
  [SMALL_STATE(1103)] = 13123,
  [SMALL_STATE(1104)] = 13129,
  [SMALL_STATE(1105)] = 13135,
  [SMALL_STATE(1106)] = 13141,
  [SMALL_STATE(1107)] = 13147,
  [SMALL_STATE(1108)] = 13154,
  [SMALL_STATE(1109)] = 13161,
  [SMALL_STATE(1110)] = 13168,
  [SMALL_STATE(1111)] = 13173,
  [SMALL_STATE(1112)] = 13180,
  [SMALL_STATE(1113)] = 13187,
  [SMALL_STATE(1114)] = 13194,
  [SMALL_STATE(1115)] = 13201,
  [SMALL_STATE(1116)] = 13206,
  [SMALL_STATE(1117)] = 13213,
  [SMALL_STATE(1118)] = 13218,
  [SMALL_STATE(1119)] = 13225,
  [SMALL_STATE(1120)] = 13232,
  [SMALL_STATE(1121)] = 13239,
  [SMALL_STATE(1122)] = 13246,
  [SMALL_STATE(1123)] = 13253,
  [SMALL_STATE(1124)] = 13260,
  [SMALL_STATE(1125)] = 13267,
  [SMALL_STATE(1126)] = 13274,
  [SMALL_STATE(1127)] = 13281,
  [SMALL_STATE(1128)] = 13288,
  [SMALL_STATE(1129)] = 13293,
  [SMALL_STATE(1130)] = 13300,
  [SMALL_STATE(1131)] = 13307,
  [SMALL_STATE(1132)] = 13314,
  [SMALL_STATE(1133)] = 13319,
  [SMALL_STATE(1134)] = 13326,
  [SMALL_STATE(1135)] = 13333,
  [SMALL_STATE(1136)] = 13340,
  [SMALL_STATE(1137)] = 13347,
  [SMALL_STATE(1138)] = 13354,
  [SMALL_STATE(1139)] = 13361,
  [SMALL_STATE(1140)] = 13368,
  [SMALL_STATE(1141)] = 13373,
  [SMALL_STATE(1142)] = 13380,
  [SMALL_STATE(1143)] = 13385,
  [SMALL_STATE(1144)] = 13392,
  [SMALL_STATE(1145)] = 13399,
  [SMALL_STATE(1146)] = 13404,
  [SMALL_STATE(1147)] = 13411,
  [SMALL_STATE(1148)] = 13418,
  [SMALL_STATE(1149)] = 13425,
  [SMALL_STATE(1150)] = 13432,
  [SMALL_STATE(1151)] = 13439,
  [SMALL_STATE(1152)] = 13446,
  [SMALL_STATE(1153)] = 13453,
  [SMALL_STATE(1154)] = 13460,
  [SMALL_STATE(1155)] = 13467,
  [SMALL_STATE(1156)] = 13474,
  [SMALL_STATE(1157)] = 13481,
  [SMALL_STATE(1158)] = 13488,
  [SMALL_STATE(1159)] = 13495,
  [SMALL_STATE(1160)] = 13502,
  [SMALL_STATE(1161)] = 13509,
  [SMALL_STATE(1162)] = 13516,
  [SMALL_STATE(1163)] = 13523,
  [SMALL_STATE(1164)] = 13530,
  [SMALL_STATE(1165)] = 13537,
  [SMALL_STATE(1166)] = 13544,
  [SMALL_STATE(1167)] = 13551,
  [SMALL_STATE(1168)] = 13558,
  [SMALL_STATE(1169)] = 13563,
  [SMALL_STATE(1170)] = 13568,
  [SMALL_STATE(1171)] = 13575,
  [SMALL_STATE(1172)] = 13580,
  [SMALL_STATE(1173)] = 13587,
  [SMALL_STATE(1174)] = 13594,
  [SMALL_STATE(1175)] = 13601,
  [SMALL_STATE(1176)] = 13608,
  [SMALL_STATE(1177)] = 13615,
  [SMALL_STATE(1178)] = 13622,
  [SMALL_STATE(1179)] = 13629,
  [SMALL_STATE(1180)] = 13636,
  [SMALL_STATE(1181)] = 13643,
  [SMALL_STATE(1182)] = 13650,
  [SMALL_STATE(1183)] = 13655,
  [SMALL_STATE(1184)] = 13662,
  [SMALL_STATE(1185)] = 13669,
  [SMALL_STATE(1186)] = 13676,
  [SMALL_STATE(1187)] = 13683,
  [SMALL_STATE(1188)] = 13690,
  [SMALL_STATE(1189)] = 13697,
  [SMALL_STATE(1190)] = 13704,
  [SMALL_STATE(1191)] = 13711,
  [SMALL_STATE(1192)] = 13718,
  [SMALL_STATE(1193)] = 13725,
  [SMALL_STATE(1194)] = 13732,
  [SMALL_STATE(1195)] = 13739,
  [SMALL_STATE(1196)] = 13746,
  [SMALL_STATE(1197)] = 13753,
  [SMALL_STATE(1198)] = 13760,
  [SMALL_STATE(1199)] = 13767,
  [SMALL_STATE(1200)] = 13774,
  [SMALL_STATE(1201)] = 13781,
  [SMALL_STATE(1202)] = 13788,
  [SMALL_STATE(1203)] = 13795,
  [SMALL_STATE(1204)] = 13802,
  [SMALL_STATE(1205)] = 13809,
  [SMALL_STATE(1206)] = 13816,
  [SMALL_STATE(1207)] = 13823,
  [SMALL_STATE(1208)] = 13830,
  [SMALL_STATE(1209)] = 13837,
  [SMALL_STATE(1210)] = 13842,
  [SMALL_STATE(1211)] = 13847,
  [SMALL_STATE(1212)] = 13852,
  [SMALL_STATE(1213)] = 13857,
  [SMALL_STATE(1214)] = 13864,
  [SMALL_STATE(1215)] = 13869,
  [SMALL_STATE(1216)] = 13876,
  [SMALL_STATE(1217)] = 13883,
  [SMALL_STATE(1218)] = 13890,
  [SMALL_STATE(1219)] = 13897,
  [SMALL_STATE(1220)] = 13902,
  [SMALL_STATE(1221)] = 13907,
  [SMALL_STATE(1222)] = 13912,
  [SMALL_STATE(1223)] = 13919,
  [SMALL_STATE(1224)] = 13926,
  [SMALL_STATE(1225)] = 13933,
  [SMALL_STATE(1226)] = 13938,
  [SMALL_STATE(1227)] = 13945,
  [SMALL_STATE(1228)] = 13952,
  [SMALL_STATE(1229)] = 13956,
  [SMALL_STATE(1230)] = 13960,
  [SMALL_STATE(1231)] = 13964,
  [SMALL_STATE(1232)] = 13968,
  [SMALL_STATE(1233)] = 13972,
  [SMALL_STATE(1234)] = 13976,
  [SMALL_STATE(1235)] = 13980,
  [SMALL_STATE(1236)] = 13984,
  [SMALL_STATE(1237)] = 13988,
  [SMALL_STATE(1238)] = 13992,
  [SMALL_STATE(1239)] = 13996,
  [SMALL_STATE(1240)] = 14000,
  [SMALL_STATE(1241)] = 14004,
  [SMALL_STATE(1242)] = 14008,
  [SMALL_STATE(1243)] = 14012,
  [SMALL_STATE(1244)] = 14016,
  [SMALL_STATE(1245)] = 14020,
  [SMALL_STATE(1246)] = 14024,
  [SMALL_STATE(1247)] = 14028,
  [SMALL_STATE(1248)] = 14032,
  [SMALL_STATE(1249)] = 14036,
  [SMALL_STATE(1250)] = 14040,
  [SMALL_STATE(1251)] = 14044,
  [SMALL_STATE(1252)] = 14048,
  [SMALL_STATE(1253)] = 14052,
  [SMALL_STATE(1254)] = 14056,
  [SMALL_STATE(1255)] = 14060,
  [SMALL_STATE(1256)] = 14064,
  [SMALL_STATE(1257)] = 14068,
  [SMALL_STATE(1258)] = 14072,
  [SMALL_STATE(1259)] = 14076,
  [SMALL_STATE(1260)] = 14080,
  [SMALL_STATE(1261)] = 14084,
  [SMALL_STATE(1262)] = 14088,
  [SMALL_STATE(1263)] = 14092,
  [SMALL_STATE(1264)] = 14096,
  [SMALL_STATE(1265)] = 14100,
  [SMALL_STATE(1266)] = 14104,
  [SMALL_STATE(1267)] = 14108,
  [SMALL_STATE(1268)] = 14112,
  [SMALL_STATE(1269)] = 14116,
  [SMALL_STATE(1270)] = 14120,
  [SMALL_STATE(1271)] = 14124,
  [SMALL_STATE(1272)] = 14128,
  [SMALL_STATE(1273)] = 14132,
  [SMALL_STATE(1274)] = 14136,
  [SMALL_STATE(1275)] = 14140,
  [SMALL_STATE(1276)] = 14144,
  [SMALL_STATE(1277)] = 14148,
  [SMALL_STATE(1278)] = 14152,
  [SMALL_STATE(1279)] = 14156,
  [SMALL_STATE(1280)] = 14160,
  [SMALL_STATE(1281)] = 14164,
  [SMALL_STATE(1282)] = 14168,
  [SMALL_STATE(1283)] = 14172,
  [SMALL_STATE(1284)] = 14176,
  [SMALL_STATE(1285)] = 14180,
  [SMALL_STATE(1286)] = 14184,
  [SMALL_STATE(1287)] = 14188,
  [SMALL_STATE(1288)] = 14192,
  [SMALL_STATE(1289)] = 14196,
  [SMALL_STATE(1290)] = 14200,
  [SMALL_STATE(1291)] = 14204,
  [SMALL_STATE(1292)] = 14208,
  [SMALL_STATE(1293)] = 14212,
  [SMALL_STATE(1294)] = 14216,
  [SMALL_STATE(1295)] = 14220,
  [SMALL_STATE(1296)] = 14224,
  [SMALL_STATE(1297)] = 14228,
  [SMALL_STATE(1298)] = 14232,
  [SMALL_STATE(1299)] = 14236,
  [SMALL_STATE(1300)] = 14240,
  [SMALL_STATE(1301)] = 14244,
  [SMALL_STATE(1302)] = 14248,
  [SMALL_STATE(1303)] = 14252,
  [SMALL_STATE(1304)] = 14256,
  [SMALL_STATE(1305)] = 14260,
  [SMALL_STATE(1306)] = 14264,
  [SMALL_STATE(1307)] = 14268,
  [SMALL_STATE(1308)] = 14272,
  [SMALL_STATE(1309)] = 14276,
  [SMALL_STATE(1310)] = 14280,
  [SMALL_STATE(1311)] = 14284,
  [SMALL_STATE(1312)] = 14288,
  [SMALL_STATE(1313)] = 14292,
  [SMALL_STATE(1314)] = 14296,
  [SMALL_STATE(1315)] = 14300,
  [SMALL_STATE(1316)] = 14304,
  [SMALL_STATE(1317)] = 14308,
  [SMALL_STATE(1318)] = 14312,
  [SMALL_STATE(1319)] = 14316,
  [SMALL_STATE(1320)] = 14320,
  [SMALL_STATE(1321)] = 14324,
  [SMALL_STATE(1322)] = 14328,
  [SMALL_STATE(1323)] = 14332,
  [SMALL_STATE(1324)] = 14336,
  [SMALL_STATE(1325)] = 14340,
  [SMALL_STATE(1326)] = 14344,
  [SMALL_STATE(1327)] = 14348,
  [SMALL_STATE(1328)] = 14352,
  [SMALL_STATE(1329)] = 14356,
  [SMALL_STATE(1330)] = 14360,
  [SMALL_STATE(1331)] = 14364,
  [SMALL_STATE(1332)] = 14368,
  [SMALL_STATE(1333)] = 14372,
  [SMALL_STATE(1334)] = 14376,
  [SMALL_STATE(1335)] = 14380,
  [SMALL_STATE(1336)] = 14384,
  [SMALL_STATE(1337)] = 14388,
  [SMALL_STATE(1338)] = 14392,
  [SMALL_STATE(1339)] = 14396,
  [SMALL_STATE(1340)] = 14400,
  [SMALL_STATE(1341)] = 14404,
  [SMALL_STATE(1342)] = 14408,
  [SMALL_STATE(1343)] = 14412,
  [SMALL_STATE(1344)] = 14416,
  [SMALL_STATE(1345)] = 14420,
  [SMALL_STATE(1346)] = 14424,
  [SMALL_STATE(1347)] = 14428,
  [SMALL_STATE(1348)] = 14432,
  [SMALL_STATE(1349)] = 14436,
  [SMALL_STATE(1350)] = 14440,
  [SMALL_STATE(1351)] = 14444,
  [SMALL_STATE(1352)] = 14448,
  [SMALL_STATE(1353)] = 14452,
  [SMALL_STATE(1354)] = 14456,
  [SMALL_STATE(1355)] = 14460,
  [SMALL_STATE(1356)] = 14464,
  [SMALL_STATE(1357)] = 14468,
  [SMALL_STATE(1358)] = 14472,
  [SMALL_STATE(1359)] = 14476,
  [SMALL_STATE(1360)] = 14480,
  [SMALL_STATE(1361)] = 14484,
  [SMALL_STATE(1362)] = 14488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1320),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1218),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1339),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1340),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1256),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1329),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1271),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1272),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1269),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1107),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1244),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1245),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1051),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1239),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1311),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1041),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1360),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1133),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1306),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1123),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1088),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1223),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1306),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1254),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1270),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1274),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1097),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1046),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1354),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(968),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1229),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1285),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1100),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1120),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1320),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1223),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(90),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(156),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(1223),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(102),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(158),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1213),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1217),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1279),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1188),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1314),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1344),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1125),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1290),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1201),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1202),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 45),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(986),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1145),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(749),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 28),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 34),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 35),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 35),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 36),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 37),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 38),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 39),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 40),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 38),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 38),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1285),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 47),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 48),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 35),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 35),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 49),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 50),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 47),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 37),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 51),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 40),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 52),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 48),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 40),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 54),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 55),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 55),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 40),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 56),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 60),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 62),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 63),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 64),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 66),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 37),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 54),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 68),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 54),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 48),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 40),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 54),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 70),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 70),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 66),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 68),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 54),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 72),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 72),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 76),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 77),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 78),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 76),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 80),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 77),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 82),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 83),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 84),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 78),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 85),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 86),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 80),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 82),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 83),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 87),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 84),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 88),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 85),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 89),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 86),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 90),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 87),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 88),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 89),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 91),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 90),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 11, 0, 91),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 61),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1336),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1295),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1224),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 67),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 61),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1015),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1354),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(901),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1216),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [1496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1336),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 45),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 44),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1359),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 46),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 46),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 59),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 69),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(942),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1359),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1017),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 43),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 30),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 71),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 73),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 75),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1210),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1214),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1214),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 79),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 33),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 42),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1006),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1262),
  [1803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1026),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1327),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 33),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1296),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 48),
  [1889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(929),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1338),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(891),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 65),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 48),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1326),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 74),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until_complement, 3, 2, 81),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1225),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 47),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1302),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1334),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [1999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1263),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1341),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [2033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1337),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1226),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1267),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1324),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 57),
  [2049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1235),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1237),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 41),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1257),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1282),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1291),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1293),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1299),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1362),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1317),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1332),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1333),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1345),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1346),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1348),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [2133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 53),
  [2137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1232),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1308),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1309),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1248),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [2189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 58),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [2229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1331),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1247),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
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
    [ts_external_token__spawn_binding_start] = true,
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
    [ts_external_token__spawn_binding_start] = true,
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
    [ts_external_token__indent] = true,
    [ts_external_token__line_start] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
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
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [27] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [28] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
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
