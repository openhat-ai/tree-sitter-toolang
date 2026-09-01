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
#define STATE_COUNT 803
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 213
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 53

enum ts_symbol_identifiers {
  sym_newline = 1,
  sym_blank_line = 2,
  sym_parent_doc_line = 3,
  sym_doc_line = 4,
  sym_comment_line = 5,
  sym_inline_comment = 6,
  anon_sym_Text = 7,
  anon_sym_Number = 8,
  anon_sym_Boolean = 9,
  anon_sym_Json = 10,
  anon_sym_Part = 11,
  sym_array_suffix = 12,
  anon_sym__ = 13,
  sym_integer_literal = 14,
  anon_sym_models = 15,
  anon_sym_tools = 16,
  anon_sym_skills = 17,
  anon_sym_services = 18,
  anon_sym_psyches = 19,
  anon_sym_hands = 20,
  anon_sym_handoffs = 21,
  anon_sym_EQ = 22,
  anon_sym_PLUS_EQ = 23,
  anon_sym_DASH_EQ = 24,
  aux_sym_directive_value_token1 = 25,
  anon_sym_default = 26,
  anon_sym_none = 27,
  anon_sym_user = 28,
  anon_sym_assistant = 29,
  anon_sym_tool = 30,
  sym_with_keyword = 31,
  sym_struct_keyword = 32,
  sym_psyche_keyword = 33,
  sym_skill_keyword = 34,
  sym_service_keyword = 35,
  sym_prompt_keyword = 36,
  sym_context_keyword = 37,
  sym_instruct_keyword = 38,
  sym_agic_keyword = 39,
  sym_task_keyword = 40,
  sym_chore_keyword = 41,
  sym_flow_keyword = 42,
  sym_pass_keyword = 43,
  sym_flow_run_keyword = 44,
  sym_flow_let_keyword = 45,
  sym_flow_seek_keyword = 46,
  sym_flow_ask_keyword = 47,
  sym_flow_scatter_keyword = 48,
  sym_flow_storm_keyword = 49,
  sym_flow_gather_keyword = 50,
  sym_flow_settle_keyword = 51,
  sym_flow_map_keyword = 52,
  sym_flow_keep_keyword = 53,
  sym_flow_drop_keyword = 54,
  sym_flow_rank_keyword = 55,
  sym_flow_repeat_keyword = 56,
  sym_flow_until_keyword = 57,
  sym_flow_par_keyword = 58,
  sym_flow_first_keyword = 59,
  sym_flow_last_keyword = 60,
  sym_flow_top_keyword = 61,
  sym_flow_bottom_keyword = 62,
  sym_flow_think_keyword = 63,
  sym_flow_use_keyword = 64,
  sym_thunk_keyword = 65,
  sym_recall_keyword = 66,
  sym_recall_auto_keyword = 67,
  sym_recall_far_keyword = 68,
  sym_recall_near_keyword = 69,
  anon_sym_call = 70,
  anon_sym_do = 71,
  anon_sym_unfold = 72,
  anon_sym_each = 73,
  anon_sym_fold = 74,
  anon_sym_sort = 75,
  anon_sym_head = 76,
  anon_sym_tail = 77,
  sym_optional_marker = 78,
  sym_arrow = 79,
  sym_colon = 80,
  sym_lparen = 81,
  sym_rparen = 82,
  sym_comma = 83,
  sym_cap_kind = 84,
  sym_pascal_name = 85,
  sym_snake_name = 86,
  sym__snake_kebab_name = 87,
  sym_indented_raw_text = 88,
  sym__implicit_run_raw_text = 89,
  sym__nested_indented_raw_text = 90,
  sym_source_file = 91,
  sym_item = 92,
  sym_line_end = 93,
  sym__trivia = 94,
  sym_with = 95,
  sym_type = 96,
  sym_base_type = 97,
  sym_builtin_type = 98,
  sym_user_type = 99,
  sym_type_suffix = 100,
  sym_struct = 101,
  sym_struct_name = 102,
  sym_struct_body = 103,
  sym_field = 104,
  sym_field_name = 105,
  sym_psyche = 106,
  sym_skill = 107,
  sym_service = 108,
  sym_prompt = 109,
  sym__cap_definition = 110,
  sym_cap_body = 111,
  sym_task = 112,
  sym_chore = 113,
  sym_cap_name = 114,
  sym_cap_ref = 115,
  sym_job_name = 116,
  sym_job_body = 117,
  sym_property = 118,
  sym_property_key = 119,
  sym_property_value = 120,
  sym_instruct = 121,
  sym_instruct_name = 122,
  sym_instruct_body = 123,
  sym_context = 124,
  sym_context_name = 125,
  sym_context_body = 126,
  sym_text_inline = 127,
  sym_text_block = 128,
  sym_text_body = 129,
  sym_text_body_line = 130,
  sym__nested_text_inline_alias = 131,
  sym__nested_text_inline = 132,
  sym__nested_text_block = 133,
  sym__nested_text_body = 134,
  sym__nested_text_body_line = 135,
  sym_agic = 136,
  sym_agic_name = 137,
  sym_agic_body = 138,
  sym_params = 139,
  sym_param = 140,
  sym_param_name = 141,
  sym_flow = 142,
  sym_flow_name = 143,
  sym_flow_body = 144,
  sym_statements = 145,
  sym__flow_statement = 146,
  sym__flow_operation = 147,
  sym_let_statement = 148,
  sym_run_statement = 149,
  sym_implicit_run_statement = 150,
  sym__implicit_run_text_body_line = 151,
  sym_seek_statement = 152,
  sym_ask_statement = 153,
  sym_scatter_statement = 154,
  sym_storm_statement = 155,
  sym_gather_statement = 156,
  sym_settle_statement = 157,
  sym_map_statement = 158,
  sym_keep_statement = 159,
  sym_drop_statement = 160,
  sym_rank_statement = 161,
  sym_repeat_statement = 162,
  sym_repeat_body = 163,
  sym_repeat_until_body = 164,
  sym_until_statement = 165,
  sym_invalid_flow_reserved_statement = 166,
  sym_inline_agic = 167,
  sym_inline_agic_body = 168,
  sym_par_clause = 169,
  sym_position_clause = 170,
  sym_rank_selection_clause = 171,
  sym_runnable = 172,
  sym_agent = 173,
  sym_local_name = 174,
  sym_directive = 175,
  sym_directive_key = 176,
  sym_directive_op = 177,
  sym_directive_value = 178,
  sym_recall_value = 179,
  sym__directives = 180,
  sym_settings = 181,
  sym_context_setting = 182,
  sym_instruct_setting = 183,
  sym_text_ref = 184,
  sym_messages = 185,
  sym_message = 186,
  sym_unroled_message = 187,
  sym__unroled_message_initial_line = 188,
  sym__unroled_message_continuation_line = 189,
  sym_invalid_agic_reserved_message = 190,
  sym_role = 191,
  sym__pass_statement = 192,
  sym_recall_none_keyword = 193,
  sym__flow_reserved_word = 194,
  sym__agic_reserved_word = 195,
  sym_assign_operator = 196,
  sym_type_name = 197,
  sym_text_line = 198,
  aux_sym_source_file_repeat1 = 199,
  aux_sym_type_repeat1 = 200,
  aux_sym_struct_body_repeat1 = 201,
  aux_sym__cap_definition_repeat1 = 202,
  aux_sym__cap_definition_repeat2 = 203,
  aux_sym_job_body_repeat1 = 204,
  aux_sym_text_body_repeat1 = 205,
  aux_sym__nested_text_body_repeat1 = 206,
  aux_sym_params_repeat1 = 207,
  aux_sym_statements_repeat1 = 208,
  aux_sym_implicit_run_statement_repeat1 = 209,
  aux_sym__directives_repeat1 = 210,
  aux_sym_messages_repeat1 = 211,
  aux_sym_unroled_message_repeat1 = 212,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_parent_doc_line] = "parent_doc_line",
  [sym_doc_line] = "doc_line",
  [sym_comment_line] = "comment_line",
  [sym_inline_comment] = "inline_comment",
  [anon_sym_Text] = "Text",
  [anon_sym_Number] = "Number",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Json] = "Json",
  [anon_sym_Part] = "Part",
  [sym_array_suffix] = "array_suffix",
  [anon_sym__] = "_",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_models] = "models",
  [anon_sym_tools] = "tools",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_psyches] = "psyches",
  [anon_sym_hands] = "hands",
  [anon_sym_handoffs] = "handoffs",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [aux_sym_directive_value_token1] = "directive_value_token1",
  [anon_sym_default] = "default",
  [anon_sym_none] = "none",
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
  [sym_flow_rank_keyword] = "flow_rank_keyword",
  [sym_flow_repeat_keyword] = "flow_repeat_keyword",
  [sym_flow_until_keyword] = "flow_until_keyword",
  [sym_flow_par_keyword] = "flow_par_keyword",
  [sym_flow_first_keyword] = "flow_first_keyword",
  [sym_flow_last_keyword] = "flow_last_keyword",
  [sym_flow_top_keyword] = "flow_top_keyword",
  [sym_flow_bottom_keyword] = "flow_bottom_keyword",
  [sym_flow_think_keyword] = "flow_think_keyword",
  [sym_flow_use_keyword] = "flow_use_keyword",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_recall_keyword] = "recall_keyword",
  [sym_recall_auto_keyword] = "recall_auto_keyword",
  [sym_recall_far_keyword] = "recall_far_keyword",
  [sym_recall_near_keyword] = "recall_near_keyword",
  [anon_sym_call] = "call",
  [anon_sym_do] = "do",
  [anon_sym_unfold] = "unfold",
  [anon_sym_each] = "each",
  [anon_sym_fold] = "fold",
  [anon_sym_sort] = "sort",
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
  [sym_indented_raw_text] = "indented_raw_text",
  [sym__implicit_run_raw_text] = "indented_raw_text",
  [sym__nested_indented_raw_text] = "indented_raw_text",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_line_end] = "line_end",
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
  [sym__nested_text_inline_alias] = "_nested_text_inline_alias",
  [sym__nested_text_inline] = "text_inline",
  [sym__nested_text_block] = "text_block",
  [sym__nested_text_body] = "text_body",
  [sym__nested_text_body_line] = "text_body_line",
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
  [sym__implicit_run_text_body_line] = "text_body_line",
  [sym_seek_statement] = "seek_statement",
  [sym_ask_statement] = "ask_statement",
  [sym_scatter_statement] = "scatter_statement",
  [sym_storm_statement] = "storm_statement",
  [sym_gather_statement] = "gather_statement",
  [sym_settle_statement] = "settle_statement",
  [sym_map_statement] = "map_statement",
  [sym_keep_statement] = "keep_statement",
  [sym_drop_statement] = "drop_statement",
  [sym_rank_statement] = "rank_statement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_repeat_body] = "repeat_body",
  [sym_repeat_until_body] = "repeat_until_body",
  [sym_until_statement] = "until_statement",
  [sym_invalid_flow_reserved_statement] = "invalid_flow_reserved_statement",
  [sym_inline_agic] = "inline_agic",
  [sym_inline_agic_body] = "inline_agic_body",
  [sym_par_clause] = "par_clause",
  [sym_position_clause] = "position_clause",
  [sym_rank_selection_clause] = "rank_selection_clause",
  [sym_runnable] = "runnable",
  [sym_agent] = "agent",
  [sym_local_name] = "local_name",
  [sym_directive] = "directive",
  [sym_directive_key] = "directive_key",
  [sym_directive_op] = "directive_op",
  [sym_directive_value] = "directive_value",
  [sym_recall_value] = "recall_value",
  [sym__directives] = "_directives",
  [sym_settings] = "settings",
  [sym_context_setting] = "context_setting",
  [sym_instruct_setting] = "instruct_setting",
  [sym_text_ref] = "text_ref",
  [sym_messages] = "messages",
  [sym_message] = "message",
  [sym_unroled_message] = "unroled_message",
  [sym__unroled_message_initial_line] = "text_body_line",
  [sym__unroled_message_continuation_line] = "text_body_line",
  [sym_invalid_agic_reserved_message] = "invalid_agic_reserved_message",
  [sym_role] = "role",
  [sym__pass_statement] = "_pass_statement",
  [sym_recall_none_keyword] = "recall_none_keyword",
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__agic_reserved_word] = "_agic_reserved_word",
  [sym_assign_operator] = "assign_operator",
  [sym_type_name] = "type_name",
  [sym_text_line] = "text_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym__cap_definition_repeat1] = "_cap_definition_repeat1",
  [aux_sym__cap_definition_repeat2] = "_cap_definition_repeat2",
  [aux_sym_job_body_repeat1] = "job_body_repeat1",
  [aux_sym_text_body_repeat1] = "text_body_repeat1",
  [aux_sym__nested_text_body_repeat1] = "_nested_text_body_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_implicit_run_statement_repeat1] = "implicit_run_statement_repeat1",
  [aux_sym__directives_repeat1] = "_directives_repeat1",
  [aux_sym_messages_repeat1] = "messages_repeat1",
  [aux_sym_unroled_message_repeat1] = "unroled_message_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_parent_doc_line] = sym_parent_doc_line,
  [sym_doc_line] = sym_doc_line,
  [sym_comment_line] = sym_comment_line,
  [sym_inline_comment] = sym_inline_comment,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Json] = anon_sym_Json,
  [anon_sym_Part] = anon_sym_Part,
  [sym_array_suffix] = sym_array_suffix,
  [anon_sym__] = anon_sym__,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_models] = anon_sym_models,
  [anon_sym_tools] = anon_sym_tools,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_hands] = anon_sym_hands,
  [anon_sym_handoffs] = anon_sym_handoffs,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [aux_sym_directive_value_token1] = aux_sym_directive_value_token1,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_none] = anon_sym_none,
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
  [sym_flow_rank_keyword] = sym_flow_rank_keyword,
  [sym_flow_repeat_keyword] = sym_flow_repeat_keyword,
  [sym_flow_until_keyword] = sym_flow_until_keyword,
  [sym_flow_par_keyword] = sym_flow_par_keyword,
  [sym_flow_first_keyword] = sym_flow_first_keyword,
  [sym_flow_last_keyword] = sym_flow_last_keyword,
  [sym_flow_top_keyword] = sym_flow_top_keyword,
  [sym_flow_bottom_keyword] = sym_flow_bottom_keyword,
  [sym_flow_think_keyword] = sym_flow_think_keyword,
  [sym_flow_use_keyword] = sym_flow_use_keyword,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_recall_keyword] = sym_recall_keyword,
  [sym_recall_auto_keyword] = sym_recall_auto_keyword,
  [sym_recall_far_keyword] = sym_recall_far_keyword,
  [sym_recall_near_keyword] = sym_recall_near_keyword,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_unfold] = anon_sym_unfold,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_sort] = anon_sym_sort,
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
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym__implicit_run_raw_text] = sym_indented_raw_text,
  [sym__nested_indented_raw_text] = sym_indented_raw_text,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_line_end] = sym_line_end,
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
  [sym__nested_text_inline_alias] = sym__nested_text_inline_alias,
  [sym__nested_text_inline] = sym_text_inline,
  [sym__nested_text_block] = sym_text_block,
  [sym__nested_text_body] = sym_text_body,
  [sym__nested_text_body_line] = sym_text_body_line,
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
  [sym__implicit_run_text_body_line] = sym_text_body_line,
  [sym_seek_statement] = sym_seek_statement,
  [sym_ask_statement] = sym_ask_statement,
  [sym_scatter_statement] = sym_scatter_statement,
  [sym_storm_statement] = sym_storm_statement,
  [sym_gather_statement] = sym_gather_statement,
  [sym_settle_statement] = sym_settle_statement,
  [sym_map_statement] = sym_map_statement,
  [sym_keep_statement] = sym_keep_statement,
  [sym_drop_statement] = sym_drop_statement,
  [sym_rank_statement] = sym_rank_statement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_repeat_body] = sym_repeat_body,
  [sym_repeat_until_body] = sym_repeat_until_body,
  [sym_until_statement] = sym_until_statement,
  [sym_invalid_flow_reserved_statement] = sym_invalid_flow_reserved_statement,
  [sym_inline_agic] = sym_inline_agic,
  [sym_inline_agic_body] = sym_inline_agic_body,
  [sym_par_clause] = sym_par_clause,
  [sym_position_clause] = sym_position_clause,
  [sym_rank_selection_clause] = sym_rank_selection_clause,
  [sym_runnable] = sym_runnable,
  [sym_agent] = sym_agent,
  [sym_local_name] = sym_local_name,
  [sym_directive] = sym_directive,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_op] = sym_directive_op,
  [sym_directive_value] = sym_directive_value,
  [sym_recall_value] = sym_recall_value,
  [sym__directives] = sym__directives,
  [sym_settings] = sym_settings,
  [sym_context_setting] = sym_context_setting,
  [sym_instruct_setting] = sym_instruct_setting,
  [sym_text_ref] = sym_text_ref,
  [sym_messages] = sym_messages,
  [sym_message] = sym_message,
  [sym_unroled_message] = sym_unroled_message,
  [sym__unroled_message_initial_line] = sym_text_body_line,
  [sym__unroled_message_continuation_line] = sym_text_body_line,
  [sym_invalid_agic_reserved_message] = sym_invalid_agic_reserved_message,
  [sym_role] = sym_role,
  [sym__pass_statement] = sym__pass_statement,
  [sym_recall_none_keyword] = sym_recall_none_keyword,
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__agic_reserved_word] = sym__agic_reserved_word,
  [sym_assign_operator] = sym_assign_operator,
  [sym_type_name] = sym_type_name,
  [sym_text_line] = sym_text_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym__cap_definition_repeat1] = aux_sym__cap_definition_repeat1,
  [aux_sym__cap_definition_repeat2] = aux_sym__cap_definition_repeat2,
  [aux_sym_job_body_repeat1] = aux_sym_job_body_repeat1,
  [aux_sym_text_body_repeat1] = aux_sym_text_body_repeat1,
  [aux_sym__nested_text_body_repeat1] = aux_sym__nested_text_body_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_implicit_run_statement_repeat1] = aux_sym_implicit_run_statement_repeat1,
  [aux_sym__directives_repeat1] = aux_sym__directives_repeat1,
  [aux_sym_messages_repeat1] = aux_sym_messages_repeat1,
  [aux_sym_unroled_message_repeat1] = aux_sym_unroled_message_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_parent_doc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
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
  [aux_sym_directive_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
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
  [sym_recall_auto_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_recall_far_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_recall_near_keyword] = {
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
  [anon_sym_sort] = {
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
  [sym_indented_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_run_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_indented_raw_text] = {
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
  [sym__nested_text_inline_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__nested_text_inline] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_text_body_line] = {
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
  [sym__implicit_run_text_body_line] = {
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
  [sym_rank_statement] = {
    .visible = true,
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
  [sym_repeat_until_body] = {
    .visible = true,
    .named = true,
  },
  [sym_until_statement] = {
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
  [sym_par_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_position_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_rank_selection_clause] = {
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
  [sym_recall_value] = {
    .visible = true,
    .named = true,
  },
  [sym__directives] = {
    .visible = false,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_context_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_setting] = {
    .visible = true,
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
  [sym__unroled_message_initial_line] = {
    .visible = true,
    .named = true,
  },
  [sym__unroled_message_continuation_line] = {
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
  [sym_recall_none_keyword] = {
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
  [sym_text_line] = {
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
  [aux_sym__cap_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cap_definition_repeat2] = {
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
  [aux_sym__nested_text_body_repeat1] = {
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
  field_key = 9,
  field_keyword = 10,
  field_kind = 11,
  field_limit = 12,
  field_name = 13,
  field_operator = 14,
  field_optional = 15,
  field_param = 16,
  field_params = 17,
  field_position = 18,
  field_property = 19,
  field_reference = 20,
  field_return = 21,
  field_runnable = 22,
  field_selection = 23,
  field_statement = 24,
  field_suffix = 25,
  field_type = 26,
  field_value = 27,
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
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_limit] = "limit",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_param] = "param",
  [field_params] = "params",
  [field_position] = "position",
  [field_property] = "property",
  [field_reference] = "reference",
  [field_return] = "return",
  [field_runnable] = "runnable",
  [field_selection] = "selection",
  [field_statement] = "statement",
  [field_suffix] = "suffix",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 5},
  [6] = {.index = 13, .length = 4},
  [7] = {.index = 17, .length = 1},
  [8] = {.index = 18, .length = 2},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 1},
  [12] = {.index = 25, .length = 2},
  [13] = {.index = 27, .length = 4},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 1},
  [16] = {.index = 36, .length = 1},
  [17] = {.index = 37, .length = 1},
  [18] = {.index = 38, .length = 1},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 2},
  [21] = {.index = 43, .length = 2},
  [22] = {.index = 45, .length = 3},
  [23] = {.index = 48, .length = 4},
  [24] = {.index = 52, .length = 1},
  [25] = {.index = 53, .length = 1},
  [26] = {.index = 54, .length = 2},
  [27] = {.index = 56, .length = 2},
  [28] = {.index = 58, .length = 5},
  [29] = {.index = 63, .length = 1},
  [30] = {.index = 64, .length = 4},
  [31] = {.index = 68, .length = 5},
  [32] = {.index = 73, .length = 1},
  [33] = {.index = 74, .length = 2},
  [34] = {.index = 76, .length = 1},
  [35] = {.index = 77, .length = 2},
  [36] = {.index = 79, .length = 1},
  [37] = {.index = 80, .length = 1},
  [38] = {.index = 81, .length = 2},
  [39] = {.index = 83, .length = 2},
  [40] = {.index = 85, .length = 3},
  [41] = {.index = 88, .length = 6},
  [42] = {.index = 94, .length = 6},
  [43] = {.index = 100, .length = 2},
  [44] = {.index = 102, .length = 2},
  [45] = {.index = 104, .length = 2},
  [46] = {.index = 106, .length = 2},
  [47] = {.index = 108, .length = 2},
  [48] = {.index = 110, .length = 1},
  [49] = {.index = 111, .length = 1},
  [50] = {.index = 112, .length = 7},
  [51] = {.index = 119, .length = 3},
  [52] = {.index = 122, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [3] =
    {field_base, 0},
  [4] =
    {field_name, 0},
  [5] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [8] =
    {field_body, 3, .inherited = true},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_property, 3, .inherited = true},
  [13] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [17] =
    {field_suffix, 0},
  [18] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [20] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [23] =
    {field_content, 0, .inherited = true},
  [24] =
    {field_param, 1},
  [25] =
    {field_name, 0},
    {field_optional, 1},
  [27] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [31] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [35] =
    {field_body, 1},
  [36] =
    {field_property, 0},
  [37] =
    {field_property, 1, .inherited = true},
  [38] =
    {field_content, 0},
  [39] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [41] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [43] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [45] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [48] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [52] =
    {field_agic, 1},
  [53] =
    {field_statement, 1},
  [54] =
    {field_body, 2},
    {field_property, 1, .inherited = true},
  [56] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [58] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [63] =
    {field_content, 1, .inherited = true},
  [64] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [68] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [73] =
    {field_runnable, 1},
  [74] =
    {field_agent, 1},
    {field_agic, 2},
  [76] =
    {field_body, 2},
  [77] =
    {field_agic, 2},
    {field_count, 1},
  [79] =
    {field_limit, 1},
  [80] =
    {field_agic, 2},
  [81] =
    {field_count, 1},
    {field_position, 0},
  [83] =
    {field_count, 1},
    {field_selection, 0},
  [85] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [88] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [94] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [100] =
    {field_name, 1},
    {field_value, 3},
  [102] =
    {field_name, 1},
    {field_statement, 3},
  [104] =
    {field_agent, 1},
    {field_runnable, 2},
  [106] =
    {field_count, 1},
    {field_runnable, 2},
  [108] =
    {field_agic, 3},
    {field_count, 1},
  [110] =
    {field_agic, 3},
  [111] =
    {field_body, 3},
  [112] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [119] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [122] =
    {field_body, 4},
    {field_count, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 11,
  [17] = 12,
  [18] = 11,
  [19] = 13,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 20,
  [30] = 21,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 26,
  [35] = 23,
  [36] = 22,
  [37] = 37,
  [38] = 27,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 39,
  [48] = 41,
  [49] = 49,
  [50] = 44,
  [51] = 46,
  [52] = 43,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
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
  [80] = 80,
  [81] = 81,
  [82] = 42,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
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
  [106] = 106,
  [107] = 77,
  [108] = 102,
  [109] = 103,
  [110] = 69,
  [111] = 54,
  [112] = 104,
  [113] = 70,
  [114] = 55,
  [115] = 56,
  [116] = 57,
  [117] = 71,
  [118] = 72,
  [119] = 73,
  [120] = 74,
  [121] = 75,
  [122] = 76,
  [123] = 106,
  [124] = 78,
  [125] = 58,
  [126] = 59,
  [127] = 60,
  [128] = 61,
  [129] = 79,
  [130] = 80,
  [131] = 81,
  [132] = 67,
  [133] = 83,
  [134] = 84,
  [135] = 85,
  [136] = 86,
  [137] = 87,
  [138] = 88,
  [139] = 89,
  [140] = 90,
  [141] = 91,
  [142] = 92,
  [143] = 93,
  [144] = 94,
  [145] = 95,
  [146] = 49,
  [147] = 96,
  [148] = 97,
  [149] = 98,
  [150] = 99,
  [151] = 62,
  [152] = 100,
  [153] = 101,
  [154] = 68,
  [155] = 66,
  [156] = 105,
  [157] = 63,
  [158] = 64,
  [159] = 65,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 105,
  [169] = 77,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 105,
  [175] = 175,
  [176] = 77,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 23,
  [186] = 22,
  [187] = 24,
  [188] = 27,
  [189] = 189,
  [190] = 26,
  [191] = 39,
  [192] = 160,
  [193] = 163,
  [194] = 161,
  [195] = 37,
  [196] = 196,
  [197] = 197,
  [198] = 26,
  [199] = 199,
  [200] = 42,
  [201] = 24,
  [202] = 45,
  [203] = 46,
  [204] = 44,
  [205] = 205,
  [206] = 41,
  [207] = 205,
  [208] = 43,
  [209] = 209,
  [210] = 205,
  [211] = 64,
  [212] = 212,
  [213] = 54,
  [214] = 55,
  [215] = 56,
  [216] = 57,
  [217] = 58,
  [218] = 59,
  [219] = 60,
  [220] = 61,
  [221] = 221,
  [222] = 62,
  [223] = 63,
  [224] = 65,
  [225] = 66,
  [226] = 67,
  [227] = 68,
  [228] = 69,
  [229] = 70,
  [230] = 71,
  [231] = 72,
  [232] = 73,
  [233] = 74,
  [234] = 75,
  [235] = 76,
  [236] = 106,
  [237] = 78,
  [238] = 79,
  [239] = 239,
  [240] = 81,
  [241] = 83,
  [242] = 84,
  [243] = 85,
  [244] = 86,
  [245] = 87,
  [246] = 88,
  [247] = 89,
  [248] = 90,
  [249] = 91,
  [250] = 92,
  [251] = 93,
  [252] = 94,
  [253] = 95,
  [254] = 49,
  [255] = 96,
  [256] = 97,
  [257] = 98,
  [258] = 99,
  [259] = 100,
  [260] = 101,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 102,
  [265] = 103,
  [266] = 104,
  [267] = 267,
  [268] = 268,
  [269] = 165,
  [270] = 270,
  [271] = 105,
  [272] = 77,
  [273] = 80,
  [274] = 274,
  [275] = 45,
  [276] = 276,
  [277] = 43,
  [278] = 105,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 103,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 104,
  [287] = 172,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 102,
  [292] = 292,
  [293] = 293,
  [294] = 77,
  [295] = 295,
  [296] = 281,
  [297] = 281,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 105,
  [302] = 77,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 165,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 165,
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
  [327] = 77,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 105,
  [332] = 332,
  [333] = 333,
  [334] = 77,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 105,
  [342] = 46,
  [343] = 343,
  [344] = 344,
  [345] = 105,
  [346] = 77,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 105,
  [358] = 77,
  [359] = 359,
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
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 386,
  [388] = 388,
  [389] = 388,
  [390] = 390,
  [391] = 390,
  [392] = 386,
  [393] = 390,
  [394] = 388,
  [395] = 395,
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
  [406] = 406,
  [407] = 407,
  [408] = 400,
  [409] = 400,
  [410] = 410,
  [411] = 410,
  [412] = 410,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 413,
  [417] = 414,
  [418] = 415,
  [419] = 413,
  [420] = 414,
  [421] = 415,
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
  [433] = 432,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 429,
  [439] = 439,
  [440] = 440,
  [441] = 426,
  [442] = 426,
  [443] = 428,
  [444] = 429,
  [445] = 445,
  [446] = 422,
  [447] = 432,
  [448] = 428,
  [449] = 422,
  [450] = 436,
  [451] = 437,
  [452] = 452,
  [453] = 453,
  [454] = 439,
  [455] = 436,
  [456] = 456,
  [457] = 437,
  [458] = 439,
  [459] = 459,
  [460] = 459,
  [461] = 461,
  [462] = 462,
  [463] = 459,
  [464] = 462,
  [465] = 462,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 468,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 479,
  [492] = 492,
  [493] = 480,
  [494] = 483,
  [495] = 495,
  [496] = 481,
  [497] = 492,
  [498] = 484,
  [499] = 495,
  [500] = 478,
  [501] = 482,
  [502] = 479,
  [503] = 480,
  [504] = 481,
  [505] = 486,
  [506] = 478,
  [507] = 507,
  [508] = 508,
  [509] = 484,
  [510] = 486,
  [511] = 487,
  [512] = 487,
  [513] = 489,
  [514] = 490,
  [515] = 492,
  [516] = 489,
  [517] = 483,
  [518] = 495,
  [519] = 490,
  [520] = 520,
  [521] = 492,
  [522] = 522,
  [523] = 477,
  [524] = 477,
  [525] = 482,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 105,
  [534] = 77,
  [535] = 531,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 385,
  [544] = 544,
  [545] = 531,
  [546] = 546,
  [547] = 527,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 549,
  [553] = 548,
  [554] = 549,
  [555] = 555,
  [556] = 555,
  [557] = 527,
  [558] = 558,
  [559] = 548,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 469,
  [572] = 572,
  [573] = 573,
  [574] = 560,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
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
  [603] = 565,
  [604] = 560,
  [605] = 577,
  [606] = 606,
  [607] = 590,
  [608] = 593,
  [609] = 597,
  [610] = 606,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 612,
  [616] = 561,
  [617] = 617,
  [618] = 611,
  [619] = 588,
  [620] = 620,
  [621] = 621,
  [622] = 613,
  [623] = 588,
  [624] = 624,
  [625] = 625,
  [626] = 469,
  [627] = 594,
  [628] = 595,
  [629] = 596,
  [630] = 630,
  [631] = 631,
  [632] = 599,
  [633] = 601,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 565,
  [638] = 560,
  [639] = 590,
  [640] = 593,
  [641] = 597,
  [642] = 606,
  [643] = 611,
  [644] = 621,
  [645] = 613,
  [646] = 646,
  [647] = 594,
  [648] = 612,
  [649] = 561,
  [650] = 595,
  [651] = 651,
  [652] = 596,
  [653] = 562,
  [654] = 624,
  [655] = 655,
  [656] = 562,
  [657] = 624,
  [658] = 599,
  [659] = 601,
  [660] = 621,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 105,
  [671] = 671,
  [672] = 77,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 671,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 662,
  [688] = 77,
  [689] = 689,
  [690] = 690,
  [691] = 678,
  [692] = 692,
  [693] = 693,
  [694] = 663,
  [695] = 695,
  [696] = 696,
  [697] = 680,
  [698] = 663,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 671,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 679,
  [709] = 709,
  [710] = 678,
  [711] = 679,
  [712] = 680,
  [713] = 713,
  [714] = 668,
  [715] = 681,
  [716] = 689,
  [717] = 692,
  [718] = 692,
  [719] = 681,
  [720] = 689,
  [721] = 693,
  [722] = 686,
  [723] = 723,
  [724] = 105,
  [725] = 662,
  [726] = 693,
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
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 735,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 730,
  [748] = 748,
  [749] = 749,
  [750] = 735,
  [751] = 738,
  [752] = 739,
  [753] = 753,
  [754] = 754,
  [755] = 735,
  [756] = 738,
  [757] = 738,
  [758] = 738,
  [759] = 738,
  [760] = 738,
  [761] = 738,
  [762] = 738,
  [763] = 738,
  [764] = 738,
  [765] = 738,
  [766] = 766,
  [767] = 767,
  [768] = 738,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 739,
  [773] = 773,
  [774] = 774,
  [775] = 729,
  [776] = 776,
  [777] = 777,
  [778] = 732,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 773,
  [786] = 774,
  [787] = 729,
  [788] = 788,
  [789] = 789,
  [790] = 732,
  [791] = 739,
  [792] = 385,
  [793] = 793,
  [794] = 794,
  [795] = 730,
  [796] = 796,
  [797] = 796,
  [798] = 773,
  [799] = 799,
  [800] = 774,
  [801] = 796,
  [802] = 738,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '\n', 339,
        '\r', 1,
        '#', 343,
        '(', 507,
        ')', 508,
        '+', 60,
        ',', 509,
        '-', 61,
        ':', 506,
        '=', 359,
        '?', 504,
        'B', 523,
        'J', 526,
        'N', 529,
        'P', 511,
        'T', 514,
        '[', 63,
        '_', 350,
        'a', 152,
        'b', 229,
        'c', 65,
        'd', 115,
        'e', 66,
        'f', 67,
        'g', 76,
        'h', 75,
        'i', 212,
        'k', 126,
        'l', 90,
        'm', 69,
        'n', 132,
        'p', 70,
        'r', 78,
        's', 103,
        't', 71,
        'u', 213,
        'w', 167,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(531);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(339);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 873,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 907,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1005,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 875,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 876,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 6,
        ' ', 6,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(648);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1081);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 877,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 1046,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1005,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 879,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1005,
        'w', 974,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(649);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(652);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 1086,
        ' ', 1086,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 18,
        ' ', 18,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 1084,
        ' ', 1084,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 21,
        ' ', 21,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 22,
        ' ', 22,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1005,
        'w', 974,
        '\t', 26,
        ' ', 26,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1005,
        'w', 974,
        '\t', 24,
        ' ', 24,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1005,
        'w', 974,
        '\t', 1082,
        ' ', 1082,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 339,
        '\r', 1,
        '#', 30,
        '(', 507,
        ')', 508,
        '-', 62,
        ':', 506,
        '_', 350,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(342);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(341);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(340);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(338);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ')', 508,
        ',', 509,
        '-', 62,
        ':', 506,
        '[', 63,
        'f', 570,
        'l', 540,
        'p', 538,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '+', 376,
        '-', 377,
        '=', 359,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '-', 378,
        ':', 506,
        'p', 538,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '-', 378,
        ':', 506,
        '\t', 364,
        '\f', 364,
        ' ', 364,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'b', 229,
        'p', 88,
        's', 145,
        't', 239,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'b', 597,
        'p', 538,
        't', 595,
        '\t', 365,
        '\f', 365,
        ' ', 365,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'd', 552,
        'n', 594,
        '\t', 366,
        '\f', 366,
        ' ', 366,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'f', 570,
        'l', 540,
        'p', 538,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        'a', 410,
        'd', 408,
        'g', 379,
        'k', 386,
        'm', 380,
        'r', 381,
        's', 384,
        '\t', 371,
        '\f', 371,
        ' ', 371,
      );
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        'a', 615,
        'd', 604,
        'g', 532,
        'k', 554,
        'm', 533,
        'r', 534,
        's', 545,
        '\t', 372,
        '\f', 372,
        ' ', 372,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 54:
      if (lookahead == '\f') SKIP(54);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '\f', 898,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1005,
        '\t', 55,
        ' ', 55,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 56:
      if (lookahead == '\f') SKIP(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(664);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == 'b') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '>') ADVANCE(505);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(505);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(170);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(176);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 159:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 160:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(458);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 181:
      if (lookahead == 'k') ADVANCE(456);
      END_STATE();
    case 182:
      if (lookahead == 'k') ADVANCE(446);
      END_STATE();
    case 183:
      if (lookahead == 'k') ADVANCE(489);
      END_STATE();
    case 184:
      if (lookahead == 'k') ADVANCE(491);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(462);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 313:
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 314:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 315:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 316:
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 317:
      if (lookahead == 'w') ADVANCE(450);
      END_STATE();
    case 318:
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 319:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 320:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 321:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 322:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 324:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(324);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 325:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(325);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 326:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(326);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 327:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(327);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'f') ADVANCE(577);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead == 'w') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(650);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 328:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(651);
      END_STATE();
    case 329:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 330:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(330);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(646);
      END_STATE();
    case 331:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(331);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(654);
      END_STATE();
    case 332:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(332);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 333:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(333);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 334:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') SKIP(334);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 335:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '\n', 339,
        '\r', 1,
        '#', 29,
        'a', 151,
        'c', 157,
        'f', 196,
        'i', 212,
        'p', 261,
        's', 138,
        't', 81,
        'w', 167,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(335);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(531);
      END_STATE();
    case 336:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '\n', 339,
        '\r', 1,
        '#', 29,
        'a', 562,
        'c', 564,
        'f', 577,
        'i', 585,
        'p', 611,
        's', 559,
        't', 539,
        'w', 571,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(336);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '+', 376,
        '-', 377,
        '=', 359,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '-', 378,
        ':', 506,
        'p', 538,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        '-', 378,
        ':', 506,
        '\t', 364,
        '\f', 364,
        ' ', 364,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'b', 597,
        'p', 538,
        't', 595,
        '\t', 365,
        '\f', 365,
        ' ', 365,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'd', 552,
        'n', 594,
        '\t', 366,
        '\f', 366,
        ' ', 366,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        ':', 506,
        'f', 570,
        'l', 540,
        'p', 538,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        'a', 410,
        'd', 408,
        'g', 379,
        'k', 386,
        'm', 380,
        'r', 381,
        's', 384,
        '\t', 371,
        '\f', 371,
        ' ', 371,
      );
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 338,
        '\r', 37,
        '#', 343,
        'a', 615,
        'd', 604,
        'g', 532,
        'k', 554,
        'm', 533,
        'r', 534,
        's', 545,
        '\t', 372,
        '\f', 372,
        ' ', 372,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '>') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_with_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_agic_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_recall_auto_keyword);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_recall_far_keyword);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_recall_near_keyword);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'c') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 't') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == 'k') ADVANCE(568);
      if (lookahead == 't') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'h') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'h') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'h') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'k') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'k') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'k') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'k') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'm') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'm') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'm') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 's') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 's') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 's') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 's') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 't') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'v') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'w') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'x') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'y') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 646,
        '\r', 1,
        '#', 659,
        'a', 731,
        'b', 796,
        'c', 665,
        'd', 795,
        'e', 667,
        'f', 772,
        'g', 670,
        'h', 712,
        'i', 785,
        'k', 713,
        'l', 711,
        'm', 668,
        'p', 823,
        'r', 672,
        's', 685,
        't', 669,
        'u', 786,
        'w', 750,
        '\t', 646,
        ' ', 646,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 647,
        '\r', 1,
        '#', 659,
        'a', 732,
        'c', 736,
        'f', 773,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 673,
        'r', 714,
        's', 718,
        't', 675,
        'u', 841,
        'w', 750,
        '\t', 647,
        ' ', 647,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 648,
        '\r', 1,
        '#', 659,
        'a', 836,
        'c', 799,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 674,
        'r', 714,
        's', 725,
        't', 810,
        'u', 841,
        '\t', 648,
        ' ', 648,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 649,
        '\r', 1,
        '#', 659,
        'a', 835,
        'b', 796,
        'c', 666,
        'd', 795,
        'e', 667,
        'f', 800,
        'g', 670,
        'h', 712,
        'k', 713,
        'l', 711,
        'm', 668,
        'r', 672,
        's', 686,
        't', 681,
        'u', 786,
        '\t', 649,
        ' ', 649,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 650,
        '\r', 1,
        '#', 659,
        'a', 562,
        'c', 564,
        'f', 577,
        'i', 585,
        'p', 611,
        's', 559,
        't', 539,
        'w', 571,
        '\t', 650,
        ' ', 650,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 651,
        '\r', 1,
        '#', 659,
        'a', 733,
        'c', 736,
        'f', 773,
        'i', 785,
        'p', 823,
        's', 724,
        't', 676,
        'w', 750,
        '\t', 651,
        ' ', 651,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\f') ADVANCE(652);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 653,
        '\r', 1,
        '#', 659,
        'a', 731,
        'b', 796,
        'c', 665,
        'd', 795,
        'e', 667,
        'f', 772,
        'g', 670,
        'h', 712,
        'i', 785,
        'k', 713,
        'l', 711,
        'm', 668,
        'p', 823,
        'r', 672,
        's', 685,
        't', 669,
        'u', 787,
        'w', 750,
        '\t', 654,
        ' ', 654,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 653,
        '\r', 1,
        '#', 659,
        'a', 731,
        'b', 796,
        'c', 665,
        'd', 795,
        'e', 667,
        'f', 772,
        'g', 670,
        'h', 712,
        'i', 785,
        'k', 713,
        'l', 711,
        'm', 668,
        'p', 823,
        'r', 672,
        's', 685,
        't', 669,
        'u', 794,
        'w', 750,
        '\t', 654,
        ' ', 654,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 658,
        '\r', 1,
        '#', 659,
        'a', 732,
        'c', 736,
        'f', 773,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 673,
        'r', 714,
        's', 718,
        't', 675,
        'u', 841,
        'w', 750,
        '\t', 1080,
        ' ', 1080,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 658,
        '\r', 1,
        '#', 659,
        'a', 732,
        'c', 736,
        'f', 773,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 673,
        'r', 714,
        's', 718,
        't', 675,
        'u', 841,
        'w', 750,
        '\t', 655,
        ' ', 655,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 658,
        '\r', 1,
        '#', 659,
        'a', 732,
        'c', 736,
        'f', 773,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 673,
        'r', 714,
        's', 718,
        't', 675,
        'u', 841,
        'w', 750,
        '\t', 656,
        ' ', 656,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 658,
        '\r', 1,
        '#', 659,
        'a', 732,
        'c', 736,
        'f', 773,
        'h', 677,
        'i', 785,
        'm', 807,
        'p', 673,
        'r', 714,
        's', 718,
        't', 675,
        'u', 841,
        'w', 750,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead != 0) ADVANCE(872);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(663);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead == 'h') ADVANCE(801);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'h') ADVANCE(745);
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(840);
      if (lookahead == 's') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'h') ADVANCE(745);
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'k') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(825);
      if (lookahead == 't') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == 'o') ADVANCE(825);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead == 'k') ADVANCE(752);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'k') ADVANCE(748);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(828);
      if (lookahead == 'k') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 't') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 't') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(741);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(741);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(801);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(789);
      if (lookahead == 'u') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(797);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(727);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 873,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 907,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1006,
        '\t', 874,
        ' ', 874,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 873,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 907,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1013,
        '\t', 874,
        ' ', 874,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 875,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 875,
        ' ', 875,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 876,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 876,
        ' ', 876,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 877,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 1046,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1006,
        '\t', 878,
        ' ', 878,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 877,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 903,
        'k', 940,
        'l', 944,
        'm', 904,
        'p', 1046,
        'r', 909,
        's', 919,
        't', 911,
        'u', 1013,
        '\t', 878,
        ' ', 878,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 879,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1006,
        'w', 974,
        '\t', 880,
        ' ', 880,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 879,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1013,
        'w', 974,
        '\t', 880,
        ' ', 880,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 1086,
        ' ', 1086,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 881,
        ' ', 881,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 882,
        ' ', 882,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 884,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1014,
        'w', 974,
        '\t', 883,
        ' ', 883,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 1084,
        ' ', 1084,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 885,
        ' ', 885,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 886,
        ' ', 886,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 888,
        '\r', 1,
        '#', 893,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1014,
        '\t', 887,
        ' ', 887,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1006,
        'w', 974,
        '\t', 891,
        ' ', 891,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1013,
        'w', 974,
        '\t', 892,
        ' ', 892,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1013,
        'w', 974,
        '\t', 890,
        ' ', 890,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 339,
        '\f', 889,
        '\r', 1,
        '#', 893,
        'a', 959,
        'b', 1016,
        'c', 900,
        'd', 1015,
        'e', 902,
        'f', 996,
        'g', 908,
        'h', 947,
        'i', 1011,
        'k', 940,
        'l', 944,
        'm', 905,
        'p', 1038,
        'r', 910,
        's', 921,
        't', 906,
        'u', 1013,
        'w', 974,
        '\t', 1082,
        ' ', 1082,
      );
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead != 0) ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(897);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 898,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1006,
        '\t', 899,
        ' ', 899,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 898,
        'a', 1045,
        'b', 1016,
        'c', 901,
        'd', 1015,
        'e', 902,
        'f', 1018,
        'g', 908,
        'h', 947,
        'k', 940,
        'l', 944,
        'm', 905,
        'r', 910,
        's', 920,
        't', 912,
        'u', 1013,
        '\t', 899,
        ' ', 899,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead == 'h') ADVANCE(1026);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1008);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1028);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(967);
      if (lookahead == 'h') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1050);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'u') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == 'u') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'h') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'h') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(941);
      if (lookahead == 'k') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(1037);
      if (lookahead == 't') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1037);
      if (lookahead == 't') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == 'k') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1037);
      if (lookahead == 't') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead == 'p') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'r') ADVANCE(1070);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'r') ADVANCE(1071);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1027);
      if (lookahead == 't') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1027);
      if (lookahead == 't') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1027);
      if (lookahead == 't') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'g') ADVANCE(966);
      if (lookahead == 's') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == 's') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1009);
      if (lookahead == 'u') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(955);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(958);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(956);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(957);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(953);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'x') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(1078);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1078);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1079);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1080,
        '#', 1089,
        'a', 1138,
        'c', 1140,
        'f', 1161,
        'h', 1100,
        'i', 1169,
        'm', 1183,
        'p', 1102,
        'r', 1126,
        's', 1129,
        't', 1097,
        'u', 1203,
        'w', 1149,
        '\t', 1080,
        ' ', 1080,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(1081);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1083,
        '#', 1089,
        'a', 1137,
        'b', 1177,
        'c', 1090,
        'd', 1176,
        'e', 1092,
        'f', 1160,
        'g', 1096,
        'h', 1124,
        'i', 1169,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'p', 1196,
        'r', 1098,
        's', 1108,
        't', 1094,
        'u', 1170,
        'w', 1149,
        '\t', 1082,
        ' ', 1082,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1083,
        '#', 1089,
        'a', 1137,
        'b', 1177,
        'c', 1090,
        'd', 1176,
        'e', 1092,
        'f', 1160,
        'g', 1096,
        'h', 1124,
        'i', 1169,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'p', 1196,
        'r', 1098,
        's', 1108,
        't', 1094,
        'u', 1171,
        'w', 1149,
        '\t', 1082,
        ' ', 1082,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1085,
        '#', 1089,
        'a', 1200,
        'b', 1177,
        'c', 1091,
        'd', 1176,
        'e', 1092,
        'f', 1181,
        'g', 1096,
        'h', 1124,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'r', 1098,
        's', 1109,
        't', 1101,
        'u', 1170,
        '\t', 1084,
        ' ', 1084,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1085,
        '#', 1089,
        'a', 1200,
        'b', 1177,
        'c', 1091,
        'd', 1176,
        'e', 1092,
        'f', 1181,
        'g', 1096,
        'h', 1124,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'r', 1098,
        's', 1109,
        't', 1101,
        'u', 1175,
        '\t', 1084,
        ' ', 1084,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1087,
        '#', 1089,
        'a', 1137,
        'b', 1177,
        'c', 1090,
        'd', 1176,
        'e', 1092,
        'f', 1160,
        'g', 1096,
        'h', 1124,
        'i', 1169,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'p', 1196,
        'r', 1098,
        's', 1108,
        't', 1094,
        'u', 1170,
        'w', 1149,
        '\t', 1086,
        ' ', 1086,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1087,
        '#', 1089,
        'a', 1137,
        'b', 1177,
        'c', 1090,
        'd', 1176,
        'e', 1092,
        'f', 1160,
        'g', 1096,
        'h', 1124,
        'i', 1169,
        'k', 1125,
        'l', 1123,
        'm', 1093,
        'p', 1196,
        'r', 1098,
        's', 1108,
        't', 1094,
        'u', 1175,
        'w', 1149,
        '\t', 1086,
        ' ', 1086,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == 'h') ADVANCE(1182);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'h') ADVANCE(1146);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1200);
      if (lookahead == 'o') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 'e') ADVANCE(1191);
      if (lookahead == 'u') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1148);
      if (lookahead == 'h') ADVANCE(1146);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1202);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead == 's') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1103);
      if (lookahead == 'e') ADVANCE(1119);
      if (lookahead == 'k') ADVANCE(1144);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == 't') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1103);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead == 'r') ADVANCE(1218);
      if (lookahead == 't') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead == 't') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead == 'k') ADVANCE(1152);
      if (lookahead == 't') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1181);
      if (lookahead == 't') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1181);
      if (lookahead == 't') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1182);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1168);
      if (lookahead == 'u') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead == 's') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1179);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1133);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1135);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1132);
      if (lookahead == 's') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead == 's') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 335},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 325},
  [12] = {.lex_state = 325},
  [13] = {.lex_state = 325},
  [14] = {.lex_state = 329},
  [15] = {.lex_state = 329},
  [16] = {.lex_state = 329},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 330},
  [23] = {.lex_state = 330},
  [24] = {.lex_state = 332},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 332},
  [27] = {.lex_state = 330},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 334},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 334},
  [35] = {.lex_state = 331},
  [36] = {.lex_state = 331},
  [37] = {.lex_state = 330},
  [38] = {.lex_state = 331},
  [39] = {.lex_state = 330},
  [40] = {.lex_state = 331},
  [41] = {.lex_state = 325},
  [42] = {.lex_state = 330},
  [43] = {.lex_state = 332},
  [44] = {.lex_state = 330},
  [45] = {.lex_state = 332},
  [46] = {.lex_state = 330},
  [47] = {.lex_state = 331},
  [48] = {.lex_state = 325},
  [49] = {.lex_state = 325},
  [50] = {.lex_state = 331},
  [51] = {.lex_state = 331},
  [52] = {.lex_state = 334},
  [53] = {.lex_state = 334},
  [54] = {.lex_state = 325},
  [55] = {.lex_state = 325},
  [56] = {.lex_state = 325},
  [57] = {.lex_state = 325},
  [58] = {.lex_state = 325},
  [59] = {.lex_state = 325},
  [60] = {.lex_state = 325},
  [61] = {.lex_state = 325},
  [62] = {.lex_state = 325},
  [63] = {.lex_state = 325},
  [64] = {.lex_state = 325},
  [65] = {.lex_state = 325},
  [66] = {.lex_state = 325},
  [67] = {.lex_state = 325},
  [68] = {.lex_state = 325},
  [69] = {.lex_state = 325},
  [70] = {.lex_state = 325},
  [71] = {.lex_state = 325},
  [72] = {.lex_state = 325},
  [73] = {.lex_state = 325},
  [74] = {.lex_state = 325},
  [75] = {.lex_state = 325},
  [76] = {.lex_state = 325},
  [77] = {.lex_state = 325},
  [78] = {.lex_state = 325},
  [79] = {.lex_state = 325},
  [80] = {.lex_state = 325},
  [81] = {.lex_state = 325},
  [82] = {.lex_state = 331},
  [83] = {.lex_state = 325},
  [84] = {.lex_state = 325},
  [85] = {.lex_state = 325},
  [86] = {.lex_state = 325},
  [87] = {.lex_state = 325},
  [88] = {.lex_state = 325},
  [89] = {.lex_state = 325},
  [90] = {.lex_state = 325},
  [91] = {.lex_state = 325},
  [92] = {.lex_state = 325},
  [93] = {.lex_state = 325},
  [94] = {.lex_state = 325},
  [95] = {.lex_state = 325},
  [96] = {.lex_state = 325},
  [97] = {.lex_state = 325},
  [98] = {.lex_state = 325},
  [99] = {.lex_state = 325},
  [100] = {.lex_state = 325},
  [101] = {.lex_state = 325},
  [102] = {.lex_state = 325},
  [103] = {.lex_state = 325},
  [104] = {.lex_state = 325},
  [105] = {.lex_state = 325},
  [106] = {.lex_state = 325},
  [107] = {.lex_state = 329},
  [108] = {.lex_state = 329},
  [109] = {.lex_state = 329},
  [110] = {.lex_state = 329},
  [111] = {.lex_state = 329},
  [112] = {.lex_state = 329},
  [113] = {.lex_state = 329},
  [114] = {.lex_state = 329},
  [115] = {.lex_state = 329},
  [116] = {.lex_state = 329},
  [117] = {.lex_state = 329},
  [118] = {.lex_state = 329},
  [119] = {.lex_state = 329},
  [120] = {.lex_state = 329},
  [121] = {.lex_state = 329},
  [122] = {.lex_state = 329},
  [123] = {.lex_state = 329},
  [124] = {.lex_state = 329},
  [125] = {.lex_state = 329},
  [126] = {.lex_state = 329},
  [127] = {.lex_state = 329},
  [128] = {.lex_state = 329},
  [129] = {.lex_state = 329},
  [130] = {.lex_state = 329},
  [131] = {.lex_state = 329},
  [132] = {.lex_state = 329},
  [133] = {.lex_state = 329},
  [134] = {.lex_state = 329},
  [135] = {.lex_state = 329},
  [136] = {.lex_state = 329},
  [137] = {.lex_state = 329},
  [138] = {.lex_state = 329},
  [139] = {.lex_state = 329},
  [140] = {.lex_state = 329},
  [141] = {.lex_state = 329},
  [142] = {.lex_state = 329},
  [143] = {.lex_state = 329},
  [144] = {.lex_state = 329},
  [145] = {.lex_state = 329},
  [146] = {.lex_state = 329},
  [147] = {.lex_state = 329},
  [148] = {.lex_state = 329},
  [149] = {.lex_state = 329},
  [150] = {.lex_state = 329},
  [151] = {.lex_state = 329},
  [152] = {.lex_state = 329},
  [153] = {.lex_state = 329},
  [154] = {.lex_state = 329},
  [155] = {.lex_state = 329},
  [156] = {.lex_state = 329},
  [157] = {.lex_state = 329},
  [158] = {.lex_state = 329},
  [159] = {.lex_state = 329},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 326},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 326},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 326},
  [167] = {.lex_state = 326},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 326},
  [171] = {.lex_state = 326},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 326},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 326},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 326},
  [193] = {.lex_state = 326},
  [194] = {.lex_state = 326},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 326},
  [197] = {.lex_state = 326},
  [198] = {.lex_state = 333},
  [199] = {.lex_state = 326},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 333},
  [202] = {.lex_state = 20},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 49},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 326},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 326},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 335},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 335},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 326},
  [262] = {.lex_state = 326},
  [263] = {.lex_state = 326},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 326},
  [268] = {.lex_state = 326},
  [269] = {.lex_state = 326},
  [270] = {.lex_state = 326},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 326},
  [275] = {.lex_state = 333},
  [276] = {.lex_state = 326},
  [277] = {.lex_state = 333},
  [278] = {.lex_state = 326},
  [279] = {.lex_state = 326},
  [280] = {.lex_state = 326},
  [281] = {.lex_state = 50},
  [282] = {.lex_state = 326},
  [283] = {.lex_state = 326},
  [284] = {.lex_state = 326},
  [285] = {.lex_state = 326},
  [286] = {.lex_state = 326},
  [287] = {.lex_state = 326},
  [288] = {.lex_state = 326},
  [289] = {.lex_state = 326},
  [290] = {.lex_state = 326},
  [291] = {.lex_state = 326},
  [292] = {.lex_state = 326},
  [293] = {.lex_state = 326},
  [294] = {.lex_state = 326},
  [295] = {.lex_state = 326},
  [296] = {.lex_state = 50},
  [297] = {.lex_state = 50},
  [298] = {.lex_state = 326},
  [299] = {.lex_state = 327},
  [300] = {.lex_state = 327},
  [301] = {.lex_state = 54},
  [302] = {.lex_state = 54},
  [303] = {.lex_state = 327},
  [304] = {.lex_state = 327},
  [305] = {.lex_state = 327},
  [306] = {.lex_state = 327},
  [307] = {.lex_state = 336},
  [308] = {.lex_state = 336},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 328},
  [311] = {.lex_state = 328},
  [312] = {.lex_state = 335},
  [313] = {.lex_state = 335},
  [314] = {.lex_state = 335},
  [315] = {.lex_state = 335},
  [316] = {.lex_state = 335},
  [317] = {.lex_state = 335},
  [318] = {.lex_state = 335},
  [319] = {.lex_state = 335},
  [320] = {.lex_state = 335},
  [321] = {.lex_state = 327},
  [322] = {.lex_state = 335},
  [323] = {.lex_state = 335},
  [324] = {.lex_state = 327},
  [325] = {.lex_state = 335},
  [326] = {.lex_state = 335},
  [327] = {.lex_state = 327},
  [328] = {.lex_state = 335},
  [329] = {.lex_state = 335},
  [330] = {.lex_state = 335},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 335},
  [333] = {.lex_state = 335},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 335},
  [336] = {.lex_state = 335},
  [337] = {.lex_state = 335},
  [338] = {.lex_state = 327},
  [339] = {.lex_state = 335},
  [340] = {.lex_state = 335},
  [341] = {.lex_state = 327},
  [342] = {.lex_state = 328},
  [343] = {.lex_state = 336},
  [344] = {.lex_state = 336},
  [345] = {.lex_state = 336},
  [346] = {.lex_state = 336},
  [347] = {.lex_state = 335},
  [348] = {.lex_state = 335},
  [349] = {.lex_state = 335},
  [350] = {.lex_state = 335},
  [351] = {.lex_state = 335},
  [352] = {.lex_state = 335},
  [353] = {.lex_state = 335},
  [354] = {.lex_state = 335},
  [355] = {.lex_state = 335},
  [356] = {.lex_state = 335},
  [357] = {.lex_state = 335},
  [358] = {.lex_state = 335},
  [359] = {.lex_state = 335},
  [360] = {.lex_state = 335},
  [361] = {.lex_state = 335},
  [362] = {.lex_state = 335},
  [363] = {.lex_state = 335},
  [364] = {.lex_state = 335},
  [365] = {.lex_state = 335},
  [366] = {.lex_state = 335},
  [367] = {.lex_state = 335},
  [368] = {.lex_state = 335},
  [369] = {.lex_state = 335},
  [370] = {.lex_state = 335},
  [371] = {.lex_state = 335},
  [372] = {.lex_state = 335},
  [373] = {.lex_state = 335},
  [374] = {.lex_state = 335},
  [375] = {.lex_state = 335},
  [376] = {.lex_state = 335},
  [377] = {.lex_state = 335},
  [378] = {.lex_state = 335},
  [379] = {.lex_state = 335},
  [380] = {.lex_state = 335},
  [381] = {.lex_state = 335},
  [382] = {.lex_state = 335},
  [383] = {.lex_state = 335},
  [384] = {.lex_state = 335},
  [385] = {.lex_state = 49},
  [386] = {.lex_state = 45},
  [387] = {.lex_state = 45},
  [388] = {.lex_state = 45},
  [389] = {.lex_state = 45},
  [390] = {.lex_state = 43},
  [391] = {.lex_state = 43},
  [392] = {.lex_state = 45},
  [393] = {.lex_state = 43},
  [394] = {.lex_state = 45},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 40},
  [411] = {.lex_state = 40},
  [412] = {.lex_state = 40},
  [413] = {.lex_state = 38},
  [414] = {.lex_state = 58},
  [415] = {.lex_state = 38},
  [416] = {.lex_state = 38},
  [417] = {.lex_state = 58},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 38},
  [420] = {.lex_state = 58},
  [421] = {.lex_state = 38},
  [422] = {.lex_state = 51},
  [423] = {.lex_state = 51},
  [424] = {.lex_state = 51},
  [425] = {.lex_state = 38},
  [426] = {.lex_state = 41},
  [427] = {.lex_state = 51},
  [428] = {.lex_state = 41},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 51},
  [431] = {.lex_state = 51},
  [432] = {.lex_state = 51},
  [433] = {.lex_state = 51},
  [434] = {.lex_state = 44},
  [435] = {.lex_state = 44},
  [436] = {.lex_state = 51},
  [437] = {.lex_state = 42},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 51},
  [440] = {.lex_state = 51},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 41},
  [443] = {.lex_state = 41},
  [444] = {.lex_state = 41},
  [445] = {.lex_state = 51},
  [446] = {.lex_state = 51},
  [447] = {.lex_state = 51},
  [448] = {.lex_state = 41},
  [449] = {.lex_state = 51},
  [450] = {.lex_state = 51},
  [451] = {.lex_state = 42},
  [452] = {.lex_state = 38},
  [453] = {.lex_state = 27},
  [454] = {.lex_state = 51},
  [455] = {.lex_state = 51},
  [456] = {.lex_state = 38},
  [457] = {.lex_state = 42},
  [458] = {.lex_state = 51},
  [459] = {.lex_state = 57},
  [460] = {.lex_state = 57},
  [461] = {.lex_state = 39},
  [462] = {.lex_state = 57},
  [463] = {.lex_state = 57},
  [464] = {.lex_state = 57},
  [465] = {.lex_state = 57},
  [466] = {.lex_state = 27},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 39},
  [470] = {.lex_state = 38},
  [471] = {.lex_state = 38},
  [472] = {.lex_state = 38},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 38},
  [476] = {.lex_state = 38},
  [477] = {.lex_state = 52},
  [478] = {.lex_state = 51},
  [479] = {.lex_state = 27},
  [480] = {.lex_state = 27},
  [481] = {.lex_state = 27},
  [482] = {.lex_state = 46},
  [483] = {.lex_state = 42},
  [484] = {.lex_state = 27},
  [485] = {.lex_state = 42},
  [486] = {.lex_state = 27},
  [487] = {.lex_state = 42},
  [488] = {.lex_state = 51},
  [489] = {.lex_state = 42},
  [490] = {.lex_state = 42},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 27},
  [494] = {.lex_state = 42},
  [495] = {.lex_state = 42},
  [496] = {.lex_state = 27},
  [497] = {.lex_state = 11},
  [498] = {.lex_state = 27},
  [499] = {.lex_state = 42},
  [500] = {.lex_state = 51},
  [501] = {.lex_state = 46},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 27},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 27},
  [506] = {.lex_state = 51},
  [507] = {.lex_state = 48},
  [508] = {.lex_state = 59},
  [509] = {.lex_state = 27},
  [510] = {.lex_state = 27},
  [511] = {.lex_state = 42},
  [512] = {.lex_state = 42},
  [513] = {.lex_state = 42},
  [514] = {.lex_state = 42},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 42},
  [517] = {.lex_state = 42},
  [518] = {.lex_state = 42},
  [519] = {.lex_state = 42},
  [520] = {.lex_state = 16},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 27},
  [523] = {.lex_state = 52},
  [524] = {.lex_state = 52},
  [525] = {.lex_state = 46},
  [526] = {.lex_state = 59},
  [527] = {.lex_state = 47},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 42},
  [530] = {.lex_state = 51},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 38},
  [533] = {.lex_state = 27},
  [534] = {.lex_state = 27},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 38},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 47},
  [539] = {.lex_state = 38},
  [540] = {.lex_state = 47},
  [541] = {.lex_state = 38},
  [542] = {.lex_state = 38},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 47},
  [548] = {.lex_state = 53},
  [549] = {.lex_state = 53},
  [550] = {.lex_state = 27},
  [551] = {.lex_state = 38},
  [552] = {.lex_state = 53},
  [553] = {.lex_state = 53},
  [554] = {.lex_state = 53},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 47},
  [558] = {.lex_state = 38},
  [559] = {.lex_state = 53},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 38},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 38},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 38},
  [566] = {.lex_state = 38},
  [567] = {.lex_state = 38},
  [568] = {.lex_state = 38},
  [569] = {.lex_state = 323},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 38},
  [573] = {.lex_state = 27},
  [574] = {.lex_state = 38},
  [575] = {.lex_state = 27},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 38},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 38},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 38},
  [586] = {.lex_state = 38},
  [587] = {.lex_state = 38},
  [588] = {.lex_state = 38},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 38},
  [591] = {.lex_state = 38},
  [592] = {.lex_state = 38},
  [593] = {.lex_state = 38},
  [594] = {.lex_state = 38},
  [595] = {.lex_state = 38},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 38},
  [599] = {.lex_state = 38},
  [600] = {.lex_state = 38},
  [601] = {.lex_state = 38},
  [602] = {.lex_state = 38},
  [603] = {.lex_state = 38},
  [604] = {.lex_state = 38},
  [605] = {.lex_state = 38},
  [606] = {.lex_state = 38},
  [607] = {.lex_state = 38},
  [608] = {.lex_state = 38},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 38},
  [611] = {.lex_state = 38},
  [612] = {.lex_state = 38},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 38},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 38},
  [617] = {.lex_state = 38},
  [618] = {.lex_state = 38},
  [619] = {.lex_state = 38},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 38},
  [622] = {.lex_state = 38},
  [623] = {.lex_state = 38},
  [624] = {.lex_state = 38},
  [625] = {.lex_state = 335},
  [626] = {.lex_state = 51},
  [627] = {.lex_state = 38},
  [628] = {.lex_state = 38},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 27},
  [631] = {.lex_state = 38},
  [632] = {.lex_state = 38},
  [633] = {.lex_state = 38},
  [634] = {.lex_state = 38},
  [635] = {.lex_state = 38},
  [636] = {.lex_state = 38},
  [637] = {.lex_state = 38},
  [638] = {.lex_state = 38},
  [639] = {.lex_state = 38},
  [640] = {.lex_state = 38},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 38},
  [643] = {.lex_state = 38},
  [644] = {.lex_state = 38},
  [645] = {.lex_state = 38},
  [646] = {.lex_state = 38},
  [647] = {.lex_state = 38},
  [648] = {.lex_state = 38},
  [649] = {.lex_state = 38},
  [650] = {.lex_state = 38},
  [651] = {.lex_state = 38},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 38},
  [654] = {.lex_state = 38},
  [655] = {.lex_state = 323},
  [656] = {.lex_state = 38},
  [657] = {.lex_state = 38},
  [658] = {.lex_state = 38},
  [659] = {.lex_state = 38},
  [660] = {.lex_state = 38},
  [661] = {.lex_state = 38},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 38},
  [665] = {.lex_state = 38},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 38},
  [668] = {.lex_state = 323},
  [669] = {.lex_state = 38},
  [670] = {.lex_state = 11},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 11},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 324},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 56},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 27},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 38},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 16},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 324},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 38},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 324},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 38},
  [706] = {.lex_state = 324},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 56},
  [709] = {.lex_state = 324},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 56},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 56},
  [714] = {.lex_state = 323},
  [715] = {.lex_state = 27},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 27},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 324},
  [724] = {.lex_state = 16},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 38},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 38},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 38},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 323},
  [738] = {.lex_state = 38},
  [739] = {.lex_state = 38},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 38},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 38},
  [747] = {.lex_state = 38},
  [748] = {.lex_state = 42},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 38},
  [751] = {.lex_state = 38},
  [752] = {.lex_state = 38},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 38},
  [756] = {.lex_state = 38},
  [757] = {.lex_state = 38},
  [758] = {.lex_state = 38},
  [759] = {.lex_state = 38},
  [760] = {.lex_state = 38},
  [761] = {.lex_state = 38},
  [762] = {.lex_state = 38},
  [763] = {.lex_state = 38},
  [764] = {.lex_state = 38},
  [765] = {.lex_state = 38},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 38},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 38},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 38},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 38},
  [792] = {.lex_state = 323},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 38},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Json] = ACTIONS(1),
    [anon_sym_Part] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_hands] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
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
    [sym_flow_rank_keyword] = ACTIONS(1),
    [sym_flow_repeat_keyword] = ACTIONS(1),
    [sym_flow_until_keyword] = ACTIONS(1),
    [sym_flow_par_keyword] = ACTIONS(1),
    [sym_flow_first_keyword] = ACTIONS(1),
    [sym_flow_last_keyword] = ACTIONS(1),
    [sym_flow_top_keyword] = ACTIONS(1),
    [sym_flow_bottom_keyword] = ACTIONS(1),
    [sym_flow_think_keyword] = ACTIONS(1),
    [sym_flow_use_keyword] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_recall_keyword] = ACTIONS(1),
    [sym_recall_auto_keyword] = ACTIONS(1),
    [sym_recall_far_keyword] = ACTIONS(1),
    [sym_recall_near_keyword] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_unfold] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(740),
    [sym_item] = STATE(221),
    [sym__trivia] = STATE(221),
    [sym_with] = STATE(384),
    [sym_struct] = STATE(384),
    [sym_psyche] = STATE(384),
    [sym_skill] = STATE(384),
    [sym_service] = STATE(384),
    [sym_prompt] = STATE(384),
    [sym_task] = STATE(384),
    [sym_chore] = STATE(384),
    [sym_instruct] = STATE(384),
    [sym_context] = STATE(384),
    [sym_agic] = STATE(384),
    [sym_flow] = STATE(384),
    [aux_sym_source_file_repeat1] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym_parent_doc_line] = ACTIONS(5),
    [sym_doc_line] = ACTIONS(7),
    [sym_comment_line] = ACTIONS(7),
    [sym_with_keyword] = ACTIONS(9),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(13),
    [sym_skill_keyword] = ACTIONS(15),
    [sym_service_keyword] = ACTIONS(17),
    [sym_prompt_keyword] = ACTIONS(19),
    [sym_context_keyword] = ACTIONS(21),
    [sym_instruct_keyword] = ACTIONS(23),
    [sym_agic_keyword] = ACTIONS(25),
    [sym_task_keyword] = ACTIONS(27),
    [sym_chore_keyword] = ACTIONS(29),
    [sym_flow_keyword] = ACTIONS(31),
  },
  [2] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(376),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [3] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(374),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [4] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(360),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [5] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(371),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [6] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(351),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [7] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(352),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [8] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(348),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [9] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(350),
    [sym_statements] = STATE(317),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(317),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(10),
    [sym_blank_line] = ACTIONS(33),
    [sym_parent_doc_line] = ACTIONS(33),
    [sym_doc_line] = ACTIONS(33),
    [sym_comment_line] = ACTIONS(33),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [10] = {
    [sym__trivia] = STATE(165),
    [sym_statements] = STATE(329),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(16),
    [sym_ask_statement] = STATE(16),
    [sym_scatter_statement] = STATE(16),
    [sym_storm_statement] = STATE(16),
    [sym_gather_statement] = STATE(16),
    [sym_settle_statement] = STATE(16),
    [sym_map_statement] = STATE(16),
    [sym_keep_statement] = STATE(16),
    [sym_drop_statement] = STATE(16),
    [sym_rank_statement] = STATE(16),
    [sym_repeat_statement] = STATE(16),
    [sym_invalid_flow_reserved_statement] = STATE(16),
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(555),
    [sym__directives] = STATE(33),
    [sym__pass_statement] = STATE(329),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym__cap_definition_repeat2] = STATE(165),
    [sym_blank_line] = ACTIONS(71),
    [sym_parent_doc_line] = ACTIONS(71),
    [sym_doc_line] = ACTIONS(71),
    [sym_comment_line] = ACTIONS(71),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [sym_pass_keyword] = ACTIONS(37),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [sym_recall_keyword] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [11] = {
    [sym__trivia] = STATE(12),
    [sym__flow_statement] = STATE(12),
    [sym__flow_operation] = STATE(12),
    [sym_let_statement] = STATE(12),
    [sym_run_statement] = STATE(12),
    [sym_implicit_run_statement] = STATE(12),
    [sym__implicit_run_text_body_line] = STATE(22),
    [sym_seek_statement] = STATE(12),
    [sym_ask_statement] = STATE(12),
    [sym_scatter_statement] = STATE(12),
    [sym_storm_statement] = STATE(12),
    [sym_gather_statement] = STATE(12),
    [sym_settle_statement] = STATE(12),
    [sym_map_statement] = STATE(12),
    [sym_keep_statement] = STATE(12),
    [sym_drop_statement] = STATE(12),
    [sym_rank_statement] = STATE(12),
    [sym_repeat_statement] = STATE(12),
    [sym_invalid_flow_reserved_statement] = STATE(12),
    [sym__flow_reserved_word] = STATE(500),
    [aux_sym_statements_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_blank_line] = ACTIONS(75),
    [sym_parent_doc_line] = ACTIONS(75),
    [sym_doc_line] = ACTIONS(75),
    [sym_comment_line] = ACTIONS(75),
    [sym_with_keyword] = ACTIONS(77),
    [sym_struct_keyword] = ACTIONS(77),
    [sym_psyche_keyword] = ACTIONS(77),
    [sym_skill_keyword] = ACTIONS(77),
    [sym_service_keyword] = ACTIONS(77),
    [sym_prompt_keyword] = ACTIONS(77),
    [sym_context_keyword] = ACTIONS(77),
    [sym_instruct_keyword] = ACTIONS(77),
    [sym_agic_keyword] = ACTIONS(77),
    [sym_task_keyword] = ACTIONS(77),
    [sym_chore_keyword] = ACTIONS(77),
    [sym_flow_keyword] = ACTIONS(77),
    [sym_flow_run_keyword] = ACTIONS(79),
    [sym_flow_let_keyword] = ACTIONS(81),
    [sym_flow_seek_keyword] = ACTIONS(83),
    [sym_flow_ask_keyword] = ACTIONS(85),
    [sym_flow_scatter_keyword] = ACTIONS(87),
    [sym_flow_storm_keyword] = ACTIONS(89),
    [sym_flow_gather_keyword] = ACTIONS(91),
    [sym_flow_settle_keyword] = ACTIONS(93),
    [sym_flow_map_keyword] = ACTIONS(95),
    [sym_flow_keep_keyword] = ACTIONS(97),
    [sym_flow_drop_keyword] = ACTIONS(99),
    [sym_flow_rank_keyword] = ACTIONS(101),
    [sym_flow_repeat_keyword] = ACTIONS(103),
    [sym_flow_until_keyword] = ACTIONS(77),
    [sym_flow_top_keyword] = ACTIONS(105),
    [sym_flow_bottom_keyword] = ACTIONS(105),
    [sym_flow_think_keyword] = ACTIONS(105),
    [sym_flow_use_keyword] = ACTIONS(105),
    [sym_thunk_keyword] = ACTIONS(105),
    [anon_sym_call] = ACTIONS(105),
    [anon_sym_do] = ACTIONS(105),
    [anon_sym_unfold] = ACTIONS(105),
    [anon_sym_each] = ACTIONS(105),
    [anon_sym_fold] = ACTIONS(105),
    [anon_sym_sort] = ACTIONS(105),
    [anon_sym_head] = ACTIONS(105),
    [anon_sym_tail] = ACTIONS(105),
    [sym__implicit_run_raw_text] = ACTIONS(107),
  },
  [12] = {
    [sym__trivia] = STATE(13),
    [sym__flow_statement] = STATE(13),
    [sym__flow_operation] = STATE(13),
    [sym_let_statement] = STATE(13),
    [sym_run_statement] = STATE(13),
    [sym_implicit_run_statement] = STATE(13),
    [sym__implicit_run_text_body_line] = STATE(22),
    [sym_seek_statement] = STATE(13),
    [sym_ask_statement] = STATE(13),
    [sym_scatter_statement] = STATE(13),
    [sym_storm_statement] = STATE(13),
    [sym_gather_statement] = STATE(13),
    [sym_settle_statement] = STATE(13),
    [sym_map_statement] = STATE(13),
    [sym_keep_statement] = STATE(13),
    [sym_drop_statement] = STATE(13),
    [sym_rank_statement] = STATE(13),
    [sym_repeat_statement] = STATE(13),
    [sym_invalid_flow_reserved_statement] = STATE(13),
    [sym__flow_reserved_word] = STATE(500),
    [aux_sym_statements_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_blank_line] = ACTIONS(111),
    [sym_parent_doc_line] = ACTIONS(111),
    [sym_doc_line] = ACTIONS(111),
    [sym_comment_line] = ACTIONS(111),
    [sym_with_keyword] = ACTIONS(113),
    [sym_struct_keyword] = ACTIONS(113),
    [sym_psyche_keyword] = ACTIONS(113),
    [sym_skill_keyword] = ACTIONS(113),
    [sym_service_keyword] = ACTIONS(113),
    [sym_prompt_keyword] = ACTIONS(113),
    [sym_context_keyword] = ACTIONS(113),
    [sym_instruct_keyword] = ACTIONS(113),
    [sym_agic_keyword] = ACTIONS(113),
    [sym_task_keyword] = ACTIONS(113),
    [sym_chore_keyword] = ACTIONS(113),
    [sym_flow_keyword] = ACTIONS(113),
    [sym_flow_run_keyword] = ACTIONS(79),
    [sym_flow_let_keyword] = ACTIONS(81),
    [sym_flow_seek_keyword] = ACTIONS(83),
    [sym_flow_ask_keyword] = ACTIONS(85),
    [sym_flow_scatter_keyword] = ACTIONS(87),
    [sym_flow_storm_keyword] = ACTIONS(89),
    [sym_flow_gather_keyword] = ACTIONS(91),
    [sym_flow_settle_keyword] = ACTIONS(93),
    [sym_flow_map_keyword] = ACTIONS(95),
    [sym_flow_keep_keyword] = ACTIONS(97),
    [sym_flow_drop_keyword] = ACTIONS(99),
    [sym_flow_rank_keyword] = ACTIONS(101),
    [sym_flow_repeat_keyword] = ACTIONS(103),
    [sym_flow_until_keyword] = ACTIONS(113),
    [sym_flow_top_keyword] = ACTIONS(105),
    [sym_flow_bottom_keyword] = ACTIONS(105),
    [sym_flow_think_keyword] = ACTIONS(105),
    [sym_flow_use_keyword] = ACTIONS(105),
    [sym_thunk_keyword] = ACTIONS(105),
    [anon_sym_call] = ACTIONS(105),
    [anon_sym_do] = ACTIONS(105),
    [anon_sym_unfold] = ACTIONS(105),
    [anon_sym_each] = ACTIONS(105),
    [anon_sym_fold] = ACTIONS(105),
    [anon_sym_sort] = ACTIONS(105),
    [anon_sym_head] = ACTIONS(105),
    [anon_sym_tail] = ACTIONS(105),
    [sym__implicit_run_raw_text] = ACTIONS(107),
  },
  [13] = {
    [sym__trivia] = STATE(13),
    [sym__flow_statement] = STATE(13),
    [sym__flow_operation] = STATE(13),
    [sym_let_statement] = STATE(13),
    [sym_run_statement] = STATE(13),
    [sym_implicit_run_statement] = STATE(13),
    [sym__implicit_run_text_body_line] = STATE(22),
    [sym_seek_statement] = STATE(13),
    [sym_ask_statement] = STATE(13),
    [sym_scatter_statement] = STATE(13),
    [sym_storm_statement] = STATE(13),
    [sym_gather_statement] = STATE(13),
    [sym_settle_statement] = STATE(13),
    [sym_map_statement] = STATE(13),
    [sym_keep_statement] = STATE(13),
    [sym_drop_statement] = STATE(13),
    [sym_rank_statement] = STATE(13),
    [sym_repeat_statement] = STATE(13),
    [sym_invalid_flow_reserved_statement] = STATE(13),
    [sym__flow_reserved_word] = STATE(500),
    [aux_sym_statements_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_blank_line] = ACTIONS(117),
    [sym_parent_doc_line] = ACTIONS(117),
    [sym_doc_line] = ACTIONS(117),
    [sym_comment_line] = ACTIONS(117),
    [sym_with_keyword] = ACTIONS(120),
    [sym_struct_keyword] = ACTIONS(120),
    [sym_psyche_keyword] = ACTIONS(120),
    [sym_skill_keyword] = ACTIONS(120),
    [sym_service_keyword] = ACTIONS(120),
    [sym_prompt_keyword] = ACTIONS(120),
    [sym_context_keyword] = ACTIONS(120),
    [sym_instruct_keyword] = ACTIONS(120),
    [sym_agic_keyword] = ACTIONS(120),
    [sym_task_keyword] = ACTIONS(120),
    [sym_chore_keyword] = ACTIONS(120),
    [sym_flow_keyword] = ACTIONS(120),
    [sym_flow_run_keyword] = ACTIONS(122),
    [sym_flow_let_keyword] = ACTIONS(125),
    [sym_flow_seek_keyword] = ACTIONS(128),
    [sym_flow_ask_keyword] = ACTIONS(131),
    [sym_flow_scatter_keyword] = ACTIONS(134),
    [sym_flow_storm_keyword] = ACTIONS(137),
    [sym_flow_gather_keyword] = ACTIONS(140),
    [sym_flow_settle_keyword] = ACTIONS(143),
    [sym_flow_map_keyword] = ACTIONS(146),
    [sym_flow_keep_keyword] = ACTIONS(149),
    [sym_flow_drop_keyword] = ACTIONS(152),
    [sym_flow_rank_keyword] = ACTIONS(155),
    [sym_flow_repeat_keyword] = ACTIONS(158),
    [sym_flow_until_keyword] = ACTIONS(120),
    [sym_flow_top_keyword] = ACTIONS(161),
    [sym_flow_bottom_keyword] = ACTIONS(161),
    [sym_flow_think_keyword] = ACTIONS(161),
    [sym_flow_use_keyword] = ACTIONS(161),
    [sym_thunk_keyword] = ACTIONS(161),
    [anon_sym_call] = ACTIONS(161),
    [anon_sym_do] = ACTIONS(161),
    [anon_sym_unfold] = ACTIONS(161),
    [anon_sym_each] = ACTIONS(161),
    [anon_sym_fold] = ACTIONS(161),
    [anon_sym_sort] = ACTIONS(161),
    [anon_sym_head] = ACTIONS(161),
    [anon_sym_tail] = ACTIONS(161),
    [sym__implicit_run_raw_text] = ACTIONS(164),
  },
  [14] = {
    [sym__trivia] = STATE(15),
    [sym__flow_statement] = STATE(15),
    [sym__flow_operation] = STATE(15),
    [sym_let_statement] = STATE(15),
    [sym_run_statement] = STATE(15),
    [sym_implicit_run_statement] = STATE(15),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(15),
    [sym_ask_statement] = STATE(15),
    [sym_scatter_statement] = STATE(15),
    [sym_storm_statement] = STATE(15),
    [sym_gather_statement] = STATE(15),
    [sym_settle_statement] = STATE(15),
    [sym_map_statement] = STATE(15),
    [sym_keep_statement] = STATE(15),
    [sym_drop_statement] = STATE(15),
    [sym_rank_statement] = STATE(15),
    [sym_repeat_statement] = STATE(15),
    [sym_invalid_flow_reserved_statement] = STATE(15),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym_statements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_blank_line] = ACTIONS(167),
    [sym_parent_doc_line] = ACTIONS(167),
    [sym_doc_line] = ACTIONS(167),
    [sym_comment_line] = ACTIONS(167),
    [sym_with_keyword] = ACTIONS(113),
    [sym_struct_keyword] = ACTIONS(113),
    [sym_psyche_keyword] = ACTIONS(113),
    [sym_skill_keyword] = ACTIONS(113),
    [sym_service_keyword] = ACTIONS(113),
    [sym_prompt_keyword] = ACTIONS(113),
    [sym_context_keyword] = ACTIONS(113),
    [sym_instruct_keyword] = ACTIONS(113),
    [sym_agic_keyword] = ACTIONS(113),
    [sym_task_keyword] = ACTIONS(113),
    [sym_chore_keyword] = ACTIONS(113),
    [sym_flow_keyword] = ACTIONS(113),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
  [15] = {
    [sym__trivia] = STATE(15),
    [sym__flow_statement] = STATE(15),
    [sym__flow_operation] = STATE(15),
    [sym_let_statement] = STATE(15),
    [sym_run_statement] = STATE(15),
    [sym_implicit_run_statement] = STATE(15),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(15),
    [sym_ask_statement] = STATE(15),
    [sym_scatter_statement] = STATE(15),
    [sym_storm_statement] = STATE(15),
    [sym_gather_statement] = STATE(15),
    [sym_settle_statement] = STATE(15),
    [sym_map_statement] = STATE(15),
    [sym_keep_statement] = STATE(15),
    [sym_drop_statement] = STATE(15),
    [sym_rank_statement] = STATE(15),
    [sym_repeat_statement] = STATE(15),
    [sym_invalid_flow_reserved_statement] = STATE(15),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym_statements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_blank_line] = ACTIONS(169),
    [sym_parent_doc_line] = ACTIONS(169),
    [sym_doc_line] = ACTIONS(169),
    [sym_comment_line] = ACTIONS(169),
    [sym_with_keyword] = ACTIONS(120),
    [sym_struct_keyword] = ACTIONS(120),
    [sym_psyche_keyword] = ACTIONS(120),
    [sym_skill_keyword] = ACTIONS(120),
    [sym_service_keyword] = ACTIONS(120),
    [sym_prompt_keyword] = ACTIONS(120),
    [sym_context_keyword] = ACTIONS(120),
    [sym_instruct_keyword] = ACTIONS(120),
    [sym_agic_keyword] = ACTIONS(120),
    [sym_task_keyword] = ACTIONS(120),
    [sym_chore_keyword] = ACTIONS(120),
    [sym_flow_keyword] = ACTIONS(120),
    [sym_flow_run_keyword] = ACTIONS(172),
    [sym_flow_let_keyword] = ACTIONS(175),
    [sym_flow_seek_keyword] = ACTIONS(178),
    [sym_flow_ask_keyword] = ACTIONS(181),
    [sym_flow_scatter_keyword] = ACTIONS(184),
    [sym_flow_storm_keyword] = ACTIONS(187),
    [sym_flow_gather_keyword] = ACTIONS(190),
    [sym_flow_settle_keyword] = ACTIONS(193),
    [sym_flow_map_keyword] = ACTIONS(196),
    [sym_flow_keep_keyword] = ACTIONS(199),
    [sym_flow_drop_keyword] = ACTIONS(202),
    [sym_flow_rank_keyword] = ACTIONS(205),
    [sym_flow_repeat_keyword] = ACTIONS(208),
    [sym_flow_top_keyword] = ACTIONS(211),
    [sym_flow_bottom_keyword] = ACTIONS(211),
    [sym_flow_think_keyword] = ACTIONS(211),
    [sym_flow_use_keyword] = ACTIONS(211),
    [sym_thunk_keyword] = ACTIONS(211),
    [anon_sym_call] = ACTIONS(211),
    [anon_sym_do] = ACTIONS(211),
    [anon_sym_unfold] = ACTIONS(211),
    [anon_sym_each] = ACTIONS(211),
    [anon_sym_fold] = ACTIONS(211),
    [anon_sym_sort] = ACTIONS(211),
    [anon_sym_head] = ACTIONS(211),
    [anon_sym_tail] = ACTIONS(211),
    [sym__implicit_run_raw_text] = ACTIONS(214),
  },
  [16] = {
    [sym__trivia] = STATE(14),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(36),
    [sym_seek_statement] = STATE(14),
    [sym_ask_statement] = STATE(14),
    [sym_scatter_statement] = STATE(14),
    [sym_storm_statement] = STATE(14),
    [sym_gather_statement] = STATE(14),
    [sym_settle_statement] = STATE(14),
    [sym_map_statement] = STATE(14),
    [sym_keep_statement] = STATE(14),
    [sym_drop_statement] = STATE(14),
    [sym_rank_statement] = STATE(14),
    [sym_repeat_statement] = STATE(14),
    [sym_invalid_flow_reserved_statement] = STATE(14),
    [sym__flow_reserved_word] = STATE(506),
    [aux_sym_statements_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_blank_line] = ACTIONS(217),
    [sym_parent_doc_line] = ACTIONS(217),
    [sym_doc_line] = ACTIONS(217),
    [sym_comment_line] = ACTIONS(217),
    [sym_with_keyword] = ACTIONS(77),
    [sym_struct_keyword] = ACTIONS(77),
    [sym_psyche_keyword] = ACTIONS(77),
    [sym_skill_keyword] = ACTIONS(77),
    [sym_service_keyword] = ACTIONS(77),
    [sym_prompt_keyword] = ACTIONS(77),
    [sym_context_keyword] = ACTIONS(77),
    [sym_instruct_keyword] = ACTIONS(77),
    [sym_agic_keyword] = ACTIONS(77),
    [sym_task_keyword] = ACTIONS(77),
    [sym_chore_keyword] = ACTIONS(77),
    [sym_flow_keyword] = ACTIONS(77),
    [sym_flow_run_keyword] = ACTIONS(39),
    [sym_flow_let_keyword] = ACTIONS(41),
    [sym_flow_seek_keyword] = ACTIONS(43),
    [sym_flow_ask_keyword] = ACTIONS(45),
    [sym_flow_scatter_keyword] = ACTIONS(47),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_gather_keyword] = ACTIONS(51),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_map_keyword] = ACTIONS(55),
    [sym_flow_keep_keyword] = ACTIONS(57),
    [sym_flow_drop_keyword] = ACTIONS(59),
    [sym_flow_rank_keyword] = ACTIONS(61),
    [sym_flow_repeat_keyword] = ACTIONS(63),
    [sym_flow_top_keyword] = ACTIONS(65),
    [sym_flow_bottom_keyword] = ACTIONS(65),
    [sym_flow_think_keyword] = ACTIONS(65),
    [sym_flow_use_keyword] = ACTIONS(65),
    [sym_thunk_keyword] = ACTIONS(65),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(69),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(113), 1,
      sym_flow_until_keyword,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(478), 1,
      sym__flow_reserved_word,
    ACTIONS(219), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(19), 19,
      sym__trivia,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
      aux_sym_statements_repeat1,
  [94] = 20,
    ACTIONS(77), 1,
      sym_flow_until_keyword,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(478), 1,
      sym__flow_reserved_word,
    ACTIONS(251), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(17), 19,
      sym__trivia,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
      aux_sym_statements_repeat1,
  [188] = 20,
    ACTIONS(120), 1,
      sym_flow_until_keyword,
    ACTIONS(256), 1,
      sym_flow_run_keyword,
    ACTIONS(259), 1,
      sym_flow_let_keyword,
    ACTIONS(262), 1,
      sym_flow_seek_keyword,
    ACTIONS(265), 1,
      sym_flow_ask_keyword,
    ACTIONS(268), 1,
      sym_flow_scatter_keyword,
    ACTIONS(271), 1,
      sym_flow_storm_keyword,
    ACTIONS(274), 1,
      sym_flow_gather_keyword,
    ACTIONS(277), 1,
      sym_flow_settle_keyword,
    ACTIONS(280), 1,
      sym_flow_map_keyword,
    ACTIONS(283), 1,
      sym_flow_keep_keyword,
    ACTIONS(286), 1,
      sym_flow_drop_keyword,
    ACTIONS(289), 1,
      sym_flow_rank_keyword,
    ACTIONS(292), 1,
      sym_flow_repeat_keyword,
    ACTIONS(298), 1,
      sym__implicit_run_raw_text,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(478), 1,
      sym__flow_reserved_word,
    ACTIONS(253), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(295), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(19), 19,
      sym__trivia,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
      aux_sym_statements_repeat1,
  [282] = 20,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(145), 1,
      sym_repeat_until_body,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(478), 1,
      sym__flow_reserved_word,
    STATE(691), 1,
      sym_statements,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(18), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [371] = 20,
    ACTIONS(79), 1,
      sym_flow_run_keyword,
    ACTIONS(81), 1,
      sym_flow_let_keyword,
    ACTIONS(83), 1,
      sym_flow_seek_keyword,
    ACTIONS(85), 1,
      sym_flow_ask_keyword,
    ACTIONS(87), 1,
      sym_flow_scatter_keyword,
    ACTIONS(89), 1,
      sym_flow_storm_keyword,
    ACTIONS(91), 1,
      sym_flow_gather_keyword,
    ACTIONS(93), 1,
      sym_flow_settle_keyword,
    ACTIONS(95), 1,
      sym_flow_map_keyword,
    ACTIONS(97), 1,
      sym_flow_keep_keyword,
    ACTIONS(99), 1,
      sym_flow_drop_keyword,
    ACTIONS(101), 1,
      sym_flow_rank_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    ACTIONS(107), 1,
      sym__implicit_run_raw_text,
    STATE(22), 1,
      sym__implicit_run_text_body_line,
    STATE(41), 1,
      sym_statements,
    STATE(149), 1,
      sym_repeat_body,
    STATE(500), 1,
      sym__flow_reserved_word,
    ACTIONS(105), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(11), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [460] = 5,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym_indented_raw_text,
    STATE(23), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(305), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [519] = 5,
    ACTIONS(307), 1,
      sym_indented_raw_text,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      sym_blank_line,
    STATE(27), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(313), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [578] = 6,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      sym_blank_line,
    ACTIONS(322), 1,
      sym__nested_indented_raw_text,
    STATE(24), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(43), 1,
      sym__nested_text_body_line,
    ACTIONS(320), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [639] = 20,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(253), 1,
      sym_repeat_until_body,
    STATE(478), 1,
      sym__flow_reserved_word,
    STATE(678), 1,
      sym_statements,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(18), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [728] = 6,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      sym_blank_line,
    ACTIONS(331), 1,
      sym__nested_indented_raw_text,
    STATE(24), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(43), 1,
      sym__nested_text_body_line,
    ACTIONS(329), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [789] = 5,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      sym_blank_line,
    ACTIONS(340), 1,
      sym_indented_raw_text,
    STATE(27), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(338), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [848] = 20,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(206), 1,
      sym_statements,
    STATE(257), 1,
      sym_repeat_body,
    STATE(478), 1,
      sym__flow_reserved_word,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(18), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [937] = 20,
    ACTIONS(221), 1,
      sym_flow_run_keyword,
    ACTIONS(223), 1,
      sym_flow_let_keyword,
    ACTIONS(225), 1,
      sym_flow_seek_keyword,
    ACTIONS(227), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_scatter_keyword,
    ACTIONS(231), 1,
      sym_flow_storm_keyword,
    ACTIONS(233), 1,
      sym_flow_gather_keyword,
    ACTIONS(235), 1,
      sym_flow_settle_keyword,
    ACTIONS(237), 1,
      sym_flow_map_keyword,
    ACTIONS(239), 1,
      sym_flow_keep_keyword,
    ACTIONS(241), 1,
      sym_flow_drop_keyword,
    ACTIONS(243), 1,
      sym_flow_rank_keyword,
    ACTIONS(245), 1,
      sym_flow_repeat_keyword,
    ACTIONS(249), 1,
      sym__implicit_run_raw_text,
    STATE(95), 1,
      sym_repeat_until_body,
    STATE(186), 1,
      sym__implicit_run_text_body_line,
    STATE(478), 1,
      sym__flow_reserved_word,
    STATE(710), 1,
      sym_statements,
    ACTIONS(247), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(18), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [1026] = 20,
    ACTIONS(79), 1,
      sym_flow_run_keyword,
    ACTIONS(81), 1,
      sym_flow_let_keyword,
    ACTIONS(83), 1,
      sym_flow_seek_keyword,
    ACTIONS(85), 1,
      sym_flow_ask_keyword,
    ACTIONS(87), 1,
      sym_flow_scatter_keyword,
    ACTIONS(89), 1,
      sym_flow_storm_keyword,
    ACTIONS(91), 1,
      sym_flow_gather_keyword,
    ACTIONS(93), 1,
      sym_flow_settle_keyword,
    ACTIONS(95), 1,
      sym_flow_map_keyword,
    ACTIONS(97), 1,
      sym_flow_keep_keyword,
    ACTIONS(99), 1,
      sym_flow_drop_keyword,
    ACTIONS(101), 1,
      sym_flow_rank_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    ACTIONS(107), 1,
      sym__implicit_run_raw_text,
    STATE(22), 1,
      sym__implicit_run_text_body_line,
    STATE(48), 1,
      sym_statements,
    STATE(98), 1,
      sym_repeat_body,
    STATE(500), 1,
      sym__flow_reserved_word,
    ACTIONS(105), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(11), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [1115] = 19,
    ACTIONS(39), 1,
      sym_flow_run_keyword,
    ACTIONS(41), 1,
      sym_flow_let_keyword,
    ACTIONS(43), 1,
      sym_flow_seek_keyword,
    ACTIONS(45), 1,
      sym_flow_ask_keyword,
    ACTIONS(47), 1,
      sym_flow_scatter_keyword,
    ACTIONS(49), 1,
      sym_flow_storm_keyword,
    ACTIONS(51), 1,
      sym_flow_gather_keyword,
    ACTIONS(53), 1,
      sym_flow_settle_keyword,
    ACTIONS(55), 1,
      sym_flow_map_keyword,
    ACTIONS(57), 1,
      sym_flow_keep_keyword,
    ACTIONS(59), 1,
      sym_flow_drop_keyword,
    ACTIONS(61), 1,
      sym_flow_rank_keyword,
    ACTIONS(63), 1,
      sym_flow_repeat_keyword,
    ACTIONS(69), 1,
      sym__implicit_run_raw_text,
    STATE(36), 1,
      sym__implicit_run_text_body_line,
    STATE(329), 1,
      sym_statements,
    STATE(506), 1,
      sym__flow_reserved_word,
    ACTIONS(65), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(16), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [1201] = 6,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_blank_line,
    ACTIONS(346), 1,
      sym__nested_indented_raw_text,
    STATE(32), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    ACTIONS(320), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1261] = 19,
    ACTIONS(39), 1,
      sym_flow_run_keyword,
    ACTIONS(41), 1,
      sym_flow_let_keyword,
    ACTIONS(43), 1,
      sym_flow_seek_keyword,
    ACTIONS(45), 1,
      sym_flow_ask_keyword,
    ACTIONS(47), 1,
      sym_flow_scatter_keyword,
    ACTIONS(49), 1,
      sym_flow_storm_keyword,
    ACTIONS(51), 1,
      sym_flow_gather_keyword,
    ACTIONS(53), 1,
      sym_flow_settle_keyword,
    ACTIONS(55), 1,
      sym_flow_map_keyword,
    ACTIONS(57), 1,
      sym_flow_keep_keyword,
    ACTIONS(59), 1,
      sym_flow_drop_keyword,
    ACTIONS(61), 1,
      sym_flow_rank_keyword,
    ACTIONS(63), 1,
      sym_flow_repeat_keyword,
    ACTIONS(69), 1,
      sym__implicit_run_raw_text,
    STATE(36), 1,
      sym__implicit_run_text_body_line,
    STATE(336), 1,
      sym_statements,
    STATE(506), 1,
      sym__flow_reserved_word,
    ACTIONS(65), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
    STATE(16), 17,
      sym__flow_statement,
      sym__flow_operation,
      sym_let_statement,
      sym_run_statement,
      sym_implicit_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_scatter_statement,
      sym_storm_statement,
      sym_gather_statement,
      sym_settle_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_repeat_statement,
      sym_invalid_flow_reserved_statement,
  [1347] = 6,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      sym_blank_line,
    ACTIONS(351), 1,
      sym__nested_indented_raw_text,
    STATE(32), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    ACTIONS(329), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1407] = 5,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      sym_blank_line,
    ACTIONS(355), 1,
      sym_indented_raw_text,
    STATE(38), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(313), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1465] = 5,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      sym_indented_raw_text,
    ACTIONS(357), 1,
      sym_blank_line,
    STATE(35), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(305), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1523] = 4,
    ACTIONS(307), 1,
      sym_indented_raw_text,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_text_body_line,
    ACTIONS(313), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1579] = 5,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 1,
      sym_blank_line,
    ACTIONS(362), 1,
      sym_indented_raw_text,
    STATE(38), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(338), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1637] = 4,
    ACTIONS(307), 1,
      sym_indented_raw_text,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_text_body_line,
    ACTIONS(367), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1693] = 4,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_text_body_line,
    ACTIONS(313), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1748] = 4,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      sym_flow_until_keyword,
    STATE(152), 1,
      sym_until_statement,
    ACTIONS(371), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [1803] = 2,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [1854] = 2,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [1905] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [1956] = 2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [2007] = 2,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2058] = 4,
    ACTIONS(355), 1,
      sym_indented_raw_text,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_text_body_line,
    ACTIONS(367), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2113] = 4,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 1,
      sym_flow_until_keyword,
    STATE(100), 1,
      sym_until_statement,
    ACTIONS(371), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2168] = 2,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2218] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2268] = 2,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2318] = 2,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [2368] = 2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [2418] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2468] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2518] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2568] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2618] = 2,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2668] = 2,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2718] = 2,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2768] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2818] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2868] = 2,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2918] = 2,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [2968] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3018] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3068] = 2,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3118] = 2,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3168] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3218] = 2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3268] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3318] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3368] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3418] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3468] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3518] = 2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3568] = 2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3618] = 2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3668] = 2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3718] = 2,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3768] = 2,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(507), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3818] = 2,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [3868] = 2,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3918] = 2,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [3968] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(519), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4018] = 2,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4068] = 2,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4118] = 2,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4168] = 2,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
    ACTIONS(535), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4218] = 2,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4268] = 2,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    ACTIONS(543), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4318] = 2,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4368] = 2,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    ACTIONS(551), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4418] = 2,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4468] = 2,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
    ACTIONS(559), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4518] = 2,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4568] = 2,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(567), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4618] = 2,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    ACTIONS(571), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4668] = 2,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4718] = 2,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4768] = 2,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4818] = 2,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4868] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4918] = 2,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [4968] = 2,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5018] = 2,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    ACTIONS(603), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5068] = 2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5117] = 2,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5166] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5215] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5264] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5313] = 2,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5362] = 2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5411] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5460] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5509] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5558] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5607] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5656] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5705] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5754] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5803] = 2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5852] = 2,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    ACTIONS(603), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5901] = 2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5950] = 2,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [5999] = 2,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6048] = 2,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6097] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6146] = 2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6195] = 2,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6244] = 2,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(507), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6293] = 2,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6342] = 2,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6391] = 2,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6440] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(519), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6489] = 2,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6538] = 2,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6587] = 2,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6636] = 2,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
    ACTIONS(535), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6685] = 2,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6734] = 2,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    ACTIONS(543), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6783] = 2,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6832] = 2,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    ACTIONS(551), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6881] = 2,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6930] = 2,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
    ACTIONS(559), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [6979] = 2,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7028] = 2,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7077] = 2,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(567), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7126] = 2,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    ACTIONS(571), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7175] = 2,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7224] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7273] = 2,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7322] = 2,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7371] = 2,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7420] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7469] = 2,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7518] = 2,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7567] = 2,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7616] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7665] = 6,
    ACTIONS(67), 1,
      sym_recall_keyword,
    STATE(555), 1,
      sym_directive_key,
    STATE(163), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(605), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(607), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7721] = 6,
    ACTIONS(67), 1,
      sym_recall_keyword,
    STATE(555), 1,
      sym_directive_key,
    STATE(160), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(609), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(611), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7777] = 19,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    STATE(170), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(325), 1,
      sym_messages,
    STATE(538), 1,
      sym_role,
    ACTIONS(627), 2,
      sym_pass_keyword,
      sym_recall_keyword,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(330), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(615), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(621), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7859] = 6,
    ACTIONS(639), 1,
      sym_recall_keyword,
    STATE(555), 1,
      sym_directive_key,
    STATE(163), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(631), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(634), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(637), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [7915] = 19,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(337), 1,
      sym_messages,
    STATE(538), 1,
      sym_role,
    ACTIONS(627), 2,
      sym_pass_keyword,
      sym_recall_keyword,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(339), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(644), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(646), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7997] = 3,
    STATE(165), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(648), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(651), 36,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_pass_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8046] = 14,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_message,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(337), 1,
      sym_messages,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(339), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(627), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(644), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(646), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8115] = 14,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    STATE(173), 1,
      sym_message,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(325), 1,
      sym_messages,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(330), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(615), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(627), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(621), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8184] = 1,
    ACTIONS(599), 40,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_pass_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8227] = 1,
    ACTIONS(491), 40,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_pass_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8270] = 14,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_message,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(318), 1,
      sym_messages,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(312), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(627), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(655), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(657), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8339] = 12,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(175), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(627), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(661), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(663), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8403] = 1,
    ACTIONS(665), 39,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8445] = 12,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(171), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(627), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(669), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(617), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(671), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8509] = 1,
    ACTIONS(599), 39,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8551] = 12,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(689), 1,
      sym_indented_raw_text,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(488), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(681), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(175), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(675), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(686), 4,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
    ACTIONS(678), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(684), 10,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8615] = 1,
    ACTIONS(491), 39,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      sym_recall_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8657] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(363), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [8738] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(368), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [8819] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(355), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [8900] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(370), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [8981] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(365), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [9062] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(366), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [9143] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(383), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [9224] = 22,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(164), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(353), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(189), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(320), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [9305] = 4,
    ACTIONS(700), 1,
      sym_blank_line,
    ACTIONS(702), 1,
      sym_indented_raw_text,
    STATE(188), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(313), 31,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9349] = 4,
    ACTIONS(702), 1,
      sym_indented_raw_text,
    ACTIONS(704), 1,
      sym_blank_line,
    STATE(185), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(305), 31,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9393] = 5,
    ACTIONS(706), 1,
      sym_blank_line,
    ACTIONS(709), 1,
      sym__nested_indented_raw_text,
    STATE(187), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(208), 1,
      sym__nested_text_body_line,
    ACTIONS(320), 31,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9439] = 4,
    ACTIONS(712), 1,
      sym_blank_line,
    ACTIONS(715), 1,
      sym_indented_raw_text,
    STATE(188), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(338), 31,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9483] = 21,
    ACTIONS(623), 1,
      sym_context_keyword,
    ACTIONS(625), 1,
      sym_instruct_keyword,
    ACTIONS(629), 1,
      sym_indented_raw_text,
    ACTIONS(696), 1,
      sym_pass_keyword,
    ACTIONS(698), 1,
      sym_recall_keyword,
    STATE(162), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(196), 1,
      sym_context_setting,
    STATE(209), 1,
      sym_instruct_setting,
    STATE(212), 1,
      sym__unroled_message_initial_line,
    STATE(461), 1,
      sym_directive_key,
    STATE(488), 1,
      sym__agic_reserved_word,
    STATE(538), 1,
      sym_role,
    STATE(293), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(309), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(337), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(619), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(718), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(694), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
  [9561] = 5,
    ACTIONS(720), 1,
      sym_blank_line,
    ACTIONS(722), 1,
      sym__nested_indented_raw_text,
    STATE(187), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(208), 1,
      sym__nested_text_body_line,
    ACTIONS(329), 31,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9607] = 3,
    ACTIONS(702), 1,
      sym_indented_raw_text,
    STATE(204), 1,
      sym_text_body_line,
    ACTIONS(367), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9648] = 7,
    ACTIONS(724), 1,
      ts_builtin_sym_end,
    ACTIONS(728), 1,
      sym_recall_keyword,
    STATE(556), 1,
      sym_directive_key,
    STATE(193), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(726), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(607), 17,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9697] = 7,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 1,
      sym_recall_keyword,
    STATE(556), 1,
      sym_directive_key,
    STATE(193), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(732), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(634), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(637), 17,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9746] = 7,
    ACTIONS(728), 1,
      sym_recall_keyword,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    STATE(556), 1,
      sym_directive_key,
    STATE(192), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(740), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(611), 17,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9795] = 3,
    ACTIONS(702), 1,
      sym_indented_raw_text,
    STATE(204), 1,
      sym_text_body_line,
    ACTIONS(313), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [9836] = 6,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
    ACTIONS(748), 1,
      sym_instruct_keyword,
    STATE(267), 1,
      sym_instruct_setting,
    STATE(197), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(744), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(746), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [9882] = 6,
    ACTIONS(748), 1,
      sym_instruct_keyword,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_instruct_setting,
    STATE(269), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(752), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(754), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [9928] = 6,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(756), 1,
      sym_blank_line,
    ACTIONS(758), 1,
      sym__nested_indented_raw_text,
    STATE(201), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
      sym__nested_text_body_line,
    ACTIONS(329), 28,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [9974] = 6,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym_context_keyword,
    STATE(262), 1,
      sym_context_setting,
    STATE(269), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(752), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(754), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [10020] = 1,
    ACTIONS(377), 33,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [10056] = 6,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(762), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__nested_indented_raw_text,
    STATE(201), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
      sym__nested_text_body_line,
    ACTIONS(320), 28,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [10102] = 1,
    ACTIONS(385), 33,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [10138] = 1,
    ACTIONS(389), 33,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [10174] = 1,
    ACTIONS(338), 33,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [10210] = 20,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(774), 1,
      sym_flow_run_keyword,
    ACTIONS(776), 1,
      sym_flow_seek_keyword,
    ACTIONS(778), 1,
      sym_flow_ask_keyword,
    ACTIONS(780), 1,
      sym_flow_scatter_keyword,
    ACTIONS(782), 1,
      sym_flow_storm_keyword,
    ACTIONS(784), 1,
      sym_flow_gather_keyword,
    ACTIONS(786), 1,
      sym_flow_settle_keyword,
    ACTIONS(788), 1,
      sym_flow_map_keyword,
    ACTIONS(790), 1,
      sym_flow_keep_keyword,
    ACTIONS(792), 1,
      sym_flow_drop_keyword,
    ACTIONS(794), 1,
      sym_flow_rank_keyword,
    ACTIONS(796), 1,
      sym_flow_repeat_keyword,
    STATE(264), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
    STATE(242), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(243), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [10284] = 3,
    ACTIONS(798), 1,
      sym_flow_until_keyword,
    STATE(259), 1,
      sym_until_statement,
    ACTIONS(371), 31,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10324] = 20,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(800), 1,
      sym_flow_run_keyword,
    ACTIONS(802), 1,
      sym_flow_seek_keyword,
    ACTIONS(804), 1,
      sym_flow_ask_keyword,
    ACTIONS(806), 1,
      sym_flow_scatter_keyword,
    ACTIONS(808), 1,
      sym_flow_storm_keyword,
    ACTIONS(810), 1,
      sym_flow_gather_keyword,
    ACTIONS(812), 1,
      sym_flow_settle_keyword,
    ACTIONS(814), 1,
      sym_flow_map_keyword,
    ACTIONS(816), 1,
      sym_flow_keep_keyword,
    ACTIONS(818), 1,
      sym_flow_drop_keyword,
    ACTIONS(820), 1,
      sym_flow_rank_keyword,
    ACTIONS(822), 1,
      sym_flow_repeat_keyword,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(560), 1,
      sym_text_line,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(85), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [10398] = 1,
    ACTIONS(381), 33,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [10434] = 6,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym_context_keyword,
    STATE(267), 1,
      sym_context_setting,
    STATE(199), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(824), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(746), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [10480] = 20,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(826), 1,
      sym_flow_run_keyword,
    ACTIONS(828), 1,
      sym_flow_seek_keyword,
    ACTIONS(830), 1,
      sym_flow_ask_keyword,
    ACTIONS(832), 1,
      sym_flow_scatter_keyword,
    ACTIONS(834), 1,
      sym_flow_storm_keyword,
    ACTIONS(836), 1,
      sym_flow_gather_keyword,
    ACTIONS(838), 1,
      sym_flow_settle_keyword,
    ACTIONS(840), 1,
      sym_flow_map_keyword,
    ACTIONS(842), 1,
      sym_flow_keep_keyword,
    ACTIONS(844), 1,
      sym_flow_drop_keyword,
    ACTIONS(846), 1,
      sym_flow_rank_keyword,
    ACTIONS(848), 1,
      sym_flow_repeat_keyword,
    STATE(108), 1,
      sym__nested_text_block,
    STATE(492), 1,
      sym_line_end,
    STATE(604), 1,
      sym_text_line,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(135), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [10554] = 1,
    ACTIONS(439), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10589] = 6,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    STATE(270), 1,
      aux_sym_unroled_message_repeat1,
    STATE(290), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(854), 27,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
  [10634] = 1,
    ACTIONS(399), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10669] = 1,
    ACTIONS(403), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10704] = 1,
    ACTIONS(407), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10739] = 1,
    ACTIONS(411), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10774] = 1,
    ACTIONS(415), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10809] = 1,
    ACTIONS(419), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10844] = 1,
    ACTIONS(423), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10879] = 1,
    ACTIONS(427), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [10914] = 17,
    ACTIONS(9), 1,
      sym_with_keyword,
    ACTIONS(11), 1,
      sym_struct_keyword,
    ACTIONS(13), 1,
      sym_psyche_keyword,
    ACTIONS(15), 1,
      sym_skill_keyword,
    ACTIONS(17), 1,
      sym_service_keyword,
    ACTIONS(19), 1,
      sym_prompt_keyword,
    ACTIONS(21), 1,
      sym_context_keyword,
    ACTIONS(23), 1,
      sym_instruct_keyword,
    ACTIONS(25), 1,
      sym_agic_keyword,
    ACTIONS(27), 1,
      sym_task_keyword,
    ACTIONS(29), 1,
      sym_chore_keyword,
    ACTIONS(31), 1,
      sym_flow_keyword,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    ACTIONS(860), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(862), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(384), 12,
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
  [10981] = 1,
    ACTIONS(431), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11016] = 1,
    ACTIONS(435), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11051] = 1,
    ACTIONS(443), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11086] = 1,
    ACTIONS(447), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11121] = 1,
    ACTIONS(451), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11156] = 1,
    ACTIONS(455), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11191] = 1,
    ACTIONS(459), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11226] = 1,
    ACTIONS(463), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11261] = 1,
    ACTIONS(467), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11296] = 1,
    ACTIONS(471), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11331] = 1,
    ACTIONS(475), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11366] = 1,
    ACTIONS(479), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11401] = 1,
    ACTIONS(483), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11436] = 1,
    ACTIONS(487), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11471] = 1,
    ACTIONS(603), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11506] = 1,
    ACTIONS(495), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11541] = 1,
    ACTIONS(499), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11576] = 17,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    ACTIONS(872), 1,
      sym_with_keyword,
    ACTIONS(875), 1,
      sym_struct_keyword,
    ACTIONS(878), 1,
      sym_psyche_keyword,
    ACTIONS(881), 1,
      sym_skill_keyword,
    ACTIONS(884), 1,
      sym_service_keyword,
    ACTIONS(887), 1,
      sym_prompt_keyword,
    ACTIONS(890), 1,
      sym_context_keyword,
    ACTIONS(893), 1,
      sym_instruct_keyword,
    ACTIONS(896), 1,
      sym_agic_keyword,
    ACTIONS(899), 1,
      sym_task_keyword,
    ACTIONS(902), 1,
      sym_chore_keyword,
    ACTIONS(905), 1,
      sym_flow_keyword,
    ACTIONS(866), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(869), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(384), 12,
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
  [11643] = 1,
    ACTIONS(507), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11678] = 1,
    ACTIONS(511), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11713] = 1,
    ACTIONS(515), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11748] = 1,
    ACTIONS(519), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11783] = 1,
    ACTIONS(523), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11818] = 1,
    ACTIONS(527), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11853] = 1,
    ACTIONS(531), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11888] = 1,
    ACTIONS(535), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11923] = 1,
    ACTIONS(539), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11958] = 1,
    ACTIONS(543), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [11993] = 1,
    ACTIONS(547), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12028] = 1,
    ACTIONS(551), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12063] = 1,
    ACTIONS(555), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12098] = 1,
    ACTIONS(559), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12133] = 1,
    ACTIONS(395), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12168] = 1,
    ACTIONS(563), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12203] = 1,
    ACTIONS(567), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12238] = 1,
    ACTIONS(571), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12273] = 1,
    ACTIONS(575), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12308] = 1,
    ACTIONS(579), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12343] = 1,
    ACTIONS(583), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12378] = 4,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
    STATE(269), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(752), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(910), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [12419] = 4,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
    STATE(268), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(912), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(910), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [12460] = 6,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
    ACTIONS(916), 1,
      sym_blank_line,
    ACTIONS(921), 1,
      sym_indented_raw_text,
    STATE(263), 1,
      aux_sym_unroled_message_repeat1,
    STATE(290), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(919), 27,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
  [12505] = 1,
    ACTIONS(587), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12540] = 1,
    ACTIONS(591), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12575] = 1,
    ACTIONS(595), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12610] = 4,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    STATE(261), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(924), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(754), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [12651] = 4,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(269), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(752), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(928), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [12692] = 4,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    STATE(269), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(932), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(651), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [12733] = 6,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    ACTIONS(937), 1,
      sym_blank_line,
    STATE(263), 1,
      aux_sym_unroled_message_repeat1,
    STATE(290), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(939), 27,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
  [12778] = 1,
    ACTIONS(599), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12813] = 1,
    ACTIONS(491), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12848] = 1,
    ACTIONS(503), 32,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [12883] = 4,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(939), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
  [12923] = 2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 30,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [12959] = 4,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(943), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
  [12999] = 2,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 30,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [13035] = 2,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13070] = 2,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
    ACTIONS(947), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13105] = 2,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
    ACTIONS(951), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13140] = 16,
    ACTIONS(826), 1,
      sym_flow_run_keyword,
    ACTIONS(828), 1,
      sym_flow_seek_keyword,
    ACTIONS(830), 1,
      sym_flow_ask_keyword,
    ACTIONS(832), 1,
      sym_flow_scatter_keyword,
    ACTIONS(834), 1,
      sym_flow_storm_keyword,
    ACTIONS(836), 1,
      sym_flow_gather_keyword,
    ACTIONS(838), 1,
      sym_flow_settle_keyword,
    ACTIONS(840), 1,
      sym_flow_map_keyword,
    ACTIONS(842), 1,
      sym_flow_keep_keyword,
    ACTIONS(844), 1,
      sym_flow_drop_keyword,
    ACTIONS(846), 1,
      sym_flow_rank_keyword,
    ACTIONS(848), 1,
      sym_flow_repeat_keyword,
    ACTIONS(955), 1,
      sym_snake_name,
    STATE(689), 1,
      sym_local_name,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(114), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [13203] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13238] = 2,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
    ACTIONS(959), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13273] = 2,
    ACTIONS(961), 1,
      ts_builtin_sym_end,
    ACTIONS(963), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13308] = 2,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
    ACTIONS(967), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13343] = 2,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13378] = 2,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
    ACTIONS(665), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13413] = 2,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
    ACTIONS(973), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13448] = 2,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
    ACTIONS(973), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13483] = 2,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    ACTIONS(977), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13518] = 2,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13553] = 2,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
    ACTIONS(981), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13588] = 2,
    ACTIONS(983), 1,
      ts_builtin_sym_end,
    ACTIONS(985), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13623] = 2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13658] = 2,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
    ACTIONS(959), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13693] = 16,
    ACTIONS(774), 1,
      sym_flow_run_keyword,
    ACTIONS(776), 1,
      sym_flow_seek_keyword,
    ACTIONS(778), 1,
      sym_flow_ask_keyword,
    ACTIONS(780), 1,
      sym_flow_scatter_keyword,
    ACTIONS(782), 1,
      sym_flow_storm_keyword,
    ACTIONS(784), 1,
      sym_flow_gather_keyword,
    ACTIONS(786), 1,
      sym_flow_settle_keyword,
    ACTIONS(788), 1,
      sym_flow_map_keyword,
    ACTIONS(790), 1,
      sym_flow_keep_keyword,
    ACTIONS(792), 1,
      sym_flow_drop_keyword,
    ACTIONS(794), 1,
      sym_flow_rank_keyword,
    ACTIONS(796), 1,
      sym_flow_repeat_keyword,
    ACTIONS(955), 1,
      sym_snake_name,
    STATE(716), 1,
      sym_local_name,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(214), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [13756] = 16,
    ACTIONS(800), 1,
      sym_flow_run_keyword,
    ACTIONS(802), 1,
      sym_flow_seek_keyword,
    ACTIONS(804), 1,
      sym_flow_ask_keyword,
    ACTIONS(806), 1,
      sym_flow_scatter_keyword,
    ACTIONS(808), 1,
      sym_flow_storm_keyword,
    ACTIONS(810), 1,
      sym_flow_gather_keyword,
    ACTIONS(812), 1,
      sym_flow_settle_keyword,
    ACTIONS(814), 1,
      sym_flow_map_keyword,
    ACTIONS(816), 1,
      sym_flow_keep_keyword,
    ACTIONS(818), 1,
      sym_flow_drop_keyword,
    ACTIONS(820), 1,
      sym_flow_rank_keyword,
    ACTIONS(822), 1,
      sym_flow_repeat_keyword,
    ACTIONS(955), 1,
      sym_snake_name,
    STATE(720), 1,
      sym_local_name,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(55), 13,
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
      sym_rank_statement,
      sym_repeat_statement,
  [13819] = 2,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
    ACTIONS(989), 29,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [13854] = 12,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    ACTIONS(993), 1,
      sym_blank_line,
    ACTIONS(999), 1,
      sym_snake_name,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    STATE(323), 1,
      sym_cap_body,
    STATE(324), 1,
      sym_property,
    STATE(369), 1,
      sym_text_body,
    STATE(666), 1,
      sym_property_key,
    STATE(300), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(995), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(997), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [13906] = 12,
    ACTIONS(993), 1,
      sym_blank_line,
    ACTIONS(999), 1,
      sym_snake_name,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
    STATE(316), 1,
      sym_cap_body,
    STATE(324), 1,
      sym_property,
    STATE(369), 1,
      sym_text_body,
    STATE(666), 1,
      sym_property_key,
    STATE(305), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1005), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1007), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [13958] = 1,
    ACTIONS(599), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [13988] = 1,
    ACTIONS(491), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [14018] = 10,
    ACTIONS(993), 1,
      sym_blank_line,
    ACTIONS(999), 1,
      sym_snake_name,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    ACTIONS(1009), 1,
      ts_builtin_sym_end,
    STATE(332), 1,
      sym_text_body,
    STATE(666), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1011), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(304), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
    ACTIONS(1013), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14065] = 10,
    ACTIONS(993), 1,
      sym_blank_line,
    ACTIONS(999), 1,
      sym_snake_name,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    ACTIONS(1015), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_text_body,
    STATE(666), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1017), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(306), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
    ACTIONS(1019), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14112] = 7,
    ACTIONS(1021), 1,
      ts_builtin_sym_end,
    ACTIONS(1028), 1,
      sym_snake_name,
    STATE(324), 1,
      sym_property,
    STATE(666), 1,
      sym_property_key,
    STATE(305), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    ACTIONS(1023), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1026), 13,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [14150] = 6,
    ACTIONS(1031), 1,
      ts_builtin_sym_end,
    ACTIONS(1038), 1,
      sym_snake_name,
    STATE(666), 1,
      sym_property_key,
    STATE(306), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
    ACTIONS(1033), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1036), 13,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [14186] = 7,
    ACTIONS(1043), 1,
      sym_blank_line,
    ACTIONS(1049), 1,
      sym_snake_name,
    STATE(676), 1,
      sym_field_name,
    ACTIONS(1041), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1045), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(308), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1047), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14222] = 7,
    ACTIONS(1053), 1,
      sym_blank_line,
    ACTIONS(1061), 1,
      sym_snake_name,
    STATE(676), 1,
      sym_field_name,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1056), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(308), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1059), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14258] = 3,
    STATE(309), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(651), 15,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [14286] = 5,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    ACTIONS(1067), 1,
      ts_builtin_sym_end,
    ACTIONS(1069), 1,
      sym_blank_line,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1071), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14317] = 5,
    ACTIONS(1073), 1,
      ts_builtin_sym_end,
    ACTIONS(1075), 1,
      sym_blank_line,
    ACTIONS(1080), 1,
      sym_indented_raw_text,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1078), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14348] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1083), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14376] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1089), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14404] = 4,
    ACTIONS(1091), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1093), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(319), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1089), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14432] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1098), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(930), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14460] = 4,
    ACTIONS(1103), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1105), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(340), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1101), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14488] = 4,
    ACTIONS(1109), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1111), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(326), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1107), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14516] = 4,
    ACTIONS(1113), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1115), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(322), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1083), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14544] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1117), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14572] = 4,
    ACTIONS(644), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1119), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(339), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(642), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14600] = 3,
    ACTIONS(1121), 1,
      ts_builtin_sym_end,
    ACTIONS(1127), 1,
      sym_snake_name,
    ACTIONS(1124), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [14626] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1129), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14654] = 4,
    ACTIONS(1133), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1135), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1131), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14682] = 2,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
    ACTIONS(1139), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [14706] = 4,
    ACTIONS(655), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1141), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(312), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(653), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14734] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1143), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14762] = 2,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [14786] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1145), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14814] = 4,
    ACTIONS(1147), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1149), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(333), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1143), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14842] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(653), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14870] = 1,
    ACTIONS(599), 19,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [14892] = 4,
    ACTIONS(1151), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1153), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(313), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1015), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14920] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1155), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14948] = 1,
    ACTIONS(491), 19,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_recall_keyword,
      sym_indented_raw_text,
  [14970] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1157), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14998] = 4,
    ACTIONS(1159), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1161), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(335), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1155), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15026] = 4,
    ACTIONS(615), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1163), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(330), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(613), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15054] = 2,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
    ACTIONS(1167), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [15078] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(613), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15106] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1169), 13,
      ts_builtin_sym_end,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15134] = 2,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [15158] = 2,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [15181] = 2,
    ACTIONS(1171), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1173), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [15204] = 2,
    ACTIONS(1175), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1177), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [15227] = 2,
    ACTIONS(597), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(599), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [15250] = 2,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(491), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [15273] = 2,
    ACTIONS(1181), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1179), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15295] = 2,
    ACTIONS(1185), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1183), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15317] = 2,
    ACTIONS(1189), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1187), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15339] = 2,
    ACTIONS(1193), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1191), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15361] = 2,
    ACTIONS(1197), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1195), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15383] = 2,
    ACTIONS(1201), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1199), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15405] = 2,
    ACTIONS(1205), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1203), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15427] = 2,
    ACTIONS(1209), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1207), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15449] = 2,
    ACTIONS(1213), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1211), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15471] = 2,
    ACTIONS(1217), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1215), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15493] = 2,
    ACTIONS(599), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(597), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15515] = 2,
    ACTIONS(491), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(489), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15537] = 2,
    ACTIONS(1221), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1219), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15559] = 2,
    ACTIONS(1225), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1223), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15581] = 2,
    ACTIONS(1229), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1227), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15603] = 2,
    ACTIONS(1233), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1231), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15625] = 2,
    ACTIONS(1237), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1235), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15647] = 2,
    ACTIONS(1241), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1239), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15669] = 2,
    ACTIONS(1245), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1243), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15691] = 2,
    ACTIONS(1249), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1247), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15713] = 2,
    ACTIONS(1253), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1251), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15735] = 2,
    ACTIONS(1257), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1255), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15757] = 2,
    ACTIONS(1261), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1259), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15779] = 2,
    ACTIONS(1265), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1263), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15801] = 2,
    ACTIONS(1269), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1267), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15823] = 2,
    ACTIONS(1273), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1271), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15845] = 2,
    ACTIONS(1277), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1275), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15867] = 2,
    ACTIONS(1281), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1279), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15889] = 2,
    ACTIONS(1285), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1283), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15911] = 2,
    ACTIONS(1289), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1287), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15933] = 2,
    ACTIONS(1293), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1291), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15955] = 2,
    ACTIONS(1297), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1295), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15977] = 2,
    ACTIONS(1301), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1299), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [15999] = 2,
    ACTIONS(1305), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1303), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [16021] = 2,
    ACTIONS(1309), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1307), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [16043] = 2,
    ACTIONS(1313), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1311), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [16065] = 2,
    ACTIONS(1317), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1315), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [16087] = 2,
    ACTIONS(1321), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1319), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [16109] = 1,
    ACTIONS(1323), 15,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
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
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
  [16127] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1329), 1,
      sym_colon,
    ACTIONS(1331), 1,
      sym_snake_name,
    STATE(127), 1,
      sym_inline_agic_body,
    STATE(519), 1,
      sym_runnable,
    STATE(659), 1,
      sym_position_clause,
    STATE(726), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16158] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(219), 1,
      sym_inline_agic_body,
    STATE(490), 1,
      sym_runnable,
    STATE(601), 1,
      sym_position_clause,
    STATE(721), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16189] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(218), 1,
      sym_inline_agic_body,
    STATE(489), 1,
      sym_runnable,
    STATE(599), 1,
      sym_position_clause,
    STATE(717), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16220] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1329), 1,
      sym_colon,
    ACTIONS(1331), 1,
      sym_snake_name,
    STATE(126), 1,
      sym_inline_agic_body,
    STATE(516), 1,
      sym_runnable,
    STATE(658), 1,
      sym_position_clause,
    STATE(718), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16251] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(220), 1,
      sym_inline_agic_body,
    STATE(437), 1,
      sym_runnable,
    STATE(531), 1,
      sym_rank_selection_clause,
    STATE(698), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16282] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1329), 1,
      sym_colon,
    ACTIONS(1331), 1,
      sym_snake_name,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(457), 1,
      sym_runnable,
    STATE(545), 1,
      sym_rank_selection_clause,
    STATE(663), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16313] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic_body,
    STATE(514), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(693), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16344] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(451), 1,
      sym_runnable,
    STATE(535), 1,
      sym_rank_selection_clause,
    STATE(694), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16375] = 9,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic_body,
    STATE(513), 1,
      sym_runnable,
    STATE(632), 1,
      sym_position_clause,
    STATE(692), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16406] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(788), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16430] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(690), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16454] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(745), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16478] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(731), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16502] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(736), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16526] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(790), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16550] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(783), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16574] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(635), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16598] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(563), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16622] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(754), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16646] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(770), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16670] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(782), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16694] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(702), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16718] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(732), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16742] = 6,
    ACTIONS(1341), 1,
      sym_pascal_name,
    STATE(452), 1,
      sym_base_type,
    STATE(476), 1,
      sym_type_name,
    STATE(778), 1,
      sym_type,
    STATE(470), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1339), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [16766] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(217), 1,
      sym_inline_agic,
    STATE(487), 1,
      sym_runnable,
    STATE(596), 1,
      sym_par_clause,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16793] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(125), 1,
      sym_inline_agic,
    STATE(511), 1,
      sym_runnable,
    STATE(652), 1,
      sym_par_clause,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16820] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(512), 1,
      sym_runnable,
    STATE(629), 1,
      sym_par_clause,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16847] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic_body,
    STATE(514), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(693), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16873] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(451), 1,
      sym_runnable,
    STATE(535), 1,
      sym_rank_selection_clause,
    STATE(694), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16899] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(218), 1,
      sym_inline_agic_body,
    STATE(489), 1,
      sym_runnable,
    STATE(599), 1,
      sym_position_clause,
    STATE(717), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16925] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(219), 1,
      sym_inline_agic_body,
    STATE(490), 1,
      sym_runnable,
    STATE(601), 1,
      sym_position_clause,
    STATE(721), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16951] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(220), 1,
      sym_inline_agic_body,
    STATE(437), 1,
      sym_runnable,
    STATE(531), 1,
      sym_rank_selection_clause,
    STATE(698), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16977] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(126), 1,
      sym_inline_agic_body,
    STATE(516), 1,
      sym_runnable,
    STATE(658), 1,
      sym_position_clause,
    STATE(718), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17003] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(127), 1,
      sym_inline_agic_body,
    STATE(519), 1,
      sym_runnable,
    STATE(659), 1,
      sym_position_clause,
    STATE(726), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17029] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(457), 1,
      sym_runnable,
    STATE(545), 1,
      sym_rank_selection_clause,
    STATE(663), 1,
      sym_par_clause,
    ACTIONS(1335), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17055] = 8,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic_body,
    STATE(513), 1,
      sym_runnable,
    STATE(632), 1,
      sym_position_clause,
    STATE(692), 1,
      sym_par_clause,
    ACTIONS(1327), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17081] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(264), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
    STATE(225), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17104] = 8,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(347), 1,
      sym_instruct_body,
    STATE(375), 1,
      sym_text_block,
    STATE(381), 1,
      sym_text_inline,
    STATE(520), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17129] = 8,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(349), 1,
      sym_text_inline,
    STATE(367), 1,
      sym_context_body,
    STATE(375), 1,
      sym_text_block,
    STATE(520), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17154] = 4,
    ACTIONS(1367), 1,
      sym_array_suffix,
    STATE(425), 1,
      aux_sym_type_repeat1,
    STATE(473), 1,
      sym_type_suffix,
    ACTIONS(1365), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17171] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(213), 1,
      sym_inline_agic,
    STATE(588), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17192] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(291), 1,
      sym__nested_text_block,
    STATE(497), 1,
      sym_line_end,
    STATE(574), 1,
      sym_text_line,
    STATE(283), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17215] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(215), 1,
      sym_inline_agic,
    STATE(594), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17236] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(216), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17257] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(291), 1,
      sym__nested_text_block,
    STATE(497), 1,
      sym_line_end,
    STATE(574), 1,
      sym_text_line,
    STATE(288), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17280] = 8,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(349), 1,
      sym_text_inline,
    STATE(375), 1,
      sym_text_block,
    STATE(378), 1,
      sym_context_body,
    STATE(520), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17305] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(108), 1,
      sym__nested_text_block,
    STATE(492), 1,
      sym_line_end,
    STATE(604), 1,
      sym_text_line,
    STATE(157), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17328] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(264), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
    STATE(223), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17351] = 4,
    ACTIONS(1374), 1,
      sym_colon,
    STATE(570), 1,
      sym_text_ref,
    ACTIONS(1370), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1372), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17368] = 4,
    ACTIONS(1376), 1,
      sym_colon,
    STATE(572), 1,
      sym_text_ref,
    ACTIONS(1370), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1372), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17385] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(264), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
    STATE(232), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17408] = 7,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(240), 1,
      sym_line_end,
    STATE(495), 1,
      sym_rank_selection_clause,
    STATE(613), 1,
      sym_par_clause,
    ACTIONS(1384), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17431] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(116), 1,
      sym_inline_agic,
    STATE(650), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17452] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(264), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
    STATE(254), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17475] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(291), 1,
      sym__nested_text_block,
    STATE(497), 1,
      sym_line_end,
    STATE(574), 1,
      sym_text_line,
    STATE(279), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17498] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(54), 1,
      sym_inline_agic,
    STATE(623), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17519] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(111), 1,
      sym_inline_agic,
    STATE(619), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17540] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(56), 1,
      sym_inline_agic,
    STATE(627), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17561] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(57), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17582] = 8,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(375), 1,
      sym_text_block,
    STATE(381), 1,
      sym_text_inline,
    STATE(382), 1,
      sym_instruct_body,
    STATE(520), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17607] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(108), 1,
      sym__nested_text_block,
    STATE(492), 1,
      sym_line_end,
    STATE(604), 1,
      sym_text_line,
    STATE(155), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17630] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(560), 1,
      sym_text_line,
    STATE(63), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17653] = 6,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(115), 1,
      sym_inline_agic,
    STATE(647), 1,
      sym_runnable,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17674] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(560), 1,
      sym_text_line,
    STATE(66), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17697] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(560), 1,
      sym_text_line,
    STATE(73), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17720] = 7,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(81), 1,
      sym_line_end,
    STATE(518), 1,
      sym_rank_selection_clause,
    STATE(645), 1,
      sym_par_clause,
    ACTIONS(1384), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17743] = 4,
    ACTIONS(1392), 1,
      sym_array_suffix,
    STATE(456), 1,
      aux_sym_type_repeat1,
    STATE(473), 1,
      sym_type_suffix,
    ACTIONS(1390), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17760] = 6,
    ACTIONS(1396), 1,
      sym_comment_line,
    ACTIONS(1398), 1,
      sym_snake_name,
    STATE(362), 1,
      sym_struct_body,
    STATE(676), 1,
      sym_field_name,
    ACTIONS(1394), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(307), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [17781] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(560), 1,
      sym_text_line,
    STATE(49), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17804] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(108), 1,
      sym__nested_text_block,
    STATE(492), 1,
      sym_line_end,
    STATE(604), 1,
      sym_text_line,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17827] = 4,
    ACTIONS(1392), 1,
      sym_array_suffix,
    STATE(425), 1,
      aux_sym_type_repeat1,
    STATE(473), 1,
      sym_type_suffix,
    ACTIONS(1400), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17844] = 7,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(131), 1,
      sym_line_end,
    STATE(499), 1,
      sym_rank_selection_clause,
    STATE(622), 1,
      sym_par_clause,
    ACTIONS(1384), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17867] = 7,
    ACTIONS(768), 1,
      sym_newline,
    ACTIONS(770), 1,
      sym_inline_comment,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    STATE(108), 1,
      sym__nested_text_block,
    STATE(492), 1,
      sym_line_end,
    STATE(604), 1,
      sym_text_line,
    STATE(146), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17890] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(125), 1,
      sym_inline_agic,
    STATE(511), 1,
      sym_runnable,
    STATE(652), 1,
      sym_par_clause,
  [17912] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(512), 1,
      sym_runnable,
    STATE(629), 1,
      sym_par_clause,
  [17934] = 3,
    STATE(668), 1,
      sym_directive_op,
    ACTIONS(1370), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1414), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [17948] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(68), 1,
      sym_inline_agic,
    STATE(517), 1,
      sym_runnable,
    STATE(641), 1,
      sym_par_clause,
  [17970] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    STATE(217), 1,
      sym_inline_agic,
    STATE(487), 1,
      sym_runnable,
    STATE(596), 1,
      sym_par_clause,
  [17992] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    STATE(227), 1,
      sym_inline_agic,
    STATE(494), 1,
      sym_runnable,
    STATE(609), 1,
      sym_par_clause,
  [18014] = 7,
    ACTIONS(1325), 1,
      sym_flow_par_keyword,
    ACTIONS(1331), 1,
      sym_snake_name,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(154), 1,
      sym_inline_agic,
    STATE(483), 1,
      sym_runnable,
    STATE(597), 1,
      sym_par_clause,
  [18036] = 6,
    ACTIONS(1420), 1,
      sym_arrow,
    ACTIONS(1422), 1,
      sym_colon,
    ACTIONS(1424), 1,
      sym_lparen,
    ACTIONS(1426), 1,
      sym_snake_name,
    STATE(528), 1,
      sym_flow_name,
    STATE(683), 1,
      sym_params,
  [18055] = 6,
    ACTIONS(1424), 1,
      sym_lparen,
    ACTIONS(1428), 1,
      sym_arrow,
    ACTIONS(1430), 1,
      sym_colon,
    ACTIONS(1432), 1,
      sym_snake_name,
    STATE(537), 1,
      sym_agic_name,
    STATE(696), 1,
      sym_params,
  [18074] = 5,
    ACTIONS(1434), 1,
      anon_sym_none,
    ACTIONS(1438), 1,
      sym_recall_far_keyword,
    STATE(577), 1,
      sym_recall_value,
    STATE(665), 1,
      sym_recall_none_keyword,
    ACTIONS(1436), 2,
      sym_recall_auto_keyword,
      sym_recall_near_keyword,
  [18091] = 1,
    ACTIONS(1440), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [18100] = 1,
    ACTIONS(1442), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18109] = 1,
    ACTIONS(1444), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18118] = 1,
    ACTIONS(1446), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18127] = 1,
    ACTIONS(1448), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18136] = 5,
    ACTIONS(1434), 1,
      anon_sym_none,
    ACTIONS(1438), 1,
      sym_recall_far_keyword,
    STATE(605), 1,
      sym_recall_value,
    STATE(665), 1,
      sym_recall_none_keyword,
    ACTIONS(1436), 2,
      sym_recall_auto_keyword,
      sym_recall_near_keyword,
  [18153] = 1,
    ACTIONS(1450), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18162] = 1,
    ACTIONS(1452), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18171] = 3,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(484), 1,
      sym_agent,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18183] = 5,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1456), 1,
      sym_newline,
    ACTIONS(1458), 1,
      sym_inline_comment,
    STATE(222), 1,
      sym_line_end,
    STATE(603), 1,
      sym_text_line,
  [18199] = 5,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(213), 1,
      sym_inline_agic,
    STATE(588), 1,
      sym_runnable,
  [18215] = 5,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(215), 1,
      sym_inline_agic,
    STATE(594), 1,
      sym_runnable,
  [18231] = 5,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(216), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
  [18247] = 3,
    ACTIONS(1462), 1,
      sym_integer_literal,
    ACTIONS(1464), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18259] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(139), 1,
      sym_line_end,
    STATE(612), 1,
      sym_par_clause,
  [18275] = 5,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(224), 1,
      sym_inline_agic,
    STATE(607), 1,
      sym_runnable,
  [18291] = 1,
    ACTIONS(1466), 5,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [18299] = 5,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(226), 1,
      sym_inline_agic,
    STATE(608), 1,
      sym_runnable,
  [18315] = 5,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(231), 1,
      sym_line_end,
    STATE(610), 1,
      sym_par_clause,
  [18331] = 5,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1468), 1,
      sym_newline,
    ACTIONS(1470), 1,
      sym_inline_comment,
    STATE(292), 1,
      sym_line_end,
    STATE(587), 1,
      sym_text_line,
  [18347] = 5,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(235), 1,
      sym_line_end,
    STATE(611), 1,
      sym_par_clause,
  [18363] = 5,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(238), 1,
      sym_line_end,
    STATE(660), 1,
      sym_par_clause,
  [18379] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(111), 1,
      sym_inline_agic,
    STATE(619), 1,
      sym_runnable,
  [18395] = 5,
    ACTIONS(1472), 1,
      sym_blank_line,
    ACTIONS(1474), 1,
      sym__nested_indented_raw_text,
    STATE(34), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    STATE(109), 1,
      sym__nested_text_body,
  [18411] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(115), 1,
      sym_inline_agic,
    STATE(647), 1,
      sym_runnable,
  [18427] = 5,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(247), 1,
      sym_line_end,
    STATE(615), 1,
      sym_par_clause,
  [18443] = 5,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(252), 1,
      sym_line_end,
    STATE(616), 1,
      sym_par_clause,
  [18459] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(116), 1,
      sym_inline_agic,
    STATE(650), 1,
      sym_runnable,
  [18475] = 5,
    ACTIONS(1476), 1,
      sym_blank_line,
    ACTIONS(1478), 1,
      sym__nested_indented_raw_text,
    STATE(198), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
      sym__nested_text_body_line,
    STATE(282), 1,
      sym__nested_text_body,
  [18491] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(159), 1,
      sym_inline_agic,
    STATE(590), 1,
      sym_runnable,
  [18507] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
    STATE(561), 1,
      sym_par_clause,
  [18523] = 5,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1480), 1,
      sym_newline,
    ACTIONS(1482), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_line_end,
    STATE(637), 1,
      sym_text_line,
  [18539] = 3,
    ACTIONS(1484), 1,
      sym_integer_literal,
    ACTIONS(1486), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18551] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(54), 1,
      sym_inline_agic,
    STATE(623), 1,
      sym_runnable,
  [18567] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(56), 1,
      sym_inline_agic,
    STATE(627), 1,
      sym_runnable,
  [18583] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(57), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
  [18599] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(132), 1,
      sym_inline_agic,
    STATE(593), 1,
      sym_runnable,
  [18615] = 5,
    ACTIONS(772), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1488), 1,
      sym_newline,
    ACTIONS(1490), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
    STATE(565), 1,
      sym_text_line,
  [18631] = 3,
    ACTIONS(1492), 1,
      anon_sym_EQ,
    STATE(468), 1,
      sym_assign_operator,
    ACTIONS(1370), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18643] = 3,
    ACTIONS(1494), 1,
      sym_colon,
    STATE(570), 1,
      sym_text_ref,
    ACTIONS(1372), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18655] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(65), 1,
      sym_inline_agic,
    STATE(639), 1,
      sym_runnable,
  [18671] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1460), 1,
      sym_snake_name,
    STATE(67), 1,
      sym_inline_agic,
    STATE(640), 1,
      sym_runnable,
  [18687] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(118), 1,
      sym_line_end,
    STATE(606), 1,
      sym_par_clause,
  [18703] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(72), 1,
      sym_line_end,
    STATE(642), 1,
      sym_par_clause,
  [18719] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(76), 1,
      sym_line_end,
    STATE(643), 1,
      sym_par_clause,
  [18735] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
    STATE(644), 1,
      sym_par_clause,
  [18751] = 5,
    ACTIONS(1496), 1,
      sym_blank_line,
    ACTIONS(1498), 1,
      sym__nested_indented_raw_text,
    STATE(190), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(208), 1,
      sym__nested_text_body_line,
    STATE(265), 1,
      sym__nested_text_body,
  [18767] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
    STATE(618), 1,
      sym_par_clause,
  [18783] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
    STATE(648), 1,
      sym_par_clause,
  [18799] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(649), 1,
      sym_par_clause,
  [18815] = 5,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
    STATE(621), 1,
      sym_par_clause,
  [18831] = 4,
    ACTIONS(1001), 1,
      sym_indented_raw_text,
    ACTIONS(1500), 1,
      sym_blank_line,
    STATE(356), 1,
      sym_text_body,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [18845] = 5,
    ACTIONS(1502), 1,
      sym_blank_line,
    ACTIONS(1504), 1,
      sym__nested_indented_raw_text,
    STATE(26), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(43), 1,
      sym__nested_text_body_line,
    STATE(103), 1,
      sym__nested_text_body,
  [18861] = 4,
    ACTIONS(1508), 1,
      sym_rparen,
    STATE(546), 1,
      sym_param_name,
    STATE(578), 1,
      sym_param,
    ACTIONS(1506), 2,
      anon_sym__,
      sym_snake_name,
  [18875] = 3,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(498), 1,
      sym_agent,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18887] = 3,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(509), 1,
      sym_agent,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18899] = 3,
    ACTIONS(1510), 1,
      sym_integer_literal,
    ACTIONS(1512), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18911] = 3,
    ACTIONS(1514), 1,
      sym_colon,
    STATE(572), 1,
      sym_text_ref,
    ACTIONS(1372), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18923] = 2,
    ACTIONS(1516), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18932] = 4,
    ACTIONS(1424), 1,
      sym_lparen,
    ACTIONS(1518), 1,
      sym_arrow,
    ACTIONS(1520), 1,
      sym_colon,
    STATE(674), 1,
      sym_params,
  [18945] = 1,
    ACTIONS(1522), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [18952] = 4,
    ACTIONS(1370), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1524), 1,
      sym_newline,
    ACTIONS(1526), 1,
      sym_inline_comment,
    STATE(373), 1,
      sym_line_end,
  [18965] = 4,
    ACTIONS(1357), 1,
      sym_colon,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(273), 1,
      sym_inline_agic_body,
    STATE(671), 1,
      sym_par_clause,
  [18978] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(303), 1,
      sym_line_end,
    STATE(364), 1,
      sym_job_body,
  [18991] = 2,
    ACTIONS(599), 1,
      sym_comment_line,
    ACTIONS(597), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19000] = 2,
    ACTIONS(491), 1,
      sym_comment_line,
    ACTIONS(489), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19009] = 4,
    ACTIONS(1355), 1,
      sym_colon,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(80), 1,
      sym_inline_agic_body,
    STATE(704), 1,
      sym_par_clause,
  [19022] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(303), 1,
      sym_line_end,
    STATE(379), 1,
      sym_job_body,
  [19035] = 4,
    ACTIONS(1424), 1,
      sym_lparen,
    ACTIONS(1532), 1,
      sym_arrow,
    ACTIONS(1534), 1,
      sym_colon,
    STATE(684), 1,
      sym_params,
  [19048] = 2,
    ACTIONS(1536), 1,
      sym_colon,
    ACTIONS(1370), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19057] = 1,
    ACTIONS(1538), 4,
      sym_newline,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [19064] = 1,
    ACTIONS(1540), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [19071] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(354), 1,
      sym__cap_definition,
  [19084] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(372), 1,
      sym__cap_definition,
  [19097] = 1,
    ACTIONS(1542), 4,
      anon_sym_none,
      sym_recall_auto_keyword,
      sym_recall_far_keyword,
      sym_recall_near_keyword,
  [19104] = 1,
    ACTIONS(1544), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [19111] = 4,
    ACTIONS(1359), 1,
      sym_colon,
    ACTIONS(1382), 1,
      sym_flow_par_keyword,
    STATE(130), 1,
      sym_inline_agic_body,
    STATE(682), 1,
      sym_par_clause,
  [19124] = 3,
    ACTIONS(1546), 1,
      sym_optional_marker,
    ACTIONS(1548), 1,
      sym_colon,
    ACTIONS(1550), 2,
      sym_rparen,
      sym_comma,
  [19135] = 2,
    ACTIONS(1552), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19144] = 2,
    ACTIONS(1554), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19153] = 2,
    ACTIONS(1556), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19162] = 3,
    STATE(546), 1,
      sym_param_name,
    STATE(699), 1,
      sym_param,
    ACTIONS(1506), 2,
      anon_sym__,
      sym_snake_name,
  [19173] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(377), 1,
      sym__cap_definition,
  [19186] = 2,
    ACTIONS(1558), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19195] = 2,
    ACTIONS(1560), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19204] = 2,
    ACTIONS(1562), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19213] = 2,
    STATE(714), 1,
      sym_directive_op,
    ACTIONS(1564), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19222] = 2,
    STATE(668), 1,
      sym_directive_op,
    ACTIONS(1564), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19231] = 2,
    ACTIONS(1566), 1,
      sym_colon,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19240] = 4,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(380), 1,
      sym__cap_definition,
  [19253] = 2,
    ACTIONS(1568), 1,
      sym_integer_literal,
    ACTIONS(953), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19262] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym_line_end,
  [19272] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_line_end,
  [19282] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
  [19292] = 3,
    ACTIONS(1574), 1,
      sym_newline,
    ACTIONS(1576), 1,
      sym_inline_comment,
    STATE(344), 1,
      sym_line_end,
  [19302] = 3,
    ACTIONS(1578), 1,
      sym_newline,
    ACTIONS(1580), 1,
      sym_inline_comment,
    STATE(361), 1,
      sym_line_end,
  [19312] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(133), 1,
      sym_line_end,
  [19322] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [19332] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [19342] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [19352] = 3,
    ACTIONS(1586), 1,
      aux_sym_directive_value_token1,
    STATE(636), 1,
      sym_property_value,
    STATE(727), 1,
      sym_text_line,
  [19362] = 3,
    ACTIONS(1588), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_inline_comment,
    STATE(295), 1,
      sym_line_end,
  [19372] = 1,
    ACTIONS(1592), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19378] = 3,
    ACTIONS(1588), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_inline_comment,
    STATE(289), 1,
      sym_line_end,
  [19388] = 3,
    ACTIONS(1594), 1,
      sym_colon,
    ACTIONS(1596), 1,
      sym_snake_name,
    STATE(777), 1,
      sym_context_name,
  [19398] = 3,
    ACTIONS(1588), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_inline_comment,
    STATE(286), 1,
      sym_line_end,
  [19408] = 3,
    ACTIONS(1598), 1,
      sym_colon,
    ACTIONS(1600), 1,
      sym_snake_name,
    STATE(742), 1,
      sym_instruct_name,
  [19418] = 2,
    ACTIONS(1604), 1,
      sym_comma,
    ACTIONS(1602), 2,
      sym_newline,
      sym_inline_comment,
  [19426] = 3,
    ACTIONS(1588), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_inline_comment,
    STATE(287), 1,
      sym_line_end,
  [19436] = 3,
    ACTIONS(1606), 1,
      sym_rparen,
    ACTIONS(1608), 1,
      sym_comma,
    STATE(580), 1,
      aux_sym_params_repeat1,
  [19446] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(181), 1,
      sym_line_end,
  [19456] = 3,
    ACTIONS(1608), 1,
      sym_comma,
    ACTIONS(1614), 1,
      sym_rparen,
    STATE(589), 1,
      aux_sym_params_repeat1,
  [19466] = 2,
    ACTIONS(1616), 1,
      sym_colon,
    ACTIONS(1618), 2,
      sym_rparen,
      sym_comma,
  [19474] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(182), 1,
      sym_line_end,
  [19484] = 1,
    ACTIONS(1620), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19490] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(183), 1,
      sym_line_end,
  [19500] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
  [19510] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
  [19520] = 3,
    ACTIONS(1588), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_inline_comment,
    STATE(280), 1,
      sym_line_end,
  [19530] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(211), 1,
      sym_line_end,
  [19540] = 3,
    ACTIONS(1622), 1,
      sym_rparen,
    ACTIONS(1624), 1,
      sym_comma,
    STATE(589), 1,
      aux_sym_params_repeat1,
  [19550] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
  [19560] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(184), 1,
      sym_line_end,
  [19570] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [19580] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
  [19590] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(228), 1,
      sym_line_end,
  [19600] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(229), 1,
      sym_line_end,
  [19610] = 3,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    STATE(230), 1,
      sym_inline_agic,
  [19620] = 3,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(138), 1,
      sym_inline_agic,
  [19630] = 3,
    ACTIONS(1578), 1,
      sym_newline,
    ACTIONS(1580), 1,
      sym_inline_comment,
    STATE(373), 1,
      sym_line_end,
  [19640] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(234), 1,
      sym_line_end,
  [19650] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_line_end,
  [19660] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(237), 1,
      sym_line_end,
  [19670] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [19680] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(241), 1,
      sym_line_end,
  [19690] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
  [19700] = 3,
    ACTIONS(1627), 1,
      sym_newline,
    ACTIONS(1629), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
  [19710] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
  [19720] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(244), 1,
      sym_line_end,
  [19730] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(245), 1,
      sym_line_end,
  [19740] = 3,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    STATE(246), 1,
      sym_inline_agic,
  [19750] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(248), 1,
      sym_line_end,
  [19760] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(249), 1,
      sym_line_end,
  [19770] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(147), 1,
      sym_line_end,
  [19780] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
  [19790] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [19800] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(255), 1,
      sym_line_end,
  [19810] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(256), 1,
      sym_line_end,
  [19820] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [19830] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [19840] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_line_end,
  [19850] = 1,
    ACTIONS(1631), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19856] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [19866] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
  [19876] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_line_end,
  [19886] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
  [19896] = 3,
    ACTIONS(1633), 1,
      sym_pascal_name,
    STATE(728), 1,
      sym_struct_name,
    STATE(769), 1,
      sym_type_name,
  [19906] = 1,
    ACTIONS(1440), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19912] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(69), 1,
      sym_line_end,
  [19922] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_line_end,
  [19932] = 3,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(71), 1,
      sym_inline_agic,
  [19942] = 1,
    ACTIONS(1635), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [19948] = 3,
    ACTIONS(1582), 1,
      sym_newline,
    ACTIONS(1584), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [19958] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [19968] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
  [19978] = 3,
    ACTIONS(1578), 1,
      sym_newline,
    ACTIONS(1580), 1,
      sym_inline_comment,
    STATE(359), 1,
      sym_line_end,
  [19988] = 3,
    ACTIONS(1574), 1,
      sym_newline,
    ACTIONS(1576), 1,
      sym_inline_comment,
    STATE(343), 1,
      sym_line_end,
  [19998] = 3,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(338), 1,
      sym_line_end,
  [20008] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [20018] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(266), 1,
      sym_line_end,
  [20028] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_line_end,
  [20038] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [20048] = 3,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(88), 1,
      sym_inline_agic,
  [20058] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
  [20068] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
  [20078] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [20088] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [20098] = 3,
    ACTIONS(1637), 1,
      sym_newline,
    ACTIONS(1639), 1,
      sym_inline_comment,
    STATE(453), 1,
      sym_line_end,
  [20108] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
  [20118] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
  [20128] = 3,
    ACTIONS(1386), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [20138] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_line_end,
  [20148] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
  [20158] = 3,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(117), 1,
      sym_inline_agic,
  [20168] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [20178] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [20188] = 3,
    ACTIONS(1586), 1,
      aux_sym_directive_value_token1,
    STATE(634), 1,
      sym_cap_ref,
    STATE(700), 1,
      sym_text_line,
  [20198] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [20208] = 3,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1572), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [20218] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
  [20228] = 3,
    ACTIONS(1402), 1,
      sym_newline,
    ACTIONS(1404), 1,
      sym_inline_comment,
    STATE(124), 1,
      sym_line_end,
  [20238] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(250), 1,
      sym_line_end,
  [20248] = 1,
    ACTIONS(1641), 2,
      sym_newline,
      sym_inline_comment,
  [20253] = 2,
    ACTIONS(1643), 1,
      sym_integer_literal,
    ACTIONS(1645), 1,
      sym_colon,
  [20260] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(130), 1,
      sym_inline_agic_body,
  [20267] = 1,
    ACTIONS(1647), 2,
      sym_newline,
      sym_inline_comment,
  [20272] = 1,
    ACTIONS(1602), 2,
      sym_newline,
      sym_inline_comment,
  [20277] = 2,
    ACTIONS(1649), 1,
      anon_sym_EQ,
    STATE(569), 1,
      sym_assign_operator,
  [20284] = 1,
    ACTIONS(1651), 2,
      sym_newline,
      sym_inline_comment,
  [20289] = 2,
    ACTIONS(1653), 1,
      aux_sym_directive_value_token1,
    STATE(577), 1,
      sym_directive_value,
  [20296] = 1,
    ACTIONS(1655), 2,
      sym_newline,
      sym_inline_comment,
  [20301] = 2,
    ACTIONS(597), 1,
      sym__nested_indented_raw_text,
    ACTIONS(599), 1,
      sym_blank_line,
  [20308] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(251), 1,
      sym_inline_agic_body,
  [20315] = 2,
    ACTIONS(489), 1,
      sym__nested_indented_raw_text,
    ACTIONS(491), 1,
      sym_blank_line,
  [20322] = 1,
    ACTIONS(1657), 2,
      sym_arrow,
      sym_colon,
  [20327] = 2,
    ACTIONS(1659), 1,
      sym_arrow,
    ACTIONS(1661), 1,
      sym_colon,
  [20334] = 2,
    ACTIONS(1663), 1,
      sym__snake_kebab_name,
    STATE(744), 1,
      sym_job_name,
  [20341] = 2,
    ACTIONS(1665), 1,
      sym_optional_marker,
    ACTIONS(1667), 1,
      sym_colon,
  [20348] = 1,
    ACTIONS(1669), 2,
      sym_arrow,
      sym_colon,
  [20353] = 2,
    ACTIONS(1671), 1,
      sym_flow_until_keyword,
    STATE(258), 1,
      sym_until_statement,
  [20360] = 2,
    ACTIONS(1673), 1,
      sym_indented_raw_text,
    STATE(204), 1,
      sym_text_body_line,
  [20367] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(260), 1,
      sym_inline_agic_body,
  [20374] = 2,
    ACTIONS(1675), 1,
      sym_snake_name,
    STATE(498), 1,
      sym_agent,
  [20381] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(143), 1,
      sym_inline_agic_body,
  [20388] = 2,
    ACTIONS(1677), 1,
      sym_arrow,
    ACTIONS(1679), 1,
      sym_colon,
  [20395] = 2,
    ACTIONS(1681), 1,
      sym_arrow,
    ACTIONS(1683), 1,
      sym_colon,
  [20402] = 1,
    ACTIONS(1685), 2,
      sym_newline,
      sym_inline_comment,
  [20407] = 2,
    ACTIONS(1687), 1,
      anon_sym_EQ,
    STATE(474), 1,
      sym_assign_operator,
  [20414] = 2,
    ACTIONS(1689), 1,
      sym_integer_literal,
    ACTIONS(1691), 1,
      sym_colon,
  [20421] = 1,
    ACTIONS(491), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20426] = 2,
    ACTIONS(1693), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_assign_operator,
  [20433] = 1,
    ACTIONS(1695), 2,
      sym_rparen,
      sym_comma,
  [20438] = 2,
    ACTIONS(1697), 1,
      sym_flow_until_keyword,
    STATE(150), 1,
      sym_until_statement,
  [20445] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(74), 1,
      sym_inline_agic_body,
  [20452] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(106), 1,
      sym_inline_agic_body,
  [20459] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(80), 1,
      sym_inline_agic_body,
  [20466] = 2,
    ACTIONS(1663), 1,
      sym__snake_kebab_name,
    STATE(767), 1,
      sym_job_name,
  [20473] = 2,
    ACTIONS(1699), 1,
      sym_arrow,
    ACTIONS(1701), 1,
      sym_colon,
  [20480] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(153), 1,
      sym_inline_agic_body,
  [20487] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(273), 1,
      sym_inline_agic_body,
  [20494] = 1,
    ACTIONS(1703), 2,
      sym_rparen,
      sym_comma,
  [20499] = 1,
    ACTIONS(1705), 2,
      sym_newline,
      sym_inline_comment,
  [20504] = 1,
    ACTIONS(1707), 2,
      sym_arrow,
      sym_colon,
  [20509] = 1,
    ACTIONS(1709), 2,
      sym_rparen,
      sym_comma,
  [20514] = 2,
    ACTIONS(1711), 1,
      sym__snake_kebab_name,
    STATE(794), 1,
      sym_cap_name,
  [20521] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(93), 1,
      sym_inline_agic_body,
  [20528] = 1,
    ACTIONS(1713), 2,
      sym_newline,
      sym_inline_comment,
  [20533] = 2,
    ACTIONS(1711), 1,
      sym__snake_kebab_name,
    STATE(793), 1,
      sym_cap_name,
  [20540] = 1,
    ACTIONS(1715), 2,
      sym_optional_marker,
      sym_colon,
  [20545] = 2,
    ACTIONS(1717), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_text_body_line,
  [20552] = 2,
    ACTIONS(1711), 1,
      sym__snake_kebab_name,
    STATE(771), 1,
      sym_cap_name,
  [20559] = 2,
    ACTIONS(1719), 1,
      sym_flow_until_keyword,
    STATE(99), 1,
      sym_until_statement,
  [20566] = 2,
    ACTIONS(1721), 1,
      sym_indented_raw_text,
    STATE(44), 1,
      sym_text_body_line,
  [20573] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(101), 1,
      sym_inline_agic_body,
  [20580] = 2,
    ACTIONS(1723), 1,
      sym_indented_raw_text,
    STATE(298), 1,
      sym__unroled_message_continuation_line,
  [20587] = 2,
    ACTIONS(1653), 1,
      aux_sym_directive_value_token1,
    STATE(605), 1,
      sym_directive_value,
  [20594] = 2,
    ACTIONS(1675), 1,
      sym_snake_name,
    STATE(484), 1,
      sym_agent,
  [20601] = 2,
    ACTIONS(1693), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_assign_operator,
  [20608] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(233), 1,
      sym_inline_agic_body,
  [20615] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(120), 1,
      sym_inline_agic_body,
  [20622] = 2,
    ACTIONS(1675), 1,
      sym_snake_name,
    STATE(509), 1,
      sym_agent,
  [20629] = 2,
    ACTIONS(1693), 1,
      anon_sym_EQ,
    STATE(207), 1,
      sym_assign_operator,
  [20636] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(236), 1,
      sym_inline_agic_body,
  [20643] = 2,
    ACTIONS(1687), 1,
      anon_sym_EQ,
    STATE(468), 1,
      sym_assign_operator,
  [20650] = 2,
    ACTIONS(1711), 1,
      sym__snake_kebab_name,
    STATE(779), 1,
      sym_cap_name,
  [20657] = 1,
    ACTIONS(599), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20662] = 2,
    ACTIONS(1725), 1,
      sym_integer_literal,
    ACTIONS(1727), 1,
      sym_colon,
  [20669] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(123), 1,
      sym_inline_agic_body,
  [20676] = 1,
    ACTIONS(1729), 2,
      sym_newline,
      sym_inline_comment,
  [20681] = 1,
    ACTIONS(1731), 1,
      sym_colon,
  [20685] = 1,
    ACTIONS(1733), 1,
      sym_integer_literal,
  [20689] = 1,
    ACTIONS(1735), 1,
      sym_newline,
  [20693] = 1,
    ACTIONS(1737), 1,
      sym_colon,
  [20697] = 1,
    ACTIONS(1739), 1,
      sym_colon,
  [20701] = 1,
    ACTIONS(1741), 1,
      sym_colon,
  [20705] = 1,
    ACTIONS(1743), 1,
      sym_colon,
  [20709] = 1,
    ACTIONS(1745), 1,
      sym_newline,
  [20713] = 1,
    ACTIONS(1747), 1,
      sym_colon,
  [20717] = 1,
    ACTIONS(1749), 1,
      aux_sym_directive_value_token1,
  [20721] = 1,
    ACTIONS(1751), 1,
      sym_newline,
  [20725] = 1,
    ACTIONS(1753), 1,
      sym_newline,
  [20729] = 1,
    ACTIONS(1755), 1,
      ts_builtin_sym_end,
  [20733] = 1,
    ACTIONS(1757), 1,
      sym_colon,
  [20737] = 1,
    ACTIONS(1759), 1,
      sym_colon,
  [20741] = 1,
    ACTIONS(1761), 1,
      sym_newline,
  [20745] = 1,
    ACTIONS(1763), 1,
      sym_colon,
  [20749] = 1,
    ACTIONS(1765), 1,
      sym_colon,
  [20753] = 1,
    ACTIONS(1767), 1,
      sym_newline,
  [20757] = 1,
    ACTIONS(1769), 1,
      sym_newline,
  [20761] = 1,
    ACTIONS(1771), 1,
      sym_cap_kind,
  [20765] = 1,
    ACTIONS(1773), 1,
      anon_sym_EQ,
  [20769] = 1,
    ACTIONS(1775), 1,
      sym_newline,
  [20773] = 1,
    ACTIONS(1777), 1,
      sym_newline,
  [20777] = 1,
    ACTIONS(1779), 1,
      sym_newline,
  [20781] = 1,
    ACTIONS(1781), 1,
      sym_recall_near_keyword,
  [20785] = 1,
    ACTIONS(1783), 1,
      sym_colon,
  [20789] = 1,
    ACTIONS(1785), 1,
      sym_newline,
  [20793] = 1,
    ACTIONS(1787), 1,
      sym_newline,
  [20797] = 1,
    ACTIONS(1789), 1,
      sym_newline,
  [20801] = 1,
    ACTIONS(1791), 1,
      sym_newline,
  [20805] = 1,
    ACTIONS(1793), 1,
      sym_newline,
  [20809] = 1,
    ACTIONS(1795), 1,
      sym_newline,
  [20813] = 1,
    ACTIONS(1797), 1,
      sym_newline,
  [20817] = 1,
    ACTIONS(1799), 1,
      sym_newline,
  [20821] = 1,
    ACTIONS(1801), 1,
      sym_newline,
  [20825] = 1,
    ACTIONS(1803), 1,
      sym_newline,
  [20829] = 1,
    ACTIONS(1805), 1,
      sym_newline,
  [20833] = 1,
    ACTIONS(1807), 1,
      sym_integer_literal,
  [20837] = 1,
    ACTIONS(1809), 1,
      sym_colon,
  [20841] = 1,
    ACTIONS(1811), 1,
      sym_newline,
  [20845] = 1,
    ACTIONS(1813), 1,
      sym_colon,
  [20849] = 1,
    ACTIONS(1815), 1,
      sym_colon,
  [20853] = 1,
    ACTIONS(1817), 1,
      sym_colon,
  [20857] = 1,
    ACTIONS(1819), 1,
      sym_newline,
  [20861] = 1,
    ACTIONS(1821), 1,
      sym_colon,
  [20865] = 1,
    ACTIONS(1823), 1,
      sym_integer_literal,
  [20869] = 1,
    ACTIONS(1825), 1,
      sym_integer_literal,
  [20873] = 1,
    ACTIONS(1827), 1,
      sym_integer_literal,
  [20877] = 1,
    ACTIONS(1829), 1,
      sym_colon,
  [20881] = 1,
    ACTIONS(1831), 1,
      sym_colon,
  [20885] = 1,
    ACTIONS(1833), 1,
      sym_colon,
  [20889] = 1,
    ACTIONS(1835), 1,
      sym_integer_literal,
  [20893] = 1,
    ACTIONS(1837), 1,
      anon_sym_EQ,
  [20897] = 1,
    ACTIONS(1839), 1,
      sym_colon,
  [20901] = 1,
    ACTIONS(1841), 1,
      sym_colon,
  [20905] = 1,
    ACTIONS(1843), 1,
      sym_newline,
  [20909] = 1,
    ACTIONS(1845), 1,
      sym_colon,
  [20913] = 1,
    ACTIONS(1847), 1,
      sym_integer_literal,
  [20917] = 1,
    ACTIONS(1849), 1,
      sym_integer_literal,
  [20921] = 1,
    ACTIONS(1851), 1,
      sym_colon,
  [20925] = 1,
    ACTIONS(1853), 1,
      sym_colon,
  [20929] = 1,
    ACTIONS(1855), 1,
      sym_colon,
  [20933] = 1,
    ACTIONS(1857), 1,
      sym_newline,
  [20937] = 1,
    ACTIONS(1542), 1,
      aux_sym_directive_value_token1,
  [20941] = 1,
    ACTIONS(1859), 1,
      sym_colon,
  [20945] = 1,
    ACTIONS(1861), 1,
      sym_colon,
  [20949] = 1,
    ACTIONS(1863), 1,
      sym_newline,
  [20953] = 1,
    ACTIONS(1865), 1,
      sym_colon,
  [20957] = 1,
    ACTIONS(1867), 1,
      sym_colon,
  [20961] = 1,
    ACTIONS(1869), 1,
      sym_colon,
  [20965] = 1,
    ACTIONS(1871), 1,
      sym_colon,
  [20969] = 1,
    ACTIONS(1873), 1,
      sym_integer_literal,
  [20973] = 1,
    ACTIONS(1875), 1,
      sym_colon,
  [20977] = 1,
    ACTIONS(1877), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 94,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 519,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 728,
  [SMALL_STATE(27)] = 789,
  [SMALL_STATE(28)] = 848,
  [SMALL_STATE(29)] = 937,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1115,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1261,
  [SMALL_STATE(34)] = 1347,
  [SMALL_STATE(35)] = 1407,
  [SMALL_STATE(36)] = 1465,
  [SMALL_STATE(37)] = 1523,
  [SMALL_STATE(38)] = 1579,
  [SMALL_STATE(39)] = 1637,
  [SMALL_STATE(40)] = 1693,
  [SMALL_STATE(41)] = 1748,
  [SMALL_STATE(42)] = 1803,
  [SMALL_STATE(43)] = 1854,
  [SMALL_STATE(44)] = 1905,
  [SMALL_STATE(45)] = 1956,
  [SMALL_STATE(46)] = 2007,
  [SMALL_STATE(47)] = 2058,
  [SMALL_STATE(48)] = 2113,
  [SMALL_STATE(49)] = 2168,
  [SMALL_STATE(50)] = 2218,
  [SMALL_STATE(51)] = 2268,
  [SMALL_STATE(52)] = 2318,
  [SMALL_STATE(53)] = 2368,
  [SMALL_STATE(54)] = 2418,
  [SMALL_STATE(55)] = 2468,
  [SMALL_STATE(56)] = 2518,
  [SMALL_STATE(57)] = 2568,
  [SMALL_STATE(58)] = 2618,
  [SMALL_STATE(59)] = 2668,
  [SMALL_STATE(60)] = 2718,
  [SMALL_STATE(61)] = 2768,
  [SMALL_STATE(62)] = 2818,
  [SMALL_STATE(63)] = 2868,
  [SMALL_STATE(64)] = 2918,
  [SMALL_STATE(65)] = 2968,
  [SMALL_STATE(66)] = 3018,
  [SMALL_STATE(67)] = 3068,
  [SMALL_STATE(68)] = 3118,
  [SMALL_STATE(69)] = 3168,
  [SMALL_STATE(70)] = 3218,
  [SMALL_STATE(71)] = 3268,
  [SMALL_STATE(72)] = 3318,
  [SMALL_STATE(73)] = 3368,
  [SMALL_STATE(74)] = 3418,
  [SMALL_STATE(75)] = 3468,
  [SMALL_STATE(76)] = 3518,
  [SMALL_STATE(77)] = 3568,
  [SMALL_STATE(78)] = 3618,
  [SMALL_STATE(79)] = 3668,
  [SMALL_STATE(80)] = 3718,
  [SMALL_STATE(81)] = 3768,
  [SMALL_STATE(82)] = 3818,
  [SMALL_STATE(83)] = 3868,
  [SMALL_STATE(84)] = 3918,
  [SMALL_STATE(85)] = 3968,
  [SMALL_STATE(86)] = 4018,
  [SMALL_STATE(87)] = 4068,
  [SMALL_STATE(88)] = 4118,
  [SMALL_STATE(89)] = 4168,
  [SMALL_STATE(90)] = 4218,
  [SMALL_STATE(91)] = 4268,
  [SMALL_STATE(92)] = 4318,
  [SMALL_STATE(93)] = 4368,
  [SMALL_STATE(94)] = 4418,
  [SMALL_STATE(95)] = 4468,
  [SMALL_STATE(96)] = 4518,
  [SMALL_STATE(97)] = 4568,
  [SMALL_STATE(98)] = 4618,
  [SMALL_STATE(99)] = 4668,
  [SMALL_STATE(100)] = 4718,
  [SMALL_STATE(101)] = 4768,
  [SMALL_STATE(102)] = 4818,
  [SMALL_STATE(103)] = 4868,
  [SMALL_STATE(104)] = 4918,
  [SMALL_STATE(105)] = 4968,
  [SMALL_STATE(106)] = 5018,
  [SMALL_STATE(107)] = 5068,
  [SMALL_STATE(108)] = 5117,
  [SMALL_STATE(109)] = 5166,
  [SMALL_STATE(110)] = 5215,
  [SMALL_STATE(111)] = 5264,
  [SMALL_STATE(112)] = 5313,
  [SMALL_STATE(113)] = 5362,
  [SMALL_STATE(114)] = 5411,
  [SMALL_STATE(115)] = 5460,
  [SMALL_STATE(116)] = 5509,
  [SMALL_STATE(117)] = 5558,
  [SMALL_STATE(118)] = 5607,
  [SMALL_STATE(119)] = 5656,
  [SMALL_STATE(120)] = 5705,
  [SMALL_STATE(121)] = 5754,
  [SMALL_STATE(122)] = 5803,
  [SMALL_STATE(123)] = 5852,
  [SMALL_STATE(124)] = 5901,
  [SMALL_STATE(125)] = 5950,
  [SMALL_STATE(126)] = 5999,
  [SMALL_STATE(127)] = 6048,
  [SMALL_STATE(128)] = 6097,
  [SMALL_STATE(129)] = 6146,
  [SMALL_STATE(130)] = 6195,
  [SMALL_STATE(131)] = 6244,
  [SMALL_STATE(132)] = 6293,
  [SMALL_STATE(133)] = 6342,
  [SMALL_STATE(134)] = 6391,
  [SMALL_STATE(135)] = 6440,
  [SMALL_STATE(136)] = 6489,
  [SMALL_STATE(137)] = 6538,
  [SMALL_STATE(138)] = 6587,
  [SMALL_STATE(139)] = 6636,
  [SMALL_STATE(140)] = 6685,
  [SMALL_STATE(141)] = 6734,
  [SMALL_STATE(142)] = 6783,
  [SMALL_STATE(143)] = 6832,
  [SMALL_STATE(144)] = 6881,
  [SMALL_STATE(145)] = 6930,
  [SMALL_STATE(146)] = 6979,
  [SMALL_STATE(147)] = 7028,
  [SMALL_STATE(148)] = 7077,
  [SMALL_STATE(149)] = 7126,
  [SMALL_STATE(150)] = 7175,
  [SMALL_STATE(151)] = 7224,
  [SMALL_STATE(152)] = 7273,
  [SMALL_STATE(153)] = 7322,
  [SMALL_STATE(154)] = 7371,
  [SMALL_STATE(155)] = 7420,
  [SMALL_STATE(156)] = 7469,
  [SMALL_STATE(157)] = 7518,
  [SMALL_STATE(158)] = 7567,
  [SMALL_STATE(159)] = 7616,
  [SMALL_STATE(160)] = 7665,
  [SMALL_STATE(161)] = 7721,
  [SMALL_STATE(162)] = 7777,
  [SMALL_STATE(163)] = 7859,
  [SMALL_STATE(164)] = 7915,
  [SMALL_STATE(165)] = 7997,
  [SMALL_STATE(166)] = 8046,
  [SMALL_STATE(167)] = 8115,
  [SMALL_STATE(168)] = 8184,
  [SMALL_STATE(169)] = 8227,
  [SMALL_STATE(170)] = 8270,
  [SMALL_STATE(171)] = 8339,
  [SMALL_STATE(172)] = 8403,
  [SMALL_STATE(173)] = 8445,
  [SMALL_STATE(174)] = 8509,
  [SMALL_STATE(175)] = 8551,
  [SMALL_STATE(176)] = 8615,
  [SMALL_STATE(177)] = 8657,
  [SMALL_STATE(178)] = 8738,
  [SMALL_STATE(179)] = 8819,
  [SMALL_STATE(180)] = 8900,
  [SMALL_STATE(181)] = 8981,
  [SMALL_STATE(182)] = 9062,
  [SMALL_STATE(183)] = 9143,
  [SMALL_STATE(184)] = 9224,
  [SMALL_STATE(185)] = 9305,
  [SMALL_STATE(186)] = 9349,
  [SMALL_STATE(187)] = 9393,
  [SMALL_STATE(188)] = 9439,
  [SMALL_STATE(189)] = 9483,
  [SMALL_STATE(190)] = 9561,
  [SMALL_STATE(191)] = 9607,
  [SMALL_STATE(192)] = 9648,
  [SMALL_STATE(193)] = 9697,
  [SMALL_STATE(194)] = 9746,
  [SMALL_STATE(195)] = 9795,
  [SMALL_STATE(196)] = 9836,
  [SMALL_STATE(197)] = 9882,
  [SMALL_STATE(198)] = 9928,
  [SMALL_STATE(199)] = 9974,
  [SMALL_STATE(200)] = 10020,
  [SMALL_STATE(201)] = 10056,
  [SMALL_STATE(202)] = 10102,
  [SMALL_STATE(203)] = 10138,
  [SMALL_STATE(204)] = 10174,
  [SMALL_STATE(205)] = 10210,
  [SMALL_STATE(206)] = 10284,
  [SMALL_STATE(207)] = 10324,
  [SMALL_STATE(208)] = 10398,
  [SMALL_STATE(209)] = 10434,
  [SMALL_STATE(210)] = 10480,
  [SMALL_STATE(211)] = 10554,
  [SMALL_STATE(212)] = 10589,
  [SMALL_STATE(213)] = 10634,
  [SMALL_STATE(214)] = 10669,
  [SMALL_STATE(215)] = 10704,
  [SMALL_STATE(216)] = 10739,
  [SMALL_STATE(217)] = 10774,
  [SMALL_STATE(218)] = 10809,
  [SMALL_STATE(219)] = 10844,
  [SMALL_STATE(220)] = 10879,
  [SMALL_STATE(221)] = 10914,
  [SMALL_STATE(222)] = 10981,
  [SMALL_STATE(223)] = 11016,
  [SMALL_STATE(224)] = 11051,
  [SMALL_STATE(225)] = 11086,
  [SMALL_STATE(226)] = 11121,
  [SMALL_STATE(227)] = 11156,
  [SMALL_STATE(228)] = 11191,
  [SMALL_STATE(229)] = 11226,
  [SMALL_STATE(230)] = 11261,
  [SMALL_STATE(231)] = 11296,
  [SMALL_STATE(232)] = 11331,
  [SMALL_STATE(233)] = 11366,
  [SMALL_STATE(234)] = 11401,
  [SMALL_STATE(235)] = 11436,
  [SMALL_STATE(236)] = 11471,
  [SMALL_STATE(237)] = 11506,
  [SMALL_STATE(238)] = 11541,
  [SMALL_STATE(239)] = 11576,
  [SMALL_STATE(240)] = 11643,
  [SMALL_STATE(241)] = 11678,
  [SMALL_STATE(242)] = 11713,
  [SMALL_STATE(243)] = 11748,
  [SMALL_STATE(244)] = 11783,
  [SMALL_STATE(245)] = 11818,
  [SMALL_STATE(246)] = 11853,
  [SMALL_STATE(247)] = 11888,
  [SMALL_STATE(248)] = 11923,
  [SMALL_STATE(249)] = 11958,
  [SMALL_STATE(250)] = 11993,
  [SMALL_STATE(251)] = 12028,
  [SMALL_STATE(252)] = 12063,
  [SMALL_STATE(253)] = 12098,
  [SMALL_STATE(254)] = 12133,
  [SMALL_STATE(255)] = 12168,
  [SMALL_STATE(256)] = 12203,
  [SMALL_STATE(257)] = 12238,
  [SMALL_STATE(258)] = 12273,
  [SMALL_STATE(259)] = 12308,
  [SMALL_STATE(260)] = 12343,
  [SMALL_STATE(261)] = 12378,
  [SMALL_STATE(262)] = 12419,
  [SMALL_STATE(263)] = 12460,
  [SMALL_STATE(264)] = 12505,
  [SMALL_STATE(265)] = 12540,
  [SMALL_STATE(266)] = 12575,
  [SMALL_STATE(267)] = 12610,
  [SMALL_STATE(268)] = 12651,
  [SMALL_STATE(269)] = 12692,
  [SMALL_STATE(270)] = 12733,
  [SMALL_STATE(271)] = 12778,
  [SMALL_STATE(272)] = 12813,
  [SMALL_STATE(273)] = 12848,
  [SMALL_STATE(274)] = 12883,
  [SMALL_STATE(275)] = 12923,
  [SMALL_STATE(276)] = 12959,
  [SMALL_STATE(277)] = 12999,
  [SMALL_STATE(278)] = 13035,
  [SMALL_STATE(279)] = 13070,
  [SMALL_STATE(280)] = 13105,
  [SMALL_STATE(281)] = 13140,
  [SMALL_STATE(282)] = 13203,
  [SMALL_STATE(283)] = 13238,
  [SMALL_STATE(284)] = 13273,
  [SMALL_STATE(285)] = 13308,
  [SMALL_STATE(286)] = 13343,
  [SMALL_STATE(287)] = 13378,
  [SMALL_STATE(288)] = 13413,
  [SMALL_STATE(289)] = 13448,
  [SMALL_STATE(290)] = 13483,
  [SMALL_STATE(291)] = 13518,
  [SMALL_STATE(292)] = 13553,
  [SMALL_STATE(293)] = 13588,
  [SMALL_STATE(294)] = 13623,
  [SMALL_STATE(295)] = 13658,
  [SMALL_STATE(296)] = 13693,
  [SMALL_STATE(297)] = 13756,
  [SMALL_STATE(298)] = 13819,
  [SMALL_STATE(299)] = 13854,
  [SMALL_STATE(300)] = 13906,
  [SMALL_STATE(301)] = 13958,
  [SMALL_STATE(302)] = 13988,
  [SMALL_STATE(303)] = 14018,
  [SMALL_STATE(304)] = 14065,
  [SMALL_STATE(305)] = 14112,
  [SMALL_STATE(306)] = 14150,
  [SMALL_STATE(307)] = 14186,
  [SMALL_STATE(308)] = 14222,
  [SMALL_STATE(309)] = 14258,
  [SMALL_STATE(310)] = 14286,
  [SMALL_STATE(311)] = 14317,
  [SMALL_STATE(312)] = 14348,
  [SMALL_STATE(313)] = 14376,
  [SMALL_STATE(314)] = 14404,
  [SMALL_STATE(315)] = 14432,
  [SMALL_STATE(316)] = 14460,
  [SMALL_STATE(317)] = 14488,
  [SMALL_STATE(318)] = 14516,
  [SMALL_STATE(319)] = 14544,
  [SMALL_STATE(320)] = 14572,
  [SMALL_STATE(321)] = 14600,
  [SMALL_STATE(322)] = 14626,
  [SMALL_STATE(323)] = 14654,
  [SMALL_STATE(324)] = 14682,
  [SMALL_STATE(325)] = 14706,
  [SMALL_STATE(326)] = 14734,
  [SMALL_STATE(327)] = 14762,
  [SMALL_STATE(328)] = 14786,
  [SMALL_STATE(329)] = 14814,
  [SMALL_STATE(330)] = 14842,
  [SMALL_STATE(331)] = 14870,
  [SMALL_STATE(332)] = 14892,
  [SMALL_STATE(333)] = 14920,
  [SMALL_STATE(334)] = 14948,
  [SMALL_STATE(335)] = 14970,
  [SMALL_STATE(336)] = 14998,
  [SMALL_STATE(337)] = 15026,
  [SMALL_STATE(338)] = 15054,
  [SMALL_STATE(339)] = 15078,
  [SMALL_STATE(340)] = 15106,
  [SMALL_STATE(341)] = 15134,
  [SMALL_STATE(342)] = 15158,
  [SMALL_STATE(343)] = 15181,
  [SMALL_STATE(344)] = 15204,
  [SMALL_STATE(345)] = 15227,
  [SMALL_STATE(346)] = 15250,
  [SMALL_STATE(347)] = 15273,
  [SMALL_STATE(348)] = 15295,
  [SMALL_STATE(349)] = 15317,
  [SMALL_STATE(350)] = 15339,
  [SMALL_STATE(351)] = 15361,
  [SMALL_STATE(352)] = 15383,
  [SMALL_STATE(353)] = 15405,
  [SMALL_STATE(354)] = 15427,
  [SMALL_STATE(355)] = 15449,
  [SMALL_STATE(356)] = 15471,
  [SMALL_STATE(357)] = 15493,
  [SMALL_STATE(358)] = 15515,
  [SMALL_STATE(359)] = 15537,
  [SMALL_STATE(360)] = 15559,
  [SMALL_STATE(361)] = 15581,
  [SMALL_STATE(362)] = 15603,
  [SMALL_STATE(363)] = 15625,
  [SMALL_STATE(364)] = 15647,
  [SMALL_STATE(365)] = 15669,
  [SMALL_STATE(366)] = 15691,
  [SMALL_STATE(367)] = 15713,
  [SMALL_STATE(368)] = 15735,
  [SMALL_STATE(369)] = 15757,
  [SMALL_STATE(370)] = 15779,
  [SMALL_STATE(371)] = 15801,
  [SMALL_STATE(372)] = 15823,
  [SMALL_STATE(373)] = 15845,
  [SMALL_STATE(374)] = 15867,
  [SMALL_STATE(375)] = 15889,
  [SMALL_STATE(376)] = 15911,
  [SMALL_STATE(377)] = 15933,
  [SMALL_STATE(378)] = 15955,
  [SMALL_STATE(379)] = 15977,
  [SMALL_STATE(380)] = 15999,
  [SMALL_STATE(381)] = 16021,
  [SMALL_STATE(382)] = 16043,
  [SMALL_STATE(383)] = 16065,
  [SMALL_STATE(384)] = 16087,
  [SMALL_STATE(385)] = 16109,
  [SMALL_STATE(386)] = 16127,
  [SMALL_STATE(387)] = 16158,
  [SMALL_STATE(388)] = 16189,
  [SMALL_STATE(389)] = 16220,
  [SMALL_STATE(390)] = 16251,
  [SMALL_STATE(391)] = 16282,
  [SMALL_STATE(392)] = 16313,
  [SMALL_STATE(393)] = 16344,
  [SMALL_STATE(394)] = 16375,
  [SMALL_STATE(395)] = 16406,
  [SMALL_STATE(396)] = 16430,
  [SMALL_STATE(397)] = 16454,
  [SMALL_STATE(398)] = 16478,
  [SMALL_STATE(399)] = 16502,
  [SMALL_STATE(400)] = 16526,
  [SMALL_STATE(401)] = 16550,
  [SMALL_STATE(402)] = 16574,
  [SMALL_STATE(403)] = 16598,
  [SMALL_STATE(404)] = 16622,
  [SMALL_STATE(405)] = 16646,
  [SMALL_STATE(406)] = 16670,
  [SMALL_STATE(407)] = 16694,
  [SMALL_STATE(408)] = 16718,
  [SMALL_STATE(409)] = 16742,
  [SMALL_STATE(410)] = 16766,
  [SMALL_STATE(411)] = 16793,
  [SMALL_STATE(412)] = 16820,
  [SMALL_STATE(413)] = 16847,
  [SMALL_STATE(414)] = 16873,
  [SMALL_STATE(415)] = 16899,
  [SMALL_STATE(416)] = 16925,
  [SMALL_STATE(417)] = 16951,
  [SMALL_STATE(418)] = 16977,
  [SMALL_STATE(419)] = 17003,
  [SMALL_STATE(420)] = 17029,
  [SMALL_STATE(421)] = 17055,
  [SMALL_STATE(422)] = 17081,
  [SMALL_STATE(423)] = 17104,
  [SMALL_STATE(424)] = 17129,
  [SMALL_STATE(425)] = 17154,
  [SMALL_STATE(426)] = 17171,
  [SMALL_STATE(427)] = 17192,
  [SMALL_STATE(428)] = 17215,
  [SMALL_STATE(429)] = 17236,
  [SMALL_STATE(430)] = 17257,
  [SMALL_STATE(431)] = 17280,
  [SMALL_STATE(432)] = 17305,
  [SMALL_STATE(433)] = 17328,
  [SMALL_STATE(434)] = 17351,
  [SMALL_STATE(435)] = 17368,
  [SMALL_STATE(436)] = 17385,
  [SMALL_STATE(437)] = 17408,
  [SMALL_STATE(438)] = 17431,
  [SMALL_STATE(439)] = 17452,
  [SMALL_STATE(440)] = 17475,
  [SMALL_STATE(441)] = 17498,
  [SMALL_STATE(442)] = 17519,
  [SMALL_STATE(443)] = 17540,
  [SMALL_STATE(444)] = 17561,
  [SMALL_STATE(445)] = 17582,
  [SMALL_STATE(446)] = 17607,
  [SMALL_STATE(447)] = 17630,
  [SMALL_STATE(448)] = 17653,
  [SMALL_STATE(449)] = 17674,
  [SMALL_STATE(450)] = 17697,
  [SMALL_STATE(451)] = 17720,
  [SMALL_STATE(452)] = 17743,
  [SMALL_STATE(453)] = 17760,
  [SMALL_STATE(454)] = 17781,
  [SMALL_STATE(455)] = 17804,
  [SMALL_STATE(456)] = 17827,
  [SMALL_STATE(457)] = 17844,
  [SMALL_STATE(458)] = 17867,
  [SMALL_STATE(459)] = 17890,
  [SMALL_STATE(460)] = 17912,
  [SMALL_STATE(461)] = 17934,
  [SMALL_STATE(462)] = 17948,
  [SMALL_STATE(463)] = 17970,
  [SMALL_STATE(464)] = 17992,
  [SMALL_STATE(465)] = 18014,
  [SMALL_STATE(466)] = 18036,
  [SMALL_STATE(467)] = 18055,
  [SMALL_STATE(468)] = 18074,
  [SMALL_STATE(469)] = 18091,
  [SMALL_STATE(470)] = 18100,
  [SMALL_STATE(471)] = 18109,
  [SMALL_STATE(472)] = 18118,
  [SMALL_STATE(473)] = 18127,
  [SMALL_STATE(474)] = 18136,
  [SMALL_STATE(475)] = 18153,
  [SMALL_STATE(476)] = 18162,
  [SMALL_STATE(477)] = 18171,
  [SMALL_STATE(478)] = 18183,
  [SMALL_STATE(479)] = 18199,
  [SMALL_STATE(480)] = 18215,
  [SMALL_STATE(481)] = 18231,
  [SMALL_STATE(482)] = 18247,
  [SMALL_STATE(483)] = 18259,
  [SMALL_STATE(484)] = 18275,
  [SMALL_STATE(485)] = 18291,
  [SMALL_STATE(486)] = 18299,
  [SMALL_STATE(487)] = 18315,
  [SMALL_STATE(488)] = 18331,
  [SMALL_STATE(489)] = 18347,
  [SMALL_STATE(490)] = 18363,
  [SMALL_STATE(491)] = 18379,
  [SMALL_STATE(492)] = 18395,
  [SMALL_STATE(493)] = 18411,
  [SMALL_STATE(494)] = 18427,
  [SMALL_STATE(495)] = 18443,
  [SMALL_STATE(496)] = 18459,
  [SMALL_STATE(497)] = 18475,
  [SMALL_STATE(498)] = 18491,
  [SMALL_STATE(499)] = 18507,
  [SMALL_STATE(500)] = 18523,
  [SMALL_STATE(501)] = 18539,
  [SMALL_STATE(502)] = 18551,
  [SMALL_STATE(503)] = 18567,
  [SMALL_STATE(504)] = 18583,
  [SMALL_STATE(505)] = 18599,
  [SMALL_STATE(506)] = 18615,
  [SMALL_STATE(507)] = 18631,
  [SMALL_STATE(508)] = 18643,
  [SMALL_STATE(509)] = 18655,
  [SMALL_STATE(510)] = 18671,
  [SMALL_STATE(511)] = 18687,
  [SMALL_STATE(512)] = 18703,
  [SMALL_STATE(513)] = 18719,
  [SMALL_STATE(514)] = 18735,
  [SMALL_STATE(515)] = 18751,
  [SMALL_STATE(516)] = 18767,
  [SMALL_STATE(517)] = 18783,
  [SMALL_STATE(518)] = 18799,
  [SMALL_STATE(519)] = 18815,
  [SMALL_STATE(520)] = 18831,
  [SMALL_STATE(521)] = 18845,
  [SMALL_STATE(522)] = 18861,
  [SMALL_STATE(523)] = 18875,
  [SMALL_STATE(524)] = 18887,
  [SMALL_STATE(525)] = 18899,
  [SMALL_STATE(526)] = 18911,
  [SMALL_STATE(527)] = 18923,
  [SMALL_STATE(528)] = 18932,
  [SMALL_STATE(529)] = 18945,
  [SMALL_STATE(530)] = 18952,
  [SMALL_STATE(531)] = 18965,
  [SMALL_STATE(532)] = 18978,
  [SMALL_STATE(533)] = 18991,
  [SMALL_STATE(534)] = 19000,
  [SMALL_STATE(535)] = 19009,
  [SMALL_STATE(536)] = 19022,
  [SMALL_STATE(537)] = 19035,
  [SMALL_STATE(538)] = 19048,
  [SMALL_STATE(539)] = 19057,
  [SMALL_STATE(540)] = 19064,
  [SMALL_STATE(541)] = 19071,
  [SMALL_STATE(542)] = 19084,
  [SMALL_STATE(543)] = 19097,
  [SMALL_STATE(544)] = 19104,
  [SMALL_STATE(545)] = 19111,
  [SMALL_STATE(546)] = 19124,
  [SMALL_STATE(547)] = 19135,
  [SMALL_STATE(548)] = 19144,
  [SMALL_STATE(549)] = 19153,
  [SMALL_STATE(550)] = 19162,
  [SMALL_STATE(551)] = 19173,
  [SMALL_STATE(552)] = 19186,
  [SMALL_STATE(553)] = 19195,
  [SMALL_STATE(554)] = 19204,
  [SMALL_STATE(555)] = 19213,
  [SMALL_STATE(556)] = 19222,
  [SMALL_STATE(557)] = 19231,
  [SMALL_STATE(558)] = 19240,
  [SMALL_STATE(559)] = 19253,
  [SMALL_STATE(560)] = 19262,
  [SMALL_STATE(561)] = 19272,
  [SMALL_STATE(562)] = 19282,
  [SMALL_STATE(563)] = 19292,
  [SMALL_STATE(564)] = 19302,
  [SMALL_STATE(565)] = 19312,
  [SMALL_STATE(566)] = 19322,
  [SMALL_STATE(567)] = 19332,
  [SMALL_STATE(568)] = 19342,
  [SMALL_STATE(569)] = 19352,
  [SMALL_STATE(570)] = 19362,
  [SMALL_STATE(571)] = 19372,
  [SMALL_STATE(572)] = 19378,
  [SMALL_STATE(573)] = 19388,
  [SMALL_STATE(574)] = 19398,
  [SMALL_STATE(575)] = 19408,
  [SMALL_STATE(576)] = 19418,
  [SMALL_STATE(577)] = 19426,
  [SMALL_STATE(578)] = 19436,
  [SMALL_STATE(579)] = 19446,
  [SMALL_STATE(580)] = 19456,
  [SMALL_STATE(581)] = 19466,
  [SMALL_STATE(582)] = 19474,
  [SMALL_STATE(583)] = 19484,
  [SMALL_STATE(584)] = 19490,
  [SMALL_STATE(585)] = 19500,
  [SMALL_STATE(586)] = 19510,
  [SMALL_STATE(587)] = 19520,
  [SMALL_STATE(588)] = 19530,
  [SMALL_STATE(589)] = 19540,
  [SMALL_STATE(590)] = 19550,
  [SMALL_STATE(591)] = 19560,
  [SMALL_STATE(592)] = 19570,
  [SMALL_STATE(593)] = 19580,
  [SMALL_STATE(594)] = 19590,
  [SMALL_STATE(595)] = 19600,
  [SMALL_STATE(596)] = 19610,
  [SMALL_STATE(597)] = 19620,
  [SMALL_STATE(598)] = 19630,
  [SMALL_STATE(599)] = 19640,
  [SMALL_STATE(600)] = 19650,
  [SMALL_STATE(601)] = 19660,
  [SMALL_STATE(602)] = 19670,
  [SMALL_STATE(603)] = 19680,
  [SMALL_STATE(604)] = 19690,
  [SMALL_STATE(605)] = 19700,
  [SMALL_STATE(606)] = 19710,
  [SMALL_STATE(607)] = 19720,
  [SMALL_STATE(608)] = 19730,
  [SMALL_STATE(609)] = 19740,
  [SMALL_STATE(610)] = 19750,
  [SMALL_STATE(611)] = 19760,
  [SMALL_STATE(612)] = 19770,
  [SMALL_STATE(613)] = 19780,
  [SMALL_STATE(614)] = 19790,
  [SMALL_STATE(615)] = 19800,
  [SMALL_STATE(616)] = 19810,
  [SMALL_STATE(617)] = 19820,
  [SMALL_STATE(618)] = 19830,
  [SMALL_STATE(619)] = 19840,
  [SMALL_STATE(620)] = 19850,
  [SMALL_STATE(621)] = 19856,
  [SMALL_STATE(622)] = 19866,
  [SMALL_STATE(623)] = 19876,
  [SMALL_STATE(624)] = 19886,
  [SMALL_STATE(625)] = 19896,
  [SMALL_STATE(626)] = 19906,
  [SMALL_STATE(627)] = 19912,
  [SMALL_STATE(628)] = 19922,
  [SMALL_STATE(629)] = 19932,
  [SMALL_STATE(630)] = 19942,
  [SMALL_STATE(631)] = 19948,
  [SMALL_STATE(632)] = 19958,
  [SMALL_STATE(633)] = 19968,
  [SMALL_STATE(634)] = 19978,
  [SMALL_STATE(635)] = 19988,
  [SMALL_STATE(636)] = 19998,
  [SMALL_STATE(637)] = 20008,
  [SMALL_STATE(638)] = 20018,
  [SMALL_STATE(639)] = 20028,
  [SMALL_STATE(640)] = 20038,
  [SMALL_STATE(641)] = 20048,
  [SMALL_STATE(642)] = 20058,
  [SMALL_STATE(643)] = 20068,
  [SMALL_STATE(644)] = 20078,
  [SMALL_STATE(645)] = 20088,
  [SMALL_STATE(646)] = 20098,
  [SMALL_STATE(647)] = 20108,
  [SMALL_STATE(648)] = 20118,
  [SMALL_STATE(649)] = 20128,
  [SMALL_STATE(650)] = 20138,
  [SMALL_STATE(651)] = 20148,
  [SMALL_STATE(652)] = 20158,
  [SMALL_STATE(653)] = 20168,
  [SMALL_STATE(654)] = 20178,
  [SMALL_STATE(655)] = 20188,
  [SMALL_STATE(656)] = 20198,
  [SMALL_STATE(657)] = 20208,
  [SMALL_STATE(658)] = 20218,
  [SMALL_STATE(659)] = 20228,
  [SMALL_STATE(660)] = 20238,
  [SMALL_STATE(661)] = 20248,
  [SMALL_STATE(662)] = 20253,
  [SMALL_STATE(663)] = 20260,
  [SMALL_STATE(664)] = 20267,
  [SMALL_STATE(665)] = 20272,
  [SMALL_STATE(666)] = 20277,
  [SMALL_STATE(667)] = 20284,
  [SMALL_STATE(668)] = 20289,
  [SMALL_STATE(669)] = 20296,
  [SMALL_STATE(670)] = 20301,
  [SMALL_STATE(671)] = 20308,
  [SMALL_STATE(672)] = 20315,
  [SMALL_STATE(673)] = 20322,
  [SMALL_STATE(674)] = 20327,
  [SMALL_STATE(675)] = 20334,
  [SMALL_STATE(676)] = 20341,
  [SMALL_STATE(677)] = 20348,
  [SMALL_STATE(678)] = 20353,
  [SMALL_STATE(679)] = 20360,
  [SMALL_STATE(680)] = 20367,
  [SMALL_STATE(681)] = 20374,
  [SMALL_STATE(682)] = 20381,
  [SMALL_STATE(683)] = 20388,
  [SMALL_STATE(684)] = 20395,
  [SMALL_STATE(685)] = 20402,
  [SMALL_STATE(686)] = 20407,
  [SMALL_STATE(687)] = 20414,
  [SMALL_STATE(688)] = 20421,
  [SMALL_STATE(689)] = 20426,
  [SMALL_STATE(690)] = 20433,
  [SMALL_STATE(691)] = 20438,
  [SMALL_STATE(692)] = 20445,
  [SMALL_STATE(693)] = 20452,
  [SMALL_STATE(694)] = 20459,
  [SMALL_STATE(695)] = 20466,
  [SMALL_STATE(696)] = 20473,
  [SMALL_STATE(697)] = 20480,
  [SMALL_STATE(698)] = 20487,
  [SMALL_STATE(699)] = 20494,
  [SMALL_STATE(700)] = 20499,
  [SMALL_STATE(701)] = 20504,
  [SMALL_STATE(702)] = 20509,
  [SMALL_STATE(703)] = 20514,
  [SMALL_STATE(704)] = 20521,
  [SMALL_STATE(705)] = 20528,
  [SMALL_STATE(706)] = 20533,
  [SMALL_STATE(707)] = 20540,
  [SMALL_STATE(708)] = 20545,
  [SMALL_STATE(709)] = 20552,
  [SMALL_STATE(710)] = 20559,
  [SMALL_STATE(711)] = 20566,
  [SMALL_STATE(712)] = 20573,
  [SMALL_STATE(713)] = 20580,
  [SMALL_STATE(714)] = 20587,
  [SMALL_STATE(715)] = 20594,
  [SMALL_STATE(716)] = 20601,
  [SMALL_STATE(717)] = 20608,
  [SMALL_STATE(718)] = 20615,
  [SMALL_STATE(719)] = 20622,
  [SMALL_STATE(720)] = 20629,
  [SMALL_STATE(721)] = 20636,
  [SMALL_STATE(722)] = 20643,
  [SMALL_STATE(723)] = 20650,
  [SMALL_STATE(724)] = 20657,
  [SMALL_STATE(725)] = 20662,
  [SMALL_STATE(726)] = 20669,
  [SMALL_STATE(727)] = 20676,
  [SMALL_STATE(728)] = 20681,
  [SMALL_STATE(729)] = 20685,
  [SMALL_STATE(730)] = 20689,
  [SMALL_STATE(731)] = 20693,
  [SMALL_STATE(732)] = 20697,
  [SMALL_STATE(733)] = 20701,
  [SMALL_STATE(734)] = 20705,
  [SMALL_STATE(735)] = 20709,
  [SMALL_STATE(736)] = 20713,
  [SMALL_STATE(737)] = 20717,
  [SMALL_STATE(738)] = 20721,
  [SMALL_STATE(739)] = 20725,
  [SMALL_STATE(740)] = 20729,
  [SMALL_STATE(741)] = 20733,
  [SMALL_STATE(742)] = 20737,
  [SMALL_STATE(743)] = 20741,
  [SMALL_STATE(744)] = 20745,
  [SMALL_STATE(745)] = 20749,
  [SMALL_STATE(746)] = 20753,
  [SMALL_STATE(747)] = 20757,
  [SMALL_STATE(748)] = 20761,
  [SMALL_STATE(749)] = 20765,
  [SMALL_STATE(750)] = 20769,
  [SMALL_STATE(751)] = 20773,
  [SMALL_STATE(752)] = 20777,
  [SMALL_STATE(753)] = 20781,
  [SMALL_STATE(754)] = 20785,
  [SMALL_STATE(755)] = 20789,
  [SMALL_STATE(756)] = 20793,
  [SMALL_STATE(757)] = 20797,
  [SMALL_STATE(758)] = 20801,
  [SMALL_STATE(759)] = 20805,
  [SMALL_STATE(760)] = 20809,
  [SMALL_STATE(761)] = 20813,
  [SMALL_STATE(762)] = 20817,
  [SMALL_STATE(763)] = 20821,
  [SMALL_STATE(764)] = 20825,
  [SMALL_STATE(765)] = 20829,
  [SMALL_STATE(766)] = 20833,
  [SMALL_STATE(767)] = 20837,
  [SMALL_STATE(768)] = 20841,
  [SMALL_STATE(769)] = 20845,
  [SMALL_STATE(770)] = 20849,
  [SMALL_STATE(771)] = 20853,
  [SMALL_STATE(772)] = 20857,
  [SMALL_STATE(773)] = 20861,
  [SMALL_STATE(774)] = 20865,
  [SMALL_STATE(775)] = 20869,
  [SMALL_STATE(776)] = 20873,
  [SMALL_STATE(777)] = 20877,
  [SMALL_STATE(778)] = 20881,
  [SMALL_STATE(779)] = 20885,
  [SMALL_STATE(780)] = 20889,
  [SMALL_STATE(781)] = 20893,
  [SMALL_STATE(782)] = 20897,
  [SMALL_STATE(783)] = 20901,
  [SMALL_STATE(784)] = 20905,
  [SMALL_STATE(785)] = 20909,
  [SMALL_STATE(786)] = 20913,
  [SMALL_STATE(787)] = 20917,
  [SMALL_STATE(788)] = 20921,
  [SMALL_STATE(789)] = 20925,
  [SMALL_STATE(790)] = 20929,
  [SMALL_STATE(791)] = 20933,
  [SMALL_STATE(792)] = 20937,
  [SMALL_STATE(793)] = 20941,
  [SMALL_STATE(794)] = 20945,
  [SMALL_STATE(795)] = 20949,
  [SMALL_STATE(796)] = 20953,
  [SMALL_STATE(797)] = 20957,
  [SMALL_STATE(798)] = 20961,
  [SMALL_STATE(799)] = 20965,
  [SMALL_STATE(800)] = 20969,
  [SMALL_STATE(801)] = 20973,
  [SMALL_STATE(802)] = 20977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(730),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(747),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(795),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(755),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(711),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(752),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(750),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(708),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(739),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 18),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 18),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 18),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 18),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 18),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 18),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 51),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 4, 0, 51),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 24),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 2, 0, 24),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 25),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 2, 0, 25),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 24),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 2, 0, 24),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 24),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 2, 0, 24),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 24),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 2, 0, 24),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 24),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 24),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 24),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 24),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 2, 0, 24),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 2, 0, 24),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 15),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 2, 0, 15),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 32),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 3, 0, 32),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 33),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 3, 0, 33),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 34),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 34),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 35),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 3, 0, 35),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 35),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 3, 0, 35),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 32),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 3, 0, 32),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 32),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 3, 0, 32),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 37),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 37),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 32),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 32),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 15),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic_body, 2, 0, 15),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 37),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 37),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 37),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 37),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 43),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 43),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 44),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 44),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 45),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 4, 0, 45),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 4, 0, 46),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 4, 0, 46),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 47),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 47),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 46),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 46),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 4, 0, 32),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 4, 0, 32),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 32),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 32),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 32),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 32),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 48),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 48),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 32),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 32),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 49),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 49),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 5, 0, 46),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 5, 0, 46),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 32),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 32),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 52),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 52),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 2, 2, 24),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 2, 2, 24),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 37),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 37),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(686),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 1, 0, 0),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(165),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 3, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 40),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(626),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(784),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(743),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(679),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(772),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(722),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(735),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [869] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(748),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(625),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(706),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(709),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(723),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(703),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(695),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(675),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(713),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(746),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(269),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 18),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 18),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 18),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 18),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 40),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 29),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 29),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 17),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cap_definition, 2, 0, 17),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27), SHIFT_REPEAT(305),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27), SHIFT_REPEAT(781),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [1038] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(781),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(707),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(309),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(791),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(315),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(315),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 26),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 15),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 16),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 16),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 15),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 40),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 40),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 26),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 22),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 22),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 30),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 30),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 31),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 31),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 50),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 50),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 28),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 28),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 41),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 41),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 42),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 42),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 4),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 4, 0, 4),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 23),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 23),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 14),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 14),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 50),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 8, 0, 50),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 13),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 13),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 9),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 4, 0, 9),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 14),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 14),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 28),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 28),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 23),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 23),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 14),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 14),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 42),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 42),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 41),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 41),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 13),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 13),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 31),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 31),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(472),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_selection_clause, 2, 0, 39),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 36),
  [1540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 21),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 21), SHIFT_REPEAT(550),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_none_keyword, 1, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_clause, 2, 0, 38),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 30),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 20),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 22),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1755] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
