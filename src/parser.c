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
#define STATE_COUNT 600
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 177
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
  sym_until_clause = 139,
  sym_condition = 140,
  sym_to_clause = 141,
  sym_par_clause = 142,
  sym_limit_clause = 143,
  sym_times_clause = 144,
  sym_callees = 145,
  sym_callee = 146,
  sym_agent = 147,
  sym_directive = 148,
  sym_directive_key = 149,
  sym_directive_op = 150,
  sym_directive_csv = 151,
  sym__directives = 152,
  sym_settings = 153,
  sym_context_setting = 154,
  sym_instruct_setting = 155,
  sym_text_ref = 156,
  sym_messages = 157,
  sym_message = 158,
  sym_role = 159,
  sym__pass_statement = 160,
  sym_assign_operator = 161,
  sym_type_name = 162,
  aux_sym_source_file_repeat1 = 163,
  aux_sym_type_repeat1 = 164,
  aux_sym_struct_body_repeat1 = 165,
  aux_sym_cap_body_repeat1 = 166,
  aux_sym_cap_body_repeat2 = 167,
  aux_sym_text_body_repeat1 = 168,
  aux_sym__nested_text_body_repeat1 = 169,
  aux_sym_params_repeat1 = 170,
  aux_sym_statements_repeat1 = 171,
  aux_sym__implicit_do_body_repeat1 = 172,
  aux_sym_callees_repeat1 = 173,
  aux_sym_directive_csv_repeat1 = 174,
  aux_sym__directives_repeat1 = 175,
  aux_sym_messages_repeat1 = 176,
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 3,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 17,
  [20] = 16,
  [21] = 15,
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
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 49,
  [65] = 61,
  [66] = 52,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 48,
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
  [82] = 62,
  [83] = 71,
  [84] = 68,
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
  [99] = 63,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 41,
  [118] = 43,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 94,
  [126] = 95,
  [127] = 97,
  [128] = 101,
  [129] = 102,
  [130] = 103,
  [131] = 104,
  [132] = 98,
  [133] = 105,
  [134] = 100,
  [135] = 78,
  [136] = 79,
  [137] = 113,
  [138] = 80,
  [139] = 81,
  [140] = 106,
  [141] = 109,
  [142] = 110,
  [143] = 111,
  [144] = 112,
  [145] = 107,
  [146] = 72,
  [147] = 114,
  [148] = 115,
  [149] = 116,
  [150] = 119,
  [151] = 120,
  [152] = 121,
  [153] = 122,
  [154] = 96,
  [155] = 73,
  [156] = 74,
  [157] = 75,
  [158] = 76,
  [159] = 77,
  [160] = 41,
  [161] = 43,
  [162] = 85,
  [163] = 86,
  [164] = 87,
  [165] = 88,
  [166] = 89,
  [167] = 90,
  [168] = 91,
  [169] = 92,
  [170] = 93,
  [171] = 32,
  [172] = 172,
  [173] = 173,
  [174] = 33,
  [175] = 175,
  [176] = 42,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 44,
  [183] = 183,
  [184] = 31,
  [185] = 185,
  [186] = 56,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 56,
  [192] = 192,
  [193] = 193,
  [194] = 193,
  [195] = 187,
  [196] = 71,
  [197] = 63,
  [198] = 113,
  [199] = 199,
  [200] = 56,
  [201] = 107,
  [202] = 202,
  [203] = 41,
  [204] = 43,
  [205] = 205,
  [206] = 72,
  [207] = 207,
  [208] = 208,
  [209] = 41,
  [210] = 43,
  [211] = 211,
  [212] = 106,
  [213] = 213,
  [214] = 214,
  [215] = 40,
  [216] = 43,
  [217] = 41,
  [218] = 43,
  [219] = 41,
  [220] = 220,
  [221] = 221,
  [222] = 177,
  [223] = 173,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 57,
  [229] = 229,
  [230] = 41,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 43,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 53,
  [239] = 46,
  [240] = 54,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 50,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 51,
  [249] = 249,
  [250] = 56,
  [251] = 251,
  [252] = 252,
  [253] = 113,
  [254] = 43,
  [255] = 41,
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
  [270] = 202,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 108,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 41,
  [285] = 43,
  [286] = 205,
  [287] = 287,
  [288] = 207,
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
  [307] = 306,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 315,
  [318] = 318,
  [319] = 312,
  [320] = 318,
  [321] = 316,
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
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 334,
  [345] = 337,
  [346] = 338,
  [347] = 342,
  [348] = 322,
  [349] = 349,
  [350] = 339,
  [351] = 349,
  [352] = 352,
  [353] = 331,
  [354] = 341,
  [355] = 355,
  [356] = 325,
  [357] = 327,
  [358] = 330,
  [359] = 332,
  [360] = 360,
  [361] = 335,
  [362] = 336,
  [363] = 355,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 368,
  [371] = 367,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 375,
  [380] = 376,
  [381] = 374,
  [382] = 373,
  [383] = 372,
  [384] = 384,
  [385] = 385,
  [386] = 377,
  [387] = 385,
  [388] = 388,
  [389] = 385,
  [390] = 388,
  [391] = 378,
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
  [404] = 41,
  [405] = 43,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 392,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 415,
  [421] = 414,
  [422] = 422,
  [423] = 393,
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
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 436,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 437,
  [469] = 439,
  [470] = 441,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 455,
  [476] = 474,
  [477] = 477,
  [478] = 477,
  [479] = 479,
  [480] = 426,
  [481] = 428,
  [482] = 430,
  [483] = 483,
  [484] = 433,
  [485] = 485,
  [486] = 486,
  [487] = 457,
  [488] = 464,
  [489] = 477,
  [490] = 490,
  [491] = 451,
  [492] = 452,
  [493] = 465,
  [494] = 456,
  [495] = 495,
  [496] = 496,
  [497] = 43,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 41,
  [510] = 510,
  [511] = 43,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 508,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 504,
  [526] = 526,
  [527] = 521,
  [528] = 528,
  [529] = 529,
  [530] = 41,
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
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 533,
  [556] = 538,
  [557] = 546,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 546,
  [564] = 549,
  [565] = 565,
  [566] = 566,
  [567] = 538,
  [568] = 546,
  [569] = 569,
  [570] = 546,
  [571] = 546,
  [572] = 546,
  [573] = 546,
  [574] = 546,
  [575] = 546,
  [576] = 546,
  [577] = 546,
  [578] = 546,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 540,
  [587] = 541,
  [588] = 588,
  [589] = 589,
  [590] = 562,
  [591] = 580,
  [592] = 536,
  [593] = 583,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 549,
  [599] = 549,
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
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 25:
      if (lookahead == '\f') SKIP(25);
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
    case 26:
      if (lookahead == '\f') SKIP(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(614);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
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
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(211);
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
    case 212:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 404,
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
        '\f', 404,
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
    case 405:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 224,
        '\f', 405,
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
        '\t', 405,
        ' ', 405,
      );
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 406:
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
        '\t', 740,
        ' ', 740,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 407:
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
        '\t', 406,
        ' ', 406,
      );
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 408:
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
        '\t', 407,
        ' ', 407,
      );
      if (lookahead != 0) ADVANCE(592);
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
  [38] = {.lex_state = 219},
  [39] = {.lex_state = 219},
  [40] = {.lex_state = 218},
  [41] = {.lex_state = 218},
  [42] = {.lex_state = 216},
  [43] = {.lex_state = 218},
  [44] = {.lex_state = 216},
  [45] = {.lex_state = 219},
  [46] = {.lex_state = 210},
  [47] = {.lex_state = 219},
  [48] = {.lex_state = 210},
  [49] = {.lex_state = 210},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 210},
  [54] = {.lex_state = 210},
  [55] = {.lex_state = 217},
  [56] = {.lex_state = 210},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 217},
  [59] = {.lex_state = 219},
  [60] = {.lex_state = 219},
  [61] = {.lex_state = 210},
  [62] = {.lex_state = 210},
  [63] = {.lex_state = 216},
  [64] = {.lex_state = 214},
  [65] = {.lex_state = 210},
  [66] = {.lex_state = 214},
  [67] = {.lex_state = 210},
  [68] = {.lex_state = 210},
  [69] = {.lex_state = 210},
  [70] = {.lex_state = 214},
  [71] = {.lex_state = 216},
  [72] = {.lex_state = 210},
  [73] = {.lex_state = 210},
  [74] = {.lex_state = 210},
  [75] = {.lex_state = 210},
  [76] = {.lex_state = 210},
  [77] = {.lex_state = 210},
  [78] = {.lex_state = 210},
  [79] = {.lex_state = 210},
  [80] = {.lex_state = 210},
  [81] = {.lex_state = 210},
  [82] = {.lex_state = 214},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 214},
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
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 210},
  [99] = {.lex_state = 217},
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
  [119] = {.lex_state = 210},
  [120] = {.lex_state = 210},
  [121] = {.lex_state = 210},
  [122] = {.lex_state = 210},
  [123] = {.lex_state = 210},
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
  [163] = {.lex_state = 214},
  [164] = {.lex_state = 214},
  [165] = {.lex_state = 214},
  [166] = {.lex_state = 214},
  [167] = {.lex_state = 214},
  [168] = {.lex_state = 214},
  [169] = {.lex_state = 214},
  [170] = {.lex_state = 214},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 211},
  [173] = {.lex_state = 212},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 211},
  [176] = {.lex_state = 215},
  [177] = {.lex_state = 212},
  [178] = {.lex_state = 219},
  [179] = {.lex_state = 219},
  [180] = {.lex_state = 211},
  [181] = {.lex_state = 219},
  [182] = {.lex_state = 215},
  [183] = {.lex_state = 219},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 211},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 219},
  [189] = {.lex_state = 219},
  [190] = {.lex_state = 219},
  [191] = {.lex_state = 219},
  [192] = {.lex_state = 219},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 215},
  [197] = {.lex_state = 215},
  [198] = {.lex_state = 212},
  [199] = {.lex_state = 219},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 219},
  [202] = {.lex_state = 219},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 219},
  [206] = {.lex_state = 219},
  [207] = {.lex_state = 219},
  [208] = {.lex_state = 211},
  [209] = {.lex_state = 219},
  [210] = {.lex_state = 219},
  [211] = {.lex_state = 219},
  [212] = {.lex_state = 219},
  [213] = {.lex_state = 219},
  [214] = {.lex_state = 219},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 221},
  [221] = {.lex_state = 221},
  [222] = {.lex_state = 213},
  [223] = {.lex_state = 213},
  [224] = {.lex_state = 220},
  [225] = {.lex_state = 220},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 220},
  [228] = {.lex_state = 220},
  [229] = {.lex_state = 220},
  [230] = {.lex_state = 211},
  [231] = {.lex_state = 211},
  [232] = {.lex_state = 220},
  [233] = {.lex_state = 220},
  [234] = {.lex_state = 211},
  [235] = {.lex_state = 220},
  [236] = {.lex_state = 220},
  [237] = {.lex_state = 220},
  [238] = {.lex_state = 220},
  [239] = {.lex_state = 220},
  [240] = {.lex_state = 220},
  [241] = {.lex_state = 220},
  [242] = {.lex_state = 220},
  [243] = {.lex_state = 220},
  [244] = {.lex_state = 220},
  [245] = {.lex_state = 220},
  [246] = {.lex_state = 220},
  [247] = {.lex_state = 220},
  [248] = {.lex_state = 220},
  [249] = {.lex_state = 211},
  [250] = {.lex_state = 220},
  [251] = {.lex_state = 221},
  [252] = {.lex_state = 221},
  [253] = {.lex_state = 213},
  [254] = {.lex_state = 221},
  [255] = {.lex_state = 221},
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
  [285] = {.lex_state = 220},
  [286] = {.lex_state = 220},
  [287] = {.lex_state = 220},
  [288] = {.lex_state = 220},
  [289] = {.lex_state = 220},
  [290] = {.lex_state = 220},
  [291] = {.lex_state = 220},
  [292] = {.lex_state = 220},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 21},
  [309] = {.lex_state = 21},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 21},
  [314] = {.lex_state = 10},
  [315] = {.lex_state = 23},
  [316] = {.lex_state = 24},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 23},
  [319] = {.lex_state = 27},
  [320] = {.lex_state = 23},
  [321] = {.lex_state = 24},
  [322] = {.lex_state = 24},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 24},
  [326] = {.lex_state = 21},
  [327] = {.lex_state = 24},
  [328] = {.lex_state = 21},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 24},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 24},
  [333] = {.lex_state = 24},
  [334] = {.lex_state = 24},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 24},
  [339] = {.lex_state = 24},
  [340] = {.lex_state = 24},
  [341] = {.lex_state = 24},
  [342] = {.lex_state = 24},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 24},
  [347] = {.lex_state = 24},
  [348] = {.lex_state = 24},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 24},
  [351] = {.lex_state = 24},
  [352] = {.lex_state = 24},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 24},
  [355] = {.lex_state = 24},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 24},
  [358] = {.lex_state = 24},
  [359] = {.lex_state = 24},
  [360] = {.lex_state = 21},
  [361] = {.lex_state = 24},
  [362] = {.lex_state = 24},
  [363] = {.lex_state = 24},
  [364] = {.lex_state = 21},
  [365] = {.lex_state = 10},
  [366] = {.lex_state = 21},
  [367] = {.lex_state = 28},
  [368] = {.lex_state = 21},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 21},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 28},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 21},
  [382] = {.lex_state = 21},
  [383] = {.lex_state = 21},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 21},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 28},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 28},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 22},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 60},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 22},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 22},
  [403] = {.lex_state = 22},
  [404] = {.lex_state = 10},
  [405] = {.lex_state = 10},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 22},
  [408] = {.lex_state = 22},
  [409] = {.lex_state = 10},
  [410] = {.lex_state = 22},
  [411] = {.lex_state = 22},
  [412] = {.lex_state = 22},
  [413] = {.lex_state = 22},
  [414] = {.lex_state = 22},
  [415] = {.lex_state = 22},
  [416] = {.lex_state = 60},
  [417] = {.lex_state = 22},
  [418] = {.lex_state = 22},
  [419] = {.lex_state = 22},
  [420] = {.lex_state = 22},
  [421] = {.lex_state = 22},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 22},
  [426] = {.lex_state = 22},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 22},
  [429] = {.lex_state = 22},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 22},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 22},
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 22},
  [437] = {.lex_state = 22},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 22},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 22},
  [442] = {.lex_state = 22},
  [443] = {.lex_state = 22},
  [444] = {.lex_state = 22},
  [445] = {.lex_state = 22},
  [446] = {.lex_state = 22},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 22},
  [450] = {.lex_state = 22},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 22},
  [454] = {.lex_state = 22},
  [455] = {.lex_state = 22},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 22},
  [458] = {.lex_state = 22},
  [459] = {.lex_state = 22},
  [460] = {.lex_state = 22},
  [461] = {.lex_state = 220},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 22},
  [464] = {.lex_state = 22},
  [465] = {.lex_state = 22},
  [466] = {.lex_state = 22},
  [467] = {.lex_state = 22},
  [468] = {.lex_state = 22},
  [469] = {.lex_state = 22},
  [470] = {.lex_state = 22},
  [471] = {.lex_state = 22},
  [472] = {.lex_state = 22},
  [473] = {.lex_state = 22},
  [474] = {.lex_state = 22},
  [475] = {.lex_state = 22},
  [476] = {.lex_state = 22},
  [477] = {.lex_state = 22},
  [478] = {.lex_state = 22},
  [479] = {.lex_state = 22},
  [480] = {.lex_state = 22},
  [481] = {.lex_state = 22},
  [482] = {.lex_state = 22},
  [483] = {.lex_state = 22},
  [484] = {.lex_state = 22},
  [485] = {.lex_state = 22},
  [486] = {.lex_state = 22},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 22},
  [489] = {.lex_state = 22},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 22},
  [494] = {.lex_state = 22},
  [495] = {.lex_state = 22},
  [496] = {.lex_state = 22},
  [497] = {.lex_state = 8},
  [498] = {.lex_state = 22},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 207},
  [502] = {.lex_state = 208},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 207},
  [506] = {.lex_state = 207},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 26},
  [509] = {.lex_state = 3},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 3},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 207},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 207},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 26},
  [521] = {.lex_state = 209},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 208},
  [525] = {.lex_state = 10},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 209},
  [528] = {.lex_state = 22},
  [529] = {.lex_state = 207},
  [530] = {.lex_state = 8},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 21},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 22},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 22},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 22},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 22},
  [557] = {.lex_state = 22},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 209},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 22},
  [564] = {.lex_state = 22},
  [565] = {.lex_state = 208},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 22},
  [568] = {.lex_state = 22},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 22},
  [571] = {.lex_state = 22},
  [572] = {.lex_state = 22},
  [573] = {.lex_state = 22},
  [574] = {.lex_state = 22},
  [575] = {.lex_state = 22},
  [576] = {.lex_state = 22},
  [577] = {.lex_state = 22},
  [578] = {.lex_state = 22},
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
  [589] = {.lex_state = 209},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 22},
  [599] = {.lex_state = 22},
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
    [sym_source_file] = STATE(548),
    [sym_item] = STATE(37),
    [sym__trivia] = STATE(37),
    [sym_use] = STATE(262),
    [sym_struct] = STATE(262),
    [sym_psyche] = STATE(262),
    [sym_skill] = STATE(262),
    [sym_service] = STATE(262),
    [sym_prompt] = STATE(262),
    [sym_task] = STATE(262),
    [sym_chore] = STATE(262),
    [sym_instruct] = STATE(262),
    [sym_context] = STATE(262),
    [sym_thunk] = STATE(262),
    [sym_flow] = STATE(262),
    [aux_sym_source_file_repeat1] = STATE(37),
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(65), 1,
      sym_flow_body,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(194), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(46), 2,
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
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [92] = 23,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(69), 1,
      sym_flow_body,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(194), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(46), 2,
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
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [184] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(275), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [276] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(269), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [368] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(260), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [460] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(261), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [552] = 23,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(67), 1,
      sym_flow_body,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(194), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(46), 2,
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
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [644] = 23,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(61), 1,
      sym_flow_body,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(194), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(46), 2,
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
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [736] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(291), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [828] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(292), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [920] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(258), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1012] = 23,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(193), 1,
      sym__directives,
    STATE(271), 1,
      sym_flow_body,
    STATE(423), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(239), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1104] = 22,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(186), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(248), 2,
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
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1193] = 17,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_flow_do_keyword,
    ACTIONS(95), 1,
      sym_flow_ask_keyword,
    ACTIONS(98), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(104), 1,
      sym_flow_drop_keyword,
    ACTIONS(107), 1,
      sym_flow_rank_keyword,
    ACTIONS(110), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(116), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_indented_raw_text,
    STATE(48), 1,
      sym_text_body_line,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    ACTIONS(87), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(90), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
    STATE(15), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1272] = 17,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_text_body_line,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    ACTIONS(124), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(126), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
    STATE(17), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1351] = 17,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_text_body_line,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    ACTIONS(130), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
    STATE(15), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1430] = 22,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(174), 1,
      sym_directive,
    STATE(195), 1,
      sym__directives,
    STATE(423), 1,
      sym_directive_key,
    STATE(51), 2,
      sym_statements,
      sym__pass_statement,
    STATE(186), 2,
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
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1519] = 17,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    ACTIONS(134), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
    STATE(21), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1597] = 17,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    ACTIONS(136), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(126), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(19), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1675] = 17,
    ACTIONS(85), 1,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    ACTIONS(138), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(90), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(21), 13,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
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
  [1753] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(259), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [1837] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(283), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [1921] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(263), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2005] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(268), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2089] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(257), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2173] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(281), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2257] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(287), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2341] = 23,
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
    STATE(38), 1,
      sym_settings,
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(282), 1,
      sym_thunk_body,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
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
  [2425] = 22,
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
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(537), 1,
      sym_role,
    STATE(200), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(241), 2,
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
  [2506] = 6,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(32), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(191), 4,
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
  [2554] = 6,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(32), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(197), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [2602] = 6,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(393), 1,
      sym_directive_key,
    STATE(31), 3,
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
  [2650] = 19,
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
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(235), 1,
      sym_messages,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    STATE(236), 2,
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
  [2723] = 19,
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
    STATE(60), 1,
      sym_message,
    STATE(179), 1,
      sym_context_setting,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(241), 1,
      sym_messages,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    STATE(242), 2,
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
  [2796] = 17,
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
      sym_parent_doc_comment,
    ACTIONS(226), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(36), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(262), 12,
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
  [2863] = 17,
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
      sym_parent_doc_comment,
    ACTIONS(269), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(36), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(262), 12,
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
  [2930] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_message,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(241), 1,
      sym_messages,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    STATE(242), 2,
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
  [2990] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_message,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(232), 1,
      sym_messages,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(273), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(275), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3050] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 30,
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
  [3086] = 2,
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
  [3122] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      sym_blank_line,
    ACTIONS(292), 1,
      sym__nested_indented_raw_text,
    STATE(42), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(71), 1,
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
  [3166] = 2,
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
  [3202] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(305), 1,
      sym__nested_indented_raw_text,
    STATE(42), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(71), 1,
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
  [3246] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_message,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(235), 1,
      sym_messages,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    STATE(236), 2,
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
  [3306] = 4,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(50), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(309), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(311), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [3345] = 12,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym_inline_comment,
    ACTIONS(329), 1,
      sym_text_line,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
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
  [3400] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      sym_blank_line,
    STATE(49), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(336), 25,
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
  [3441] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      sym_blank_line,
    STATE(52), 2,
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
  [3482] = 4,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
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
  [3521] = 4,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(350), 4,
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
  [3560] = 5,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym_blank_line,
    ACTIONS(359), 1,
      sym_indented_raw_text,
    STATE(52), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(357), 25,
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
  [3601] = 4,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(346), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(364), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [3640] = 4,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(57), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(366), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(364), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [3679] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(371), 1,
      sym__nested_indented_raw_text,
    STATE(55), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(83), 1,
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
  [3722] = 4,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(376), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(379), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [3761] = 4,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(346), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(383), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [3800] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__nested_indented_raw_text,
    STATE(55), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(83), 1,
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
  [3843] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(47), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(391), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(393), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3898] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_text_inline,
    STATE(202), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
    STATE(537), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(59), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(397), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(399), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3953] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 1,
      sym_flow_until_keyword,
    STATE(105), 1,
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
  [3991] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_text_body_line,
    ACTIONS(342), 26,
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
  [4029] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 28,
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
  [4063] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 1,
      sym_blank_line,
    STATE(66), 2,
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
  [4103] = 4,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      sym_flow_until_keyword,
    STATE(133), 1,
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
  [4141] = 5,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      sym_blank_line,
    ACTIONS(418), 1,
      sym_indented_raw_text,
    STATE(66), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(357), 24,
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
  [4181] = 4,
    ACTIONS(413), 1,
      sym_flow_until_keyword,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_until_clause,
    ACTIONS(423), 26,
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
  [4219] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_text_body_line,
    ACTIONS(427), 26,
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
  [4257] = 4,
    ACTIONS(405), 1,
      sym_flow_until_keyword,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_until_clause,
    ACTIONS(423), 26,
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
  [4295] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      sym_blank_line,
    STATE(64), 2,
      sym_text_body_line,
      aux_sym__implicit_do_body_repeat1,
    ACTIONS(336), 24,
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
  [4335] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 28,
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
  [4369] = 2,
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
  [4402] = 2,
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
  [4435] = 2,
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
  [4468] = 2,
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
  [4501] = 2,
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
  [4534] = 2,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 27,
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
  [4567] = 2,
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
  [4600] = 2,
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
  [4633] = 2,
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
  [4666] = 2,
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
  [4699] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_text_body_line,
    ACTIONS(342), 25,
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
  [4736] = 2,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4769] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(159), 1,
      sym_text_body_line,
    ACTIONS(427), 25,
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
  [4806] = 2,
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
  [4839] = 2,
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
  [4872] = 2,
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
  [4905] = 2,
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
  [4938] = 2,
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
  [4971] = 2,
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
  [5004] = 2,
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
  [5037] = 2,
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
  [5070] = 2,
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
  [5103] = 2,
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
  [5136] = 2,
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
  [5169] = 2,
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
  [5202] = 2,
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
  [5235] = 2,
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
  [5268] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 27,
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
  [5301] = 2,
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
  [5334] = 2,
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
  [5367] = 2,
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
  [5400] = 2,
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
  [5433] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 27,
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
  [5466] = 2,
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
  [5499] = 2,
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
  [5532] = 2,
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
  [5565] = 2,
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
  [5598] = 2,
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
  [5631] = 2,
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
  [5664] = 2,
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
  [5697] = 2,
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
  [5730] = 2,
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
  [5763] = 2,
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
  [5796] = 2,
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
  [5829] = 2,
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
  [5862] = 2,
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
  [5895] = 2,
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
  [5928] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 27,
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
  [5961] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 27,
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
  [5994] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 27,
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
  [6027] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 27,
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
  [6060] = 2,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 27,
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
  [6093] = 2,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 26,
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
  [6125] = 2,
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
  [6157] = 2,
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
  [6189] = 2,
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
  [6221] = 2,
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
  [6253] = 2,
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
  [6285] = 2,
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
  [6317] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
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
  [6349] = 2,
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
  [6381] = 2,
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
  [6413] = 2,
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
  [6445] = 2,
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
  [6477] = 2,
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
  [6509] = 2,
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
  [6541] = 2,
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
  [6573] = 2,
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
  [6605] = 2,
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
  [6637] = 2,
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
  [6669] = 2,
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
  [6701] = 2,
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
  [6733] = 2,
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
  [6765] = 2,
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
  [6797] = 2,
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
  [6829] = 2,
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
  [6861] = 2,
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
  [6893] = 2,
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
  [6925] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 26,
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
  [6957] = 2,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 26,
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
  [6989] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 26,
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
  [7021] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 26,
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
  [7053] = 2,
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
  [7085] = 2,
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
  [7117] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 26,
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
  [7149] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 26,
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
  [7181] = 2,
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
  [7213] = 2,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 26,
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
  [7245] = 2,
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
  [7277] = 2,
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
  [7309] = 2,
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
  [7341] = 2,
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
  [7373] = 2,
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
  [7405] = 2,
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
  [7437] = 2,
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
  [7469] = 2,
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
  [7501] = 2,
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
  [7533] = 2,
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
  [7565] = 2,
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
  [7597] = 5,
    STATE(423), 1,
      sym_directive_key,
    STATE(171), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(563), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
      sym_indented_raw_text,
  [7634] = 10,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym_snake_name,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    STATE(245), 1,
      sym_text_body,
    STATE(499), 1,
      sym_property_key,
    STATE(223), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(570), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(208), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(572), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7681] = 5,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      sym_blank_line,
    ACTIONS(584), 1,
      sym_indented_raw_text,
    STATE(177), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(580), 21,
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
  [7718] = 5,
    STATE(423), 1,
      sym_directive_key,
    STATE(184), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(586), 4,
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
  [7755] = 10,
    ACTIONS(568), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym_snake_name,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_text_body,
    STATE(499), 1,
      sym_property_key,
    STATE(223), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(570), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(208), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(590), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7802] = 6,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 1,
      sym_blank_line,
    ACTIONS(595), 1,
      sym__nested_indented_raw_text,
    STATE(176), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(196), 1,
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
  [7841] = 5,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(602), 1,
      sym_blank_line,
    ACTIONS(605), 1,
      sym_indented_raw_text,
    STATE(177), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(600), 21,
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
  [7878] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym_context_setting,
    STATE(191), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(612), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(610), 17,
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
  [7917] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      sym_instruct_setting,
    STATE(183), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(618), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(616), 17,
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
  [7956] = 10,
    ACTIONS(568), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym_snake_name,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_text_body,
    STATE(499), 1,
      sym_property_key,
    STATE(223), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(622), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(175), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(624), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8003] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      sym_context_setting,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(626), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(616), 17,
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
  [8042] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 1,
      sym_blank_line,
    ACTIONS(630), 1,
      sym__nested_indented_raw_text,
    STATE(176), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(196), 1,
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
  [8081] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym_instruct_setting,
    STATE(191), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(612), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(610), 17,
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
  [8120] = 5,
    STATE(423), 1,
      sym_directive_key,
    STATE(171), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(632), 4,
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
  [8157] = 10,
    ACTIONS(568), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym_snake_name,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_text_body,
    STATE(499), 1,
      sym_property_key,
    STATE(223), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(636), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(172), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(638), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8204] = 3,
    STATE(186), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(640), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(379), 19,
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
  [8236] = 15,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(240), 1,
      sym_statements,
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8292] = 4,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    STATE(192), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(647), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(645), 18,
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
  [8326] = 4,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    STATE(191), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(612), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(645), 18,
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
  [8360] = 4,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(189), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(649), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(610), 18,
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
  [8394] = 4,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(191), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(651), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(379), 18,
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
  [8428] = 4,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    STATE(191), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(612), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(656), 18,
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
  [8462] = 15,
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
    STATE(70), 1,
      sym_text_body_line,
    STATE(132), 1,
      sym_implicit_do_statement,
    STATE(134), 1,
      sym__implicit_do_body,
    STATE(248), 1,
      sym_statements,
    STATE(20), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8518] = 15,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(51), 1,
      sym_statements,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8574] = 15,
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
    STATE(48), 1,
      sym_text_body_line,
    STATE(54), 1,
      sym_statements,
    STATE(98), 1,
      sym_implicit_do_statement,
    STATE(100), 1,
      sym__implicit_do_body,
    STATE(16), 11,
      sym__flow_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8630] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 23,
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
  [8659] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
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
  [8688] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 23,
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
  [8717] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 22,
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
  [8745] = 3,
    STATE(200), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(662), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(379), 17,
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
  [8775] = 2,
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
  [8803] = 2,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
    ACTIONS(667), 22,
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
  [8831] = 1,
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
  [8857] = 1,
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
  [8883] = 2,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    ACTIONS(671), 22,
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
  [8911] = 2,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 22,
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
  [8939] = 2,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(675), 22,
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
  [8967] = 6,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym_snake_name,
    STATE(499), 1,
      sym_property_key,
    STATE(208), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(679), 4,
      sym_blank_line,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(682), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9003] = 2,
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
  [9031] = 2,
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
  [9059] = 2,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    ACTIONS(689), 22,
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
  [9087] = 2,
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
  [9115] = 2,
    ACTIONS(691), 1,
      ts_builtin_sym_end,
    ACTIONS(693), 22,
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
  [9143] = 2,
    ACTIONS(695), 1,
      ts_builtin_sym_end,
    ACTIONS(697), 22,
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
  [9171] = 1,
    ACTIONS(279), 22,
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
  [9196] = 1,
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
  [9221] = 1,
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
  [9246] = 1,
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
  [9270] = 1,
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
  [9294] = 7,
    ACTIONS(701), 1,
      sym_blank_line,
    ACTIONS(709), 1,
      sym_snake_name,
    STATE(512), 1,
      sym_field_name,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(704), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(220), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(707), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9330] = 7,
    ACTIONS(714), 1,
      sym_blank_line,
    ACTIONS(720), 1,
      sym_snake_name,
    STATE(512), 1,
      sym_field_name,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(716), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(220), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(718), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9366] = 5,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 1,
      sym_blank_line,
    ACTIONS(725), 1,
      sym_indented_raw_text,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(600), 15,
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
  [9397] = 5,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(728), 1,
      sym_blank_line,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(580), 15,
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
  [9428] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(730), 13,
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
  [9456] = 4,
    ACTIONS(217), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(736), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    STATE(242), 2,
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
  [9484] = 4,
    ACTIONS(738), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(740), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(237), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(566), 13,
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
  [9512] = 4,
    ACTIONS(744), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(746), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(233), 2,
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
  [9540] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(381), 13,
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
  [9568] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(748), 13,
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
  [9596] = 2,
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
  [9620] = 3,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(756), 1,
      sym_snake_name,
    ACTIONS(753), 17,
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
  [9646] = 4,
    ACTIONS(758), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(760), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(730), 13,
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
  [9674] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(762), 13,
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
  [9702] = 2,
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
  [9726] = 4,
    ACTIONS(273), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(764), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(271), 13,
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
  [9754] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(271), 13,
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
  [9782] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
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
  [9810] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(362), 13,
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
  [9838] = 4,
    ACTIONS(768), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(770), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(244), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(307), 13,
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
  [9866] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(774), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(228), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(362), 13,
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
  [9894] = 4,
    ACTIONS(211), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_comment,
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
  [9922] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
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
  [9950] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
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
  [9978] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
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
  [10006] = 4,
    ACTIONS(780), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(782), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(243), 2,
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
  [10034] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
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
  [10062] = 4,
    ACTIONS(784), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(786), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(246), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(588), 13,
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
  [10090] = 4,
    ACTIONS(788), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(790), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(238), 2,
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
  [10118] = 2,
    ACTIONS(792), 1,
      ts_builtin_sym_end,
    ACTIONS(794), 18,
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
  [10142] = 4,
    ACTIONS(796), 2,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(799), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(374), 13,
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
  [10170] = 2,
    ACTIONS(802), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(804), 15,
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
  [10193] = 2,
    ACTIONS(806), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_comment,
    ACTIONS(808), 15,
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
  [10216] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 17,
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
  [10239] = 2,
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
  [10262] = 2,
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
  [10285] = 2,
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
  [10307] = 2,
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
  [10329] = 2,
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
  [10351] = 2,
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
  [10373] = 2,
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
  [10395] = 2,
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
  [10417] = 2,
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
  [10439] = 2,
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
  [10461] = 2,
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
  [10483] = 2,
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
  [10505] = 2,
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
  [10527] = 2,
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
  [10549] = 2,
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
  [10571] = 2,
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
  [10593] = 2,
    ACTIONS(667), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(665), 15,
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
  [10615] = 2,
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
  [10637] = 2,
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
  [10659] = 2,
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
  [10681] = 2,
    ACTIONS(529), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(527), 15,
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
  [10703] = 2,
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
  [10725] = 2,
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
  [10747] = 2,
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
  [10769] = 2,
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
  [10791] = 2,
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
  [10813] = 2,
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
  [10835] = 2,
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
  [10857] = 2,
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
  [10879] = 2,
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
  [10901] = 2,
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
  [10923] = 2,
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
  [10945] = 2,
    ACTIONS(671), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(669), 15,
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
  [10967] = 2,
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
  [10989] = 2,
    ACTIONS(675), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(673), 15,
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
  [11011] = 2,
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
  [11033] = 2,
    ACTIONS(924), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(922), 15,
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
  [11055] = 2,
    ACTIONS(928), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(926), 15,
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
  [11077] = 2,
    ACTIONS(932), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(930), 15,
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
  [11099] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(579), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11124] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(517), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11149] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(513), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11174] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(551), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11199] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(547), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11224] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(545), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11249] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(595), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11274] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(466), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11299] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(552), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11324] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(523), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11349] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(553), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11374] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(559), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11399] = 6,
    ACTIONS(936), 1,
      sym_pascal_name,
    STATE(308), 1,
      sym_base_type,
    STATE(329), 1,
      sym_type_name,
    STATE(444), 1,
      sym_type,
    STATE(328), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(934), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11424] = 10,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(946), 1,
      sym_colon,
    ACTIONS(948), 1,
      sym_snake_name,
    STATE(138), 1,
      sym_line_end,
    STATE(372), 1,
      sym_callee,
    STATE(412), 1,
      sym_par_clause,
    STATE(452), 1,
      sym_to_clause,
  [11455] = 10,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(954), 1,
      sym_colon,
    STATE(80), 1,
      sym_line_end,
    STATE(383), 1,
      sym_callee,
    STATE(392), 1,
      sym_par_clause,
    STATE(492), 1,
      sym_to_clause,
  [11486] = 4,
    ACTIONS(958), 1,
      sym_array_suffix,
    STATE(310), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(956), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11504] = 4,
    ACTIONS(962), 1,
      sym_array_suffix,
    STATE(309), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(960), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11522] = 4,
    ACTIONS(958), 1,
      sym_array_suffix,
    STATE(309), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(965), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11540] = 8,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_integer_literal,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_flow_limit_keyword,
    STATE(122), 1,
      sym_line_end,
    STATE(386), 1,
      sym_limit_clause,
    STATE(482), 1,
      sym_par_clause,
  [11565] = 8,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(967), 1,
      sym_integer_literal,
    ACTIONS(973), 1,
      sym_flow_limit_keyword,
    ACTIONS(975), 1,
      sym_colon,
    STATE(313), 1,
      sym_callee,
    STATE(451), 1,
      sym_limit_clause,
    STATE(541), 1,
      sym_par_clause,
  [11590] = 8,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_integer_literal,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(971), 1,
      sym_flow_limit_keyword,
    STATE(153), 1,
      sym_line_end,
    STATE(377), 1,
      sym_limit_clause,
    STATE(430), 1,
      sym_par_clause,
  [11615] = 6,
    ACTIONS(979), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(273), 1,
      sym_struct_body,
    STATE(512), 1,
      sym_field_name,
    ACTIONS(977), 2,
      sym_blank_line,
      sym_doc_comment,
    STATE(221), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11636] = 8,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_colon,
    STATE(135), 1,
      sym_line_end,
    STATE(374), 1,
      sym_callee,
    STATE(421), 1,
      sym_par_clause,
  [11661] = 7,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(127), 1,
      sym_condition,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(124), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11684] = 8,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(991), 1,
      sym_colon,
    STATE(78), 1,
      sym_line_end,
    STATE(381), 1,
      sym_callee,
    STATE(414), 1,
      sym_par_clause,
  [11709] = 8,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(993), 1,
      sym_colon,
    STATE(79), 1,
      sym_line_end,
    STATE(382), 1,
      sym_callee,
    STATE(420), 1,
      sym_par_clause,
  [11734] = 8,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(967), 1,
      sym_integer_literal,
    ACTIONS(973), 1,
      sym_flow_limit_keyword,
    ACTIONS(995), 1,
      sym_colon,
    STATE(311), 1,
      sym_callee,
    STATE(491), 1,
      sym_limit_clause,
    STATE(587), 1,
      sym_par_clause,
  [11759] = 8,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(944), 1,
      sym_flow_par_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(997), 1,
      sym_colon,
    STATE(136), 1,
      sym_line_end,
    STATE(373), 1,
      sym_callee,
    STATE(415), 1,
      sym_par_clause,
  [11784] = 7,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(97), 1,
      sym_condition,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(123), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11807] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(152), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11827] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(1001), 1,
      sym_text_line,
    STATE(212), 1,
      sym__nested_text_block,
    STATE(387), 1,
      sym_line_end,
    STATE(211), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11847] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_text_line,
    STATE(270), 1,
      sym_text_block,
    STATE(272), 1,
      sym_text_inline,
    STATE(290), 1,
      sym_instruct_body,
    STATE(379), 1,
      sym_line_end,
  [11869] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(166), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11889] = 1,
    ACTIONS(1005), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11899] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(168), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11919] = 1,
    ACTIONS(1007), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11929] = 1,
    ACTIONS(1009), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11939] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(170), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11959] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(162), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11979] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(126), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11999] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_text_line,
    STATE(264), 1,
      sym_context_body,
    STATE(265), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(379), 1,
      sym_line_end,
  [12021] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(141), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12041] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(128), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12061] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(130), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12081] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(144), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12101] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(148), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12121] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(154), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12141] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_text_line,
    STATE(256), 1,
      sym_instruct_body,
    STATE(270), 1,
      sym_text_block,
    STATE(272), 1,
      sym_text_inline,
    STATE(379), 1,
      sym_line_end,
  [12163] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(163), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12183] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12203] = 1,
    ACTIONS(1011), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12213] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(109), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12233] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(112), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12253] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(115), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12273] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12293] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(121), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12313] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(156), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12333] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(96), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12353] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(74), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12373] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_text_line,
    STATE(265), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(289), 1,
      sym_context_body,
    STATE(379), 1,
      sym_line_end,
  [12395] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(85), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12415] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(86), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12435] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(87), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12455] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(89), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12475] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(91), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12495] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(93), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12515] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(95), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12535] = 1,
    ACTIONS(1013), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12545] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(101), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12565] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(999), 1,
      sym_text_line,
    STATE(106), 1,
      sym__nested_text_block,
    STATE(389), 1,
      sym_line_end,
    STATE(103), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12585] = 6,
    ACTIONS(985), 1,
      sym_newline,
    ACTIONS(987), 1,
      sym_inline_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(140), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(164), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12605] = 1,
    ACTIONS(1015), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12615] = 6,
    ACTIONS(1017), 1,
      sym_arrow,
    ACTIONS(1019), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_lparen,
    ACTIONS(1023), 1,
      sym_snake_name,
    STATE(406), 1,
      sym_flow_name,
    STATE(507), 1,
      sym_params,
  [12634] = 1,
    ACTIONS(1025), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [12643] = 6,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1027), 1,
      sym_colon,
    STATE(417), 1,
      sym_callee,
    STATE(437), 1,
      sym_callees,
    STATE(555), 1,
      sym_to_clause,
  [12662] = 5,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      sym_flow_until_keyword,
    ACTIONS(1031), 1,
      sym_colon,
    STATE(158), 2,
      sym_line_end,
      sym_until_clause,
  [12679] = 6,
    ACTIONS(1021), 1,
      sym_lparen,
    ACTIONS(1033), 1,
      sym_arrow,
    ACTIONS(1035), 1,
      sym_colon,
    ACTIONS(1037), 1,
      sym_snake_name,
    STATE(396), 1,
      sym_thunk_name,
    STATE(515), 1,
      sym_params,
  [12698] = 5,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(1039), 1,
      sym_flow_until_keyword,
    ACTIONS(1041), 1,
      sym_colon,
    STATE(76), 2,
      sym_line_end,
      sym_until_clause,
  [12715] = 6,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1043), 1,
      sym_colon,
    STATE(417), 1,
      sym_callee,
    STATE(468), 1,
      sym_callees,
    STATE(533), 1,
      sym_to_clause,
  [12734] = 5,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(155), 1,
      sym_line_end,
    STATE(433), 1,
      sym_par_clause,
  [12750] = 5,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(151), 1,
      sym_line_end,
    STATE(428), 1,
      sym_par_clause,
  [12766] = 5,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(149), 1,
      sym_line_end,
    STATE(426), 1,
      sym_par_clause,
  [12782] = 4,
    ACTIONS(584), 1,
      sym_indented_raw_text,
    ACTIONS(1045), 1,
      sym_blank_line,
    STATE(207), 1,
      sym_text_body,
    STATE(173), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12796] = 5,
    ACTIONS(1039), 1,
      sym_flow_until_keyword,
    ACTIONS(1047), 1,
      sym_integer_literal,
    ACTIONS(1049), 1,
      sym_colon,
    STATE(81), 1,
      sym_until_clause,
    STATE(370), 1,
      sym_times_clause,
  [12812] = 5,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(169), 1,
      sym_line_end,
    STATE(457), 1,
      sym_par_clause,
  [12828] = 5,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1051), 1,
      sym_colon,
    STATE(455), 1,
      sym_callee,
    STATE(562), 1,
      sym_to_clause,
  [12844] = 4,
    ACTIONS(576), 1,
      sym_indented_raw_text,
    ACTIONS(1053), 1,
      sym_blank_line,
    STATE(288), 1,
      sym_text_body,
    STATE(223), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12858] = 5,
    ACTIONS(1029), 1,
      sym_flow_until_keyword,
    ACTIONS(1047), 1,
      sym_integer_literal,
    ACTIONS(1055), 1,
      sym_colon,
    STATE(139), 1,
      sym_until_clause,
    STATE(368), 1,
      sym_times_clause,
  [12874] = 5,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(116), 1,
      sym_line_end,
    STATE(480), 1,
      sym_par_clause,
  [12890] = 5,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(120), 1,
      sym_line_end,
    STATE(481), 1,
      sym_par_clause,
  [12906] = 5,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(73), 1,
      sym_line_end,
    STATE(484), 1,
      sym_par_clause,
  [12922] = 2,
    ACTIONS(1059), 1,
      sym_flow_times_keyword,
    ACTIONS(1057), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12932] = 5,
    ACTIONS(1061), 1,
      sym_blank_line,
    ACTIONS(1063), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(83), 1,
      sym__nested_text_body_line,
    STATE(146), 1,
      sym__nested_text_body,
  [12948] = 5,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    STATE(92), 1,
      sym_line_end,
    STATE(487), 1,
      sym_par_clause,
  [12964] = 5,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1067), 1,
      sym__nested_indented_raw_text,
    STATE(182), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(196), 1,
      sym__nested_text_body_line,
    STATE(206), 1,
      sym__nested_text_body,
  [12980] = 5,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1069), 1,
      sym_colon,
    STATE(441), 1,
      sym_callee,
    STATE(540), 1,
      sym_to_clause,
  [12996] = 5,
    ACTIONS(1071), 1,
      sym_blank_line,
    ACTIONS(1073), 1,
      sym__nested_indented_raw_text,
    STATE(44), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(71), 1,
      sym__nested_text_body_line,
    STATE(72), 1,
      sym__nested_text_body,
  [13012] = 5,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1075), 1,
      sym_colon,
    STATE(470), 1,
      sym_callee,
    STATE(586), 1,
      sym_to_clause,
  [13028] = 5,
    ACTIONS(942), 1,
      sym_flow_to_keyword,
    ACTIONS(948), 1,
      sym_snake_name,
    ACTIONS(1077), 1,
      sym_colon,
    STATE(475), 1,
      sym_callee,
    STATE(590), 1,
      sym_to_clause,
  [13044] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(1079), 1,
      sym_colon,
    STATE(73), 1,
      sym_line_end,
  [13057] = 2,
    STATE(521), 1,
      sym_directive_op,
    ACTIONS(1081), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13066] = 2,
    STATE(486), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13075] = 1,
    ACTIONS(1085), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13082] = 4,
    ACTIONS(1021), 1,
      sym_lparen,
    ACTIONS(1087), 1,
      sym_arrow,
    ACTIONS(1089), 1,
      sym_colon,
    STATE(503), 1,
      sym_params,
  [13095] = 3,
    ACTIONS(1093), 1,
      sym_comma,
    STATE(397), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1091), 2,
      sym_newline,
      sym_inline_comment,
  [13106] = 1,
    ACTIONS(1096), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [13113] = 1,
    ACTIONS(1098), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13120] = 3,
    ACTIONS(1100), 1,
      sym_optional_marker,
    ACTIONS(1102), 1,
      sym_colon,
    ACTIONS(1104), 2,
      sym_rparen,
      sym_comma,
  [13131] = 3,
    ACTIONS(1108), 1,
      sym_comma,
    STATE(402), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1106), 2,
      sym_newline,
      sym_inline_comment,
  [13142] = 3,
    ACTIONS(1108), 1,
      sym_comma,
    STATE(397), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1110), 2,
      sym_newline,
      sym_inline_comment,
  [13153] = 3,
    ACTIONS(1114), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1112), 2,
      sym_newline,
      sym_inline_comment,
  [13164] = 2,
    ACTIONS(283), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      sym_blank_line,
      sym_doc_comment,
      sym_snake_name,
  [13173] = 2,
    ACTIONS(297), 1,
      sym_line_comment,
    ACTIONS(295), 3,
      sym_blank_line,
      sym_doc_comment,
      sym_snake_name,
  [13182] = 4,
    ACTIONS(1021), 1,
      sym_lparen,
    ACTIONS(1117), 1,
      sym_arrow,
    ACTIONS(1119), 1,
      sym_colon,
    STATE(500), 1,
      sym_params,
  [13195] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
    STATE(266), 1,
      sym_job_body,
  [13208] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(185), 1,
      sym_line_end,
    STATE(279), 1,
      sym_cap_body,
  [13221] = 4,
    ACTIONS(1125), 1,
      sym_rparen,
    ACTIONS(1127), 1,
      sym_snake_name,
    STATE(400), 1,
      sym_param_name,
    STATE(447), 1,
      sym_param,
  [13234] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
    STATE(267), 1,
      sym_job_body,
  [13247] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(185), 1,
      sym_line_end,
    STATE(280), 1,
      sym_cap_body,
  [13260] = 4,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(1129), 1,
      sym_colon,
    STATE(155), 1,
      sym_line_end,
  [13273] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(185), 1,
      sym_line_end,
    STATE(277), 1,
      sym_cap_body,
  [13286] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(1131), 1,
      sym_colon,
    STATE(116), 1,
      sym_line_end,
  [13299] = 4,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(1133), 1,
      sym_colon,
    STATE(151), 1,
      sym_line_end,
  [13312] = 2,
    STATE(483), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13321] = 3,
    ACTIONS(1137), 1,
      sym_comma,
    STATE(418), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13332] = 3,
    ACTIONS(1137), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13343] = 4,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(185), 1,
      sym_line_end,
    STATE(278), 1,
      sym_cap_body,
  [13356] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    ACTIONS(1141), 1,
      sym_colon,
    STATE(120), 1,
      sym_line_end,
  [13369] = 4,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    ACTIONS(1143), 1,
      sym_colon,
    STATE(149), 1,
      sym_line_end,
  [13382] = 1,
    ACTIONS(1145), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [13389] = 2,
    STATE(527), 1,
      sym_directive_op,
    ACTIONS(1081), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13398] = 1,
    ACTIONS(1147), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13404] = 1,
    ACTIONS(1149), 3,
      sym_newline,
      sym_inline_comment,
      sym_colon,
  [13410] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(165), 1,
      sym_line_end,
  [13420] = 3,
    ACTIONS(1151), 1,
      sym_rparen,
    ACTIONS(1153), 1,
      sym_comma,
    STATE(427), 1,
      aux_sym_params_repeat1,
  [13430] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(167), 1,
      sym_line_end,
  [13440] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [13450] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
  [13460] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [13470] = 3,
    ACTIONS(1160), 1,
      sym_colon,
    ACTIONS(1162), 1,
      sym_snake_name,
    STATE(566), 1,
      sym_context_name,
  [13480] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
  [13490] = 3,
    ACTIONS(1127), 1,
      sym_snake_name,
    STATE(400), 1,
      sym_param_name,
    STATE(532), 1,
      sym_param,
  [13500] = 3,
    ACTIONS(1164), 1,
      sym_rparen,
    ACTIONS(1166), 1,
      sym_comma,
    STATE(427), 1,
      aux_sym_params_repeat1,
  [13510] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [13520] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [13530] = 2,
    ACTIONS(1172), 1,
      sym_colon,
    ACTIONS(1174), 2,
      sym_rparen,
      sym_comma,
  [13538] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(143), 1,
      sym_line_end,
  [13548] = 3,
    ACTIONS(1176), 1,
      sym_colon,
    ACTIONS(1178), 1,
      sym_snake_name,
    STATE(542), 1,
      sym_instruct_name,
  [13558] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(147), 1,
      sym_line_end,
  [13568] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [13578] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
  [13588] = 3,
    ACTIONS(1180), 1,
      sym_newline,
    ACTIONS(1182), 1,
      sym_inline_comment,
    STATE(251), 1,
      sym_line_end,
  [13598] = 3,
    ACTIONS(1121), 1,
      sym_newline,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(249), 1,
      sym_line_end,
  [13608] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [13618] = 3,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1184), 1,
      sym_rparen,
    STATE(435), 1,
      aux_sym_params_repeat1,
  [13628] = 1,
    ACTIONS(1186), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13634] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
  [13644] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [13654] = 3,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(1188), 1,
      sym_colon,
    STATE(536), 1,
      sym_par_clause,
  [13664] = 3,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(1129), 1,
      sym_colon,
    STATE(583), 1,
      sym_par_clause,
  [13674] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [13684] = 1,
    ACTIONS(1112), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13690] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_line_end,
  [13700] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13710] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
  [13720] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [13730] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13740] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13750] = 3,
    ACTIONS(1190), 1,
      sym_pascal_name,
    STATE(544), 1,
      sym_struct_name,
    STATE(582), 1,
      sym_type_name,
  [13760] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [13770] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13780] = 3,
    ACTIONS(1192), 1,
      sym_newline,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(205), 1,
      sym_line_end,
  [13790] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
  [13800] = 3,
    ACTIONS(1180), 1,
      sym_newline,
    ACTIONS(1182), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
  [13810] = 1,
    ACTIONS(1091), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13816] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
  [13826] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
  [13836] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [13846] = 3,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1198), 1,
      sym_inline_comment,
    STATE(276), 1,
      sym_line_end,
  [13856] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [13866] = 3,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(314), 1,
      sym_line_end,
  [13876] = 3,
    ACTIONS(1204), 1,
      sym_newline,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_line_end,
  [13886] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [13896] = 3,
    ACTIONS(1208), 1,
      sym_newline,
    ACTIONS(1210), 1,
      sym_inline_comment,
    STATE(215), 1,
      sym_line_end,
  [13906] = 3,
    ACTIONS(938), 1,
      sym_newline,
    ACTIONS(940), 1,
      sym_inline_comment,
    STATE(145), 1,
      sym_line_end,
  [13916] = 3,
    ACTIONS(1192), 1,
      sym_newline,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(201), 1,
      sym_line_end,
  [13926] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
  [13936] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(88), 1,
      sym_line_end,
  [13946] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
  [13956] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [13966] = 3,
    ACTIONS(1192), 1,
      sym_newline,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(213), 1,
      sym_line_end,
  [13976] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [13986] = 3,
    ACTIONS(1156), 1,
      sym_newline,
    ACTIONS(1158), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
  [13996] = 3,
    ACTIONS(1192), 1,
      sym_newline,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(214), 1,
      sym_line_end,
  [14006] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(102), 1,
      sym_line_end,
  [14016] = 3,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1198), 1,
      sym_inline_comment,
    STATE(286), 1,
      sym_line_end,
  [14026] = 3,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(952), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
  [14036] = 1,
    ACTIONS(1212), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14042] = 3,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(1214), 1,
      sym_colon,
    STATE(592), 1,
      sym_par_clause,
  [14052] = 3,
    ACTIONS(969), 1,
      sym_flow_par_keyword,
    ACTIONS(1079), 1,
      sym_colon,
    STATE(593), 1,
      sym_par_clause,
  [14062] = 3,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1198), 1,
      sym_inline_comment,
    STATE(274), 1,
      sym_line_end,
  [14072] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [14082] = 3,
    ACTIONS(1168), 1,
      sym_newline,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [14092] = 1,
    ACTIONS(1216), 2,
      sym_newline,
      sym_inline_comment,
  [14097] = 2,
    ACTIONS(295), 1,
      sym__nested_indented_raw_text,
    ACTIONS(297), 1,
      sym_blank_line,
  [14104] = 1,
    ACTIONS(1218), 2,
      sym_newline,
      sym_inline_comment,
  [14109] = 2,
    ACTIONS(1220), 1,
      anon_sym_EQ,
    STATE(524), 1,
      sym_assign_operator,
  [14116] = 2,
    ACTIONS(1222), 1,
      sym_arrow,
    ACTIONS(1224), 1,
      sym_colon,
  [14123] = 2,
    ACTIONS(1226), 1,
      sym__snake_kebab_name,
    STATE(585), 1,
      sym_cap_name,
  [14130] = 2,
    ACTIONS(1228), 1,
      sym_text_line,
    STATE(471), 1,
      sym_cap_ref,
  [14137] = 2,
    ACTIONS(1230), 1,
      sym_arrow,
    ACTIONS(1232), 1,
      sym_colon,
  [14144] = 2,
    ACTIONS(1234), 1,
      sym_snake_name,
    STATE(439), 1,
      sym_agent,
  [14151] = 2,
    ACTIONS(1226), 1,
      sym__snake_kebab_name,
    STATE(569), 1,
      sym_cap_name,
  [14158] = 2,
    ACTIONS(1236), 1,
      sym__snake_kebab_name,
    STATE(584), 1,
      sym_job_name,
  [14165] = 2,
    ACTIONS(1238), 1,
      sym_arrow,
    ACTIONS(1240), 1,
      sym_colon,
  [14172] = 2,
    ACTIONS(1242), 1,
      sym_indented_raw_text,
    STATE(159), 1,
      sym_text_body_line,
  [14179] = 1,
    ACTIONS(283), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14184] = 1,
    ACTIONS(1244), 2,
      sym_newline,
      sym_inline_comment,
  [14189] = 1,
    ACTIONS(297), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14194] = 2,
    ACTIONS(1246), 1,
      sym_optional_marker,
    ACTIONS(1248), 1,
      sym_colon,
  [14201] = 1,
    ACTIONS(1250), 2,
      sym_rparen,
      sym_comma,
  [14206] = 2,
    ACTIONS(1226), 1,
      sym__snake_kebab_name,
    STATE(558), 1,
      sym_cap_name,
  [14213] = 2,
    ACTIONS(1252), 1,
      sym_arrow,
    ACTIONS(1254), 1,
      sym_colon,
  [14220] = 2,
    ACTIONS(1226), 1,
      sym__snake_kebab_name,
    STATE(596), 1,
      sym_cap_name,
  [14227] = 1,
    ACTIONS(1256), 2,
      sym_rparen,
      sym_comma,
  [14232] = 1,
    ACTIONS(1258), 2,
      sym_arrow,
      sym_colon,
  [14237] = 1,
    ACTIONS(1260), 2,
      sym_arrow,
      sym_colon,
  [14242] = 2,
    ACTIONS(1262), 1,
      sym_indented_raw_text,
    STATE(77), 1,
      sym_text_body_line,
  [14249] = 2,
    ACTIONS(1264), 1,
      sym_directive_value,
    STATE(474), 1,
      sym_directive_csv,
  [14256] = 1,
    ACTIONS(1266), 2,
      sym_arrow,
      sym_colon,
  [14261] = 1,
    ACTIONS(1268), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14266] = 2,
    ACTIONS(1270), 1,
      sym_text_line,
    STATE(445), 1,
      sym_property_value,
  [14273] = 2,
    ACTIONS(1234), 1,
      sym_snake_name,
    STATE(469), 1,
      sym_agent,
  [14280] = 2,
    ACTIONS(1272), 1,
      sym_snake_name,
    STATE(454), 1,
      sym_callee,
  [14287] = 2,
    ACTIONS(1264), 1,
      sym_directive_value,
    STATE(476), 1,
      sym_directive_csv,
  [14294] = 1,
    ACTIONS(1274), 2,
      sym_newline,
      sym_inline_comment,
  [14299] = 2,
    ACTIONS(1236), 1,
      sym__snake_kebab_name,
    STATE(588), 1,
      sym_job_name,
  [14306] = 2,
    ACTIONS(281), 1,
      sym__nested_indented_raw_text,
    ACTIONS(283), 1,
      sym_blank_line,
  [14313] = 1,
    ACTIONS(1276), 2,
      sym_optional_marker,
      sym_colon,
  [14318] = 1,
    ACTIONS(1278), 2,
      sym_rparen,
      sym_comma,
  [14323] = 1,
    ACTIONS(1280), 1,
      sym_colon,
  [14327] = 1,
    ACTIONS(1282), 1,
      sym_cap_kind,
  [14331] = 1,
    ACTIONS(1284), 1,
      anon_sym_EQ,
  [14335] = 1,
    ACTIONS(1286), 1,
      sym_colon,
  [14339] = 1,
    ACTIONS(1288), 1,
      sym_colon,
  [14343] = 1,
    ACTIONS(1290), 1,
      sym_newline,
  [14347] = 1,
    ACTIONS(1292), 1,
      sym_integer_literal,
  [14351] = 1,
    ACTIONS(1294), 1,
      sym_colon,
  [14355] = 1,
    ACTIONS(1188), 1,
      sym_colon,
  [14359] = 1,
    ACTIONS(1296), 1,
      sym_colon,
  [14363] = 1,
    ACTIONS(1298), 1,
      sym_integer_literal,
  [14367] = 1,
    ACTIONS(1300), 1,
      sym_colon,
  [14371] = 1,
    ACTIONS(1302), 1,
      sym_colon,
  [14375] = 1,
    ACTIONS(1304), 1,
      sym_newline,
  [14379] = 1,
    ACTIONS(1306), 1,
      sym_colon,
  [14383] = 1,
    ACTIONS(1308), 1,
      ts_builtin_sym_end,
  [14387] = 1,
    ACTIONS(1310), 1,
      sym_newline,
  [14391] = 1,
    ACTIONS(1312), 1,
      sym_colon,
  [14395] = 1,
    ACTIONS(1314), 1,
      sym_colon,
  [14399] = 1,
    ACTIONS(1316), 1,
      sym_colon,
  [14403] = 1,
    ACTIONS(1318), 1,
      sym_colon,
  [14407] = 1,
    ACTIONS(1320), 1,
      sym_colon,
  [14411] = 1,
    ACTIONS(1322), 1,
      sym_colon,
  [14415] = 1,
    ACTIONS(1324), 1,
      sym_newline,
  [14419] = 1,
    ACTIONS(1326), 1,
      sym_newline,
  [14423] = 1,
    ACTIONS(1328), 1,
      sym_colon,
  [14427] = 1,
    ACTIONS(1330), 1,
      sym_colon,
  [14431] = 1,
    ACTIONS(1332), 1,
      sym_directive_value,
  [14435] = 1,
    ACTIONS(1334), 1,
      sym_colon,
  [14439] = 1,
    ACTIONS(1336), 1,
      sym_colon,
  [14443] = 1,
    ACTIONS(1338), 1,
      sym_newline,
  [14447] = 1,
    ACTIONS(1340), 1,
      sym_newline,
  [14451] = 1,
    ACTIONS(1342), 1,
      sym_text_line,
  [14455] = 1,
    ACTIONS(1344), 1,
      sym_colon,
  [14459] = 1,
    ACTIONS(1346), 1,
      sym_newline,
  [14463] = 1,
    ACTIONS(1348), 1,
      sym_newline,
  [14467] = 1,
    ACTIONS(1350), 1,
      sym_colon,
  [14471] = 1,
    ACTIONS(1352), 1,
      sym_newline,
  [14475] = 1,
    ACTIONS(1354), 1,
      sym_newline,
  [14479] = 1,
    ACTIONS(1356), 1,
      sym_newline,
  [14483] = 1,
    ACTIONS(1358), 1,
      sym_newline,
  [14487] = 1,
    ACTIONS(1360), 1,
      sym_newline,
  [14491] = 1,
    ACTIONS(1362), 1,
      sym_newline,
  [14495] = 1,
    ACTIONS(1364), 1,
      sym_newline,
  [14499] = 1,
    ACTIONS(1366), 1,
      sym_newline,
  [14503] = 1,
    ACTIONS(1368), 1,
      sym_newline,
  [14507] = 1,
    ACTIONS(1370), 1,
      sym_colon,
  [14511] = 1,
    ACTIONS(1372), 1,
      sym_colon,
  [14515] = 1,
    ACTIONS(1374), 1,
      sym_colon,
  [14519] = 1,
    ACTIONS(1376), 1,
      sym_colon,
  [14523] = 1,
    ACTIONS(1378), 1,
      sym_colon,
  [14527] = 1,
    ACTIONS(1380), 1,
      sym_colon,
  [14531] = 1,
    ACTIONS(1382), 1,
      sym_colon,
  [14535] = 1,
    ACTIONS(1384), 1,
      sym_colon,
  [14539] = 1,
    ACTIONS(1214), 1,
      sym_colon,
  [14543] = 1,
    ACTIONS(1386), 1,
      sym_colon,
  [14547] = 1,
    ACTIONS(1388), 1,
      sym_directive_value,
  [14551] = 1,
    ACTIONS(1390), 1,
      sym_colon,
  [14555] = 1,
    ACTIONS(1392), 1,
      sym_colon,
  [14559] = 1,
    ACTIONS(1394), 1,
      sym_colon,
  [14563] = 1,
    ACTIONS(1396), 1,
      sym_colon,
  [14567] = 1,
    ACTIONS(1398), 1,
      sym_colon,
  [14571] = 1,
    ACTIONS(1400), 1,
      sym_colon,
  [14575] = 1,
    ACTIONS(1402), 1,
      sym_colon,
  [14579] = 1,
    ACTIONS(1404), 1,
      sym_colon,
  [14583] = 1,
    ACTIONS(1406), 1,
      sym_newline,
  [14587] = 1,
    ACTIONS(1408), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 276,
  [SMALL_STATE(6)] = 368,
  [SMALL_STATE(7)] = 460,
  [SMALL_STATE(8)] = 552,
  [SMALL_STATE(9)] = 644,
  [SMALL_STATE(10)] = 736,
  [SMALL_STATE(11)] = 828,
  [SMALL_STATE(12)] = 920,
  [SMALL_STATE(13)] = 1012,
  [SMALL_STATE(14)] = 1104,
  [SMALL_STATE(15)] = 1193,
  [SMALL_STATE(16)] = 1272,
  [SMALL_STATE(17)] = 1351,
  [SMALL_STATE(18)] = 1430,
  [SMALL_STATE(19)] = 1519,
  [SMALL_STATE(20)] = 1597,
  [SMALL_STATE(21)] = 1675,
  [SMALL_STATE(22)] = 1753,
  [SMALL_STATE(23)] = 1837,
  [SMALL_STATE(24)] = 1921,
  [SMALL_STATE(25)] = 2005,
  [SMALL_STATE(26)] = 2089,
  [SMALL_STATE(27)] = 2173,
  [SMALL_STATE(28)] = 2257,
  [SMALL_STATE(29)] = 2341,
  [SMALL_STATE(30)] = 2425,
  [SMALL_STATE(31)] = 2506,
  [SMALL_STATE(32)] = 2554,
  [SMALL_STATE(33)] = 2602,
  [SMALL_STATE(34)] = 2650,
  [SMALL_STATE(35)] = 2723,
  [SMALL_STATE(36)] = 2796,
  [SMALL_STATE(37)] = 2863,
  [SMALL_STATE(38)] = 2930,
  [SMALL_STATE(39)] = 2990,
  [SMALL_STATE(40)] = 3050,
  [SMALL_STATE(41)] = 3086,
  [SMALL_STATE(42)] = 3122,
  [SMALL_STATE(43)] = 3166,
  [SMALL_STATE(44)] = 3202,
  [SMALL_STATE(45)] = 3246,
  [SMALL_STATE(46)] = 3306,
  [SMALL_STATE(47)] = 3345,
  [SMALL_STATE(48)] = 3400,
  [SMALL_STATE(49)] = 3441,
  [SMALL_STATE(50)] = 3482,
  [SMALL_STATE(51)] = 3521,
  [SMALL_STATE(52)] = 3560,
  [SMALL_STATE(53)] = 3601,
  [SMALL_STATE(54)] = 3640,
  [SMALL_STATE(55)] = 3679,
  [SMALL_STATE(56)] = 3722,
  [SMALL_STATE(57)] = 3761,
  [SMALL_STATE(58)] = 3800,
  [SMALL_STATE(59)] = 3843,
  [SMALL_STATE(60)] = 3898,
  [SMALL_STATE(61)] = 3953,
  [SMALL_STATE(62)] = 3991,
  [SMALL_STATE(63)] = 4029,
  [SMALL_STATE(64)] = 4063,
  [SMALL_STATE(65)] = 4103,
  [SMALL_STATE(66)] = 4141,
  [SMALL_STATE(67)] = 4181,
  [SMALL_STATE(68)] = 4219,
  [SMALL_STATE(69)] = 4257,
  [SMALL_STATE(70)] = 4295,
  [SMALL_STATE(71)] = 4335,
  [SMALL_STATE(72)] = 4369,
  [SMALL_STATE(73)] = 4402,
  [SMALL_STATE(74)] = 4435,
  [SMALL_STATE(75)] = 4468,
  [SMALL_STATE(76)] = 4501,
  [SMALL_STATE(77)] = 4534,
  [SMALL_STATE(78)] = 4567,
  [SMALL_STATE(79)] = 4600,
  [SMALL_STATE(80)] = 4633,
  [SMALL_STATE(81)] = 4666,
  [SMALL_STATE(82)] = 4699,
  [SMALL_STATE(83)] = 4736,
  [SMALL_STATE(84)] = 4769,
  [SMALL_STATE(85)] = 4806,
  [SMALL_STATE(86)] = 4839,
  [SMALL_STATE(87)] = 4872,
  [SMALL_STATE(88)] = 4905,
  [SMALL_STATE(89)] = 4938,
  [SMALL_STATE(90)] = 4971,
  [SMALL_STATE(91)] = 5004,
  [SMALL_STATE(92)] = 5037,
  [SMALL_STATE(93)] = 5070,
  [SMALL_STATE(94)] = 5103,
  [SMALL_STATE(95)] = 5136,
  [SMALL_STATE(96)] = 5169,
  [SMALL_STATE(97)] = 5202,
  [SMALL_STATE(98)] = 5235,
  [SMALL_STATE(99)] = 5268,
  [SMALL_STATE(100)] = 5301,
  [SMALL_STATE(101)] = 5334,
  [SMALL_STATE(102)] = 5367,
  [SMALL_STATE(103)] = 5400,
  [SMALL_STATE(104)] = 5433,
  [SMALL_STATE(105)] = 5466,
  [SMALL_STATE(106)] = 5499,
  [SMALL_STATE(107)] = 5532,
  [SMALL_STATE(108)] = 5565,
  [SMALL_STATE(109)] = 5598,
  [SMALL_STATE(110)] = 5631,
  [SMALL_STATE(111)] = 5664,
  [SMALL_STATE(112)] = 5697,
  [SMALL_STATE(113)] = 5730,
  [SMALL_STATE(114)] = 5763,
  [SMALL_STATE(115)] = 5796,
  [SMALL_STATE(116)] = 5829,
  [SMALL_STATE(117)] = 5862,
  [SMALL_STATE(118)] = 5895,
  [SMALL_STATE(119)] = 5928,
  [SMALL_STATE(120)] = 5961,
  [SMALL_STATE(121)] = 5994,
  [SMALL_STATE(122)] = 6027,
  [SMALL_STATE(123)] = 6060,
  [SMALL_STATE(124)] = 6093,
  [SMALL_STATE(125)] = 6125,
  [SMALL_STATE(126)] = 6157,
  [SMALL_STATE(127)] = 6189,
  [SMALL_STATE(128)] = 6221,
  [SMALL_STATE(129)] = 6253,
  [SMALL_STATE(130)] = 6285,
  [SMALL_STATE(131)] = 6317,
  [SMALL_STATE(132)] = 6349,
  [SMALL_STATE(133)] = 6381,
  [SMALL_STATE(134)] = 6413,
  [SMALL_STATE(135)] = 6445,
  [SMALL_STATE(136)] = 6477,
  [SMALL_STATE(137)] = 6509,
  [SMALL_STATE(138)] = 6541,
  [SMALL_STATE(139)] = 6573,
  [SMALL_STATE(140)] = 6605,
  [SMALL_STATE(141)] = 6637,
  [SMALL_STATE(142)] = 6669,
  [SMALL_STATE(143)] = 6701,
  [SMALL_STATE(144)] = 6733,
  [SMALL_STATE(145)] = 6765,
  [SMALL_STATE(146)] = 6797,
  [SMALL_STATE(147)] = 6829,
  [SMALL_STATE(148)] = 6861,
  [SMALL_STATE(149)] = 6893,
  [SMALL_STATE(150)] = 6925,
  [SMALL_STATE(151)] = 6957,
  [SMALL_STATE(152)] = 6989,
  [SMALL_STATE(153)] = 7021,
  [SMALL_STATE(154)] = 7053,
  [SMALL_STATE(155)] = 7085,
  [SMALL_STATE(156)] = 7117,
  [SMALL_STATE(157)] = 7149,
  [SMALL_STATE(158)] = 7181,
  [SMALL_STATE(159)] = 7213,
  [SMALL_STATE(160)] = 7245,
  [SMALL_STATE(161)] = 7277,
  [SMALL_STATE(162)] = 7309,
  [SMALL_STATE(163)] = 7341,
  [SMALL_STATE(164)] = 7373,
  [SMALL_STATE(165)] = 7405,
  [SMALL_STATE(166)] = 7437,
  [SMALL_STATE(167)] = 7469,
  [SMALL_STATE(168)] = 7501,
  [SMALL_STATE(169)] = 7533,
  [SMALL_STATE(170)] = 7565,
  [SMALL_STATE(171)] = 7597,
  [SMALL_STATE(172)] = 7634,
  [SMALL_STATE(173)] = 7681,
  [SMALL_STATE(174)] = 7718,
  [SMALL_STATE(175)] = 7755,
  [SMALL_STATE(176)] = 7802,
  [SMALL_STATE(177)] = 7841,
  [SMALL_STATE(178)] = 7878,
  [SMALL_STATE(179)] = 7917,
  [SMALL_STATE(180)] = 7956,
  [SMALL_STATE(181)] = 8003,
  [SMALL_STATE(182)] = 8042,
  [SMALL_STATE(183)] = 8081,
  [SMALL_STATE(184)] = 8120,
  [SMALL_STATE(185)] = 8157,
  [SMALL_STATE(186)] = 8204,
  [SMALL_STATE(187)] = 8236,
  [SMALL_STATE(188)] = 8292,
  [SMALL_STATE(189)] = 8326,
  [SMALL_STATE(190)] = 8360,
  [SMALL_STATE(191)] = 8394,
  [SMALL_STATE(192)] = 8428,
  [SMALL_STATE(193)] = 8462,
  [SMALL_STATE(194)] = 8518,
  [SMALL_STATE(195)] = 8574,
  [SMALL_STATE(196)] = 8630,
  [SMALL_STATE(197)] = 8659,
  [SMALL_STATE(198)] = 8688,
  [SMALL_STATE(199)] = 8717,
  [SMALL_STATE(200)] = 8745,
  [SMALL_STATE(201)] = 8775,
  [SMALL_STATE(202)] = 8803,
  [SMALL_STATE(203)] = 8831,
  [SMALL_STATE(204)] = 8857,
  [SMALL_STATE(205)] = 8883,
  [SMALL_STATE(206)] = 8911,
  [SMALL_STATE(207)] = 8939,
  [SMALL_STATE(208)] = 8967,
  [SMALL_STATE(209)] = 9003,
  [SMALL_STATE(210)] = 9031,
  [SMALL_STATE(211)] = 9059,
  [SMALL_STATE(212)] = 9087,
  [SMALL_STATE(213)] = 9115,
  [SMALL_STATE(214)] = 9143,
  [SMALL_STATE(215)] = 9171,
  [SMALL_STATE(216)] = 9196,
  [SMALL_STATE(217)] = 9221,
  [SMALL_STATE(218)] = 9246,
  [SMALL_STATE(219)] = 9270,
  [SMALL_STATE(220)] = 9294,
  [SMALL_STATE(221)] = 9330,
  [SMALL_STATE(222)] = 9366,
  [SMALL_STATE(223)] = 9397,
  [SMALL_STATE(224)] = 9428,
  [SMALL_STATE(225)] = 9456,
  [SMALL_STATE(226)] = 9484,
  [SMALL_STATE(227)] = 9512,
  [SMALL_STATE(228)] = 9540,
  [SMALL_STATE(229)] = 9568,
  [SMALL_STATE(230)] = 9596,
  [SMALL_STATE(231)] = 9620,
  [SMALL_STATE(232)] = 9646,
  [SMALL_STATE(233)] = 9674,
  [SMALL_STATE(234)] = 9702,
  [SMALL_STATE(235)] = 9726,
  [SMALL_STATE(236)] = 9754,
  [SMALL_STATE(237)] = 9782,
  [SMALL_STATE(238)] = 9810,
  [SMALL_STATE(239)] = 9838,
  [SMALL_STATE(240)] = 9866,
  [SMALL_STATE(241)] = 9894,
  [SMALL_STATE(242)] = 9922,
  [SMALL_STATE(243)] = 9950,
  [SMALL_STATE(244)] = 9978,
  [SMALL_STATE(245)] = 10006,
  [SMALL_STATE(246)] = 10034,
  [SMALL_STATE(247)] = 10062,
  [SMALL_STATE(248)] = 10090,
  [SMALL_STATE(249)] = 10118,
  [SMALL_STATE(250)] = 10142,
  [SMALL_STATE(251)] = 10170,
  [SMALL_STATE(252)] = 10193,
  [SMALL_STATE(253)] = 10216,
  [SMALL_STATE(254)] = 10239,
  [SMALL_STATE(255)] = 10262,
  [SMALL_STATE(256)] = 10285,
  [SMALL_STATE(257)] = 10307,
  [SMALL_STATE(258)] = 10329,
  [SMALL_STATE(259)] = 10351,
  [SMALL_STATE(260)] = 10373,
  [SMALL_STATE(261)] = 10395,
  [SMALL_STATE(262)] = 10417,
  [SMALL_STATE(263)] = 10439,
  [SMALL_STATE(264)] = 10461,
  [SMALL_STATE(265)] = 10483,
  [SMALL_STATE(266)] = 10505,
  [SMALL_STATE(267)] = 10527,
  [SMALL_STATE(268)] = 10549,
  [SMALL_STATE(269)] = 10571,
  [SMALL_STATE(270)] = 10593,
  [SMALL_STATE(271)] = 10615,
  [SMALL_STATE(272)] = 10637,
  [SMALL_STATE(273)] = 10659,
  [SMALL_STATE(274)] = 10681,
  [SMALL_STATE(275)] = 10703,
  [SMALL_STATE(276)] = 10725,
  [SMALL_STATE(277)] = 10747,
  [SMALL_STATE(278)] = 10769,
  [SMALL_STATE(279)] = 10791,
  [SMALL_STATE(280)] = 10813,
  [SMALL_STATE(281)] = 10835,
  [SMALL_STATE(282)] = 10857,
  [SMALL_STATE(283)] = 10879,
  [SMALL_STATE(284)] = 10901,
  [SMALL_STATE(285)] = 10923,
  [SMALL_STATE(286)] = 10945,
  [SMALL_STATE(287)] = 10967,
  [SMALL_STATE(288)] = 10989,
  [SMALL_STATE(289)] = 11011,
  [SMALL_STATE(290)] = 11033,
  [SMALL_STATE(291)] = 11055,
  [SMALL_STATE(292)] = 11077,
  [SMALL_STATE(293)] = 11099,
  [SMALL_STATE(294)] = 11124,
  [SMALL_STATE(295)] = 11149,
  [SMALL_STATE(296)] = 11174,
  [SMALL_STATE(297)] = 11199,
  [SMALL_STATE(298)] = 11224,
  [SMALL_STATE(299)] = 11249,
  [SMALL_STATE(300)] = 11274,
  [SMALL_STATE(301)] = 11299,
  [SMALL_STATE(302)] = 11324,
  [SMALL_STATE(303)] = 11349,
  [SMALL_STATE(304)] = 11374,
  [SMALL_STATE(305)] = 11399,
  [SMALL_STATE(306)] = 11424,
  [SMALL_STATE(307)] = 11455,
  [SMALL_STATE(308)] = 11486,
  [SMALL_STATE(309)] = 11504,
  [SMALL_STATE(310)] = 11522,
  [SMALL_STATE(311)] = 11540,
  [SMALL_STATE(312)] = 11565,
  [SMALL_STATE(313)] = 11590,
  [SMALL_STATE(314)] = 11615,
  [SMALL_STATE(315)] = 11636,
  [SMALL_STATE(316)] = 11661,
  [SMALL_STATE(317)] = 11684,
  [SMALL_STATE(318)] = 11709,
  [SMALL_STATE(319)] = 11734,
  [SMALL_STATE(320)] = 11759,
  [SMALL_STATE(321)] = 11784,
  [SMALL_STATE(322)] = 11807,
  [SMALL_STATE(323)] = 11827,
  [SMALL_STATE(324)] = 11847,
  [SMALL_STATE(325)] = 11869,
  [SMALL_STATE(326)] = 11889,
  [SMALL_STATE(327)] = 11899,
  [SMALL_STATE(328)] = 11919,
  [SMALL_STATE(329)] = 11929,
  [SMALL_STATE(330)] = 11939,
  [SMALL_STATE(331)] = 11959,
  [SMALL_STATE(332)] = 11979,
  [SMALL_STATE(333)] = 11999,
  [SMALL_STATE(334)] = 12021,
  [SMALL_STATE(335)] = 12041,
  [SMALL_STATE(336)] = 12061,
  [SMALL_STATE(337)] = 12081,
  [SMALL_STATE(338)] = 12101,
  [SMALL_STATE(339)] = 12121,
  [SMALL_STATE(340)] = 12141,
  [SMALL_STATE(341)] = 12163,
  [SMALL_STATE(342)] = 12183,
  [SMALL_STATE(343)] = 12203,
  [SMALL_STATE(344)] = 12213,
  [SMALL_STATE(345)] = 12233,
  [SMALL_STATE(346)] = 12253,
  [SMALL_STATE(347)] = 12273,
  [SMALL_STATE(348)] = 12293,
  [SMALL_STATE(349)] = 12313,
  [SMALL_STATE(350)] = 12333,
  [SMALL_STATE(351)] = 12353,
  [SMALL_STATE(352)] = 12373,
  [SMALL_STATE(353)] = 12395,
  [SMALL_STATE(354)] = 12415,
  [SMALL_STATE(355)] = 12435,
  [SMALL_STATE(356)] = 12455,
  [SMALL_STATE(357)] = 12475,
  [SMALL_STATE(358)] = 12495,
  [SMALL_STATE(359)] = 12515,
  [SMALL_STATE(360)] = 12535,
  [SMALL_STATE(361)] = 12545,
  [SMALL_STATE(362)] = 12565,
  [SMALL_STATE(363)] = 12585,
  [SMALL_STATE(364)] = 12605,
  [SMALL_STATE(365)] = 12615,
  [SMALL_STATE(366)] = 12634,
  [SMALL_STATE(367)] = 12643,
  [SMALL_STATE(368)] = 12662,
  [SMALL_STATE(369)] = 12679,
  [SMALL_STATE(370)] = 12698,
  [SMALL_STATE(371)] = 12715,
  [SMALL_STATE(372)] = 12734,
  [SMALL_STATE(373)] = 12750,
  [SMALL_STATE(374)] = 12766,
  [SMALL_STATE(375)] = 12782,
  [SMALL_STATE(376)] = 12796,
  [SMALL_STATE(377)] = 12812,
  [SMALL_STATE(378)] = 12828,
  [SMALL_STATE(379)] = 12844,
  [SMALL_STATE(380)] = 12858,
  [SMALL_STATE(381)] = 12874,
  [SMALL_STATE(382)] = 12890,
  [SMALL_STATE(383)] = 12906,
  [SMALL_STATE(384)] = 12922,
  [SMALL_STATE(385)] = 12932,
  [SMALL_STATE(386)] = 12948,
  [SMALL_STATE(387)] = 12964,
  [SMALL_STATE(388)] = 12980,
  [SMALL_STATE(389)] = 12996,
  [SMALL_STATE(390)] = 13012,
  [SMALL_STATE(391)] = 13028,
  [SMALL_STATE(392)] = 13044,
  [SMALL_STATE(393)] = 13057,
  [SMALL_STATE(394)] = 13066,
  [SMALL_STATE(395)] = 13075,
  [SMALL_STATE(396)] = 13082,
  [SMALL_STATE(397)] = 13095,
  [SMALL_STATE(398)] = 13106,
  [SMALL_STATE(399)] = 13113,
  [SMALL_STATE(400)] = 13120,
  [SMALL_STATE(401)] = 13131,
  [SMALL_STATE(402)] = 13142,
  [SMALL_STATE(403)] = 13153,
  [SMALL_STATE(404)] = 13164,
  [SMALL_STATE(405)] = 13173,
  [SMALL_STATE(406)] = 13182,
  [SMALL_STATE(407)] = 13195,
  [SMALL_STATE(408)] = 13208,
  [SMALL_STATE(409)] = 13221,
  [SMALL_STATE(410)] = 13234,
  [SMALL_STATE(411)] = 13247,
  [SMALL_STATE(412)] = 13260,
  [SMALL_STATE(413)] = 13273,
  [SMALL_STATE(414)] = 13286,
  [SMALL_STATE(415)] = 13299,
  [SMALL_STATE(416)] = 13312,
  [SMALL_STATE(417)] = 13321,
  [SMALL_STATE(418)] = 13332,
  [SMALL_STATE(419)] = 13343,
  [SMALL_STATE(420)] = 13356,
  [SMALL_STATE(421)] = 13369,
  [SMALL_STATE(422)] = 13382,
  [SMALL_STATE(423)] = 13389,
  [SMALL_STATE(424)] = 13398,
  [SMALL_STATE(425)] = 13404,
  [SMALL_STATE(426)] = 13410,
  [SMALL_STATE(427)] = 13420,
  [SMALL_STATE(428)] = 13430,
  [SMALL_STATE(429)] = 13440,
  [SMALL_STATE(430)] = 13450,
  [SMALL_STATE(431)] = 13460,
  [SMALL_STATE(432)] = 13470,
  [SMALL_STATE(433)] = 13480,
  [SMALL_STATE(434)] = 13490,
  [SMALL_STATE(435)] = 13500,
  [SMALL_STATE(436)] = 13510,
  [SMALL_STATE(437)] = 13520,
  [SMALL_STATE(438)] = 13530,
  [SMALL_STATE(439)] = 13538,
  [SMALL_STATE(440)] = 13548,
  [SMALL_STATE(441)] = 13558,
  [SMALL_STATE(442)] = 13568,
  [SMALL_STATE(443)] = 13578,
  [SMALL_STATE(444)] = 13588,
  [SMALL_STATE(445)] = 13598,
  [SMALL_STATE(446)] = 13608,
  [SMALL_STATE(447)] = 13618,
  [SMALL_STATE(448)] = 13628,
  [SMALL_STATE(449)] = 13634,
  [SMALL_STATE(450)] = 13644,
  [SMALL_STATE(451)] = 13654,
  [SMALL_STATE(452)] = 13664,
  [SMALL_STATE(453)] = 13674,
  [SMALL_STATE(454)] = 13684,
  [SMALL_STATE(455)] = 13690,
  [SMALL_STATE(456)] = 13700,
  [SMALL_STATE(457)] = 13710,
  [SMALL_STATE(458)] = 13720,
  [SMALL_STATE(459)] = 13730,
  [SMALL_STATE(460)] = 13740,
  [SMALL_STATE(461)] = 13750,
  [SMALL_STATE(462)] = 13760,
  [SMALL_STATE(463)] = 13770,
  [SMALL_STATE(464)] = 13780,
  [SMALL_STATE(465)] = 13790,
  [SMALL_STATE(466)] = 13800,
  [SMALL_STATE(467)] = 13810,
  [SMALL_STATE(468)] = 13816,
  [SMALL_STATE(469)] = 13826,
  [SMALL_STATE(470)] = 13836,
  [SMALL_STATE(471)] = 13846,
  [SMALL_STATE(472)] = 13856,
  [SMALL_STATE(473)] = 13866,
  [SMALL_STATE(474)] = 13876,
  [SMALL_STATE(475)] = 13886,
  [SMALL_STATE(476)] = 13896,
  [SMALL_STATE(477)] = 13906,
  [SMALL_STATE(478)] = 13916,
  [SMALL_STATE(479)] = 13926,
  [SMALL_STATE(480)] = 13936,
  [SMALL_STATE(481)] = 13946,
  [SMALL_STATE(482)] = 13956,
  [SMALL_STATE(483)] = 13966,
  [SMALL_STATE(484)] = 13976,
  [SMALL_STATE(485)] = 13986,
  [SMALL_STATE(486)] = 13996,
  [SMALL_STATE(487)] = 14006,
  [SMALL_STATE(488)] = 14016,
  [SMALL_STATE(489)] = 14026,
  [SMALL_STATE(490)] = 14036,
  [SMALL_STATE(491)] = 14042,
  [SMALL_STATE(492)] = 14052,
  [SMALL_STATE(493)] = 14062,
  [SMALL_STATE(494)] = 14072,
  [SMALL_STATE(495)] = 14082,
  [SMALL_STATE(496)] = 14092,
  [SMALL_STATE(497)] = 14097,
  [SMALL_STATE(498)] = 14104,
  [SMALL_STATE(499)] = 14109,
  [SMALL_STATE(500)] = 14116,
  [SMALL_STATE(501)] = 14123,
  [SMALL_STATE(502)] = 14130,
  [SMALL_STATE(503)] = 14137,
  [SMALL_STATE(504)] = 14144,
  [SMALL_STATE(505)] = 14151,
  [SMALL_STATE(506)] = 14158,
  [SMALL_STATE(507)] = 14165,
  [SMALL_STATE(508)] = 14172,
  [SMALL_STATE(509)] = 14179,
  [SMALL_STATE(510)] = 14184,
  [SMALL_STATE(511)] = 14189,
  [SMALL_STATE(512)] = 14194,
  [SMALL_STATE(513)] = 14201,
  [SMALL_STATE(514)] = 14206,
  [SMALL_STATE(515)] = 14213,
  [SMALL_STATE(516)] = 14220,
  [SMALL_STATE(517)] = 14227,
  [SMALL_STATE(518)] = 14232,
  [SMALL_STATE(519)] = 14237,
  [SMALL_STATE(520)] = 14242,
  [SMALL_STATE(521)] = 14249,
  [SMALL_STATE(522)] = 14256,
  [SMALL_STATE(523)] = 14261,
  [SMALL_STATE(524)] = 14266,
  [SMALL_STATE(525)] = 14273,
  [SMALL_STATE(526)] = 14280,
  [SMALL_STATE(527)] = 14287,
  [SMALL_STATE(528)] = 14294,
  [SMALL_STATE(529)] = 14299,
  [SMALL_STATE(530)] = 14306,
  [SMALL_STATE(531)] = 14313,
  [SMALL_STATE(532)] = 14318,
  [SMALL_STATE(533)] = 14323,
  [SMALL_STATE(534)] = 14327,
  [SMALL_STATE(535)] = 14331,
  [SMALL_STATE(536)] = 14335,
  [SMALL_STATE(537)] = 14339,
  [SMALL_STATE(538)] = 14343,
  [SMALL_STATE(539)] = 14347,
  [SMALL_STATE(540)] = 14351,
  [SMALL_STATE(541)] = 14355,
  [SMALL_STATE(542)] = 14359,
  [SMALL_STATE(543)] = 14363,
  [SMALL_STATE(544)] = 14367,
  [SMALL_STATE(545)] = 14371,
  [SMALL_STATE(546)] = 14375,
  [SMALL_STATE(547)] = 14379,
  [SMALL_STATE(548)] = 14383,
  [SMALL_STATE(549)] = 14387,
  [SMALL_STATE(550)] = 14391,
  [SMALL_STATE(551)] = 14395,
  [SMALL_STATE(552)] = 14399,
  [SMALL_STATE(553)] = 14403,
  [SMALL_STATE(554)] = 14407,
  [SMALL_STATE(555)] = 14411,
  [SMALL_STATE(556)] = 14415,
  [SMALL_STATE(557)] = 14419,
  [SMALL_STATE(558)] = 14423,
  [SMALL_STATE(559)] = 14427,
  [SMALL_STATE(560)] = 14431,
  [SMALL_STATE(561)] = 14435,
  [SMALL_STATE(562)] = 14439,
  [SMALL_STATE(563)] = 14443,
  [SMALL_STATE(564)] = 14447,
  [SMALL_STATE(565)] = 14451,
  [SMALL_STATE(566)] = 14455,
  [SMALL_STATE(567)] = 14459,
  [SMALL_STATE(568)] = 14463,
  [SMALL_STATE(569)] = 14467,
  [SMALL_STATE(570)] = 14471,
  [SMALL_STATE(571)] = 14475,
  [SMALL_STATE(572)] = 14479,
  [SMALL_STATE(573)] = 14483,
  [SMALL_STATE(574)] = 14487,
  [SMALL_STATE(575)] = 14491,
  [SMALL_STATE(576)] = 14495,
  [SMALL_STATE(577)] = 14499,
  [SMALL_STATE(578)] = 14503,
  [SMALL_STATE(579)] = 14507,
  [SMALL_STATE(580)] = 14511,
  [SMALL_STATE(581)] = 14515,
  [SMALL_STATE(582)] = 14519,
  [SMALL_STATE(583)] = 14523,
  [SMALL_STATE(584)] = 14527,
  [SMALL_STATE(585)] = 14531,
  [SMALL_STATE(586)] = 14535,
  [SMALL_STATE(587)] = 14539,
  [SMALL_STATE(588)] = 14543,
  [SMALL_STATE(589)] = 14547,
  [SMALL_STATE(590)] = 14551,
  [SMALL_STATE(591)] = 14555,
  [SMALL_STATE(592)] = 14559,
  [SMALL_STATE(593)] = 14563,
  [SMALL_STATE(594)] = 14567,
  [SMALL_STATE(595)] = 14571,
  [SMALL_STATE(596)] = 14575,
  [SMALL_STATE(597)] = 14579,
  [SMALL_STATE(598)] = 14583,
  [SMALL_STATE(599)] = 14587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(599),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 22),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 22),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(599),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_do_body_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_body, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_body, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 6, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 6, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 13),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 13),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(564),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(598),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 26),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 26),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(250),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(250),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 17),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 17),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 27),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 27),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 27),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 27),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 12),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 12),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 19),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 19),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 21),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 19),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 19),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 12),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 12),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 21),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 21),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 24),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 24),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 12),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 12),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 24),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 24),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14), SHIFT_REPEAT(343),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(589),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16), SHIFT_REPEAT(434),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 11),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 17),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 15),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 10),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 10),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1308] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
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
