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
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  sym_newline = 1,
  sym_blank_line = 2,
  sym_parent_doc_comment = 3,
  sym_doc_comment = 4,
  sym_line_comment = 5,
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
  sym__nested_indented_raw_text = 71,
  sym_source_file = 72,
  sym_item = 73,
  sym_line_end = 74,
  sym__trivia = 75,
  sym_use = 76,
  sym_type = 77,
  sym_base_type = 78,
  sym_builtin_type = 79,
  sym_user_type = 80,
  sym_type_suffix = 81,
  sym_struct = 82,
  sym_struct_name = 83,
  sym_struct_body = 84,
  sym_field = 85,
  sym_field_name = 86,
  sym_psyche = 87,
  sym_skill = 88,
  sym_service = 89,
  sym_prompt = 90,
  sym_task = 91,
  sym_chore = 92,
  sym_cap_name = 93,
  sym_cap_ref = 94,
  sym_job_name = 95,
  sym_cap_body = 96,
  sym_job_body = 97,
  sym_property = 98,
  sym_property_key = 99,
  sym_property_value = 100,
  sym_instruct = 101,
  sym_instruct_name = 102,
  sym_instruct_body = 103,
  sym_context = 104,
  sym_context_name = 105,
  sym_context_body = 106,
  sym_text_inline = 107,
  sym_text_block = 108,
  sym_text_body = 109,
  sym_text_body_line = 110,
  sym__nested_text_inline_alias = 111,
  sym__nested_text_inline = 112,
  sym__nested_text_block = 113,
  sym__nested_text_body = 114,
  sym__nested_text_body_line = 115,
  sym_thunk = 116,
  sym_thunk_name = 117,
  sym_thunk_body = 118,
  sym_params = 119,
  sym_param = 120,
  sym_param_name = 121,
  sym_flow = 122,
  sym_flow_name = 123,
  sym_flow_body = 124,
  sym_statements = 125,
  sym__flow_statement = 126,
  sym_do_statement = 127,
  sym_implicit_do_statement = 128,
  sym__implicit_do_body = 129,
  sym_ask_statement = 130,
  sym_unfold_statement = 131,
  sym_keep_statement = 132,
  sym_drop_statement = 133,
  sym_rank_statement = 134,
  sym_each_statement = 135,
  sym_fold_statement = 136,
  sym_repeat_above_statement = 137,
  sym_repeat_block_statement = 138,
  sym_repeat_body = 139,
  sym_until_clause = 140,
  sym_condition = 141,
  sym_to_clause = 142,
  sym_par_clause = 143,
  sym_limit_clause = 144,
  sym_times_clause = 145,
  sym_callees = 146,
  sym_callee = 147,
  sym_agent = 148,
  sym_directive = 149,
  sym_directive_key = 150,
  sym_directive_op = 151,
  sym_directive_csv = 152,
  sym__directives = 153,
  sym_settings = 154,
  sym_context_setting = 155,
  sym_instruct_setting = 156,
  sym_text_ref = 157,
  sym_messages = 158,
  sym_message = 159,
  sym_role = 160,
  sym__pass_statement = 161,
  sym_assign_operator = 162,
  sym_type_name = 163,
  aux_sym_source_file_repeat1 = 164,
  aux_sym_type_repeat1 = 165,
  aux_sym_struct_body_repeat1 = 166,
  aux_sym_cap_body_repeat1 = 167,
  aux_sym_cap_body_repeat2 = 168,
  aux_sym_text_body_repeat1 = 169,
  aux_sym__nested_text_body_repeat1 = 170,
  aux_sym_params_repeat1 = 171,
  aux_sym_statements_repeat1 = 172,
  aux_sym__implicit_do_body_repeat1 = 173,
  aux_sym_callees_repeat1 = 174,
  aux_sym_directive_csv_repeat1 = 175,
  aux_sym__directives_repeat1 = 176,
  aux_sym_messages_repeat1 = 177,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_parent_doc_comment] = "parent_doc_comment",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
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
  [sym__implicit_do_body] = "text_inline",
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
  [aux_sym__implicit_do_body_repeat1] = "_implicit_do_body_repeat1",
  [aux_sym_callees_repeat1] = "callees_repeat1",
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
  [aux_sym__directives_repeat1] = "_directives_repeat1",
  [aux_sym_messages_repeat1] = "messages_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_parent_doc_comment] = sym_parent_doc_comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_line_comment] = sym_line_comment,
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
  [sym__implicit_do_body] = sym_text_inline,
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
  [aux_sym__implicit_do_body_repeat1] = aux_sym__implicit_do_body_repeat1,
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
  [sym_parent_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
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
  [sym__implicit_do_body] = {
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
  [aux_sym__implicit_do_body_repeat1] = {
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
  [12] = {.index = 25, .length = 4},
  [13] = {.index = 29, .length = 1},
  [14] = {.index = 30, .length = 2},
  [15] = {.index = 32, .length = 2},
  [16] = {.index = 34, .length = 2},
  [17] = {.index = 36, .length = 3},
  [18] = {.index = 39, .length = 4},
  [19] = {.index = 43, .length = 5},
  [20] = {.index = 48, .length = 4},
  [21] = {.index = 52, .length = 5},
  [22] = {.index = 57, .length = 3},
  [23] = {.index = 60, .length = 1},
  [24] = {.index = 61, .length = 6},
  [25] = {.index = 67, .length = 6},
  [26] = {.index = 73, .length = 3},
  [27] = {.index = 76, .length = 7},
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
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [29] =
    {field_content, 0},
  [30] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [32] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [34] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [36] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [39] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [43] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [48] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [52] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [57] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [60] =
    {field_content, 0, .inherited = true},
  [61] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [67] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [73] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [76] =
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
  [4] = 3,
  [5] = 2,
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
  [19] = 16,
  [20] = 15,
  [21] = 17,
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
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 67,
  [68] = 51,
  [69] = 62,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 64,
  [74] = 61,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 67,
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
  [112] = 112,
  [113] = 42,
  [114] = 40,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 81,
  [120] = 79,
  [121] = 118,
  [122] = 96,
  [123] = 101,
  [124] = 105,
  [125] = 106,
  [126] = 107,
  [127] = 108,
  [128] = 110,
  [129] = 111,
  [130] = 112,
  [131] = 115,
  [132] = 116,
  [133] = 117,
  [134] = 94,
  [135] = 71,
  [136] = 72,
  [137] = 80,
  [138] = 82,
  [139] = 83,
  [140] = 84,
  [141] = 85,
  [142] = 86,
  [143] = 87,
  [144] = 88,
  [145] = 77,
  [146] = 90,
  [147] = 91,
  [148] = 92,
  [149] = 93,
  [150] = 97,
  [151] = 98,
  [152] = 99,
  [153] = 100,
  [154] = 70,
  [155] = 109,
  [156] = 102,
  [157] = 103,
  [158] = 104,
  [159] = 75,
  [160] = 42,
  [161] = 40,
  [162] = 89,
  [163] = 32,
  [164] = 31,
  [165] = 43,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 33,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 41,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 59,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 59,
  [186] = 184,
  [187] = 183,
  [188] = 66,
  [189] = 67,
  [190] = 109,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 102,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 42,
  [199] = 199,
  [200] = 103,
  [201] = 201,
  [202] = 42,
  [203] = 40,
  [204] = 104,
  [205] = 40,
  [206] = 59,
  [207] = 38,
  [208] = 42,
  [209] = 40,
  [210] = 42,
  [211] = 40,
  [212] = 212,
  [213] = 213,
  [214] = 177,
  [215] = 170,
  [216] = 216,
  [217] = 56,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 52,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 53,
  [226] = 226,
  [227] = 227,
  [228] = 50,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 59,
  [234] = 234,
  [235] = 42,
  [236] = 236,
  [237] = 237,
  [238] = 40,
  [239] = 58,
  [240] = 240,
  [241] = 57,
  [242] = 242,
  [243] = 243,
  [244] = 109,
  [245] = 245,
  [246] = 42,
  [247] = 40,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 201,
  [255] = 255,
  [256] = 199,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 76,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 42,
  [270] = 40,
  [271] = 197,
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
  [304] = 302,
  [305] = 303,
  [306] = 306,
  [307] = 306,
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
  [328] = 311,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 320,
  [335] = 312,
  [336] = 313,
  [337] = 314,
  [338] = 318,
  [339] = 308,
  [340] = 332,
  [341] = 341,
  [342] = 315,
  [343] = 317,
  [344] = 319,
  [345] = 321,
  [346] = 322,
  [347] = 329,
  [348] = 333,
  [349] = 326,
  [350] = 350,
  [351] = 351,
  [352] = 350,
  [353] = 353,
  [354] = 353,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 356,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 361,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 366,
  [369] = 369,
  [370] = 362,
  [371] = 367,
  [372] = 369,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 375,
  [377] = 373,
  [378] = 374,
  [379] = 379,
  [380] = 374,
  [381] = 360,
  [382] = 363,
  [383] = 379,
  [384] = 384,
  [385] = 385,
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
  [396] = 387,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 384,
  [402] = 402,
  [403] = 40,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 393,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 42,
  [415] = 398,
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
  [453] = 453,
  [454] = 452,
  [455] = 455,
  [456] = 419,
  [457] = 457,
  [458] = 430,
  [459] = 432,
  [460] = 460,
  [461] = 435,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 448,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 467,
  [471] = 420,
  [472] = 472,
  [473] = 421,
  [474] = 423,
  [475] = 468,
  [476] = 425,
  [477] = 451,
  [478] = 478,
  [479] = 468,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 442,
  [484] = 445,
  [485] = 449,
  [486] = 428,
  [487] = 487,
  [488] = 488,
  [489] = 42,
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
  [505] = 505,
  [506] = 506,
  [507] = 40,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 496,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 42,
  [518] = 518,
  [519] = 519,
  [520] = 515,
  [521] = 521,
  [522] = 522,
  [523] = 519,
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
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 529,
  [545] = 545,
  [546] = 546,
  [547] = 536,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 529,
  [556] = 556,
  [557] = 557,
  [558] = 536,
  [559] = 554,
  [560] = 529,
  [561] = 561,
  [562] = 554,
  [563] = 554,
  [564] = 554,
  [565] = 554,
  [566] = 554,
  [567] = 554,
  [568] = 554,
  [569] = 554,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 554,
  [577] = 577,
  [578] = 578,
  [579] = 571,
  [580] = 534,
  [581] = 542,
  [582] = 554,
  [583] = 583,
  [584] = 583,
  [585] = 540,
  [586] = 586,
  [587] = 530,
  [588] = 531,
  [589] = 589,
  [590] = 590,
  [591] = 554,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        '(', 311,
        ')', 312,
        '+', 29,
        ',', 313,
        '-', 30,
        ':', 310,
        '=', 250,
        '?', 308,
        'B', 329,
        'J', 331,
        'N', 334,
        'P', 315,
        'T', 319,
        '[', 32,
        'a', 166,
        'c', 86,
        'd', 61,
        'e', 33,
        'f', 114,
        'h', 37,
        'i', 131,
        'k', 71,
        'l', 90,
        'm', 141,
        'n', 147,
        'p', 34,
        'r', 40,
        's', 62,
        't', 36,
        'u', 127,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(336);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(593);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(597);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(598);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(741);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 543,
        'h', 474,
        'i', 537,
        'm', 539,
        'p', 478,
        'r', 495,
        's', 496,
        't', 545,
        'u', 565,
        '\t', 410,
        '\f', 410,
        ' ', 410,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(226);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 223,
        '\r', 20,
        '#', 233,
        ')', 312,
        ',', 313,
        ':', 310,
        '[', 32,
        'l', 90,
        'p', 39,
        's', 79,
        't', 92,
        'u', 138,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 23:
      if (lookahead == '\f') SKIP(23);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(613);
      END_STATE();
    case 24:
      if (lookahead == '\f') SKIP(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(614);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(240);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'k') ADVANCE(91);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(292);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(288);
      END_STATE();
    case 203:
      if (lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(209);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 210:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(210);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      END_STATE();
    case 211:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 407,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 406,
        ' ', 406,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 212:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(595);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 213:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(596);
      END_STATE();
    case 214:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(214);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(599);
      END_STATE();
    case 215:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 409,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 408,
        ' ', 408,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 216:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(216);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(602);
      END_STATE();
    case 217:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(217);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(606);
      END_STATE();
    case 218:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'h', 474,
        'i', 537,
        'm', 539,
        'p', 552,
        'r', 495,
        's', 504,
        't', 476,
        'u', 571,
        '\t', 411,
        '\f', 411,
        ' ', 411,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 219:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 412,
        '\f', 412,
        ' ', 412,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 220:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 12,
        'c', 86,
        'f', 113,
        'i', 131,
        'p', 161,
        's', 62,
        't', 35,
        'u', 180,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(336);
      END_STATE();
    case 221:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 12,
        'c', 353,
        'f', 362,
        'i', 368,
        'p', 381,
        's', 344,
        't', 337,
        'u', 383,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_parent_doc_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_directive_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'h') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'k') ADVANCE(355);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 's') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'v') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'w') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'x') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead == 'y') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 407,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 740,
        ' ', 740,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 407,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 404,
        ' ', 404,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 407,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 405,
        ' ', 405,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 407,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 406,
        ' ', 406,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 408,
        '\r', 1,
        '#', 228,
        'a', 456,
        'c', 426,
        'f', 435,
        'i', 440,
        'p', 450,
        's', 424,
        't', 415,
        'u', 452,
        '\t', 408,
        ' ', 408,
      );
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 409,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 408,
        ' ', 408,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 543,
        'h', 474,
        'i', 537,
        'm', 539,
        'p', 478,
        'r', 495,
        's', 496,
        't', 545,
        'u', 565,
        '\t', 410,
        '\f', 410,
        ' ', 410,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'h', 474,
        'i', 537,
        'm', 539,
        'p', 552,
        'r', 495,
        's', 504,
        't', 476,
        'u', 571,
        '\t', 411,
        '\f', 411,
        ' ', 411,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\r', 1,
        '#', 228,
        'a', 568,
        'c', 508,
        'f', 527,
        'i', 537,
        'p', 553,
        's', 505,
        't', 477,
        'u', 571,
        '\t', 412,
        '\f', 412,
        ' ', 412,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'c') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(428);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'w') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'x') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'k') ADVANCE(516);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'k') ADVANCE(518);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'm') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'x') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'y') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 593,
        '\r', 1,
        '#', 608,
        'a', 712,
        'd', 687,
        'e', 615,
        'f', 688,
        'h', 618,
        'k', 641,
        'm', 689,
        'p', 617,
        'r', 619,
        's', 639,
        't', 696,
        'u', 680,
        '\t', 593,
        ' ', 593,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 594,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 681,
        '\t', 594,
        ' ', 594,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 595,
        '\r', 1,
        '#', 608,
        'c', 353,
        'f', 362,
        'i', 368,
        'p', 381,
        's', 344,
        't', 337,
        'u', 383,
        '\t', 595,
        ' ', 595,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 596,
        '\r', 1,
        '#', 608,
        'c', 653,
        'f', 676,
        'i', 686,
        'p', 704,
        's', 647,
        't', 621,
        'u', 720,
        '\t', 596,
        ' ', 596,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') ADVANCE(597);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(597);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 598,
        '\r', 1,
        '#', 608,
        'a', 712,
        'd', 687,
        'e', 615,
        'f', 688,
        'h', 618,
        'k', 641,
        'm', 689,
        'p', 713,
        'r', 619,
        's', 639,
        't', 696,
        'u', 680,
        '\t', 598,
        ' ', 598,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 599,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 679,
        '\t', 599,
        ' ', 599,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 603,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 681,
        '\t', 739,
        ' ', 739,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 603,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 681,
        '\t', 600,
        ' ', 600,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 603,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 681,
        '\t', 601,
        ' ', 601,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 603,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 681,
        '\t', 602,
        ' ', 602,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 607,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 679,
        '\t', 605,
        ' ', 605,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 607,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 679,
        '\t', 742,
        ' ', 742,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 607,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 679,
        '\t', 604,
        ' ', 604,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 607,
        '\r', 1,
        '#', 608,
        'a', 712,
        'c', 653,
        'd', 687,
        'e', 615,
        'f', 675,
        'i', 686,
        'k', 641,
        'p', 704,
        'r', 620,
        's', 647,
        't', 621,
        'u', 679,
        '\t', 606,
        ' ', 606,
      );
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '!') ADVANCE(612);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\f', 613,
        'a', 712,
        'd', 687,
        'e', 615,
        'f', 688,
        'k', 641,
        'r', 620,
        'u', 680,
        '\t', 613,
        ' ', 613,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'h') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'k') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead == 'k') ADVANCE(660);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(697);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(692);
      if (lookahead == 's') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(738);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 739,
        '#', 794,
        'a', 842,
        'c', 813,
        'd', 829,
        'e', 796,
        'f', 821,
        'i', 828,
        'k', 808,
        'p', 841,
        'r', 797,
        's', 805,
        't', 795,
        'u', 825,
        '\t', 739,
        ' ', 739,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 740,
        '#', 794,
        'a', 781,
        'c', 753,
        'f', 760,
        'i', 765,
        'p', 776,
        's', 749,
        't', 745,
        'u', 777,
        '\t', 740,
        ' ', 740,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 742,
        '#', 794,
        'a', 842,
        'c', 813,
        'd', 829,
        'e', 796,
        'f', 821,
        'i', 828,
        'k', 808,
        'p', 841,
        'r', 797,
        's', 805,
        't', 795,
        'u', 827,
        '\t', 742,
        ' ', 742,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == 'h') ADVANCE(788);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(772);
      if (lookahead == 'k') ADVANCE(755);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'h') ADVANCE(770);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'h') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'k') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'm') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'p') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(768);
      if (lookahead == 's') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 's') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 't') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 't') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'u') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'v') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'w') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'x') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == 'h') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'k') ADVANCE(815);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(830);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(834);
      if (lookahead == 'o') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(831);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead == 's') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(811);
      if (lookahead == 's') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(853);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 220},
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
  [15] = {.lex_state = 210},
  [16] = {.lex_state = 210},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 214},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 214},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 218},
  [32] = {.lex_state = 218},
  [33] = {.lex_state = 218},
  [34] = {.lex_state = 219},
  [35] = {.lex_state = 219},
  [36] = {.lex_state = 220},
  [37] = {.lex_state = 220},
  [38] = {.lex_state = 218},
  [39] = {.lex_state = 219},
  [40] = {.lex_state = 218},
  [41] = {.lex_state = 216},
  [42] = {.lex_state = 218},
  [43] = {.lex_state = 216},
  [44] = {.lex_state = 219},
  [45] = {.lex_state = 219},
  [46] = {.lex_state = 219},
  [47] = {.lex_state = 219},
  [48] = {.lex_state = 219},
  [49] = {.lex_state = 210},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 210},
  [54] = {.lex_state = 210},
  [55] = {.lex_state = 217},
  [56] = {.lex_state = 210},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 210},
  [59] = {.lex_state = 210},
  [60] = {.lex_state = 217},
  [61] = {.lex_state = 210},
  [62] = {.lex_state = 210},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 210},
  [65] = {.lex_state = 214},
  [66] = {.lex_state = 216},
  [67] = {.lex_state = 216},
  [68] = {.lex_state = 214},
  [69] = {.lex_state = 210},
  [70] = {.lex_state = 210},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 210},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 214},
  [75] = {.lex_state = 210},
  [76] = {.lex_state = 210},
  [77] = {.lex_state = 210},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 210},
  [80] = {.lex_state = 210},
  [81] = {.lex_state = 210},
  [82] = {.lex_state = 210},
  [83] = {.lex_state = 210},
  [84] = {.lex_state = 210},
  [85] = {.lex_state = 210},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 210},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 210},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 210},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 217},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 210},
  [99] = {.lex_state = 210},
  [100] = {.lex_state = 210},
  [101] = {.lex_state = 210},
  [102] = {.lex_state = 210},
  [103] = {.lex_state = 210},
  [104] = {.lex_state = 210},
  [105] = {.lex_state = 210},
  [106] = {.lex_state = 210},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 210},
  [109] = {.lex_state = 210},
  [110] = {.lex_state = 210},
  [111] = {.lex_state = 210},
  [112] = {.lex_state = 210},
  [113] = {.lex_state = 210},
  [114] = {.lex_state = 210},
  [115] = {.lex_state = 210},
  [116] = {.lex_state = 210},
  [117] = {.lex_state = 210},
  [118] = {.lex_state = 210},
  [119] = {.lex_state = 214},
  [120] = {.lex_state = 214},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 214},
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 214},
  [125] = {.lex_state = 214},
  [126] = {.lex_state = 214},
  [127] = {.lex_state = 214},
  [128] = {.lex_state = 214},
  [129] = {.lex_state = 214},
  [130] = {.lex_state = 214},
  [131] = {.lex_state = 214},
  [132] = {.lex_state = 214},
  [133] = {.lex_state = 214},
  [134] = {.lex_state = 214},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 214},
  [137] = {.lex_state = 214},
  [138] = {.lex_state = 214},
  [139] = {.lex_state = 214},
  [140] = {.lex_state = 214},
  [141] = {.lex_state = 214},
  [142] = {.lex_state = 214},
  [143] = {.lex_state = 214},
  [144] = {.lex_state = 214},
  [145] = {.lex_state = 214},
  [146] = {.lex_state = 214},
  [147] = {.lex_state = 214},
  [148] = {.lex_state = 214},
  [149] = {.lex_state = 214},
  [150] = {.lex_state = 214},
  [151] = {.lex_state = 214},
  [152] = {.lex_state = 214},
  [153] = {.lex_state = 214},
  [154] = {.lex_state = 214},
  [155] = {.lex_state = 214},
  [156] = {.lex_state = 214},
  [157] = {.lex_state = 214},
  [158] = {.lex_state = 214},
  [159] = {.lex_state = 214},
  [160] = {.lex_state = 214},
  [161] = {.lex_state = 214},
  [162] = {.lex_state = 214},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 211},
  [166] = {.lex_state = 219},
  [167] = {.lex_state = 219},
  [168] = {.lex_state = 212},
  [169] = {.lex_state = 212},
  [170] = {.lex_state = 215},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 212},
  [173] = {.lex_state = 212},
  [174] = {.lex_state = 219},
  [175] = {.lex_state = 219},
  [176] = {.lex_state = 211},
  [177] = {.lex_state = 215},
  [178] = {.lex_state = 219},
  [179] = {.lex_state = 219},
  [180] = {.lex_state = 219},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 219},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 219},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 211},
  [189] = {.lex_state = 211},
  [190] = {.lex_state = 215},
  [191] = {.lex_state = 219},
  [192] = {.lex_state = 219},
  [193] = {.lex_state = 219},
  [194] = {.lex_state = 219},
  [195] = {.lex_state = 212},
  [196] = {.lex_state = 219},
  [197] = {.lex_state = 219},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 219},
  [200] = {.lex_state = 219},
  [201] = {.lex_state = 219},
  [202] = {.lex_state = 219},
  [203] = {.lex_state = 219},
  [204] = {.lex_state = 219},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 221},
  [213] = {.lex_state = 221},
  [214] = {.lex_state = 213},
  [215] = {.lex_state = 213},
  [216] = {.lex_state = 220},
  [217] = {.lex_state = 220},
  [218] = {.lex_state = 220},
  [219] = {.lex_state = 220},
  [220] = {.lex_state = 220},
  [221] = {.lex_state = 220},
  [222] = {.lex_state = 220},
  [223] = {.lex_state = 220},
  [224] = {.lex_state = 220},
  [225] = {.lex_state = 220},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 220},
  [228] = {.lex_state = 220},
  [229] = {.lex_state = 212},
  [230] = {.lex_state = 220},
  [231] = {.lex_state = 220},
  [232] = {.lex_state = 220},
  [233] = {.lex_state = 220},
  [234] = {.lex_state = 220},
  [235] = {.lex_state = 212},
  [236] = {.lex_state = 220},
  [237] = {.lex_state = 212},
  [238] = {.lex_state = 212},
  [239] = {.lex_state = 220},
  [240] = {.lex_state = 220},
  [241] = {.lex_state = 220},
  [242] = {.lex_state = 220},
  [243] = {.lex_state = 221},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 221},
  [246] = {.lex_state = 221},
  [247] = {.lex_state = 221},
  [248] = {.lex_state = 220},
  [249] = {.lex_state = 220},
  [250] = {.lex_state = 220},
  [251] = {.lex_state = 220},
  [252] = {.lex_state = 220},
  [253] = {.lex_state = 220},
  [254] = {.lex_state = 220},
  [255] = {.lex_state = 220},
  [256] = {.lex_state = 220},
  [257] = {.lex_state = 220},
  [258] = {.lex_state = 220},
  [259] = {.lex_state = 220},
  [260] = {.lex_state = 220},
  [261] = {.lex_state = 220},
  [262] = {.lex_state = 220},
  [263] = {.lex_state = 220},
  [264] = {.lex_state = 220},
  [265] = {.lex_state = 220},
  [266] = {.lex_state = 220},
  [267] = {.lex_state = 220},
  [268] = {.lex_state = 220},
  [269] = {.lex_state = 220},
  [270] = {.lex_state = 220},
  [271] = {.lex_state = 220},
  [272] = {.lex_state = 220},
  [273] = {.lex_state = 220},
  [274] = {.lex_state = 220},
  [275] = {.lex_state = 220},
  [276] = {.lex_state = 220},
  [277] = {.lex_state = 220},
  [278] = {.lex_state = 220},
  [279] = {.lex_state = 220},
  [280] = {.lex_state = 220},
  [281] = {.lex_state = 220},
  [282] = {.lex_state = 220},
  [283] = {.lex_state = 220},
  [284] = {.lex_state = 220},
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
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 21},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 21},
  [303] = {.lex_state = 22},
  [304] = {.lex_state = 21},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 25},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 26},
  [312] = {.lex_state = 22},
  [313] = {.lex_state = 22},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 22},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 22},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 26},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 22},
  [332] = {.lex_state = 22},
  [333] = {.lex_state = 22},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 22},
  [337] = {.lex_state = 22},
  [338] = {.lex_state = 22},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 22},
  [341] = {.lex_state = 21},
  [342] = {.lex_state = 22},
  [343] = {.lex_state = 22},
  [344] = {.lex_state = 22},
  [345] = {.lex_state = 22},
  [346] = {.lex_state = 22},
  [347] = {.lex_state = 22},
  [348] = {.lex_state = 22},
  [349] = {.lex_state = 22},
  [350] = {.lex_state = 22},
  [351] = {.lex_state = 22},
  [352] = {.lex_state = 22},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 28},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 21},
  [357] = {.lex_state = 10},
  [358] = {.lex_state = 21},
  [359] = {.lex_state = 10},
  [360] = {.lex_state = 28},
  [361] = {.lex_state = 28},
  [362] = {.lex_state = 21},
  [363] = {.lex_state = 27},
  [364] = {.lex_state = 28},
  [365] = {.lex_state = 21},
  [366] = {.lex_state = 3},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 3},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 21},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 27},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 28},
  [382] = {.lex_state = 27},
  [383] = {.lex_state = 27},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 21},
  [386] = {.lex_state = 60},
  [387] = {.lex_state = 21},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 60},
  [391] = {.lex_state = 21},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 21},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 21},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 21},
  [400] = {.lex_state = 21},
  [401] = {.lex_state = 21},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 21},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 21},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 10},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 21},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 10},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 21},
  [419] = {.lex_state = 21},
  [420] = {.lex_state = 21},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 21},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 21},
  [436] = {.lex_state = 21},
  [437] = {.lex_state = 21},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 21},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 21},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 21},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 21},
  [457] = {.lex_state = 21},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 21},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 21},
  [463] = {.lex_state = 220},
  [464] = {.lex_state = 21},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 21},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 21},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 21},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 21},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 10},
  [489] = {.lex_state = 8},
  [490] = {.lex_state = 8},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 207},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 207},
  [496] = {.lex_state = 24},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 208},
  [502] = {.lex_state = 207},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 3},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 207},
  [510] = {.lex_state = 208},
  [511] = {.lex_state = 207},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 24},
  [514] = {.lex_state = 21},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 3},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 209},
  [520] = {.lex_state = 10},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 207},
  [523] = {.lex_state = 209},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 21},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 209},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 21},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 21},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 21},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 21},
  [555] = {.lex_state = 21},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 21},
  [559] = {.lex_state = 21},
  [560] = {.lex_state = 21},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 21},
  [563] = {.lex_state = 21},
  [564] = {.lex_state = 21},
  [565] = {.lex_state = 21},
  [566] = {.lex_state = 21},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 21},
  [569] = {.lex_state = 21},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 21},
  [577] = {.lex_state = 209},
  [578] = {.lex_state = 208},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 21},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym_parent_doc_comment] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
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
    [sym_source_file] = STATE(589),
    [sym_item] = STATE(36),
    [sym__trivia] = STATE(36),
    [sym_use] = STATE(249),
    [sym_struct] = STATE(249),
    [sym_psyche] = STATE(249),
    [sym_skill] = STATE(249),
    [sym_service] = STATE(249),
    [sym_prompt] = STATE(249),
    [sym_task] = STATE(249),
    [sym_chore] = STATE(249),
    [sym_instruct] = STATE(249),
    [sym_context] = STATE(249),
    [sym_thunk] = STATE(249),
    [sym_flow] = STATE(249),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym_parent_doc_comment] = ACTIONS(5),
    [sym_doc_comment] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(7),
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
  [0] = 23,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(62), 1,
      sym_flow_body,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(154), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(15), 12,
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
  [93] = 23,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(69), 1,
      sym_flow_body,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(93), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(15), 12,
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
  [186] = 23,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(62), 1,
      sym_flow_body,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(149), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(15), 12,
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
  [279] = 23,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(69), 1,
      sym_flow_body,
    STATE(70), 1,
      sym_repeat_body,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(33), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(15), 12,
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
  [372] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(261), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [462] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(257), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [552] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(280), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [642] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(248), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [732] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [822] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [912] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1002] = 22,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(277), 1,
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
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1092] = 21,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(183), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(83), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1179] = 16,
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
      sym_indented_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_text_body_line,
    STATE(75), 1,
      sym__implicit_do_body,
    ACTIONS(87), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1256] = 16,
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
      sym_indented_raw_text,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_text_body_line,
    STATE(75), 1,
      sym__implicit_do_body,
    ACTIONS(93), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(95), 13,
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
    STATE(17), 14,
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
  [1333] = 16,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_flow_do_keyword,
    ACTIONS(107), 1,
      sym_flow_ask_keyword,
    ACTIONS(110), 1,
      sym_flow_unfold_keyword,
    ACTIONS(113), 1,
      sym_flow_keep_keyword,
    ACTIONS(116), 1,
      sym_flow_drop_keyword,
    ACTIONS(119), 1,
      sym_flow_rank_keyword,
    ACTIONS(122), 1,
      sym_flow_each_keyword,
    ACTIONS(125), 1,
      sym_flow_fold_keyword,
    ACTIONS(128), 1,
      sym_flow_repeat_keyword,
    ACTIONS(131), 1,
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(75), 1,
      sym__implicit_do_body,
    ACTIONS(99), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(102), 13,
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
    STATE(17), 14,
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
  [1410] = 21,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(171), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(415), 1,
      sym_directive_key,
    STATE(53), 2,
      sym_statements,
      sym__pass_statement,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(83), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(15), 12,
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
  [1497] = 16,
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
      sym_indented_raw_text,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    ACTIONS(134), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(95), 12,
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
  [1573] = 16,
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
      sym_indented_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    ACTIONS(136), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1649] = 16,
    ACTIONS(97), 1,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    ACTIONS(138), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(102), 12,
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
  [1725] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(275), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1809] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(281), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1893] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(273), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1977] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(263), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2061] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(267), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2145] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(283), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2229] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(279), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2313] = 23,
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
    STATE(44), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(272), 1,
      sym_thunk_body,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(224), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2397] = 22,
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
    STATE(45), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(366), 1,
      sym_line_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(557), 1,
      sym_role,
    STATE(206), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2478] = 6,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(31), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(191), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(194), 8,
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
  [2526] = 6,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(31), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(201), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(199), 18,
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
  [2574] = 6,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(398), 1,
      sym_directive_key,
    STATE(32), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(207), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [2622] = 19,
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
    STATE(39), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(226), 1,
      sym_messages,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(211), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [2695] = 19,
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
    STATE(45), 1,
      sym_settings,
    STATE(48), 1,
      sym_message,
    STATE(166), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(234), 1,
      sym_messages,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    STATE(231), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(217), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [2768] = 17,
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
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(225), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(37), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(249), 12,
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
  [2835] = 17,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym_use_keyword,
    ACTIONS(238), 1,
      sym_struct_keyword,
    ACTIONS(241), 1,
      sym_psyche_keyword,
    ACTIONS(244), 1,
      sym_skill_keyword,
    ACTIONS(247), 1,
      sym_service_keyword,
    ACTIONS(250), 1,
      sym_prompt_keyword,
    ACTIONS(253), 1,
      sym_context_keyword,
    ACTIONS(256), 1,
      sym_instruct_keyword,
    ACTIONS(259), 1,
      sym_thunk_keyword,
    ACTIONS(262), 1,
      sym_task_keyword,
    ACTIONS(265), 1,
      sym_chore_keyword,
    ACTIONS(268), 1,
      sym_flow_keyword,
    ACTIONS(229), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(232), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(37), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(249), 12,
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
  [2902] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [2938] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_message,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(222), 1,
      sym_messages,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    STATE(227), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(277), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(279), 12,
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
  [2998] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3034] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      sym_blank_line,
    ACTIONS(292), 1,
      sym__nested_indented_raw_text,
    STATE(41), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(67), 1,
      sym__nested_text_body_line,
    ACTIONS(290), 26,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [3078] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 30,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3114] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(305), 1,
      sym__nested_indented_raw_text,
    STATE(41), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(67), 1,
      sym__nested_text_body_line,
    ACTIONS(303), 26,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [3158] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_message,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(234), 1,
      sym_messages,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    STATE(231), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(217), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3218] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_message,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(226), 1,
      sym_messages,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(211), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3278] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(47), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(309), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3333] = 12,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym_inline_comment,
    ACTIONS(329), 1,
      sym_text_line,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    ACTIONS(324), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(47), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(318), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(327), 12,
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
  [3388] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(196), 1,
      sym_text_inline,
    STATE(197), 1,
      sym_text_block,
    STATE(366), 1,
      sym_line_end,
    STATE(557), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(46), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(334), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(336), 12,
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
  [3443] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      sym_blank_line,
    STATE(51), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(342), 25,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3484] = 4,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(346), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(348), 23,
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
      sym_indented_raw_text,
  [3523] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym_blank_line,
    STATE(54), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(354), 25,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3564] = 4,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(358), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(360), 23,
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
      sym_indented_raw_text,
  [3603] = 4,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(57), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(362), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(360), 23,
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
      sym_indented_raw_text,
  [3642] = 5,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      sym_blank_line,
    ACTIONS(371), 1,
      sym_indented_raw_text,
    STATE(54), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(369), 25,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3683] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      sym_blank_line,
    ACTIONS(377), 1,
      sym__nested_indented_raw_text,
    STATE(55), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    ACTIONS(290), 25,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [3726] = 4,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(382), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(384), 23,
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
      sym_indented_raw_text,
  [3765] = 4,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(358), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(384), 23,
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
      sym_indented_raw_text,
  [3804] = 4,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(358), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(388), 23,
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
      sym_indented_raw_text,
  [3843] = 4,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(392), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [3882] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      sym_blank_line,
    ACTIONS(399), 1,
      sym__nested_indented_raw_text,
    STATE(55), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    ACTIONS(303), 25,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [3925] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_text_body_line,
    ACTIONS(354), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [3963] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 1,
      sym_flow_until_keyword,
    STATE(153), 1,
      sym_until_clause,
    ACTIONS(403), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4001] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 1,
      sym_blank_line,
    STATE(68), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(342), 24,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4041] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_text_body_line,
    ACTIONS(411), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4079] = 5,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      sym_blank_line,
    ACTIONS(416), 1,
      sym_indented_raw_text,
    STATE(65), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(369), 24,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4119] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 28,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4153] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 28,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4187] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 1,
      sym_blank_line,
    STATE(65), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(354), 24,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4227] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      sym_flow_until_keyword,
    STATE(100), 1,
      sym_until_clause,
    ACTIONS(403), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4265] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4298] = 2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4331] = 2,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4364] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_text_body_line,
    ACTIONS(411), 25,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4401] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_text_body_line,
    ACTIONS(354), 25,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [4438] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4471] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4504] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4537] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4570] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4603] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4636] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4669] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4702] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4735] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4768] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4801] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4834] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4867] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4900] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4933] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4966] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [4999] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5032] = 2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5065] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5098] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [5131] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5164] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5197] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5230] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5263] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5296] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5329] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5362] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5395] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5428] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5461] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5494] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5527] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5560] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5593] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5626] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5659] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5692] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5725] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5758] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5791] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5824] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5857] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 27,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5890] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5922] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5954] = 2,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [5986] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6018] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6050] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6082] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6114] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6146] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6178] = 2,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6210] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6242] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6274] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6306] = 2,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    ACTIONS(549), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6338] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6370] = 2,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6402] = 2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6434] = 2,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6466] = 2,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6498] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6530] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6562] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6594] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6626] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6658] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6690] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6722] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6754] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6786] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6818] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6850] = 2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6882] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6914] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6946] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [6978] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7010] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7042] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7074] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7106] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7138] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7170] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7202] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7234] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7266] = 2,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 26,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7298] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(164), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(551), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(35), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(199), 10,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7335] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(164), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(553), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(194), 8,
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
      sym_indented_raw_text,
  [7372] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 1,
      sym_blank_line,
    ACTIONS(558), 1,
      sym__nested_indented_raw_text,
    STATE(176), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(189), 1,
      sym__nested_text_body_line,
    ACTIONS(303), 21,
      sym_newline,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [7411] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_instruct_setting,
    STATE(174), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(564), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(562), 17,
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
  [7450] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_context_setting,
    STATE(175), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(566), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(562), 17,
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
  [7489] = 10,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      sym_blank_line,
    ACTIONS(576), 1,
      sym_snake_name,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    STATE(242), 1,
      sym_text_body,
    STATE(508), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(572), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(173), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(574), 12,
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
  [7536] = 10,
    ACTIONS(570), 1,
      sym_blank_line,
    ACTIONS(576), 1,
      sym_snake_name,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_text_body,
    STATE(508), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(582), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(172), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(584), 12,
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
  [7583] = 5,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(590), 1,
      sym_blank_line,
    ACTIONS(592), 1,
      sym_indented_raw_text,
    STATE(177), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(588), 21,
      sym_newline,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [7620] = 5,
    STATE(415), 1,
      sym_directive_key,
    STATE(163), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(594), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7657] = 10,
    ACTIONS(570), 1,
      sym_blank_line,
    ACTIONS(576), 1,
      sym_snake_name,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_text_body,
    STATE(508), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(598), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(600), 12,
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
  [7704] = 10,
    ACTIONS(570), 1,
      sym_blank_line,
    ACTIONS(576), 1,
      sym_snake_name,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_text_body,
    STATE(508), 1,
      sym_property_key,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(598), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 3,
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
  [7751] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_instruct_setting,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(610), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(608), 17,
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
  [7790] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_context_setting,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(610), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(608), 17,
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
  [7829] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 1,
      sym_blank_line,
    ACTIONS(615), 1,
      sym__nested_indented_raw_text,
    STATE(176), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(189), 1,
      sym__nested_text_body_line,
    ACTIONS(290), 21,
      sym_newline,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [7868] = 5,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 1,
      sym_blank_line,
    ACTIONS(625), 1,
      sym_indented_raw_text,
    STATE(177), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(620), 21,
      sym_newline,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [7905] = 4,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    STATE(180), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(628), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(608), 18,
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
  [7939] = 4,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(610), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(632), 18,
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
  [7973] = 4,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(610), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(636), 18,
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
  [8007] = 3,
    STATE(181), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(638), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8039] = 4,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(179), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(641), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(636), 18,
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
  [8073] = 14,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
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
  [8127] = 14,
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
      sym_indented_raw_text,
    STATE(63), 1,
      sym_text_body_line,
    STATE(159), 1,
      sym__implicit_do_body,
    STATE(225), 1,
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
  [8181] = 4,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(643), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8215] = 14,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(53), 1,
      sym_statements,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(15), 12,
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
  [8269] = 14,
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
      sym_indented_raw_text,
    STATE(49), 1,
      sym_text_body_line,
    STATE(56), 1,
      sym_statements,
    STATE(75), 1,
      sym__implicit_do_body,
    STATE(15), 12,
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
  [8323] = 2,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8352] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8381] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 23,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8410] = 2,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8438] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8466] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8494] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8522] = 6,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(665), 1,
      sym_snake_name,
    STATE(508), 1,
      sym_property_key,
    STATE(195), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(660), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(663), 13,
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
  [8558] = 2,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(670), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8586] = 2,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(674), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8614] = 1,
    ACTIONS(297), 23,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8640] = 2,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    ACTIONS(678), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8668] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8696] = 2,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
    ACTIONS(682), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8724] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8752] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8780] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 22,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8808] = 1,
    ACTIONS(283), 23,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8834] = 3,
    STATE(206), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(684), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8864] = 1,
    ACTIONS(273), 22,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8889] = 1,
    ACTIONS(297), 22,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8914] = 1,
    ACTIONS(283), 22,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [8939] = 1,
    ACTIONS(297), 21,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8963] = 1,
    ACTIONS(283), 21,
      sym_newline,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [8987] = 7,
    ACTIONS(689), 1,
      sym_blank_line,
    ACTIONS(697), 1,
      sym_snake_name,
    STATE(506), 1,
      sym_field_name,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(692), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(212), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(695), 12,
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
  [9023] = 7,
    ACTIONS(702), 1,
      sym_blank_line,
    ACTIONS(708), 1,
      sym_snake_name,
    STATE(506), 1,
      sym_field_name,
    ACTIONS(700), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(704), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(212), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(706), 12,
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
  [9059] = 5,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      sym_blank_line,
    ACTIONS(713), 1,
      sym_indented_raw_text,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(620), 15,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9090] = 5,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(716), 1,
      sym_blank_line,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(588), 15,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9121] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(275), 13,
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
  [9149] = 4,
    ACTIONS(722), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(724), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(380), 13,
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
  [9177] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(726), 13,
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
  [9205] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(728), 13,
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
  [9233] = 4,
    ACTIONS(730), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(732), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(232), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(728), 13,
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
  [9261] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(356), 13,
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
  [9289] = 4,
    ACTIONS(736), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(738), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(218), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 13,
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
  [9317] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(740), 13,
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
  [9345] = 4,
    ACTIONS(217), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(742), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    STATE(231), 2,
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
  [9373] = 4,
    ACTIONS(744), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(746), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(241), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(356), 13,
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
  [9401] = 4,
    ACTIONS(277), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(748), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    STATE(227), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(275), 13,
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
  [9429] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 13,
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
  [9457] = 4,
    ACTIONS(750), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(752), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(221), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(344), 13,
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
  [9485] = 3,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym_snake_name,
    ACTIONS(757), 17,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9511] = 4,
    ACTIONS(762), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(764), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(596), 13,
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
  [9539] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
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
  [9567] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(766), 13,
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
  [9595] = 4,
    ACTIONS(768), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(771), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
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
  [9623] = 4,
    ACTIONS(211), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(774), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    STATE(216), 2,
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
  [9651] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 18,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9675] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(776), 13,
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
  [9703] = 2,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(780), 18,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9727] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 18,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9751] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(386), 13,
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
  [9779] = 4,
    ACTIONS(782), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(784), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(223), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(776), 13,
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
  [9807] = 4,
    ACTIONS(718), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(720), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(380), 13,
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
  [9835] = 4,
    ACTIONS(786), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(788), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(602), 13,
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
  [9863] = 2,
    ACTIONS(790), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(792), 15,
      sym_doc_comment,
      sym_line_comment,
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
  [9886] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 17,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [9909] = 2,
    ACTIONS(794), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(796), 15,
      sym_doc_comment,
      sym_line_comment,
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
  [9932] = 2,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(297), 15,
      sym_doc_comment,
      sym_line_comment,
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
  [9955] = 2,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(283), 15,
      sym_doc_comment,
      sym_line_comment,
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
  [9978] = 2,
    ACTIONS(800), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(798), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10000] = 2,
    ACTIONS(804), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(802), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10022] = 2,
    ACTIONS(808), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(806), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10044] = 2,
    ACTIONS(812), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(810), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10066] = 2,
    ACTIONS(816), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(814), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10088] = 2,
    ACTIONS(820), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(818), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10110] = 2,
    ACTIONS(682), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(680), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10132] = 2,
    ACTIONS(824), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(822), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10154] = 2,
    ACTIONS(678), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(676), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10176] = 2,
    ACTIONS(828), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(826), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10198] = 2,
    ACTIONS(832), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(830), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10220] = 2,
    ACTIONS(836), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(834), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10242] = 2,
    ACTIONS(840), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(838), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10264] = 2,
    ACTIONS(844), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(842), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10286] = 2,
    ACTIONS(445), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(443), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10308] = 2,
    ACTIONS(848), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(846), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10330] = 2,
    ACTIONS(852), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(850), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10352] = 2,
    ACTIONS(856), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(854), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10374] = 2,
    ACTIONS(860), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(858), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10396] = 2,
    ACTIONS(864), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(862), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10418] = 2,
    ACTIONS(868), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(866), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10440] = 2,
    ACTIONS(297), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(295), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10462] = 2,
    ACTIONS(283), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(281), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10484] = 2,
    ACTIONS(674), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(672), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10506] = 2,
    ACTIONS(872), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(870), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10528] = 2,
    ACTIONS(876), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(874), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10550] = 2,
    ACTIONS(880), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(878), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10572] = 2,
    ACTIONS(884), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(882), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10594] = 2,
    ACTIONS(888), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(886), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10616] = 2,
    ACTIONS(892), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(890), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10638] = 2,
    ACTIONS(896), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(894), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10660] = 2,
    ACTIONS(900), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(898), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10682] = 2,
    ACTIONS(904), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(902), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10704] = 2,
    ACTIONS(908), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(906), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10726] = 2,
    ACTIONS(912), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(910), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10748] = 2,
    ACTIONS(916), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(914), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10770] = 2,
    ACTIONS(920), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(918), 15,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [10792] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(518), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10817] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(549), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10842] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(590), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10867] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(545), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10892] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(462), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10917] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(533), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10942] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(526), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10967] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(512), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10992] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(586), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11017] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(498), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11042] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(436), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11067] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(528), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11092] = 6,
    ACTIONS(924), 1,
      sym_pascal_name,
    STATE(299), 1,
      sym_base_type,
    STATE(323), 1,
      sym_type_name,
    STATE(575), 1,
      sym_type,
    STATE(316), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(922), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11117] = 4,
    ACTIONS(928), 1,
      sym_array_suffix,
    STATE(300), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(926), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11135] = 4,
    ACTIONS(928), 1,
      sym_array_suffix,
    STATE(298), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(930), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11153] = 4,
    ACTIONS(934), 1,
      sym_array_suffix,
    STATE(300), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(932), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11171] = 6,
    ACTIONS(939), 1,
      sym_line_comment,
    ACTIONS(941), 1,
      sym_snake_name,
    STATE(258), 1,
      sym_struct_body,
    STATE(506), 1,
      sym_field_name,
    ACTIONS(937), 2,
      sym_blank_line,
      sym_doc_comment,
    STATE(213), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11192] = 8,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(947), 1,
      sym_integer_literal,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(951), 1,
      sym_flow_limit_keyword,
    STATE(130), 1,
      sym_line_end,
    STATE(375), 1,
      sym_limit_clause,
    STATE(423), 1,
      sym_par_clause,
  [11217] = 7,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(148), 1,
      sym_condition,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(147), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11240] = 8,
    ACTIONS(947), 1,
      sym_integer_literal,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(951), 1,
      sym_flow_limit_keyword,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
    STATE(376), 1,
      sym_limit_clause,
    STATE(474), 1,
      sym_par_clause,
  [11265] = 7,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(92), 1,
      sym_condition,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(91), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11288] = 8,
    ACTIONS(947), 1,
      sym_integer_literal,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(967), 1,
      sym_flow_limit_keyword,
    ACTIONS(969), 1,
      sym_colon,
    ACTIONS(971), 1,
      sym_snake_name,
    STATE(302), 1,
      sym_callee,
    STATE(442), 1,
      sym_limit_clause,
    STATE(542), 1,
      sym_par_clause,
  [11313] = 8,
    ACTIONS(947), 1,
      sym_integer_literal,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(967), 1,
      sym_flow_limit_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(973), 1,
      sym_colon,
    STATE(304), 1,
      sym_callee,
    STATE(483), 1,
      sym_limit_clause,
    STATE(581), 1,
      sym_par_clause,
  [11338] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(131), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11358] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(265), 1,
      sym_context_body,
    STATE(266), 1,
      sym_text_inline,
    STATE(271), 1,
      sym_text_block,
    STATE(368), 1,
      sym_line_end,
  [11380] = 1,
    ACTIONS(977), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11390] = 7,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(981), 1,
      sym_colon,
    STATE(377), 1,
      sym_callee,
    STATE(396), 1,
      sym_par_clause,
    STATE(445), 1,
      sym_to_clause,
  [11412] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(123), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11432] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(125), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11452] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(127), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11472] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(137), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11492] = 1,
    ACTIONS(983), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11502] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11522] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(129), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11542] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(138), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11562] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(120), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11582] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(140), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11602] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(142), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11622] = 1,
    ACTIONS(985), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11632] = 1,
    ACTIONS(987), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11642] = 1,
    ACTIONS(989), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11652] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11672] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(991), 1,
      sym_text_line,
    STATE(194), 1,
      sym__nested_text_block,
    STATE(378), 1,
      sym_line_end,
    STATE(193), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11692] = 7,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(993), 1,
      sym_colon,
    STATE(373), 1,
      sym_callee,
    STATE(387), 1,
      sym_par_clause,
    STATE(484), 1,
      sym_to_clause,
  [11714] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(144), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11734] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(260), 1,
      sym_context_body,
    STATE(266), 1,
      sym_text_inline,
    STATE(271), 1,
      sym_text_block,
    STATE(368), 1,
      sym_line_end,
  [11756] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_inline,
    STATE(271), 1,
      sym_text_block,
    STATE(282), 1,
      sym_instruct_body,
    STATE(368), 1,
      sym_line_end,
  [11778] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(133), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11798] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(146), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11818] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(79), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11838] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(101), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11858] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(106), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11878] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(108), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11898] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(111), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11918] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(115), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11938] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(117), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11958] = 1,
    ACTIONS(995), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11968] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(80), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11988] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(81), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12008] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(82), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12028] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12048] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(86), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12068] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(88), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12088] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(90), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12108] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(97), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12128] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(963), 1,
      sym_text_line,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(380), 1,
      sym_line_end,
    STATE(99), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12148] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(975), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_inline,
    STATE(271), 1,
      sym_text_block,
    STATE(284), 1,
      sym_instruct_body,
    STATE(368), 1,
      sym_line_end,
  [12170] = 6,
    ACTIONS(953), 1,
      sym_newline,
    ACTIONS(955), 1,
      sym_inline_comment,
    ACTIONS(957), 1,
      sym_text_line,
    STATE(156), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(152), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12190] = 6,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(997), 1,
      sym_colon,
    STATE(391), 1,
      sym_callee,
    STATE(430), 1,
      sym_callees,
    STATE(571), 1,
      sym_to_clause,
  [12209] = 6,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(999), 1,
      sym_colon,
    STATE(391), 1,
      sym_callee,
    STATE(458), 1,
      sym_callees,
    STATE(579), 1,
      sym_to_clause,
  [12228] = 1,
    ACTIONS(1001), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [12237] = 5,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_flow_until_keyword,
    ACTIONS(1005), 1,
      sym_colon,
    STATE(135), 2,
      sym_line_end,
      sym_until_clause,
  [12254] = 6,
    ACTIONS(1007), 1,
      sym_arrow,
    ACTIONS(1009), 1,
      sym_colon,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1013), 1,
      sym_snake_name,
    STATE(402), 1,
      sym_flow_name,
    STATE(500), 1,
      sym_params,
  [12273] = 5,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    ACTIONS(1015), 1,
      sym_flow_until_keyword,
    ACTIONS(1017), 1,
      sym_colon,
    STATE(71), 2,
      sym_line_end,
      sym_until_clause,
  [12290] = 6,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1019), 1,
      sym_arrow,
    ACTIONS(1021), 1,
      sym_colon,
    ACTIONS(1023), 1,
      sym_snake_name,
    STATE(388), 1,
      sym_thunk_name,
    STATE(491), 1,
      sym_params,
  [12309] = 5,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(1025), 1,
      sym_colon,
    STATE(435), 1,
      sym_callee,
    STATE(534), 1,
      sym_to_clause,
  [12325] = 5,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(1027), 1,
      sym_colon,
    STATE(465), 1,
      sym_callee,
    STATE(584), 1,
      sym_to_clause,
  [12341] = 5,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    STATE(126), 1,
      sym_line_end,
    STATE(420), 1,
      sym_par_clause,
  [12357] = 5,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(1029), 1,
      sym_colon,
    STATE(362), 1,
      sym_callee,
    STATE(384), 1,
      sym_par_clause,
  [12373] = 5,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(1031), 1,
      sym_colon,
    STATE(448), 1,
      sym_callee,
    STATE(583), 1,
      sym_to_clause,
  [12389] = 2,
    ACTIONS(1035), 1,
      sym_flow_times_keyword,
    ACTIONS(1033), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12399] = 4,
    ACTIONS(592), 1,
      sym_indented_raw_text,
    ACTIONS(1037), 1,
      sym_blank_line,
    STATE(199), 1,
      sym_text_body,
    STATE(170), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12413] = 5,
    ACTIONS(1015), 1,
      sym_flow_until_keyword,
    ACTIONS(1039), 1,
      sym_integer_literal,
    ACTIONS(1041), 1,
      sym_colon,
    STATE(77), 1,
      sym_until_clause,
    STATE(358), 1,
      sym_times_clause,
  [12429] = 4,
    ACTIONS(578), 1,
      sym_indented_raw_text,
    ACTIONS(1043), 1,
      sym_blank_line,
    STATE(256), 1,
      sym_text_body,
    STATE(215), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12443] = 5,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    STATE(128), 1,
      sym_line_end,
    STATE(421), 1,
      sym_par_clause,
  [12459] = 5,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(471), 1,
      sym_par_clause,
  [12475] = 5,
    ACTIONS(1003), 1,
      sym_flow_until_keyword,
    ACTIONS(1039), 1,
      sym_integer_literal,
    ACTIONS(1045), 1,
      sym_colon,
    STATE(145), 1,
      sym_until_clause,
    STATE(356), 1,
      sym_times_clause,
  [12491] = 5,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
    STATE(473), 1,
      sym_par_clause,
  [12507] = 5,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(116), 1,
      sym_line_end,
    STATE(476), 1,
      sym_par_clause,
  [12523] = 5,
    ACTIONS(1047), 1,
      sym_blank_line,
    ACTIONS(1049), 1,
      sym__nested_indented_raw_text,
    STATE(60), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(78), 1,
      sym__nested_text_body_line,
    STATE(158), 1,
      sym__nested_text_body,
  [12539] = 5,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    STATE(143), 1,
      sym_line_end,
    STATE(451), 1,
      sym_par_clause,
  [12555] = 5,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
    STATE(477), 1,
      sym_par_clause,
  [12571] = 5,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    STATE(132), 1,
      sym_line_end,
    STATE(425), 1,
      sym_par_clause,
  [12587] = 5,
    ACTIONS(1051), 1,
      sym_blank_line,
    ACTIONS(1053), 1,
      sym__nested_indented_raw_text,
    STATE(165), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(189), 1,
      sym__nested_text_body_line,
    STATE(204), 1,
      sym__nested_text_body,
  [12603] = 5,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(1055), 1,
      sym_colon,
    STATE(369), 1,
      sym_callee,
    STATE(393), 1,
      sym_par_clause,
  [12619] = 5,
    ACTIONS(1057), 1,
      sym_blank_line,
    ACTIONS(1059), 1,
      sym__nested_indented_raw_text,
    STATE(43), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(67), 1,
      sym__nested_text_body_line,
    STATE(104), 1,
      sym__nested_text_body,
  [12635] = 5,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(979), 1,
      sym_flow_to_keyword,
    ACTIONS(1061), 1,
      sym_colon,
    STATE(461), 1,
      sym_callee,
    STATE(580), 1,
      sym_to_clause,
  [12651] = 5,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(1063), 1,
      sym_colon,
    STATE(370), 1,
      sym_callee,
    STATE(401), 1,
      sym_par_clause,
  [12667] = 5,
    ACTIONS(965), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_snake_name,
    ACTIONS(1065), 1,
      sym_colon,
    STATE(372), 1,
      sym_callee,
    STATE(409), 1,
      sym_par_clause,
  [12683] = 4,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(126), 1,
      sym_line_end,
  [12696] = 3,
    ACTIONS(1071), 1,
      sym_comma,
    STATE(400), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1069), 2,
      sym_newline,
      sym_inline_comment,
  [12707] = 2,
    STATE(481), 1,
      sym_text_ref,
    ACTIONS(1073), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12716] = 4,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    ACTIONS(1075), 1,
      sym_colon,
    STATE(116), 1,
      sym_line_end,
  [12729] = 4,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1077), 1,
      sym_arrow,
    ACTIONS(1079), 1,
      sym_colon,
    STATE(516), 1,
      sym_params,
  [12742] = 3,
    ACTIONS(1081), 1,
      sym_optional_marker,
    ACTIONS(1083), 1,
      sym_colon,
    ACTIONS(1085), 2,
      sym_rparen,
      sym_comma,
  [12753] = 2,
    STATE(482), 1,
      sym_text_ref,
    ACTIONS(1073), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12762] = 3,
    ACTIONS(1089), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1087), 2,
      sym_newline,
      sym_inline_comment,
  [12773] = 1,
    ACTIONS(1091), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12780] = 4,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(1093), 1,
      sym_colon,
    STATE(128), 1,
      sym_line_end,
  [12793] = 3,
    ACTIONS(1097), 1,
      sym_comma,
    STATE(394), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1095), 2,
      sym_newline,
      sym_inline_comment,
  [12804] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
    STATE(268), 1,
      sym_cap_body,
  [12817] = 4,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    ACTIONS(1104), 1,
      sym_colon,
    STATE(132), 1,
      sym_line_end,
  [12830] = 1,
    ACTIONS(1106), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12837] = 2,
    STATE(523), 1,
      sym_directive_op,
    ACTIONS(1108), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12846] = 3,
    ACTIONS(1089), 1,
      sym_comma,
    STATE(394), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1110), 2,
      sym_newline,
      sym_inline_comment,
  [12857] = 3,
    ACTIONS(1114), 1,
      sym_comma,
    STATE(400), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1112), 2,
      sym_newline,
      sym_inline_comment,
  [12868] = 4,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(107), 1,
      sym_line_end,
  [12881] = 4,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1119), 1,
      sym_arrow,
    ACTIONS(1121), 1,
      sym_colon,
    STATE(497), 1,
      sym_params,
  [12894] = 2,
    ACTIONS(283), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      sym_blank_line,
      sym_doc_comment,
      sym_snake_name,
  [12903] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
    STATE(274), 1,
      sym_cap_body,
  [12916] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
    STATE(278), 1,
      sym_cap_body,
  [12929] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(168), 1,
      sym_line_end,
    STATE(250), 1,
      sym_job_body,
  [12942] = 1,
    ACTIONS(1123), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12949] = 3,
    ACTIONS(1071), 1,
      sym_comma,
    STATE(385), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1125), 2,
      sym_newline,
      sym_inline_comment,
  [12960] = 4,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    ACTIONS(1127), 1,
      sym_colon,
    STATE(110), 1,
      sym_line_end,
  [12973] = 4,
    ACTIONS(1129), 1,
      sym_rparen,
    ACTIONS(1131), 1,
      sym_snake_name,
    STATE(389), 1,
      sym_param_name,
    STATE(441), 1,
      sym_param,
  [12986] = 1,
    ACTIONS(1133), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12993] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(168), 1,
      sym_line_end,
    STATE(251), 1,
      sym_job_body,
  [13006] = 4,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
    STATE(253), 1,
      sym_cap_body,
  [13019] = 2,
    ACTIONS(297), 1,
      sym_line_comment,
    ACTIONS(295), 3,
      sym_blank_line,
      sym_doc_comment,
      sym_snake_name,
  [13028] = 2,
    STATE(519), 1,
      sym_directive_op,
    ACTIONS(1108), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13037] = 1,
    ACTIONS(1135), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13043] = 1,
    ACTIONS(1137), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13049] = 1,
    ACTIONS(1139), 3,
      sym_newline,
      sym_inline_comment,
      sym_colon,
  [13055] = 3,
    ACTIONS(1141), 1,
      sym_newline,
    ACTIONS(1143), 1,
      sym_inline_comment,
    STATE(262), 1,
      sym_line_end,
  [13065] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(139), 1,
      sym_line_end,
  [13075] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [13085] = 3,
    ACTIONS(1145), 1,
      sym_rparen,
    ACTIONS(1147), 1,
      sym_comma,
    STATE(422), 1,
      aux_sym_params_repeat1,
  [13095] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(143), 1,
      sym_line_end,
  [13105] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [13115] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(162), 1,
      sym_line_end,
  [13125] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
  [13135] = 3,
    ACTIONS(1154), 1,
      sym_colon,
    ACTIONS(1156), 1,
      sym_snake_name,
    STATE(532), 1,
      sym_context_name,
  [13145] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [13155] = 3,
    ACTIONS(1131), 1,
      sym_snake_name,
    STATE(389), 1,
      sym_param_name,
    STATE(521), 1,
      sym_param,
  [13165] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
  [13175] = 3,
    ACTIONS(1162), 1,
      sym_rparen,
    ACTIONS(1164), 1,
      sym_comma,
    STATE(422), 1,
      aux_sym_params_repeat1,
  [13185] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
  [13195] = 2,
    ACTIONS(1166), 1,
      sym_colon,
    ACTIONS(1168), 2,
      sym_rparen,
      sym_comma,
  [13203] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [13213] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(124), 1,
      sym_line_end,
  [13223] = 3,
    ACTIONS(1170), 1,
      sym_newline,
    ACTIONS(1172), 1,
      sym_inline_comment,
    STATE(245), 1,
      sym_line_end,
  [13233] = 3,
    ACTIONS(1100), 1,
      sym_newline,
    ACTIONS(1102), 1,
      sym_inline_comment,
    STATE(237), 1,
      sym_line_end,
  [13243] = 3,
    ACTIONS(1174), 1,
      sym_colon,
    ACTIONS(1176), 1,
      sym_snake_name,
    STATE(572), 1,
      sym_instruct_name,
  [13253] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
  [13263] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [13273] = 3,
    ACTIONS(1164), 1,
      sym_comma,
    ACTIONS(1178), 1,
      sym_rparen,
    STATE(431), 1,
      aux_sym_params_repeat1,
  [13283] = 3,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(1180), 1,
      sym_colon,
    STATE(530), 1,
      sym_par_clause,
  [13293] = 1,
    ACTIONS(1182), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13299] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
  [13309] = 3,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(1104), 1,
      sym_colon,
    STATE(531), 1,
      sym_par_clause,
  [13319] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13329] = 1,
    ACTIONS(1095), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13335] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_line_end,
  [13345] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [13355] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [13365] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
  [13375] = 3,
    ACTIONS(1141), 1,
      sym_newline,
    ACTIONS(1143), 1,
      sym_inline_comment,
    STATE(254), 1,
      sym_line_end,
  [13385] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [13395] = 3,
    ACTIONS(1184), 1,
      sym_newline,
    ACTIONS(1186), 1,
      sym_inline_comment,
    STATE(201), 1,
      sym_line_end,
  [13405] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13415] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(76), 1,
      sym_line_end,
  [13425] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [13435] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(118), 1,
      sym_line_end,
  [13445] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
  [13455] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13465] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
  [13475] = 3,
    ACTIONS(1170), 1,
      sym_newline,
    ACTIONS(1172), 1,
      sym_inline_comment,
    STATE(243), 1,
      sym_line_end,
  [13485] = 3,
    ACTIONS(1188), 1,
      sym_pascal_name,
    STATE(551), 1,
      sym_struct_name,
    STATE(574), 1,
      sym_type_name,
  [13495] = 1,
    ACTIONS(1112), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13501] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [13511] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [13521] = 3,
    ACTIONS(1190), 1,
      sym_newline,
    ACTIONS(1192), 1,
      sym_inline_comment,
    STATE(207), 1,
      sym_line_end,
  [13531] = 3,
    ACTIONS(943), 1,
      sym_newline,
    ACTIONS(945), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_line_end,
  [13541] = 3,
    ACTIONS(1141), 1,
      sym_newline,
    ACTIONS(1143), 1,
      sym_inline_comment,
    STATE(264), 1,
      sym_line_end,
  [13551] = 3,
    ACTIONS(1194), 1,
      sym_newline,
    ACTIONS(1196), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
  [13561] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [13571] = 3,
    ACTIONS(1198), 1,
      sym_newline,
    ACTIONS(1200), 1,
      sym_inline_comment,
    STATE(301), 1,
      sym_line_end,
  [13581] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(85), 1,
      sym_line_end,
  [13591] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [13601] = 3,
    ACTIONS(1184), 1,
      sym_newline,
    ACTIONS(1186), 1,
      sym_inline_comment,
    STATE(200), 1,
      sym_line_end,
  [13611] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
  [13621] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(98), 1,
      sym_line_end,
  [13631] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
  [13641] = 3,
    ACTIONS(959), 1,
      sym_newline,
    ACTIONS(961), 1,
      sym_inline_comment,
    STATE(103), 1,
      sym_line_end,
  [13651] = 3,
    ACTIONS(1150), 1,
      sym_newline,
    ACTIONS(1152), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [13661] = 3,
    ACTIONS(1184), 1,
      sym_newline,
    ACTIONS(1186), 1,
      sym_inline_comment,
    STATE(191), 1,
      sym_line_end,
  [13671] = 3,
    ACTIONS(1184), 1,
      sym_newline,
    ACTIONS(1186), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
  [13681] = 3,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(1202), 1,
      sym_colon,
    STATE(587), 1,
      sym_par_clause,
  [13691] = 3,
    ACTIONS(949), 1,
      sym_flow_par_keyword,
    ACTIONS(1075), 1,
      sym_colon,
    STATE(588), 1,
      sym_par_clause,
  [13701] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [13711] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [13721] = 3,
    ACTIONS(1158), 1,
      sym_newline,
    ACTIONS(1160), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13731] = 2,
    ACTIONS(1204), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_callee,
  [13738] = 2,
    ACTIONS(295), 1,
      sym__nested_indented_raw_text,
    ACTIONS(297), 1,
      sym_blank_line,
  [13745] = 2,
    ACTIONS(281), 1,
      sym__nested_indented_raw_text,
    ACTIONS(283), 1,
      sym_blank_line,
  [13752] = 2,
    ACTIONS(1206), 1,
      sym_arrow,
    ACTIONS(1208), 1,
      sym_colon,
  [13759] = 1,
    ACTIONS(1210), 2,
      sym_arrow,
      sym_colon,
  [13764] = 2,
    ACTIONS(1212), 1,
      sym__snake_kebab_name,
    STATE(541), 1,
      sym_job_name,
  [13771] = 1,
    ACTIONS(1214), 2,
      sym_newline,
      sym_inline_comment,
  [13776] = 2,
    ACTIONS(1216), 1,
      sym__snake_kebab_name,
    STATE(552), 1,
      sym_cap_name,
  [13783] = 2,
    ACTIONS(1218), 1,
      sym_indented_raw_text,
    STATE(136), 1,
      sym_text_body_line,
  [13790] = 2,
    ACTIONS(1220), 1,
      sym_arrow,
    ACTIONS(1222), 1,
      sym_colon,
  [13797] = 1,
    ACTIONS(1224), 2,
      sym_rparen,
      sym_comma,
  [13802] = 1,
    ACTIONS(1226), 2,
      sym_newline,
      sym_inline_comment,
  [13807] = 2,
    ACTIONS(1228), 1,
      sym_arrow,
    ACTIONS(1230), 1,
      sym_colon,
  [13814] = 2,
    ACTIONS(1232), 1,
      sym_text_line,
    STATE(437), 1,
      sym_property_value,
  [13821] = 2,
    ACTIONS(1216), 1,
      sym__snake_kebab_name,
    STATE(548), 1,
      sym_cap_name,
  [13828] = 1,
    ACTIONS(1234), 2,
      sym_newline,
      sym_inline_comment,
  [13833] = 1,
    ACTIONS(1236), 2,
      sym_arrow,
      sym_colon,
  [13838] = 1,
    ACTIONS(1238), 2,
      sym_arrow,
      sym_colon,
  [13843] = 2,
    ACTIONS(1240), 1,
      sym_optional_marker,
    ACTIONS(1242), 1,
      sym_colon,
  [13850] = 1,
    ACTIONS(283), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13855] = 2,
    ACTIONS(1244), 1,
      anon_sym_EQ,
    STATE(501), 1,
      sym_assign_operator,
  [13862] = 2,
    ACTIONS(1216), 1,
      sym__snake_kebab_name,
    STATE(553), 1,
      sym_cap_name,
  [13869] = 2,
    ACTIONS(1246), 1,
      sym_text_line,
    STATE(469), 1,
      sym_cap_ref,
  [13876] = 2,
    ACTIONS(1216), 1,
      sym__snake_kebab_name,
    STATE(543), 1,
      sym_cap_name,
  [13883] = 1,
    ACTIONS(1248), 2,
      sym_rparen,
      sym_comma,
  [13888] = 2,
    ACTIONS(1250), 1,
      sym_indented_raw_text,
    STATE(72), 1,
      sym_text_body_line,
  [13895] = 1,
    ACTIONS(1252), 2,
      sym_newline,
      sym_inline_comment,
  [13900] = 2,
    ACTIONS(1254), 1,
      sym_snake_name,
    STATE(459), 1,
      sym_agent,
  [13907] = 2,
    ACTIONS(1256), 1,
      sym_arrow,
    ACTIONS(1258), 1,
      sym_colon,
  [13914] = 1,
    ACTIONS(297), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13919] = 1,
    ACTIONS(1260), 2,
      sym_flow_par_keyword,
      sym_colon,
  [13924] = 2,
    ACTIONS(1262), 1,
      sym_directive_value,
    STATE(467), 1,
      sym_directive_csv,
  [13931] = 2,
    ACTIONS(1254), 1,
      sym_snake_name,
    STATE(432), 1,
      sym_agent,
  [13938] = 1,
    ACTIONS(1264), 2,
      sym_rparen,
      sym_comma,
  [13943] = 2,
    ACTIONS(1212), 1,
      sym__snake_kebab_name,
    STATE(535), 1,
      sym_job_name,
  [13950] = 2,
    ACTIONS(1262), 1,
      sym_directive_value,
    STATE(470), 1,
      sym_directive_csv,
  [13957] = 1,
    ACTIONS(1266), 2,
      sym_optional_marker,
      sym_colon,
  [13962] = 1,
    ACTIONS(1268), 1,
      sym_cap_kind,
  [13966] = 1,
    ACTIONS(1270), 1,
      sym_colon,
  [13970] = 1,
    ACTIONS(1272), 1,
      sym_directive_value,
  [13974] = 1,
    ACTIONS(1274), 1,
      sym_colon,
  [13978] = 1,
    ACTIONS(1276), 1,
      sym_newline,
  [13982] = 1,
    ACTIONS(1278), 1,
      sym_colon,
  [13986] = 1,
    ACTIONS(1280), 1,
      sym_colon,
  [13990] = 1,
    ACTIONS(1282), 1,
      sym_colon,
  [13994] = 1,
    ACTIONS(1284), 1,
      sym_colon,
  [13998] = 1,
    ACTIONS(1286), 1,
      sym_colon,
  [14002] = 1,
    ACTIONS(1288), 1,
      sym_colon,
  [14006] = 1,
    ACTIONS(1290), 1,
      sym_newline,
  [14010] = 1,
    ACTIONS(1292), 1,
      sym_colon,
  [14014] = 1,
    ACTIONS(1294), 1,
      sym_integer_literal,
  [14018] = 1,
    ACTIONS(1296), 1,
      anon_sym_EQ,
  [14022] = 1,
    ACTIONS(1298), 1,
      sym_colon,
  [14026] = 1,
    ACTIONS(1300), 1,
      sym_colon,
  [14030] = 1,
    ACTIONS(1180), 1,
      sym_colon,
  [14034] = 1,
    ACTIONS(1302), 1,
      sym_colon,
  [14038] = 1,
    ACTIONS(1304), 1,
      sym_newline,
  [14042] = 1,
    ACTIONS(1306), 1,
      sym_colon,
  [14046] = 1,
    ACTIONS(1308), 1,
      sym_colon,
  [14050] = 1,
    ACTIONS(1310), 1,
      sym_newline,
  [14054] = 1,
    ACTIONS(1312), 1,
      sym_colon,
  [14058] = 1,
    ACTIONS(1314), 1,
      sym_colon,
  [14062] = 1,
    ACTIONS(1316), 1,
      sym_integer_literal,
  [14066] = 1,
    ACTIONS(1318), 1,
      sym_colon,
  [14070] = 1,
    ACTIONS(1320), 1,
      sym_colon,
  [14074] = 1,
    ACTIONS(1322), 1,
      sym_colon,
  [14078] = 1,
    ACTIONS(1324), 1,
      sym_newline,
  [14082] = 1,
    ACTIONS(1326), 1,
      sym_newline,
  [14086] = 1,
    ACTIONS(1328), 1,
      sym_colon,
  [14090] = 1,
    ACTIONS(1330), 1,
      sym_colon,
  [14094] = 1,
    ACTIONS(1332), 1,
      sym_newline,
  [14098] = 1,
    ACTIONS(1334), 1,
      sym_newline,
  [14102] = 1,
    ACTIONS(1336), 1,
      sym_newline,
  [14106] = 1,
    ACTIONS(1338), 1,
      sym_colon,
  [14110] = 1,
    ACTIONS(1340), 1,
      sym_newline,
  [14114] = 1,
    ACTIONS(1342), 1,
      sym_newline,
  [14118] = 1,
    ACTIONS(1344), 1,
      sym_newline,
  [14122] = 1,
    ACTIONS(1346), 1,
      sym_newline,
  [14126] = 1,
    ACTIONS(1348), 1,
      sym_newline,
  [14130] = 1,
    ACTIONS(1350), 1,
      sym_newline,
  [14134] = 1,
    ACTIONS(1352), 1,
      sym_newline,
  [14138] = 1,
    ACTIONS(1354), 1,
      sym_newline,
  [14142] = 1,
    ACTIONS(1356), 1,
      sym_colon,
  [14146] = 1,
    ACTIONS(1358), 1,
      sym_colon,
  [14150] = 1,
    ACTIONS(1360), 1,
      sym_colon,
  [14154] = 1,
    ACTIONS(1362), 1,
      sym_colon,
  [14158] = 1,
    ACTIONS(1364), 1,
      sym_colon,
  [14162] = 1,
    ACTIONS(1366), 1,
      sym_colon,
  [14166] = 1,
    ACTIONS(1368), 1,
      sym_newline,
  [14170] = 1,
    ACTIONS(1370), 1,
      sym_directive_value,
  [14174] = 1,
    ACTIONS(1372), 1,
      sym_text_line,
  [14178] = 1,
    ACTIONS(1374), 1,
      sym_colon,
  [14182] = 1,
    ACTIONS(1376), 1,
      sym_colon,
  [14186] = 1,
    ACTIONS(1202), 1,
      sym_colon,
  [14190] = 1,
    ACTIONS(1378), 1,
      sym_newline,
  [14194] = 1,
    ACTIONS(1380), 1,
      sym_colon,
  [14198] = 1,
    ACTIONS(1382), 1,
      sym_colon,
  [14202] = 1,
    ACTIONS(1384), 1,
      sym_colon,
  [14206] = 1,
    ACTIONS(1386), 1,
      sym_colon,
  [14210] = 1,
    ACTIONS(1388), 1,
      sym_colon,
  [14214] = 1,
    ACTIONS(1390), 1,
      sym_colon,
  [14218] = 1,
    ACTIONS(1392), 1,
      ts_builtin_sym_end,
  [14222] = 1,
    ACTIONS(1394), 1,
      sym_colon,
  [14226] = 1,
    ACTIONS(1396), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 462,
  [SMALL_STATE(8)] = 552,
  [SMALL_STATE(9)] = 642,
  [SMALL_STATE(10)] = 732,
  [SMALL_STATE(11)] = 822,
  [SMALL_STATE(12)] = 912,
  [SMALL_STATE(13)] = 1002,
  [SMALL_STATE(14)] = 1092,
  [SMALL_STATE(15)] = 1179,
  [SMALL_STATE(16)] = 1256,
  [SMALL_STATE(17)] = 1333,
  [SMALL_STATE(18)] = 1410,
  [SMALL_STATE(19)] = 1497,
  [SMALL_STATE(20)] = 1573,
  [SMALL_STATE(21)] = 1649,
  [SMALL_STATE(22)] = 1725,
  [SMALL_STATE(23)] = 1809,
  [SMALL_STATE(24)] = 1893,
  [SMALL_STATE(25)] = 1977,
  [SMALL_STATE(26)] = 2061,
  [SMALL_STATE(27)] = 2145,
  [SMALL_STATE(28)] = 2229,
  [SMALL_STATE(29)] = 2313,
  [SMALL_STATE(30)] = 2397,
  [SMALL_STATE(31)] = 2478,
  [SMALL_STATE(32)] = 2526,
  [SMALL_STATE(33)] = 2574,
  [SMALL_STATE(34)] = 2622,
  [SMALL_STATE(35)] = 2695,
  [SMALL_STATE(36)] = 2768,
  [SMALL_STATE(37)] = 2835,
  [SMALL_STATE(38)] = 2902,
  [SMALL_STATE(39)] = 2938,
  [SMALL_STATE(40)] = 2998,
  [SMALL_STATE(41)] = 3034,
  [SMALL_STATE(42)] = 3078,
  [SMALL_STATE(43)] = 3114,
  [SMALL_STATE(44)] = 3158,
  [SMALL_STATE(45)] = 3218,
  [SMALL_STATE(46)] = 3278,
  [SMALL_STATE(47)] = 3333,
  [SMALL_STATE(48)] = 3388,
  [SMALL_STATE(49)] = 3443,
  [SMALL_STATE(50)] = 3484,
  [SMALL_STATE(51)] = 3523,
  [SMALL_STATE(52)] = 3564,
  [SMALL_STATE(53)] = 3603,
  [SMALL_STATE(54)] = 3642,
  [SMALL_STATE(55)] = 3683,
  [SMALL_STATE(56)] = 3726,
  [SMALL_STATE(57)] = 3765,
  [SMALL_STATE(58)] = 3804,
  [SMALL_STATE(59)] = 3843,
  [SMALL_STATE(60)] = 3882,
  [SMALL_STATE(61)] = 3925,
  [SMALL_STATE(62)] = 3963,
  [SMALL_STATE(63)] = 4001,
  [SMALL_STATE(64)] = 4041,
  [SMALL_STATE(65)] = 4079,
  [SMALL_STATE(66)] = 4119,
  [SMALL_STATE(67)] = 4153,
  [SMALL_STATE(68)] = 4187,
  [SMALL_STATE(69)] = 4227,
  [SMALL_STATE(70)] = 4265,
  [SMALL_STATE(71)] = 4298,
  [SMALL_STATE(72)] = 4331,
  [SMALL_STATE(73)] = 4364,
  [SMALL_STATE(74)] = 4401,
  [SMALL_STATE(75)] = 4438,
  [SMALL_STATE(76)] = 4471,
  [SMALL_STATE(77)] = 4504,
  [SMALL_STATE(78)] = 4537,
  [SMALL_STATE(79)] = 4570,
  [SMALL_STATE(80)] = 4603,
  [SMALL_STATE(81)] = 4636,
  [SMALL_STATE(82)] = 4669,
  [SMALL_STATE(83)] = 4702,
  [SMALL_STATE(84)] = 4735,
  [SMALL_STATE(85)] = 4768,
  [SMALL_STATE(86)] = 4801,
  [SMALL_STATE(87)] = 4834,
  [SMALL_STATE(88)] = 4867,
  [SMALL_STATE(89)] = 4900,
  [SMALL_STATE(90)] = 4933,
  [SMALL_STATE(91)] = 4966,
  [SMALL_STATE(92)] = 4999,
  [SMALL_STATE(93)] = 5032,
  [SMALL_STATE(94)] = 5065,
  [SMALL_STATE(95)] = 5098,
  [SMALL_STATE(96)] = 5131,
  [SMALL_STATE(97)] = 5164,
  [SMALL_STATE(98)] = 5197,
  [SMALL_STATE(99)] = 5230,
  [SMALL_STATE(100)] = 5263,
  [SMALL_STATE(101)] = 5296,
  [SMALL_STATE(102)] = 5329,
  [SMALL_STATE(103)] = 5362,
  [SMALL_STATE(104)] = 5395,
  [SMALL_STATE(105)] = 5428,
  [SMALL_STATE(106)] = 5461,
  [SMALL_STATE(107)] = 5494,
  [SMALL_STATE(108)] = 5527,
  [SMALL_STATE(109)] = 5560,
  [SMALL_STATE(110)] = 5593,
  [SMALL_STATE(111)] = 5626,
  [SMALL_STATE(112)] = 5659,
  [SMALL_STATE(113)] = 5692,
  [SMALL_STATE(114)] = 5725,
  [SMALL_STATE(115)] = 5758,
  [SMALL_STATE(116)] = 5791,
  [SMALL_STATE(117)] = 5824,
  [SMALL_STATE(118)] = 5857,
  [SMALL_STATE(119)] = 5890,
  [SMALL_STATE(120)] = 5922,
  [SMALL_STATE(121)] = 5954,
  [SMALL_STATE(122)] = 5986,
  [SMALL_STATE(123)] = 6018,
  [SMALL_STATE(124)] = 6050,
  [SMALL_STATE(125)] = 6082,
  [SMALL_STATE(126)] = 6114,
  [SMALL_STATE(127)] = 6146,
  [SMALL_STATE(128)] = 6178,
  [SMALL_STATE(129)] = 6210,
  [SMALL_STATE(130)] = 6242,
  [SMALL_STATE(131)] = 6274,
  [SMALL_STATE(132)] = 6306,
  [SMALL_STATE(133)] = 6338,
  [SMALL_STATE(134)] = 6370,
  [SMALL_STATE(135)] = 6402,
  [SMALL_STATE(136)] = 6434,
  [SMALL_STATE(137)] = 6466,
  [SMALL_STATE(138)] = 6498,
  [SMALL_STATE(139)] = 6530,
  [SMALL_STATE(140)] = 6562,
  [SMALL_STATE(141)] = 6594,
  [SMALL_STATE(142)] = 6626,
  [SMALL_STATE(143)] = 6658,
  [SMALL_STATE(144)] = 6690,
  [SMALL_STATE(145)] = 6722,
  [SMALL_STATE(146)] = 6754,
  [SMALL_STATE(147)] = 6786,
  [SMALL_STATE(148)] = 6818,
  [SMALL_STATE(149)] = 6850,
  [SMALL_STATE(150)] = 6882,
  [SMALL_STATE(151)] = 6914,
  [SMALL_STATE(152)] = 6946,
  [SMALL_STATE(153)] = 6978,
  [SMALL_STATE(154)] = 7010,
  [SMALL_STATE(155)] = 7042,
  [SMALL_STATE(156)] = 7074,
  [SMALL_STATE(157)] = 7106,
  [SMALL_STATE(158)] = 7138,
  [SMALL_STATE(159)] = 7170,
  [SMALL_STATE(160)] = 7202,
  [SMALL_STATE(161)] = 7234,
  [SMALL_STATE(162)] = 7266,
  [SMALL_STATE(163)] = 7298,
  [SMALL_STATE(164)] = 7335,
  [SMALL_STATE(165)] = 7372,
  [SMALL_STATE(166)] = 7411,
  [SMALL_STATE(167)] = 7450,
  [SMALL_STATE(168)] = 7489,
  [SMALL_STATE(169)] = 7536,
  [SMALL_STATE(170)] = 7583,
  [SMALL_STATE(171)] = 7620,
  [SMALL_STATE(172)] = 7657,
  [SMALL_STATE(173)] = 7704,
  [SMALL_STATE(174)] = 7751,
  [SMALL_STATE(175)] = 7790,
  [SMALL_STATE(176)] = 7829,
  [SMALL_STATE(177)] = 7868,
  [SMALL_STATE(178)] = 7905,
  [SMALL_STATE(179)] = 7939,
  [SMALL_STATE(180)] = 7973,
  [SMALL_STATE(181)] = 8007,
  [SMALL_STATE(182)] = 8039,
  [SMALL_STATE(183)] = 8073,
  [SMALL_STATE(184)] = 8127,
  [SMALL_STATE(185)] = 8181,
  [SMALL_STATE(186)] = 8215,
  [SMALL_STATE(187)] = 8269,
  [SMALL_STATE(188)] = 8323,
  [SMALL_STATE(189)] = 8352,
  [SMALL_STATE(190)] = 8381,
  [SMALL_STATE(191)] = 8410,
  [SMALL_STATE(192)] = 8438,
  [SMALL_STATE(193)] = 8466,
  [SMALL_STATE(194)] = 8494,
  [SMALL_STATE(195)] = 8522,
  [SMALL_STATE(196)] = 8558,
  [SMALL_STATE(197)] = 8586,
  [SMALL_STATE(198)] = 8614,
  [SMALL_STATE(199)] = 8640,
  [SMALL_STATE(200)] = 8668,
  [SMALL_STATE(201)] = 8696,
  [SMALL_STATE(202)] = 8724,
  [SMALL_STATE(203)] = 8752,
  [SMALL_STATE(204)] = 8780,
  [SMALL_STATE(205)] = 8808,
  [SMALL_STATE(206)] = 8834,
  [SMALL_STATE(207)] = 8864,
  [SMALL_STATE(208)] = 8889,
  [SMALL_STATE(209)] = 8914,
  [SMALL_STATE(210)] = 8939,
  [SMALL_STATE(211)] = 8963,
  [SMALL_STATE(212)] = 8987,
  [SMALL_STATE(213)] = 9023,
  [SMALL_STATE(214)] = 9059,
  [SMALL_STATE(215)] = 9090,
  [SMALL_STATE(216)] = 9121,
  [SMALL_STATE(217)] = 9149,
  [SMALL_STATE(218)] = 9177,
  [SMALL_STATE(219)] = 9205,
  [SMALL_STATE(220)] = 9233,
  [SMALL_STATE(221)] = 9261,
  [SMALL_STATE(222)] = 9289,
  [SMALL_STATE(223)] = 9317,
  [SMALL_STATE(224)] = 9345,
  [SMALL_STATE(225)] = 9373,
  [SMALL_STATE(226)] = 9401,
  [SMALL_STATE(227)] = 9429,
  [SMALL_STATE(228)] = 9457,
  [SMALL_STATE(229)] = 9485,
  [SMALL_STATE(230)] = 9511,
  [SMALL_STATE(231)] = 9539,
  [SMALL_STATE(232)] = 9567,
  [SMALL_STATE(233)] = 9595,
  [SMALL_STATE(234)] = 9623,
  [SMALL_STATE(235)] = 9651,
  [SMALL_STATE(236)] = 9675,
  [SMALL_STATE(237)] = 9703,
  [SMALL_STATE(238)] = 9727,
  [SMALL_STATE(239)] = 9751,
  [SMALL_STATE(240)] = 9779,
  [SMALL_STATE(241)] = 9807,
  [SMALL_STATE(242)] = 9835,
  [SMALL_STATE(243)] = 9863,
  [SMALL_STATE(244)] = 9886,
  [SMALL_STATE(245)] = 9909,
  [SMALL_STATE(246)] = 9932,
  [SMALL_STATE(247)] = 9955,
  [SMALL_STATE(248)] = 9978,
  [SMALL_STATE(249)] = 10000,
  [SMALL_STATE(250)] = 10022,
  [SMALL_STATE(251)] = 10044,
  [SMALL_STATE(252)] = 10066,
  [SMALL_STATE(253)] = 10088,
  [SMALL_STATE(254)] = 10110,
  [SMALL_STATE(255)] = 10132,
  [SMALL_STATE(256)] = 10154,
  [SMALL_STATE(257)] = 10176,
  [SMALL_STATE(258)] = 10198,
  [SMALL_STATE(259)] = 10220,
  [SMALL_STATE(260)] = 10242,
  [SMALL_STATE(261)] = 10264,
  [SMALL_STATE(262)] = 10286,
  [SMALL_STATE(263)] = 10308,
  [SMALL_STATE(264)] = 10330,
  [SMALL_STATE(265)] = 10352,
  [SMALL_STATE(266)] = 10374,
  [SMALL_STATE(267)] = 10396,
  [SMALL_STATE(268)] = 10418,
  [SMALL_STATE(269)] = 10440,
  [SMALL_STATE(270)] = 10462,
  [SMALL_STATE(271)] = 10484,
  [SMALL_STATE(272)] = 10506,
  [SMALL_STATE(273)] = 10528,
  [SMALL_STATE(274)] = 10550,
  [SMALL_STATE(275)] = 10572,
  [SMALL_STATE(276)] = 10594,
  [SMALL_STATE(277)] = 10616,
  [SMALL_STATE(278)] = 10638,
  [SMALL_STATE(279)] = 10660,
  [SMALL_STATE(280)] = 10682,
  [SMALL_STATE(281)] = 10704,
  [SMALL_STATE(282)] = 10726,
  [SMALL_STATE(283)] = 10748,
  [SMALL_STATE(284)] = 10770,
  [SMALL_STATE(285)] = 10792,
  [SMALL_STATE(286)] = 10817,
  [SMALL_STATE(287)] = 10842,
  [SMALL_STATE(288)] = 10867,
  [SMALL_STATE(289)] = 10892,
  [SMALL_STATE(290)] = 10917,
  [SMALL_STATE(291)] = 10942,
  [SMALL_STATE(292)] = 10967,
  [SMALL_STATE(293)] = 10992,
  [SMALL_STATE(294)] = 11017,
  [SMALL_STATE(295)] = 11042,
  [SMALL_STATE(296)] = 11067,
  [SMALL_STATE(297)] = 11092,
  [SMALL_STATE(298)] = 11117,
  [SMALL_STATE(299)] = 11135,
  [SMALL_STATE(300)] = 11153,
  [SMALL_STATE(301)] = 11171,
  [SMALL_STATE(302)] = 11192,
  [SMALL_STATE(303)] = 11217,
  [SMALL_STATE(304)] = 11240,
  [SMALL_STATE(305)] = 11265,
  [SMALL_STATE(306)] = 11288,
  [SMALL_STATE(307)] = 11313,
  [SMALL_STATE(308)] = 11338,
  [SMALL_STATE(309)] = 11358,
  [SMALL_STATE(310)] = 11380,
  [SMALL_STATE(311)] = 11390,
  [SMALL_STATE(312)] = 11412,
  [SMALL_STATE(313)] = 11432,
  [SMALL_STATE(314)] = 11452,
  [SMALL_STATE(315)] = 11472,
  [SMALL_STATE(316)] = 11492,
  [SMALL_STATE(317)] = 11502,
  [SMALL_STATE(318)] = 11522,
  [SMALL_STATE(319)] = 11542,
  [SMALL_STATE(320)] = 11562,
  [SMALL_STATE(321)] = 11582,
  [SMALL_STATE(322)] = 11602,
  [SMALL_STATE(323)] = 11622,
  [SMALL_STATE(324)] = 11632,
  [SMALL_STATE(325)] = 11642,
  [SMALL_STATE(326)] = 11652,
  [SMALL_STATE(327)] = 11672,
  [SMALL_STATE(328)] = 11692,
  [SMALL_STATE(329)] = 11714,
  [SMALL_STATE(330)] = 11734,
  [SMALL_STATE(331)] = 11756,
  [SMALL_STATE(332)] = 11778,
  [SMALL_STATE(333)] = 11798,
  [SMALL_STATE(334)] = 11818,
  [SMALL_STATE(335)] = 11838,
  [SMALL_STATE(336)] = 11858,
  [SMALL_STATE(337)] = 11878,
  [SMALL_STATE(338)] = 11898,
  [SMALL_STATE(339)] = 11918,
  [SMALL_STATE(340)] = 11938,
  [SMALL_STATE(341)] = 11958,
  [SMALL_STATE(342)] = 11968,
  [SMALL_STATE(343)] = 11988,
  [SMALL_STATE(344)] = 12008,
  [SMALL_STATE(345)] = 12028,
  [SMALL_STATE(346)] = 12048,
  [SMALL_STATE(347)] = 12068,
  [SMALL_STATE(348)] = 12088,
  [SMALL_STATE(349)] = 12108,
  [SMALL_STATE(350)] = 12128,
  [SMALL_STATE(351)] = 12148,
  [SMALL_STATE(352)] = 12170,
  [SMALL_STATE(353)] = 12190,
  [SMALL_STATE(354)] = 12209,
  [SMALL_STATE(355)] = 12228,
  [SMALL_STATE(356)] = 12237,
  [SMALL_STATE(357)] = 12254,
  [SMALL_STATE(358)] = 12273,
  [SMALL_STATE(359)] = 12290,
  [SMALL_STATE(360)] = 12309,
  [SMALL_STATE(361)] = 12325,
  [SMALL_STATE(362)] = 12341,
  [SMALL_STATE(363)] = 12357,
  [SMALL_STATE(364)] = 12373,
  [SMALL_STATE(365)] = 12389,
  [SMALL_STATE(366)] = 12399,
  [SMALL_STATE(367)] = 12413,
  [SMALL_STATE(368)] = 12429,
  [SMALL_STATE(369)] = 12443,
  [SMALL_STATE(370)] = 12459,
  [SMALL_STATE(371)] = 12475,
  [SMALL_STATE(372)] = 12491,
  [SMALL_STATE(373)] = 12507,
  [SMALL_STATE(374)] = 12523,
  [SMALL_STATE(375)] = 12539,
  [SMALL_STATE(376)] = 12555,
  [SMALL_STATE(377)] = 12571,
  [SMALL_STATE(378)] = 12587,
  [SMALL_STATE(379)] = 12603,
  [SMALL_STATE(380)] = 12619,
  [SMALL_STATE(381)] = 12635,
  [SMALL_STATE(382)] = 12651,
  [SMALL_STATE(383)] = 12667,
  [SMALL_STATE(384)] = 12683,
  [SMALL_STATE(385)] = 12696,
  [SMALL_STATE(386)] = 12707,
  [SMALL_STATE(387)] = 12716,
  [SMALL_STATE(388)] = 12729,
  [SMALL_STATE(389)] = 12742,
  [SMALL_STATE(390)] = 12753,
  [SMALL_STATE(391)] = 12762,
  [SMALL_STATE(392)] = 12773,
  [SMALL_STATE(393)] = 12780,
  [SMALL_STATE(394)] = 12793,
  [SMALL_STATE(395)] = 12804,
  [SMALL_STATE(396)] = 12817,
  [SMALL_STATE(397)] = 12830,
  [SMALL_STATE(398)] = 12837,
  [SMALL_STATE(399)] = 12846,
  [SMALL_STATE(400)] = 12857,
  [SMALL_STATE(401)] = 12868,
  [SMALL_STATE(402)] = 12881,
  [SMALL_STATE(403)] = 12894,
  [SMALL_STATE(404)] = 12903,
  [SMALL_STATE(405)] = 12916,
  [SMALL_STATE(406)] = 12929,
  [SMALL_STATE(407)] = 12942,
  [SMALL_STATE(408)] = 12949,
  [SMALL_STATE(409)] = 12960,
  [SMALL_STATE(410)] = 12973,
  [SMALL_STATE(411)] = 12986,
  [SMALL_STATE(412)] = 12993,
  [SMALL_STATE(413)] = 13006,
  [SMALL_STATE(414)] = 13019,
  [SMALL_STATE(415)] = 13028,
  [SMALL_STATE(416)] = 13037,
  [SMALL_STATE(417)] = 13043,
  [SMALL_STATE(418)] = 13049,
  [SMALL_STATE(419)] = 13055,
  [SMALL_STATE(420)] = 13065,
  [SMALL_STATE(421)] = 13075,
  [SMALL_STATE(422)] = 13085,
  [SMALL_STATE(423)] = 13095,
  [SMALL_STATE(424)] = 13105,
  [SMALL_STATE(425)] = 13115,
  [SMALL_STATE(426)] = 13125,
  [SMALL_STATE(427)] = 13135,
  [SMALL_STATE(428)] = 13145,
  [SMALL_STATE(429)] = 13155,
  [SMALL_STATE(430)] = 13165,
  [SMALL_STATE(431)] = 13175,
  [SMALL_STATE(432)] = 13185,
  [SMALL_STATE(433)] = 13195,
  [SMALL_STATE(434)] = 13203,
  [SMALL_STATE(435)] = 13213,
  [SMALL_STATE(436)] = 13223,
  [SMALL_STATE(437)] = 13233,
  [SMALL_STATE(438)] = 13243,
  [SMALL_STATE(439)] = 13253,
  [SMALL_STATE(440)] = 13263,
  [SMALL_STATE(441)] = 13273,
  [SMALL_STATE(442)] = 13283,
  [SMALL_STATE(443)] = 13293,
  [SMALL_STATE(444)] = 13299,
  [SMALL_STATE(445)] = 13309,
  [SMALL_STATE(446)] = 13319,
  [SMALL_STATE(447)] = 13329,
  [SMALL_STATE(448)] = 13335,
  [SMALL_STATE(449)] = 13345,
  [SMALL_STATE(450)] = 13355,
  [SMALL_STATE(451)] = 13365,
  [SMALL_STATE(452)] = 13375,
  [SMALL_STATE(453)] = 13385,
  [SMALL_STATE(454)] = 13395,
  [SMALL_STATE(455)] = 13405,
  [SMALL_STATE(456)] = 13415,
  [SMALL_STATE(457)] = 13425,
  [SMALL_STATE(458)] = 13435,
  [SMALL_STATE(459)] = 13445,
  [SMALL_STATE(460)] = 13455,
  [SMALL_STATE(461)] = 13465,
  [SMALL_STATE(462)] = 13475,
  [SMALL_STATE(463)] = 13485,
  [SMALL_STATE(464)] = 13495,
  [SMALL_STATE(465)] = 13501,
  [SMALL_STATE(466)] = 13511,
  [SMALL_STATE(467)] = 13521,
  [SMALL_STATE(468)] = 13531,
  [SMALL_STATE(469)] = 13541,
  [SMALL_STATE(470)] = 13551,
  [SMALL_STATE(471)] = 13561,
  [SMALL_STATE(472)] = 13571,
  [SMALL_STATE(473)] = 13581,
  [SMALL_STATE(474)] = 13591,
  [SMALL_STATE(475)] = 13601,
  [SMALL_STATE(476)] = 13611,
  [SMALL_STATE(477)] = 13621,
  [SMALL_STATE(478)] = 13631,
  [SMALL_STATE(479)] = 13641,
  [SMALL_STATE(480)] = 13651,
  [SMALL_STATE(481)] = 13661,
  [SMALL_STATE(482)] = 13671,
  [SMALL_STATE(483)] = 13681,
  [SMALL_STATE(484)] = 13691,
  [SMALL_STATE(485)] = 13701,
  [SMALL_STATE(486)] = 13711,
  [SMALL_STATE(487)] = 13721,
  [SMALL_STATE(488)] = 13731,
  [SMALL_STATE(489)] = 13738,
  [SMALL_STATE(490)] = 13745,
  [SMALL_STATE(491)] = 13752,
  [SMALL_STATE(492)] = 13759,
  [SMALL_STATE(493)] = 13764,
  [SMALL_STATE(494)] = 13771,
  [SMALL_STATE(495)] = 13776,
  [SMALL_STATE(496)] = 13783,
  [SMALL_STATE(497)] = 13790,
  [SMALL_STATE(498)] = 13797,
  [SMALL_STATE(499)] = 13802,
  [SMALL_STATE(500)] = 13807,
  [SMALL_STATE(501)] = 13814,
  [SMALL_STATE(502)] = 13821,
  [SMALL_STATE(503)] = 13828,
  [SMALL_STATE(504)] = 13833,
  [SMALL_STATE(505)] = 13838,
  [SMALL_STATE(506)] = 13843,
  [SMALL_STATE(507)] = 13850,
  [SMALL_STATE(508)] = 13855,
  [SMALL_STATE(509)] = 13862,
  [SMALL_STATE(510)] = 13869,
  [SMALL_STATE(511)] = 13876,
  [SMALL_STATE(512)] = 13883,
  [SMALL_STATE(513)] = 13888,
  [SMALL_STATE(514)] = 13895,
  [SMALL_STATE(515)] = 13900,
  [SMALL_STATE(516)] = 13907,
  [SMALL_STATE(517)] = 13914,
  [SMALL_STATE(518)] = 13919,
  [SMALL_STATE(519)] = 13924,
  [SMALL_STATE(520)] = 13931,
  [SMALL_STATE(521)] = 13938,
  [SMALL_STATE(522)] = 13943,
  [SMALL_STATE(523)] = 13950,
  [SMALL_STATE(524)] = 13957,
  [SMALL_STATE(525)] = 13962,
  [SMALL_STATE(526)] = 13966,
  [SMALL_STATE(527)] = 13970,
  [SMALL_STATE(528)] = 13974,
  [SMALL_STATE(529)] = 13978,
  [SMALL_STATE(530)] = 13982,
  [SMALL_STATE(531)] = 13986,
  [SMALL_STATE(532)] = 13990,
  [SMALL_STATE(533)] = 13994,
  [SMALL_STATE(534)] = 13998,
  [SMALL_STATE(535)] = 14002,
  [SMALL_STATE(536)] = 14006,
  [SMALL_STATE(537)] = 14010,
  [SMALL_STATE(538)] = 14014,
  [SMALL_STATE(539)] = 14018,
  [SMALL_STATE(540)] = 14022,
  [SMALL_STATE(541)] = 14026,
  [SMALL_STATE(542)] = 14030,
  [SMALL_STATE(543)] = 14034,
  [SMALL_STATE(544)] = 14038,
  [SMALL_STATE(545)] = 14042,
  [SMALL_STATE(546)] = 14046,
  [SMALL_STATE(547)] = 14050,
  [SMALL_STATE(548)] = 14054,
  [SMALL_STATE(549)] = 14058,
  [SMALL_STATE(550)] = 14062,
  [SMALL_STATE(551)] = 14066,
  [SMALL_STATE(552)] = 14070,
  [SMALL_STATE(553)] = 14074,
  [SMALL_STATE(554)] = 14078,
  [SMALL_STATE(555)] = 14082,
  [SMALL_STATE(556)] = 14086,
  [SMALL_STATE(557)] = 14090,
  [SMALL_STATE(558)] = 14094,
  [SMALL_STATE(559)] = 14098,
  [SMALL_STATE(560)] = 14102,
  [SMALL_STATE(561)] = 14106,
  [SMALL_STATE(562)] = 14110,
  [SMALL_STATE(563)] = 14114,
  [SMALL_STATE(564)] = 14118,
  [SMALL_STATE(565)] = 14122,
  [SMALL_STATE(566)] = 14126,
  [SMALL_STATE(567)] = 14130,
  [SMALL_STATE(568)] = 14134,
  [SMALL_STATE(569)] = 14138,
  [SMALL_STATE(570)] = 14142,
  [SMALL_STATE(571)] = 14146,
  [SMALL_STATE(572)] = 14150,
  [SMALL_STATE(573)] = 14154,
  [SMALL_STATE(574)] = 14158,
  [SMALL_STATE(575)] = 14162,
  [SMALL_STATE(576)] = 14166,
  [SMALL_STATE(577)] = 14170,
  [SMALL_STATE(578)] = 14174,
  [SMALL_STATE(579)] = 14178,
  [SMALL_STATE(580)] = 14182,
  [SMALL_STATE(581)] = 14186,
  [SMALL_STATE(582)] = 14190,
  [SMALL_STATE(583)] = 14194,
  [SMALL_STATE(584)] = 14198,
  [SMALL_STATE(585)] = 14202,
  [SMALL_STATE(586)] = 14206,
  [SMALL_STATE(587)] = 14210,
  [SMALL_STATE(588)] = 14214,
  [SMALL_STATE(589)] = 14218,
  [SMALL_STATE(590)] = 14222,
  [SMALL_STATE(591)] = 14226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 22),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 22),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(576),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(513),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 3, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 13),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 13),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(185),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(206),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(233),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(233),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 26),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 26),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 17),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 17),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 12),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 12),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 27),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 27),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 12),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 12),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 21),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 21),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 21),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 27),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 27),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 24),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 24),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 24),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 24),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 19),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 19),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 19),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 19),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 12),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 12),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14), SHIFT_REPEAT(324),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16), SHIFT_REPEAT(429),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 11),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 15),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 17),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 10),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 10),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
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
