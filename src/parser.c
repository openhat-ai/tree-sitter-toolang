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
#define STATE_COUNT 592
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 29

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
  sym_integer_literal = 14,
  anon_sym_models = 15,
  anon_sym_tools = 16,
  anon_sym_skills = 17,
  anon_sym_services = 18,
  anon_sym_psyches = 19,
  anon_sym_hands = 20,
  anon_sym_handoffs = 21,
  anon_sym_recall = 22,
  anon_sym_EQ = 23,
  anon_sym_PLUS_EQ = 24,
  anon_sym_DASH_EQ = 25,
  sym_directive_value = 26,
  anon_sym_default = 27,
  anon_sym_none = 28,
  anon_sym_user = 29,
  anon_sym_assistant = 30,
  anon_sym_tool = 31,
  sym_use_keyword = 32,
  sym_struct_keyword = 33,
  sym_psyche_keyword = 34,
  sym_skill_keyword = 35,
  sym_service_keyword = 36,
  sym_prompt_keyword = 37,
  sym_context_keyword = 38,
  sym_instruct_keyword = 39,
  sym_thunk_keyword = 40,
  sym_task_keyword = 41,
  sym_chore_keyword = 42,
  sym_flow_keyword = 43,
  sym_pass_keyword = 44,
  sym_flow_do_keyword = 45,
  sym_flow_ask_keyword = 46,
  sym_flow_unfold_keyword = 47,
  sym_flow_keep_keyword = 48,
  sym_flow_drop_keyword = 49,
  sym_flow_rank_keyword = 50,
  sym_flow_each_keyword = 51,
  sym_flow_fold_keyword = 52,
  sym_flow_repeat_keyword = 53,
  sym_flow_until_keyword = 54,
  sym_flow_to_keyword = 55,
  sym_flow_par_keyword = 56,
  sym_flow_limit_keyword = 57,
  sym_flow_times_keyword = 58,
  sym_optional_marker = 59,
  sym_arrow = 60,
  sym_colon = 61,
  sym_lparen = 62,
  sym_rparen = 63,
  sym_comma = 64,
  sym_cap_kind = 65,
  sym_pascal_name = 66,
  sym_snake_name = 67,
  sym__snake_kebab_name = 68,
  sym_text_line = 69,
  sym_indented_raw_text = 70,
  sym__implicit_do_raw_text = 71,
  sym__nested_indented_raw_text = 72,
  sym_source_file = 73,
  sym_item = 74,
  sym_line_end = 75,
  sym__trivia = 76,
  sym_use = 77,
  sym_type = 78,
  sym_base_type = 79,
  sym_builtin_type = 80,
  sym_user_type = 81,
  sym_type_suffix = 82,
  sym_struct = 83,
  sym_struct_name = 84,
  sym_struct_body = 85,
  sym_field = 86,
  sym_field_name = 87,
  sym_psyche = 88,
  sym_skill = 89,
  sym_service = 90,
  sym_prompt = 91,
  sym_task = 92,
  sym_chore = 93,
  sym_cap_name = 94,
  sym_cap_ref = 95,
  sym_job_name = 96,
  sym_cap_body = 97,
  sym_job_body = 98,
  sym_property = 99,
  sym_property_key = 100,
  sym_property_value = 101,
  sym_instruct = 102,
  sym_instruct_name = 103,
  sym_instruct_body = 104,
  sym_context = 105,
  sym_context_name = 106,
  sym_context_body = 107,
  sym_text_inline = 108,
  sym_text_block = 109,
  sym_text_body = 110,
  sym_text_body_line = 111,
  sym__nested_text_inline_alias = 112,
  sym__nested_text_inline = 113,
  sym__nested_text_block = 114,
  sym__nested_text_body = 115,
  sym__nested_text_body_line = 116,
  sym_thunk = 117,
  sym_thunk_name = 118,
  sym_thunk_body = 119,
  sym_params = 120,
  sym_param = 121,
  sym_param_name = 122,
  sym_flow = 123,
  sym_flow_name = 124,
  sym_flow_body = 125,
  sym_statements = 126,
  sym__flow_statement = 127,
  sym_do_statement = 128,
  sym_implicit_do_statement = 129,
  sym__implicit_do_text_body_line = 130,
  sym_ask_statement = 131,
  sym_unfold_statement = 132,
  sym_keep_statement = 133,
  sym_drop_statement = 134,
  sym_rank_statement = 135,
  sym_each_statement = 136,
  sym_fold_statement = 137,
  sym_repeat_above_statement = 138,
  sym_repeat_block_statement = 139,
  sym_repeat_body = 140,
  sym_until_clause = 141,
  sym_condition = 142,
  sym_to_clause = 143,
  sym_par_clause = 144,
  sym_limit_clause = 145,
  sym_times_clause = 146,
  sym_callees = 147,
  sym_callee = 148,
  sym_agent = 149,
  sym_directive = 150,
  sym_directive_key = 151,
  sym_directive_op = 152,
  sym_directive_csv = 153,
  sym__directives = 154,
  sym_settings = 155,
  sym_context_setting = 156,
  sym_instruct_setting = 157,
  sym_text_ref = 158,
  sym_messages = 159,
  sym_message = 160,
  sym_role = 161,
  sym__pass_statement = 162,
  sym_assign_operator = 163,
  sym_type_name = 164,
  aux_sym_source_file_repeat1 = 165,
  aux_sym_type_repeat1 = 166,
  aux_sym_struct_body_repeat1 = 167,
  aux_sym_cap_body_repeat1 = 168,
  aux_sym_cap_body_repeat2 = 169,
  aux_sym_text_body_repeat1 = 170,
  aux_sym__nested_text_body_repeat1 = 171,
  aux_sym_params_repeat1 = 172,
  aux_sym_statements_repeat1 = 173,
  aux_sym_implicit_do_statement_repeat1 = 174,
  aux_sym_callees_repeat1 = 175,
  aux_sym_directive_csv_repeat1 = 176,
  aux_sym__directives_repeat1 = 177,
  aux_sym_messages_repeat1 = 178,
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
  [sym_directive_value] = "directive_value",
  [anon_sym_default] = "default",
  [anon_sym_none] = "none",
  [anon_sym_user] = "user",
  [anon_sym_assistant] = "assistant",
  [anon_sym_tool] = "tool",
  [sym_use_keyword] = "use_keyword",
  [sym_struct_keyword] = "struct_keyword",
  [sym_psyche_keyword] = "psyche_keyword",
  [sym_skill_keyword] = "skill_keyword",
  [sym_service_keyword] = "service_keyword",
  [sym_prompt_keyword] = "prompt_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_instruct_keyword] = "instruct_keyword",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_task_keyword] = "task_keyword",
  [sym_chore_keyword] = "chore_keyword",
  [sym_flow_keyword] = "flow_keyword",
  [sym_pass_keyword] = "pass_keyword",
  [sym_flow_do_keyword] = "flow_do_keyword",
  [sym_flow_ask_keyword] = "flow_ask_keyword",
  [sym_flow_unfold_keyword] = "flow_unfold_keyword",
  [sym_flow_keep_keyword] = "flow_keep_keyword",
  [sym_flow_drop_keyword] = "flow_drop_keyword",
  [sym_flow_rank_keyword] = "flow_rank_keyword",
  [sym_flow_each_keyword] = "flow_each_keyword",
  [sym_flow_fold_keyword] = "flow_fold_keyword",
  [sym_flow_repeat_keyword] = "flow_repeat_keyword",
  [sym_flow_until_keyword] = "flow_until_keyword",
  [sym_flow_to_keyword] = "flow_to_keyword",
  [sym_flow_par_keyword] = "flow_par_keyword",
  [sym_flow_limit_keyword] = "flow_limit_keyword",
  [sym_flow_times_keyword] = "flow_times_keyword",
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
  [sym_indented_raw_text] = "indented_raw_text",
  [sym__implicit_do_raw_text] = "indented_raw_text",
  [sym__nested_indented_raw_text] = "indented_raw_text",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_line_end] = "line_end",
  [sym__trivia] = "_trivia",
  [sym_use] = "use",
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
  [sym_thunk] = "thunk",
  [sym_thunk_name] = "thunk_name",
  [sym_thunk_body] = "thunk_body",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_param_name] = "param_name",
  [sym_flow] = "flow",
  [sym_flow_name] = "flow_name",
  [sym_flow_body] = "flow_body",
  [sym_statements] = "statements",
  [sym__flow_statement] = "_flow_statement",
  [sym_do_statement] = "do_statement",
  [sym_implicit_do_statement] = "implicit_do_statement",
  [sym__implicit_do_text_body_line] = "text_body_line",
  [sym_ask_statement] = "ask_statement",
  [sym_unfold_statement] = "unfold_statement",
  [sym_keep_statement] = "keep_statement",
  [sym_drop_statement] = "drop_statement",
  [sym_rank_statement] = "rank_statement",
  [sym_each_statement] = "each_statement",
  [sym_fold_statement] = "fold_statement",
  [sym_repeat_above_statement] = "repeat_above_statement",
  [sym_repeat_block_statement] = "repeat_block_statement",
  [sym_repeat_body] = "repeat_body",
  [sym_until_clause] = "until_clause",
  [sym_condition] = "condition",
  [sym_to_clause] = "to_clause",
  [sym_par_clause] = "par_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_times_clause] = "times_clause",
  [sym_callees] = "callees",
  [sym_callee] = "callee",
  [sym_agent] = "agent",
  [sym_directive] = "directive",
  [sym_directive_key] = "directive_key",
  [sym_directive_op] = "directive_op",
  [sym_directive_csv] = "directive_csv",
  [sym__directives] = "_directives",
  [sym_settings] = "settings",
  [sym_context_setting] = "context_setting",
  [sym_instruct_setting] = "instruct_setting",
  [sym_text_ref] = "text_ref",
  [sym_messages] = "messages",
  [sym_message] = "message",
  [sym_role] = "role",
  [sym__pass_statement] = "_pass_statement",
  [sym_assign_operator] = "assign_operator",
  [sym_type_name] = "type_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_cap_body_repeat1] = "cap_body_repeat1",
  [aux_sym_cap_body_repeat2] = "cap_body_repeat2",
  [aux_sym_text_body_repeat1] = "text_body_repeat1",
  [aux_sym__nested_text_body_repeat1] = "_nested_text_body_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_implicit_do_statement_repeat1] = "implicit_do_statement_repeat1",
  [aux_sym_callees_repeat1] = "callees_repeat1",
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
  [aux_sym__directives_repeat1] = "_directives_repeat1",
  [aux_sym_messages_repeat1] = "messages_repeat1",
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
  [sym_directive_value] = sym_directive_value,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_assistant] = anon_sym_assistant,
  [anon_sym_tool] = anon_sym_tool,
  [sym_use_keyword] = sym_use_keyword,
  [sym_struct_keyword] = sym_struct_keyword,
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_skill_keyword] = sym_skill_keyword,
  [sym_service_keyword] = sym_service_keyword,
  [sym_prompt_keyword] = sym_prompt_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_instruct_keyword] = sym_instruct_keyword,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_task_keyword] = sym_task_keyword,
  [sym_chore_keyword] = sym_chore_keyword,
  [sym_flow_keyword] = sym_flow_keyword,
  [sym_pass_keyword] = sym_pass_keyword,
  [sym_flow_do_keyword] = sym_flow_do_keyword,
  [sym_flow_ask_keyword] = sym_flow_ask_keyword,
  [sym_flow_unfold_keyword] = sym_flow_unfold_keyword,
  [sym_flow_keep_keyword] = sym_flow_keep_keyword,
  [sym_flow_drop_keyword] = sym_flow_drop_keyword,
  [sym_flow_rank_keyword] = sym_flow_rank_keyword,
  [sym_flow_each_keyword] = sym_flow_each_keyword,
  [sym_flow_fold_keyword] = sym_flow_fold_keyword,
  [sym_flow_repeat_keyword] = sym_flow_repeat_keyword,
  [sym_flow_until_keyword] = sym_flow_until_keyword,
  [sym_flow_to_keyword] = sym_flow_to_keyword,
  [sym_flow_par_keyword] = sym_flow_par_keyword,
  [sym_flow_limit_keyword] = sym_flow_limit_keyword,
  [sym_flow_times_keyword] = sym_flow_times_keyword,
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
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym__implicit_do_raw_text] = sym_indented_raw_text,
  [sym__nested_indented_raw_text] = sym_indented_raw_text,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_line_end] = sym_line_end,
  [sym__trivia] = sym__trivia,
  [sym_use] = sym_use,
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
  [sym_thunk] = sym_thunk,
  [sym_thunk_name] = sym_thunk_name,
  [sym_thunk_body] = sym_thunk_body,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_param_name] = sym_param_name,
  [sym_flow] = sym_flow,
  [sym_flow_name] = sym_flow_name,
  [sym_flow_body] = sym_flow_body,
  [sym_statements] = sym_statements,
  [sym__flow_statement] = sym__flow_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_implicit_do_statement] = sym_implicit_do_statement,
  [sym__implicit_do_text_body_line] = sym_text_body_line,
  [sym_ask_statement] = sym_ask_statement,
  [sym_unfold_statement] = sym_unfold_statement,
  [sym_keep_statement] = sym_keep_statement,
  [sym_drop_statement] = sym_drop_statement,
  [sym_rank_statement] = sym_rank_statement,
  [sym_each_statement] = sym_each_statement,
  [sym_fold_statement] = sym_fold_statement,
  [sym_repeat_above_statement] = sym_repeat_above_statement,
  [sym_repeat_block_statement] = sym_repeat_block_statement,
  [sym_repeat_body] = sym_repeat_body,
  [sym_until_clause] = sym_until_clause,
  [sym_condition] = sym_condition,
  [sym_to_clause] = sym_to_clause,
  [sym_par_clause] = sym_par_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_times_clause] = sym_times_clause,
  [sym_callees] = sym_callees,
  [sym_callee] = sym_callee,
  [sym_agent] = sym_agent,
  [sym_directive] = sym_directive,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_op] = sym_directive_op,
  [sym_directive_csv] = sym_directive_csv,
  [sym__directives] = sym__directives,
  [sym_settings] = sym_settings,
  [sym_context_setting] = sym_context_setting,
  [sym_instruct_setting] = sym_instruct_setting,
  [sym_text_ref] = sym_text_ref,
  [sym_messages] = sym_messages,
  [sym_message] = sym_message,
  [sym_role] = sym_role,
  [sym__pass_statement] = sym__pass_statement,
  [sym_assign_operator] = sym_assign_operator,
  [sym_type_name] = sym_type_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_cap_body_repeat1] = aux_sym_cap_body_repeat1,
  [aux_sym_cap_body_repeat2] = aux_sym_cap_body_repeat2,
  [aux_sym_text_body_repeat1] = aux_sym_text_body_repeat1,
  [aux_sym__nested_text_body_repeat1] = aux_sym__nested_text_body_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_implicit_do_statement_repeat1] = aux_sym_implicit_do_statement_repeat1,
  [aux_sym_callees_repeat1] = aux_sym_callees_repeat1,
  [aux_sym_directive_csv_repeat1] = aux_sym_directive_csv_repeat1,
  [aux_sym__directives_repeat1] = aux_sym__directives_repeat1,
  [aux_sym_messages_repeat1] = aux_sym_messages_repeat1,
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
  [sym_directive_value] = {
    .visible = true,
    .named = true,
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
  [sym_use_keyword] = {
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
  [sym_thunk_keyword] = {
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
  [sym_flow_do_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_ask_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_unfold_keyword] = {
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
  [sym_flow_each_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_fold_keyword] = {
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
  [sym_flow_to_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_par_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_limit_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_times_keyword] = {
    .visible = true,
    .named = true,
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
  [sym_indented_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_do_raw_text] = {
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
  [sym_use] = {
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
  [sym_thunk] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_name] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_body] = {
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
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_do_text_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_ask_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unfold_statement] = {
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
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_fold_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_above_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_body] = {
    .visible = true,
    .named = true,
  },
  [sym_until_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_to_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_par_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_times_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_callees] = {
    .visible = true,
    .named = true,
  },
  [sym_callee] = {
    .visible = true,
    .named = true,
  },
  [sym_agent] = {
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
  [sym_directive_csv] = {
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
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym__pass_statement] = {
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
  [aux_sym_implicit_do_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_callees_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_csv_repeat1] = {
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
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_base = 2,
  field_body = 3,
  field_colon = 4,
  field_content = 5,
  field_key = 6,
  field_keyword = 7,
  field_kind = 8,
  field_name = 9,
  field_operator = 10,
  field_optional = 11,
  field_param = 12,
  field_params = 13,
  field_reference = 14,
  field_return = 15,
  field_suffix = 16,
  field_type = 17,
  field_value = 18,
  field_values = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_base] = "base",
  [field_body] = "body",
  [field_colon] = "colon",
  [field_content] = "content",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_param] = "param",
  [field_params] = "params",
  [field_reference] = "reference",
  [field_return] = "return",
  [field_suffix] = "suffix",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
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
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 1},
  [13] = {.index = 26, .length = 4},
  [14] = {.index = 30, .length = 1},
  [15] = {.index = 31, .length = 2},
  [16] = {.index = 33, .length = 2},
  [17] = {.index = 35, .length = 2},
  [18] = {.index = 37, .length = 3},
  [19] = {.index = 40, .length = 4},
  [20] = {.index = 44, .length = 5},
  [21] = {.index = 49, .length = 4},
  [22] = {.index = 53, .length = 5},
  [23] = {.index = 58, .length = 1},
  [24] = {.index = 59, .length = 3},
  [25] = {.index = 62, .length = 6},
  [26] = {.index = 68, .length = 6},
  [27] = {.index = 74, .length = 3},
  [28] = {.index = 77, .length = 7},
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
    {field_param, 1},
  [23] =
    {field_name, 0},
    {field_optional, 1},
  [25] =
    {field_content, 0, .inherited = true},
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
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [49] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [53] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [58] =
    {field_content, 1, .inherited = true},
  [59] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [62] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [68] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [74] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [77] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 15,
  [20] = 17,
  [21] = 16,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 42,
  [59] = 59,
  [60] = 43,
  [61] = 61,
  [62] = 53,
  [63] = 63,
  [64] = 52,
  [65] = 65,
  [66] = 66,
  [67] = 50,
  [68] = 68,
  [69] = 61,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 73,
  [74] = 65,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 68,
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
  [95] = 66,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 41,
  [113] = 40,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 81,
  [120] = 76,
  [121] = 79,
  [122] = 96,
  [123] = 101,
  [124] = 105,
  [125] = 106,
  [126] = 107,
  [127] = 108,
  [128] = 109,
  [129] = 110,
  [130] = 111,
  [131] = 114,
  [132] = 115,
  [133] = 116,
  [134] = 117,
  [135] = 94,
  [136] = 71,
  [137] = 73,
  [138] = 80,
  [139] = 82,
  [140] = 83,
  [141] = 84,
  [142] = 85,
  [143] = 86,
  [144] = 87,
  [145] = 88,
  [146] = 89,
  [147] = 90,
  [148] = 91,
  [149] = 92,
  [150] = 93,
  [151] = 77,
  [152] = 97,
  [153] = 98,
  [154] = 99,
  [155] = 100,
  [156] = 70,
  [157] = 102,
  [158] = 103,
  [159] = 104,
  [160] = 41,
  [161] = 40,
  [162] = 118,
  [163] = 43,
  [164] = 164,
  [165] = 33,
  [166] = 166,
  [167] = 31,
  [168] = 32,
  [169] = 169,
  [170] = 42,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 59,
  [179] = 179,
  [180] = 180,
  [181] = 59,
  [182] = 182,
  [183] = 183,
  [184] = 66,
  [185] = 185,
  [186] = 186,
  [187] = 68,
  [188] = 188,
  [189] = 185,
  [190] = 186,
  [191] = 103,
  [192] = 192,
  [193] = 193,
  [194] = 104,
  [195] = 195,
  [196] = 196,
  [197] = 41,
  [198] = 198,
  [199] = 199,
  [200] = 102,
  [201] = 201,
  [202] = 40,
  [203] = 40,
  [204] = 41,
  [205] = 205,
  [206] = 59,
  [207] = 38,
  [208] = 41,
  [209] = 40,
  [210] = 41,
  [211] = 211,
  [212] = 212,
  [213] = 40,
  [214] = 166,
  [215] = 164,
  [216] = 40,
  [217] = 51,
  [218] = 49,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 48,
  [229] = 54,
  [230] = 230,
  [231] = 231,
  [232] = 56,
  [233] = 233,
  [234] = 41,
  [235] = 55,
  [236] = 59,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 188,
  [245] = 245,
  [246] = 41,
  [247] = 40,
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
  [261] = 75,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 196,
  [271] = 41,
  [272] = 40,
  [273] = 273,
  [274] = 198,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 199,
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
  [303] = 302,
  [304] = 304,
  [305] = 304,
  [306] = 301,
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
  [327] = 308,
  [328] = 328,
  [329] = 328,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 333,
  [336] = 320,
  [337] = 337,
  [338] = 332,
  [339] = 311,
  [340] = 317,
  [341] = 321,
  [342] = 326,
  [343] = 343,
  [344] = 344,
  [345] = 314,
  [346] = 319,
  [347] = 337,
  [348] = 330,
  [349] = 334,
  [350] = 331,
  [351] = 309,
  [352] = 343,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 356,
  [358] = 358,
  [359] = 354,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 362,
  [366] = 366,
  [367] = 363,
  [368] = 368,
  [369] = 369,
  [370] = 366,
  [371] = 364,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 360,
  [376] = 373,
  [377] = 373,
  [378] = 378,
  [379] = 379,
  [380] = 368,
  [381] = 378,
  [382] = 379,
  [383] = 361,
  [384] = 384,
  [385] = 40,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
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
  [407] = 394,
  [408] = 408,
  [409] = 386,
  [410] = 410,
  [411] = 393,
  [412] = 41,
  [413] = 413,
  [414] = 414,
  [415] = 384,
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
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 419,
  [454] = 420,
  [455] = 455,
  [456] = 430,
  [457] = 431,
  [458] = 434,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 447,
  [465] = 465,
  [466] = 466,
  [467] = 416,
  [468] = 468,
  [469] = 469,
  [470] = 421,
  [471] = 422,
  [472] = 472,
  [473] = 424,
  [474] = 466,
  [475] = 426,
  [476] = 450,
  [477] = 416,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 440,
  [484] = 443,
  [485] = 449,
  [486] = 428,
  [487] = 487,
  [488] = 488,
  [489] = 41,
  [490] = 40,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 41,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 40,
  [516] = 498,
  [517] = 517,
  [518] = 492,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 504,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
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
  [539] = 536,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 549,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 535,
  [557] = 529,
  [558] = 558,
  [559] = 549,
  [560] = 535,
  [561] = 561,
  [562] = 535,
  [563] = 535,
  [564] = 535,
  [565] = 535,
  [566] = 535,
  [567] = 535,
  [568] = 535,
  [569] = 535,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 547,
  [580] = 575,
  [581] = 573,
  [582] = 582,
  [583] = 583,
  [584] = 555,
  [585] = 545,
  [586] = 586,
  [587] = 540,
  [588] = 586,
  [589] = 589,
  [590] = 535,
  [591] = 535,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        '(', 323,
        ')', 324,
        '+', 41,
        ',', 325,
        '-', 42,
        ':', 322,
        '=', 262,
        '?', 320,
        'B', 341,
        'J', 343,
        'N', 346,
        'P', 327,
        'T', 331,
        '[', 44,
        'a', 178,
        'c', 98,
        'd', 73,
        'e', 45,
        'f', 126,
        'h', 49,
        'i', 143,
        'k', 83,
        'l', 102,
        'm', 153,
        'n', 159,
        'p', 46,
        'r', 52,
        's', 74,
        't', 48,
        'u', 139,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(348);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 663,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 690,
        'r', 692,
        's', 712,
        't', 780,
        'u', 758,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 665,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(607);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 666,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 797,
        'r', 692,
        's', 712,
        't', 780,
        'u', 758,
        '\t', 7,
        ' ', 7,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 668,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 757,
        '\t', 12,
        ' ', 12,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 829,
        ' ', 829,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 757,
        '\t', 18,
        ' ', 18,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 757,
        '\t', 16,
        ' ', 16,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 757,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 555,
        'h', 486,
        'i', 549,
        'm', 551,
        'p', 490,
        'r', 507,
        's', 508,
        't', 557,
        'u', 577,
        '\t', 422,
        '\f', 422,
        ' ', 422,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(324);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(237);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(235);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 235,
        '\r', 30,
        '#', 245,
        ')', 324,
        ',', 325,
        ':', 322,
        '[', 44,
        'l', 102,
        'p', 51,
        's', 91,
        't', 104,
        'u', 150,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 33:
      if (lookahead == '\f') SKIP(33);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\f', 683,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'k', 714,
        'r', 693,
        'u', 758,
        '\t', 34,
        ' ', 34,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 35:
      if (lookahead == '\f') SKIP(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '\f') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(765);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == '>') ADVANCE(321);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(321);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(252);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(304);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(308);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 213:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 214:
      if (lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 215:
      if (lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(221);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 223:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 419,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 418,
        ' ', 418,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 224:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(224);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(605);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 225:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(225);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(606);
      END_STATE();
    case 226:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(226);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 227:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 421,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 420,
        ' ', 420,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 228:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(228);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 229:
      if (eof) ADVANCE(234);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') SKIP(229);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 230:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'h', 486,
        'i', 549,
        'm', 551,
        'p', 564,
        'r', 507,
        's', 516,
        't', 488,
        'u', 583,
        '\t', 423,
        '\f', 423,
        ' ', 423,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 231:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 424,
        '\f', 424,
        ' ', 424,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 232:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 22,
        'c', 98,
        'f', 125,
        'i', 143,
        'p', 173,
        's', 74,
        't', 47,
        'u', 192,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(232);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(348);
      END_STATE();
    case 233:
      if (eof) ADVANCE(234);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 22,
        'c', 365,
        'f', 374,
        'i', 380,
        'p', 393,
        's', 356,
        't', 349,
        'u', 395,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(244);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_directive_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'h') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'k') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'k') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'l') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 's') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 's') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'v') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'w') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'x') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'y') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 419,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 825,
        ' ', 825,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 419,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 416,
        ' ', 416,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 419,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 417,
        ' ', 417,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 419,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 418,
        ' ', 418,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 420,
        '\r', 1,
        '#', 240,
        'a', 468,
        'c', 438,
        'f', 447,
        'i', 452,
        'p', 462,
        's', 436,
        't', 427,
        'u', 464,
        '\t', 420,
        ' ', 420,
      );
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 421,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 420,
        ' ', 420,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 555,
        'h', 486,
        'i', 549,
        'm', 551,
        'p', 490,
        'r', 507,
        's', 508,
        't', 557,
        'u', 577,
        '\t', 422,
        '\f', 422,
        ' ', 422,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'h', 486,
        'i', 549,
        'm', 551,
        'p', 564,
        'r', 507,
        's', 516,
        't', 488,
        'u', 583,
        '\t', 423,
        '\f', 423,
        ' ', 423,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 236,
        '\r', 1,
        '#', 240,
        'a', 580,
        'c', 520,
        'f', 539,
        'i', 549,
        'p', 565,
        's', 517,
        't', 489,
        'u', 583,
        '\t', 424,
        '\f', 424,
        ' ', 424,
      );
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'k') ADVANCE(440);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'h') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'x') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == 'y') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'h') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'h') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == 'k') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'k') ADVANCE(528);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'k') ADVANCE(530);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'm') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'x') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 605,
        '\r', 1,
        '#', 608,
        'c', 365,
        'f', 374,
        'i', 380,
        'p', 393,
        's', 356,
        't', 349,
        'u', 395,
        '\t', 605,
        ' ', 605,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 606,
        '\r', 1,
        '#', 608,
        'c', 624,
        'f', 631,
        'i', 635,
        'p', 644,
        's', 622,
        't', 613,
        'u', 646,
        '\t', 606,
        ' ', 606,
      );
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\f') ADVANCE(607);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0) ADVANCE(662);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(612);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'h') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'k') ADVANCE(626);
      if (lookahead == 't') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(639);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 663,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 690,
        'r', 692,
        's', 712,
        't', 780,
        'u', 760,
        '\t', 664,
        ' ', 664,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 663,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 690,
        'r', 692,
        's', 712,
        't', 780,
        'u', 768,
        '\t', 664,
        ' ', 664,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 665,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 665,
        ' ', 665,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 666,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 797,
        'r', 692,
        's', 712,
        't', 780,
        'u', 760,
        '\t', 667,
        ' ', 667,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 666,
        '\r', 1,
        '#', 678,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'h', 691,
        'k', 714,
        'm', 773,
        'p', 797,
        'r', 692,
        's', 712,
        't', 780,
        'u', 768,
        '\t', 667,
        ' ', 667,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 668,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 759,
        '\t', 669,
        ' ', 669,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 668,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 767,
        '\t', 669,
        ' ', 669,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 829,
        ' ', 829,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 670,
        ' ', 670,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 671,
        ' ', 671,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 673,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 770,
        '\t', 672,
        ' ', 672,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 759,
        '\t', 676,
        ' ', 676,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 767,
        '\t', 677,
        ' ', 677,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 767,
        '\t', 675,
        ' ', 675,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 236,
        '\f', 674,
        '\r', 1,
        '#', 678,
        'a', 796,
        'c', 728,
        'd', 771,
        'e', 688,
        'f', 753,
        'i', 766,
        'k', 714,
        'p', 788,
        'r', 693,
        's', 720,
        't', 694,
        'u', 767,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead != 0) ADVANCE(679);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(682);
      if (lookahead != 0) ADVANCE(681);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 683,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'k', 714,
        'r', 693,
        'u', 760,
        '\t', 684,
        ' ', 684,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 683,
        'a', 796,
        'd', 771,
        'e', 688,
        'f', 772,
        'k', 714,
        'r', 693,
        'u', 768,
        '\t', 684,
        ' ', 684,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\f') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(769);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\f') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == ':') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'h') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'k') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == 'k') ADVANCE(737);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 't') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'm') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'x') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(823);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 825,
        '#', 882,
        'a', 869,
        'c', 841,
        'f', 848,
        'i', 853,
        'p', 864,
        's', 837,
        't', 833,
        'u', 865,
        '\t', 825,
        ' ', 825,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(826);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 828,
        '#', 882,
        'a', 935,
        'c', 903,
        'd', 922,
        'e', 885,
        'f', 913,
        'i', 920,
        'k', 897,
        'p', 934,
        'r', 886,
        's', 894,
        't', 884,
        'u', 917,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 828,
        '#', 882,
        'a', 935,
        'c', 903,
        'd', 922,
        'e', 885,
        'f', 913,
        'i', 920,
        'k', 897,
        'p', 934,
        'r', 886,
        's', 894,
        't', 884,
        'u', 919,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 830,
        '#', 882,
        'a', 935,
        'c', 903,
        'd', 922,
        'e', 885,
        'f', 913,
        'i', 920,
        'k', 897,
        'p', 934,
        'r', 886,
        's', 894,
        't', 884,
        'u', 917,
        '\t', 829,
        ' ', 829,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 830,
        '#', 882,
        'a', 935,
        'c', 903,
        'd', 922,
        'e', 885,
        'f', 913,
        'i', 920,
        'k', 897,
        'p', 934,
        'r', 886,
        's', 894,
        't', 884,
        'u', 921,
        '\t', 829,
        ' ', 829,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == 'h') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'c') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == 'k') ADVANCE(843);
      if (lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'h') ADVANCE(858);
      if (lookahead == 'o') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'h') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'k') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'l') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'l') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'l') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'm') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'p') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == 's') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 's') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 't') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 't') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 't') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'v') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'x') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(881);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == ':') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'h') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(916);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == 'k') ADVANCE(905);
      if (lookahead == 't') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(923);
      if (lookahead == 't') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(923);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(927);
      if (lookahead == 'o') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(924);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(900);
      if (lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead == 's') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(946);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 232},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 222},
  [16] = {.lex_state = 222},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 226},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 230},
  [32] = {.lex_state = 230},
  [33] = {.lex_state = 230},
  [34] = {.lex_state = 231},
  [35] = {.lex_state = 231},
  [36] = {.lex_state = 232},
  [37] = {.lex_state = 232},
  [38] = {.lex_state = 230},
  [39] = {.lex_state = 231},
  [40] = {.lex_state = 230},
  [41] = {.lex_state = 230},
  [42] = {.lex_state = 228},
  [43] = {.lex_state = 228},
  [44] = {.lex_state = 231},
  [45] = {.lex_state = 231},
  [46] = {.lex_state = 231},
  [47] = {.lex_state = 231},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 222},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 222},
  [55] = {.lex_state = 222},
  [56] = {.lex_state = 222},
  [57] = {.lex_state = 231},
  [58] = {.lex_state = 229},
  [59] = {.lex_state = 222},
  [60] = {.lex_state = 229},
  [61] = {.lex_state = 222},
  [62] = {.lex_state = 226},
  [63] = {.lex_state = 222},
  [64] = {.lex_state = 226},
  [65] = {.lex_state = 222},
  [66] = {.lex_state = 228},
  [67] = {.lex_state = 226},
  [68] = {.lex_state = 228},
  [69] = {.lex_state = 222},
  [70] = {.lex_state = 222},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 226},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 226},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 222},
  [77] = {.lex_state = 222},
  [78] = {.lex_state = 229},
  [79] = {.lex_state = 222},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 222},
  [82] = {.lex_state = 222},
  [83] = {.lex_state = 222},
  [84] = {.lex_state = 222},
  [85] = {.lex_state = 222},
  [86] = {.lex_state = 222},
  [87] = {.lex_state = 222},
  [88] = {.lex_state = 222},
  [89] = {.lex_state = 222},
  [90] = {.lex_state = 222},
  [91] = {.lex_state = 222},
  [92] = {.lex_state = 222},
  [93] = {.lex_state = 222},
  [94] = {.lex_state = 222},
  [95] = {.lex_state = 229},
  [96] = {.lex_state = 222},
  [97] = {.lex_state = 222},
  [98] = {.lex_state = 222},
  [99] = {.lex_state = 222},
  [100] = {.lex_state = 222},
  [101] = {.lex_state = 222},
  [102] = {.lex_state = 222},
  [103] = {.lex_state = 222},
  [104] = {.lex_state = 222},
  [105] = {.lex_state = 222},
  [106] = {.lex_state = 222},
  [107] = {.lex_state = 222},
  [108] = {.lex_state = 222},
  [109] = {.lex_state = 222},
  [110] = {.lex_state = 222},
  [111] = {.lex_state = 222},
  [112] = {.lex_state = 222},
  [113] = {.lex_state = 222},
  [114] = {.lex_state = 222},
  [115] = {.lex_state = 222},
  [116] = {.lex_state = 222},
  [117] = {.lex_state = 222},
  [118] = {.lex_state = 222},
  [119] = {.lex_state = 226},
  [120] = {.lex_state = 226},
  [121] = {.lex_state = 226},
  [122] = {.lex_state = 226},
  [123] = {.lex_state = 226},
  [124] = {.lex_state = 226},
  [125] = {.lex_state = 226},
  [126] = {.lex_state = 226},
  [127] = {.lex_state = 226},
  [128] = {.lex_state = 226},
  [129] = {.lex_state = 226},
  [130] = {.lex_state = 226},
  [131] = {.lex_state = 226},
  [132] = {.lex_state = 226},
  [133] = {.lex_state = 226},
  [134] = {.lex_state = 226},
  [135] = {.lex_state = 226},
  [136] = {.lex_state = 226},
  [137] = {.lex_state = 226},
  [138] = {.lex_state = 226},
  [139] = {.lex_state = 226},
  [140] = {.lex_state = 226},
  [141] = {.lex_state = 226},
  [142] = {.lex_state = 226},
  [143] = {.lex_state = 226},
  [144] = {.lex_state = 226},
  [145] = {.lex_state = 226},
  [146] = {.lex_state = 226},
  [147] = {.lex_state = 226},
  [148] = {.lex_state = 226},
  [149] = {.lex_state = 226},
  [150] = {.lex_state = 226},
  [151] = {.lex_state = 226},
  [152] = {.lex_state = 226},
  [153] = {.lex_state = 226},
  [154] = {.lex_state = 226},
  [155] = {.lex_state = 226},
  [156] = {.lex_state = 226},
  [157] = {.lex_state = 226},
  [158] = {.lex_state = 226},
  [159] = {.lex_state = 226},
  [160] = {.lex_state = 226},
  [161] = {.lex_state = 226},
  [162] = {.lex_state = 226},
  [163] = {.lex_state = 223},
  [164] = {.lex_state = 227},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 227},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 231},
  [170] = {.lex_state = 223},
  [171] = {.lex_state = 231},
  [172] = {.lex_state = 224},
  [173] = {.lex_state = 224},
  [174] = {.lex_state = 224},
  [175] = {.lex_state = 231},
  [176] = {.lex_state = 231},
  [177] = {.lex_state = 224},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 231},
  [180] = {.lex_state = 231},
  [181] = {.lex_state = 231},
  [182] = {.lex_state = 231},
  [183] = {.lex_state = 231},
  [184] = {.lex_state = 223},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 223},
  [188] = {.lex_state = 227},
  [189] = {.lex_state = 33},
  [190] = {.lex_state = 33},
  [191] = {.lex_state = 231},
  [192] = {.lex_state = 231},
  [193] = {.lex_state = 231},
  [194] = {.lex_state = 231},
  [195] = {.lex_state = 231},
  [196] = {.lex_state = 231},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 231},
  [199] = {.lex_state = 231},
  [200] = {.lex_state = 231},
  [201] = {.lex_state = 224},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 231},
  [204] = {.lex_state = 231},
  [205] = {.lex_state = 231},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 233},
  [212] = {.lex_state = 233},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 225},
  [215] = {.lex_state = 225},
  [216] = {.lex_state = 224},
  [217] = {.lex_state = 232},
  [218] = {.lex_state = 232},
  [219] = {.lex_state = 232},
  [220] = {.lex_state = 232},
  [221] = {.lex_state = 232},
  [222] = {.lex_state = 232},
  [223] = {.lex_state = 232},
  [224] = {.lex_state = 232},
  [225] = {.lex_state = 232},
  [226] = {.lex_state = 232},
  [227] = {.lex_state = 232},
  [228] = {.lex_state = 232},
  [229] = {.lex_state = 232},
  [230] = {.lex_state = 224},
  [231] = {.lex_state = 232},
  [232] = {.lex_state = 232},
  [233] = {.lex_state = 232},
  [234] = {.lex_state = 224},
  [235] = {.lex_state = 232},
  [236] = {.lex_state = 232},
  [237] = {.lex_state = 232},
  [238] = {.lex_state = 232},
  [239] = {.lex_state = 224},
  [240] = {.lex_state = 232},
  [241] = {.lex_state = 232},
  [242] = {.lex_state = 232},
  [243] = {.lex_state = 233},
  [244] = {.lex_state = 225},
  [245] = {.lex_state = 233},
  [246] = {.lex_state = 233},
  [247] = {.lex_state = 233},
  [248] = {.lex_state = 232},
  [249] = {.lex_state = 232},
  [250] = {.lex_state = 232},
  [251] = {.lex_state = 232},
  [252] = {.lex_state = 232},
  [253] = {.lex_state = 232},
  [254] = {.lex_state = 232},
  [255] = {.lex_state = 232},
  [256] = {.lex_state = 232},
  [257] = {.lex_state = 232},
  [258] = {.lex_state = 232},
  [259] = {.lex_state = 232},
  [260] = {.lex_state = 232},
  [261] = {.lex_state = 232},
  [262] = {.lex_state = 232},
  [263] = {.lex_state = 232},
  [264] = {.lex_state = 232},
  [265] = {.lex_state = 232},
  [266] = {.lex_state = 232},
  [267] = {.lex_state = 232},
  [268] = {.lex_state = 232},
  [269] = {.lex_state = 232},
  [270] = {.lex_state = 232},
  [271] = {.lex_state = 232},
  [272] = {.lex_state = 232},
  [273] = {.lex_state = 232},
  [274] = {.lex_state = 232},
  [275] = {.lex_state = 232},
  [276] = {.lex_state = 232},
  [277] = {.lex_state = 232},
  [278] = {.lex_state = 232},
  [279] = {.lex_state = 232},
  [280] = {.lex_state = 232},
  [281] = {.lex_state = 232},
  [282] = {.lex_state = 232},
  [283] = {.lex_state = 232},
  [284] = {.lex_state = 232},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 31},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 32},
  [302] = {.lex_state = 37},
  [303] = {.lex_state = 37},
  [304] = {.lex_state = 31},
  [305] = {.lex_state = 31},
  [306] = {.lex_state = 32},
  [307] = {.lex_state = 20},
  [308] = {.lex_state = 32},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 32},
  [311] = {.lex_state = 32},
  [312] = {.lex_state = 31},
  [313] = {.lex_state = 31},
  [314] = {.lex_state = 32},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 32},
  [318] = {.lex_state = 32},
  [319] = {.lex_state = 32},
  [320] = {.lex_state = 32},
  [321] = {.lex_state = 32},
  [322] = {.lex_state = 32},
  [323] = {.lex_state = 32},
  [324] = {.lex_state = 31},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 32},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 32},
  [330] = {.lex_state = 32},
  [331] = {.lex_state = 32},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 32},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 32},
  [338] = {.lex_state = 32},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 32},
  [342] = {.lex_state = 32},
  [343] = {.lex_state = 32},
  [344] = {.lex_state = 32},
  [345] = {.lex_state = 32},
  [346] = {.lex_state = 32},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 32},
  [351] = {.lex_state = 38},
  [352] = {.lex_state = 32},
  [353] = {.lex_state = 20},
  [354] = {.lex_state = 40},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 31},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 40},
  [360] = {.lex_state = 31},
  [361] = {.lex_state = 40},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 31},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 31},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 39},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 31},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 31},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 31},
  [375] = {.lex_state = 31},
  [376] = {.lex_state = 11},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 40},
  [379] = {.lex_state = 39},
  [380] = {.lex_state = 39},
  [381] = {.lex_state = 40},
  [382] = {.lex_state = 39},
  [383] = {.lex_state = 40},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 31},
  [390] = {.lex_state = 31},
  [391] = {.lex_state = 72},
  [392] = {.lex_state = 31},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 31},
  [395] = {.lex_state = 31},
  [396] = {.lex_state = 20},
  [397] = {.lex_state = 72},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 31},
  [400] = {.lex_state = 31},
  [401] = {.lex_state = 31},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 31},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 31},
  [406] = {.lex_state = 31},
  [407] = {.lex_state = 31},
  [408] = {.lex_state = 31},
  [409] = {.lex_state = 31},
  [410] = {.lex_state = 31},
  [411] = {.lex_state = 31},
  [412] = {.lex_state = 20},
  [413] = {.lex_state = 31},
  [414] = {.lex_state = 31},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 31},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 31},
  [419] = {.lex_state = 31},
  [420] = {.lex_state = 31},
  [421] = {.lex_state = 31},
  [422] = {.lex_state = 31},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 31},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 31},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 31},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 31},
  [431] = {.lex_state = 31},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 31},
  [434] = {.lex_state = 31},
  [435] = {.lex_state = 31},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 31},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 31},
  [447] = {.lex_state = 31},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 31},
  [453] = {.lex_state = 31},
  [454] = {.lex_state = 31},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 31},
  [457] = {.lex_state = 31},
  [458] = {.lex_state = 31},
  [459] = {.lex_state = 31},
  [460] = {.lex_state = 31},
  [461] = {.lex_state = 31},
  [462] = {.lex_state = 31},
  [463] = {.lex_state = 31},
  [464] = {.lex_state = 31},
  [465] = {.lex_state = 31},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 31},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 31},
  [470] = {.lex_state = 31},
  [471] = {.lex_state = 31},
  [472] = {.lex_state = 232},
  [473] = {.lex_state = 31},
  [474] = {.lex_state = 31},
  [475] = {.lex_state = 31},
  [476] = {.lex_state = 31},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 31},
  [479] = {.lex_state = 31},
  [480] = {.lex_state = 31},
  [481] = {.lex_state = 31},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 219},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 11},
  [491] = {.lex_state = 219},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 219},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 219},
  [498] = {.lex_state = 35},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 31},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 220},
  [504] = {.lex_state = 221},
  [505] = {.lex_state = 5},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 31},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 31},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 5},
  [516] = {.lex_state = 35},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 219},
  [520] = {.lex_state = 219},
  [521] = {.lex_state = 31},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 221},
  [524] = {.lex_state = 220},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 220},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 31},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 31},
  [536] = {.lex_state = 31},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 221},
  [539] = {.lex_state = 31},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 31},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 31},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 31},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 31},
  [557] = {.lex_state = 31},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 31},
  [560] = {.lex_state = 31},
  [561] = {.lex_state = 221},
  [562] = {.lex_state = 31},
  [563] = {.lex_state = 31},
  [564] = {.lex_state = 31},
  [565] = {.lex_state = 31},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 31},
  [568] = {.lex_state = 31},
  [569] = {.lex_state = 31},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 31},
  [591] = {.lex_state = 31},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym_parent_doc_line] = ACTIONS(1),
    [sym_doc_line] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Json] = ACTIONS(1),
    [anon_sym_Part] = ACTIONS(1),
    [anon_sym_Pack] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
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
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_assistant] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [sym_psyche_keyword] = ACTIONS(1),
    [sym_skill_keyword] = ACTIONS(1),
    [sym_service_keyword] = ACTIONS(1),
    [sym_prompt_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_instruct_keyword] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_task_keyword] = ACTIONS(1),
    [sym_chore_keyword] = ACTIONS(1),
    [sym_flow_keyword] = ACTIONS(1),
    [sym_pass_keyword] = ACTIONS(1),
    [sym_flow_do_keyword] = ACTIONS(1),
    [sym_flow_ask_keyword] = ACTIONS(1),
    [sym_flow_unfold_keyword] = ACTIONS(1),
    [sym_flow_keep_keyword] = ACTIONS(1),
    [sym_flow_drop_keyword] = ACTIONS(1),
    [sym_flow_rank_keyword] = ACTIONS(1),
    [sym_flow_each_keyword] = ACTIONS(1),
    [sym_flow_fold_keyword] = ACTIONS(1),
    [sym_flow_repeat_keyword] = ACTIONS(1),
    [sym_flow_until_keyword] = ACTIONS(1),
    [sym_flow_to_keyword] = ACTIONS(1),
    [sym_flow_par_keyword] = ACTIONS(1),
    [sym_flow_limit_keyword] = ACTIONS(1),
    [sym_flow_times_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(525),
    [sym_item] = STATE(37),
    [sym__trivia] = STATE(37),
    [sym_use] = STATE(254),
    [sym_struct] = STATE(254),
    [sym_psyche] = STATE(254),
    [sym_skill] = STATE(254),
    [sym_service] = STATE(254),
    [sym_prompt] = STATE(254),
    [sym_task] = STATE(254),
    [sym_chore] = STATE(254),
    [sym_instruct] = STATE(254),
    [sym_context] = STATE(254),
    [sym_thunk] = STATE(254),
    [sym_flow] = STATE(254),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym_parent_doc_line] = ACTIONS(5),
    [sym_doc_line] = ACTIONS(7),
    [sym_comment_line] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(13),
    [sym_skill_keyword] = ACTIONS(15),
    [sym_service_keyword] = ACTIONS(17),
    [sym_prompt_keyword] = ACTIONS(19),
    [sym_context_keyword] = ACTIONS(21),
    [sym_instruct_keyword] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(25),
    [sym_task_keyword] = ACTIONS(27),
    [sym_chore_keyword] = ACTIONS(29),
    [sym_flow_keyword] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(37), 1,
      sym_pass_keyword,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(69), 1,
      sym_flow_body,
    STATE(70), 1,
      sym_repeat_body,
    STATE(165), 1,
      sym_directive,
    STATE(189), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(48), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
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
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [90] = 22,
    ACTIONS(37), 1,
      sym_pass_keyword,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(61), 1,
      sym_flow_body,
    STATE(150), 1,
      sym_repeat_body,
    STATE(165), 1,
      sym_directive,
    STATE(189), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(48), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
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
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [180] = 22,
    ACTIONS(37), 1,
      sym_pass_keyword,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(61), 1,
      sym_flow_body,
    STATE(156), 1,
      sym_repeat_body,
    STATE(165), 1,
      sym_directive,
    STATE(189), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(48), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
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
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [270] = 22,
    ACTIONS(37), 1,
      sym_pass_keyword,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(69), 1,
      sym_flow_body,
    STATE(93), 1,
      sym_repeat_body,
    STATE(165), 1,
      sym_directive,
    STATE(189), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(48), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
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
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [360] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(250), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [447] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(258), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [534] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(255), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [621] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(276), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [708] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(252), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [795] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(283), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [882] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(264), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [969] = 21,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(185), 1,
      sym__directives,
    STATE(268), 1,
      sym_flow_body,
    STATE(415), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(228), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(59), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1056] = 20,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(217), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(83), 4,
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
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1140] = 15,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(87), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(89), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_until_keyword,
    STATE(16), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1214] = 15,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(104), 1,
      sym_flow_unfold_keyword,
    ACTIONS(107), 1,
      sym_flow_keep_keyword,
    ACTIONS(110), 1,
      sym_flow_drop_keyword,
    ACTIONS(113), 1,
      sym_flow_rank_keyword,
    ACTIONS(116), 1,
      sym_flow_each_keyword,
    ACTIONS(119), 1,
      sym_flow_fold_keyword,
    ACTIONS(122), 1,
      sym_flow_repeat_keyword,
    ACTIONS(125), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(93), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(96), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_until_keyword,
    STATE(16), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1288] = 15,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(130), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(132), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_until_keyword,
    STATE(15), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1362] = 20,
    ACTIONS(37), 1,
      sym_pass_keyword,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(165), 1,
      sym_directive,
    STATE(190), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(51), 2,
      sym_statements,
      sym__pass_statement,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(83), 4,
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
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1446] = 15,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(134), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(89), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(21), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1519] = 15,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(136), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(132), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(19), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1592] = 15,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_flow_do_keyword,
    ACTIONS(144), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(150), 1,
      sym_flow_keep_keyword,
    ACTIONS(153), 1,
      sym_flow_drop_keyword,
    ACTIONS(156), 1,
      sym_flow_rank_keyword,
    ACTIONS(159), 1,
      sym_flow_each_keyword,
    ACTIONS(162), 1,
      sym_flow_fold_keyword,
    ACTIONS(165), 1,
      sym_flow_repeat_keyword,
    ACTIONS(168), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(138), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(96), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(21), 14,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
      aux_sym_statements_repeat1,
  [1665] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(266), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [1749] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(267), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [1833] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(253), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [1917] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(265), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [2001] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(251), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [2085] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(275), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [2169] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(277), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [2253] = 23,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(45), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(280), 1,
      sym_thunk_body,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
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
  [2337] = 22,
    ACTIONS(61), 1,
      sym_pass_keyword,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    STATE(33), 1,
      sym_directive,
    STATE(34), 1,
      sym__directives,
    STATE(39), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(364), 1,
      sym_line_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(532), 1,
      sym_role,
    STATE(206), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 4,
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
  [2418] = 6,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(32), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(191), 4,
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
    ACTIONS(189), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [2466] = 6,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(32), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(197), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(200), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(195), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [2514] = 6,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(384), 1,
      sym_directive_key,
    STATE(31), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(207), 4,
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
    ACTIONS(205), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [2562] = 19,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(219), 1,
      sym_messages,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    STATE(222), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(211), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(213), 10,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [2635] = 19,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_settings,
    STATE(47), 1,
      sym_message,
    STATE(169), 1,
      sym_context_setting,
    STATE(171), 1,
      sym_instruct_setting,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(237), 1,
      sym_messages,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    STATE(238), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(217), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(219), 10,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [2708] = 17,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_use_keyword,
    ACTIONS(232), 1,
      sym_struct_keyword,
    ACTIONS(235), 1,
      sym_psyche_keyword,
    ACTIONS(238), 1,
      sym_skill_keyword,
    ACTIONS(241), 1,
      sym_service_keyword,
    ACTIONS(244), 1,
      sym_prompt_keyword,
    ACTIONS(247), 1,
      sym_context_keyword,
    ACTIONS(250), 1,
      sym_instruct_keyword,
    ACTIONS(253), 1,
      sym_thunk_keyword,
    ACTIONS(256), 1,
      sym_task_keyword,
    ACTIONS(259), 1,
      sym_chore_keyword,
    ACTIONS(262), 1,
      sym_flow_keyword,
    ACTIONS(223), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(226), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(36), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(254), 12,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_task,
      sym_chore,
      sym_instruct,
      sym_context,
      sym_thunk,
      sym_flow,
  [2775] = 17,
    ACTIONS(9), 1,
      sym_use_keyword,
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
      sym_thunk_keyword,
    ACTIONS(27), 1,
      sym_task_keyword,
    ACTIONS(29), 1,
      sym_chore_keyword,
    ACTIONS(31), 1,
      sym_flow_keyword,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(269), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(36), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(254), 12,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_task,
      sym_chore,
      sym_instruct,
      sym_context,
      sym_thunk,
      sym_flow,
  [2842] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [2878] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_message,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(219), 1,
      sym_messages,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    STATE(222), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(211), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(213), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [2938] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [2974] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [3010] = 6,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym_blank_line,
    ACTIONS(290), 1,
      sym__nested_indented_raw_text,
    STATE(42), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    ACTIONS(288), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3054] = 6,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym_blank_line,
    ACTIONS(299), 1,
      sym__nested_indented_raw_text,
    STATE(42), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    ACTIONS(297), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3098] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_message,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(220), 1,
      sym_messages,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    STATE(241), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(303), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(305), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3158] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_message,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(237), 1,
      sym_messages,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    STATE(238), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(217), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(219), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3218] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(57), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(309), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(311), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3273] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(46), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(315), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(317), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3328] = 4,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(321), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(323), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3367] = 4,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(327), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(329), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3406] = 6,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_blank_line,
    STATE(52), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(76), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(335), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
  [3449] = 4,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    STATE(54), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(337), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(329), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3488] = 6,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      sym_blank_line,
    STATE(53), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(76), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(343), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
  [3531] = 6,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      sym_blank_line,
    ACTIONS(352), 1,
      sym__implicit_do_raw_text,
    STATE(53), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(76), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(350), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
  [3574] = 4,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(327), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(357), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3613] = 4,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(327), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(361), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3652] = 4,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(55), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(363), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(357), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3691] = 12,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      sym_newline,
    ACTIONS(373), 1,
      sym_inline_comment,
    ACTIONS(381), 1,
      sym_text_line,
    STATE(193), 1,
      sym_text_inline,
    STATE(196), 1,
      sym_text_block,
    STATE(364), 1,
      sym_line_end,
    STATE(532), 1,
      sym_role,
    ACTIONS(376), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(57), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(370), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(379), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3746] = 6,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    ACTIONS(288), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [3789] = 4,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(392), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(395), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [3828] = 6,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      sym_blank_line,
    ACTIONS(399), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    ACTIONS(297), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [3871] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 1,
      sym_flow_until_keyword,
    STATE(155), 1,
      sym_until_clause,
    ACTIONS(403), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [3909] = 6,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 1,
      sym_blank_line,
    ACTIONS(410), 1,
      sym__implicit_do_raw_text,
    STATE(62), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(120), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(350), 24,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [3951] = 4,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(343), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
  [3989] = 6,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      sym_blank_line,
    STATE(62), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(120), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(343), 24,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [4031] = 4,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(417), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
  [4069] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
      sym__nested_indented_raw_text,
  [4103] = 6,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      sym_blank_line,
    STATE(64), 1,
      aux_sym_implicit_do_statement_repeat1,
    STATE(120), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(335), 24,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [4145] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
      sym__nested_indented_raw_text,
  [4179] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      sym_flow_until_keyword,
    STATE(100), 1,
      sym_until_clause,
    ACTIONS(403), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [4217] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4250] = 2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4283] = 4,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(343), 25,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [4320] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4353] = 4,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym__implicit_do_text_body_line,
    ACTIONS(417), 25,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [4390] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4423] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4456] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4489] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
      sym__nested_indented_raw_text,
  [4522] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4555] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4588] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4621] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4654] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4687] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4720] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4753] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4786] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4819] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4852] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4885] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4918] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4951] = 2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4984] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5017] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5050] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
      sym__nested_indented_raw_text,
  [5083] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5116] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5149] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5182] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5215] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5248] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5281] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5314] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5347] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5380] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5413] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5446] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5479] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5512] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5545] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5578] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5611] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5644] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5677] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5710] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5743] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5776] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5809] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [5842] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [5874] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [5906] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [5938] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [5970] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6002] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6034] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6066] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6098] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6130] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6162] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6194] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6226] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6258] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6290] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6322] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6354] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6386] = 2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6418] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6450] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6482] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6514] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6546] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6578] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6610] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6642] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6674] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6706] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6738] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6770] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6802] = 2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6834] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6866] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6898] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6930] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6962] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [6994] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7026] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7058] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7090] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7122] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7154] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7186] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7218] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7250] = 6,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      sym_blank_line,
    ACTIONS(557), 1,
      sym__nested_indented_raw_text,
    STATE(170), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(187), 1,
      sym__nested_text_body_line,
    ACTIONS(297), 21,
      sym_newline,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7289] = 5,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 1,
      sym_blank_line,
    ACTIONS(565), 1,
      sym_indented_raw_text,
    STATE(166), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(561), 21,
      sym_newline,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7326] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(167), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(567), 4,
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
    ACTIONS(205), 10,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7363] = 5,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      sym_blank_line,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    STATE(166), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(571), 21,
      sym_newline,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7400] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(168), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(579), 4,
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
    ACTIONS(189), 10,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7437] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(168), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(581), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(200), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(195), 10,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7474] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_instruct_setting,
    STATE(176), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(588), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(586), 17,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7513] = 6,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(590), 1,
      sym_blank_line,
    ACTIONS(593), 1,
      sym__nested_indented_raw_text,
    STATE(170), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(187), 1,
      sym__nested_text_body_line,
    ACTIONS(288), 21,
      sym_newline,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7552] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_context_setting,
    STATE(175), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(596), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(586), 17,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7591] = 10,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 1,
      sym_blank_line,
    ACTIONS(606), 1,
      sym_snake_name,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    STATE(242), 1,
      sym_text_body,
    STATE(513), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(602), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(177), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(604), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7638] = 10,
    ACTIONS(600), 1,
      sym_blank_line,
    ACTIONS(606), 1,
      sym_snake_name,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_text_body,
    STATE(513), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(612), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(201), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(614), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7685] = 10,
    ACTIONS(600), 1,
      sym_blank_line,
    ACTIONS(606), 1,
      sym_snake_name,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_text_body,
    STATE(513), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(618), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(173), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(620), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7732] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_context_setting,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(626), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(624), 17,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7771] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_instruct_setting,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(626), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(624), 17,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7810] = 10,
    ACTIONS(600), 1,
      sym_blank_line,
    ACTIONS(606), 1,
      sym_snake_name,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_text_body,
    STATE(513), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(612), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(201), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(630), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7857] = 3,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(632), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(395), 19,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      sym_pass_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [7889] = 4,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(182), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(635), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(624), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7923] = 4,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    STATE(183), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(641), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(639), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7957] = 4,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(643), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(395), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [7991] = 4,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(626), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(639), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8025] = 4,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(626), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(648), 18,
      sym_newline,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8059] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
      sym__nested_indented_raw_text,
  [8088] = 13,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(217), 1,
      sym_statements,
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8139] = 13,
    ACTIONS(63), 1,
      sym_flow_do_keyword,
    ACTIONS(65), 1,
      sym_flow_ask_keyword,
    ACTIONS(67), 1,
      sym_flow_unfold_keyword,
    ACTIONS(69), 1,
      sym_flow_keep_keyword,
    ACTIONS(71), 1,
      sym_flow_drop_keyword,
    ACTIONS(73), 1,
      sym_flow_rank_keyword,
    ACTIONS(75), 1,
      sym_flow_each_keyword,
    ACTIONS(77), 1,
      sym_flow_fold_keyword,
    ACTIONS(79), 1,
      sym_flow_repeat_keyword,
    ACTIONS(81), 1,
      sym__implicit_do_raw_text,
    STATE(67), 1,
      sym__implicit_do_text_body_line,
    STATE(232), 1,
      sym_statements,
    STATE(20), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8190] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
      sym__nested_indented_raw_text,
  [8219] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
      sym_indented_raw_text,
  [8248] = 13,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(51), 1,
      sym_statements,
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8299] = 13,
    ACTIONS(39), 1,
      sym_flow_do_keyword,
    ACTIONS(41), 1,
      sym_flow_ask_keyword,
    ACTIONS(43), 1,
      sym_flow_unfold_keyword,
    ACTIONS(45), 1,
      sym_flow_keep_keyword,
    ACTIONS(47), 1,
      sym_flow_drop_keyword,
    ACTIONS(49), 1,
      sym_flow_rank_keyword,
    ACTIONS(51), 1,
      sym_flow_each_keyword,
    ACTIONS(53), 1,
      sym_flow_fold_keyword,
    ACTIONS(55), 1,
      sym_flow_repeat_keyword,
    ACTIONS(57), 1,
      sym__implicit_do_raw_text,
    STATE(50), 1,
      sym__implicit_do_text_body_line,
    STATE(56), 1,
      sym_statements,
    STATE(17), 12,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8350] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8378] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8406] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8434] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8462] = 2,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8490] = 2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8518] = 1,
    ACTIONS(281), 23,
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
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [8544] = 2,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8572] = 2,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8600] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8628] = 6,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(685), 1,
      sym_snake_name,
    STATE(513), 1,
      sym_property_key,
    STATE(201), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(680), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(683), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [8664] = 1,
    ACTIONS(277), 23,
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
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [8690] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8718] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8746] = 2,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_text_line,
  [8774] = 3,
    STATE(206), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(692), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(395), 17,
      sym_newline,
      sym_inline_comment,
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
      sym_text_line,
  [8804] = 1,
    ACTIONS(273), 22,
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
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [8829] = 1,
    ACTIONS(281), 22,
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
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [8854] = 1,
    ACTIONS(277), 22,
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
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym__implicit_do_raw_text,
  [8879] = 1,
    ACTIONS(281), 21,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
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
      sym_text_line,
  [8903] = 7,
    ACTIONS(697), 1,
      sym_blank_line,
    ACTIONS(705), 1,
      sym_snake_name,
    STATE(510), 1,
      sym_field_name,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(700), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(211), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(703), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8939] = 7,
    ACTIONS(710), 1,
      sym_blank_line,
    ACTIONS(716), 1,
      sym_snake_name,
    STATE(510), 1,
      sym_field_name,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(712), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(211), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(714), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8975] = 1,
    ACTIONS(277), 21,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_inline_comment,
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
      sym_text_line,
  [8999] = 5,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      sym_blank_line,
    ACTIONS(721), 1,
      sym_indented_raw_text,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(571), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9030] = 5,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    ACTIONS(724), 1,
      sym_blank_line,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(561), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9061] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [9085] = 4,
    ACTIONS(726), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(728), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(325), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9113] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(325), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9141] = 4,
    ACTIONS(303), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(734), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(241), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(301), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9169] = 4,
    ACTIONS(738), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(740), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(736), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9197] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(742), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9225] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(301), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9253] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(744), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9281] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(746), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9309] = 4,
    ACTIONS(217), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(748), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(238), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9337] = 4,
    ACTIONS(750), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(752), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(221), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(746), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9365] = 4,
    ACTIONS(754), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(756), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(240), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(744), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9393] = 4,
    ACTIONS(758), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(760), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(218), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(319), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9421] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(355), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9449] = 3,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_snake_name,
    ACTIONS(765), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9475] = 4,
    ACTIONS(770), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(772), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(223), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(610), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9503] = 4,
    ACTIONS(774), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(776), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(235), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(355), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9531] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(778), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9559] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [9583] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(359), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9611] = 4,
    ACTIONS(780), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(783), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(390), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9639] = 4,
    ACTIONS(211), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(786), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(222), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9667] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9695] = 2,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(790), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
      sym_indented_raw_text,
  [9719] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(792), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9747] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(732), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(736), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9775] = 4,
    ACTIONS(794), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(796), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(628), 13,
      ts_builtin_sym_end,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9803] = 2,
    ACTIONS(798), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(800), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [9826] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9849] = 2,
    ACTIONS(802), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(804), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [9872] = 2,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(281), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [9895] = 2,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(277), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_snake_name,
  [9918] = 2,
    ACTIONS(808), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(806), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9940] = 2,
    ACTIONS(812), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(810), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9962] = 2,
    ACTIONS(816), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(814), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9984] = 2,
    ACTIONS(820), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(818), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10006] = 2,
    ACTIONS(824), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(822), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10028] = 2,
    ACTIONS(828), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(826), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10050] = 2,
    ACTIONS(832), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(830), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10072] = 2,
    ACTIONS(836), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(834), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10094] = 2,
    ACTIONS(840), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(838), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10116] = 2,
    ACTIONS(844), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(842), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10138] = 2,
    ACTIONS(848), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(846), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10160] = 2,
    ACTIONS(852), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(850), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10182] = 2,
    ACTIONS(856), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(854), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10204] = 2,
    ACTIONS(445), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(443), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10226] = 2,
    ACTIONS(860), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(858), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10248] = 2,
    ACTIONS(864), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(862), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10270] = 2,
    ACTIONS(868), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(866), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10292] = 2,
    ACTIONS(872), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(870), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10314] = 2,
    ACTIONS(876), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(874), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10336] = 2,
    ACTIONS(880), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(878), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10358] = 2,
    ACTIONS(884), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(882), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10380] = 2,
    ACTIONS(888), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(886), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10402] = 2,
    ACTIONS(668), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(666), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10424] = 2,
    ACTIONS(281), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(279), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10446] = 2,
    ACTIONS(277), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(275), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10468] = 2,
    ACTIONS(892), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(890), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10490] = 2,
    ACTIONS(672), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(670), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10512] = 2,
    ACTIONS(896), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(894), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10534] = 2,
    ACTIONS(900), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(898), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10556] = 2,
    ACTIONS(904), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(902), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10578] = 2,
    ACTIONS(908), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(906), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10600] = 2,
    ACTIONS(912), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(910), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10622] = 2,
    ACTIONS(916), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(914), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10644] = 2,
    ACTIONS(676), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(674), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10666] = 2,
    ACTIONS(920), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(918), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10688] = 2,
    ACTIONS(924), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(922), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10710] = 2,
    ACTIONS(928), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(926), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [10732] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(558), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10757] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(552), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10782] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(572), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10807] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(517), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10832] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(461), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10857] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(514), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10882] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(528), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10907] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(583), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10932] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(435), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10957] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(542), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10982] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(522), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11007] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(530), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11032] = 6,
    ACTIONS(932), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(312), 1,
      sym_type_name,
    STATE(534), 1,
      sym_type,
    STATE(313), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(930), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11057] = 4,
    ACTIONS(936), 1,
      sym_array_suffix,
    STATE(300), 1,
      aux_sym_type_repeat1,
    STATE(316), 1,
      sym_type_suffix,
    ACTIONS(934), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11075] = 4,
    ACTIONS(936), 1,
      sym_array_suffix,
    STATE(298), 1,
      aux_sym_type_repeat1,
    STATE(316), 1,
      sym_type_suffix,
    ACTIONS(938), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11093] = 4,
    ACTIONS(942), 1,
      sym_array_suffix,
    STATE(300), 1,
      aux_sym_type_repeat1,
    STATE(316), 1,
      sym_type_suffix,
    ACTIONS(940), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11111] = 7,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(92), 1,
      sym_condition,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(91), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11134] = 8,
    ACTIONS(951), 1,
      sym_integer_literal,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(955), 1,
      sym_flow_limit_keyword,
    ACTIONS(957), 1,
      sym_colon,
    ACTIONS(959), 1,
      sym_snake_name,
    STATE(305), 1,
      sym_callee,
    STATE(483), 1,
      sym_limit_clause,
    STATE(581), 1,
      sym_par_clause,
  [11159] = 8,
    ACTIONS(951), 1,
      sym_integer_literal,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(955), 1,
      sym_flow_limit_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(961), 1,
      sym_colon,
    STATE(304), 1,
      sym_callee,
    STATE(440), 1,
      sym_limit_clause,
    STATE(573), 1,
      sym_par_clause,
  [11184] = 8,
    ACTIONS(951), 1,
      sym_integer_literal,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(969), 1,
      sym_flow_limit_keyword,
    STATE(131), 1,
      sym_line_end,
    STATE(372), 1,
      sym_limit_clause,
    STATE(424), 1,
      sym_par_clause,
  [11209] = 8,
    ACTIONS(951), 1,
      sym_integer_literal,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(969), 1,
      sym_flow_limit_keyword,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
    STATE(374), 1,
      sym_limit_clause,
    STATE(473), 1,
      sym_par_clause,
  [11234] = 7,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(149), 1,
      sym_condition,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(148), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11257] = 6,
    ACTIONS(979), 1,
      sym_comment_line,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(256), 1,
      sym_struct_body,
    STATE(510), 1,
      sym_field_name,
    ACTIONS(977), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(212), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11278] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(162), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11298] = 7,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(985), 1,
      sym_colon,
    STATE(366), 1,
      sym_callee,
    STATE(409), 1,
      sym_par_clause,
    STATE(443), 1,
      sym_to_clause,
  [11320] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_text_line,
    STATE(259), 1,
      sym_context_body,
    STATE(263), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(371), 1,
      sym_line_end,
  [11342] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(141), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11362] = 1,
    ACTIONS(989), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11372] = 1,
    ACTIONS(991), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11382] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(152), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11402] = 1,
    ACTIONS(993), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11412] = 1,
    ACTIONS(995), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11422] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(143), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11442] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_text_line,
    STATE(249), 1,
      sym_text_inline,
    STATE(260), 1,
      sym_instruct_body,
    STATE(270), 1,
      sym_text_block,
    STATE(371), 1,
      sym_line_end,
  [11464] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(154), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11484] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(138), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11504] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(145), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11524] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_text_line,
    STATE(262), 1,
      sym_context_body,
    STATE(263), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(371), 1,
      sym_line_end,
  [11546] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_text_line,
    STATE(249), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(278), 1,
      sym_instruct_body,
    STATE(371), 1,
      sym_line_end,
  [11568] = 1,
    ACTIONS(997), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11578] = 1,
    ACTIONS(999), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11588] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(147), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11608] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(118), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11628] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(126), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11648] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(107), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11668] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(109), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11688] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(111), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11708] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(139), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11728] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(115), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11748] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(117), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11768] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(132), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11788] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(80), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11808] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(81), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11828] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(82), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11848] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11868] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(86), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11888] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(88), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11908] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(90), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11928] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(124), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11948] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(1001), 1,
      sym_text_line,
    STATE(200), 1,
      sym__nested_text_block,
    STATE(376), 1,
      sym_line_end,
    STATE(195), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11968] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(97), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11988] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(99), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12008] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12028] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(128), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12048] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12068] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(373), 1,
      sym_line_end,
    STATE(130), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12088] = 7,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1003), 1,
      sym_colon,
    STATE(370), 1,
      sym_callee,
    STATE(386), 1,
      sym_par_clause,
    STATE(484), 1,
      sym_to_clause,
  [12110] = 6,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(377), 1,
      sym_line_end,
    STATE(105), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12130] = 6,
    ACTIONS(1005), 1,
      sym_arrow,
    ACTIONS(1007), 1,
      sym_colon,
    ACTIONS(1009), 1,
      sym_lparen,
    ACTIONS(1011), 1,
      sym_snake_name,
    STATE(398), 1,
      sym_thunk_name,
    STATE(495), 1,
      sym_params,
  [12149] = 6,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1013), 1,
      sym_colon,
    STATE(405), 1,
      sym_callee,
    STATE(456), 1,
      sym_callees,
    STATE(579), 1,
      sym_to_clause,
  [12168] = 1,
    ACTIONS(1015), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [12177] = 5,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    ACTIONS(1017), 1,
      sym_flow_until_keyword,
    ACTIONS(1019), 1,
      sym_colon,
    STATE(71), 2,
      sym_line_end,
      sym_until_clause,
  [12194] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      sym_flow_until_keyword,
    ACTIONS(1023), 1,
      sym_colon,
    STATE(136), 2,
      sym_line_end,
      sym_until_clause,
  [12211] = 6,
    ACTIONS(1009), 1,
      sym_lparen,
    ACTIONS(1025), 1,
      sym_arrow,
    ACTIONS(1027), 1,
      sym_colon,
    ACTIONS(1029), 1,
      sym_snake_name,
    STATE(402), 1,
      sym_flow_name,
    STATE(508), 1,
      sym_params,
  [12230] = 6,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1031), 1,
      sym_colon,
    STATE(405), 1,
      sym_callee,
    STATE(430), 1,
      sym_callees,
    STATE(547), 1,
      sym_to_clause,
  [12249] = 5,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
    STATE(471), 1,
      sym_par_clause,
  [12265] = 5,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1033), 1,
      sym_colon,
    STATE(447), 1,
      sym_callee,
    STATE(555), 1,
      sym_to_clause,
  [12281] = 5,
    ACTIONS(1021), 1,
      sym_flow_until_keyword,
    ACTIONS(1035), 1,
      sym_integer_literal,
    ACTIONS(1037), 1,
      sym_colon,
    STATE(151), 1,
      sym_until_clause,
    STATE(357), 1,
      sym_times_clause,
  [12297] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    STATE(127), 1,
      sym_line_end,
    STATE(421), 1,
      sym_par_clause,
  [12313] = 4,
    ACTIONS(565), 1,
      sym_indented_raw_text,
    ACTIONS(1039), 1,
      sym_blank_line,
    STATE(199), 1,
      sym_text_body,
    STATE(164), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12327] = 5,
    ACTIONS(1017), 1,
      sym_flow_until_keyword,
    ACTIONS(1035), 1,
      sym_integer_literal,
    ACTIONS(1041), 1,
      sym_colon,
    STATE(77), 1,
      sym_until_clause,
    STATE(356), 1,
      sym_times_clause,
  [12343] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    STATE(133), 1,
      sym_line_end,
    STATE(426), 1,
      sym_par_clause,
  [12359] = 5,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(470), 1,
      sym_par_clause,
  [12375] = 5,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(1043), 1,
      sym_colon,
    STATE(375), 1,
      sym_callee,
    STATE(393), 1,
      sym_par_clause,
  [12391] = 2,
    ACTIONS(1047), 1,
      sym_flow_times_keyword,
    ACTIONS(1045), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12401] = 5,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(116), 1,
      sym_line_end,
    STATE(475), 1,
      sym_par_clause,
  [12417] = 4,
    ACTIONS(608), 1,
      sym_indented_raw_text,
    ACTIONS(1049), 1,
      sym_blank_line,
    STATE(281), 1,
      sym_text_body,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12431] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    STATE(144), 1,
      sym_line_end,
    STATE(450), 1,
      sym_par_clause,
  [12447] = 5,
    ACTIONS(1051), 1,
      sym_blank_line,
    ACTIONS(1053), 1,
      sym__nested_indented_raw_text,
    STATE(60), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    STATE(159), 1,
      sym__nested_text_body,
  [12463] = 5,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
    STATE(476), 1,
      sym_par_clause,
  [12479] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    STATE(129), 1,
      sym_line_end,
    STATE(422), 1,
      sym_par_clause,
  [12495] = 5,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1057), 1,
      sym__nested_indented_raw_text,
    STATE(163), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(187), 1,
      sym__nested_text_body_line,
    STATE(194), 1,
      sym__nested_text_body,
  [12511] = 5,
    ACTIONS(1059), 1,
      sym_blank_line,
    ACTIONS(1061), 1,
      sym__nested_indented_raw_text,
    STATE(43), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    STATE(104), 1,
      sym__nested_text_body,
  [12527] = 5,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1063), 1,
      sym_colon,
    STATE(458), 1,
      sym_callee,
    STATE(580), 1,
      sym_to_clause,
  [12543] = 5,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(1065), 1,
      sym_colon,
    STATE(367), 1,
      sym_callee,
    STATE(407), 1,
      sym_par_clause,
  [12559] = 5,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(360), 1,
      sym_callee,
    STATE(411), 1,
      sym_par_clause,
  [12575] = 5,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1069), 1,
      sym_colon,
    STATE(434), 1,
      sym_callee,
    STATE(575), 1,
      sym_to_clause,
  [12591] = 5,
    ACTIONS(953), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(1071), 1,
      sym_colon,
    STATE(363), 1,
      sym_callee,
    STATE(394), 1,
      sym_par_clause,
  [12607] = 5,
    ACTIONS(959), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_flow_to_keyword,
    ACTIONS(1073), 1,
      sym_colon,
    STATE(464), 1,
      sym_callee,
    STATE(584), 1,
      sym_to_clause,
  [12623] = 2,
    STATE(504), 1,
      sym_directive_op,
    ACTIONS(1075), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12632] = 2,
    ACTIONS(277), 1,
      sym_comment_line,
    ACTIONS(275), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [12641] = 4,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    ACTIONS(1077), 1,
      sym_colon,
    STATE(116), 1,
      sym_line_end,
  [12654] = 3,
    ACTIONS(1079), 1,
      sym_optional_marker,
    ACTIONS(1081), 1,
      sym_colon,
    ACTIONS(1083), 2,
      sym_rparen,
      sym_comma,
  [12665] = 1,
    ACTIONS(1085), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12672] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
    STATE(282), 1,
      sym_job_body,
  [12685] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(273), 1,
      sym_cap_body,
  [12698] = 2,
    STATE(481), 1,
      sym_text_ref,
    ACTIONS(1091), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12707] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(414), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1093), 2,
      sym_newline,
      sym_inline_comment,
  [12718] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1097), 1,
      sym_colon,
    STATE(129), 1,
      sym_line_end,
  [12731] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1099), 1,
      sym_colon,
    STATE(127), 1,
      sym_line_end,
  [12744] = 3,
    ACTIONS(1103), 1,
      sym_comma,
    STATE(406), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1101), 2,
      sym_newline,
      sym_inline_comment,
  [12755] = 4,
    ACTIONS(1105), 1,
      sym_rparen,
    ACTIONS(1107), 1,
      sym_snake_name,
    STATE(387), 1,
      sym_param_name,
    STATE(442), 1,
      sym_param,
  [12768] = 2,
    STATE(482), 1,
      sym_text_ref,
    ACTIONS(1091), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12777] = 4,
    ACTIONS(1009), 1,
      sym_lparen,
    ACTIONS(1109), 1,
      sym_arrow,
    ACTIONS(1111), 1,
      sym_colon,
    STATE(493), 1,
      sym_params,
  [12790] = 1,
    ACTIONS(1113), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12797] = 1,
    ACTIONS(1115), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12804] = 1,
    ACTIONS(1117), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12811] = 4,
    ACTIONS(1009), 1,
      sym_lparen,
    ACTIONS(1119), 1,
      sym_arrow,
    ACTIONS(1121), 1,
      sym_colon,
    STATE(502), 1,
      sym_params,
  [12824] = 3,
    ACTIONS(1125), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1123), 2,
      sym_newline,
      sym_inline_comment,
  [12835] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(257), 1,
      sym_cap_body,
  [12848] = 3,
    ACTIONS(1103), 1,
      sym_comma,
    STATE(395), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1128), 2,
      sym_newline,
      sym_inline_comment,
  [12859] = 3,
    ACTIONS(1132), 1,
      sym_comma,
    STATE(406), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1130), 2,
      sym_newline,
      sym_inline_comment,
  [12870] = 4,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    ACTIONS(1135), 1,
      sym_colon,
    STATE(108), 1,
      sym_line_end,
  [12883] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
    STATE(284), 1,
      sym_job_body,
  [12896] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1137), 1,
      sym_colon,
    STATE(133), 1,
      sym_line_end,
  [12909] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(248), 1,
      sym_cap_body,
  [12922] = 4,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    ACTIONS(1139), 1,
      sym_colon,
    STATE(110), 1,
      sym_line_end,
  [12935] = 2,
    ACTIONS(281), 1,
      sym_comment_line,
    ACTIONS(279), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [12944] = 4,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(269), 1,
      sym_cap_body,
  [12957] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1141), 2,
      sym_newline,
      sym_inline_comment,
  [12968] = 2,
    STATE(523), 1,
      sym_directive_op,
    ACTIONS(1075), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12977] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(103), 1,
      sym_line_end,
  [12987] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
  [12997] = 1,
    ACTIONS(1147), 3,
      sym_newline,
      sym_inline_comment,
      sym_colon,
  [13003] = 3,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1151), 1,
      sym_inline_comment,
    STATE(274), 1,
      sym_line_end,
  [13013] = 3,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1151), 1,
      sym_inline_comment,
    STATE(261), 1,
      sym_line_end,
  [13023] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
  [13033] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [13043] = 3,
    ACTIONS(1153), 1,
      sym_rparen,
    ACTIONS(1155), 1,
      sym_comma,
    STATE(423), 1,
      aux_sym_params_repeat1,
  [13053] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
  [13063] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [13073] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(146), 1,
      sym_line_end,
  [13083] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
  [13093] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [13103] = 3,
    ACTIONS(1162), 1,
      sym_colon,
    ACTIONS(1164), 1,
      sym_snake_name,
    STATE(553), 1,
      sym_context_name,
  [13113] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
  [13123] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(123), 1,
      sym_line_end,
  [13133] = 3,
    ACTIONS(1107), 1,
      sym_snake_name,
    STATE(387), 1,
      sym_param_name,
    STATE(501), 1,
      sym_param,
  [13143] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13153] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
  [13163] = 3,
    ACTIONS(1166), 1,
      sym_newline,
    ACTIONS(1168), 1,
      sym_inline_comment,
    STATE(245), 1,
      sym_line_end,
  [13173] = 3,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    STATE(239), 1,
      sym_line_end,
  [13183] = 3,
    ACTIONS(1170), 1,
      sym_rparen,
    ACTIONS(1172), 1,
      sym_comma,
    STATE(423), 1,
      aux_sym_params_repeat1,
  [13193] = 2,
    ACTIONS(1174), 1,
      sym_colon,
    ACTIONS(1176), 2,
      sym_rparen,
      sym_comma,
  [13201] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
  [13211] = 3,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(1178), 1,
      sym_colon,
    STATE(540), 1,
      sym_par_clause,
  [13221] = 3,
    ACTIONS(1180), 1,
      sym_colon,
    ACTIONS(1182), 1,
      sym_snake_name,
    STATE(543), 1,
      sym_instruct_name,
  [13231] = 3,
    ACTIONS(1172), 1,
      sym_comma,
    ACTIONS(1184), 1,
      sym_rparen,
    STATE(437), 1,
      aux_sym_params_repeat1,
  [13241] = 3,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(1137), 1,
      sym_colon,
    STATE(586), 1,
      sym_par_clause,
  [13251] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
  [13261] = 1,
    ACTIONS(1130), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13267] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [13277] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(135), 1,
      sym_line_end,
  [13287] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [13297] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [13307] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(153), 1,
      sym_line_end,
  [13317] = 1,
    ACTIONS(1186), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13323] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [13333] = 3,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_inline_comment,
    STATE(198), 1,
      sym_line_end,
  [13343] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [13353] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [13363] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
  [13373] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_line_end,
  [13383] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
  [13393] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13403] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [13413] = 3,
    ACTIONS(1166), 1,
      sym_newline,
    ACTIONS(1168), 1,
      sym_inline_comment,
    STATE(243), 1,
      sym_line_end,
  [13423] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13433] = 1,
    ACTIONS(1123), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13439] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [13449] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [13459] = 3,
    ACTIONS(1192), 1,
      sym_newline,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(207), 1,
      sym_line_end,
  [13469] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_line_end,
  [13479] = 1,
    ACTIONS(1196), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13485] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13495] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [13505] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(85), 1,
      sym_line_end,
  [13515] = 3,
    ACTIONS(1198), 1,
      sym_pascal_name,
    STATE(526), 1,
      sym_struct_name,
    STATE(570), 1,
      sym_type_name,
  [13525] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [13535] = 3,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
  [13545] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
  [13555] = 3,
    ACTIONS(971), 1,
      sym_newline,
    ACTIONS(973), 1,
      sym_inline_comment,
    STATE(98), 1,
      sym_line_end,
  [13565] = 3,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_inline_comment,
    STATE(191), 1,
      sym_line_end,
  [13575] = 3,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1151), 1,
      sym_inline_comment,
    STATE(279), 1,
      sym_line_end,
  [13585] = 3,
    ACTIONS(1204), 1,
      sym_newline,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(307), 1,
      sym_line_end,
  [13595] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [13605] = 3,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_inline_comment,
    STATE(205), 1,
      sym_line_end,
  [13615] = 3,
    ACTIONS(1188), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
  [13625] = 3,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(1208), 1,
      sym_colon,
    STATE(587), 1,
      sym_par_clause,
  [13635] = 3,
    ACTIONS(967), 1,
      sym_flow_par_keyword,
    ACTIONS(1077), 1,
      sym_colon,
    STATE(588), 1,
      sym_par_clause,
  [13645] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [13655] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [13665] = 1,
    ACTIONS(1210), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13671] = 2,
    ACTIONS(1212), 1,
      sym__snake_kebab_name,
    STATE(571), 1,
      sym_job_name,
  [13678] = 2,
    ACTIONS(279), 1,
      sym__nested_indented_raw_text,
    ACTIONS(281), 1,
      sym_blank_line,
  [13685] = 2,
    ACTIONS(275), 1,
      sym__nested_indented_raw_text,
    ACTIONS(277), 1,
      sym_blank_line,
  [13692] = 2,
    ACTIONS(1214), 1,
      sym__snake_kebab_name,
    STATE(578), 1,
      sym_cap_name,
  [13699] = 2,
    ACTIONS(1216), 1,
      sym_snake_name,
    STATE(431), 1,
      sym_agent,
  [13706] = 2,
    ACTIONS(1218), 1,
      sym_arrow,
    ACTIONS(1220), 1,
      sym_colon,
  [13713] = 2,
    ACTIONS(1212), 1,
      sym__snake_kebab_name,
    STATE(544), 1,
      sym_job_name,
  [13720] = 2,
    ACTIONS(1222), 1,
      sym_arrow,
    ACTIONS(1224), 1,
      sym_colon,
  [13727] = 2,
    ACTIONS(1226), 1,
      sym_snake_name,
    STATE(445), 1,
      sym_callee,
  [13734] = 2,
    ACTIONS(1214), 1,
      sym__snake_kebab_name,
    STATE(589), 1,
      sym_cap_name,
  [13741] = 2,
    ACTIONS(1228), 1,
      sym__implicit_do_raw_text,
    STATE(137), 1,
      sym__implicit_do_text_body_line,
  [13748] = 1,
    ACTIONS(1230), 2,
      sym_arrow,
      sym_colon,
  [13753] = 1,
    ACTIONS(1232), 2,
      sym_newline,
      sym_inline_comment,
  [13758] = 1,
    ACTIONS(1234), 2,
      sym_rparen,
      sym_comma,
  [13763] = 2,
    ACTIONS(1236), 1,
      sym_arrow,
    ACTIONS(1238), 1,
      sym_colon,
  [13770] = 2,
    ACTIONS(1240), 1,
      sym_text_line,
    STATE(478), 1,
      sym_cap_ref,
  [13777] = 2,
    ACTIONS(1242), 1,
      sym_directive_value,
    STATE(474), 1,
      sym_directive_csv,
  [13784] = 1,
    ACTIONS(281), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13789] = 1,
    ACTIONS(1244), 2,
      sym_arrow,
      sym_colon,
  [13794] = 1,
    ACTIONS(1246), 2,
      sym_newline,
      sym_inline_comment,
  [13799] = 2,
    ACTIONS(1248), 1,
      sym_arrow,
    ACTIONS(1250), 1,
      sym_colon,
  [13806] = 1,
    ACTIONS(1252), 2,
      sym_optional_marker,
      sym_colon,
  [13811] = 2,
    ACTIONS(1254), 1,
      sym_optional_marker,
    ACTIONS(1256), 1,
      sym_colon,
  [13818] = 1,
    ACTIONS(1258), 2,
      sym_arrow,
      sym_colon,
  [13823] = 1,
    ACTIONS(1260), 2,
      sym_newline,
      sym_inline_comment,
  [13828] = 2,
    ACTIONS(1262), 1,
      anon_sym_EQ,
    STATE(524), 1,
      sym_assign_operator,
  [13835] = 1,
    ACTIONS(1264), 2,
      sym_rparen,
      sym_comma,
  [13840] = 1,
    ACTIONS(277), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13845] = 2,
    ACTIONS(1266), 1,
      sym__implicit_do_raw_text,
    STATE(73), 1,
      sym__implicit_do_text_body_line,
  [13852] = 1,
    ACTIONS(1268), 2,
      sym_rparen,
      sym_comma,
  [13857] = 2,
    ACTIONS(1216), 1,
      sym_snake_name,
    STATE(457), 1,
      sym_agent,
  [13864] = 2,
    ACTIONS(1214), 1,
      sym__snake_kebab_name,
    STATE(537), 1,
      sym_cap_name,
  [13871] = 2,
    ACTIONS(1214), 1,
      sym__snake_kebab_name,
    STATE(582), 1,
      sym_cap_name,
  [13878] = 1,
    ACTIONS(1270), 2,
      sym_newline,
      sym_inline_comment,
  [13883] = 1,
    ACTIONS(1272), 2,
      sym_flow_par_keyword,
      sym_colon,
  [13888] = 2,
    ACTIONS(1242), 1,
      sym_directive_value,
    STATE(466), 1,
      sym_directive_csv,
  [13895] = 2,
    ACTIONS(1274), 1,
      sym_text_line,
    STATE(436), 1,
      sym_property_value,
  [13902] = 1,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
  [13906] = 1,
    ACTIONS(1278), 1,
      sym_colon,
  [13910] = 1,
    ACTIONS(1280), 1,
      sym_text_line,
  [13914] = 1,
    ACTIONS(1282), 1,
      sym_colon,
  [13918] = 1,
    ACTIONS(1284), 1,
      sym_newline,
  [13922] = 1,
    ACTIONS(1286), 1,
      sym_colon,
  [13926] = 1,
    ACTIONS(1288), 1,
      sym_integer_literal,
  [13930] = 1,
    ACTIONS(1290), 1,
      sym_colon,
  [13934] = 1,
    ACTIONS(1292), 1,
      sym_colon,
  [13938] = 1,
    ACTIONS(1294), 1,
      sym_colon,
  [13942] = 1,
    ACTIONS(1296), 1,
      sym_newline,
  [13946] = 1,
    ACTIONS(1298), 1,
      sym_newline,
  [13950] = 1,
    ACTIONS(1300), 1,
      sym_colon,
  [13954] = 1,
    ACTIONS(1302), 1,
      sym_directive_value,
  [13958] = 1,
    ACTIONS(1304), 1,
      sym_newline,
  [13962] = 1,
    ACTIONS(1306), 1,
      sym_colon,
  [13966] = 1,
    ACTIONS(1308), 1,
      sym_colon,
  [13970] = 1,
    ACTIONS(1310), 1,
      sym_colon,
  [13974] = 1,
    ACTIONS(1312), 1,
      sym_colon,
  [13978] = 1,
    ACTIONS(1314), 1,
      sym_colon,
  [13982] = 1,
    ACTIONS(1316), 1,
      sym_colon,
  [13986] = 1,
    ACTIONS(1318), 1,
      sym_cap_kind,
  [13990] = 1,
    ACTIONS(1320), 1,
      sym_colon,
  [13994] = 1,
    ACTIONS(1322), 1,
      anon_sym_EQ,
  [13998] = 1,
    ACTIONS(1324), 1,
      sym_newline,
  [14002] = 1,
    ACTIONS(1326), 1,
      sym_colon,
  [14006] = 1,
    ACTIONS(1328), 1,
      sym_newline,
  [14010] = 1,
    ACTIONS(1330), 1,
      sym_colon,
  [14014] = 1,
    ACTIONS(1332), 1,
      sym_colon,
  [14018] = 1,
    ACTIONS(1334), 1,
      sym_integer_literal,
  [14022] = 1,
    ACTIONS(1336), 1,
      sym_colon,
  [14026] = 1,
    ACTIONS(1338), 1,
      sym_newline,
  [14030] = 1,
    ACTIONS(1340), 1,
      sym_newline,
  [14034] = 1,
    ACTIONS(1342), 1,
      sym_colon,
  [14038] = 1,
    ACTIONS(1344), 1,
      sym_newline,
  [14042] = 1,
    ACTIONS(1346), 1,
      sym_newline,
  [14046] = 1,
    ACTIONS(1348), 1,
      sym_directive_value,
  [14050] = 1,
    ACTIONS(1350), 1,
      sym_newline,
  [14054] = 1,
    ACTIONS(1352), 1,
      sym_newline,
  [14058] = 1,
    ACTIONS(1354), 1,
      sym_newline,
  [14062] = 1,
    ACTIONS(1356), 1,
      sym_newline,
  [14066] = 1,
    ACTIONS(1358), 1,
      sym_newline,
  [14070] = 1,
    ACTIONS(1360), 1,
      sym_newline,
  [14074] = 1,
    ACTIONS(1362), 1,
      sym_newline,
  [14078] = 1,
    ACTIONS(1364), 1,
      sym_newline,
  [14082] = 1,
    ACTIONS(1366), 1,
      sym_colon,
  [14086] = 1,
    ACTIONS(1368), 1,
      sym_colon,
  [14090] = 1,
    ACTIONS(1370), 1,
      sym_colon,
  [14094] = 1,
    ACTIONS(1178), 1,
      sym_colon,
  [14098] = 1,
    ACTIONS(1372), 1,
      sym_colon,
  [14102] = 1,
    ACTIONS(1374), 1,
      sym_colon,
  [14106] = 1,
    ACTIONS(1376), 1,
      sym_colon,
  [14110] = 1,
    ACTIONS(1378), 1,
      sym_colon,
  [14114] = 1,
    ACTIONS(1380), 1,
      sym_colon,
  [14118] = 1,
    ACTIONS(1382), 1,
      sym_colon,
  [14122] = 1,
    ACTIONS(1384), 1,
      sym_colon,
  [14126] = 1,
    ACTIONS(1208), 1,
      sym_colon,
  [14130] = 1,
    ACTIONS(1386), 1,
      sym_colon,
  [14134] = 1,
    ACTIONS(1388), 1,
      sym_colon,
  [14138] = 1,
    ACTIONS(1390), 1,
      sym_colon,
  [14142] = 1,
    ACTIONS(1392), 1,
      sym_colon,
  [14146] = 1,
    ACTIONS(1394), 1,
      sym_colon,
  [14150] = 1,
    ACTIONS(1396), 1,
      sym_colon,
  [14154] = 1,
    ACTIONS(1398), 1,
      sym_colon,
  [14158] = 1,
    ACTIONS(1400), 1,
      sym_colon,
  [14162] = 1,
    ACTIONS(1402), 1,
      sym_newline,
  [14166] = 1,
    ACTIONS(1404), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 447,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 621,
  [SMALL_STATE(10)] = 708,
  [SMALL_STATE(11)] = 795,
  [SMALL_STATE(12)] = 882,
  [SMALL_STATE(13)] = 969,
  [SMALL_STATE(14)] = 1056,
  [SMALL_STATE(15)] = 1140,
  [SMALL_STATE(16)] = 1214,
  [SMALL_STATE(17)] = 1288,
  [SMALL_STATE(18)] = 1362,
  [SMALL_STATE(19)] = 1446,
  [SMALL_STATE(20)] = 1519,
  [SMALL_STATE(21)] = 1592,
  [SMALL_STATE(22)] = 1665,
  [SMALL_STATE(23)] = 1749,
  [SMALL_STATE(24)] = 1833,
  [SMALL_STATE(25)] = 1917,
  [SMALL_STATE(26)] = 2001,
  [SMALL_STATE(27)] = 2085,
  [SMALL_STATE(28)] = 2169,
  [SMALL_STATE(29)] = 2253,
  [SMALL_STATE(30)] = 2337,
  [SMALL_STATE(31)] = 2418,
  [SMALL_STATE(32)] = 2466,
  [SMALL_STATE(33)] = 2514,
  [SMALL_STATE(34)] = 2562,
  [SMALL_STATE(35)] = 2635,
  [SMALL_STATE(36)] = 2708,
  [SMALL_STATE(37)] = 2775,
  [SMALL_STATE(38)] = 2842,
  [SMALL_STATE(39)] = 2878,
  [SMALL_STATE(40)] = 2938,
  [SMALL_STATE(41)] = 2974,
  [SMALL_STATE(42)] = 3010,
  [SMALL_STATE(43)] = 3054,
  [SMALL_STATE(44)] = 3098,
  [SMALL_STATE(45)] = 3158,
  [SMALL_STATE(46)] = 3218,
  [SMALL_STATE(47)] = 3273,
  [SMALL_STATE(48)] = 3328,
  [SMALL_STATE(49)] = 3367,
  [SMALL_STATE(50)] = 3406,
  [SMALL_STATE(51)] = 3449,
  [SMALL_STATE(52)] = 3488,
  [SMALL_STATE(53)] = 3531,
  [SMALL_STATE(54)] = 3574,
  [SMALL_STATE(55)] = 3613,
  [SMALL_STATE(56)] = 3652,
  [SMALL_STATE(57)] = 3691,
  [SMALL_STATE(58)] = 3746,
  [SMALL_STATE(59)] = 3789,
  [SMALL_STATE(60)] = 3828,
  [SMALL_STATE(61)] = 3871,
  [SMALL_STATE(62)] = 3909,
  [SMALL_STATE(63)] = 3951,
  [SMALL_STATE(64)] = 3989,
  [SMALL_STATE(65)] = 4031,
  [SMALL_STATE(66)] = 4069,
  [SMALL_STATE(67)] = 4103,
  [SMALL_STATE(68)] = 4145,
  [SMALL_STATE(69)] = 4179,
  [SMALL_STATE(70)] = 4217,
  [SMALL_STATE(71)] = 4250,
  [SMALL_STATE(72)] = 4283,
  [SMALL_STATE(73)] = 4320,
  [SMALL_STATE(74)] = 4353,
  [SMALL_STATE(75)] = 4390,
  [SMALL_STATE(76)] = 4423,
  [SMALL_STATE(77)] = 4456,
  [SMALL_STATE(78)] = 4489,
  [SMALL_STATE(79)] = 4522,
  [SMALL_STATE(80)] = 4555,
  [SMALL_STATE(81)] = 4588,
  [SMALL_STATE(82)] = 4621,
  [SMALL_STATE(83)] = 4654,
  [SMALL_STATE(84)] = 4687,
  [SMALL_STATE(85)] = 4720,
  [SMALL_STATE(86)] = 4753,
  [SMALL_STATE(87)] = 4786,
  [SMALL_STATE(88)] = 4819,
  [SMALL_STATE(89)] = 4852,
  [SMALL_STATE(90)] = 4885,
  [SMALL_STATE(91)] = 4918,
  [SMALL_STATE(92)] = 4951,
  [SMALL_STATE(93)] = 4984,
  [SMALL_STATE(94)] = 5017,
  [SMALL_STATE(95)] = 5050,
  [SMALL_STATE(96)] = 5083,
  [SMALL_STATE(97)] = 5116,
  [SMALL_STATE(98)] = 5149,
  [SMALL_STATE(99)] = 5182,
  [SMALL_STATE(100)] = 5215,
  [SMALL_STATE(101)] = 5248,
  [SMALL_STATE(102)] = 5281,
  [SMALL_STATE(103)] = 5314,
  [SMALL_STATE(104)] = 5347,
  [SMALL_STATE(105)] = 5380,
  [SMALL_STATE(106)] = 5413,
  [SMALL_STATE(107)] = 5446,
  [SMALL_STATE(108)] = 5479,
  [SMALL_STATE(109)] = 5512,
  [SMALL_STATE(110)] = 5545,
  [SMALL_STATE(111)] = 5578,
  [SMALL_STATE(112)] = 5611,
  [SMALL_STATE(113)] = 5644,
  [SMALL_STATE(114)] = 5677,
  [SMALL_STATE(115)] = 5710,
  [SMALL_STATE(116)] = 5743,
  [SMALL_STATE(117)] = 5776,
  [SMALL_STATE(118)] = 5809,
  [SMALL_STATE(119)] = 5842,
  [SMALL_STATE(120)] = 5874,
  [SMALL_STATE(121)] = 5906,
  [SMALL_STATE(122)] = 5938,
  [SMALL_STATE(123)] = 5970,
  [SMALL_STATE(124)] = 6002,
  [SMALL_STATE(125)] = 6034,
  [SMALL_STATE(126)] = 6066,
  [SMALL_STATE(127)] = 6098,
  [SMALL_STATE(128)] = 6130,
  [SMALL_STATE(129)] = 6162,
  [SMALL_STATE(130)] = 6194,
  [SMALL_STATE(131)] = 6226,
  [SMALL_STATE(132)] = 6258,
  [SMALL_STATE(133)] = 6290,
  [SMALL_STATE(134)] = 6322,
  [SMALL_STATE(135)] = 6354,
  [SMALL_STATE(136)] = 6386,
  [SMALL_STATE(137)] = 6418,
  [SMALL_STATE(138)] = 6450,
  [SMALL_STATE(139)] = 6482,
  [SMALL_STATE(140)] = 6514,
  [SMALL_STATE(141)] = 6546,
  [SMALL_STATE(142)] = 6578,
  [SMALL_STATE(143)] = 6610,
  [SMALL_STATE(144)] = 6642,
  [SMALL_STATE(145)] = 6674,
  [SMALL_STATE(146)] = 6706,
  [SMALL_STATE(147)] = 6738,
  [SMALL_STATE(148)] = 6770,
  [SMALL_STATE(149)] = 6802,
  [SMALL_STATE(150)] = 6834,
  [SMALL_STATE(151)] = 6866,
  [SMALL_STATE(152)] = 6898,
  [SMALL_STATE(153)] = 6930,
  [SMALL_STATE(154)] = 6962,
  [SMALL_STATE(155)] = 6994,
  [SMALL_STATE(156)] = 7026,
  [SMALL_STATE(157)] = 7058,
  [SMALL_STATE(158)] = 7090,
  [SMALL_STATE(159)] = 7122,
  [SMALL_STATE(160)] = 7154,
  [SMALL_STATE(161)] = 7186,
  [SMALL_STATE(162)] = 7218,
  [SMALL_STATE(163)] = 7250,
  [SMALL_STATE(164)] = 7289,
  [SMALL_STATE(165)] = 7326,
  [SMALL_STATE(166)] = 7363,
  [SMALL_STATE(167)] = 7400,
  [SMALL_STATE(168)] = 7437,
  [SMALL_STATE(169)] = 7474,
  [SMALL_STATE(170)] = 7513,
  [SMALL_STATE(171)] = 7552,
  [SMALL_STATE(172)] = 7591,
  [SMALL_STATE(173)] = 7638,
  [SMALL_STATE(174)] = 7685,
  [SMALL_STATE(175)] = 7732,
  [SMALL_STATE(176)] = 7771,
  [SMALL_STATE(177)] = 7810,
  [SMALL_STATE(178)] = 7857,
  [SMALL_STATE(179)] = 7889,
  [SMALL_STATE(180)] = 7923,
  [SMALL_STATE(181)] = 7957,
  [SMALL_STATE(182)] = 7991,
  [SMALL_STATE(183)] = 8025,
  [SMALL_STATE(184)] = 8059,
  [SMALL_STATE(185)] = 8088,
  [SMALL_STATE(186)] = 8139,
  [SMALL_STATE(187)] = 8190,
  [SMALL_STATE(188)] = 8219,
  [SMALL_STATE(189)] = 8248,
  [SMALL_STATE(190)] = 8299,
  [SMALL_STATE(191)] = 8350,
  [SMALL_STATE(192)] = 8378,
  [SMALL_STATE(193)] = 8406,
  [SMALL_STATE(194)] = 8434,
  [SMALL_STATE(195)] = 8462,
  [SMALL_STATE(196)] = 8490,
  [SMALL_STATE(197)] = 8518,
  [SMALL_STATE(198)] = 8544,
  [SMALL_STATE(199)] = 8572,
  [SMALL_STATE(200)] = 8600,
  [SMALL_STATE(201)] = 8628,
  [SMALL_STATE(202)] = 8664,
  [SMALL_STATE(203)] = 8690,
  [SMALL_STATE(204)] = 8718,
  [SMALL_STATE(205)] = 8746,
  [SMALL_STATE(206)] = 8774,
  [SMALL_STATE(207)] = 8804,
  [SMALL_STATE(208)] = 8829,
  [SMALL_STATE(209)] = 8854,
  [SMALL_STATE(210)] = 8879,
  [SMALL_STATE(211)] = 8903,
  [SMALL_STATE(212)] = 8939,
  [SMALL_STATE(213)] = 8975,
  [SMALL_STATE(214)] = 8999,
  [SMALL_STATE(215)] = 9030,
  [SMALL_STATE(216)] = 9061,
  [SMALL_STATE(217)] = 9085,
  [SMALL_STATE(218)] = 9113,
  [SMALL_STATE(219)] = 9141,
  [SMALL_STATE(220)] = 9169,
  [SMALL_STATE(221)] = 9197,
  [SMALL_STATE(222)] = 9225,
  [SMALL_STATE(223)] = 9253,
  [SMALL_STATE(224)] = 9281,
  [SMALL_STATE(225)] = 9309,
  [SMALL_STATE(226)] = 9337,
  [SMALL_STATE(227)] = 9365,
  [SMALL_STATE(228)] = 9393,
  [SMALL_STATE(229)] = 9421,
  [SMALL_STATE(230)] = 9449,
  [SMALL_STATE(231)] = 9475,
  [SMALL_STATE(232)] = 9503,
  [SMALL_STATE(233)] = 9531,
  [SMALL_STATE(234)] = 9559,
  [SMALL_STATE(235)] = 9583,
  [SMALL_STATE(236)] = 9611,
  [SMALL_STATE(237)] = 9639,
  [SMALL_STATE(238)] = 9667,
  [SMALL_STATE(239)] = 9695,
  [SMALL_STATE(240)] = 9719,
  [SMALL_STATE(241)] = 9747,
  [SMALL_STATE(242)] = 9775,
  [SMALL_STATE(243)] = 9803,
  [SMALL_STATE(244)] = 9826,
  [SMALL_STATE(245)] = 9849,
  [SMALL_STATE(246)] = 9872,
  [SMALL_STATE(247)] = 9895,
  [SMALL_STATE(248)] = 9918,
  [SMALL_STATE(249)] = 9940,
  [SMALL_STATE(250)] = 9962,
  [SMALL_STATE(251)] = 9984,
  [SMALL_STATE(252)] = 10006,
  [SMALL_STATE(253)] = 10028,
  [SMALL_STATE(254)] = 10050,
  [SMALL_STATE(255)] = 10072,
  [SMALL_STATE(256)] = 10094,
  [SMALL_STATE(257)] = 10116,
  [SMALL_STATE(258)] = 10138,
  [SMALL_STATE(259)] = 10160,
  [SMALL_STATE(260)] = 10182,
  [SMALL_STATE(261)] = 10204,
  [SMALL_STATE(262)] = 10226,
  [SMALL_STATE(263)] = 10248,
  [SMALL_STATE(264)] = 10270,
  [SMALL_STATE(265)] = 10292,
  [SMALL_STATE(266)] = 10314,
  [SMALL_STATE(267)] = 10336,
  [SMALL_STATE(268)] = 10358,
  [SMALL_STATE(269)] = 10380,
  [SMALL_STATE(270)] = 10402,
  [SMALL_STATE(271)] = 10424,
  [SMALL_STATE(272)] = 10446,
  [SMALL_STATE(273)] = 10468,
  [SMALL_STATE(274)] = 10490,
  [SMALL_STATE(275)] = 10512,
  [SMALL_STATE(276)] = 10534,
  [SMALL_STATE(277)] = 10556,
  [SMALL_STATE(278)] = 10578,
  [SMALL_STATE(279)] = 10600,
  [SMALL_STATE(280)] = 10622,
  [SMALL_STATE(281)] = 10644,
  [SMALL_STATE(282)] = 10666,
  [SMALL_STATE(283)] = 10688,
  [SMALL_STATE(284)] = 10710,
  [SMALL_STATE(285)] = 10732,
  [SMALL_STATE(286)] = 10757,
  [SMALL_STATE(287)] = 10782,
  [SMALL_STATE(288)] = 10807,
  [SMALL_STATE(289)] = 10832,
  [SMALL_STATE(290)] = 10857,
  [SMALL_STATE(291)] = 10882,
  [SMALL_STATE(292)] = 10907,
  [SMALL_STATE(293)] = 10932,
  [SMALL_STATE(294)] = 10957,
  [SMALL_STATE(295)] = 10982,
  [SMALL_STATE(296)] = 11007,
  [SMALL_STATE(297)] = 11032,
  [SMALL_STATE(298)] = 11057,
  [SMALL_STATE(299)] = 11075,
  [SMALL_STATE(300)] = 11093,
  [SMALL_STATE(301)] = 11111,
  [SMALL_STATE(302)] = 11134,
  [SMALL_STATE(303)] = 11159,
  [SMALL_STATE(304)] = 11184,
  [SMALL_STATE(305)] = 11209,
  [SMALL_STATE(306)] = 11234,
  [SMALL_STATE(307)] = 11257,
  [SMALL_STATE(308)] = 11278,
  [SMALL_STATE(309)] = 11298,
  [SMALL_STATE(310)] = 11320,
  [SMALL_STATE(311)] = 11342,
  [SMALL_STATE(312)] = 11362,
  [SMALL_STATE(313)] = 11372,
  [SMALL_STATE(314)] = 11382,
  [SMALL_STATE(315)] = 11402,
  [SMALL_STATE(316)] = 11412,
  [SMALL_STATE(317)] = 11422,
  [SMALL_STATE(318)] = 11442,
  [SMALL_STATE(319)] = 11464,
  [SMALL_STATE(320)] = 11484,
  [SMALL_STATE(321)] = 11504,
  [SMALL_STATE(322)] = 11524,
  [SMALL_STATE(323)] = 11546,
  [SMALL_STATE(324)] = 11568,
  [SMALL_STATE(325)] = 11578,
  [SMALL_STATE(326)] = 11588,
  [SMALL_STATE(327)] = 11608,
  [SMALL_STATE(328)] = 11628,
  [SMALL_STATE(329)] = 11648,
  [SMALL_STATE(330)] = 11668,
  [SMALL_STATE(331)] = 11688,
  [SMALL_STATE(332)] = 11708,
  [SMALL_STATE(333)] = 11728,
  [SMALL_STATE(334)] = 11748,
  [SMALL_STATE(335)] = 11768,
  [SMALL_STATE(336)] = 11788,
  [SMALL_STATE(337)] = 11808,
  [SMALL_STATE(338)] = 11828,
  [SMALL_STATE(339)] = 11848,
  [SMALL_STATE(340)] = 11868,
  [SMALL_STATE(341)] = 11888,
  [SMALL_STATE(342)] = 11908,
  [SMALL_STATE(343)] = 11928,
  [SMALL_STATE(344)] = 11948,
  [SMALL_STATE(345)] = 11968,
  [SMALL_STATE(346)] = 11988,
  [SMALL_STATE(347)] = 12008,
  [SMALL_STATE(348)] = 12028,
  [SMALL_STATE(349)] = 12048,
  [SMALL_STATE(350)] = 12068,
  [SMALL_STATE(351)] = 12088,
  [SMALL_STATE(352)] = 12110,
  [SMALL_STATE(353)] = 12130,
  [SMALL_STATE(354)] = 12149,
  [SMALL_STATE(355)] = 12168,
  [SMALL_STATE(356)] = 12177,
  [SMALL_STATE(357)] = 12194,
  [SMALL_STATE(358)] = 12211,
  [SMALL_STATE(359)] = 12230,
  [SMALL_STATE(360)] = 12249,
  [SMALL_STATE(361)] = 12265,
  [SMALL_STATE(362)] = 12281,
  [SMALL_STATE(363)] = 12297,
  [SMALL_STATE(364)] = 12313,
  [SMALL_STATE(365)] = 12327,
  [SMALL_STATE(366)] = 12343,
  [SMALL_STATE(367)] = 12359,
  [SMALL_STATE(368)] = 12375,
  [SMALL_STATE(369)] = 12391,
  [SMALL_STATE(370)] = 12401,
  [SMALL_STATE(371)] = 12417,
  [SMALL_STATE(372)] = 12431,
  [SMALL_STATE(373)] = 12447,
  [SMALL_STATE(374)] = 12463,
  [SMALL_STATE(375)] = 12479,
  [SMALL_STATE(376)] = 12495,
  [SMALL_STATE(377)] = 12511,
  [SMALL_STATE(378)] = 12527,
  [SMALL_STATE(379)] = 12543,
  [SMALL_STATE(380)] = 12559,
  [SMALL_STATE(381)] = 12575,
  [SMALL_STATE(382)] = 12591,
  [SMALL_STATE(383)] = 12607,
  [SMALL_STATE(384)] = 12623,
  [SMALL_STATE(385)] = 12632,
  [SMALL_STATE(386)] = 12641,
  [SMALL_STATE(387)] = 12654,
  [SMALL_STATE(388)] = 12665,
  [SMALL_STATE(389)] = 12672,
  [SMALL_STATE(390)] = 12685,
  [SMALL_STATE(391)] = 12698,
  [SMALL_STATE(392)] = 12707,
  [SMALL_STATE(393)] = 12718,
  [SMALL_STATE(394)] = 12731,
  [SMALL_STATE(395)] = 12744,
  [SMALL_STATE(396)] = 12755,
  [SMALL_STATE(397)] = 12768,
  [SMALL_STATE(398)] = 12777,
  [SMALL_STATE(399)] = 12790,
  [SMALL_STATE(400)] = 12797,
  [SMALL_STATE(401)] = 12804,
  [SMALL_STATE(402)] = 12811,
  [SMALL_STATE(403)] = 12824,
  [SMALL_STATE(404)] = 12835,
  [SMALL_STATE(405)] = 12848,
  [SMALL_STATE(406)] = 12859,
  [SMALL_STATE(407)] = 12870,
  [SMALL_STATE(408)] = 12883,
  [SMALL_STATE(409)] = 12896,
  [SMALL_STATE(410)] = 12909,
  [SMALL_STATE(411)] = 12922,
  [SMALL_STATE(412)] = 12935,
  [SMALL_STATE(413)] = 12944,
  [SMALL_STATE(414)] = 12957,
  [SMALL_STATE(415)] = 12968,
  [SMALL_STATE(416)] = 12977,
  [SMALL_STATE(417)] = 12987,
  [SMALL_STATE(418)] = 12997,
  [SMALL_STATE(419)] = 13003,
  [SMALL_STATE(420)] = 13013,
  [SMALL_STATE(421)] = 13023,
  [SMALL_STATE(422)] = 13033,
  [SMALL_STATE(423)] = 13043,
  [SMALL_STATE(424)] = 13053,
  [SMALL_STATE(425)] = 13063,
  [SMALL_STATE(426)] = 13073,
  [SMALL_STATE(427)] = 13083,
  [SMALL_STATE(428)] = 13093,
  [SMALL_STATE(429)] = 13103,
  [SMALL_STATE(430)] = 13113,
  [SMALL_STATE(431)] = 13123,
  [SMALL_STATE(432)] = 13133,
  [SMALL_STATE(433)] = 13143,
  [SMALL_STATE(434)] = 13153,
  [SMALL_STATE(435)] = 13163,
  [SMALL_STATE(436)] = 13173,
  [SMALL_STATE(437)] = 13183,
  [SMALL_STATE(438)] = 13193,
  [SMALL_STATE(439)] = 13201,
  [SMALL_STATE(440)] = 13211,
  [SMALL_STATE(441)] = 13221,
  [SMALL_STATE(442)] = 13231,
  [SMALL_STATE(443)] = 13241,
  [SMALL_STATE(444)] = 13251,
  [SMALL_STATE(445)] = 13261,
  [SMALL_STATE(446)] = 13267,
  [SMALL_STATE(447)] = 13277,
  [SMALL_STATE(448)] = 13287,
  [SMALL_STATE(449)] = 13297,
  [SMALL_STATE(450)] = 13307,
  [SMALL_STATE(451)] = 13317,
  [SMALL_STATE(452)] = 13323,
  [SMALL_STATE(453)] = 13333,
  [SMALL_STATE(454)] = 13343,
  [SMALL_STATE(455)] = 13353,
  [SMALL_STATE(456)] = 13363,
  [SMALL_STATE(457)] = 13373,
  [SMALL_STATE(458)] = 13383,
  [SMALL_STATE(459)] = 13393,
  [SMALL_STATE(460)] = 13403,
  [SMALL_STATE(461)] = 13413,
  [SMALL_STATE(462)] = 13423,
  [SMALL_STATE(463)] = 13433,
  [SMALL_STATE(464)] = 13439,
  [SMALL_STATE(465)] = 13449,
  [SMALL_STATE(466)] = 13459,
  [SMALL_STATE(467)] = 13469,
  [SMALL_STATE(468)] = 13479,
  [SMALL_STATE(469)] = 13485,
  [SMALL_STATE(470)] = 13495,
  [SMALL_STATE(471)] = 13505,
  [SMALL_STATE(472)] = 13515,
  [SMALL_STATE(473)] = 13525,
  [SMALL_STATE(474)] = 13535,
  [SMALL_STATE(475)] = 13545,
  [SMALL_STATE(476)] = 13555,
  [SMALL_STATE(477)] = 13565,
  [SMALL_STATE(478)] = 13575,
  [SMALL_STATE(479)] = 13585,
  [SMALL_STATE(480)] = 13595,
  [SMALL_STATE(481)] = 13605,
  [SMALL_STATE(482)] = 13615,
  [SMALL_STATE(483)] = 13625,
  [SMALL_STATE(484)] = 13635,
  [SMALL_STATE(485)] = 13645,
  [SMALL_STATE(486)] = 13655,
  [SMALL_STATE(487)] = 13665,
  [SMALL_STATE(488)] = 13671,
  [SMALL_STATE(489)] = 13678,
  [SMALL_STATE(490)] = 13685,
  [SMALL_STATE(491)] = 13692,
  [SMALL_STATE(492)] = 13699,
  [SMALL_STATE(493)] = 13706,
  [SMALL_STATE(494)] = 13713,
  [SMALL_STATE(495)] = 13720,
  [SMALL_STATE(496)] = 13727,
  [SMALL_STATE(497)] = 13734,
  [SMALL_STATE(498)] = 13741,
  [SMALL_STATE(499)] = 13748,
  [SMALL_STATE(500)] = 13753,
  [SMALL_STATE(501)] = 13758,
  [SMALL_STATE(502)] = 13763,
  [SMALL_STATE(503)] = 13770,
  [SMALL_STATE(504)] = 13777,
  [SMALL_STATE(505)] = 13784,
  [SMALL_STATE(506)] = 13789,
  [SMALL_STATE(507)] = 13794,
  [SMALL_STATE(508)] = 13799,
  [SMALL_STATE(509)] = 13806,
  [SMALL_STATE(510)] = 13811,
  [SMALL_STATE(511)] = 13818,
  [SMALL_STATE(512)] = 13823,
  [SMALL_STATE(513)] = 13828,
  [SMALL_STATE(514)] = 13835,
  [SMALL_STATE(515)] = 13840,
  [SMALL_STATE(516)] = 13845,
  [SMALL_STATE(517)] = 13852,
  [SMALL_STATE(518)] = 13857,
  [SMALL_STATE(519)] = 13864,
  [SMALL_STATE(520)] = 13871,
  [SMALL_STATE(521)] = 13878,
  [SMALL_STATE(522)] = 13883,
  [SMALL_STATE(523)] = 13888,
  [SMALL_STATE(524)] = 13895,
  [SMALL_STATE(525)] = 13902,
  [SMALL_STATE(526)] = 13906,
  [SMALL_STATE(527)] = 13910,
  [SMALL_STATE(528)] = 13914,
  [SMALL_STATE(529)] = 13918,
  [SMALL_STATE(530)] = 13922,
  [SMALL_STATE(531)] = 13926,
  [SMALL_STATE(532)] = 13930,
  [SMALL_STATE(533)] = 13934,
  [SMALL_STATE(534)] = 13938,
  [SMALL_STATE(535)] = 13942,
  [SMALL_STATE(536)] = 13946,
  [SMALL_STATE(537)] = 13950,
  [SMALL_STATE(538)] = 13954,
  [SMALL_STATE(539)] = 13958,
  [SMALL_STATE(540)] = 13962,
  [SMALL_STATE(541)] = 13966,
  [SMALL_STATE(542)] = 13970,
  [SMALL_STATE(543)] = 13974,
  [SMALL_STATE(544)] = 13978,
  [SMALL_STATE(545)] = 13982,
  [SMALL_STATE(546)] = 13986,
  [SMALL_STATE(547)] = 13990,
  [SMALL_STATE(548)] = 13994,
  [SMALL_STATE(549)] = 13998,
  [SMALL_STATE(550)] = 14002,
  [SMALL_STATE(551)] = 14006,
  [SMALL_STATE(552)] = 14010,
  [SMALL_STATE(553)] = 14014,
  [SMALL_STATE(554)] = 14018,
  [SMALL_STATE(555)] = 14022,
  [SMALL_STATE(556)] = 14026,
  [SMALL_STATE(557)] = 14030,
  [SMALL_STATE(558)] = 14034,
  [SMALL_STATE(559)] = 14038,
  [SMALL_STATE(560)] = 14042,
  [SMALL_STATE(561)] = 14046,
  [SMALL_STATE(562)] = 14050,
  [SMALL_STATE(563)] = 14054,
  [SMALL_STATE(564)] = 14058,
  [SMALL_STATE(565)] = 14062,
  [SMALL_STATE(566)] = 14066,
  [SMALL_STATE(567)] = 14070,
  [SMALL_STATE(568)] = 14074,
  [SMALL_STATE(569)] = 14078,
  [SMALL_STATE(570)] = 14082,
  [SMALL_STATE(571)] = 14086,
  [SMALL_STATE(572)] = 14090,
  [SMALL_STATE(573)] = 14094,
  [SMALL_STATE(574)] = 14098,
  [SMALL_STATE(575)] = 14102,
  [SMALL_STATE(576)] = 14106,
  [SMALL_STATE(577)] = 14110,
  [SMALL_STATE(578)] = 14114,
  [SMALL_STATE(579)] = 14118,
  [SMALL_STATE(580)] = 14122,
  [SMALL_STATE(581)] = 14126,
  [SMALL_STATE(582)] = 14130,
  [SMALL_STATE(583)] = 14134,
  [SMALL_STATE(584)] = 14138,
  [SMALL_STATE(585)] = 14142,
  [SMALL_STATE(586)] = 14146,
  [SMALL_STATE(587)] = 14150,
  [SMALL_STATE(588)] = 14154,
  [SMALL_STATE(589)] = 14158,
  [SMALL_STATE(590)] = 14162,
  [SMALL_STATE(591)] = 14166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 12),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 12),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 12),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 12),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 12),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 12),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 12),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 23),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 23),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 1, 0, 12),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 1, 0, 12),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(206),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(236),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(236),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 27),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 27),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 21),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 21),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 20),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 20),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 26),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 20),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 20),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 26),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 26),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 22),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 22),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 28),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 28),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 22),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 22),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 13),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 13),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 28),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 28),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(315),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(432),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 11),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 10),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 10),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 21),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
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
