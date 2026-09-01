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
#define STATE_COUNT 799
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 212
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 48

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
  anon_sym_Pack = 12,
  sym_array_suffix = 13,
  anon_sym__ = 14,
  sym_integer_literal = 15,
  anon_sym_models = 16,
  anon_sym_tools = 17,
  anon_sym_skills = 18,
  anon_sym_services = 19,
  anon_sym_psyches = 20,
  anon_sym_hands = 21,
  anon_sym_handoffs = 22,
  anon_sym_recall = 23,
  anon_sym_EQ = 24,
  anon_sym_PLUS_EQ = 25,
  anon_sym_DASH_EQ = 26,
  aux_sym_directive_value_token1 = 27,
  anon_sym_default = 28,
  anon_sym_none = 29,
  anon_sym_user = 30,
  anon_sym_assistant = 31,
  anon_sym_tool = 32,
  sym_with_keyword = 33,
  sym_struct_keyword = 34,
  sym_psyche_keyword = 35,
  sym_skill_keyword = 36,
  sym_service_keyword = 37,
  sym_prompt_keyword = 38,
  sym_context_keyword = 39,
  sym_instruct_keyword = 40,
  sym_agic_keyword = 41,
  sym_task_keyword = 42,
  sym_chore_keyword = 43,
  sym_flow_keyword = 44,
  sym_pass_keyword = 45,
  sym_flow_run_keyword = 46,
  sym_flow_let_keyword = 47,
  sym_flow_seek_keyword = 48,
  sym_flow_ask_keyword = 49,
  sym_flow_scatter_keyword = 50,
  sym_flow_storm_keyword = 51,
  sym_flow_gather_keyword = 52,
  sym_flow_settle_keyword = 53,
  sym_flow_map_keyword = 54,
  sym_flow_keep_keyword = 55,
  sym_flow_drop_keyword = 56,
  sym_flow_rank_keyword = 57,
  sym_flow_repeat_keyword = 58,
  sym_flow_until_keyword = 59,
  sym_flow_par_keyword = 60,
  sym_flow_first_keyword = 61,
  sym_flow_last_keyword = 62,
  sym_flow_top_keyword = 63,
  sym_flow_bottom_keyword = 64,
  sym_flow_think_keyword = 65,
  sym_flow_use_keyword = 66,
  sym_thunk_keyword = 67,
  anon_sym_call = 68,
  anon_sym_do = 69,
  anon_sym_unfold = 70,
  anon_sym_each = 71,
  anon_sym_fold = 72,
  anon_sym_sort = 73,
  anon_sym_head = 74,
  anon_sym_tail = 75,
  sym_optional_marker = 76,
  sym_arrow = 77,
  sym_colon = 78,
  sym_lparen = 79,
  sym_rparen = 80,
  sym_comma = 81,
  sym_cap_kind = 82,
  sym_pascal_name = 83,
  sym_snake_name = 84,
  sym__snake_kebab_name = 85,
  sym_indented_raw_text = 86,
  sym__prompt_indented_raw_text = 87,
  sym__implicit_run_raw_text = 88,
  sym__nested_indented_raw_text = 89,
  sym_source_file = 90,
  sym_item = 91,
  sym_line_end = 92,
  sym__trivia = 93,
  sym_with = 94,
  sym_type = 95,
  sym_base_type = 96,
  sym_builtin_type = 97,
  sym_user_type = 98,
  sym_type_suffix = 99,
  sym_struct = 100,
  sym_struct_name = 101,
  sym_struct_body = 102,
  sym_field = 103,
  sym_field_name = 104,
  sym_psyche = 105,
  sym_skill = 106,
  sym_service = 107,
  sym_prompt = 108,
  sym_prompt_body = 109,
  sym__prompt_text_body = 110,
  sym__prompt_text_body_line = 111,
  sym_task = 112,
  sym_chore = 113,
  sym_cap_name = 114,
  sym_cap_ref = 115,
  sym_job_name = 116,
  sym_cap_body = 117,
  sym_job_body = 118,
  sym_property = 119,
  sym_property_key = 120,
  sym_property_value = 121,
  sym_instruct = 122,
  sym_instruct_name = 123,
  sym_instruct_body = 124,
  sym_context = 125,
  sym_context_name = 126,
  sym_context_body = 127,
  sym_text_inline = 128,
  sym_text_block = 129,
  sym_text_body = 130,
  sym_text_body_line = 131,
  sym__nested_text_inline_alias = 132,
  sym__nested_text_inline = 133,
  sym__nested_text_block = 134,
  sym__nested_text_body = 135,
  sym__nested_text_body_line = 136,
  sym_agic = 137,
  sym_agic_name = 138,
  sym_agic_body = 139,
  sym_params = 140,
  sym_param = 141,
  sym_param_name = 142,
  sym_flow = 143,
  sym_flow_name = 144,
  sym_flow_body = 145,
  sym_statements = 146,
  sym__flow_statement = 147,
  sym__flow_operation = 148,
  sym_let_statement = 149,
  sym_run_statement = 150,
  sym_implicit_run_statement = 151,
  sym__implicit_run_text_body_line = 152,
  sym_seek_statement = 153,
  sym_ask_statement = 154,
  sym_scatter_statement = 155,
  sym_storm_statement = 156,
  sym_gather_statement = 157,
  sym_settle_statement = 158,
  sym_map_statement = 159,
  sym_keep_statement = 160,
  sym_drop_statement = 161,
  sym_rank_statement = 162,
  sym_repeat_statement = 163,
  sym_repeat_body = 164,
  sym_repeat_until_body = 165,
  sym_until_statement = 166,
  sym_invalid_flow_reserved_statement = 167,
  sym_inline_agic = 168,
  sym_inline_agic_body = 169,
  sym_par_clause = 170,
  sym_position_clause = 171,
  sym_rank_selection_clause = 172,
  sym_runnable = 173,
  sym_agent = 174,
  sym_local_name = 175,
  sym_directive = 176,
  sym_directive_key = 177,
  sym_directive_op = 178,
  sym_directive_value = 179,
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
  sym__flow_reserved_word = 193,
  sym__agic_reserved_word = 194,
  sym_assign_operator = 195,
  sym_type_name = 196,
  sym_text_line = 197,
  aux_sym_source_file_repeat1 = 198,
  aux_sym_type_repeat1 = 199,
  aux_sym_struct_body_repeat1 = 200,
  aux_sym__prompt_text_body_repeat1 = 201,
  aux_sym_cap_body_repeat1 = 202,
  aux_sym_cap_body_repeat2 = 203,
  aux_sym_text_body_repeat1 = 204,
  aux_sym__nested_text_body_repeat1 = 205,
  aux_sym_params_repeat1 = 206,
  aux_sym_statements_repeat1 = 207,
  aux_sym_implicit_run_statement_repeat1 = 208,
  aux_sym__directives_repeat1 = 209,
  aux_sym_messages_repeat1 = 210,
  aux_sym_unroled_message_repeat1 = 211,
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
  [anon_sym_Pack] = "Pack",
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
  [anon_sym_recall] = "recall",
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
  [sym__prompt_indented_raw_text] = "indented_raw_text",
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
  [sym_prompt_body] = "prompt_body",
  [sym__prompt_text_body] = "text_body",
  [sym__prompt_text_body_line] = "text_body_line",
  [sym_task] = "task",
  [sym_chore] = "chore",
  [sym_cap_name] = "cap_name",
  [sym_cap_ref] = "cap_ref",
  [sym_job_name] = "job_name",
  [sym_cap_body] = "cap_body",
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
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__agic_reserved_word] = "_agic_reserved_word",
  [sym_assign_operator] = "assign_operator",
  [sym_type_name] = "type_name",
  [sym_text_line] = "text_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym__prompt_text_body_repeat1] = "_prompt_text_body_repeat1",
  [aux_sym_cap_body_repeat1] = "cap_body_repeat1",
  [aux_sym_cap_body_repeat2] = "cap_body_repeat2",
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
  [anon_sym_Pack] = anon_sym_Pack,
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
  [anon_sym_recall] = anon_sym_recall,
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
  [sym__prompt_indented_raw_text] = sym_indented_raw_text,
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
  [sym_prompt_body] = sym_prompt_body,
  [sym__prompt_text_body] = sym_text_body,
  [sym__prompt_text_body_line] = sym_text_body_line,
  [sym_task] = sym_task,
  [sym_chore] = sym_chore,
  [sym_cap_name] = sym_cap_name,
  [sym_cap_ref] = sym_cap_ref,
  [sym_job_name] = sym_job_name,
  [sym_cap_body] = sym_cap_body,
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
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__agic_reserved_word] = sym__agic_reserved_word,
  [sym_assign_operator] = sym_assign_operator,
  [sym_type_name] = sym_type_name,
  [sym_text_line] = sym_text_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym__prompt_text_body_repeat1] = aux_sym__prompt_text_body_repeat1,
  [aux_sym_cap_body_repeat1] = aux_sym_cap_body_repeat1,
  [aux_sym_cap_body_repeat2] = aux_sym_cap_body_repeat2,
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
  [anon_sym_Pack] = {
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
  [anon_sym_recall] = {
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
  [sym__prompt_indented_raw_text] = {
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
  [sym_prompt_body] = {
    .visible = true,
    .named = true,
  },
  [sym__prompt_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym__prompt_text_body_line] = {
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
  [sym_cap_body] = {
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
  [aux_sym__prompt_text_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cap_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cap_body_repeat2] = {
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
  field_reference = 19,
  field_return = 20,
  field_runnable = 21,
  field_selection = 22,
  field_statement = 23,
  field_suffix = 24,
  field_type = 25,
  field_value = 26,
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
  [5] = {.index = 8, .length = 4},
  [6] = {.index = 12, .length = 4},
  [7] = {.index = 16, .length = 1},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 1},
  [11] = {.index = 23, .length = 1},
  [12] = {.index = 24, .length = 2},
  [13] = {.index = 26, .length = 4},
  [14] = {.index = 30, .length = 1},
  [15] = {.index = 31, .length = 2},
  [16] = {.index = 33, .length = 2},
  [17] = {.index = 35, .length = 2},
  [18] = {.index = 37, .length = 3},
  [19] = {.index = 40, .length = 4},
  [20] = {.index = 44, .length = 1},
  [21] = {.index = 45, .length = 1},
  [22] = {.index = 46, .length = 5},
  [23] = {.index = 51, .length = 1},
  [24] = {.index = 52, .length = 4},
  [25] = {.index = 56, .length = 5},
  [26] = {.index = 61, .length = 1},
  [27] = {.index = 62, .length = 1},
  [28] = {.index = 63, .length = 2},
  [29] = {.index = 65, .length = 1},
  [30] = {.index = 66, .length = 2},
  [31] = {.index = 68, .length = 1},
  [32] = {.index = 69, .length = 1},
  [33] = {.index = 70, .length = 2},
  [34] = {.index = 72, .length = 2},
  [35] = {.index = 74, .length = 3},
  [36] = {.index = 77, .length = 6},
  [37] = {.index = 83, .length = 6},
  [38] = {.index = 89, .length = 2},
  [39] = {.index = 91, .length = 2},
  [40] = {.index = 93, .length = 2},
  [41] = {.index = 95, .length = 2},
  [42] = {.index = 97, .length = 2},
  [43] = {.index = 99, .length = 1},
  [44] = {.index = 100, .length = 1},
  [45] = {.index = 101, .length = 7},
  [46] = {.index = 108, .length = 3},
  [47] = {.index = 111, .length = 2},
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
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [12] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [16] =
    {field_suffix, 0},
  [17] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [19] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [22] =
    {field_content, 0, .inherited = true},
  [23] =
    {field_param, 1},
  [24] =
    {field_name, 0},
    {field_optional, 1},
  [26] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [30] =
    {field_content, 0},
  [31] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [33] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [35] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [37] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [40] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [44] =
    {field_agic, 1},
  [45] =
    {field_statement, 1},
  [46] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [51] =
    {field_content, 1, .inherited = true},
  [52] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [56] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [61] =
    {field_body, 1},
  [62] =
    {field_runnable, 1},
  [63] =
    {field_agent, 1},
    {field_agic, 2},
  [65] =
    {field_body, 2},
  [66] =
    {field_agic, 2},
    {field_count, 1},
  [68] =
    {field_limit, 1},
  [69] =
    {field_agic, 2},
  [70] =
    {field_count, 1},
    {field_position, 0},
  [72] =
    {field_count, 1},
    {field_selection, 0},
  [74] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [77] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [83] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [89] =
    {field_name, 1},
    {field_value, 3},
  [91] =
    {field_name, 1},
    {field_statement, 3},
  [93] =
    {field_agent, 1},
    {field_runnable, 2},
  [95] =
    {field_count, 1},
    {field_runnable, 2},
  [97] =
    {field_agic, 3},
    {field_count, 1},
  [99] =
    {field_agic, 3},
  [100] =
    {field_body, 3},
  [101] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [108] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [111] =
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
  [18] = 13,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 23,
  [30] = 21,
  [31] = 31,
  [32] = 28,
  [33] = 22,
  [34] = 25,
  [35] = 26,
  [36] = 36,
  [37] = 20,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 36,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 47,
  [52] = 48,
  [53] = 40,
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
  [77] = 45,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
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
  [107] = 72,
  [108] = 84,
  [109] = 62,
  [110] = 101,
  [111] = 56,
  [112] = 102,
  [113] = 85,
  [114] = 57,
  [115] = 103,
  [116] = 86,
  [117] = 68,
  [118] = 60,
  [119] = 69,
  [120] = 70,
  [121] = 63,
  [122] = 64,
  [123] = 49,
  [124] = 87,
  [125] = 88,
  [126] = 89,
  [127] = 90,
  [128] = 91,
  [129] = 92,
  [130] = 54,
  [131] = 82,
  [132] = 58,
  [133] = 65,
  [134] = 66,
  [135] = 67,
  [136] = 59,
  [137] = 94,
  [138] = 95,
  [139] = 79,
  [140] = 96,
  [141] = 81,
  [142] = 83,
  [143] = 97,
  [144] = 61,
  [145] = 71,
  [146] = 98,
  [147] = 80,
  [148] = 73,
  [149] = 104,
  [150] = 105,
  [151] = 99,
  [152] = 100,
  [153] = 74,
  [154] = 75,
  [155] = 76,
  [156] = 55,
  [157] = 106,
  [158] = 78,
  [159] = 93,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 104,
  [168] = 105,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 104,
  [176] = 105,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 26,
  [187] = 22,
  [188] = 28,
  [189] = 20,
  [190] = 25,
  [191] = 162,
  [192] = 161,
  [193] = 164,
  [194] = 36,
  [195] = 38,
  [196] = 45,
  [197] = 48,
  [198] = 47,
  [199] = 199,
  [200] = 28,
  [201] = 201,
  [202] = 46,
  [203] = 26,
  [204] = 204,
  [205] = 205,
  [206] = 40,
  [207] = 41,
  [208] = 208,
  [209] = 205,
  [210] = 205,
  [211] = 83,
  [212] = 80,
  [213] = 213,
  [214] = 54,
  [215] = 79,
  [216] = 81,
  [217] = 217,
  [218] = 56,
  [219] = 82,
  [220] = 84,
  [221] = 85,
  [222] = 86,
  [223] = 87,
  [224] = 88,
  [225] = 89,
  [226] = 90,
  [227] = 91,
  [228] = 92,
  [229] = 93,
  [230] = 94,
  [231] = 95,
  [232] = 96,
  [233] = 57,
  [234] = 97,
  [235] = 98,
  [236] = 99,
  [237] = 100,
  [238] = 58,
  [239] = 59,
  [240] = 60,
  [241] = 61,
  [242] = 101,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 102,
  [248] = 62,
  [249] = 249,
  [250] = 103,
  [251] = 63,
  [252] = 64,
  [253] = 49,
  [254] = 65,
  [255] = 66,
  [256] = 67,
  [257] = 68,
  [258] = 69,
  [259] = 70,
  [260] = 260,
  [261] = 71,
  [262] = 72,
  [263] = 73,
  [264] = 165,
  [265] = 265,
  [266] = 74,
  [267] = 75,
  [268] = 76,
  [269] = 104,
  [270] = 105,
  [271] = 106,
  [272] = 78,
  [273] = 55,
  [274] = 48,
  [275] = 275,
  [276] = 40,
  [277] = 277,
  [278] = 102,
  [279] = 279,
  [280] = 172,
  [281] = 281,
  [282] = 101,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 104,
  [291] = 105,
  [292] = 103,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 288,
  [298] = 288,
  [299] = 104,
  [300] = 105,
  [301] = 301,
  [302] = 302,
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
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 165,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 104,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 104,
  [332] = 105,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 105,
  [343] = 343,
  [344] = 47,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 104,
  [349] = 104,
  [350] = 105,
  [351] = 105,
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
  [386] = 104,
  [387] = 387,
  [388] = 105,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 392,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 396,
  [404] = 397,
  [405] = 398,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 392,
  [410] = 410,
  [411] = 397,
  [412] = 396,
  [413] = 413,
  [414] = 398,
  [415] = 415,
  [416] = 415,
  [417] = 415,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 419,
  [422] = 418,
  [423] = 420,
  [424] = 419,
  [425] = 418,
  [426] = 420,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 430,
  [434] = 434,
  [435] = 435,
  [436] = 427,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 430,
  [443] = 439,
  [444] = 441,
  [445] = 428,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 429,
  [451] = 451,
  [452] = 435,
  [453] = 429,
  [454] = 454,
  [455] = 434,
  [456] = 435,
  [457] = 427,
  [458] = 434,
  [459] = 459,
  [460] = 439,
  [461] = 461,
  [462] = 441,
  [463] = 428,
  [464] = 464,
  [465] = 465,
  [466] = 465,
  [467] = 464,
  [468] = 465,
  [469] = 469,
  [470] = 464,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
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
  [487] = 484,
  [488] = 486,
  [489] = 489,
  [490] = 490,
  [491] = 483,
  [492] = 482,
  [493] = 493,
  [494] = 489,
  [495] = 495,
  [496] = 496,
  [497] = 493,
  [498] = 498,
  [499] = 495,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 490,
  [506] = 506,
  [507] = 495,
  [508] = 483,
  [509] = 485,
  [510] = 501,
  [511] = 484,
  [512] = 486,
  [513] = 489,
  [514] = 514,
  [515] = 490,
  [516] = 482,
  [517] = 493,
  [518] = 501,
  [519] = 502,
  [520] = 503,
  [521] = 490,
  [522] = 504,
  [523] = 504,
  [524] = 502,
  [525] = 480,
  [526] = 503,
  [527] = 480,
  [528] = 485,
  [529] = 529,
  [530] = 530,
  [531] = 104,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 105,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 529,
  [544] = 538,
  [545] = 538,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 529,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 550,
  [555] = 551,
  [556] = 556,
  [557] = 557,
  [558] = 557,
  [559] = 550,
  [560] = 551,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 478,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
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
  [588] = 561,
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
  [602] = 561,
  [603] = 603,
  [604] = 604,
  [605] = 563,
  [606] = 572,
  [607] = 574,
  [608] = 587,
  [609] = 589,
  [610] = 591,
  [611] = 611,
  [612] = 595,
  [613] = 613,
  [614] = 611,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 615,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 478,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 596,
  [630] = 597,
  [631] = 598,
  [632] = 596,
  [633] = 600,
  [634] = 597,
  [635] = 601,
  [636] = 636,
  [637] = 598,
  [638] = 563,
  [639] = 572,
  [640] = 587,
  [641] = 589,
  [642] = 591,
  [643] = 595,
  [644] = 603,
  [645] = 611,
  [646] = 615,
  [647] = 647,
  [648] = 616,
  [649] = 617,
  [650] = 600,
  [651] = 572,
  [652] = 601,
  [653] = 653,
  [654] = 613,
  [655] = 620,
  [656] = 616,
  [657] = 613,
  [658] = 620,
  [659] = 617,
  [660] = 603,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 104,
  [665] = 105,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 668,
  [671] = 671,
  [672] = 672,
  [673] = 671,
  [674] = 663,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 661,
  [681] = 681,
  [682] = 105,
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
  [694] = 694,
  [695] = 695,
  [696] = 668,
  [697] = 690,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 672,
  [702] = 671,
  [703] = 663,
  [704] = 704,
  [705] = 690,
  [706] = 104,
  [707] = 691,
  [708] = 708,
  [709] = 709,
  [710] = 662,
  [711] = 661,
  [712] = 691,
  [713] = 713,
  [714] = 692,
  [715] = 662,
  [716] = 672,
  [717] = 692,
  [718] = 718,
  [719] = 719,
  [720] = 678,
  [721] = 678,
  [722] = 709,
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
  [736] = 726,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 390,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 741,
  [748] = 723,
  [749] = 741,
  [750] = 750,
  [751] = 751,
  [752] = 740,
  [753] = 723,
  [754] = 723,
  [755] = 723,
  [756] = 723,
  [757] = 723,
  [758] = 723,
  [759] = 723,
  [760] = 723,
  [761] = 723,
  [762] = 740,
  [763] = 763,
  [764] = 764,
  [765] = 723,
  [766] = 766,
  [767] = 741,
  [768] = 740,
  [769] = 769,
  [770] = 750,
  [771] = 769,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 746,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 726,
  [780] = 780,
  [781] = 772,
  [782] = 750,
  [783] = 769,
  [784] = 772,
  [785] = 723,
  [786] = 786,
  [787] = 746,
  [788] = 788,
  [789] = 723,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 791,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 791,
  [798] = 723,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(332);
      ADVANCE_MAP(
        '\n', 334,
        '\r', 1,
        '#', 338,
        '(', 499,
        ')', 500,
        '+', 59,
        ',', 501,
        '-', 60,
        ':', 498,
        '=', 356,
        '?', 496,
        'B', 517,
        'J', 519,
        'N', 522,
        'P', 503,
        'T', 507,
        '[', 62,
        '_', 346,
        'a', 148,
        'b', 220,
        'c', 64,
        'd', 112,
        'e', 65,
        'f', 159,
        'g', 71,
        'h', 74,
        'i', 209,
        'k', 123,
        'l', 87,
        'm', 67,
        'n', 231,
        'p', 68,
        'r', 76,
        's', 92,
        't', 69,
        'u', 210,
        'w', 167,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(524);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(334);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 912,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 946,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1044,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 914,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 915,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 6,
        ' ', 6,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1120);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 916,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 1085,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1044,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 918,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1044,
        'w', 1013,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(642);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 1125,
        ' ', 1125,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 18,
        ' ', 18,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 1123,
        ' ', 1123,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 21,
        ' ', 21,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 22,
        ' ', 22,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1044,
        'w', 1013,
        '\t', 26,
        ' ', 26,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1044,
        'w', 1013,
        '\t', 24,
        ' ', 24,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1044,
        'w', 1013,
        '\t', 1121,
        ' ', 1121,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 334,
        '\r', 1,
        '#', 30,
        '(', 499,
        ')', 500,
        '-', 61,
        ':', 498,
        '_', 346,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(337);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(336);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(335);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(333);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ')', 500,
        ',', 501,
        '-', 61,
        ':', 498,
        '[', 62,
        'f', 563,
        'l', 533,
        'p', 531,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '+', 372,
        '-', 373,
        '=', 356,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '-', 374,
        ':', 498,
        'p', 531,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '-', 374,
        ':', 498,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'b', 220,
        'p', 84,
        's', 141,
        't', 236,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'b', 590,
        'p', 531,
        't', 588,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'd', 545,
        'n', 587,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'f', 563,
        'l', 533,
        'p', 531,
        '\t', 364,
        '\f', 364,
        ' ', 364,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        'a', 406,
        'd', 404,
        'g', 375,
        'k', 382,
        'm', 376,
        'r', 377,
        's', 380,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        'a', 608,
        'd', 597,
        'g', 525,
        'k', 547,
        'm', 526,
        'r', 527,
        's', 538,
        '\t', 368,
        '\f', 368,
        ' ', 368,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 53:
      if (lookahead == '\f') SKIP(53);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        '\f', 937,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1044,
        '\t', 54,
        ' ', 54,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 55:
      if (lookahead == '\f') SKIP(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(590);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(358);
      if (lookahead == '>') ADVANCE(497);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(497);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'k') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'k') ADVANCE(173);
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(454);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(470);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(452);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(442);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(485);
      END_STATE();
    case 181:
      if (lookahead == 'k') ADVANCE(487);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 307:
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 308:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 309:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 310:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 311:
      if (lookahead == 'w') ADVANCE(446);
      END_STATE();
    case 312:
      if (lookahead == 'x') ADVANCE(289);
      END_STATE();
    case 313:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 314:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 315:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 317:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 318:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(318);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(638);
      END_STATE();
    case 319:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(319);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 320:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(320);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 321:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(321);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == 'p') ADVANCE(604);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(643);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 322:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(322);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(866);
      END_STATE();
    case 323:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(323);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 324:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(324);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 325:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(325);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(639);
      END_STATE();
    case 326:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(326);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 327:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(327);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 328:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(650);
      END_STATE();
    case 329:
      if (eof) ADVANCE(332);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') SKIP(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 330:
      if (eof) ADVANCE(332);
      ADVANCE_MAP(
        '\n', 334,
        '\r', 1,
        '#', 29,
        'a', 147,
        'c', 153,
        'f', 193,
        'i', 209,
        'p', 256,
        's', 134,
        't', 78,
        'w', 167,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(330);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(524);
      END_STATE();
    case 331:
      if (eof) ADVANCE(332);
      ADVANCE_MAP(
        '\n', 334,
        '\r', 1,
        '#', 29,
        'a', 555,
        'c', 557,
        'f', 570,
        'i', 578,
        'p', 604,
        's', 552,
        't', 532,
        'w', 564,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(331);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '+', 372,
        '-', 373,
        '=', 356,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '-', 374,
        ':', 498,
        'p', 531,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        '-', 374,
        ':', 498,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'b', 590,
        'p', 531,
        't', 588,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'd', 545,
        'n', 587,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        ':', 498,
        'f', 563,
        'l', 533,
        'p', 531,
        '\t', 364,
        '\f', 364,
        ' ', 364,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        'a', 406,
        'd', 404,
        'g', 375,
        'k', 382,
        'm', 376,
        'r', 377,
        's', 380,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 37,
        '#', 338,
        'a', 608,
        'd', 597,
        'g', 525,
        'k', 547,
        'm', 526,
        'r', 527,
        's', 538,
        '\t', 368,
        '\f', 368,
        ' ', 368,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '>') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_with_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_agic_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 't') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 't') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'k') ADVANCE(561);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'g') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'h') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'h') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'h') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'h') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'k') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'k') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'k') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'k') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'l') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'm') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'm') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'm') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 's') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 's') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 's') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 's') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 's') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 't') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'u') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'u') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'v') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'x') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (lookahead == 'y') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 639,
        '\r', 1,
        '#', 652,
        'a', 724,
        'b', 789,
        'c', 658,
        'd', 788,
        'e', 660,
        'f', 765,
        'g', 663,
        'h', 705,
        'i', 778,
        'k', 706,
        'l', 704,
        'm', 661,
        'p', 816,
        'r', 665,
        's', 678,
        't', 662,
        'u', 779,
        'w', 743,
        '\t', 639,
        ' ', 639,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 640,
        '\r', 1,
        '#', 652,
        'a', 725,
        'c', 729,
        'f', 766,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 666,
        'r', 707,
        's', 711,
        't', 668,
        'u', 834,
        'w', 743,
        '\t', 640,
        ' ', 640,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 641,
        '\r', 1,
        '#', 652,
        'a', 829,
        'c', 792,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 667,
        'r', 707,
        's', 718,
        't', 803,
        'u', 834,
        '\t', 641,
        ' ', 641,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 642,
        '\r', 1,
        '#', 652,
        'a', 828,
        'b', 789,
        'c', 659,
        'd', 788,
        'e', 660,
        'f', 793,
        'g', 663,
        'h', 705,
        'k', 706,
        'l', 704,
        'm', 661,
        'r', 665,
        's', 679,
        't', 674,
        'u', 779,
        '\t', 642,
        ' ', 642,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 643,
        '\r', 1,
        '#', 652,
        'a', 555,
        'c', 557,
        'f', 570,
        'i', 578,
        'p', 604,
        's', 552,
        't', 532,
        'w', 564,
        '\t', 643,
        ' ', 643,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 644,
        '\r', 1,
        '#', 652,
        'a', 726,
        'c', 729,
        'f', 766,
        'i', 778,
        'p', 816,
        's', 717,
        't', 669,
        'w', 743,
        '\t', 644,
        ' ', 644,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\f') ADVANCE(645);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 646,
        '\r', 1,
        '#', 652,
        'a', 724,
        'b', 789,
        'c', 658,
        'd', 788,
        'e', 660,
        'f', 765,
        'g', 663,
        'h', 705,
        'i', 778,
        'k', 706,
        'l', 704,
        'm', 661,
        'p', 816,
        'r', 665,
        's', 678,
        't', 662,
        'u', 780,
        'w', 743,
        '\t', 647,
        ' ', 647,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 646,
        '\r', 1,
        '#', 652,
        'a', 724,
        'b', 789,
        'c', 658,
        'd', 788,
        'e', 660,
        'f', 765,
        'g', 663,
        'h', 705,
        'i', 778,
        'k', 706,
        'l', 704,
        'm', 661,
        'p', 816,
        'r', 665,
        's', 678,
        't', 662,
        'u', 787,
        'w', 743,
        '\t', 647,
        ' ', 647,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 651,
        '\r', 1,
        '#', 652,
        'a', 725,
        'c', 729,
        'f', 766,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 666,
        'r', 707,
        's', 711,
        't', 668,
        'u', 834,
        'w', 743,
        '\t', 1119,
        ' ', 1119,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 651,
        '\r', 1,
        '#', 652,
        'a', 725,
        'c', 729,
        'f', 766,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 666,
        'r', 707,
        's', 711,
        't', 668,
        'u', 834,
        'w', 743,
        '\t', 648,
        ' ', 648,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 651,
        '\r', 1,
        '#', 652,
        'a', 725,
        'c', 729,
        'f', 766,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 666,
        'r', 707,
        's', 711,
        't', 668,
        'u', 834,
        'w', 743,
        '\t', 649,
        ' ', 649,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 651,
        '\r', 1,
        '#', 652,
        'a', 725,
        'c', 729,
        'f', 766,
        'h', 670,
        'i', 778,
        'm', 800,
        'p', 666,
        'r', 707,
        's', 711,
        't', 668,
        'u', 834,
        'w', 743,
        '\t', 650,
        ' ', 650,
      );
      if (lookahead != 0) ADVANCE(865);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(654);
      if (lookahead != 0) ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(656);
      if (lookahead != 0) ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'h') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == 's') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 's') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(830);
      if (lookahead == 'o') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead == 'h') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'k') ADVANCE(741);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == 't') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == 't') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'k') ADVANCE(745);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == 'k') ADVANCE(741);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead == 'k') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(801);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(801);
      if (lookahead == 't') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead == 's') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(782);
      if (lookahead == 'u') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      ADVANCE_MAP(
        '\f', 866,
        '#', 868,
        'a', 877,
        'c', 879,
        'f', 887,
        'i', 890,
        'p', 899,
        's', 875,
        't', 869,
        'w', 881,
        '\t', 866,
        ' ', 866,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == '!') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == '#') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'c') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'c') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == 'k') ADVANCE(883);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'g') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'h') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'h') ADVANCE(894);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'h') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'i') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'k') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'l') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'm') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'n') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'o') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'p') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'r') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'r') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'r') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'r') ADVANCE(893);
      if (lookahead == 's') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 's') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 't') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'u') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'v') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'w') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'x') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead == 'y') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__prompt_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 912,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 946,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1045,
        '\t', 913,
        ' ', 913,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 912,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 946,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1052,
        '\t', 913,
        ' ', 913,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 914,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 914,
        ' ', 914,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 915,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 915,
        ' ', 915,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 916,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 1085,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1045,
        '\t', 917,
        ' ', 917,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 916,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 942,
        'k', 979,
        'l', 983,
        'm', 943,
        'p', 1085,
        'r', 948,
        's', 958,
        't', 950,
        'u', 1052,
        '\t', 917,
        ' ', 917,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 918,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1045,
        'w', 1013,
        '\t', 919,
        ' ', 919,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 918,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1052,
        'w', 1013,
        '\t', 919,
        ' ', 919,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 1125,
        ' ', 1125,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 920,
        ' ', 920,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 921,
        ' ', 921,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 923,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1053,
        'w', 1013,
        '\t', 922,
        ' ', 922,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 1123,
        ' ', 1123,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 924,
        ' ', 924,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 925,
        ' ', 925,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 927,
        '\r', 1,
        '#', 932,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1053,
        '\t', 926,
        ' ', 926,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1045,
        'w', 1013,
        '\t', 930,
        ' ', 930,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1052,
        'w', 1013,
        '\t', 931,
        ' ', 931,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1052,
        'w', 1013,
        '\t', 929,
        ' ', 929,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 334,
        '\f', 928,
        '\r', 1,
        '#', 932,
        'a', 998,
        'b', 1055,
        'c', 939,
        'd', 1054,
        'e', 941,
        'f', 1035,
        'g', 947,
        'h', 986,
        'i', 1050,
        'k', 979,
        'l', 983,
        'm', 944,
        'p', 1077,
        'r', 949,
        's', 960,
        't', 945,
        'u', 1052,
        'w', 1013,
        '\t', 1121,
        ' ', 1121,
      );
      if (lookahead != 0) ADVANCE(1117);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead != 0) ADVANCE(933);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(936);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 937,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1045,
        '\t', 938,
        ' ', 938,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 937,
        'a', 1084,
        'b', 1055,
        'c', 940,
        'd', 1054,
        'e', 941,
        'f', 1057,
        'g', 947,
        'h', 986,
        'k', 979,
        'l', 983,
        'm', 944,
        'r', 949,
        's', 959,
        't', 951,
        'u', 1052,
        '\t', 938,
        ' ', 938,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead == 'h') ADVANCE(1065);
      if (lookahead == 'o') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1047);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'h') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'e') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == 'e') ADVANCE(1071);
      if (lookahead == 'u') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'h') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'h') ADVANCE(1008);
      if (lookahead == 'o') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == 'k') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == 'o') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == 'k') ADVANCE(1015);
      if (lookahead == 'o') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead == 'r') ADVANCE(1109);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead == 'r') ADVANCE(1110);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1066);
      if (lookahead == 't') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1066);
      if (lookahead == 't') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1066);
      if (lookahead == 't') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'g') ADVANCE(1005);
      if (lookahead == 's') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1023);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == 'u') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1056);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(994);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(997);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(995);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(996);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1075);
      if (lookahead == 'r') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1031);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1063);
      if (lookahead == 's') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'w') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'x') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(1117);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1117);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1118);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1119,
        '#', 1128,
        'a', 1177,
        'c', 1179,
        'f', 1200,
        'h', 1139,
        'i', 1208,
        'm', 1222,
        'p', 1141,
        'r', 1165,
        's', 1168,
        't', 1136,
        'u', 1242,
        'w', 1188,
        '\t', 1119,
        ' ', 1119,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1122,
        '#', 1128,
        'a', 1176,
        'b', 1216,
        'c', 1129,
        'd', 1215,
        'e', 1131,
        'f', 1199,
        'g', 1135,
        'h', 1163,
        'i', 1208,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'p', 1235,
        'r', 1137,
        's', 1147,
        't', 1133,
        'u', 1209,
        'w', 1188,
        '\t', 1121,
        ' ', 1121,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1122,
        '#', 1128,
        'a', 1176,
        'b', 1216,
        'c', 1129,
        'd', 1215,
        'e', 1131,
        'f', 1199,
        'g', 1135,
        'h', 1163,
        'i', 1208,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'p', 1235,
        'r', 1137,
        's', 1147,
        't', 1133,
        'u', 1210,
        'w', 1188,
        '\t', 1121,
        ' ', 1121,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1124,
        '#', 1128,
        'a', 1239,
        'b', 1216,
        'c', 1130,
        'd', 1215,
        'e', 1131,
        'f', 1220,
        'g', 1135,
        'h', 1163,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'r', 1137,
        's', 1148,
        't', 1140,
        'u', 1209,
        '\t', 1123,
        ' ', 1123,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1124,
        '#', 1128,
        'a', 1239,
        'b', 1216,
        'c', 1130,
        'd', 1215,
        'e', 1131,
        'f', 1220,
        'g', 1135,
        'h', 1163,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'r', 1137,
        's', 1148,
        't', 1140,
        'u', 1214,
        '\t', 1123,
        ' ', 1123,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1126,
        '#', 1128,
        'a', 1176,
        'b', 1216,
        'c', 1129,
        'd', 1215,
        'e', 1131,
        'f', 1199,
        'g', 1135,
        'h', 1163,
        'i', 1208,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'p', 1235,
        'r', 1137,
        's', 1147,
        't', 1133,
        'u', 1209,
        'w', 1188,
        '\t', 1125,
        ' ', 1125,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1126,
        '#', 1128,
        'a', 1176,
        'b', 1216,
        'c', 1129,
        'd', 1215,
        'e', 1131,
        'f', 1199,
        'g', 1135,
        'h', 1163,
        'i', 1208,
        'k', 1164,
        'l', 1162,
        'm', 1132,
        'p', 1235,
        'r', 1137,
        's', 1147,
        't', 1133,
        'u', 1214,
        'w', 1188,
        '\t', 1125,
        ' ', 1125,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'h') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'h') ADVANCE(1185);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'o') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1207);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'u') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1187);
      if (lookahead == 'h') ADVANCE(1185);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1241);
      if (lookahead == 'r') ADVANCE(1219);
      if (lookahead == 's') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1142);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'k') ADVANCE(1183);
      if (lookahead == 'o') ADVANCE(1234);
      if (lookahead == 't') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1142);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'o') ADVANCE(1234);
      if (lookahead == 't') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == 't') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'k') ADVANCE(1191);
      if (lookahead == 't') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1220);
      if (lookahead == 't') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1220);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1184);
      if (lookahead == 's') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1184);
      if (lookahead == 's') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == 'u') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == 's') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == 'o') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1172);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1174);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1173);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1264);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead == 's') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == 'r') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1219);
      if (lookahead == 's') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 330},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 319},
  [12] = {.lex_state = 319},
  [13] = {.lex_state = 319},
  [14] = {.lex_state = 323},
  [15] = {.lex_state = 323},
  [16] = {.lex_state = 323},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 325},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 325},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 325},
  [26] = {.lex_state = 327},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 327},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 329},
  [33] = {.lex_state = 326},
  [34] = {.lex_state = 326},
  [35] = {.lex_state = 329},
  [36] = {.lex_state = 325},
  [37] = {.lex_state = 326},
  [38] = {.lex_state = 325},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 327},
  [41] = {.lex_state = 319},
  [42] = {.lex_state = 326},
  [43] = {.lex_state = 326},
  [44] = {.lex_state = 319},
  [45] = {.lex_state = 325},
  [46] = {.lex_state = 325},
  [47] = {.lex_state = 325},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 319},
  [50] = {.lex_state = 326},
  [51] = {.lex_state = 326},
  [52] = {.lex_state = 329},
  [53] = {.lex_state = 329},
  [54] = {.lex_state = 319},
  [55] = {.lex_state = 319},
  [56] = {.lex_state = 319},
  [57] = {.lex_state = 319},
  [58] = {.lex_state = 319},
  [59] = {.lex_state = 319},
  [60] = {.lex_state = 319},
  [61] = {.lex_state = 319},
  [62] = {.lex_state = 319},
  [63] = {.lex_state = 319},
  [64] = {.lex_state = 319},
  [65] = {.lex_state = 319},
  [66] = {.lex_state = 319},
  [67] = {.lex_state = 319},
  [68] = {.lex_state = 319},
  [69] = {.lex_state = 319},
  [70] = {.lex_state = 319},
  [71] = {.lex_state = 319},
  [72] = {.lex_state = 319},
  [73] = {.lex_state = 319},
  [74] = {.lex_state = 319},
  [75] = {.lex_state = 319},
  [76] = {.lex_state = 319},
  [77] = {.lex_state = 326},
  [78] = {.lex_state = 319},
  [79] = {.lex_state = 319},
  [80] = {.lex_state = 319},
  [81] = {.lex_state = 319},
  [82] = {.lex_state = 319},
  [83] = {.lex_state = 319},
  [84] = {.lex_state = 319},
  [85] = {.lex_state = 319},
  [86] = {.lex_state = 319},
  [87] = {.lex_state = 319},
  [88] = {.lex_state = 319},
  [89] = {.lex_state = 319},
  [90] = {.lex_state = 319},
  [91] = {.lex_state = 319},
  [92] = {.lex_state = 319},
  [93] = {.lex_state = 319},
  [94] = {.lex_state = 319},
  [95] = {.lex_state = 319},
  [96] = {.lex_state = 319},
  [97] = {.lex_state = 319},
  [98] = {.lex_state = 319},
  [99] = {.lex_state = 319},
  [100] = {.lex_state = 319},
  [101] = {.lex_state = 319},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 319},
  [104] = {.lex_state = 319},
  [105] = {.lex_state = 319},
  [106] = {.lex_state = 319},
  [107] = {.lex_state = 323},
  [108] = {.lex_state = 323},
  [109] = {.lex_state = 323},
  [110] = {.lex_state = 323},
  [111] = {.lex_state = 323},
  [112] = {.lex_state = 323},
  [113] = {.lex_state = 323},
  [114] = {.lex_state = 323},
  [115] = {.lex_state = 323},
  [116] = {.lex_state = 323},
  [117] = {.lex_state = 323},
  [118] = {.lex_state = 323},
  [119] = {.lex_state = 323},
  [120] = {.lex_state = 323},
  [121] = {.lex_state = 323},
  [122] = {.lex_state = 323},
  [123] = {.lex_state = 323},
  [124] = {.lex_state = 323},
  [125] = {.lex_state = 323},
  [126] = {.lex_state = 323},
  [127] = {.lex_state = 323},
  [128] = {.lex_state = 323},
  [129] = {.lex_state = 323},
  [130] = {.lex_state = 323},
  [131] = {.lex_state = 323},
  [132] = {.lex_state = 323},
  [133] = {.lex_state = 323},
  [134] = {.lex_state = 323},
  [135] = {.lex_state = 323},
  [136] = {.lex_state = 323},
  [137] = {.lex_state = 323},
  [138] = {.lex_state = 323},
  [139] = {.lex_state = 323},
  [140] = {.lex_state = 323},
  [141] = {.lex_state = 323},
  [142] = {.lex_state = 323},
  [143] = {.lex_state = 323},
  [144] = {.lex_state = 323},
  [145] = {.lex_state = 323},
  [146] = {.lex_state = 323},
  [147] = {.lex_state = 323},
  [148] = {.lex_state = 323},
  [149] = {.lex_state = 323},
  [150] = {.lex_state = 323},
  [151] = {.lex_state = 323},
  [152] = {.lex_state = 323},
  [153] = {.lex_state = 323},
  [154] = {.lex_state = 323},
  [155] = {.lex_state = 323},
  [156] = {.lex_state = 323},
  [157] = {.lex_state = 323},
  [158] = {.lex_state = 323},
  [159] = {.lex_state = 323},
  [160] = {.lex_state = 320},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 320},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 320},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 320},
  [170] = {.lex_state = 320},
  [171] = {.lex_state = 320},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 320},
  [174] = {.lex_state = 320},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 320},
  [192] = {.lex_state = 320},
  [193] = {.lex_state = 320},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 20},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 320},
  [200] = {.lex_state = 328},
  [201] = {.lex_state = 320},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 328},
  [204] = {.lex_state = 320},
  [205] = {.lex_state = 48},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 320},
  [209] = {.lex_state = 48},
  [210] = {.lex_state = 48},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 320},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 330},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
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
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 320},
  [244] = {.lex_state = 320},
  [245] = {.lex_state = 320},
  [246] = {.lex_state = 320},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 320},
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
  [260] = {.lex_state = 320},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 320},
  [265] = {.lex_state = 330},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 328},
  [275] = {.lex_state = 320},
  [276] = {.lex_state = 328},
  [277] = {.lex_state = 320},
  [278] = {.lex_state = 320},
  [279] = {.lex_state = 320},
  [280] = {.lex_state = 320},
  [281] = {.lex_state = 320},
  [282] = {.lex_state = 320},
  [283] = {.lex_state = 320},
  [284] = {.lex_state = 320},
  [285] = {.lex_state = 320},
  [286] = {.lex_state = 320},
  [287] = {.lex_state = 320},
  [288] = {.lex_state = 49},
  [289] = {.lex_state = 320},
  [290] = {.lex_state = 320},
  [291] = {.lex_state = 320},
  [292] = {.lex_state = 320},
  [293] = {.lex_state = 320},
  [294] = {.lex_state = 320},
  [295] = {.lex_state = 320},
  [296] = {.lex_state = 320},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 49},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 321},
  [302] = {.lex_state = 321},
  [303] = {.lex_state = 321},
  [304] = {.lex_state = 321},
  [305] = {.lex_state = 321},
  [306] = {.lex_state = 331},
  [307] = {.lex_state = 331},
  [308] = {.lex_state = 322},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 324},
  [311] = {.lex_state = 322},
  [312] = {.lex_state = 322},
  [313] = {.lex_state = 324},
  [314] = {.lex_state = 330},
  [315] = {.lex_state = 321},
  [316] = {.lex_state = 330},
  [317] = {.lex_state = 330},
  [318] = {.lex_state = 330},
  [319] = {.lex_state = 330},
  [320] = {.lex_state = 330},
  [321] = {.lex_state = 330},
  [322] = {.lex_state = 330},
  [323] = {.lex_state = 330},
  [324] = {.lex_state = 330},
  [325] = {.lex_state = 330},
  [326] = {.lex_state = 330},
  [327] = {.lex_state = 321},
  [328] = {.lex_state = 330},
  [329] = {.lex_state = 330},
  [330] = {.lex_state = 330},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 330},
  [334] = {.lex_state = 330},
  [335] = {.lex_state = 330},
  [336] = {.lex_state = 321},
  [337] = {.lex_state = 330},
  [338] = {.lex_state = 330},
  [339] = {.lex_state = 330},
  [340] = {.lex_state = 330},
  [341] = {.lex_state = 330},
  [342] = {.lex_state = 321},
  [343] = {.lex_state = 331},
  [344] = {.lex_state = 324},
  [345] = {.lex_state = 331},
  [346] = {.lex_state = 322},
  [347] = {.lex_state = 322},
  [348] = {.lex_state = 322},
  [349] = {.lex_state = 331},
  [350] = {.lex_state = 331},
  [351] = {.lex_state = 322},
  [352] = {.lex_state = 330},
  [353] = {.lex_state = 330},
  [354] = {.lex_state = 330},
  [355] = {.lex_state = 330},
  [356] = {.lex_state = 330},
  [357] = {.lex_state = 330},
  [358] = {.lex_state = 330},
  [359] = {.lex_state = 330},
  [360] = {.lex_state = 330},
  [361] = {.lex_state = 330},
  [362] = {.lex_state = 330},
  [363] = {.lex_state = 330},
  [364] = {.lex_state = 330},
  [365] = {.lex_state = 330},
  [366] = {.lex_state = 330},
  [367] = {.lex_state = 330},
  [368] = {.lex_state = 330},
  [369] = {.lex_state = 330},
  [370] = {.lex_state = 330},
  [371] = {.lex_state = 330},
  [372] = {.lex_state = 330},
  [373] = {.lex_state = 330},
  [374] = {.lex_state = 330},
  [375] = {.lex_state = 330},
  [376] = {.lex_state = 330},
  [377] = {.lex_state = 330},
  [378] = {.lex_state = 330},
  [379] = {.lex_state = 330},
  [380] = {.lex_state = 330},
  [381] = {.lex_state = 330},
  [382] = {.lex_state = 330},
  [383] = {.lex_state = 330},
  [384] = {.lex_state = 330},
  [385] = {.lex_state = 330},
  [386] = {.lex_state = 330},
  [387] = {.lex_state = 330},
  [388] = {.lex_state = 330},
  [389] = {.lex_state = 330},
  [390] = {.lex_state = 48},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 45},
  [397] = {.lex_state = 45},
  [398] = {.lex_state = 43},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 45},
  [404] = {.lex_state = 45},
  [405] = {.lex_state = 43},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 45},
  [412] = {.lex_state = 45},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 43},
  [415] = {.lex_state = 40},
  [416] = {.lex_state = 40},
  [417] = {.lex_state = 40},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 57},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 57},
  [422] = {.lex_state = 38},
  [423] = {.lex_state = 38},
  [424] = {.lex_state = 57},
  [425] = {.lex_state = 38},
  [426] = {.lex_state = 38},
  [427] = {.lex_state = 42},
  [428] = {.lex_state = 41},
  [429] = {.lex_state = 50},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 44},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 41},
  [434] = {.lex_state = 50},
  [435] = {.lex_state = 50},
  [436] = {.lex_state = 42},
  [437] = {.lex_state = 50},
  [438] = {.lex_state = 27},
  [439] = {.lex_state = 50},
  [440] = {.lex_state = 50},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 41},
  [443] = {.lex_state = 50},
  [444] = {.lex_state = 41},
  [445] = {.lex_state = 41},
  [446] = {.lex_state = 50},
  [447] = {.lex_state = 50},
  [448] = {.lex_state = 38},
  [449] = {.lex_state = 50},
  [450] = {.lex_state = 50},
  [451] = {.lex_state = 50},
  [452] = {.lex_state = 50},
  [453] = {.lex_state = 50},
  [454] = {.lex_state = 50},
  [455] = {.lex_state = 50},
  [456] = {.lex_state = 50},
  [457] = {.lex_state = 42},
  [458] = {.lex_state = 50},
  [459] = {.lex_state = 38},
  [460] = {.lex_state = 50},
  [461] = {.lex_state = 44},
  [462] = {.lex_state = 41},
  [463] = {.lex_state = 41},
  [464] = {.lex_state = 56},
  [465] = {.lex_state = 56},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 56},
  [468] = {.lex_state = 56},
  [469] = {.lex_state = 39},
  [470] = {.lex_state = 56},
  [471] = {.lex_state = 38},
  [472] = {.lex_state = 27},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 38},
  [475] = {.lex_state = 38},
  [476] = {.lex_state = 38},
  [477] = {.lex_state = 38},
  [478] = {.lex_state = 39},
  [479] = {.lex_state = 27},
  [480] = {.lex_state = 46},
  [481] = {.lex_state = 58},
  [482] = {.lex_state = 42},
  [483] = {.lex_state = 27},
  [484] = {.lex_state = 42},
  [485] = {.lex_state = 27},
  [486] = {.lex_state = 42},
  [487] = {.lex_state = 42},
  [488] = {.lex_state = 42},
  [489] = {.lex_state = 42},
  [490] = {.lex_state = 11},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 42},
  [493] = {.lex_state = 42},
  [494] = {.lex_state = 42},
  [495] = {.lex_state = 50},
  [496] = {.lex_state = 50},
  [497] = {.lex_state = 42},
  [498] = {.lex_state = 16},
  [499] = {.lex_state = 50},
  [500] = {.lex_state = 27},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 27},
  [504] = {.lex_state = 51},
  [505] = {.lex_state = 11},
  [506] = {.lex_state = 58},
  [507] = {.lex_state = 50},
  [508] = {.lex_state = 27},
  [509] = {.lex_state = 27},
  [510] = {.lex_state = 27},
  [511] = {.lex_state = 42},
  [512] = {.lex_state = 42},
  [513] = {.lex_state = 42},
  [514] = {.lex_state = 42},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 42},
  [517] = {.lex_state = 42},
  [518] = {.lex_state = 27},
  [519] = {.lex_state = 27},
  [520] = {.lex_state = 27},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 51},
  [523] = {.lex_state = 51},
  [524] = {.lex_state = 27},
  [525] = {.lex_state = 46},
  [526] = {.lex_state = 27},
  [527] = {.lex_state = 46},
  [528] = {.lex_state = 27},
  [529] = {.lex_state = 47},
  [530] = {.lex_state = 47},
  [531] = {.lex_state = 27},
  [532] = {.lex_state = 38},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 47},
  [535] = {.lex_state = 27},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 42},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 27},
  [541] = {.lex_state = 38},
  [542] = {.lex_state = 38},
  [543] = {.lex_state = 47},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 38},
  [547] = {.lex_state = 38},
  [548] = {.lex_state = 50},
  [549] = {.lex_state = 47},
  [550] = {.lex_state = 52},
  [551] = {.lex_state = 52},
  [552] = {.lex_state = 38},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 52},
  [555] = {.lex_state = 52},
  [556] = {.lex_state = 38},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 52},
  [560] = {.lex_state = 52},
  [561] = {.lex_state = 38},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 38},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 38},
  [566] = {.lex_state = 38},
  [567] = {.lex_state = 317},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 27},
  [572] = {.lex_state = 38},
  [573] = {.lex_state = 27},
  [574] = {.lex_state = 38},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 38},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 38},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 38},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 38},
  [587] = {.lex_state = 38},
  [588] = {.lex_state = 38},
  [589] = {.lex_state = 38},
  [590] = {.lex_state = 38},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 38},
  [593] = {.lex_state = 38},
  [594] = {.lex_state = 38},
  [595] = {.lex_state = 38},
  [596] = {.lex_state = 38},
  [597] = {.lex_state = 38},
  [598] = {.lex_state = 0},
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
  [609] = {.lex_state = 38},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 38},
  [612] = {.lex_state = 38},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 38},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 38},
  [617] = {.lex_state = 38},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 38},
  [620] = {.lex_state = 38},
  [621] = {.lex_state = 330},
  [622] = {.lex_state = 38},
  [623] = {.lex_state = 50},
  [624] = {.lex_state = 27},
  [625] = {.lex_state = 38},
  [626] = {.lex_state = 38},
  [627] = {.lex_state = 38},
  [628] = {.lex_state = 38},
  [629] = {.lex_state = 38},
  [630] = {.lex_state = 38},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 38},
  [633] = {.lex_state = 38},
  [634] = {.lex_state = 38},
  [635] = {.lex_state = 38},
  [636] = {.lex_state = 317},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 38},
  [639] = {.lex_state = 38},
  [640] = {.lex_state = 38},
  [641] = {.lex_state = 38},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 38},
  [644] = {.lex_state = 38},
  [645] = {.lex_state = 38},
  [646] = {.lex_state = 38},
  [647] = {.lex_state = 38},
  [648] = {.lex_state = 38},
  [649] = {.lex_state = 38},
  [650] = {.lex_state = 38},
  [651] = {.lex_state = 38},
  [652] = {.lex_state = 38},
  [653] = {.lex_state = 38},
  [654] = {.lex_state = 38},
  [655] = {.lex_state = 38},
  [656] = {.lex_state = 38},
  [657] = {.lex_state = 38},
  [658] = {.lex_state = 38},
  [659] = {.lex_state = 38},
  [660] = {.lex_state = 38},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 27},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 11},
  [665] = {.lex_state = 11},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 318},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 55},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 55},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 318},
  [677] = {.lex_state = 38},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 16},
  [683] = {.lex_state = 38},
  [684] = {.lex_state = 38},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 38},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 318},
  [689] = {.lex_state = 318},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 55},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 38},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 38},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 55},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 318},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 16},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 318},
  [709] = {.lex_state = 317},
  [710] = {.lex_state = 27},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 27},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 317},
  [723] = {.lex_state = 38},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 38},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 317},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 38},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 38},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 38},
  [741] = {.lex_state = 38},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 317},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 38},
  [748] = {.lex_state = 38},
  [749] = {.lex_state = 38},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 38},
  [753] = {.lex_state = 38},
  [754] = {.lex_state = 38},
  [755] = {.lex_state = 38},
  [756] = {.lex_state = 38},
  [757] = {.lex_state = 38},
  [758] = {.lex_state = 38},
  [759] = {.lex_state = 38},
  [760] = {.lex_state = 38},
  [761] = {.lex_state = 38},
  [762] = {.lex_state = 38},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 38},
  [765] = {.lex_state = 38},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 38},
  [768] = {.lex_state = 38},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 38},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 38},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 38},
  [789] = {.lex_state = 38},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 42},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 38},
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
    [anon_sym_Pack] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_hands] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
    [anon_sym_recall] = ACTIONS(1),
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
    [sym_source_file] = STATE(790),
    [sym_item] = STATE(265),
    [sym__trivia] = STATE(265),
    [sym_with] = STATE(356),
    [sym_struct] = STATE(356),
    [sym_psyche] = STATE(356),
    [sym_skill] = STATE(356),
    [sym_service] = STATE(356),
    [sym_prompt] = STATE(356),
    [sym_task] = STATE(356),
    [sym_chore] = STATE(356),
    [sym_instruct] = STATE(356),
    [sym_context] = STATE(356),
    [sym_agic] = STATE(356),
    [sym_flow] = STATE(356),
    [aux_sym_source_file_repeat1] = STATE(265),
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
    [sym_flow_body] = STATE(355),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [3] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(387),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [4] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(353),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [5] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(354),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [6] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(366),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [7] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(384),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [8] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(362),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [9] = {
    [sym__trivia] = STATE(10),
    [sym_flow_body] = STATE(352),
    [sym_statements] = STATE(314),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(39),
    [sym__pass_statement] = STATE(314),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(10),
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
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [10] = {
    [sym__trivia] = STATE(165),
    [sym_statements] = STATE(326),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym_directive] = STATE(161),
    [sym_directive_key] = STATE(558),
    [sym__directives] = STATE(31),
    [sym__pass_statement] = STATE(326),
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_cap_body_repeat2] = STATE(165),
    [sym_blank_line] = ACTIONS(69),
    [sym_parent_doc_line] = ACTIONS(69),
    [sym_doc_line] = ACTIONS(69),
    [sym_comment_line] = ACTIONS(69),
    [anon_sym_models] = ACTIONS(35),
    [anon_sym_tools] = ACTIONS(35),
    [anon_sym_skills] = ACTIONS(35),
    [anon_sym_services] = ACTIONS(35),
    [anon_sym_psyches] = ACTIONS(35),
    [anon_sym_hands] = ACTIONS(35),
    [anon_sym_handoffs] = ACTIONS(35),
    [anon_sym_recall] = ACTIONS(35),
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
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_unfold] = ACTIONS(65),
    [anon_sym_each] = ACTIONS(65),
    [anon_sym_fold] = ACTIONS(65),
    [anon_sym_sort] = ACTIONS(65),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_tail] = ACTIONS(65),
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [11] = {
    [sym__trivia] = STATE(13),
    [sym__flow_statement] = STATE(13),
    [sym__flow_operation] = STATE(13),
    [sym_let_statement] = STATE(13),
    [sym_run_statement] = STATE(13),
    [sym_implicit_run_statement] = STATE(13),
    [sym__implicit_run_text_body_line] = STATE(20),
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
    [sym__flow_reserved_word] = STATE(499),
    [aux_sym_statements_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_blank_line] = ACTIONS(73),
    [sym_parent_doc_line] = ACTIONS(73),
    [sym_doc_line] = ACTIONS(73),
    [sym_comment_line] = ACTIONS(73),
    [sym_with_keyword] = ACTIONS(75),
    [sym_struct_keyword] = ACTIONS(75),
    [sym_psyche_keyword] = ACTIONS(75),
    [sym_skill_keyword] = ACTIONS(75),
    [sym_service_keyword] = ACTIONS(75),
    [sym_prompt_keyword] = ACTIONS(75),
    [sym_context_keyword] = ACTIONS(75),
    [sym_instruct_keyword] = ACTIONS(75),
    [sym_agic_keyword] = ACTIONS(75),
    [sym_task_keyword] = ACTIONS(75),
    [sym_chore_keyword] = ACTIONS(75),
    [sym_flow_keyword] = ACTIONS(75),
    [sym_flow_run_keyword] = ACTIONS(77),
    [sym_flow_let_keyword] = ACTIONS(79),
    [sym_flow_seek_keyword] = ACTIONS(81),
    [sym_flow_ask_keyword] = ACTIONS(83),
    [sym_flow_scatter_keyword] = ACTIONS(85),
    [sym_flow_storm_keyword] = ACTIONS(87),
    [sym_flow_gather_keyword] = ACTIONS(89),
    [sym_flow_settle_keyword] = ACTIONS(91),
    [sym_flow_map_keyword] = ACTIONS(93),
    [sym_flow_keep_keyword] = ACTIONS(95),
    [sym_flow_drop_keyword] = ACTIONS(97),
    [sym_flow_rank_keyword] = ACTIONS(99),
    [sym_flow_repeat_keyword] = ACTIONS(101),
    [sym_flow_until_keyword] = ACTIONS(75),
    [sym_flow_top_keyword] = ACTIONS(103),
    [sym_flow_bottom_keyword] = ACTIONS(103),
    [sym_flow_think_keyword] = ACTIONS(103),
    [sym_flow_use_keyword] = ACTIONS(103),
    [sym_thunk_keyword] = ACTIONS(103),
    [anon_sym_call] = ACTIONS(103),
    [anon_sym_do] = ACTIONS(103),
    [anon_sym_unfold] = ACTIONS(103),
    [anon_sym_each] = ACTIONS(103),
    [anon_sym_fold] = ACTIONS(103),
    [anon_sym_sort] = ACTIONS(103),
    [anon_sym_head] = ACTIONS(103),
    [anon_sym_tail] = ACTIONS(103),
    [sym__implicit_run_raw_text] = ACTIONS(105),
  },
  [12] = {
    [sym__trivia] = STATE(11),
    [sym__flow_statement] = STATE(11),
    [sym__flow_operation] = STATE(11),
    [sym_let_statement] = STATE(11),
    [sym_run_statement] = STATE(11),
    [sym_implicit_run_statement] = STATE(11),
    [sym__implicit_run_text_body_line] = STATE(20),
    [sym_seek_statement] = STATE(11),
    [sym_ask_statement] = STATE(11),
    [sym_scatter_statement] = STATE(11),
    [sym_storm_statement] = STATE(11),
    [sym_gather_statement] = STATE(11),
    [sym_settle_statement] = STATE(11),
    [sym_map_statement] = STATE(11),
    [sym_keep_statement] = STATE(11),
    [sym_drop_statement] = STATE(11),
    [sym_rank_statement] = STATE(11),
    [sym_repeat_statement] = STATE(11),
    [sym_invalid_flow_reserved_statement] = STATE(11),
    [sym__flow_reserved_word] = STATE(499),
    [aux_sym_statements_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_blank_line] = ACTIONS(109),
    [sym_parent_doc_line] = ACTIONS(109),
    [sym_doc_line] = ACTIONS(109),
    [sym_comment_line] = ACTIONS(109),
    [sym_with_keyword] = ACTIONS(111),
    [sym_struct_keyword] = ACTIONS(111),
    [sym_psyche_keyword] = ACTIONS(111),
    [sym_skill_keyword] = ACTIONS(111),
    [sym_service_keyword] = ACTIONS(111),
    [sym_prompt_keyword] = ACTIONS(111),
    [sym_context_keyword] = ACTIONS(111),
    [sym_instruct_keyword] = ACTIONS(111),
    [sym_agic_keyword] = ACTIONS(111),
    [sym_task_keyword] = ACTIONS(111),
    [sym_chore_keyword] = ACTIONS(111),
    [sym_flow_keyword] = ACTIONS(111),
    [sym_flow_run_keyword] = ACTIONS(77),
    [sym_flow_let_keyword] = ACTIONS(79),
    [sym_flow_seek_keyword] = ACTIONS(81),
    [sym_flow_ask_keyword] = ACTIONS(83),
    [sym_flow_scatter_keyword] = ACTIONS(85),
    [sym_flow_storm_keyword] = ACTIONS(87),
    [sym_flow_gather_keyword] = ACTIONS(89),
    [sym_flow_settle_keyword] = ACTIONS(91),
    [sym_flow_map_keyword] = ACTIONS(93),
    [sym_flow_keep_keyword] = ACTIONS(95),
    [sym_flow_drop_keyword] = ACTIONS(97),
    [sym_flow_rank_keyword] = ACTIONS(99),
    [sym_flow_repeat_keyword] = ACTIONS(101),
    [sym_flow_until_keyword] = ACTIONS(111),
    [sym_flow_top_keyword] = ACTIONS(103),
    [sym_flow_bottom_keyword] = ACTIONS(103),
    [sym_flow_think_keyword] = ACTIONS(103),
    [sym_flow_use_keyword] = ACTIONS(103),
    [sym_thunk_keyword] = ACTIONS(103),
    [anon_sym_call] = ACTIONS(103),
    [anon_sym_do] = ACTIONS(103),
    [anon_sym_unfold] = ACTIONS(103),
    [anon_sym_each] = ACTIONS(103),
    [anon_sym_fold] = ACTIONS(103),
    [anon_sym_sort] = ACTIONS(103),
    [anon_sym_head] = ACTIONS(103),
    [anon_sym_tail] = ACTIONS(103),
    [sym__implicit_run_raw_text] = ACTIONS(105),
  },
  [13] = {
    [sym__trivia] = STATE(13),
    [sym__flow_statement] = STATE(13),
    [sym__flow_operation] = STATE(13),
    [sym_let_statement] = STATE(13),
    [sym_run_statement] = STATE(13),
    [sym_implicit_run_statement] = STATE(13),
    [sym__implicit_run_text_body_line] = STATE(20),
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
    [sym__flow_reserved_word] = STATE(499),
    [aux_sym_statements_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_blank_line] = ACTIONS(115),
    [sym_parent_doc_line] = ACTIONS(115),
    [sym_doc_line] = ACTIONS(115),
    [sym_comment_line] = ACTIONS(115),
    [sym_with_keyword] = ACTIONS(118),
    [sym_struct_keyword] = ACTIONS(118),
    [sym_psyche_keyword] = ACTIONS(118),
    [sym_skill_keyword] = ACTIONS(118),
    [sym_service_keyword] = ACTIONS(118),
    [sym_prompt_keyword] = ACTIONS(118),
    [sym_context_keyword] = ACTIONS(118),
    [sym_instruct_keyword] = ACTIONS(118),
    [sym_agic_keyword] = ACTIONS(118),
    [sym_task_keyword] = ACTIONS(118),
    [sym_chore_keyword] = ACTIONS(118),
    [sym_flow_keyword] = ACTIONS(118),
    [sym_flow_run_keyword] = ACTIONS(120),
    [sym_flow_let_keyword] = ACTIONS(123),
    [sym_flow_seek_keyword] = ACTIONS(126),
    [sym_flow_ask_keyword] = ACTIONS(129),
    [sym_flow_scatter_keyword] = ACTIONS(132),
    [sym_flow_storm_keyword] = ACTIONS(135),
    [sym_flow_gather_keyword] = ACTIONS(138),
    [sym_flow_settle_keyword] = ACTIONS(141),
    [sym_flow_map_keyword] = ACTIONS(144),
    [sym_flow_keep_keyword] = ACTIONS(147),
    [sym_flow_drop_keyword] = ACTIONS(150),
    [sym_flow_rank_keyword] = ACTIONS(153),
    [sym_flow_repeat_keyword] = ACTIONS(156),
    [sym_flow_until_keyword] = ACTIONS(118),
    [sym_flow_top_keyword] = ACTIONS(159),
    [sym_flow_bottom_keyword] = ACTIONS(159),
    [sym_flow_think_keyword] = ACTIONS(159),
    [sym_flow_use_keyword] = ACTIONS(159),
    [sym_thunk_keyword] = ACTIONS(159),
    [anon_sym_call] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_unfold] = ACTIONS(159),
    [anon_sym_each] = ACTIONS(159),
    [anon_sym_fold] = ACTIONS(159),
    [anon_sym_sort] = ACTIONS(159),
    [anon_sym_head] = ACTIONS(159),
    [anon_sym_tail] = ACTIONS(159),
    [sym__implicit_run_raw_text] = ACTIONS(162),
  },
  [14] = {
    [sym__trivia] = STATE(16),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_statements_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_blank_line] = ACTIONS(165),
    [sym_parent_doc_line] = ACTIONS(165),
    [sym_doc_line] = ACTIONS(165),
    [sym_comment_line] = ACTIONS(165),
    [sym_with_keyword] = ACTIONS(111),
    [sym_struct_keyword] = ACTIONS(111),
    [sym_psyche_keyword] = ACTIONS(111),
    [sym_skill_keyword] = ACTIONS(111),
    [sym_service_keyword] = ACTIONS(111),
    [sym_prompt_keyword] = ACTIONS(111),
    [sym_context_keyword] = ACTIONS(111),
    [sym_instruct_keyword] = ACTIONS(111),
    [sym_agic_keyword] = ACTIONS(111),
    [sym_task_keyword] = ACTIONS(111),
    [sym_chore_keyword] = ACTIONS(111),
    [sym_flow_keyword] = ACTIONS(111),
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
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
  [15] = {
    [sym__trivia] = STATE(15),
    [sym__flow_statement] = STATE(15),
    [sym__flow_operation] = STATE(15),
    [sym_let_statement] = STATE(15),
    [sym_run_statement] = STATE(15),
    [sym_implicit_run_statement] = STATE(15),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_statements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_blank_line] = ACTIONS(167),
    [sym_parent_doc_line] = ACTIONS(167),
    [sym_doc_line] = ACTIONS(167),
    [sym_comment_line] = ACTIONS(167),
    [sym_with_keyword] = ACTIONS(118),
    [sym_struct_keyword] = ACTIONS(118),
    [sym_psyche_keyword] = ACTIONS(118),
    [sym_skill_keyword] = ACTIONS(118),
    [sym_service_keyword] = ACTIONS(118),
    [sym_prompt_keyword] = ACTIONS(118),
    [sym_context_keyword] = ACTIONS(118),
    [sym_instruct_keyword] = ACTIONS(118),
    [sym_agic_keyword] = ACTIONS(118),
    [sym_task_keyword] = ACTIONS(118),
    [sym_chore_keyword] = ACTIONS(118),
    [sym_flow_keyword] = ACTIONS(118),
    [sym_flow_run_keyword] = ACTIONS(170),
    [sym_flow_let_keyword] = ACTIONS(173),
    [sym_flow_seek_keyword] = ACTIONS(176),
    [sym_flow_ask_keyword] = ACTIONS(179),
    [sym_flow_scatter_keyword] = ACTIONS(182),
    [sym_flow_storm_keyword] = ACTIONS(185),
    [sym_flow_gather_keyword] = ACTIONS(188),
    [sym_flow_settle_keyword] = ACTIONS(191),
    [sym_flow_map_keyword] = ACTIONS(194),
    [sym_flow_keep_keyword] = ACTIONS(197),
    [sym_flow_drop_keyword] = ACTIONS(200),
    [sym_flow_rank_keyword] = ACTIONS(203),
    [sym_flow_repeat_keyword] = ACTIONS(206),
    [sym_flow_top_keyword] = ACTIONS(209),
    [sym_flow_bottom_keyword] = ACTIONS(209),
    [sym_flow_think_keyword] = ACTIONS(209),
    [sym_flow_use_keyword] = ACTIONS(209),
    [sym_thunk_keyword] = ACTIONS(209),
    [anon_sym_call] = ACTIONS(209),
    [anon_sym_do] = ACTIONS(209),
    [anon_sym_unfold] = ACTIONS(209),
    [anon_sym_each] = ACTIONS(209),
    [anon_sym_fold] = ACTIONS(209),
    [anon_sym_sort] = ACTIONS(209),
    [anon_sym_head] = ACTIONS(209),
    [anon_sym_tail] = ACTIONS(209),
    [sym__implicit_run_raw_text] = ACTIONS(212),
  },
  [16] = {
    [sym__trivia] = STATE(15),
    [sym__flow_statement] = STATE(15),
    [sym__flow_operation] = STATE(15),
    [sym_let_statement] = STATE(15),
    [sym_run_statement] = STATE(15),
    [sym_implicit_run_statement] = STATE(15),
    [sym__implicit_run_text_body_line] = STATE(37),
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
    [sym__flow_reserved_word] = STATE(495),
    [aux_sym_statements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_blank_line] = ACTIONS(215),
    [sym_parent_doc_line] = ACTIONS(215),
    [sym_doc_line] = ACTIONS(215),
    [sym_comment_line] = ACTIONS(215),
    [sym_with_keyword] = ACTIONS(75),
    [sym_struct_keyword] = ACTIONS(75),
    [sym_psyche_keyword] = ACTIONS(75),
    [sym_skill_keyword] = ACTIONS(75),
    [sym_service_keyword] = ACTIONS(75),
    [sym_prompt_keyword] = ACTIONS(75),
    [sym_context_keyword] = ACTIONS(75),
    [sym_instruct_keyword] = ACTIONS(75),
    [sym_agic_keyword] = ACTIONS(75),
    [sym_task_keyword] = ACTIONS(75),
    [sym_chore_keyword] = ACTIONS(75),
    [sym_flow_keyword] = ACTIONS(75),
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
    [sym__implicit_run_raw_text] = ACTIONS(67),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(111), 1,
      sym_flow_until_keyword,
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(507), 1,
      sym__flow_reserved_word,
    ACTIONS(217), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(245), 13,
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
    ACTIONS(118), 1,
      sym_flow_until_keyword,
    ACTIONS(252), 1,
      sym_flow_run_keyword,
    ACTIONS(255), 1,
      sym_flow_let_keyword,
    ACTIONS(258), 1,
      sym_flow_seek_keyword,
    ACTIONS(261), 1,
      sym_flow_ask_keyword,
    ACTIONS(264), 1,
      sym_flow_scatter_keyword,
    ACTIONS(267), 1,
      sym_flow_storm_keyword,
    ACTIONS(270), 1,
      sym_flow_gather_keyword,
    ACTIONS(273), 1,
      sym_flow_settle_keyword,
    ACTIONS(276), 1,
      sym_flow_map_keyword,
    ACTIONS(279), 1,
      sym_flow_keep_keyword,
    ACTIONS(282), 1,
      sym_flow_drop_keyword,
    ACTIONS(285), 1,
      sym_flow_rank_keyword,
    ACTIONS(288), 1,
      sym_flow_repeat_keyword,
    ACTIONS(294), 1,
      sym__implicit_run_raw_text,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(507), 1,
      sym__flow_reserved_word,
    ACTIONS(249), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(291), 13,
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
    STATE(18), 19,
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
    ACTIONS(75), 1,
      sym_flow_until_keyword,
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(507), 1,
      sym__flow_reserved_word,
    ACTIONS(297), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(245), 13,
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
    STATE(18), 19,
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
  [282] = 5,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(305), 1,
      sym_indented_raw_text,
    STATE(22), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(303), 43,
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
  [341] = 20,
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(159), 1,
      sym_repeat_until_body,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(507), 1,
      sym__flow_reserved_word,
    STATE(716), 1,
      sym_statements,
    ACTIONS(245), 13,
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
    STATE(17), 17,
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
  [430] = 5,
    ACTIONS(305), 1,
      sym_indented_raw_text,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      sym_blank_line,
    STATE(25), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(311), 43,
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
  [489] = 20,
    ACTIONS(77), 1,
      sym_flow_run_keyword,
    ACTIONS(79), 1,
      sym_flow_let_keyword,
    ACTIONS(81), 1,
      sym_flow_seek_keyword,
    ACTIONS(83), 1,
      sym_flow_ask_keyword,
    ACTIONS(85), 1,
      sym_flow_scatter_keyword,
    ACTIONS(87), 1,
      sym_flow_storm_keyword,
    ACTIONS(89), 1,
      sym_flow_gather_keyword,
    ACTIONS(91), 1,
      sym_flow_settle_keyword,
    ACTIONS(93), 1,
      sym_flow_map_keyword,
    ACTIONS(95), 1,
      sym_flow_keep_keyword,
    ACTIONS(97), 1,
      sym_flow_drop_keyword,
    ACTIONS(99), 1,
      sym_flow_rank_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    ACTIONS(105), 1,
      sym__implicit_run_raw_text,
    STATE(20), 1,
      sym__implicit_run_text_body_line,
    STATE(44), 1,
      sym_statements,
    STATE(143), 1,
      sym_repeat_body,
    STATE(499), 1,
      sym__flow_reserved_word,
    ACTIONS(103), 13,
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
    STATE(12), 17,
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
  [578] = 20,
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(229), 1,
      sym_repeat_until_body,
    STATE(507), 1,
      sym__flow_reserved_word,
    STATE(672), 1,
      sym_statements,
    ACTIONS(245), 13,
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
    STATE(17), 17,
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
  [667] = 5,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(320), 1,
      sym_indented_raw_text,
    STATE(25), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(318), 43,
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
  [726] = 6,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym__nested_indented_raw_text,
    STATE(28), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(48), 1,
      sym__nested_text_body_line,
    ACTIONS(327), 43,
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
  [787] = 20,
    ACTIONS(77), 1,
      sym_flow_run_keyword,
    ACTIONS(79), 1,
      sym_flow_let_keyword,
    ACTIONS(81), 1,
      sym_flow_seek_keyword,
    ACTIONS(83), 1,
      sym_flow_ask_keyword,
    ACTIONS(85), 1,
      sym_flow_scatter_keyword,
    ACTIONS(87), 1,
      sym_flow_storm_keyword,
    ACTIONS(89), 1,
      sym_flow_gather_keyword,
    ACTIONS(91), 1,
      sym_flow_settle_keyword,
    ACTIONS(93), 1,
      sym_flow_map_keyword,
    ACTIONS(95), 1,
      sym_flow_keep_keyword,
    ACTIONS(97), 1,
      sym_flow_drop_keyword,
    ACTIONS(99), 1,
      sym_flow_rank_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    ACTIONS(105), 1,
      sym__implicit_run_raw_text,
    STATE(20), 1,
      sym__implicit_run_text_body_line,
    STATE(41), 1,
      sym_statements,
    STATE(97), 1,
      sym_repeat_body,
    STATE(499), 1,
      sym__flow_reserved_word,
    ACTIONS(103), 13,
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
    STATE(12), 17,
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
  [876] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_blank_line,
    ACTIONS(338), 1,
      sym__nested_indented_raw_text,
    STATE(28), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(48), 1,
      sym__nested_text_body_line,
    ACTIONS(336), 43,
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
  [937] = 20,
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(207), 1,
      sym_statements,
    STATE(234), 1,
      sym_repeat_body,
    STATE(507), 1,
      sym__flow_reserved_word,
    ACTIONS(245), 13,
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
    STATE(17), 17,
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
    ACTIONS(219), 1,
      sym_flow_run_keyword,
    ACTIONS(221), 1,
      sym_flow_let_keyword,
    ACTIONS(223), 1,
      sym_flow_seek_keyword,
    ACTIONS(225), 1,
      sym_flow_ask_keyword,
    ACTIONS(227), 1,
      sym_flow_scatter_keyword,
    ACTIONS(229), 1,
      sym_flow_storm_keyword,
    ACTIONS(231), 1,
      sym_flow_gather_keyword,
    ACTIONS(233), 1,
      sym_flow_settle_keyword,
    ACTIONS(235), 1,
      sym_flow_map_keyword,
    ACTIONS(237), 1,
      sym_flow_keep_keyword,
    ACTIONS(239), 1,
      sym_flow_drop_keyword,
    ACTIONS(241), 1,
      sym_flow_rank_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(247), 1,
      sym__implicit_run_raw_text,
    STATE(93), 1,
      sym_repeat_until_body,
    STATE(189), 1,
      sym__implicit_run_text_body_line,
    STATE(507), 1,
      sym__flow_reserved_word,
    STATE(701), 1,
      sym_statements,
    ACTIONS(245), 13,
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
    STATE(17), 17,
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
    ACTIONS(67), 1,
      sym__implicit_run_raw_text,
    STATE(37), 1,
      sym__implicit_run_text_body_line,
    STATE(337), 1,
      sym_statements,
    STATE(495), 1,
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
    STATE(14), 17,
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
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      sym_blank_line,
    ACTIONS(344), 1,
      sym__nested_indented_raw_text,
    STATE(32), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    ACTIONS(336), 42,
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
  [1261] = 5,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      sym_blank_line,
    ACTIONS(349), 1,
      sym_indented_raw_text,
    STATE(34), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(311), 42,
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
  [1319] = 5,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 1,
      sym_blank_line,
    ACTIONS(354), 1,
      sym_indented_raw_text,
    STATE(34), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(318), 42,
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
  [1377] = 6,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      sym_blank_line,
    ACTIONS(359), 1,
      sym__nested_indented_raw_text,
    STATE(32), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    ACTIONS(327), 42,
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
  [1437] = 4,
    ACTIONS(305), 1,
      sym_indented_raw_text,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_text_body_line,
    ACTIONS(311), 44,
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
  [1493] = 5,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      sym_indented_raw_text,
    ACTIONS(361), 1,
      sym_blank_line,
    STATE(33), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(303), 42,
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
  [1551] = 4,
    ACTIONS(305), 1,
      sym_indented_raw_text,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_text_body_line,
    ACTIONS(365), 44,
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
  [1607] = 19,
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
    ACTIONS(67), 1,
      sym__implicit_run_raw_text,
    STATE(37), 1,
      sym__implicit_run_text_body_line,
    STATE(326), 1,
      sym_statements,
    STATE(495), 1,
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
    STATE(14), 17,
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
  [1693] = 2,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 45,
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
  [1744] = 4,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      sym_flow_until_keyword,
    STATE(99), 1,
      sym_until_statement,
    ACTIONS(373), 43,
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
  [1799] = 4,
    ACTIONS(349), 1,
      sym_indented_raw_text,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_text_body_line,
    ACTIONS(365), 43,
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
  [1854] = 4,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_text_body_line,
    ACTIONS(311), 43,
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
  [1909] = 4,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      sym_flow_until_keyword,
    STATE(151), 1,
      sym_until_statement,
    ACTIONS(373), 43,
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
  [1964] = 2,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2015] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 45,
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
  [2066] = 2,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2117] = 2,
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
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [2168] = 2,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 44,
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
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 44,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [2318] = 2,
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
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [2368] = 2,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 44,
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
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 44,
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
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 44,
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
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 44,
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
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 44,
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
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 44,
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
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 44,
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
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 44,
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
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 44,
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
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 44,
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
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 44,
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
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 44,
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
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 44,
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
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 44,
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
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 44,
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
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 44,
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
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 44,
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
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 44,
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
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 44,
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
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 44,
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
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 44,
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
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 44,
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
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 44,
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
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 44,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [3618] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 44,
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
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 44,
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
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 44,
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
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 44,
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
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 44,
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
  [3868] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 44,
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
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 44,
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
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 44,
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
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 44,
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
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 44,
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
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 44,
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
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 44,
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
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 44,
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
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 44,
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
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 44,
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
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 44,
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
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 44,
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
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 44,
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
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 44,
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
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 44,
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
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 44,
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
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 44,
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
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 44,
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
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 44,
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
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 44,
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
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(589), 44,
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
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 44,
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
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 44,
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
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    ACTIONS(601), 44,
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
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 43,
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
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 43,
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
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 43,
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
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 43,
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
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 43,
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
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 43,
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
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 43,
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
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 43,
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
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(589), 43,
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
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 43,
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
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 43,
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
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 43,
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
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 43,
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
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 43,
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
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 43,
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
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 43,
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
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 43,
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
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 43,
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
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 43,
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
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 43,
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
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 43,
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
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 43,
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
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 43,
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
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 43,
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
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 43,
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
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 43,
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
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 43,
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
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 43,
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
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 43,
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
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 43,
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
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 43,
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
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 43,
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
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 43,
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
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 43,
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
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 43,
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
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 43,
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
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 43,
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
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 43,
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
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 43,
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
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 43,
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
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 43,
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
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 43,
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
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 43,
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
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 43,
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
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 43,
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
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 43,
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
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 43,
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
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 43,
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
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 43,
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
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 43,
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
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    ACTIONS(601), 43,
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
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 43,
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
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 43,
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
  [7665] = 19,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(617), 1,
      sym_pass_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(319), 1,
      sym_messages,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(605), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(611), 10,
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
  [7747] = 5,
    STATE(558), 1,
      sym_directive_key,
    STATE(162), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(621), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(623), 27,
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
  [7801] = 5,
    STATE(558), 1,
      sym_directive_key,
    STATE(164), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(625), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(627), 27,
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
  [7855] = 19,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(617), 1,
      sym_pass_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(340), 1,
      sym_messages,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(335), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(631), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(633), 10,
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
  [7937] = 5,
    STATE(558), 1,
      sym_directive_key,
    STATE(164), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(635), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(638), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(641), 27,
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
  [7991] = 3,
    STATE(165), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(643), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(646), 36,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8040] = 14,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_message,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(340), 1,
      sym_messages,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(335), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(617), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(631), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(633), 10,
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
  [8109] = 1,
    ACTIONS(593), 40,
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
      anon_sym_recall,
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
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8152] = 1,
    ACTIONS(597), 40,
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
      anon_sym_recall,
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
      anon_sym_call,
      anon_sym_do,
      anon_sym_unfold,
      anon_sym_each,
      anon_sym_fold,
      anon_sym_sort,
      anon_sym_head,
      anon_sym_tail,
      sym__implicit_run_raw_text,
  [8195] = 14,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    STATE(173), 1,
      sym_message,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(319), 1,
      sym_messages,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(617), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(605), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(611), 10,
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
  [8264] = 14,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_message,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(339), 1,
      sym_messages,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(317), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(617), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(650), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(652), 10,
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
  [8333] = 12,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(617), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(174), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(656), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(658), 10,
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
  [8397] = 1,
    ACTIONS(660), 39,
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
      anon_sym_recall,
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
  [8439] = 12,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(617), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(171), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(664), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(607), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(666), 10,
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
  [8503] = 12,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym_indented_raw_text,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(496), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(676), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(681), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(174), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(670), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(673), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(679), 10,
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
  [8567] = 1,
    ACTIONS(593), 39,
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
      anon_sym_recall,
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
  [8609] = 1,
    ACTIONS(597), 39,
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
      anon_sym_recall,
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
  [8651] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(361), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [8730] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(374), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [8809] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(363), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [8888] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(370), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [8967] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(383), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [9046] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(378), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [9125] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(375), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [9204] = 21,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(160), 1,
      sym__directives,
    STATE(169), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(382), 1,
      sym_agic_body,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(324), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(687), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [9283] = 20,
    ACTIONS(613), 1,
      sym_context_keyword,
    ACTIONS(615), 1,
      sym_instruct_keyword,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(173), 1,
      sym_message,
    STATE(192), 1,
      sym_directive,
    STATE(201), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(260), 1,
      sym__unroled_message_initial_line,
    STATE(469), 1,
      sym_directive_key,
    STATE(496), 1,
      sym__agic_reserved_word,
    STATE(534), 1,
      sym_role,
    STATE(286), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(309), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(319), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(609), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(693), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(689), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [9359] = 5,
    ACTIONS(695), 1,
      sym_blank_line,
    ACTIONS(697), 1,
      sym__nested_indented_raw_text,
    STATE(188), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(197), 1,
      sym__nested_text_body_line,
    ACTIONS(327), 31,
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
  [9405] = 4,
    ACTIONS(699), 1,
      sym_blank_line,
    ACTIONS(701), 1,
      sym_indented_raw_text,
    STATE(190), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(311), 31,
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
  [9449] = 5,
    ACTIONS(703), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__nested_indented_raw_text,
    STATE(188), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(197), 1,
      sym__nested_text_body_line,
    ACTIONS(336), 31,
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
  [9495] = 4,
    ACTIONS(701), 1,
      sym_indented_raw_text,
    ACTIONS(709), 1,
      sym_blank_line,
    STATE(187), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(303), 31,
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
  [9539] = 4,
    ACTIONS(711), 1,
      sym_blank_line,
    ACTIONS(714), 1,
      sym_indented_raw_text,
    STATE(190), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(318), 31,
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
  [9583] = 6,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
    STATE(557), 1,
      sym_directive_key,
    STATE(193), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(719), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(627), 17,
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
  [9630] = 6,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    STATE(557), 1,
      sym_directive_key,
    STATE(191), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(723), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(623), 17,
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
  [9677] = 6,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(557), 1,
      sym_directive_key,
    STATE(193), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(727), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(638), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(641), 17,
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
  [9724] = 3,
    ACTIONS(701), 1,
      sym_indented_raw_text,
    STATE(202), 1,
      sym_text_body_line,
    ACTIONS(311), 32,
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
  [9765] = 3,
    ACTIONS(701), 1,
      sym_indented_raw_text,
    STATE(202), 1,
      sym_text_body_line,
    ACTIONS(365), 32,
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
  [9806] = 1,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [9842] = 1,
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
      sym__implicit_run_raw_text,
      sym__nested_indented_raw_text,
  [9878] = 1,
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
      sym_indented_raw_text,
      sym__implicit_run_raw_text,
  [9914] = 6,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    ACTIONS(736), 1,
      sym_instruct_keyword,
    STATE(245), 1,
      sym_instruct_setting,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(732), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(734), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
      sym_indented_raw_text,
  [9960] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__nested_indented_raw_text,
    STATE(200), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(274), 1,
      sym__nested_text_body_line,
    ACTIONS(336), 28,
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
      anon_sym_recall,
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
  [10006] = 6,
    ACTIONS(736), 1,
      sym_instruct_keyword,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_instruct_setting,
    STATE(199), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(746), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(748), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
      sym_indented_raw_text,
  [10052] = 1,
    ACTIONS(318), 33,
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
  [10088] = 6,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(750), 1,
      sym_blank_line,
    ACTIONS(752), 1,
      sym__nested_indented_raw_text,
    STATE(200), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(274), 1,
      sym__nested_text_body_line,
    ACTIONS(327), 28,
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
      anon_sym_recall,
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
  [10134] = 6,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
    ACTIONS(756), 1,
      sym_context_keyword,
    STATE(213), 1,
      sym_context_setting,
    STATE(208), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(754), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(748), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
      sym_indented_raw_text,
  [10180] = 20,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(764), 1,
      sym_flow_run_keyword,
    ACTIONS(766), 1,
      sym_flow_seek_keyword,
    ACTIONS(768), 1,
      sym_flow_ask_keyword,
    ACTIONS(770), 1,
      sym_flow_scatter_keyword,
    ACTIONS(772), 1,
      sym_flow_storm_keyword,
    ACTIONS(774), 1,
      sym_flow_gather_keyword,
    ACTIONS(776), 1,
      sym_flow_settle_keyword,
    ACTIONS(778), 1,
      sym_flow_map_keyword,
    ACTIONS(780), 1,
      sym_flow_keep_keyword,
    ACTIONS(782), 1,
      sym_flow_drop_keyword,
    ACTIONS(784), 1,
      sym_flow_rank_keyword,
    ACTIONS(786), 1,
      sym_flow_repeat_keyword,
    STATE(110), 1,
      sym__nested_text_block,
    STATE(490), 1,
      sym_line_end,
    STATE(606), 1,
      sym_text_line,
    STATE(131), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(142), 13,
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
  [10254] = 1,
    ACTIONS(369), 33,
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
  [10290] = 3,
    ACTIONS(788), 1,
      sym_flow_until_keyword,
    STATE(236), 1,
      sym_until_statement,
    ACTIONS(373), 31,
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
  [10330] = 6,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    ACTIONS(756), 1,
      sym_context_keyword,
    STATE(245), 1,
      sym_context_setting,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(732), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(734), 24,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
      sym_indented_raw_text,
  [10376] = 20,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(790), 1,
      sym_flow_run_keyword,
    ACTIONS(792), 1,
      sym_flow_seek_keyword,
    ACTIONS(794), 1,
      sym_flow_ask_keyword,
    ACTIONS(796), 1,
      sym_flow_scatter_keyword,
    ACTIONS(798), 1,
      sym_flow_storm_keyword,
    ACTIONS(800), 1,
      sym_flow_gather_keyword,
    ACTIONS(802), 1,
      sym_flow_settle_keyword,
    ACTIONS(804), 1,
      sym_flow_map_keyword,
    ACTIONS(806), 1,
      sym_flow_keep_keyword,
    ACTIONS(808), 1,
      sym_flow_drop_keyword,
    ACTIONS(810), 1,
      sym_flow_rank_keyword,
    ACTIONS(812), 1,
      sym_flow_repeat_keyword,
    STATE(242), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(639), 1,
      sym_text_line,
    STATE(219), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(211), 13,
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
  [10450] = 20,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(814), 1,
      sym_flow_run_keyword,
    ACTIONS(816), 1,
      sym_flow_seek_keyword,
    ACTIONS(818), 1,
      sym_flow_ask_keyword,
    ACTIONS(820), 1,
      sym_flow_scatter_keyword,
    ACTIONS(822), 1,
      sym_flow_storm_keyword,
    ACTIONS(824), 1,
      sym_flow_gather_keyword,
    ACTIONS(826), 1,
      sym_flow_settle_keyword,
    ACTIONS(828), 1,
      sym_flow_map_keyword,
    ACTIONS(830), 1,
      sym_flow_keep_keyword,
    ACTIONS(832), 1,
      sym_flow_drop_keyword,
    ACTIONS(834), 1,
      sym_flow_rank_keyword,
    ACTIONS(836), 1,
      sym_flow_repeat_keyword,
    STATE(101), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(651), 1,
      sym_text_line,
    STATE(82), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(83), 13,
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
  [10524] = 1,
    ACTIONS(509), 32,
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
  [10559] = 1,
    ACTIONS(497), 32,
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
  [10594] = 4,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    STATE(244), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(838), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(734), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
  [10635] = 1,
    ACTIONS(397), 32,
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
  [10670] = 1,
    ACTIONS(493), 32,
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
  [10705] = 1,
    ACTIONS(501), 32,
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
  [10740] = 17,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 1,
      sym_with_keyword,
    ACTIONS(851), 1,
      sym_struct_keyword,
    ACTIONS(854), 1,
      sym_psyche_keyword,
    ACTIONS(857), 1,
      sym_skill_keyword,
    ACTIONS(860), 1,
      sym_service_keyword,
    ACTIONS(863), 1,
      sym_prompt_keyword,
    ACTIONS(866), 1,
      sym_context_keyword,
    ACTIONS(869), 1,
      sym_instruct_keyword,
    ACTIONS(872), 1,
      sym_agic_keyword,
    ACTIONS(875), 1,
      sym_task_keyword,
    ACTIONS(878), 1,
      sym_chore_keyword,
    ACTIONS(881), 1,
      sym_flow_keyword,
    ACTIONS(842), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(845), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(217), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(356), 12,
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
  [10807] = 1,
    ACTIONS(405), 32,
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
  [10842] = 1,
    ACTIONS(505), 32,
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
  [10877] = 1,
    ACTIONS(513), 32,
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
  [10912] = 1,
    ACTIONS(517), 32,
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
  [10947] = 1,
    ACTIONS(521), 32,
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
  [10982] = 1,
    ACTIONS(525), 32,
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
  [11017] = 1,
    ACTIONS(529), 32,
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
  [11052] = 1,
    ACTIONS(533), 32,
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
  [11087] = 1,
    ACTIONS(537), 32,
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
  [11122] = 1,
    ACTIONS(541), 32,
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
  [11157] = 1,
    ACTIONS(545), 32,
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
  [11192] = 1,
    ACTIONS(549), 32,
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
  [11227] = 1,
    ACTIONS(553), 32,
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
  [11262] = 1,
    ACTIONS(557), 32,
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
  [11297] = 1,
    ACTIONS(561), 32,
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
  [11332] = 1,
    ACTIONS(409), 32,
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
  [11367] = 1,
    ACTIONS(565), 32,
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
  [11402] = 1,
    ACTIONS(569), 32,
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
  [11437] = 1,
    ACTIONS(573), 32,
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
  [11472] = 1,
    ACTIONS(577), 32,
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
  [11507] = 1,
    ACTIONS(413), 32,
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
  [11542] = 1,
    ACTIONS(417), 32,
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
  [11577] = 1,
    ACTIONS(421), 32,
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
  [11612] = 1,
    ACTIONS(425), 32,
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
  [11647] = 1,
    ACTIONS(581), 32,
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
  [11682] = 4,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(732), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(886), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
  [11723] = 4,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(732), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(890), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
  [11764] = 4,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
    STATE(243), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(892), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(890), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
  [11805] = 6,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
    ACTIONS(896), 1,
      sym_blank_line,
    ACTIONS(901), 1,
      sym_indented_raw_text,
    STATE(246), 1,
      aux_sym_unroled_message_repeat1,
    STATE(295), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(899), 27,
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
      anon_sym_recall,
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
  [11850] = 1,
    ACTIONS(585), 32,
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
  [11885] = 1,
    ACTIONS(429), 32,
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
  [11920] = 6,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(910), 1,
      sym_indented_raw_text,
    STATE(246), 1,
      aux_sym_unroled_message_repeat1,
    STATE(295), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(908), 27,
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
      anon_sym_recall,
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
  [11965] = 1,
    ACTIONS(589), 32,
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
  [12000] = 1,
    ACTIONS(433), 32,
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
  [12035] = 1,
    ACTIONS(437), 32,
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
  [12070] = 1,
    ACTIONS(393), 32,
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
  [12105] = 1,
    ACTIONS(441), 32,
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
  [12140] = 1,
    ACTIONS(445), 32,
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
  [12175] = 1,
    ACTIONS(449), 32,
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
  [12210] = 1,
    ACTIONS(453), 32,
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
  [12245] = 1,
    ACTIONS(457), 32,
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
  [12280] = 1,
    ACTIONS(461), 32,
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
  [12315] = 6,
    ACTIONS(910), 1,
      sym_indented_raw_text,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
    ACTIONS(914), 1,
      sym_blank_line,
    STATE(249), 1,
      aux_sym_unroled_message_repeat1,
    STATE(295), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(916), 27,
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
      anon_sym_recall,
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
  [12360] = 1,
    ACTIONS(465), 32,
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
  [12395] = 1,
    ACTIONS(469), 32,
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
  [12430] = 1,
    ACTIONS(473), 32,
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
  [12465] = 4,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(920), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(646), 25,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
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
  [12506] = 17,
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
    ACTIONS(923), 1,
      ts_builtin_sym_end,
    ACTIONS(925), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(927), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(217), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(356), 12,
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
  [12573] = 1,
    ACTIONS(477), 32,
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
  [12608] = 1,
    ACTIONS(481), 32,
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
  [12643] = 1,
    ACTIONS(485), 32,
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
  [12678] = 1,
    ACTIONS(593), 32,
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
  [12713] = 1,
    ACTIONS(597), 32,
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
  [12748] = 1,
    ACTIONS(601), 32,
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
  [12783] = 1,
    ACTIONS(489), 32,
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
  [12818] = 1,
    ACTIONS(401), 32,
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
  [12853] = 2,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 30,
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
      anon_sym_recall,
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
      sym__nested_indented_raw_text,
  [12889] = 4,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
    ACTIONS(910), 1,
      sym_indented_raw_text,
    STATE(287), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(908), 28,
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
      anon_sym_recall,
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
  [12929] = 2,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 30,
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
      anon_sym_recall,
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
      sym__nested_indented_raw_text,
  [12965] = 4,
    ACTIONS(910), 1,
      sym_indented_raw_text,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(931), 28,
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
      anon_sym_recall,
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
  [13005] = 2,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 29,
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
      anon_sym_recall,
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
  [13040] = 2,
    ACTIONS(933), 1,
      ts_builtin_sym_end,
    ACTIONS(935), 29,
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
      anon_sym_recall,
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
  [13075] = 2,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 29,
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
      anon_sym_recall,
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
  [13110] = 2,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 29,
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
      anon_sym_recall,
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
  [13145] = 2,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 29,
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
      anon_sym_recall,
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
  [13180] = 2,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 29,
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
      anon_sym_recall,
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
  [13215] = 2,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
    ACTIONS(945), 29,
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
      anon_sym_recall,
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
  [13250] = 2,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
    ACTIONS(945), 29,
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
      anon_sym_recall,
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
  [13285] = 2,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
    ACTIONS(949), 29,
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
      anon_sym_recall,
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
  [13320] = 2,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
    ACTIONS(953), 29,
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
      anon_sym_recall,
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
  [13355] = 16,
    ACTIONS(764), 1,
      sym_flow_run_keyword,
    ACTIONS(766), 1,
      sym_flow_seek_keyword,
    ACTIONS(768), 1,
      sym_flow_ask_keyword,
    ACTIONS(770), 1,
      sym_flow_scatter_keyword,
    ACTIONS(772), 1,
      sym_flow_storm_keyword,
    ACTIONS(774), 1,
      sym_flow_gather_keyword,
    ACTIONS(776), 1,
      sym_flow_settle_keyword,
    ACTIONS(778), 1,
      sym_flow_map_keyword,
    ACTIONS(780), 1,
      sym_flow_keep_keyword,
    ACTIONS(782), 1,
      sym_flow_drop_keyword,
    ACTIONS(784), 1,
      sym_flow_rank_keyword,
    ACTIONS(786), 1,
      sym_flow_repeat_keyword,
    ACTIONS(957), 1,
      sym_snake_name,
    STATE(680), 1,
      sym_local_name,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(156), 13,
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
  [13418] = 2,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
    ACTIONS(961), 29,
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
      anon_sym_recall,
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
  [13453] = 2,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 29,
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
      anon_sym_recall,
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
  [13488] = 2,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 29,
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
      anon_sym_recall,
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
  [13523] = 2,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(589), 29,
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
      anon_sym_recall,
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
  [13558] = 2,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
    ACTIONS(965), 29,
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
      anon_sym_recall,
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
  [13593] = 2,
    ACTIONS(967), 1,
      ts_builtin_sym_end,
    ACTIONS(969), 29,
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
      anon_sym_recall,
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
  [13628] = 2,
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
      anon_sym_recall,
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
  [13663] = 2,
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
      anon_sym_recall,
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
  [13698] = 16,
    ACTIONS(790), 1,
      sym_flow_run_keyword,
    ACTIONS(792), 1,
      sym_flow_seek_keyword,
    ACTIONS(794), 1,
      sym_flow_ask_keyword,
    ACTIONS(796), 1,
      sym_flow_scatter_keyword,
    ACTIONS(798), 1,
      sym_flow_storm_keyword,
    ACTIONS(800), 1,
      sym_flow_gather_keyword,
    ACTIONS(802), 1,
      sym_flow_settle_keyword,
    ACTIONS(804), 1,
      sym_flow_map_keyword,
    ACTIONS(806), 1,
      sym_flow_keep_keyword,
    ACTIONS(808), 1,
      sym_flow_drop_keyword,
    ACTIONS(810), 1,
      sym_flow_rank_keyword,
    ACTIONS(812), 1,
      sym_flow_repeat_keyword,
    ACTIONS(957), 1,
      sym_snake_name,
    STATE(711), 1,
      sym_local_name,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(273), 13,
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
  [13761] = 16,
    ACTIONS(814), 1,
      sym_flow_run_keyword,
    ACTIONS(816), 1,
      sym_flow_seek_keyword,
    ACTIONS(818), 1,
      sym_flow_ask_keyword,
    ACTIONS(820), 1,
      sym_flow_scatter_keyword,
    ACTIONS(822), 1,
      sym_flow_storm_keyword,
    ACTIONS(824), 1,
      sym_flow_gather_keyword,
    ACTIONS(826), 1,
      sym_flow_settle_keyword,
    ACTIONS(828), 1,
      sym_flow_map_keyword,
    ACTIONS(830), 1,
      sym_flow_keep_keyword,
    ACTIONS(832), 1,
      sym_flow_drop_keyword,
    ACTIONS(834), 1,
      sym_flow_rank_keyword,
    ACTIONS(836), 1,
      sym_flow_repeat_keyword,
    ACTIONS(957), 1,
      sym_snake_name,
    STATE(661), 1,
      sym_local_name,
    ACTIONS(955), 3,
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
  [13824] = 1,
    ACTIONS(593), 27,
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
  [13854] = 1,
    ACTIONS(597), 27,
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
  [13884] = 10,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    STATE(322), 1,
      sym_text_body,
    STATE(694), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(983), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(304), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(985), 12,
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
  [13931] = 10,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    STATE(338), 1,
      sym_text_body,
    STATE(694), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(993), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(303), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(995), 12,
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
  [13978] = 10,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
    STATE(330), 1,
      sym_text_body,
    STATE(694), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(999), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(1001), 12,
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
  [14025] = 10,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_text_body,
    STATE(694), 1,
      sym_property_key,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(999), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(1005), 12,
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
  [14072] = 6,
    ACTIONS(1007), 1,
      ts_builtin_sym_end,
    ACTIONS(1014), 1,
      sym_snake_name,
    STATE(694), 1,
      sym_property_key,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(1009), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1012), 13,
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
  [14108] = 7,
    ACTIONS(1019), 1,
      sym_blank_line,
    ACTIONS(1027), 1,
      sym_snake_name,
    STATE(719), 1,
      sym_field_name,
    ACTIONS(1017), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1022), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(306), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1025), 12,
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
  [14144] = 7,
    ACTIONS(1032), 1,
      sym_blank_line,
    ACTIONS(1038), 1,
      sym_snake_name,
    STATE(719), 1,
      sym_field_name,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1034), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(306), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1036), 12,
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
  [14180] = 7,
    ACTIONS(1040), 1,
      ts_builtin_sym_end,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1046), 1,
      sym__prompt_indented_raw_text,
    STATE(311), 1,
      aux_sym__prompt_text_body_repeat1,
    STATE(346), 1,
      sym__prompt_text_body_line,
    STATE(381), 1,
      sym__prompt_text_body,
    ACTIONS(1044), 15,
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
  [14216] = 3,
    STATE(309), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(646), 15,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [14244] = 5,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1051), 1,
      ts_builtin_sym_end,
    ACTIONS(1053), 1,
      sym_blank_line,
    STATE(313), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1055), 15,
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
  [14275] = 6,
    ACTIONS(1046), 1,
      sym__prompt_indented_raw_text,
    ACTIONS(1057), 1,
      ts_builtin_sym_end,
    ACTIONS(1059), 1,
      sym_blank_line,
    STATE(312), 1,
      aux_sym__prompt_text_body_repeat1,
    STATE(346), 1,
      sym__prompt_text_body_line,
    ACTIONS(1061), 15,
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
  [14308] = 6,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1070), 1,
      sym__prompt_indented_raw_text,
    STATE(312), 1,
      aux_sym__prompt_text_body_repeat1,
    STATE(346), 1,
      sym__prompt_text_body_line,
    ACTIONS(1068), 15,
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
  [14341] = 5,
    ACTIONS(1073), 1,
      ts_builtin_sym_end,
    ACTIONS(1075), 1,
      sym_blank_line,
    ACTIONS(1080), 1,
      sym_indented_raw_text,
    STATE(313), 2,
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
  [14372] = 4,
    ACTIONS(1085), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1087), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(325), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14400] = 2,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
    ACTIONS(1091), 18,
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
  [14424] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1093), 13,
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
  [14452] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1099), 13,
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
  [14480] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14508] = 4,
    ACTIONS(631), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1103), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(335), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(629), 13,
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
  [14536] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1105), 13,
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
  [14564] = 4,
    ACTIONS(1107), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1109), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(318), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1105), 13,
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
  [14592] = 4,
    ACTIONS(1111), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1113), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(320), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1003), 13,
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
  [14620] = 4,
    ACTIONS(1115), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1118), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(918), 13,
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
  [14648] = 4,
    ACTIONS(605), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1121), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(603), 13,
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
  [14676] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1123), 13,
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
  [14704] = 4,
    ACTIONS(1125), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1127), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(334), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1123), 13,
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
  [14732] = 2,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 18,
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
  [14756] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(629), 13,
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
  [14784] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14812] = 4,
    ACTIONS(1131), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1133), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(341), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14840] = 1,
    ACTIONS(593), 19,
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
      anon_sym_recall,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [14862] = 1,
    ACTIONS(597), 19,
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
      anon_sym_recall,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [14884] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1135), 13,
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
  [14912] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1137), 13,
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
  [14940] = 4,
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(648), 13,
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
  [14968] = 3,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
    ACTIONS(1145), 1,
      sym_snake_name,
    ACTIONS(1142), 17,
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
  [14994] = 4,
    ACTIONS(1147), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1149), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(333), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1137), 13,
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
  [15022] = 4,
    ACTIONS(1151), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1153), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(329), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(997), 13,
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
  [15050] = 4,
    ACTIONS(1155), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1157), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(316), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1099), 13,
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
  [15078] = 4,
    ACTIONS(650), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1159), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(317), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(648), 13,
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
    ACTIONS(1095), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1097), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1161), 13,
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
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 18,
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
    ACTIONS(1163), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1165), 15,
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
  [15181] = 2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 17,
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
  [15204] = 2,
    ACTIONS(1167), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1169), 15,
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
    ACTIONS(1171), 2,
      ts_builtin_sym_end,
      sym__prompt_indented_raw_text,
    ACTIONS(1173), 16,
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
  [15250] = 2,
    ACTIONS(1175), 2,
      ts_builtin_sym_end,
      sym__prompt_indented_raw_text,
    ACTIONS(1177), 16,
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
  [15273] = 2,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      sym__prompt_indented_raw_text,
    ACTIONS(593), 16,
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
  [15296] = 2,
    ACTIONS(591), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(593), 15,
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
  [15319] = 2,
    ACTIONS(595), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(597), 15,
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
  [15342] = 2,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      sym__prompt_indented_raw_text,
    ACTIONS(597), 16,
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
  [15365] = 2,
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
  [15387] = 2,
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
  [15409] = 2,
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
  [15431] = 2,
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
  [15453] = 2,
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
  [15475] = 2,
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
  [15497] = 2,
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
  [15519] = 2,
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
  [15541] = 2,
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
  [15563] = 2,
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
  [15585] = 2,
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
  [15607] = 2,
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
  [15629] = 2,
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
  [15651] = 2,
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
  [15673] = 2,
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
  [15695] = 2,
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
  [15717] = 2,
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
  [15739] = 2,
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
  [15761] = 2,
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
  [15783] = 2,
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
  [15805] = 2,
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
  [15827] = 2,
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
  [15849] = 2,
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
  [15871] = 2,
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
  [15893] = 2,
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
  [15915] = 2,
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
  [15937] = 2,
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
  [15959] = 2,
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
  [15981] = 2,
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
  [16003] = 2,
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
  [16025] = 2,
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
  [16047] = 2,
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
  [16069] = 2,
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
  [16091] = 2,
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
  [16113] = 2,
    ACTIONS(593), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(591), 15,
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
  [16135] = 2,
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
  [16157] = 2,
    ACTIONS(597), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(595), 15,
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
  [16179] = 2,
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
  [16201] = 1,
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
  [16219] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(687), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16244] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(775), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16269] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(746), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16294] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(562), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16319] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(773), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16344] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1333), 1,
      sym_colon,
    ACTIONS(1335), 1,
      sym_snake_name,
    STATE(136), 1,
      sym_inline_agic_body,
    STATE(486), 1,
      sym_runnable,
    STATE(650), 1,
      sym_position_clause,
    STATE(697), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16375] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1333), 1,
      sym_colon,
    ACTIONS(1335), 1,
      sym_snake_name,
    STATE(118), 1,
      sym_inline_agic_body,
    STATE(494), 1,
      sym_runnable,
    STATE(652), 1,
      sym_position_clause,
    STATE(707), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16406] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1333), 1,
      sym_colon,
    ACTIONS(1335), 1,
      sym_snake_name,
    STATE(144), 1,
      sym_inline_agic_body,
    STATE(427), 1,
      sym_runnable,
    STATE(544), 1,
      sym_rank_selection_clause,
    STATE(714), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16437] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(742), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16462] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(731), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16487] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(780), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16512] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(728), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16537] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_colon,
    STATE(239), 1,
      sym_inline_agic_body,
    STATE(488), 1,
      sym_runnable,
    STATE(600), 1,
      sym_position_clause,
    STATE(705), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16568] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_colon,
    STATE(240), 1,
      sym_inline_agic_body,
    STATE(489), 1,
      sym_runnable,
    STATE(601), 1,
      sym_position_clause,
    STATE(712), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16599] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_colon,
    STATE(241), 1,
      sym_inline_agic_body,
    STATE(436), 1,
      sym_runnable,
    STATE(545), 1,
      sym_rank_selection_clause,
    STATE(717), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16630] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(626), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16655] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(778), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16680] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(739), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16705] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(787), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16730] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(669), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16755] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic_body,
    STATE(513), 1,
      sym_runnable,
    STATE(635), 1,
      sym_position_clause,
    STATE(691), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16786] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic_body,
    STATE(512), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(690), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16817] = 6,
    ACTIONS(1327), 1,
      sym_pascal_name,
    STATE(448), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(786), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1325), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16842] = 9,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(457), 1,
      sym_runnable,
    STATE(538), 1,
      sym_rank_selection_clause,
    STATE(692), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16873] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(132), 1,
      sym_inline_agic,
    STATE(484), 1,
      sym_runnable,
    STATE(637), 1,
      sym_par_clause,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16900] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(238), 1,
      sym_inline_agic,
    STATE(487), 1,
      sym_runnable,
    STATE(598), 1,
      sym_par_clause,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16927] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(511), 1,
      sym_runnable,
    STATE(631), 1,
      sym_par_clause,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16954] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(239), 1,
      sym_inline_agic_body,
    STATE(488), 1,
      sym_runnable,
    STATE(600), 1,
      sym_position_clause,
    STATE(705), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16980] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(457), 1,
      sym_runnable,
    STATE(538), 1,
      sym_rank_selection_clause,
    STATE(692), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17006] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(240), 1,
      sym_inline_agic_body,
    STATE(489), 1,
      sym_runnable,
    STATE(601), 1,
      sym_position_clause,
    STATE(712), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17032] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(241), 1,
      sym_inline_agic_body,
    STATE(436), 1,
      sym_runnable,
    STATE(545), 1,
      sym_rank_selection_clause,
    STATE(717), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17058] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(136), 1,
      sym_inline_agic_body,
    STATE(486), 1,
      sym_runnable,
    STATE(650), 1,
      sym_position_clause,
    STATE(697), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17084] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(118), 1,
      sym_inline_agic_body,
    STATE(494), 1,
      sym_runnable,
    STATE(652), 1,
      sym_position_clause,
    STATE(707), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17110] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(144), 1,
      sym_inline_agic_body,
    STATE(427), 1,
      sym_runnable,
    STATE(544), 1,
      sym_rank_selection_clause,
    STATE(714), 1,
      sym_par_clause,
    ACTIONS(1337), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17136] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic_body,
    STATE(512), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(690), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17162] = 8,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic_body,
    STATE(513), 1,
      sym_runnable,
    STATE(635), 1,
      sym_position_clause,
    STATE(691), 1,
      sym_par_clause,
    ACTIONS(1331), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17188] = 7,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(147), 1,
      sym_line_end,
    STATE(497), 1,
      sym_rank_selection_clause,
    STATE(619), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17211] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(114), 1,
      sym_inline_agic,
    STATE(634), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17232] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(242), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(639), 1,
      sym_text_line,
    STATE(251), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17255] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(130), 1,
      sym_inline_agic,
    STATE(602), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17276] = 4,
    ACTIONS(1373), 1,
      sym_colon,
    STATE(570), 1,
      sym_text_ref,
    ACTIONS(1369), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1371), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17293] = 4,
    ACTIONS(1377), 1,
      sym_array_suffix,
    STATE(432), 1,
      aux_sym_type_repeat1,
    STATE(477), 1,
      sym_type_suffix,
    ACTIONS(1375), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17310] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(214), 1,
      sym_inline_agic,
    STATE(588), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17331] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(242), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(639), 1,
      sym_text_line,
    STATE(254), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17354] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(242), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(639), 1,
      sym_text_line,
    STATE(262), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17377] = 7,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(212), 1,
      sym_line_end,
    STATE(493), 1,
      sym_rank_selection_clause,
    STATE(615), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17400] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(282), 1,
      sym__nested_text_block,
    STATE(505), 1,
      sym_line_end,
    STATE(572), 1,
      sym_text_line,
    STATE(293), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17423] = 6,
    ACTIONS(1386), 1,
      sym_comment_line,
    ACTIONS(1388), 1,
      sym_snake_name,
    STATE(376), 1,
      sym_struct_body,
    STATE(719), 1,
      sym_field_name,
    ACTIONS(1384), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(307), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [17444] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(242), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(639), 1,
      sym_text_line,
    STATE(230), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17467] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(282), 1,
      sym__nested_text_block,
    STATE(505), 1,
      sym_line_end,
    STATE(572), 1,
      sym_text_line,
    STATE(281), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17490] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(218), 1,
      sym_inline_agic,
    STATE(596), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17511] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(54), 1,
      sym_inline_agic,
    STATE(561), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17532] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(110), 1,
      sym__nested_text_block,
    STATE(490), 1,
      sym_line_end,
    STATE(606), 1,
      sym_text_line,
    STATE(137), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17555] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(56), 1,
      sym_inline_agic,
    STATE(629), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17576] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1351), 1,
      sym_arrow,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(57), 1,
      sym_inline_agic,
    STATE(630), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17597] = 8,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1390), 1,
      sym_newline,
    ACTIONS(1392), 1,
      sym_inline_comment,
    STATE(359), 1,
      sym_text_block,
    STATE(360), 1,
      sym_instruct_body,
    STATE(367), 1,
      sym_text_inline,
    STATE(498), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17622] = 8,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1390), 1,
      sym_newline,
    ACTIONS(1392), 1,
      sym_inline_comment,
    STATE(359), 1,
      sym_text_block,
    STATE(367), 1,
      sym_text_inline,
    STATE(380), 1,
      sym_instruct_body,
    STATE(498), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17647] = 4,
    ACTIONS(1396), 1,
      sym_array_suffix,
    STATE(459), 1,
      aux_sym_type_repeat1,
    STATE(477), 1,
      sym_type_suffix,
    ACTIONS(1394), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17664] = 8,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1390), 1,
      sym_newline,
    ACTIONS(1392), 1,
      sym_inline_comment,
    STATE(357), 1,
      sym_context_body,
    STATE(358), 1,
      sym_text_inline,
    STATE(359), 1,
      sym_text_block,
    STATE(498), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17689] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(101), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(651), 1,
      sym_text_line,
    STATE(63), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17712] = 8,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1390), 1,
      sym_newline,
    ACTIONS(1392), 1,
      sym_inline_comment,
    STATE(358), 1,
      sym_text_inline,
    STATE(359), 1,
      sym_text_block,
    STATE(379), 1,
      sym_context_body,
    STATE(498), 1,
      sym_line_end,
    STATE(564), 1,
      sym_text_line,
  [17737] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(110), 1,
      sym__nested_text_block,
    STATE(490), 1,
      sym_line_end,
    STATE(606), 1,
      sym_text_line,
    STATE(107), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17760] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(110), 1,
      sym__nested_text_block,
    STATE(490), 1,
      sym_line_end,
    STATE(606), 1,
      sym_text_line,
    STATE(121), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17783] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(282), 1,
      sym__nested_text_block,
    STATE(505), 1,
      sym_line_end,
    STATE(572), 1,
      sym_text_line,
    STATE(284), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17806] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(101), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(651), 1,
      sym_text_line,
    STATE(65), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17829] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(101), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(651), 1,
      sym_text_line,
    STATE(72), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17852] = 7,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
    STATE(517), 1,
      sym_rank_selection_clause,
    STATE(646), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17875] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(110), 1,
      sym__nested_text_block,
    STATE(490), 1,
      sym_line_end,
    STATE(606), 1,
      sym_text_line,
    STATE(133), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17898] = 4,
    ACTIONS(1396), 1,
      sym_array_suffix,
    STATE(432), 1,
      aux_sym_type_repeat1,
    STATE(477), 1,
      sym_type_suffix,
    ACTIONS(1402), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17915] = 7,
    ACTIONS(758), 1,
      sym_newline,
    ACTIONS(760), 1,
      sym_inline_comment,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    STATE(101), 1,
      sym__nested_text_block,
    STATE(521), 1,
      sym_line_end,
    STATE(651), 1,
      sym_text_line,
    STATE(94), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17938] = 4,
    ACTIONS(1404), 1,
      sym_colon,
    STATE(569), 1,
      sym_text_ref,
    ACTIONS(1369), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1371), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17955] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_arrow,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(111), 1,
      sym_inline_agic,
    STATE(632), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17976] = 6,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
    STATE(233), 1,
      sym_inline_agic,
    STATE(597), 1,
      sym_runnable,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17997] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(238), 1,
      sym_inline_agic,
    STATE(487), 1,
      sym_runnable,
    STATE(598), 1,
      sym_par_clause,
  [18019] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(67), 1,
      sym_inline_agic,
    STATE(516), 1,
      sym_runnable,
    STATE(642), 1,
      sym_par_clause,
  [18041] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    STATE(135), 1,
      sym_inline_agic,
    STATE(482), 1,
      sym_runnable,
    STATE(591), 1,
      sym_par_clause,
  [18063] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(511), 1,
      sym_runnable,
    STATE(631), 1,
      sym_par_clause,
  [18085] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(256), 1,
      sym_inline_agic,
    STATE(492), 1,
      sym_runnable,
    STATE(610), 1,
      sym_par_clause,
  [18107] = 3,
    STATE(722), 1,
      sym_directive_op,
    ACTIONS(1369), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1418), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [18121] = 7,
    ACTIONS(1329), 1,
      sym_flow_par_keyword,
    ACTIONS(1335), 1,
      sym_snake_name,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    STATE(132), 1,
      sym_inline_agic,
    STATE(484), 1,
      sym_runnable,
    STATE(637), 1,
      sym_par_clause,
  [18143] = 1,
    ACTIONS(1420), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18152] = 6,
    ACTIONS(1422), 1,
      sym_arrow,
    ACTIONS(1424), 1,
      sym_colon,
    ACTIONS(1426), 1,
      sym_lparen,
    ACTIONS(1428), 1,
      sym_snake_name,
    STATE(553), 1,
      sym_flow_name,
    STATE(675), 1,
      sym_params,
  [18171] = 1,
    ACTIONS(1430), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18180] = 1,
    ACTIONS(1432), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18189] = 1,
    ACTIONS(1434), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18198] = 1,
    ACTIONS(1436), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18207] = 1,
    ACTIONS(1438), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18216] = 1,
    ACTIONS(1440), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [18225] = 6,
    ACTIONS(1426), 1,
      sym_lparen,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1446), 1,
      sym_snake_name,
    STATE(536), 1,
      sym_agic_name,
    STATE(685), 1,
      sym_params,
  [18244] = 3,
    ACTIONS(1448), 1,
      sym_integer_literal,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18256] = 3,
    ACTIONS(1452), 1,
      sym_colon,
    STATE(569), 1,
      sym_text_ref,
    ACTIONS(1371), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18268] = 5,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(124), 1,
      sym_line_end,
    STATE(656), 1,
      sym_par_clause,
  [18284] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(253), 1,
      sym_inline_agic,
    STATE(608), 1,
      sym_runnable,
  [18300] = 5,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(145), 1,
      sym_line_end,
    STATE(595), 1,
      sym_par_clause,
  [18316] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(255), 1,
      sym_inline_agic,
    STATE(609), 1,
      sym_runnable,
  [18332] = 5,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(154), 1,
      sym_line_end,
    STATE(603), 1,
      sym_par_clause,
  [18348] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(261), 1,
      sym_line_end,
    STATE(612), 1,
      sym_par_clause,
  [18364] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(267), 1,
      sym_line_end,
    STATE(660), 1,
      sym_par_clause,
  [18380] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(272), 1,
      sym_line_end,
    STATE(614), 1,
      sym_par_clause,
  [18396] = 5,
    ACTIONS(1456), 1,
      sym_blank_line,
    ACTIONS(1458), 1,
      sym__nested_indented_raw_text,
    STATE(35), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(52), 1,
      sym__nested_text_body_line,
    STATE(112), 1,
      sym__nested_text_body,
  [18412] = 5,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(123), 1,
      sym_inline_agic,
    STATE(587), 1,
      sym_runnable,
  [18428] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(223), 1,
      sym_line_end,
    STATE(616), 1,
      sym_par_clause,
  [18444] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(228), 1,
      sym_line_end,
    STATE(617), 1,
      sym_par_clause,
  [18460] = 5,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(158), 1,
      sym_line_end,
    STATE(611), 1,
      sym_par_clause,
  [18476] = 5,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1460), 1,
      sym_newline,
    ACTIONS(1462), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(563), 1,
      sym_text_line,
  [18492] = 5,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1464), 1,
      sym_newline,
    ACTIONS(1466), 1,
      sym_inline_comment,
    STATE(279), 1,
      sym_line_end,
    STATE(583), 1,
      sym_text_line,
  [18508] = 5,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(129), 1,
      sym_line_end,
    STATE(659), 1,
      sym_par_clause,
  [18524] = 4,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1468), 1,
      sym_blank_line,
    STATE(372), 1,
      sym_text_body,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [18538] = 5,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1470), 1,
      sym_newline,
    ACTIONS(1472), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_line_end,
    STATE(638), 1,
      sym_text_line,
  [18554] = 4,
    ACTIONS(1476), 1,
      sym_rparen,
    STATE(539), 1,
      sym_param_name,
    STATE(575), 1,
      sym_param,
    ACTIONS(1474), 2,
      anon_sym__,
      sym_snake_name,
  [18568] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(54), 1,
      sym_inline_agic,
    STATE(561), 1,
      sym_runnable,
  [18584] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(56), 1,
      sym_inline_agic,
    STATE(629), 1,
      sym_runnable,
  [18600] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(57), 1,
      sym_inline_agic,
    STATE(630), 1,
      sym_runnable,
  [18616] = 3,
    ACTIONS(1478), 1,
      sym_snake_name,
    STATE(491), 1,
      sym_agent,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18628] = 5,
    ACTIONS(1480), 1,
      sym_blank_line,
    ACTIONS(1482), 1,
      sym__nested_indented_raw_text,
    STATE(203), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(274), 1,
      sym__nested_text_body_line,
    STATE(278), 1,
      sym__nested_text_body,
  [18644] = 3,
    ACTIONS(1484), 1,
      sym_colon,
    STATE(570), 1,
      sym_text_ref,
    ACTIONS(1371), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18656] = 5,
    ACTIONS(762), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1486), 1,
      sym_newline,
    ACTIONS(1488), 1,
      sym_inline_comment,
    STATE(248), 1,
      sym_line_end,
    STATE(605), 1,
      sym_text_line,
  [18672] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(49), 1,
      sym_inline_agic,
    STATE(640), 1,
      sym_runnable,
  [18688] = 5,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(66), 1,
      sym_inline_agic,
    STATE(641), 1,
      sym_runnable,
  [18704] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(214), 1,
      sym_inline_agic,
    STATE(588), 1,
      sym_runnable,
  [18720] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(71), 1,
      sym_line_end,
    STATE(643), 1,
      sym_par_clause,
  [18736] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
    STATE(644), 1,
      sym_par_clause,
  [18752] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
    STATE(645), 1,
      sym_par_clause,
  [18768] = 1,
    ACTIONS(1490), 5,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [18776] = 5,
    ACTIONS(1492), 1,
      sym_blank_line,
    ACTIONS(1494), 1,
      sym__nested_indented_raw_text,
    STATE(186), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(197), 1,
      sym__nested_text_body_line,
    STATE(247), 1,
      sym__nested_text_body,
  [18792] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
    STATE(648), 1,
      sym_par_clause,
  [18808] = 5,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
    STATE(649), 1,
      sym_par_clause,
  [18824] = 5,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(130), 1,
      sym_inline_agic,
    STATE(602), 1,
      sym_runnable,
  [18840] = 5,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(111), 1,
      sym_inline_agic,
    STATE(632), 1,
      sym_runnable,
  [18856] = 5,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(114), 1,
      sym_inline_agic,
    STATE(634), 1,
      sym_runnable,
  [18872] = 5,
    ACTIONS(1496), 1,
      sym_blank_line,
    ACTIONS(1498), 1,
      sym__nested_indented_raw_text,
    STATE(26), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(48), 1,
      sym__nested_text_body_line,
    STATE(102), 1,
      sym__nested_text_body,
  [18888] = 3,
    ACTIONS(1478), 1,
      sym_snake_name,
    STATE(483), 1,
      sym_agent,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18900] = 3,
    ACTIONS(1478), 1,
      sym_snake_name,
    STATE(508), 1,
      sym_agent,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18912] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(218), 1,
      sym_inline_agic,
    STATE(596), 1,
      sym_runnable,
  [18928] = 3,
    ACTIONS(1500), 1,
      sym_integer_literal,
    ACTIONS(1502), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18940] = 5,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(233), 1,
      sym_inline_agic,
    STATE(597), 1,
      sym_runnable,
  [18956] = 3,
    ACTIONS(1504), 1,
      sym_integer_literal,
    ACTIONS(1506), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18968] = 5,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    ACTIONS(1454), 1,
      sym_snake_name,
    STATE(134), 1,
      sym_inline_agic,
    STATE(589), 1,
      sym_runnable,
  [18984] = 2,
    ACTIONS(1508), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18993] = 1,
    ACTIONS(1510), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [19000] = 2,
    ACTIONS(593), 1,
      sym_comment_line,
    ACTIONS(591), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19009] = 4,
    ACTIONS(1512), 1,
      sym_newline,
    ACTIONS(1514), 1,
      sym_inline_comment,
    STATE(308), 1,
      sym_line_end,
    STATE(368), 1,
      sym_prompt_body,
  [19022] = 1,
    ACTIONS(1516), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [19029] = 2,
    ACTIONS(1518), 1,
      sym_colon,
    ACTIONS(1369), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19038] = 2,
    ACTIONS(597), 1,
      sym_comment_line,
    ACTIONS(595), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19047] = 4,
    ACTIONS(1426), 1,
      sym_lparen,
    ACTIONS(1520), 1,
      sym_arrow,
    ACTIONS(1522), 1,
      sym_colon,
    STATE(666), 1,
      sym_params,
  [19060] = 1,
    ACTIONS(1524), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [19067] = 4,
    ACTIONS(1357), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(79), 1,
      sym_inline_agic_body,
    STATE(696), 1,
      sym_par_clause,
  [19080] = 3,
    ACTIONS(1526), 1,
      sym_optional_marker,
    ACTIONS(1528), 1,
      sym_colon,
    ACTIONS(1530), 2,
      sym_rparen,
      sym_comma,
  [19091] = 3,
    STATE(539), 1,
      sym_param_name,
    STATE(679), 1,
      sym_param,
    ACTIONS(1474), 2,
      anon_sym__,
      sym_snake_name,
  [19102] = 4,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(301), 1,
      sym_line_end,
    STATE(389), 1,
      sym_job_body,
  [19115] = 1,
    ACTIONS(1536), 4,
      sym_newline,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [19122] = 2,
    ACTIONS(1538), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19131] = 4,
    ACTIONS(1359), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(139), 1,
      sym_inline_agic_body,
    STATE(670), 1,
      sym_par_clause,
  [19144] = 4,
    ACTIONS(1355), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_flow_par_keyword,
    STATE(215), 1,
      sym_inline_agic_body,
    STATE(668), 1,
      sym_par_clause,
  [19157] = 4,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(301), 1,
      sym_line_end,
    STATE(385), 1,
      sym_job_body,
  [19170] = 4,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(302), 1,
      sym_line_end,
    STATE(371), 1,
      sym_cap_body,
  [19183] = 4,
    ACTIONS(1369), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1540), 1,
      sym_newline,
    ACTIONS(1542), 1,
      sym_inline_comment,
    STATE(369), 1,
      sym_line_end,
  [19196] = 2,
    ACTIONS(1544), 1,
      sym_colon,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19205] = 2,
    ACTIONS(1546), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19214] = 2,
    ACTIONS(1548), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19223] = 4,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(302), 1,
      sym_line_end,
    STATE(364), 1,
      sym_cap_body,
  [19236] = 4,
    ACTIONS(1426), 1,
      sym_lparen,
    ACTIONS(1550), 1,
      sym_arrow,
    ACTIONS(1552), 1,
      sym_colon,
    STATE(700), 1,
      sym_params,
  [19249] = 2,
    ACTIONS(1554), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19258] = 2,
    ACTIONS(1556), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19267] = 4,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(302), 1,
      sym_line_end,
    STATE(365), 1,
      sym_cap_body,
  [19280] = 2,
    STATE(722), 1,
      sym_directive_op,
    ACTIONS(1558), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19289] = 2,
    STATE(709), 1,
      sym_directive_op,
    ACTIONS(1558), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19298] = 2,
    ACTIONS(1560), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19307] = 2,
    ACTIONS(1562), 1,
      sym_integer_literal,
    ACTIONS(955), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19316] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_line_end,
  [19326] = 3,
    ACTIONS(1564), 1,
      sym_newline,
    ACTIONS(1566), 1,
      sym_inline_comment,
    STATE(343), 1,
      sym_line_end,
  [19336] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [19346] = 3,
    ACTIONS(1568), 1,
      sym_newline,
    ACTIONS(1570), 1,
      sym_inline_comment,
    STATE(377), 1,
      sym_line_end,
  [19356] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [19366] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [19376] = 3,
    ACTIONS(1576), 1,
      aux_sym_directive_value_token1,
    STATE(627), 1,
      sym_property_value,
    STATE(686), 1,
      sym_text_line,
  [19386] = 1,
    ACTIONS(1578), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19392] = 3,
    ACTIONS(1580), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_inline_comment,
    STATE(283), 1,
      sym_line_end,
  [19402] = 3,
    ACTIONS(1580), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_inline_comment,
    STATE(285), 1,
      sym_line_end,
  [19412] = 3,
    ACTIONS(1584), 1,
      sym_colon,
    ACTIONS(1586), 1,
      sym_snake_name,
    STATE(792), 1,
      sym_context_name,
  [19422] = 3,
    ACTIONS(1580), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_inline_comment,
    STATE(292), 1,
      sym_line_end,
  [19432] = 3,
    ACTIONS(1588), 1,
      sym_colon,
    ACTIONS(1590), 1,
      sym_snake_name,
    STATE(727), 1,
      sym_instruct_name,
  [19442] = 3,
    ACTIONS(1580), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_inline_comment,
    STATE(280), 1,
      sym_line_end,
  [19452] = 3,
    ACTIONS(1592), 1,
      sym_rparen,
    ACTIONS(1594), 1,
      sym_comma,
    STATE(577), 1,
      aux_sym_params_repeat1,
  [19462] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(184), 1,
      sym_line_end,
  [19472] = 3,
    ACTIONS(1594), 1,
      sym_comma,
    ACTIONS(1600), 1,
      sym_rparen,
    STATE(585), 1,
      aux_sym_params_repeat1,
  [19482] = 2,
    ACTIONS(1602), 1,
      sym_colon,
    ACTIONS(1604), 2,
      sym_rparen,
      sym_comma,
  [19490] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(182), 1,
      sym_line_end,
  [19500] = 1,
    ACTIONS(1606), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19506] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
  [19516] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_line_end,
  [19526] = 3,
    ACTIONS(1580), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_inline_comment,
    STATE(296), 1,
      sym_line_end,
  [19536] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(183), 1,
      sym_line_end,
  [19546] = 3,
    ACTIONS(1608), 1,
      sym_rparen,
    ACTIONS(1610), 1,
      sym_comma,
    STATE(585), 1,
      aux_sym_params_repeat1,
  [19556] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(181), 1,
      sym_line_end,
  [19566] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
  [19576] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
  [19586] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_line_end,
  [19596] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [19606] = 3,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    STATE(116), 1,
      sym_inline_agic,
  [19616] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
  [19626] = 3,
    ACTIONS(1568), 1,
      sym_newline,
    ACTIONS(1570), 1,
      sym_inline_comment,
    STATE(369), 1,
      sym_line_end,
  [19636] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [19646] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
  [19656] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(257), 1,
      sym_line_end,
  [19666] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [19676] = 3,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(259), 1,
      sym_inline_agic,
  [19686] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [19696] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(266), 1,
      sym_line_end,
  [19706] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(271), 1,
      sym_line_end,
  [19716] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
  [19726] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
  [19736] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [19746] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(216), 1,
      sym_line_end,
  [19756] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(115), 1,
      sym_line_end,
  [19766] = 3,
    ACTIONS(1613), 1,
      sym_newline,
    ACTIONS(1615), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
  [19776] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(220), 1,
      sym_line_end,
  [19786] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(221), 1,
      sym_line_end,
  [19796] = 3,
    ACTIONS(1406), 1,
      sym_arrow,
    ACTIONS(1408), 1,
      sym_colon,
    STATE(222), 1,
      sym_inline_agic,
  [19806] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(127), 1,
      sym_line_end,
  [19816] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(224), 1,
      sym_line_end,
  [19826] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
  [19836] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(226), 1,
      sym_line_end,
  [19846] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(228), 1,
      sym_line_end,
  [19856] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(231), 1,
      sym_line_end,
  [19866] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(232), 1,
      sym_line_end,
  [19876] = 1,
    ACTIONS(1621), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19882] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
  [19892] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
  [19902] = 3,
    ACTIONS(1623), 1,
      sym_pascal_name,
    STATE(737), 1,
      sym_struct_name,
    STATE(763), 1,
      sym_type_name,
  [19912] = 3,
    ACTIONS(1568), 1,
      sym_newline,
    ACTIONS(1570), 1,
      sym_inline_comment,
    STATE(373), 1,
      sym_line_end,
  [19922] = 1,
    ACTIONS(1440), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19928] = 1,
    ACTIONS(1625), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [19934] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [19944] = 3,
    ACTIONS(1564), 1,
      sym_newline,
    ACTIONS(1566), 1,
      sym_inline_comment,
    STATE(345), 1,
      sym_line_end,
  [19954] = 3,
    ACTIONS(1532), 1,
      sym_newline,
    ACTIONS(1534), 1,
      sym_inline_comment,
    STATE(315), 1,
      sym_line_end,
  [19964] = 3,
    ACTIONS(1627), 1,
      sym_newline,
    ACTIONS(1629), 1,
      sym_inline_comment,
    STATE(438), 1,
      sym_line_end,
  [19974] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(68), 1,
      sym_line_end,
  [19984] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(69), 1,
      sym_line_end,
  [19994] = 3,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(70), 1,
      sym_inline_agic,
  [20004] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
  [20014] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(74), 1,
      sym_line_end,
  [20024] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(119), 1,
      sym_line_end,
  [20034] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
  [20044] = 3,
    ACTIONS(1576), 1,
      aux_sym_directive_value_token1,
    STATE(622), 1,
      sym_cap_ref,
    STATE(683), 1,
      sym_text_line,
  [20054] = 3,
    ACTIONS(1414), 1,
      sym_arrow,
    ACTIONS(1416), 1,
      sym_colon,
    STATE(120), 1,
      sym_inline_agic,
  [20064] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(81), 1,
      sym_line_end,
  [20074] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(250), 1,
      sym_line_end,
  [20084] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(84), 1,
      sym_line_end,
  [20094] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(85), 1,
      sym_line_end,
  [20104] = 3,
    ACTIONS(1410), 1,
      sym_arrow,
    ACTIONS(1412), 1,
      sym_colon,
    STATE(86), 1,
      sym_inline_agic,
  [20114] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(88), 1,
      sym_line_end,
  [20124] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
  [20134] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
  [20144] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [20154] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
  [20164] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(95), 1,
      sym_line_end,
  [20174] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
  [20184] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(153), 1,
      sym_line_end,
  [20194] = 3,
    ACTIONS(1398), 1,
      sym_newline,
    ACTIONS(1400), 1,
      sym_inline_comment,
    STATE(103), 1,
      sym_line_end,
  [20204] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_line_end,
  [20214] = 3,
    ACTIONS(1572), 1,
      sym_newline,
    ACTIONS(1574), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [20224] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
  [20234] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [20244] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(138), 1,
      sym_line_end,
  [20254] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [20264] = 3,
    ACTIONS(1617), 1,
      sym_newline,
    ACTIONS(1619), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [20274] = 3,
    ACTIONS(1361), 1,
      sym_newline,
    ACTIONS(1363), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
  [20284] = 3,
    ACTIONS(1380), 1,
      sym_newline,
    ACTIONS(1382), 1,
      sym_inline_comment,
    STATE(225), 1,
      sym_line_end,
  [20294] = 2,
    ACTIONS(1631), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_assign_operator,
  [20301] = 2,
    ACTIONS(1633), 1,
      sym_snake_name,
    STATE(491), 1,
      sym_agent,
  [20308] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(152), 1,
      sym_inline_agic_body,
  [20315] = 2,
    ACTIONS(591), 1,
      sym__nested_indented_raw_text,
    ACTIONS(593), 1,
      sym_blank_line,
  [20322] = 2,
    ACTIONS(595), 1,
      sym__nested_indented_raw_text,
    ACTIONS(597), 1,
      sym_blank_line,
  [20329] = 2,
    ACTIONS(1635), 1,
      sym_arrow,
    ACTIONS(1637), 1,
      sym_colon,
  [20336] = 2,
    ACTIONS(1639), 1,
      sym__snake_kebab_name,
    STATE(744), 1,
      sym_cap_name,
  [20343] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(227), 1,
      sym_inline_agic_body,
  [20350] = 1,
    ACTIONS(1641), 2,
      sym_rparen,
      sym_comma,
  [20355] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(128), 1,
      sym_inline_agic_body,
  [20362] = 2,
    ACTIONS(1643), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_text_body_line,
  [20369] = 2,
    ACTIONS(1645), 1,
      sym_flow_until_keyword,
    STATE(235), 1,
      sym_until_statement,
  [20376] = 2,
    ACTIONS(1647), 1,
      sym_indented_raw_text,
    STATE(202), 1,
      sym_text_body_line,
  [20383] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(237), 1,
      sym_inline_agic_body,
  [20390] = 2,
    ACTIONS(1649), 1,
      sym_arrow,
    ACTIONS(1651), 1,
      sym_colon,
  [20397] = 2,
    ACTIONS(1653), 1,
      sym__snake_kebab_name,
    STATE(730), 1,
      sym_job_name,
  [20404] = 1,
    ACTIONS(1655), 2,
      sym_newline,
      sym_inline_comment,
  [20409] = 2,
    ACTIONS(1657), 1,
      sym_integer_literal,
    ACTIONS(1659), 1,
      sym_colon,
  [20416] = 1,
    ACTIONS(1661), 2,
      sym_rparen,
      sym_comma,
  [20421] = 2,
    ACTIONS(1631), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_assign_operator,
  [20428] = 1,
    ACTIONS(1663), 2,
      sym_arrow,
      sym_colon,
  [20433] = 1,
    ACTIONS(597), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20438] = 1,
    ACTIONS(1665), 2,
      sym_newline,
      sym_inline_comment,
  [20443] = 1,
    ACTIONS(1667), 2,
      sym_newline,
      sym_inline_comment,
  [20448] = 2,
    ACTIONS(1669), 1,
      sym_arrow,
    ACTIONS(1671), 1,
      sym_colon,
  [20455] = 1,
    ACTIONS(1673), 2,
      sym_newline,
      sym_inline_comment,
  [20460] = 1,
    ACTIONS(1675), 2,
      sym_rparen,
      sym_comma,
  [20465] = 2,
    ACTIONS(1639), 1,
      sym__snake_kebab_name,
    STATE(774), 1,
      sym_cap_name,
  [20472] = 2,
    ACTIONS(1639), 1,
      sym__snake_kebab_name,
    STATE(776), 1,
      sym_cap_name,
  [20479] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(73), 1,
      sym_inline_agic_body,
  [20486] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(76), 1,
      sym_inline_agic_body,
  [20493] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(79), 1,
      sym_inline_agic_body,
  [20500] = 2,
    ACTIONS(1677), 1,
      sym_indented_raw_text,
    STATE(287), 1,
      sym__unroled_message_continuation_line,
  [20507] = 2,
    ACTIONS(1679), 1,
      anon_sym_EQ,
    STATE(567), 1,
      sym_assign_operator,
  [20514] = 1,
    ACTIONS(1681), 2,
      sym_newline,
      sym_inline_comment,
  [20519] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(91), 1,
      sym_inline_agic_body,
  [20526] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(148), 1,
      sym_inline_agic_body,
  [20533] = 1,
    ACTIONS(1683), 2,
      sym_arrow,
      sym_colon,
  [20538] = 1,
    ACTIONS(1685), 2,
      sym_newline,
      sym_inline_comment,
  [20543] = 2,
    ACTIONS(1687), 1,
      sym_arrow,
    ACTIONS(1689), 1,
      sym_colon,
  [20550] = 2,
    ACTIONS(1691), 1,
      sym_flow_until_keyword,
    STATE(98), 1,
      sym_until_statement,
  [20557] = 2,
    ACTIONS(1693), 1,
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
  [20564] = 2,
    ACTIONS(1357), 1,
      sym_colon,
    STATE(100), 1,
      sym_inline_agic_body,
  [20571] = 2,
    ACTIONS(1639), 1,
      sym__snake_kebab_name,
    STATE(795), 1,
      sym_cap_name,
  [20578] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(263), 1,
      sym_inline_agic_body,
  [20585] = 1,
    ACTIONS(593), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20590] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(155), 1,
      sym_inline_agic_body,
  [20597] = 2,
    ACTIONS(1653), 1,
      sym__snake_kebab_name,
    STATE(733), 1,
      sym_job_name,
  [20604] = 2,
    ACTIONS(1695), 1,
      aux_sym_directive_value_token1,
    STATE(607), 1,
      sym_directive_value,
  [20611] = 2,
    ACTIONS(1633), 1,
      sym_snake_name,
    STATE(483), 1,
      sym_agent,
  [20618] = 2,
    ACTIONS(1631), 1,
      anon_sym_EQ,
    STATE(209), 1,
      sym_assign_operator,
  [20625] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(268), 1,
      sym_inline_agic_body,
  [20632] = 1,
    ACTIONS(1697), 2,
      sym_optional_marker,
      sym_colon,
  [20637] = 2,
    ACTIONS(1359), 1,
      sym_colon,
    STATE(139), 1,
      sym_inline_agic_body,
  [20644] = 2,
    ACTIONS(1633), 1,
      sym_snake_name,
    STATE(508), 1,
      sym_agent,
  [20651] = 2,
    ACTIONS(1699), 1,
      sym_flow_until_keyword,
    STATE(146), 1,
      sym_until_statement,
  [20658] = 2,
    ACTIONS(1355), 1,
      sym_colon,
    STATE(215), 1,
      sym_inline_agic_body,
  [20665] = 1,
    ACTIONS(1701), 2,
      sym_arrow,
      sym_colon,
  [20670] = 2,
    ACTIONS(1703), 1,
      sym_optional_marker,
    ACTIONS(1705), 1,
      sym_colon,
  [20677] = 2,
    ACTIONS(1707), 1,
      sym_integer_literal,
    ACTIONS(1709), 1,
      sym_colon,
  [20684] = 2,
    ACTIONS(1711), 1,
      sym_integer_literal,
    ACTIONS(1713), 1,
      sym_colon,
  [20691] = 2,
    ACTIONS(1695), 1,
      aux_sym_directive_value_token1,
    STATE(574), 1,
      sym_directive_value,
  [20698] = 1,
    ACTIONS(1715), 1,
      sym_newline,
  [20702] = 1,
    ACTIONS(1717), 1,
      anon_sym_EQ,
  [20706] = 1,
    ACTIONS(1719), 1,
      sym_colon,
  [20710] = 1,
    ACTIONS(1721), 1,
      sym_newline,
  [20714] = 1,
    ACTIONS(1723), 1,
      sym_colon,
  [20718] = 1,
    ACTIONS(1725), 1,
      sym_colon,
  [20722] = 1,
    ACTIONS(1727), 1,
      sym_colon,
  [20726] = 1,
    ACTIONS(1729), 1,
      sym_colon,
  [20730] = 1,
    ACTIONS(1731), 1,
      sym_colon,
  [20734] = 1,
    ACTIONS(1733), 1,
      sym_integer_literal,
  [20738] = 1,
    ACTIONS(1735), 1,
      sym_colon,
  [20742] = 1,
    ACTIONS(1737), 1,
      aux_sym_directive_value_token1,
  [20746] = 1,
    ACTIONS(1739), 1,
      anon_sym_EQ,
  [20750] = 1,
    ACTIONS(1741), 1,
      sym_newline,
  [20754] = 1,
    ACTIONS(1743), 1,
      sym_colon,
  [20758] = 1,
    ACTIONS(1745), 1,
      sym_newline,
  [20762] = 1,
    ACTIONS(1747), 1,
      sym_colon,
  [20766] = 1,
    ACTIONS(1749), 1,
      sym_newline,
  [20770] = 1,
    ACTIONS(1751), 1,
      sym_newline,
  [20774] = 1,
    ACTIONS(1753), 1,
      sym_colon,
  [20778] = 1,
    ACTIONS(1755), 1,
      aux_sym_directive_value_token1,
  [20782] = 1,
    ACTIONS(1757), 1,
      sym_colon,
  [20786] = 1,
    ACTIONS(1759), 1,
      sym_colon,
  [20790] = 1,
    ACTIONS(1761), 1,
      sym_colon,
  [20794] = 1,
    ACTIONS(1763), 1,
      sym_newline,
  [20798] = 1,
    ACTIONS(1765), 1,
      sym_newline,
  [20802] = 1,
    ACTIONS(1767), 1,
      sym_newline,
  [20806] = 1,
    ACTIONS(1769), 1,
      sym_colon,
  [20810] = 1,
    ACTIONS(1771), 1,
      sym_colon,
  [20814] = 1,
    ACTIONS(1773), 1,
      sym_newline,
  [20818] = 1,
    ACTIONS(1775), 1,
      sym_newline,
  [20822] = 1,
    ACTIONS(1777), 1,
      sym_newline,
  [20826] = 1,
    ACTIONS(1779), 1,
      sym_newline,
  [20830] = 1,
    ACTIONS(1781), 1,
      sym_newline,
  [20834] = 1,
    ACTIONS(1783), 1,
      sym_newline,
  [20838] = 1,
    ACTIONS(1785), 1,
      sym_newline,
  [20842] = 1,
    ACTIONS(1787), 1,
      sym_newline,
  [20846] = 1,
    ACTIONS(1789), 1,
      sym_newline,
  [20850] = 1,
    ACTIONS(1791), 1,
      sym_newline,
  [20854] = 1,
    ACTIONS(1793), 1,
      sym_newline,
  [20858] = 1,
    ACTIONS(1795), 1,
      sym_colon,
  [20862] = 1,
    ACTIONS(1797), 1,
      sym_newline,
  [20866] = 1,
    ACTIONS(1799), 1,
      sym_newline,
  [20870] = 1,
    ACTIONS(1801), 1,
      sym_colon,
  [20874] = 1,
    ACTIONS(1803), 1,
      sym_newline,
  [20878] = 1,
    ACTIONS(1805), 1,
      sym_newline,
  [20882] = 1,
    ACTIONS(1807), 1,
      sym_integer_literal,
  [20886] = 1,
    ACTIONS(1809), 1,
      sym_colon,
  [20890] = 1,
    ACTIONS(1811), 1,
      sym_integer_literal,
  [20894] = 1,
    ACTIONS(1813), 1,
      sym_integer_literal,
  [20898] = 1,
    ACTIONS(1815), 1,
      sym_colon,
  [20902] = 1,
    ACTIONS(1817), 1,
      sym_colon,
  [20906] = 1,
    ACTIONS(1819), 1,
      sym_colon,
  [20910] = 1,
    ACTIONS(1821), 1,
      sym_colon,
  [20914] = 1,
    ACTIONS(1823), 1,
      sym_integer_literal,
  [20918] = 1,
    ACTIONS(1825), 1,
      sym_colon,
  [20922] = 1,
    ACTIONS(1827), 1,
      sym_newline,
  [20926] = 1,
    ACTIONS(1829), 1,
      sym_colon,
  [20930] = 1,
    ACTIONS(1831), 1,
      sym_integer_literal,
  [20934] = 1,
    ACTIONS(1833), 1,
      sym_colon,
  [20938] = 1,
    ACTIONS(1835), 1,
      sym_integer_literal,
  [20942] = 1,
    ACTIONS(1837), 1,
      sym_integer_literal,
  [20946] = 1,
    ACTIONS(1839), 1,
      sym_newline,
  [20950] = 1,
    ACTIONS(1841), 1,
      sym_colon,
  [20954] = 1,
    ACTIONS(1843), 1,
      sym_colon,
  [20958] = 1,
    ACTIONS(1845), 1,
      sym_newline,
  [20962] = 1,
    ACTIONS(1847), 1,
      sym_newline,
  [20966] = 1,
    ACTIONS(1849), 1,
      ts_builtin_sym_end,
  [20970] = 1,
    ACTIONS(1851), 1,
      sym_colon,
  [20974] = 1,
    ACTIONS(1853), 1,
      sym_colon,
  [20978] = 1,
    ACTIONS(1855), 1,
      sym_colon,
  [20982] = 1,
    ACTIONS(1857), 1,
      sym_cap_kind,
  [20986] = 1,
    ACTIONS(1859), 1,
      sym_colon,
  [20990] = 1,
    ACTIONS(1861), 1,
      sym_integer_literal,
  [20994] = 1,
    ACTIONS(1863), 1,
      sym_colon,
  [20998] = 1,
    ACTIONS(1865), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 94,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 876,
  [SMALL_STATE(29)] = 937,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1115,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1261,
  [SMALL_STATE(34)] = 1319,
  [SMALL_STATE(35)] = 1377,
  [SMALL_STATE(36)] = 1437,
  [SMALL_STATE(37)] = 1493,
  [SMALL_STATE(38)] = 1551,
  [SMALL_STATE(39)] = 1607,
  [SMALL_STATE(40)] = 1693,
  [SMALL_STATE(41)] = 1744,
  [SMALL_STATE(42)] = 1799,
  [SMALL_STATE(43)] = 1854,
  [SMALL_STATE(44)] = 1909,
  [SMALL_STATE(45)] = 1964,
  [SMALL_STATE(46)] = 2015,
  [SMALL_STATE(47)] = 2066,
  [SMALL_STATE(48)] = 2117,
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
  [SMALL_STATE(161)] = 7747,
  [SMALL_STATE(162)] = 7801,
  [SMALL_STATE(163)] = 7855,
  [SMALL_STATE(164)] = 7937,
  [SMALL_STATE(165)] = 7991,
  [SMALL_STATE(166)] = 8040,
  [SMALL_STATE(167)] = 8109,
  [SMALL_STATE(168)] = 8152,
  [SMALL_STATE(169)] = 8195,
  [SMALL_STATE(170)] = 8264,
  [SMALL_STATE(171)] = 8333,
  [SMALL_STATE(172)] = 8397,
  [SMALL_STATE(173)] = 8439,
  [SMALL_STATE(174)] = 8503,
  [SMALL_STATE(175)] = 8567,
  [SMALL_STATE(176)] = 8609,
  [SMALL_STATE(177)] = 8651,
  [SMALL_STATE(178)] = 8730,
  [SMALL_STATE(179)] = 8809,
  [SMALL_STATE(180)] = 8888,
  [SMALL_STATE(181)] = 8967,
  [SMALL_STATE(182)] = 9046,
  [SMALL_STATE(183)] = 9125,
  [SMALL_STATE(184)] = 9204,
  [SMALL_STATE(185)] = 9283,
  [SMALL_STATE(186)] = 9359,
  [SMALL_STATE(187)] = 9405,
  [SMALL_STATE(188)] = 9449,
  [SMALL_STATE(189)] = 9495,
  [SMALL_STATE(190)] = 9539,
  [SMALL_STATE(191)] = 9583,
  [SMALL_STATE(192)] = 9630,
  [SMALL_STATE(193)] = 9677,
  [SMALL_STATE(194)] = 9724,
  [SMALL_STATE(195)] = 9765,
  [SMALL_STATE(196)] = 9806,
  [SMALL_STATE(197)] = 9842,
  [SMALL_STATE(198)] = 9878,
  [SMALL_STATE(199)] = 9914,
  [SMALL_STATE(200)] = 9960,
  [SMALL_STATE(201)] = 10006,
  [SMALL_STATE(202)] = 10052,
  [SMALL_STATE(203)] = 10088,
  [SMALL_STATE(204)] = 10134,
  [SMALL_STATE(205)] = 10180,
  [SMALL_STATE(206)] = 10254,
  [SMALL_STATE(207)] = 10290,
  [SMALL_STATE(208)] = 10330,
  [SMALL_STATE(209)] = 10376,
  [SMALL_STATE(210)] = 10450,
  [SMALL_STATE(211)] = 10524,
  [SMALL_STATE(212)] = 10559,
  [SMALL_STATE(213)] = 10594,
  [SMALL_STATE(214)] = 10635,
  [SMALL_STATE(215)] = 10670,
  [SMALL_STATE(216)] = 10705,
  [SMALL_STATE(217)] = 10740,
  [SMALL_STATE(218)] = 10807,
  [SMALL_STATE(219)] = 10842,
  [SMALL_STATE(220)] = 10877,
  [SMALL_STATE(221)] = 10912,
  [SMALL_STATE(222)] = 10947,
  [SMALL_STATE(223)] = 10982,
  [SMALL_STATE(224)] = 11017,
  [SMALL_STATE(225)] = 11052,
  [SMALL_STATE(226)] = 11087,
  [SMALL_STATE(227)] = 11122,
  [SMALL_STATE(228)] = 11157,
  [SMALL_STATE(229)] = 11192,
  [SMALL_STATE(230)] = 11227,
  [SMALL_STATE(231)] = 11262,
  [SMALL_STATE(232)] = 11297,
  [SMALL_STATE(233)] = 11332,
  [SMALL_STATE(234)] = 11367,
  [SMALL_STATE(235)] = 11402,
  [SMALL_STATE(236)] = 11437,
  [SMALL_STATE(237)] = 11472,
  [SMALL_STATE(238)] = 11507,
  [SMALL_STATE(239)] = 11542,
  [SMALL_STATE(240)] = 11577,
  [SMALL_STATE(241)] = 11612,
  [SMALL_STATE(242)] = 11647,
  [SMALL_STATE(243)] = 11682,
  [SMALL_STATE(244)] = 11723,
  [SMALL_STATE(245)] = 11764,
  [SMALL_STATE(246)] = 11805,
  [SMALL_STATE(247)] = 11850,
  [SMALL_STATE(248)] = 11885,
  [SMALL_STATE(249)] = 11920,
  [SMALL_STATE(250)] = 11965,
  [SMALL_STATE(251)] = 12000,
  [SMALL_STATE(252)] = 12035,
  [SMALL_STATE(253)] = 12070,
  [SMALL_STATE(254)] = 12105,
  [SMALL_STATE(255)] = 12140,
  [SMALL_STATE(256)] = 12175,
  [SMALL_STATE(257)] = 12210,
  [SMALL_STATE(258)] = 12245,
  [SMALL_STATE(259)] = 12280,
  [SMALL_STATE(260)] = 12315,
  [SMALL_STATE(261)] = 12360,
  [SMALL_STATE(262)] = 12395,
  [SMALL_STATE(263)] = 12430,
  [SMALL_STATE(264)] = 12465,
  [SMALL_STATE(265)] = 12506,
  [SMALL_STATE(266)] = 12573,
  [SMALL_STATE(267)] = 12608,
  [SMALL_STATE(268)] = 12643,
  [SMALL_STATE(269)] = 12678,
  [SMALL_STATE(270)] = 12713,
  [SMALL_STATE(271)] = 12748,
  [SMALL_STATE(272)] = 12783,
  [SMALL_STATE(273)] = 12818,
  [SMALL_STATE(274)] = 12853,
  [SMALL_STATE(275)] = 12889,
  [SMALL_STATE(276)] = 12929,
  [SMALL_STATE(277)] = 12965,
  [SMALL_STATE(278)] = 13005,
  [SMALL_STATE(279)] = 13040,
  [SMALL_STATE(280)] = 13075,
  [SMALL_STATE(281)] = 13110,
  [SMALL_STATE(282)] = 13145,
  [SMALL_STATE(283)] = 13180,
  [SMALL_STATE(284)] = 13215,
  [SMALL_STATE(285)] = 13250,
  [SMALL_STATE(286)] = 13285,
  [SMALL_STATE(287)] = 13320,
  [SMALL_STATE(288)] = 13355,
  [SMALL_STATE(289)] = 13418,
  [SMALL_STATE(290)] = 13453,
  [SMALL_STATE(291)] = 13488,
  [SMALL_STATE(292)] = 13523,
  [SMALL_STATE(293)] = 13558,
  [SMALL_STATE(294)] = 13593,
  [SMALL_STATE(295)] = 13628,
  [SMALL_STATE(296)] = 13663,
  [SMALL_STATE(297)] = 13698,
  [SMALL_STATE(298)] = 13761,
  [SMALL_STATE(299)] = 13824,
  [SMALL_STATE(300)] = 13854,
  [SMALL_STATE(301)] = 13884,
  [SMALL_STATE(302)] = 13931,
  [SMALL_STATE(303)] = 13978,
  [SMALL_STATE(304)] = 14025,
  [SMALL_STATE(305)] = 14072,
  [SMALL_STATE(306)] = 14108,
  [SMALL_STATE(307)] = 14144,
  [SMALL_STATE(308)] = 14180,
  [SMALL_STATE(309)] = 14216,
  [SMALL_STATE(310)] = 14244,
  [SMALL_STATE(311)] = 14275,
  [SMALL_STATE(312)] = 14308,
  [SMALL_STATE(313)] = 14341,
  [SMALL_STATE(314)] = 14372,
  [SMALL_STATE(315)] = 14400,
  [SMALL_STATE(316)] = 14424,
  [SMALL_STATE(317)] = 14452,
  [SMALL_STATE(318)] = 14480,
  [SMALL_STATE(319)] = 14508,
  [SMALL_STATE(320)] = 14536,
  [SMALL_STATE(321)] = 14564,
  [SMALL_STATE(322)] = 14592,
  [SMALL_STATE(323)] = 14620,
  [SMALL_STATE(324)] = 14648,
  [SMALL_STATE(325)] = 14676,
  [SMALL_STATE(326)] = 14704,
  [SMALL_STATE(327)] = 14732,
  [SMALL_STATE(328)] = 14756,
  [SMALL_STATE(329)] = 14784,
  [SMALL_STATE(330)] = 14812,
  [SMALL_STATE(331)] = 14840,
  [SMALL_STATE(332)] = 14862,
  [SMALL_STATE(333)] = 14884,
  [SMALL_STATE(334)] = 14912,
  [SMALL_STATE(335)] = 14940,
  [SMALL_STATE(336)] = 14968,
  [SMALL_STATE(337)] = 14994,
  [SMALL_STATE(338)] = 15022,
  [SMALL_STATE(339)] = 15050,
  [SMALL_STATE(340)] = 15078,
  [SMALL_STATE(341)] = 15106,
  [SMALL_STATE(342)] = 15134,
  [SMALL_STATE(343)] = 15158,
  [SMALL_STATE(344)] = 15181,
  [SMALL_STATE(345)] = 15204,
  [SMALL_STATE(346)] = 15227,
  [SMALL_STATE(347)] = 15250,
  [SMALL_STATE(348)] = 15273,
  [SMALL_STATE(349)] = 15296,
  [SMALL_STATE(350)] = 15319,
  [SMALL_STATE(351)] = 15342,
  [SMALL_STATE(352)] = 15365,
  [SMALL_STATE(353)] = 15387,
  [SMALL_STATE(354)] = 15409,
  [SMALL_STATE(355)] = 15431,
  [SMALL_STATE(356)] = 15453,
  [SMALL_STATE(357)] = 15475,
  [SMALL_STATE(358)] = 15497,
  [SMALL_STATE(359)] = 15519,
  [SMALL_STATE(360)] = 15541,
  [SMALL_STATE(361)] = 15563,
  [SMALL_STATE(362)] = 15585,
  [SMALL_STATE(363)] = 15607,
  [SMALL_STATE(364)] = 15629,
  [SMALL_STATE(365)] = 15651,
  [SMALL_STATE(366)] = 15673,
  [SMALL_STATE(367)] = 15695,
  [SMALL_STATE(368)] = 15717,
  [SMALL_STATE(369)] = 15739,
  [SMALL_STATE(370)] = 15761,
  [SMALL_STATE(371)] = 15783,
  [SMALL_STATE(372)] = 15805,
  [SMALL_STATE(373)] = 15827,
  [SMALL_STATE(374)] = 15849,
  [SMALL_STATE(375)] = 15871,
  [SMALL_STATE(376)] = 15893,
  [SMALL_STATE(377)] = 15915,
  [SMALL_STATE(378)] = 15937,
  [SMALL_STATE(379)] = 15959,
  [SMALL_STATE(380)] = 15981,
  [SMALL_STATE(381)] = 16003,
  [SMALL_STATE(382)] = 16025,
  [SMALL_STATE(383)] = 16047,
  [SMALL_STATE(384)] = 16069,
  [SMALL_STATE(385)] = 16091,
  [SMALL_STATE(386)] = 16113,
  [SMALL_STATE(387)] = 16135,
  [SMALL_STATE(388)] = 16157,
  [SMALL_STATE(389)] = 16179,
  [SMALL_STATE(390)] = 16201,
  [SMALL_STATE(391)] = 16219,
  [SMALL_STATE(392)] = 16244,
  [SMALL_STATE(393)] = 16269,
  [SMALL_STATE(394)] = 16294,
  [SMALL_STATE(395)] = 16319,
  [SMALL_STATE(396)] = 16344,
  [SMALL_STATE(397)] = 16375,
  [SMALL_STATE(398)] = 16406,
  [SMALL_STATE(399)] = 16437,
  [SMALL_STATE(400)] = 16462,
  [SMALL_STATE(401)] = 16487,
  [SMALL_STATE(402)] = 16512,
  [SMALL_STATE(403)] = 16537,
  [SMALL_STATE(404)] = 16568,
  [SMALL_STATE(405)] = 16599,
  [SMALL_STATE(406)] = 16630,
  [SMALL_STATE(407)] = 16655,
  [SMALL_STATE(408)] = 16680,
  [SMALL_STATE(409)] = 16705,
  [SMALL_STATE(410)] = 16730,
  [SMALL_STATE(411)] = 16755,
  [SMALL_STATE(412)] = 16786,
  [SMALL_STATE(413)] = 16817,
  [SMALL_STATE(414)] = 16842,
  [SMALL_STATE(415)] = 16873,
  [SMALL_STATE(416)] = 16900,
  [SMALL_STATE(417)] = 16927,
  [SMALL_STATE(418)] = 16954,
  [SMALL_STATE(419)] = 16980,
  [SMALL_STATE(420)] = 17006,
  [SMALL_STATE(421)] = 17032,
  [SMALL_STATE(422)] = 17058,
  [SMALL_STATE(423)] = 17084,
  [SMALL_STATE(424)] = 17110,
  [SMALL_STATE(425)] = 17136,
  [SMALL_STATE(426)] = 17162,
  [SMALL_STATE(427)] = 17188,
  [SMALL_STATE(428)] = 17211,
  [SMALL_STATE(429)] = 17232,
  [SMALL_STATE(430)] = 17255,
  [SMALL_STATE(431)] = 17276,
  [SMALL_STATE(432)] = 17293,
  [SMALL_STATE(433)] = 17310,
  [SMALL_STATE(434)] = 17331,
  [SMALL_STATE(435)] = 17354,
  [SMALL_STATE(436)] = 17377,
  [SMALL_STATE(437)] = 17400,
  [SMALL_STATE(438)] = 17423,
  [SMALL_STATE(439)] = 17444,
  [SMALL_STATE(440)] = 17467,
  [SMALL_STATE(441)] = 17490,
  [SMALL_STATE(442)] = 17511,
  [SMALL_STATE(443)] = 17532,
  [SMALL_STATE(444)] = 17555,
  [SMALL_STATE(445)] = 17576,
  [SMALL_STATE(446)] = 17597,
  [SMALL_STATE(447)] = 17622,
  [SMALL_STATE(448)] = 17647,
  [SMALL_STATE(449)] = 17664,
  [SMALL_STATE(450)] = 17689,
  [SMALL_STATE(451)] = 17712,
  [SMALL_STATE(452)] = 17737,
  [SMALL_STATE(453)] = 17760,
  [SMALL_STATE(454)] = 17783,
  [SMALL_STATE(455)] = 17806,
  [SMALL_STATE(456)] = 17829,
  [SMALL_STATE(457)] = 17852,
  [SMALL_STATE(458)] = 17875,
  [SMALL_STATE(459)] = 17898,
  [SMALL_STATE(460)] = 17915,
  [SMALL_STATE(461)] = 17938,
  [SMALL_STATE(462)] = 17955,
  [SMALL_STATE(463)] = 17976,
  [SMALL_STATE(464)] = 17997,
  [SMALL_STATE(465)] = 18019,
  [SMALL_STATE(466)] = 18041,
  [SMALL_STATE(467)] = 18063,
  [SMALL_STATE(468)] = 18085,
  [SMALL_STATE(469)] = 18107,
  [SMALL_STATE(470)] = 18121,
  [SMALL_STATE(471)] = 18143,
  [SMALL_STATE(472)] = 18152,
  [SMALL_STATE(473)] = 18171,
  [SMALL_STATE(474)] = 18180,
  [SMALL_STATE(475)] = 18189,
  [SMALL_STATE(476)] = 18198,
  [SMALL_STATE(477)] = 18207,
  [SMALL_STATE(478)] = 18216,
  [SMALL_STATE(479)] = 18225,
  [SMALL_STATE(480)] = 18244,
  [SMALL_STATE(481)] = 18256,
  [SMALL_STATE(482)] = 18268,
  [SMALL_STATE(483)] = 18284,
  [SMALL_STATE(484)] = 18300,
  [SMALL_STATE(485)] = 18316,
  [SMALL_STATE(486)] = 18332,
  [SMALL_STATE(487)] = 18348,
  [SMALL_STATE(488)] = 18364,
  [SMALL_STATE(489)] = 18380,
  [SMALL_STATE(490)] = 18396,
  [SMALL_STATE(491)] = 18412,
  [SMALL_STATE(492)] = 18428,
  [SMALL_STATE(493)] = 18444,
  [SMALL_STATE(494)] = 18460,
  [SMALL_STATE(495)] = 18476,
  [SMALL_STATE(496)] = 18492,
  [SMALL_STATE(497)] = 18508,
  [SMALL_STATE(498)] = 18524,
  [SMALL_STATE(499)] = 18538,
  [SMALL_STATE(500)] = 18554,
  [SMALL_STATE(501)] = 18568,
  [SMALL_STATE(502)] = 18584,
  [SMALL_STATE(503)] = 18600,
  [SMALL_STATE(504)] = 18616,
  [SMALL_STATE(505)] = 18628,
  [SMALL_STATE(506)] = 18644,
  [SMALL_STATE(507)] = 18656,
  [SMALL_STATE(508)] = 18672,
  [SMALL_STATE(509)] = 18688,
  [SMALL_STATE(510)] = 18704,
  [SMALL_STATE(511)] = 18720,
  [SMALL_STATE(512)] = 18736,
  [SMALL_STATE(513)] = 18752,
  [SMALL_STATE(514)] = 18768,
  [SMALL_STATE(515)] = 18776,
  [SMALL_STATE(516)] = 18792,
  [SMALL_STATE(517)] = 18808,
  [SMALL_STATE(518)] = 18824,
  [SMALL_STATE(519)] = 18840,
  [SMALL_STATE(520)] = 18856,
  [SMALL_STATE(521)] = 18872,
  [SMALL_STATE(522)] = 18888,
  [SMALL_STATE(523)] = 18900,
  [SMALL_STATE(524)] = 18912,
  [SMALL_STATE(525)] = 18928,
  [SMALL_STATE(526)] = 18940,
  [SMALL_STATE(527)] = 18956,
  [SMALL_STATE(528)] = 18968,
  [SMALL_STATE(529)] = 18984,
  [SMALL_STATE(530)] = 18993,
  [SMALL_STATE(531)] = 19000,
  [SMALL_STATE(532)] = 19009,
  [SMALL_STATE(533)] = 19022,
  [SMALL_STATE(534)] = 19029,
  [SMALL_STATE(535)] = 19038,
  [SMALL_STATE(536)] = 19047,
  [SMALL_STATE(537)] = 19060,
  [SMALL_STATE(538)] = 19067,
  [SMALL_STATE(539)] = 19080,
  [SMALL_STATE(540)] = 19091,
  [SMALL_STATE(541)] = 19102,
  [SMALL_STATE(542)] = 19115,
  [SMALL_STATE(543)] = 19122,
  [SMALL_STATE(544)] = 19131,
  [SMALL_STATE(545)] = 19144,
  [SMALL_STATE(546)] = 19157,
  [SMALL_STATE(547)] = 19170,
  [SMALL_STATE(548)] = 19183,
  [SMALL_STATE(549)] = 19196,
  [SMALL_STATE(550)] = 19205,
  [SMALL_STATE(551)] = 19214,
  [SMALL_STATE(552)] = 19223,
  [SMALL_STATE(553)] = 19236,
  [SMALL_STATE(554)] = 19249,
  [SMALL_STATE(555)] = 19258,
  [SMALL_STATE(556)] = 19267,
  [SMALL_STATE(557)] = 19280,
  [SMALL_STATE(558)] = 19289,
  [SMALL_STATE(559)] = 19298,
  [SMALL_STATE(560)] = 19307,
  [SMALL_STATE(561)] = 19316,
  [SMALL_STATE(562)] = 19326,
  [SMALL_STATE(563)] = 19336,
  [SMALL_STATE(564)] = 19346,
  [SMALL_STATE(565)] = 19356,
  [SMALL_STATE(566)] = 19366,
  [SMALL_STATE(567)] = 19376,
  [SMALL_STATE(568)] = 19386,
  [SMALL_STATE(569)] = 19392,
  [SMALL_STATE(570)] = 19402,
  [SMALL_STATE(571)] = 19412,
  [SMALL_STATE(572)] = 19422,
  [SMALL_STATE(573)] = 19432,
  [SMALL_STATE(574)] = 19442,
  [SMALL_STATE(575)] = 19452,
  [SMALL_STATE(576)] = 19462,
  [SMALL_STATE(577)] = 19472,
  [SMALL_STATE(578)] = 19482,
  [SMALL_STATE(579)] = 19490,
  [SMALL_STATE(580)] = 19500,
  [SMALL_STATE(581)] = 19506,
  [SMALL_STATE(582)] = 19516,
  [SMALL_STATE(583)] = 19526,
  [SMALL_STATE(584)] = 19536,
  [SMALL_STATE(585)] = 19546,
  [SMALL_STATE(586)] = 19556,
  [SMALL_STATE(587)] = 19566,
  [SMALL_STATE(588)] = 19576,
  [SMALL_STATE(589)] = 19586,
  [SMALL_STATE(590)] = 19596,
  [SMALL_STATE(591)] = 19606,
  [SMALL_STATE(592)] = 19616,
  [SMALL_STATE(593)] = 19626,
  [SMALL_STATE(594)] = 19636,
  [SMALL_STATE(595)] = 19646,
  [SMALL_STATE(596)] = 19656,
  [SMALL_STATE(597)] = 19666,
  [SMALL_STATE(598)] = 19676,
  [SMALL_STATE(599)] = 19686,
  [SMALL_STATE(600)] = 19696,
  [SMALL_STATE(601)] = 19706,
  [SMALL_STATE(602)] = 19716,
  [SMALL_STATE(603)] = 19726,
  [SMALL_STATE(604)] = 19736,
  [SMALL_STATE(605)] = 19746,
  [SMALL_STATE(606)] = 19756,
  [SMALL_STATE(607)] = 19766,
  [SMALL_STATE(608)] = 19776,
  [SMALL_STATE(609)] = 19786,
  [SMALL_STATE(610)] = 19796,
  [SMALL_STATE(611)] = 19806,
  [SMALL_STATE(612)] = 19816,
  [SMALL_STATE(613)] = 19826,
  [SMALL_STATE(614)] = 19836,
  [SMALL_STATE(615)] = 19846,
  [SMALL_STATE(616)] = 19856,
  [SMALL_STATE(617)] = 19866,
  [SMALL_STATE(618)] = 19876,
  [SMALL_STATE(619)] = 19882,
  [SMALL_STATE(620)] = 19892,
  [SMALL_STATE(621)] = 19902,
  [SMALL_STATE(622)] = 19912,
  [SMALL_STATE(623)] = 19922,
  [SMALL_STATE(624)] = 19928,
  [SMALL_STATE(625)] = 19934,
  [SMALL_STATE(626)] = 19944,
  [SMALL_STATE(627)] = 19954,
  [SMALL_STATE(628)] = 19964,
  [SMALL_STATE(629)] = 19974,
  [SMALL_STATE(630)] = 19984,
  [SMALL_STATE(631)] = 19994,
  [SMALL_STATE(632)] = 20004,
  [SMALL_STATE(633)] = 20014,
  [SMALL_STATE(634)] = 20024,
  [SMALL_STATE(635)] = 20034,
  [SMALL_STATE(636)] = 20044,
  [SMALL_STATE(637)] = 20054,
  [SMALL_STATE(638)] = 20064,
  [SMALL_STATE(639)] = 20074,
  [SMALL_STATE(640)] = 20084,
  [SMALL_STATE(641)] = 20094,
  [SMALL_STATE(642)] = 20104,
  [SMALL_STATE(643)] = 20114,
  [SMALL_STATE(644)] = 20124,
  [SMALL_STATE(645)] = 20134,
  [SMALL_STATE(646)] = 20144,
  [SMALL_STATE(647)] = 20154,
  [SMALL_STATE(648)] = 20164,
  [SMALL_STATE(649)] = 20174,
  [SMALL_STATE(650)] = 20184,
  [SMALL_STATE(651)] = 20194,
  [SMALL_STATE(652)] = 20204,
  [SMALL_STATE(653)] = 20214,
  [SMALL_STATE(654)] = 20224,
  [SMALL_STATE(655)] = 20234,
  [SMALL_STATE(656)] = 20244,
  [SMALL_STATE(657)] = 20254,
  [SMALL_STATE(658)] = 20264,
  [SMALL_STATE(659)] = 20274,
  [SMALL_STATE(660)] = 20284,
  [SMALL_STATE(661)] = 20294,
  [SMALL_STATE(662)] = 20301,
  [SMALL_STATE(663)] = 20308,
  [SMALL_STATE(664)] = 20315,
  [SMALL_STATE(665)] = 20322,
  [SMALL_STATE(666)] = 20329,
  [SMALL_STATE(667)] = 20336,
  [SMALL_STATE(668)] = 20343,
  [SMALL_STATE(669)] = 20350,
  [SMALL_STATE(670)] = 20355,
  [SMALL_STATE(671)] = 20362,
  [SMALL_STATE(672)] = 20369,
  [SMALL_STATE(673)] = 20376,
  [SMALL_STATE(674)] = 20383,
  [SMALL_STATE(675)] = 20390,
  [SMALL_STATE(676)] = 20397,
  [SMALL_STATE(677)] = 20404,
  [SMALL_STATE(678)] = 20409,
  [SMALL_STATE(679)] = 20416,
  [SMALL_STATE(680)] = 20421,
  [SMALL_STATE(681)] = 20428,
  [SMALL_STATE(682)] = 20433,
  [SMALL_STATE(683)] = 20438,
  [SMALL_STATE(684)] = 20443,
  [SMALL_STATE(685)] = 20448,
  [SMALL_STATE(686)] = 20455,
  [SMALL_STATE(687)] = 20460,
  [SMALL_STATE(688)] = 20465,
  [SMALL_STATE(689)] = 20472,
  [SMALL_STATE(690)] = 20479,
  [SMALL_STATE(691)] = 20486,
  [SMALL_STATE(692)] = 20493,
  [SMALL_STATE(693)] = 20500,
  [SMALL_STATE(694)] = 20507,
  [SMALL_STATE(695)] = 20514,
  [SMALL_STATE(696)] = 20519,
  [SMALL_STATE(697)] = 20526,
  [SMALL_STATE(698)] = 20533,
  [SMALL_STATE(699)] = 20538,
  [SMALL_STATE(700)] = 20543,
  [SMALL_STATE(701)] = 20550,
  [SMALL_STATE(702)] = 20557,
  [SMALL_STATE(703)] = 20564,
  [SMALL_STATE(704)] = 20571,
  [SMALL_STATE(705)] = 20578,
  [SMALL_STATE(706)] = 20585,
  [SMALL_STATE(707)] = 20590,
  [SMALL_STATE(708)] = 20597,
  [SMALL_STATE(709)] = 20604,
  [SMALL_STATE(710)] = 20611,
  [SMALL_STATE(711)] = 20618,
  [SMALL_STATE(712)] = 20625,
  [SMALL_STATE(713)] = 20632,
  [SMALL_STATE(714)] = 20637,
  [SMALL_STATE(715)] = 20644,
  [SMALL_STATE(716)] = 20651,
  [SMALL_STATE(717)] = 20658,
  [SMALL_STATE(718)] = 20665,
  [SMALL_STATE(719)] = 20670,
  [SMALL_STATE(720)] = 20677,
  [SMALL_STATE(721)] = 20684,
  [SMALL_STATE(722)] = 20691,
  [SMALL_STATE(723)] = 20698,
  [SMALL_STATE(724)] = 20702,
  [SMALL_STATE(725)] = 20706,
  [SMALL_STATE(726)] = 20710,
  [SMALL_STATE(727)] = 20714,
  [SMALL_STATE(728)] = 20718,
  [SMALL_STATE(729)] = 20722,
  [SMALL_STATE(730)] = 20726,
  [SMALL_STATE(731)] = 20730,
  [SMALL_STATE(732)] = 20734,
  [SMALL_STATE(733)] = 20738,
  [SMALL_STATE(734)] = 20742,
  [SMALL_STATE(735)] = 20746,
  [SMALL_STATE(736)] = 20750,
  [SMALL_STATE(737)] = 20754,
  [SMALL_STATE(738)] = 20758,
  [SMALL_STATE(739)] = 20762,
  [SMALL_STATE(740)] = 20766,
  [SMALL_STATE(741)] = 20770,
  [SMALL_STATE(742)] = 20774,
  [SMALL_STATE(743)] = 20778,
  [SMALL_STATE(744)] = 20782,
  [SMALL_STATE(745)] = 20786,
  [SMALL_STATE(746)] = 20790,
  [SMALL_STATE(747)] = 20794,
  [SMALL_STATE(748)] = 20798,
  [SMALL_STATE(749)] = 20802,
  [SMALL_STATE(750)] = 20806,
  [SMALL_STATE(751)] = 20810,
  [SMALL_STATE(752)] = 20814,
  [SMALL_STATE(753)] = 20818,
  [SMALL_STATE(754)] = 20822,
  [SMALL_STATE(755)] = 20826,
  [SMALL_STATE(756)] = 20830,
  [SMALL_STATE(757)] = 20834,
  [SMALL_STATE(758)] = 20838,
  [SMALL_STATE(759)] = 20842,
  [SMALL_STATE(760)] = 20846,
  [SMALL_STATE(761)] = 20850,
  [SMALL_STATE(762)] = 20854,
  [SMALL_STATE(763)] = 20858,
  [SMALL_STATE(764)] = 20862,
  [SMALL_STATE(765)] = 20866,
  [SMALL_STATE(766)] = 20870,
  [SMALL_STATE(767)] = 20874,
  [SMALL_STATE(768)] = 20878,
  [SMALL_STATE(769)] = 20882,
  [SMALL_STATE(770)] = 20886,
  [SMALL_STATE(771)] = 20890,
  [SMALL_STATE(772)] = 20894,
  [SMALL_STATE(773)] = 20898,
  [SMALL_STATE(774)] = 20902,
  [SMALL_STATE(775)] = 20906,
  [SMALL_STATE(776)] = 20910,
  [SMALL_STATE(777)] = 20914,
  [SMALL_STATE(778)] = 20918,
  [SMALL_STATE(779)] = 20922,
  [SMALL_STATE(780)] = 20926,
  [SMALL_STATE(781)] = 20930,
  [SMALL_STATE(782)] = 20934,
  [SMALL_STATE(783)] = 20938,
  [SMALL_STATE(784)] = 20942,
  [SMALL_STATE(785)] = 20946,
  [SMALL_STATE(786)] = 20950,
  [SMALL_STATE(787)] = 20954,
  [SMALL_STATE(788)] = 20958,
  [SMALL_STATE(789)] = 20962,
  [SMALL_STATE(790)] = 20966,
  [SMALL_STATE(791)] = 20970,
  [SMALL_STATE(792)] = 20974,
  [SMALL_STATE(793)] = 20978,
  [SMALL_STATE(794)] = 20982,
  [SMALL_STATE(795)] = 20986,
  [SMALL_STATE(796)] = 20990,
  [SMALL_STATE(797)] = 20994,
  [SMALL_STATE(798)] = 20998,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(736),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(726),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(779),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(702),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(749),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(752),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(671),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(741),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 14),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 14),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 28),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 3, 0, 28),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 20),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 2, 0, 20),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 21),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 2, 0, 21),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 20),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 2, 0, 20),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 20),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 2, 0, 20),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 20),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 2, 0, 20),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 20),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 20),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 2, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 2, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 26),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 2, 0, 26),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 27),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 3, 0, 27),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 30),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 3, 0, 30),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 30),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 3, 0, 30),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 27),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 3, 0, 27),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 27),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 3, 0, 27),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 32),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 32),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 27),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 27),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 26),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic_body, 2, 0, 26),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 27),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 27),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 27),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 27),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 27),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 27),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 38),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 38),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 39),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 39),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 40),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 4, 0, 40),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 4, 0, 41),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 4, 0, 41),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 42),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 42),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 41),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 41),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 4, 0, 27),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 4, 0, 27),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 27),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 27),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 27),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 27),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 43),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 43),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 27),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 27),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 44),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 44),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 46),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 4, 0, 46),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 5, 0, 41),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 5, 0, 41),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 27),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 27),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 47),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 47),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 2, 2, 20),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 2, 2, 20),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 2, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 2, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(568),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(165),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 35),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(623),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(738),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(740),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(673),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(767),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(768),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(794),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(621),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(688),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(689),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(704),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(667),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(676),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(708),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [896] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(693),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(764),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(264),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 35),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 23),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 23),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(724),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(713),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_body, 1, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_body, 1, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(309),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prompt_text_body, 1, 2, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prompt_text_body, 1, 2, 0),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__prompt_text_body_repeat1, 2, 0, 0),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__prompt_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__prompt_text_body_repeat1, 2, 0, 0),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__prompt_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(788),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(747),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 35),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 35),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 24),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 24),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__prompt_text_body_repeat1, 1, 0, 10),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__prompt_text_body_repeat1, 1, 0, 10),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prompt_text_body_line, 2, 0, 14),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prompt_text_body_line, 2, 0, 14),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 37),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 37),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 25),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 25),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 45),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 45),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 45),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 8, 0, 45),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 22),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 22),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 37),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 37),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 4),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 4, 0, 4),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 22),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 22),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 19),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 19),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 13),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 13),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_body, 2, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_body, 2, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 9),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 4, 0, 9),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 36),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 36),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 36),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 36),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 25),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 25),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [1377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(476),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_selection_clause, 2, 0, 34),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 31),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(540),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 24),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_clause, 2, 0, 33),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1849] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
