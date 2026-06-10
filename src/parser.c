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
#define STATE_COUNT 590
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
  sym_ask_statement = 129,
  sym_unfold_statement = 130,
  sym_keep_statement = 131,
  sym_drop_statement = 132,
  sym_rank_statement = 133,
  sym_each_statement = 134,
  sym_fold_statement = 135,
  sym_repeat_above_statement = 136,
  sym_repeat_block_statement = 137,
  sym_repeat_body = 138,
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
  aux_sym_implicit_do_statement_repeat1 = 172,
  aux_sym_callees_repeat1 = 173,
  aux_sym_directive_csv_repeat1 = 174,
  aux_sym__directives_repeat1 = 175,
  aux_sym_messages_repeat1 = 176,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
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
  [20] = 17,
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
  [54] = 44,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 38,
  [59] = 59,
  [60] = 60,
  [61] = 51,
  [62] = 62,
  [63] = 55,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 46,
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
  [78] = 64,
  [79] = 79,
  [80] = 80,
  [81] = 68,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 65,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 69,
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
  [113] = 113,
  [114] = 114,
  [115] = 45,
  [116] = 39,
  [117] = 117,
  [118] = 45,
  [119] = 111,
  [120] = 114,
  [121] = 71,
  [122] = 72,
  [123] = 73,
  [124] = 83,
  [125] = 84,
  [126] = 85,
  [127] = 70,
  [128] = 86,
  [129] = 87,
  [130] = 88,
  [131] = 89,
  [132] = 117,
  [133] = 91,
  [134] = 92,
  [135] = 93,
  [136] = 94,
  [137] = 95,
  [138] = 109,
  [139] = 96,
  [140] = 77,
  [141] = 75,
  [142] = 76,
  [143] = 100,
  [144] = 101,
  [145] = 102,
  [146] = 103,
  [147] = 82,
  [148] = 80,
  [149] = 104,
  [150] = 108,
  [151] = 39,
  [152] = 110,
  [153] = 106,
  [154] = 107,
  [155] = 112,
  [156] = 97,
  [157] = 99,
  [158] = 105,
  [159] = 113,
  [160] = 74,
  [161] = 38,
  [162] = 31,
  [163] = 44,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 32,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 33,
  [176] = 176,
  [177] = 177,
  [178] = 60,
  [179] = 60,
  [180] = 180,
  [181] = 181,
  [182] = 68,
  [183] = 111,
  [184] = 184,
  [185] = 69,
  [186] = 186,
  [187] = 186,
  [188] = 184,
  [189] = 70,
  [190] = 190,
  [191] = 107,
  [192] = 192,
  [193] = 45,
  [194] = 194,
  [195] = 39,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 106,
  [201] = 39,
  [202] = 45,
  [203] = 60,
  [204] = 204,
  [205] = 41,
  [206] = 45,
  [207] = 39,
  [208] = 208,
  [209] = 39,
  [210] = 210,
  [211] = 45,
  [212] = 173,
  [213] = 170,
  [214] = 214,
  [215] = 215,
  [216] = 60,
  [217] = 217,
  [218] = 52,
  [219] = 56,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 59,
  [225] = 225,
  [226] = 45,
  [227] = 39,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 50,
  [236] = 236,
  [237] = 237,
  [238] = 57,
  [239] = 239,
  [240] = 53,
  [241] = 39,
  [242] = 45,
  [243] = 243,
  [244] = 111,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 79,
  [255] = 196,
  [256] = 197,
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
  [268] = 192,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 45,
  [274] = 39,
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
  [303] = 301,
  [304] = 300,
  [305] = 302,
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
  [328] = 320,
  [329] = 322,
  [330] = 324,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 326,
  [335] = 335,
  [336] = 317,
  [337] = 313,
  [338] = 306,
  [339] = 316,
  [340] = 319,
  [341] = 311,
  [342] = 315,
  [343] = 332,
  [344] = 344,
  [345] = 307,
  [346] = 308,
  [347] = 347,
  [348] = 333,
  [349] = 327,
  [350] = 331,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 353,
  [356] = 356,
  [357] = 352,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 358,
  [365] = 365,
  [366] = 359,
  [367] = 367,
  [368] = 367,
  [369] = 369,
  [370] = 370,
  [371] = 369,
  [372] = 365,
  [373] = 373,
  [374] = 359,
  [375] = 375,
  [376] = 363,
  [377] = 373,
  [378] = 370,
  [379] = 375,
  [380] = 361,
  [381] = 360,
  [382] = 382,
  [383] = 383,
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
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 45,
  [401] = 39,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 384,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 382,
  [410] = 410,
  [411] = 403,
  [412] = 412,
  [413] = 383,
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
  [447] = 414,
  [448] = 448,
  [449] = 449,
  [450] = 436,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 420,
  [461] = 451,
  [462] = 462,
  [463] = 415,
  [464] = 416,
  [465] = 452,
  [466] = 425,
  [467] = 467,
  [468] = 426,
  [469] = 454,
  [470] = 430,
  [471] = 449,
  [472] = 434,
  [473] = 473,
  [474] = 467,
  [475] = 416,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 477,
  [483] = 483,
  [484] = 417,
  [485] = 483,
  [486] = 486,
  [487] = 487,
  [488] = 45,
  [489] = 39,
  [490] = 490,
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
  [504] = 45,
  [505] = 505,
  [506] = 506,
  [507] = 506,
  [508] = 508,
  [509] = 509,
  [510] = 493,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 508,
  [517] = 517,
  [518] = 39,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
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
  [544] = 544,
  [545] = 523,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 540,
  [553] = 544,
  [554] = 554,
  [555] = 555,
  [556] = 523,
  [557] = 540,
  [558] = 544,
  [559] = 559,
  [560] = 540,
  [561] = 540,
  [562] = 540,
  [563] = 540,
  [564] = 540,
  [565] = 540,
  [566] = 540,
  [567] = 540,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 540,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 524,
  [578] = 533,
  [579] = 570,
  [580] = 544,
  [581] = 581,
  [582] = 576,
  [583] = 583,
  [584] = 584,
  [585] = 574,
  [586] = 528,
  [587] = 587,
  [588] = 583,
  [589] = 540,
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
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(741);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(7);
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
    case 8:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(597);
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
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment_line);
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
  [38] = {.lex_state = 216},
  [39] = {.lex_state = 218},
  [40] = {.lex_state = 219},
  [41] = {.lex_state = 218},
  [42] = {.lex_state = 219},
  [43] = {.lex_state = 219},
  [44] = {.lex_state = 216},
  [45] = {.lex_state = 218},
  [46] = {.lex_state = 210},
  [47] = {.lex_state = 219},
  [48] = {.lex_state = 219},
  [49] = {.lex_state = 219},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 210},
  [54] = {.lex_state = 217},
  [55] = {.lex_state = 210},
  [56] = {.lex_state = 210},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 217},
  [59] = {.lex_state = 210},
  [60] = {.lex_state = 210},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 210},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 210},
  [65] = {.lex_state = 210},
  [66] = {.lex_state = 210},
  [67] = {.lex_state = 214},
  [68] = {.lex_state = 216},
  [69] = {.lex_state = 216},
  [70] = {.lex_state = 210},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 210},
  [73] = {.lex_state = 210},
  [74] = {.lex_state = 210},
  [75] = {.lex_state = 210},
  [76] = {.lex_state = 210},
  [77] = {.lex_state = 210},
  [78] = {.lex_state = 214},
  [79] = {.lex_state = 210},
  [80] = {.lex_state = 210},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 210},
  [83] = {.lex_state = 210},
  [84] = {.lex_state = 210},
  [85] = {.lex_state = 210},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 210},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 210},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 217},
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
  [118] = {.lex_state = 214},
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
  [161] = {.lex_state = 211},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 211},
  [164] = {.lex_state = 212},
  [165] = {.lex_state = 219},
  [166] = {.lex_state = 212},
  [167] = {.lex_state = 219},
  [168] = {.lex_state = 219},
  [169] = {.lex_state = 219},
  [170] = {.lex_state = 215},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 212},
  [173] = {.lex_state = 215},
  [174] = {.lex_state = 212},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 219},
  [177] = {.lex_state = 219},
  [178] = {.lex_state = 219},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 219},
  [181] = {.lex_state = 219},
  [182] = {.lex_state = 211},
  [183] = {.lex_state = 215},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 211},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 23},
  [189] = {.lex_state = 219},
  [190] = {.lex_state = 212},
  [191] = {.lex_state = 219},
  [192] = {.lex_state = 219},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 219},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 219},
  [197] = {.lex_state = 219},
  [198] = {.lex_state = 219},
  [199] = {.lex_state = 219},
  [200] = {.lex_state = 219},
  [201] = {.lex_state = 219},
  [202] = {.lex_state = 219},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 219},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 221},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 221},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 213},
  [213] = {.lex_state = 213},
  [214] = {.lex_state = 220},
  [215] = {.lex_state = 220},
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
  [226] = {.lex_state = 212},
  [227] = {.lex_state = 212},
  [228] = {.lex_state = 220},
  [229] = {.lex_state = 220},
  [230] = {.lex_state = 220},
  [231] = {.lex_state = 212},
  [232] = {.lex_state = 220},
  [233] = {.lex_state = 220},
  [234] = {.lex_state = 220},
  [235] = {.lex_state = 220},
  [236] = {.lex_state = 220},
  [237] = {.lex_state = 220},
  [238] = {.lex_state = 220},
  [239] = {.lex_state = 212},
  [240] = {.lex_state = 220},
  [241] = {.lex_state = 221},
  [242] = {.lex_state = 221},
  [243] = {.lex_state = 221},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 221},
  [246] = {.lex_state = 220},
  [247] = {.lex_state = 220},
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
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
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
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 21},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 21},
  [304] = {.lex_state = 22},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 22},
  [312] = {.lex_state = 22},
  [313] = {.lex_state = 22},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 22},
  [316] = {.lex_state = 22},
  [317] = {.lex_state = 22},
  [318] = {.lex_state = 21},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 22},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 26},
  [328] = {.lex_state = 22},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 22},
  [332] = {.lex_state = 22},
  [333] = {.lex_state = 22},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 22},
  [337] = {.lex_state = 22},
  [338] = {.lex_state = 22},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 22},
  [341] = {.lex_state = 22},
  [342] = {.lex_state = 22},
  [343] = {.lex_state = 22},
  [344] = {.lex_state = 22},
  [345] = {.lex_state = 22},
  [346] = {.lex_state = 22},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 22},
  [349] = {.lex_state = 26},
  [350] = {.lex_state = 22},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 21},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 28},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 21},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 28},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 21},
  [363] = {.lex_state = 28},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 21},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 21},
  [368] = {.lex_state = 21},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 27},
  [371] = {.lex_state = 21},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 21},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 28},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 27},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 28},
  [382] = {.lex_state = 21},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 21},
  [386] = {.lex_state = 21},
  [387] = {.lex_state = 21},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 21},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 21},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 21},
  [397] = {.lex_state = 21},
  [398] = {.lex_state = 10},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 10},
  [401] = {.lex_state = 10},
  [402] = {.lex_state = 21},
  [403] = {.lex_state = 21},
  [404] = {.lex_state = 21},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 60},
  [407] = {.lex_state = 21},
  [408] = {.lex_state = 60},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 21},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 21},
  [417] = {.lex_state = 21},
  [418] = {.lex_state = 21},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 21},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 21},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 21},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 21},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 21},
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
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 21},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 21},
  [463] = {.lex_state = 21},
  [464] = {.lex_state = 21},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 220},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 21},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 21},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 207},
  [487] = {.lex_state = 10},
  [488] = {.lex_state = 6},
  [489] = {.lex_state = 6},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 10},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 208},
  [502] = {.lex_state = 208},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 8},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 209},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 10},
  [511] = {.lex_state = 207},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 207},
  [516] = {.lex_state = 209},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 8},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 207},
  [521] = {.lex_state = 207},
  [522] = {.lex_state = 207},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 209},
  [536] = {.lex_state = 209},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 21},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 208},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 21},
  [545] = {.lex_state = 21},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 21},
  [552] = {.lex_state = 21},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 21},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 21},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 21},
  [561] = {.lex_state = 21},
  [562] = {.lex_state = 21},
  [563] = {.lex_state = 21},
  [564] = {.lex_state = 21},
  [565] = {.lex_state = 21},
  [566] = {.lex_state = 21},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 21},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 21},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 21},
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
    [sym_source_file] = STATE(549),
    [sym_item] = STATE(37),
    [sym__trivia] = STATE(37),
    [sym_use] = STATE(263),
    [sym_struct] = STATE(263),
    [sym_psyche] = STATE(263),
    [sym_skill] = STATE(263),
    [sym_service] = STATE(263),
    [sym_prompt] = STATE(263),
    [sym_task] = STATE(263),
    [sym_chore] = STATE(263),
    [sym_instruct] = STATE(263),
    [sym_context] = STATE(263),
    [sym_thunk] = STATE(263),
    [sym_flow] = STATE(263),
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
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
    STATE(66), 1,
      sym_flow_body,
    STATE(96), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
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
    STATE(16), 12,
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
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
    STATE(62), 1,
      sym_flow_body,
    STATE(139), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
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
    STATE(16), 12,
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
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
    STATE(62), 1,
      sym_flow_body,
    STATE(149), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
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
    STATE(16), 12,
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
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
    STATE(66), 1,
      sym_flow_body,
    STATE(104), 1,
      sym_repeat_body,
    STATE(171), 1,
      sym_directive,
    STATE(187), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(50), 2,
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
    STATE(16), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(247), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(276), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(271), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(248), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(260), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(272), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(275), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(186), 1,
      sym__directives,
    STATE(281), 1,
      sym_flow_body,
    STATE(383), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(235), 2,
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
    STATE(19), 12,
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
      sym_indented_raw_text,
    STATE(67), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(184), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(179), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(240), 2,
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
    STATE(19), 12,
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
    STATE(46), 1,
      sym_text_body_line,
    ACTIONS(87), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [1214] = 15,
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
    STATE(46), 1,
      sym_text_body_line,
    ACTIONS(124), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
      sym_indented_raw_text,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_text_body_line,
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
      sym_indented_raw_text,
    STATE(46), 1,
      sym_text_body_line,
    STATE(171), 1,
      sym_directive,
    STATE(188), 1,
      sym__directives,
    STATE(383), 1,
      sym_directive_key,
    STATE(53), 2,
      sym_statements,
      sym__pass_statement,
    STATE(179), 2,
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
    STATE(16), 12,
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
      sym_indented_raw_text,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_text_body_line,
    ACTIONS(134), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
    STATE(20), 14,
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
      sym_indented_raw_text,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_text_body_line,
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
  [1592] = 15,
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
    STATE(67), 1,
      sym_text_body_line,
    ACTIONS(138), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(262), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(261), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(259), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(280), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(282), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(278), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(265), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(35), 1,
      sym__directives,
    STATE(43), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(266), 1,
      sym_thunk_body,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(30), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(237), 2,
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
    STATE(32), 1,
      sym_directive,
    STATE(34), 1,
      sym__directives,
    STATE(42), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(379), 1,
      sym_line_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(572), 1,
      sym_role,
    STATE(203), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
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
    STATE(413), 1,
      sym_directive_key,
    STATE(33), 3,
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
    STATE(413), 1,
      sym_directive_key,
    STATE(31), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(197), 4,
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
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(413), 1,
      sym_directive_key,
    STATE(33), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(203), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(206), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(201), 18,
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
    STATE(40), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(236), 1,
      sym_messages,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    STATE(230), 2,
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
    STATE(42), 1,
      sym_settings,
    STATE(49), 1,
      sym_message,
    STATE(165), 1,
      sym_context_setting,
    STATE(167), 1,
      sym_instruct_setting,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(225), 1,
      sym_messages,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    STATE(228), 2,
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
    STATE(263), 12,
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
    STATE(263), 12,
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
  [2842] = 6,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      sym_blank_line,
    ACTIONS(278), 1,
      sym__nested_indented_raw_text,
    STATE(38), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    ACTIONS(276), 26,
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
      sym_indented_raw_text,
  [2886] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 30,
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
  [2922] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_message,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(217), 1,
      sym_messages,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    STATE(214), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(287), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(289), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [2982] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 30,
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
  [3018] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_message,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(236), 1,
      sym_messages,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    STATE(230), 2,
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
  [3078] = 14,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_message,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(225), 1,
      sym_messages,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    STATE(228), 2,
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
  [3138] = 6,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym_blank_line,
    ACTIONS(301), 1,
      sym__nested_indented_raw_text,
    STATE(38), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    ACTIONS(299), 26,
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
      sym_indented_raw_text,
  [3182] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 30,
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
  [3218] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      sym_blank_line,
    STATE(51), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(311), 25,
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
  [3259] = 12,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym_inline_comment,
    ACTIONS(329), 1,
      sym_text_line,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
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
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [3314] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(47), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(334), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [3369] = 12,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(183), 1,
      sym_text_line,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_text_block,
    STATE(204), 1,
      sym_text_inline,
    STATE(379), 1,
      sym_line_end,
    STATE(572), 1,
      sym_role,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(48), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(340), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(342), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [3424] = 4,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(57), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(346), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [3463] = 5,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym_blank_line,
    STATE(55), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(354), 25,
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
  [3504] = 4,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(358), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [3543] = 4,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(364), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(366), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [3582] = 6,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(81), 1,
      sym__nested_text_body_line,
    ACTIONS(299), 25,
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
      sym_indented_raw_text,
  [3625] = 5,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      sym_blank_line,
    ACTIONS(379), 1,
      sym_indented_raw_text,
    STATE(55), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(377), 25,
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
  [3666] = 4,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(382), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [3705] = 4,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(382), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(366), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [3744] = 6,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(81), 1,
      sym__nested_text_body_line,
    ACTIONS(276), 25,
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
      sym_indented_raw_text,
  [3787] = 4,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(382), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(392), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [3826] = 4,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(396), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(399), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [3865] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      sym_blank_line,
    STATE(63), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(354), 24,
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
  [3905] = 4,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 1,
      sym_flow_until_keyword,
    STATE(146), 1,
      sym_until_clause,
    ACTIONS(405), 26,
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
      sym_indented_raw_text,
  [3943] = 5,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 1,
      sym_blank_line,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(63), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(377), 24,
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
  [3983] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_text_body_line,
    ACTIONS(354), 26,
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
  [4021] = 4,
    ACTIONS(57), 1,
      sym_indented_raw_text,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_text_body_line,
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
  [4059] = 4,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      sym_flow_until_keyword,
    STATE(103), 1,
      sym_until_clause,
    ACTIONS(405), 26,
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
      sym_indented_raw_text,
  [4097] = 5,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      sym_blank_line,
    STATE(61), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(311), 24,
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
  [4137] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 28,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4171] = 2,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 28,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4205] = 2,
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
      sym_indented_raw_text,
  [4238] = 2,
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
      sym_indented_raw_text,
  [4271] = 2,
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
      sym_indented_raw_text,
  [4304] = 2,
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
      sym_indented_raw_text,
  [4337] = 2,
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
      sym_indented_raw_text,
  [4370] = 2,
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
      sym_indented_raw_text,
  [4403] = 2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 27,
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
      sym_indented_raw_text,
  [4436] = 2,
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
      sym_indented_raw_text,
  [4469] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_text_body_line,
    ACTIONS(354), 25,
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
  [4506] = 2,
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
      sym_indented_raw_text,
  [4539] = 2,
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
      sym_indented_raw_text,
  [4572] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 27,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4605] = 2,
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
      sym_indented_raw_text,
  [4638] = 2,
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
      sym_indented_raw_text,
  [4671] = 2,
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
      sym_indented_raw_text,
  [4704] = 2,
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
      sym_indented_raw_text,
  [4737] = 2,
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
      sym_indented_raw_text,
  [4770] = 2,
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
      sym_indented_raw_text,
  [4803] = 2,
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
      sym_indented_raw_text,
  [4836] = 2,
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
      sym_indented_raw_text,
  [4869] = 4,
    ACTIONS(81), 1,
      sym_indented_raw_text,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_text_body_line,
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
  [4906] = 2,
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
      sym_indented_raw_text,
  [4939] = 2,
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
      sym_indented_raw_text,
  [4972] = 2,
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
      sym_indented_raw_text,
  [5005] = 2,
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
      sym_indented_raw_text,
  [5038] = 2,
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
      sym_indented_raw_text,
  [5071] = 2,
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
      sym_indented_raw_text,
  [5104] = 2,
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
      sym_indented_raw_text,
  [5137] = 2,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 27,
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
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [5170] = 2,
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
      sym_indented_raw_text,
  [5203] = 2,
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
      sym_indented_raw_text,
  [5236] = 2,
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
      sym_indented_raw_text,
  [5269] = 2,
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
      sym_indented_raw_text,
  [5302] = 2,
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
      sym_indented_raw_text,
  [5335] = 2,
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
      sym_indented_raw_text,
  [5368] = 2,
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
      sym_indented_raw_text,
  [5401] = 2,
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
      sym_indented_raw_text,
  [5434] = 2,
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
      sym_indented_raw_text,
  [5467] = 2,
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
      sym_indented_raw_text,
  [5500] = 2,
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
      sym_indented_raw_text,
  [5533] = 2,
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
      sym_indented_raw_text,
  [5566] = 2,
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
      sym_indented_raw_text,
  [5599] = 2,
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
      sym_indented_raw_text,
  [5632] = 2,
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
      sym_indented_raw_text,
  [5665] = 2,
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
      sym_indented_raw_text,
  [5698] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 27,
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
      sym_indented_raw_text,
  [5731] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 27,
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
      sym_indented_raw_text,
  [5764] = 2,
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
      sym_indented_raw_text,
  [5797] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 26,
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
      sym_indented_raw_text,
  [5829] = 2,
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
      sym_indented_raw_text,
  [5861] = 2,
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
      sym_indented_raw_text,
  [5893] = 2,
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
      sym_indented_raw_text,
  [5925] = 2,
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
      sym_indented_raw_text,
  [5957] = 2,
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
      sym_indented_raw_text,
  [5989] = 2,
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
      sym_indented_raw_text,
  [6021] = 2,
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
      sym_indented_raw_text,
  [6053] = 2,
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
      sym_indented_raw_text,
  [6085] = 2,
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
      sym_indented_raw_text,
  [6117] = 2,
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
      sym_indented_raw_text,
  [6149] = 2,
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
      sym_indented_raw_text,
  [6181] = 2,
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
      sym_indented_raw_text,
  [6213] = 2,
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
      sym_indented_raw_text,
  [6245] = 2,
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
      sym_indented_raw_text,
  [6277] = 2,
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
      sym_indented_raw_text,
  [6309] = 2,
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
      sym_indented_raw_text,
  [6341] = 2,
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
      sym_indented_raw_text,
  [6373] = 2,
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
      sym_indented_raw_text,
  [6405] = 2,
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
      sym_indented_raw_text,
  [6437] = 2,
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
      sym_indented_raw_text,
  [6469] = 2,
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
      sym_indented_raw_text,
  [6501] = 2,
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
      sym_indented_raw_text,
  [6533] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 26,
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
      sym_indented_raw_text,
  [6565] = 2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 26,
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
      sym_indented_raw_text,
  [6597] = 2,
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
      sym_indented_raw_text,
  [6629] = 2,
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
      sym_indented_raw_text,
  [6661] = 2,
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
      sym_indented_raw_text,
  [6693] = 2,
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
      sym_indented_raw_text,
  [6725] = 2,
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
      sym_indented_raw_text,
  [6757] = 2,
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
      sym_indented_raw_text,
  [6789] = 2,
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
      sym_indented_raw_text,
  [6821] = 2,
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
      sym_indented_raw_text,
  [6853] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 26,
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
      sym_indented_raw_text,
  [6885] = 2,
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
      sym_indented_raw_text,
  [6917] = 2,
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
      sym_indented_raw_text,
  [6949] = 2,
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
      sym_indented_raw_text,
  [6981] = 2,
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
      sym_indented_raw_text,
  [7013] = 2,
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
      sym_indented_raw_text,
  [7045] = 2,
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
      sym_indented_raw_text,
  [7077] = 2,
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
      sym_indented_raw_text,
  [7109] = 2,
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
      sym_indented_raw_text,
  [7141] = 2,
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
      sym_indented_raw_text,
  [7173] = 6,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 1,
      sym_blank_line,
    ACTIONS(550), 1,
      sym__nested_indented_raw_text,
    STATE(161), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(182), 1,
      sym__nested_text_body_line,
    ACTIONS(276), 21,
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
  [7212] = 5,
    STATE(383), 1,
      sym_directive_key,
    STATE(175), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(553), 4,
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
      sym_indented_raw_text,
  [7249] = 6,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      sym_blank_line,
    ACTIONS(557), 1,
      sym__nested_indented_raw_text,
    STATE(161), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(182), 1,
      sym__nested_text_body_line,
    ACTIONS(299), 21,
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
  [7288] = 10,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym_snake_name,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    STATE(233), 1,
      sym_text_body,
    STATE(512), 1,
      sym_property_key,
    STATE(213), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(563), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(190), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(565), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7335] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_instruct_setting,
    STATE(168), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(575), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(573), 17,
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
  [7374] = 10,
    ACTIONS(561), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym_snake_name,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_text_body,
    STATE(512), 1,
      sym_property_key,
    STATE(213), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(579), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(172), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(581), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7421] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_context_setting,
    STATE(169), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(583), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(573), 17,
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
  [7460] = 6,
    ACTIONS(181), 1,
      sym_instruct_keyword,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_instruct_setting,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(589), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(587), 17,
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
  [7499] = 6,
    ACTIONS(179), 1,
      sym_context_keyword,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_context_setting,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(589), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(587), 17,
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
  [7538] = 5,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym_indented_raw_text,
    STATE(173), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(593), 21,
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
  [7575] = 5,
    STATE(383), 1,
      sym_directive_key,
    STATE(162), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(599), 4,
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
  [7612] = 10,
    ACTIONS(561), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym_snake_name,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_text_body,
    STATE(512), 1,
      sym_property_key,
    STATE(213), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(563), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(190), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(603), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7659] = 5,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(609), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym_indented_raw_text,
    STATE(173), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(607), 21,
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
  [7696] = 10,
    ACTIONS(561), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym_snake_name,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_text_body,
    STATE(512), 1,
      sym_property_key,
    STATE(213), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(617), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(164), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(619), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [7743] = 5,
    STATE(383), 1,
      sym_directive_key,
    STATE(175), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(621), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(206), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(201), 10,
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
  [7780] = 4,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(589), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(626), 18,
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
  [7814] = 4,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    STATE(180), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(628), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(587), 18,
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
  [7848] = 4,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(630), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(399), 18,
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
  [7882] = 3,
    STATE(179), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(633), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(399), 19,
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
  [7914] = 4,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(178), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(589), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(638), 18,
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
  [7948] = 4,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(176), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(640), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(638), 18,
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
  [7982] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 23,
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
  [8011] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 23,
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
  [8040] = 13,
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
    STATE(67), 1,
      sym_text_body_line,
    STATE(218), 1,
      sym_statements,
    STATE(19), 12,
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
  [8091] = 2,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 23,
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
  [8120] = 13,
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
    STATE(67), 1,
      sym_text_body_line,
    STATE(240), 1,
      sym_statements,
    STATE(19), 12,
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
  [8171] = 13,
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
    STATE(46), 1,
      sym_text_body_line,
    STATE(53), 1,
      sym_statements,
    STATE(16), 12,
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
  [8222] = 13,
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
    STATE(46), 1,
      sym_text_body_line,
    STATE(52), 1,
      sym_statements,
    STATE(16), 12,
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
  [8273] = 2,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 22,
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
  [8301] = 6,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(649), 1,
      sym_snake_name,
    STATE(512), 1,
      sym_property_key,
    STATE(190), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(644), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(647), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [8337] = 2,
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
  [8365] = 2,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 22,
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
  [8393] = 1,
    ACTIONS(305), 23,
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
      sym_indented_raw_text,
  [8419] = 2,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    ACTIONS(658), 22,
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
  [8447] = 1,
    ACTIONS(283), 23,
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
      sym_indented_raw_text,
  [8473] = 2,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(662), 22,
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
  [8501] = 2,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(666), 22,
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
  [8529] = 2,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(670), 22,
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
  [8557] = 2,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(674), 22,
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
  [8585] = 2,
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
  [8613] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 22,
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
  [8641] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 22,
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
  [8669] = 3,
    STATE(203), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(676), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(399), 17,
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
  [8699] = 2,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 22,
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
  [8727] = 1,
    ACTIONS(293), 22,
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
      sym_indented_raw_text,
  [8752] = 1,
    ACTIONS(305), 22,
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
      sym_indented_raw_text,
  [8777] = 1,
    ACTIONS(283), 22,
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
      sym_indented_raw_text,
  [8802] = 7,
    ACTIONS(685), 1,
      sym_blank_line,
    ACTIONS(693), 1,
      sym_snake_name,
    STATE(499), 1,
      sym_field_name,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(688), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(208), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(691), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8838] = 1,
    ACTIONS(283), 21,
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
  [8862] = 7,
    ACTIONS(698), 1,
      sym_blank_line,
    ACTIONS(704), 1,
      sym_snake_name,
    STATE(499), 1,
      sym_field_name,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(700), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(208), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(702), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8898] = 1,
    ACTIONS(305), 21,
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
  [8922] = 5,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      sym_blank_line,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(607), 15,
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
  [8953] = 5,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      sym_blank_line,
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(593), 15,
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
  [8984] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(714), 13,
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
  [9012] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(720), 13,
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
  [9040] = 4,
    ACTIONS(722), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(725), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(394), 13,
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
  [9068] = 4,
    ACTIONS(728), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(730), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(714), 13,
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
  [9096] = 4,
    ACTIONS(732), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(734), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(224), 2,
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
  [9124] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
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
  [9152] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
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
  [9180] = 4,
    ACTIONS(738), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(740), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(215), 2,
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
  [9208] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
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
  [9236] = 4,
    ACTIONS(744), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(746), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(220), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(601), 13,
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
  [9264] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
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
  [9292] = 4,
    ACTIONS(211), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(748), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(230), 2,
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
  [9320] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 18,
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
  [9344] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 18,
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
  [9368] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
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
  [9396] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(750), 13,
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
  [9424] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(285), 13,
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
  [9452] = 2,
    ACTIONS(752), 1,
      ts_builtin_sym_end,
    ACTIONS(754), 18,
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
  [9476] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(756), 13,
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
  [9504] = 4,
    ACTIONS(758), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(760), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(232), 2,
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
  [9532] = 4,
    ACTIONS(762), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(764), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(222), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(559), 13,
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
  [9560] = 4,
    ACTIONS(766), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(768), 2,
      sym_doc_line,
      sym_comment_line,
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
  [9588] = 4,
    ACTIONS(287), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(770), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(214), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(285), 13,
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
  [9616] = 4,
    ACTIONS(217), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(228), 2,
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
  [9644] = 4,
    ACTIONS(716), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(718), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
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
  [9672] = 3,
    ACTIONS(774), 1,
      ts_builtin_sym_end,
    ACTIONS(780), 1,
      sym_snake_name,
    ACTIONS(777), 17,
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
  [9698] = 4,
    ACTIONS(782), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(784), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9726] = 2,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(283), 15,
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
  [9749] = 2,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(305), 15,
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
  [9772] = 2,
    ACTIONS(786), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(788), 15,
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
  [9795] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 17,
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
  [9818] = 2,
    ACTIONS(790), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(792), 15,
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
  [9841] = 2,
    ACTIONS(796), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(794), 15,
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
  [9863] = 2,
    ACTIONS(800), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(798), 15,
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
  [9885] = 2,
    ACTIONS(804), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(802), 15,
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
  [9907] = 2,
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
  [9929] = 2,
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
  [9951] = 2,
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
  [9973] = 2,
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
  [9995] = 2,
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
  [10017] = 2,
    ACTIONS(453), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(451), 15,
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
  [10039] = 2,
    ACTIONS(662), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(660), 15,
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
  [10061] = 2,
    ACTIONS(666), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(664), 15,
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
  [10083] = 2,
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
  [10105] = 2,
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
  [10127] = 2,
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
  [10149] = 2,
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
  [10171] = 2,
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
  [10193] = 2,
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
  [10215] = 2,
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
  [10237] = 2,
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
  [10259] = 2,
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
  [10281] = 2,
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
  [10303] = 2,
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
  [10325] = 2,
    ACTIONS(654), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(652), 15,
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
  [10347] = 2,
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
  [10369] = 2,
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
  [10391] = 2,
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
  [10413] = 2,
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
  [10435] = 2,
    ACTIONS(305), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(303), 15,
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
  [10457] = 2,
    ACTIONS(283), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(281), 15,
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
  [10479] = 2,
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
  [10501] = 2,
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
  [10523] = 2,
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
  [10545] = 2,
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
  [10567] = 2,
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
  [10589] = 2,
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
  [10611] = 2,
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
  [10633] = 2,
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
  [10655] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(573), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10680] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(500), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10705] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(478), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10730] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(498), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10755] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(527), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10780] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(587), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10805] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(568), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10830] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(550), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10855] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(443), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10880] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(532), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10905] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(513), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10930] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(538), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10955] = 6,
    ACTIONS(920), 1,
      sym_pascal_name,
    STATE(297), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type_name,
    STATE(546), 1,
      sym_type,
    STATE(335), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(918), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [10980] = 4,
    ACTIONS(924), 1,
      sym_array_suffix,
    STATE(296), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(922), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10998] = 4,
    ACTIONS(929), 1,
      sym_array_suffix,
    STATE(298), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(927), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11016] = 4,
    ACTIONS(929), 1,
      sym_array_suffix,
    STATE(296), 1,
      aux_sym_type_repeat1,
    STATE(325), 1,
      sym_type_suffix,
    ACTIONS(931), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11034] = 6,
    ACTIONS(935), 1,
      sym_comment_line,
    ACTIONS(937), 1,
      sym_snake_name,
    STATE(249), 1,
      sym_struct_body,
    STATE(499), 1,
      sym_field_name,
    ACTIONS(933), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(210), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11055] = 7,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(137), 1,
      sym_condition,
    STATE(359), 1,
      sym_line_end,
    STATE(136), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11078] = 8,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      sym_integer_literal,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(953), 1,
      sym_flow_limit_keyword,
    STATE(120), 1,
      sym_line_end,
    STATE(372), 1,
      sym_limit_clause,
    STATE(430), 1,
      sym_par_clause,
  [11103] = 8,
    ACTIONS(949), 1,
      sym_integer_literal,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(957), 1,
      sym_flow_limit_keyword,
    ACTIONS(959), 1,
      sym_colon,
    ACTIONS(961), 1,
      sym_snake_name,
    STATE(301), 1,
      sym_callee,
    STATE(477), 1,
      sym_limit_clause,
    STATE(570), 1,
      sym_par_clause,
  [11128] = 8,
    ACTIONS(949), 1,
      sym_integer_literal,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(953), 1,
      sym_flow_limit_keyword,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
    STATE(365), 1,
      sym_limit_clause,
    STATE(470), 1,
      sym_par_clause,
  [11153] = 7,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(95), 1,
      sym_condition,
    STATE(374), 1,
      sym_line_end,
    STATE(94), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11176] = 8,
    ACTIONS(949), 1,
      sym_integer_literal,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(957), 1,
      sym_flow_limit_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(969), 1,
      sym_colon,
    STATE(303), 1,
      sym_callee,
    STATE(482), 1,
      sym_limit_clause,
    STATE(579), 1,
      sym_par_clause,
  [11201] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(126), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11221] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(143), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11241] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(145), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11261] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(971), 1,
      sym_text_line,
    STATE(264), 1,
      sym_context_body,
    STATE(267), 1,
      sym_text_inline,
    STATE(268), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
  [11283] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(971), 1,
      sym_text_line,
    STATE(257), 1,
      sym_context_body,
    STATE(267), 1,
      sym_text_inline,
    STATE(268), 1,
      sym_text_block,
    STATE(375), 1,
      sym_line_end,
  [11305] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(133), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11325] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(971), 1,
      sym_text_line,
    STATE(268), 1,
      sym_text_block,
    STATE(269), 1,
      sym_instruct_body,
    STATE(270), 1,
      sym_text_inline,
    STATE(375), 1,
      sym_line_end,
  [11347] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(125), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11367] = 7,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(175), 1,
      sym_inline_comment,
    ACTIONS(971), 1,
      sym_text_line,
    STATE(258), 1,
      sym_instruct_body,
    STATE(268), 1,
      sym_text_block,
    STATE(270), 1,
      sym_text_inline,
    STATE(375), 1,
      sym_line_end,
  [11389] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(135), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11409] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(129), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11429] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(124), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11449] = 1,
    ACTIONS(973), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11459] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(131), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11479] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(148), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11499] = 1,
    ACTIONS(975), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11509] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(157), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11529] = 1,
    ACTIONS(977), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11539] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11559] = 1,
    ACTIONS(979), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11569] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(123), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11589] = 7,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(983), 1,
      sym_colon,
    STATE(377), 1,
      sym_callee,
    STATE(384), 1,
      sym_par_clause,
    STATE(485), 1,
      sym_to_clause,
  [11611] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(80), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11631] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(99), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11651] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(108), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11671] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(110), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11691] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(113), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11711] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(71), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11731] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(73), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11751] = 1,
    ACTIONS(985), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11761] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(83), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11781] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11801] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(85), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11821] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(87), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11841] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(89), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11861] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(91), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11881] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(93), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11901] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(159), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11921] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_text_line,
    STATE(189), 1,
      sym__nested_text_block,
    STATE(366), 1,
      sym_line_end,
    STATE(199), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11941] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(100), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11961] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(70), 1,
      sym__nested_text_block,
    STATE(374), 1,
      sym_line_end,
    STATE(102), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11981] = 1,
    ACTIONS(989), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11991] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(121), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12011] = 7,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(991), 1,
      sym_colon,
    STATE(373), 1,
      sym_callee,
    STATE(405), 1,
      sym_par_clause,
    STATE(483), 1,
      sym_to_clause,
  [12033] = 6,
    ACTIONS(939), 1,
      sym_newline,
    ACTIONS(941), 1,
      sym_inline_comment,
    ACTIONS(943), 1,
      sym_text_line,
    STATE(127), 1,
      sym__nested_text_block,
    STATE(359), 1,
      sym_line_end,
    STATE(152), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12053] = 1,
    ACTIONS(993), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [12062] = 5,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(995), 1,
      sym_flow_until_keyword,
    ACTIONS(997), 1,
      sym_colon,
    STATE(141), 2,
      sym_line_end,
      sym_until_clause,
  [12079] = 6,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(999), 1,
      sym_colon,
    STATE(407), 1,
      sym_callee,
    STATE(461), 1,
      sym_callees,
    STATE(524), 1,
      sym_to_clause,
  [12098] = 6,
    ACTIONS(1001), 1,
      sym_arrow,
    ACTIONS(1003), 1,
      sym_colon,
    ACTIONS(1005), 1,
      sym_lparen,
    ACTIONS(1007), 1,
      sym_snake_name,
    STATE(410), 1,
      sym_flow_name,
    STATE(517), 1,
      sym_params,
  [12117] = 6,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(1009), 1,
      sym_colon,
    STATE(407), 1,
      sym_callee,
    STATE(451), 1,
      sym_callees,
    STATE(577), 1,
      sym_to_clause,
  [12136] = 6,
    ACTIONS(1005), 1,
      sym_lparen,
    ACTIONS(1011), 1,
      sym_arrow,
    ACTIONS(1013), 1,
      sym_colon,
    ACTIONS(1015), 1,
      sym_snake_name,
    STATE(399), 1,
      sym_thunk_name,
    STATE(519), 1,
      sym_params,
  [12155] = 5,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1017), 1,
      sym_flow_until_keyword,
    ACTIONS(1019), 1,
      sym_colon,
    STATE(75), 2,
      sym_line_end,
      sym_until_clause,
  [12172] = 5,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(1021), 1,
      sym_colon,
    STATE(367), 1,
      sym_callee,
    STATE(382), 1,
      sym_par_clause,
  [12188] = 5,
    ACTIONS(1023), 1,
      sym_blank_line,
    ACTIONS(1025), 1,
      sym__nested_indented_raw_text,
    STATE(54), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(81), 1,
      sym__nested_text_body_line,
    STATE(154), 1,
      sym__nested_text_body,
  [12204] = 5,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(1027), 1,
      sym_colon,
    STATE(420), 1,
      sym_callee,
    STATE(576), 1,
      sym_to_clause,
  [12220] = 5,
    ACTIONS(995), 1,
      sym_flow_until_keyword,
    ACTIONS(1029), 1,
      sym_integer_literal,
    ACTIONS(1031), 1,
      sym_colon,
    STATE(140), 1,
      sym_until_clause,
    STATE(352), 1,
      sym_times_clause,
  [12236] = 2,
    ACTIONS(1035), 1,
      sym_flow_times_keyword,
    ACTIONS(1033), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12246] = 5,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(1037), 1,
      sym_colon,
    STATE(469), 1,
      sym_callee,
    STATE(533), 1,
      sym_to_clause,
  [12262] = 5,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(1039), 1,
      sym_colon,
    STATE(368), 1,
      sym_callee,
    STATE(409), 1,
      sym_par_clause,
  [12278] = 5,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
    STATE(474), 1,
      sym_par_clause,
  [12294] = 5,
    ACTIONS(1041), 1,
      sym_blank_line,
    ACTIONS(1043), 1,
      sym__nested_indented_raw_text,
    STATE(163), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(182), 1,
      sym__nested_text_body_line,
    STATE(191), 1,
      sym__nested_text_body,
  [12310] = 5,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(466), 1,
      sym_par_clause,
  [12326] = 5,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    STATE(138), 1,
      sym_line_end,
    STATE(425), 1,
      sym_par_clause,
  [12342] = 5,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
    STATE(468), 1,
      sym_par_clause,
  [12358] = 5,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(1045), 1,
      sym_colon,
    STATE(371), 1,
      sym_callee,
    STATE(411), 1,
      sym_par_clause,
  [12374] = 5,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    STATE(155), 1,
      sym_line_end,
    STATE(426), 1,
      sym_par_clause,
  [12390] = 5,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    STATE(132), 1,
      sym_line_end,
    STATE(467), 1,
      sym_par_clause,
  [12406] = 5,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(72), 1,
      sym_line_end,
    STATE(472), 1,
      sym_par_clause,
  [12422] = 5,
    ACTIONS(1047), 1,
      sym_blank_line,
    ACTIONS(1049), 1,
      sym__nested_indented_raw_text,
    STATE(44), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(68), 1,
      sym__nested_text_body_line,
    STATE(107), 1,
      sym__nested_text_body,
  [12438] = 4,
    ACTIONS(569), 1,
      sym_indented_raw_text,
    ACTIONS(1051), 1,
      sym_blank_line,
    STATE(256), 1,
      sym_text_body,
    STATE(213), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12452] = 5,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(1053), 1,
      sym_colon,
    STATE(454), 1,
      sym_callee,
    STATE(578), 1,
      sym_to_clause,
  [12468] = 5,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    STATE(122), 1,
      sym_line_end,
    STATE(434), 1,
      sym_par_clause,
  [12484] = 5,
    ACTIONS(955), 1,
      sym_flow_par_keyword,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(1055), 1,
      sym_colon,
    STATE(369), 1,
      sym_callee,
    STATE(403), 1,
      sym_par_clause,
  [12500] = 4,
    ACTIONS(597), 1,
      sym_indented_raw_text,
    ACTIONS(1057), 1,
      sym_blank_line,
    STATE(197), 1,
      sym_text_body,
    STATE(170), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [12514] = 5,
    ACTIONS(1017), 1,
      sym_flow_until_keyword,
    ACTIONS(1029), 1,
      sym_integer_literal,
    ACTIONS(1059), 1,
      sym_colon,
    STATE(77), 1,
      sym_until_clause,
    STATE(357), 1,
      sym_times_clause,
  [12530] = 5,
    ACTIONS(961), 1,
      sym_snake_name,
    ACTIONS(981), 1,
      sym_flow_to_keyword,
    ACTIONS(1061), 1,
      sym_colon,
    STATE(460), 1,
      sym_callee,
    STATE(582), 1,
      sym_to_clause,
  [12546] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1063), 1,
      sym_colon,
    STATE(109), 1,
      sym_line_end,
  [12559] = 2,
    STATE(516), 1,
      sym_directive_op,
    ACTIONS(1065), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12568] = 4,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(122), 1,
      sym_line_end,
  [12581] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(251), 1,
      sym_cap_body,
  [12594] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(252), 1,
      sym_cap_body,
  [12607] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(253), 1,
      sym_cap_body,
  [12620] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
    STATE(246), 1,
      sym_cap_body,
  [12633] = 3,
    ACTIONS(1075), 1,
      sym_comma,
    STATE(389), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1073), 2,
      sym_newline,
      sym_inline_comment,
  [12644] = 3,
    ACTIONS(1080), 1,
      sym_comma,
    STATE(402), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1078), 2,
      sym_newline,
      sym_inline_comment,
  [12655] = 1,
    ACTIONS(1082), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12662] = 3,
    ACTIONS(1084), 1,
      sym_optional_marker,
    ACTIONS(1086), 1,
      sym_colon,
    ACTIONS(1088), 2,
      sym_rparen,
      sym_comma,
  [12673] = 3,
    ACTIONS(1092), 1,
      sym_comma,
    STATE(404), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1090), 2,
      sym_newline,
      sym_inline_comment,
  [12684] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
    STATE(277), 1,
      sym_job_body,
  [12697] = 4,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
    STATE(279), 1,
      sym_job_body,
  [12710] = 1,
    ACTIONS(1094), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12717] = 1,
    ACTIONS(1096), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [12724] = 4,
    ACTIONS(1098), 1,
      sym_rparen,
    ACTIONS(1100), 1,
      sym_snake_name,
    STATE(392), 1,
      sym_param_name,
    STATE(419), 1,
      sym_param,
  [12737] = 4,
    ACTIONS(1005), 1,
      sym_lparen,
    ACTIONS(1102), 1,
      sym_arrow,
    ACTIONS(1104), 1,
      sym_colon,
    STATE(514), 1,
      sym_params,
  [12750] = 2,
    ACTIONS(305), 1,
      sym_comment_line,
    ACTIONS(303), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [12759] = 2,
    ACTIONS(283), 1,
      sym_comment_line,
    ACTIONS(281), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [12768] = 3,
    ACTIONS(1080), 1,
      sym_comma,
    STATE(389), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1106), 2,
      sym_newline,
      sym_inline_comment,
  [12779] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1108), 1,
      sym_colon,
    STATE(112), 1,
      sym_line_end,
  [12792] = 3,
    ACTIONS(1112), 1,
      sym_comma,
    STATE(404), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1110), 2,
      sym_newline,
      sym_inline_comment,
  [12803] = 4,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    ACTIONS(1115), 1,
      sym_colon,
    STATE(72), 1,
      sym_line_end,
  [12816] = 2,
    STATE(432), 1,
      sym_text_ref,
    ACTIONS(1117), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12825] = 3,
    ACTIONS(1092), 1,
      sym_comma,
    STATE(393), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1119), 2,
      sym_newline,
      sym_inline_comment,
  [12836] = 2,
    STATE(433), 1,
      sym_text_ref,
    ACTIONS(1117), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12845] = 4,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(1121), 1,
      sym_colon,
    STATE(138), 1,
      sym_line_end,
  [12858] = 4,
    ACTIONS(1005), 1,
      sym_lparen,
    ACTIONS(1123), 1,
      sym_arrow,
    ACTIONS(1125), 1,
      sym_colon,
    STATE(503), 1,
      sym_params,
  [12871] = 4,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(1127), 1,
      sym_colon,
    STATE(155), 1,
      sym_line_end,
  [12884] = 1,
    ACTIONS(1129), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [12891] = 2,
    STATE(508), 1,
      sym_directive_op,
    ACTIONS(1065), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12900] = 3,
    ACTIONS(1131), 1,
      sym_newline,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(255), 1,
      sym_line_end,
  [12910] = 3,
    ACTIONS(1135), 1,
      sym_newline,
    ACTIONS(1137), 1,
      sym_inline_comment,
    STATE(41), 1,
      sym_line_end,
  [12920] = 3,
    ACTIONS(1139), 1,
      sym_newline,
    ACTIONS(1141), 1,
      sym_inline_comment,
    STATE(200), 1,
      sym_line_end,
  [12930] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [12940] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [12950] = 3,
    ACTIONS(1151), 1,
      sym_rparen,
    ACTIONS(1153), 1,
      sym_comma,
    STATE(435), 1,
      aux_sym_params_repeat1,
  [12960] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(160), 1,
      sym_line_end,
  [12970] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
  [12980] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [12990] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
  [13000] = 1,
    ACTIONS(1155), 3,
      sym_newline,
      sym_inline_comment,
      sym_colon,
  [13006] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
  [13016] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(130), 1,
      sym_line_end,
  [13026] = 3,
    ACTIONS(1100), 1,
      sym_snake_name,
    STATE(392), 1,
      sym_param_name,
    STATE(490), 1,
      sym_param,
  [13036] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13046] = 3,
    ACTIONS(1157), 1,
      sym_colon,
    ACTIONS(1159), 1,
      sym_snake_name,
    STATE(569), 1,
      sym_context_name,
  [13056] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(132), 1,
      sym_line_end,
  [13066] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13076] = 3,
    ACTIONS(1139), 1,
      sym_newline,
    ACTIONS(1141), 1,
      sym_inline_comment,
    STATE(194), 1,
      sym_line_end,
  [13086] = 3,
    ACTIONS(1139), 1,
      sym_newline,
    ACTIONS(1141), 1,
      sym_inline_comment,
    STATE(198), 1,
      sym_line_end,
  [13096] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_line_end,
  [13106] = 3,
    ACTIONS(1153), 1,
      sym_comma,
    ACTIONS(1161), 1,
      sym_rparen,
    STATE(445), 1,
      aux_sym_params_repeat1,
  [13116] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [13126] = 3,
    ACTIONS(1163), 1,
      sym_colon,
    ACTIONS(1165), 1,
      sym_snake_name,
    STATE(543), 1,
      sym_instruct_name,
  [13136] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
  [13146] = 2,
    ACTIONS(1167), 1,
      sym_colon,
    ACTIONS(1169), 2,
      sym_rparen,
      sym_comma,
  [13154] = 1,
    ACTIONS(1171), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13160] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13170] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [13180] = 3,
    ACTIONS(1173), 1,
      sym_newline,
    ACTIONS(1175), 1,
      sym_inline_comment,
    STATE(245), 1,
      sym_line_end,
  [13190] = 3,
    ACTIONS(1069), 1,
      sym_newline,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(231), 1,
      sym_line_end,
  [13200] = 3,
    ACTIONS(1177), 1,
      sym_rparen,
    ACTIONS(1179), 1,
      sym_comma,
    STATE(445), 1,
      aux_sym_params_repeat1,
  [13210] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [13220] = 3,
    ACTIONS(1139), 1,
      sym_newline,
    ACTIONS(1141), 1,
      sym_inline_comment,
    STATE(196), 1,
      sym_line_end,
  [13230] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [13240] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
  [13250] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [13260] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
  [13270] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [13280] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
  [13290] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
  [13300] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [13310] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [13320] = 1,
    ACTIONS(1182), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13326] = 1,
    ACTIONS(1184), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13332] = 1,
    ACTIONS(1110), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13338] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(74), 1,
      sym_line_end,
  [13348] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(147), 1,
      sym_line_end,
  [13358] = 3,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1149), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
  [13368] = 3,
    ACTIONS(1186), 1,
      sym_newline,
    ACTIONS(1188), 1,
      sym_inline_comment,
    STATE(205), 1,
      sym_line_end,
  [13378] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(153), 1,
      sym_line_end,
  [13388] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
  [13398] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_line_end,
  [13408] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
  [13418] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(88), 1,
      sym_line_end,
  [13428] = 3,
    ACTIONS(945), 1,
      sym_newline,
    ACTIONS(947), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_line_end,
  [13438] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
  [13448] = 3,
    ACTIONS(1131), 1,
      sym_newline,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(254), 1,
      sym_line_end,
  [13458] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [13468] = 3,
    ACTIONS(1190), 1,
      sym_pascal_name,
    STATE(541), 1,
      sym_struct_name,
    STATE(554), 1,
      sym_type_name,
  [13478] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_line_end,
  [13488] = 3,
    ACTIONS(963), 1,
      sym_newline,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
  [13498] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13508] = 3,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(1192), 1,
      sym_colon,
    STATE(574), 1,
      sym_par_clause,
  [13518] = 3,
    ACTIONS(1173), 1,
      sym_newline,
    ACTIONS(1175), 1,
      sym_inline_comment,
    STATE(243), 1,
      sym_line_end,
  [13528] = 3,
    ACTIONS(1131), 1,
      sym_newline,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(250), 1,
      sym_line_end,
  [13538] = 3,
    ACTIONS(1194), 1,
      sym_newline,
    ACTIONS(1196), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
  [13548] = 1,
    ACTIONS(1073), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13554] = 3,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(1198), 1,
      sym_colon,
    STATE(585), 1,
      sym_par_clause,
  [13564] = 3,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(1115), 1,
      sym_colon,
    STATE(586), 1,
      sym_par_clause,
  [13574] = 3,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1145), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [13584] = 3,
    ACTIONS(951), 1,
      sym_flow_par_keyword,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(528), 1,
      sym_par_clause,
  [13594] = 2,
    ACTIONS(1200), 1,
      sym__snake_kebab_name,
    STATE(525), 1,
      sym_cap_name,
  [13601] = 2,
    ACTIONS(1202), 1,
      sym_snake_name,
    STATE(459), 1,
      sym_callee,
  [13608] = 2,
    ACTIONS(303), 1,
      sym__nested_indented_raw_text,
    ACTIONS(305), 1,
      sym_blank_line,
  [13615] = 2,
    ACTIONS(281), 1,
      sym__nested_indented_raw_text,
    ACTIONS(283), 1,
      sym_blank_line,
  [13622] = 1,
    ACTIONS(1204), 2,
      sym_rparen,
      sym_comma,
  [13627] = 1,
    ACTIONS(1206), 2,
      sym_arrow,
      sym_colon,
  [13632] = 1,
    ACTIONS(1208), 2,
      sym_newline,
      sym_inline_comment,
  [13637] = 2,
    ACTIONS(1210), 1,
      sym_snake_name,
    STATE(465), 1,
      sym_agent,
  [13644] = 1,
    ACTIONS(1212), 2,
      sym_newline,
      sym_inline_comment,
  [13649] = 1,
    ACTIONS(1214), 2,
      sym_optional_marker,
      sym_colon,
  [13654] = 1,
    ACTIONS(1216), 2,
      sym_newline,
      sym_inline_comment,
  [13659] = 1,
    ACTIONS(1218), 2,
      sym_arrow,
      sym_colon,
  [13664] = 1,
    ACTIONS(1220), 2,
      sym_rparen,
      sym_comma,
  [13669] = 2,
    ACTIONS(1222), 1,
      sym_optional_marker,
    ACTIONS(1224), 1,
      sym_colon,
  [13676] = 1,
    ACTIONS(1226), 2,
      sym_rparen,
      sym_comma,
  [13681] = 2,
    ACTIONS(1228), 1,
      sym_text_line,
    STATE(444), 1,
      sym_property_value,
  [13688] = 2,
    ACTIONS(1230), 1,
      sym_text_line,
    STATE(479), 1,
      sym_cap_ref,
  [13695] = 2,
    ACTIONS(1232), 1,
      sym_arrow,
    ACTIONS(1234), 1,
      sym_colon,
  [13702] = 1,
    ACTIONS(305), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13707] = 1,
    ACTIONS(1236), 2,
      sym_newline,
      sym_inline_comment,
  [13712] = 2,
    ACTIONS(1238), 1,
      sym_indented_raw_text,
    STATE(142), 1,
      sym_text_body_line,
  [13719] = 2,
    ACTIONS(1240), 1,
      sym_indented_raw_text,
    STATE(76), 1,
      sym_text_body_line,
  [13726] = 2,
    ACTIONS(1242), 1,
      sym_directive_value,
    STATE(415), 1,
      sym_directive_csv,
  [13733] = 1,
    ACTIONS(1244), 2,
      sym_arrow,
      sym_colon,
  [13738] = 2,
    ACTIONS(1210), 1,
      sym_snake_name,
    STATE(452), 1,
      sym_agent,
  [13745] = 2,
    ACTIONS(1200), 1,
      sym__snake_kebab_name,
    STATE(530), 1,
      sym_cap_name,
  [13752] = 2,
    ACTIONS(1246), 1,
      anon_sym_EQ,
    STATE(501), 1,
      sym_assign_operator,
  [13759] = 1,
    ACTIONS(1248), 2,
      sym_flow_par_keyword,
      sym_colon,
  [13764] = 2,
    ACTIONS(1250), 1,
      sym_arrow,
    ACTIONS(1252), 1,
      sym_colon,
  [13771] = 2,
    ACTIONS(1200), 1,
      sym__snake_kebab_name,
    STATE(526), 1,
      sym_cap_name,
  [13778] = 2,
    ACTIONS(1242), 1,
      sym_directive_value,
    STATE(463), 1,
      sym_directive_csv,
  [13785] = 2,
    ACTIONS(1254), 1,
      sym_arrow,
    ACTIONS(1256), 1,
      sym_colon,
  [13792] = 1,
    ACTIONS(283), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [13797] = 2,
    ACTIONS(1258), 1,
      sym_arrow,
    ACTIONS(1260), 1,
      sym_colon,
  [13804] = 2,
    ACTIONS(1262), 1,
      sym__snake_kebab_name,
    STATE(547), 1,
      sym_job_name,
  [13811] = 2,
    ACTIONS(1200), 1,
      sym__snake_kebab_name,
    STATE(529), 1,
      sym_cap_name,
  [13818] = 2,
    ACTIONS(1262), 1,
      sym__snake_kebab_name,
    STATE(537), 1,
      sym_job_name,
  [13825] = 1,
    ACTIONS(1264), 1,
      sym_newline,
  [13829] = 1,
    ACTIONS(1266), 1,
      sym_colon,
  [13833] = 1,
    ACTIONS(1268), 1,
      sym_colon,
  [13837] = 1,
    ACTIONS(1270), 1,
      sym_colon,
  [13841] = 1,
    ACTIONS(1272), 1,
      sym_colon,
  [13845] = 1,
    ACTIONS(1274), 1,
      sym_colon,
  [13849] = 1,
    ACTIONS(1276), 1,
      sym_colon,
  [13853] = 1,
    ACTIONS(1278), 1,
      sym_colon,
  [13857] = 1,
    ACTIONS(1280), 1,
      anon_sym_EQ,
  [13861] = 1,
    ACTIONS(1282), 1,
      sym_colon,
  [13865] = 1,
    ACTIONS(1284), 1,
      sym_colon,
  [13869] = 1,
    ACTIONS(1286), 1,
      sym_colon,
  [13873] = 1,
    ACTIONS(1288), 1,
      sym_directive_value,
  [13877] = 1,
    ACTIONS(1290), 1,
      sym_directive_value,
  [13881] = 1,
    ACTIONS(1292), 1,
      sym_colon,
  [13885] = 1,
    ACTIONS(1294), 1,
      sym_colon,
  [13889] = 1,
    ACTIONS(1296), 1,
      sym_integer_literal,
  [13893] = 1,
    ACTIONS(1298), 1,
      sym_newline,
  [13897] = 1,
    ACTIONS(1300), 1,
      sym_colon,
  [13901] = 1,
    ACTIONS(1302), 1,
      sym_text_line,
  [13905] = 1,
    ACTIONS(1304), 1,
      sym_colon,
  [13909] = 1,
    ACTIONS(1306), 1,
      sym_newline,
  [13913] = 1,
    ACTIONS(1308), 1,
      sym_newline,
  [13917] = 1,
    ACTIONS(1310), 1,
      sym_colon,
  [13921] = 1,
    ACTIONS(1312), 1,
      sym_colon,
  [13925] = 1,
    ACTIONS(1314), 1,
      sym_colon,
  [13929] = 1,
    ACTIONS(1316), 1,
      ts_builtin_sym_end,
  [13933] = 1,
    ACTIONS(1318), 1,
      sym_colon,
  [13937] = 1,
    ACTIONS(1320), 1,
      sym_cap_kind,
  [13941] = 1,
    ACTIONS(1322), 1,
      sym_newline,
  [13945] = 1,
    ACTIONS(1324), 1,
      sym_newline,
  [13949] = 1,
    ACTIONS(1326), 1,
      sym_colon,
  [13953] = 1,
    ACTIONS(1328), 1,
      sym_integer_literal,
  [13957] = 1,
    ACTIONS(1330), 1,
      sym_newline,
  [13961] = 1,
    ACTIONS(1332), 1,
      sym_newline,
  [13965] = 1,
    ACTIONS(1334), 1,
      sym_newline,
  [13969] = 1,
    ACTIONS(1336), 1,
      sym_colon,
  [13973] = 1,
    ACTIONS(1338), 1,
      sym_newline,
  [13977] = 1,
    ACTIONS(1340), 1,
      sym_newline,
  [13981] = 1,
    ACTIONS(1342), 1,
      sym_newline,
  [13985] = 1,
    ACTIONS(1344), 1,
      sym_newline,
  [13989] = 1,
    ACTIONS(1346), 1,
      sym_newline,
  [13993] = 1,
    ACTIONS(1348), 1,
      sym_newline,
  [13997] = 1,
    ACTIONS(1350), 1,
      sym_newline,
  [14001] = 1,
    ACTIONS(1352), 1,
      sym_newline,
  [14005] = 1,
    ACTIONS(1354), 1,
      sym_colon,
  [14009] = 1,
    ACTIONS(1356), 1,
      sym_colon,
  [14013] = 1,
    ACTIONS(1192), 1,
      sym_colon,
  [14017] = 1,
    ACTIONS(1358), 1,
      sym_newline,
  [14021] = 1,
    ACTIONS(1360), 1,
      sym_colon,
  [14025] = 1,
    ACTIONS(1362), 1,
      sym_colon,
  [14029] = 1,
    ACTIONS(1364), 1,
      sym_colon,
  [14033] = 1,
    ACTIONS(1366), 1,
      sym_colon,
  [14037] = 1,
    ACTIONS(1368), 1,
      sym_colon,
  [14041] = 1,
    ACTIONS(1370), 1,
      sym_colon,
  [14045] = 1,
    ACTIONS(1372), 1,
      sym_colon,
  [14049] = 1,
    ACTIONS(1198), 1,
      sym_colon,
  [14053] = 1,
    ACTIONS(1374), 1,
      sym_newline,
  [14057] = 1,
    ACTIONS(1376), 1,
      sym_colon,
  [14061] = 1,
    ACTIONS(1378), 1,
      sym_colon,
  [14065] = 1,
    ACTIONS(1380), 1,
      sym_colon,
  [14069] = 1,
    ACTIONS(1382), 1,
      sym_colon,
  [14073] = 1,
    ACTIONS(1384), 1,
      sym_colon,
  [14077] = 1,
    ACTIONS(1386), 1,
      sym_colon,
  [14081] = 1,
    ACTIONS(1388), 1,
      sym_colon,
  [14085] = 1,
    ACTIONS(1390), 1,
      sym_colon,
  [14089] = 1,
    ACTIONS(1392), 1,
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
  [SMALL_STATE(39)] = 2886,
  [SMALL_STATE(40)] = 2922,
  [SMALL_STATE(41)] = 2982,
  [SMALL_STATE(42)] = 3018,
  [SMALL_STATE(43)] = 3078,
  [SMALL_STATE(44)] = 3138,
  [SMALL_STATE(45)] = 3182,
  [SMALL_STATE(46)] = 3218,
  [SMALL_STATE(47)] = 3259,
  [SMALL_STATE(48)] = 3314,
  [SMALL_STATE(49)] = 3369,
  [SMALL_STATE(50)] = 3424,
  [SMALL_STATE(51)] = 3463,
  [SMALL_STATE(52)] = 3504,
  [SMALL_STATE(53)] = 3543,
  [SMALL_STATE(54)] = 3582,
  [SMALL_STATE(55)] = 3625,
  [SMALL_STATE(56)] = 3666,
  [SMALL_STATE(57)] = 3705,
  [SMALL_STATE(58)] = 3744,
  [SMALL_STATE(59)] = 3787,
  [SMALL_STATE(60)] = 3826,
  [SMALL_STATE(61)] = 3865,
  [SMALL_STATE(62)] = 3905,
  [SMALL_STATE(63)] = 3943,
  [SMALL_STATE(64)] = 3983,
  [SMALL_STATE(65)] = 4021,
  [SMALL_STATE(66)] = 4059,
  [SMALL_STATE(67)] = 4097,
  [SMALL_STATE(68)] = 4137,
  [SMALL_STATE(69)] = 4171,
  [SMALL_STATE(70)] = 4205,
  [SMALL_STATE(71)] = 4238,
  [SMALL_STATE(72)] = 4271,
  [SMALL_STATE(73)] = 4304,
  [SMALL_STATE(74)] = 4337,
  [SMALL_STATE(75)] = 4370,
  [SMALL_STATE(76)] = 4403,
  [SMALL_STATE(77)] = 4436,
  [SMALL_STATE(78)] = 4469,
  [SMALL_STATE(79)] = 4506,
  [SMALL_STATE(80)] = 4539,
  [SMALL_STATE(81)] = 4572,
  [SMALL_STATE(82)] = 4605,
  [SMALL_STATE(83)] = 4638,
  [SMALL_STATE(84)] = 4671,
  [SMALL_STATE(85)] = 4704,
  [SMALL_STATE(86)] = 4737,
  [SMALL_STATE(87)] = 4770,
  [SMALL_STATE(88)] = 4803,
  [SMALL_STATE(89)] = 4836,
  [SMALL_STATE(90)] = 4869,
  [SMALL_STATE(91)] = 4906,
  [SMALL_STATE(92)] = 4939,
  [SMALL_STATE(93)] = 4972,
  [SMALL_STATE(94)] = 5005,
  [SMALL_STATE(95)] = 5038,
  [SMALL_STATE(96)] = 5071,
  [SMALL_STATE(97)] = 5104,
  [SMALL_STATE(98)] = 5137,
  [SMALL_STATE(99)] = 5170,
  [SMALL_STATE(100)] = 5203,
  [SMALL_STATE(101)] = 5236,
  [SMALL_STATE(102)] = 5269,
  [SMALL_STATE(103)] = 5302,
  [SMALL_STATE(104)] = 5335,
  [SMALL_STATE(105)] = 5368,
  [SMALL_STATE(106)] = 5401,
  [SMALL_STATE(107)] = 5434,
  [SMALL_STATE(108)] = 5467,
  [SMALL_STATE(109)] = 5500,
  [SMALL_STATE(110)] = 5533,
  [SMALL_STATE(111)] = 5566,
  [SMALL_STATE(112)] = 5599,
  [SMALL_STATE(113)] = 5632,
  [SMALL_STATE(114)] = 5665,
  [SMALL_STATE(115)] = 5698,
  [SMALL_STATE(116)] = 5731,
  [SMALL_STATE(117)] = 5764,
  [SMALL_STATE(118)] = 5797,
  [SMALL_STATE(119)] = 5829,
  [SMALL_STATE(120)] = 5861,
  [SMALL_STATE(121)] = 5893,
  [SMALL_STATE(122)] = 5925,
  [SMALL_STATE(123)] = 5957,
  [SMALL_STATE(124)] = 5989,
  [SMALL_STATE(125)] = 6021,
  [SMALL_STATE(126)] = 6053,
  [SMALL_STATE(127)] = 6085,
  [SMALL_STATE(128)] = 6117,
  [SMALL_STATE(129)] = 6149,
  [SMALL_STATE(130)] = 6181,
  [SMALL_STATE(131)] = 6213,
  [SMALL_STATE(132)] = 6245,
  [SMALL_STATE(133)] = 6277,
  [SMALL_STATE(134)] = 6309,
  [SMALL_STATE(135)] = 6341,
  [SMALL_STATE(136)] = 6373,
  [SMALL_STATE(137)] = 6405,
  [SMALL_STATE(138)] = 6437,
  [SMALL_STATE(139)] = 6469,
  [SMALL_STATE(140)] = 6501,
  [SMALL_STATE(141)] = 6533,
  [SMALL_STATE(142)] = 6565,
  [SMALL_STATE(143)] = 6597,
  [SMALL_STATE(144)] = 6629,
  [SMALL_STATE(145)] = 6661,
  [SMALL_STATE(146)] = 6693,
  [SMALL_STATE(147)] = 6725,
  [SMALL_STATE(148)] = 6757,
  [SMALL_STATE(149)] = 6789,
  [SMALL_STATE(150)] = 6821,
  [SMALL_STATE(151)] = 6853,
  [SMALL_STATE(152)] = 6885,
  [SMALL_STATE(153)] = 6917,
  [SMALL_STATE(154)] = 6949,
  [SMALL_STATE(155)] = 6981,
  [SMALL_STATE(156)] = 7013,
  [SMALL_STATE(157)] = 7045,
  [SMALL_STATE(158)] = 7077,
  [SMALL_STATE(159)] = 7109,
  [SMALL_STATE(160)] = 7141,
  [SMALL_STATE(161)] = 7173,
  [SMALL_STATE(162)] = 7212,
  [SMALL_STATE(163)] = 7249,
  [SMALL_STATE(164)] = 7288,
  [SMALL_STATE(165)] = 7335,
  [SMALL_STATE(166)] = 7374,
  [SMALL_STATE(167)] = 7421,
  [SMALL_STATE(168)] = 7460,
  [SMALL_STATE(169)] = 7499,
  [SMALL_STATE(170)] = 7538,
  [SMALL_STATE(171)] = 7575,
  [SMALL_STATE(172)] = 7612,
  [SMALL_STATE(173)] = 7659,
  [SMALL_STATE(174)] = 7696,
  [SMALL_STATE(175)] = 7743,
  [SMALL_STATE(176)] = 7780,
  [SMALL_STATE(177)] = 7814,
  [SMALL_STATE(178)] = 7848,
  [SMALL_STATE(179)] = 7882,
  [SMALL_STATE(180)] = 7914,
  [SMALL_STATE(181)] = 7948,
  [SMALL_STATE(182)] = 7982,
  [SMALL_STATE(183)] = 8011,
  [SMALL_STATE(184)] = 8040,
  [SMALL_STATE(185)] = 8091,
  [SMALL_STATE(186)] = 8120,
  [SMALL_STATE(187)] = 8171,
  [SMALL_STATE(188)] = 8222,
  [SMALL_STATE(189)] = 8273,
  [SMALL_STATE(190)] = 8301,
  [SMALL_STATE(191)] = 8337,
  [SMALL_STATE(192)] = 8365,
  [SMALL_STATE(193)] = 8393,
  [SMALL_STATE(194)] = 8419,
  [SMALL_STATE(195)] = 8447,
  [SMALL_STATE(196)] = 8473,
  [SMALL_STATE(197)] = 8501,
  [SMALL_STATE(198)] = 8529,
  [SMALL_STATE(199)] = 8557,
  [SMALL_STATE(200)] = 8585,
  [SMALL_STATE(201)] = 8613,
  [SMALL_STATE(202)] = 8641,
  [SMALL_STATE(203)] = 8669,
  [SMALL_STATE(204)] = 8699,
  [SMALL_STATE(205)] = 8727,
  [SMALL_STATE(206)] = 8752,
  [SMALL_STATE(207)] = 8777,
  [SMALL_STATE(208)] = 8802,
  [SMALL_STATE(209)] = 8838,
  [SMALL_STATE(210)] = 8862,
  [SMALL_STATE(211)] = 8898,
  [SMALL_STATE(212)] = 8922,
  [SMALL_STATE(213)] = 8953,
  [SMALL_STATE(214)] = 8984,
  [SMALL_STATE(215)] = 9012,
  [SMALL_STATE(216)] = 9040,
  [SMALL_STATE(217)] = 9068,
  [SMALL_STATE(218)] = 9096,
  [SMALL_STATE(219)] = 9124,
  [SMALL_STATE(220)] = 9152,
  [SMALL_STATE(221)] = 9180,
  [SMALL_STATE(222)] = 9208,
  [SMALL_STATE(223)] = 9236,
  [SMALL_STATE(224)] = 9264,
  [SMALL_STATE(225)] = 9292,
  [SMALL_STATE(226)] = 9320,
  [SMALL_STATE(227)] = 9344,
  [SMALL_STATE(228)] = 9368,
  [SMALL_STATE(229)] = 9396,
  [SMALL_STATE(230)] = 9424,
  [SMALL_STATE(231)] = 9452,
  [SMALL_STATE(232)] = 9476,
  [SMALL_STATE(233)] = 9504,
  [SMALL_STATE(234)] = 9532,
  [SMALL_STATE(235)] = 9560,
  [SMALL_STATE(236)] = 9588,
  [SMALL_STATE(237)] = 9616,
  [SMALL_STATE(238)] = 9644,
  [SMALL_STATE(239)] = 9672,
  [SMALL_STATE(240)] = 9698,
  [SMALL_STATE(241)] = 9726,
  [SMALL_STATE(242)] = 9749,
  [SMALL_STATE(243)] = 9772,
  [SMALL_STATE(244)] = 9795,
  [SMALL_STATE(245)] = 9818,
  [SMALL_STATE(246)] = 9841,
  [SMALL_STATE(247)] = 9863,
  [SMALL_STATE(248)] = 9885,
  [SMALL_STATE(249)] = 9907,
  [SMALL_STATE(250)] = 9929,
  [SMALL_STATE(251)] = 9951,
  [SMALL_STATE(252)] = 9973,
  [SMALL_STATE(253)] = 9995,
  [SMALL_STATE(254)] = 10017,
  [SMALL_STATE(255)] = 10039,
  [SMALL_STATE(256)] = 10061,
  [SMALL_STATE(257)] = 10083,
  [SMALL_STATE(258)] = 10105,
  [SMALL_STATE(259)] = 10127,
  [SMALL_STATE(260)] = 10149,
  [SMALL_STATE(261)] = 10171,
  [SMALL_STATE(262)] = 10193,
  [SMALL_STATE(263)] = 10215,
  [SMALL_STATE(264)] = 10237,
  [SMALL_STATE(265)] = 10259,
  [SMALL_STATE(266)] = 10281,
  [SMALL_STATE(267)] = 10303,
  [SMALL_STATE(268)] = 10325,
  [SMALL_STATE(269)] = 10347,
  [SMALL_STATE(270)] = 10369,
  [SMALL_STATE(271)] = 10391,
  [SMALL_STATE(272)] = 10413,
  [SMALL_STATE(273)] = 10435,
  [SMALL_STATE(274)] = 10457,
  [SMALL_STATE(275)] = 10479,
  [SMALL_STATE(276)] = 10501,
  [SMALL_STATE(277)] = 10523,
  [SMALL_STATE(278)] = 10545,
  [SMALL_STATE(279)] = 10567,
  [SMALL_STATE(280)] = 10589,
  [SMALL_STATE(281)] = 10611,
  [SMALL_STATE(282)] = 10633,
  [SMALL_STATE(283)] = 10655,
  [SMALL_STATE(284)] = 10680,
  [SMALL_STATE(285)] = 10705,
  [SMALL_STATE(286)] = 10730,
  [SMALL_STATE(287)] = 10755,
  [SMALL_STATE(288)] = 10780,
  [SMALL_STATE(289)] = 10805,
  [SMALL_STATE(290)] = 10830,
  [SMALL_STATE(291)] = 10855,
  [SMALL_STATE(292)] = 10880,
  [SMALL_STATE(293)] = 10905,
  [SMALL_STATE(294)] = 10930,
  [SMALL_STATE(295)] = 10955,
  [SMALL_STATE(296)] = 10980,
  [SMALL_STATE(297)] = 10998,
  [SMALL_STATE(298)] = 11016,
  [SMALL_STATE(299)] = 11034,
  [SMALL_STATE(300)] = 11055,
  [SMALL_STATE(301)] = 11078,
  [SMALL_STATE(302)] = 11103,
  [SMALL_STATE(303)] = 11128,
  [SMALL_STATE(304)] = 11153,
  [SMALL_STATE(305)] = 11176,
  [SMALL_STATE(306)] = 11201,
  [SMALL_STATE(307)] = 11221,
  [SMALL_STATE(308)] = 11241,
  [SMALL_STATE(309)] = 11261,
  [SMALL_STATE(310)] = 11283,
  [SMALL_STATE(311)] = 11305,
  [SMALL_STATE(312)] = 11325,
  [SMALL_STATE(313)] = 11347,
  [SMALL_STATE(314)] = 11367,
  [SMALL_STATE(315)] = 11389,
  [SMALL_STATE(316)] = 11409,
  [SMALL_STATE(317)] = 11429,
  [SMALL_STATE(318)] = 11449,
  [SMALL_STATE(319)] = 11459,
  [SMALL_STATE(320)] = 11479,
  [SMALL_STATE(321)] = 11499,
  [SMALL_STATE(322)] = 11509,
  [SMALL_STATE(323)] = 11529,
  [SMALL_STATE(324)] = 11539,
  [SMALL_STATE(325)] = 11559,
  [SMALL_STATE(326)] = 11569,
  [SMALL_STATE(327)] = 11589,
  [SMALL_STATE(328)] = 11611,
  [SMALL_STATE(329)] = 11631,
  [SMALL_STATE(330)] = 11651,
  [SMALL_STATE(331)] = 11671,
  [SMALL_STATE(332)] = 11691,
  [SMALL_STATE(333)] = 11711,
  [SMALL_STATE(334)] = 11731,
  [SMALL_STATE(335)] = 11751,
  [SMALL_STATE(336)] = 11761,
  [SMALL_STATE(337)] = 11781,
  [SMALL_STATE(338)] = 11801,
  [SMALL_STATE(339)] = 11821,
  [SMALL_STATE(340)] = 11841,
  [SMALL_STATE(341)] = 11861,
  [SMALL_STATE(342)] = 11881,
  [SMALL_STATE(343)] = 11901,
  [SMALL_STATE(344)] = 11921,
  [SMALL_STATE(345)] = 11941,
  [SMALL_STATE(346)] = 11961,
  [SMALL_STATE(347)] = 11981,
  [SMALL_STATE(348)] = 11991,
  [SMALL_STATE(349)] = 12011,
  [SMALL_STATE(350)] = 12033,
  [SMALL_STATE(351)] = 12053,
  [SMALL_STATE(352)] = 12062,
  [SMALL_STATE(353)] = 12079,
  [SMALL_STATE(354)] = 12098,
  [SMALL_STATE(355)] = 12117,
  [SMALL_STATE(356)] = 12136,
  [SMALL_STATE(357)] = 12155,
  [SMALL_STATE(358)] = 12172,
  [SMALL_STATE(359)] = 12188,
  [SMALL_STATE(360)] = 12204,
  [SMALL_STATE(361)] = 12220,
  [SMALL_STATE(362)] = 12236,
  [SMALL_STATE(363)] = 12246,
  [SMALL_STATE(364)] = 12262,
  [SMALL_STATE(365)] = 12278,
  [SMALL_STATE(366)] = 12294,
  [SMALL_STATE(367)] = 12310,
  [SMALL_STATE(368)] = 12326,
  [SMALL_STATE(369)] = 12342,
  [SMALL_STATE(370)] = 12358,
  [SMALL_STATE(371)] = 12374,
  [SMALL_STATE(372)] = 12390,
  [SMALL_STATE(373)] = 12406,
  [SMALL_STATE(374)] = 12422,
  [SMALL_STATE(375)] = 12438,
  [SMALL_STATE(376)] = 12452,
  [SMALL_STATE(377)] = 12468,
  [SMALL_STATE(378)] = 12484,
  [SMALL_STATE(379)] = 12500,
  [SMALL_STATE(380)] = 12514,
  [SMALL_STATE(381)] = 12530,
  [SMALL_STATE(382)] = 12546,
  [SMALL_STATE(383)] = 12559,
  [SMALL_STATE(384)] = 12568,
  [SMALL_STATE(385)] = 12581,
  [SMALL_STATE(386)] = 12594,
  [SMALL_STATE(387)] = 12607,
  [SMALL_STATE(388)] = 12620,
  [SMALL_STATE(389)] = 12633,
  [SMALL_STATE(390)] = 12644,
  [SMALL_STATE(391)] = 12655,
  [SMALL_STATE(392)] = 12662,
  [SMALL_STATE(393)] = 12673,
  [SMALL_STATE(394)] = 12684,
  [SMALL_STATE(395)] = 12697,
  [SMALL_STATE(396)] = 12710,
  [SMALL_STATE(397)] = 12717,
  [SMALL_STATE(398)] = 12724,
  [SMALL_STATE(399)] = 12737,
  [SMALL_STATE(400)] = 12750,
  [SMALL_STATE(401)] = 12759,
  [SMALL_STATE(402)] = 12768,
  [SMALL_STATE(403)] = 12779,
  [SMALL_STATE(404)] = 12792,
  [SMALL_STATE(405)] = 12803,
  [SMALL_STATE(406)] = 12816,
  [SMALL_STATE(407)] = 12825,
  [SMALL_STATE(408)] = 12836,
  [SMALL_STATE(409)] = 12845,
  [SMALL_STATE(410)] = 12858,
  [SMALL_STATE(411)] = 12871,
  [SMALL_STATE(412)] = 12884,
  [SMALL_STATE(413)] = 12891,
  [SMALL_STATE(414)] = 12900,
  [SMALL_STATE(415)] = 12910,
  [SMALL_STATE(416)] = 12920,
  [SMALL_STATE(417)] = 12930,
  [SMALL_STATE(418)] = 12940,
  [SMALL_STATE(419)] = 12950,
  [SMALL_STATE(420)] = 12960,
  [SMALL_STATE(421)] = 12970,
  [SMALL_STATE(422)] = 12980,
  [SMALL_STATE(423)] = 12990,
  [SMALL_STATE(424)] = 13000,
  [SMALL_STATE(425)] = 13006,
  [SMALL_STATE(426)] = 13016,
  [SMALL_STATE(427)] = 13026,
  [SMALL_STATE(428)] = 13036,
  [SMALL_STATE(429)] = 13046,
  [SMALL_STATE(430)] = 13056,
  [SMALL_STATE(431)] = 13066,
  [SMALL_STATE(432)] = 13076,
  [SMALL_STATE(433)] = 13086,
  [SMALL_STATE(434)] = 13096,
  [SMALL_STATE(435)] = 13106,
  [SMALL_STATE(436)] = 13116,
  [SMALL_STATE(437)] = 13126,
  [SMALL_STATE(438)] = 13136,
  [SMALL_STATE(439)] = 13146,
  [SMALL_STATE(440)] = 13154,
  [SMALL_STATE(441)] = 13160,
  [SMALL_STATE(442)] = 13170,
  [SMALL_STATE(443)] = 13180,
  [SMALL_STATE(444)] = 13190,
  [SMALL_STATE(445)] = 13200,
  [SMALL_STATE(446)] = 13210,
  [SMALL_STATE(447)] = 13220,
  [SMALL_STATE(448)] = 13230,
  [SMALL_STATE(449)] = 13240,
  [SMALL_STATE(450)] = 13250,
  [SMALL_STATE(451)] = 13260,
  [SMALL_STATE(452)] = 13270,
  [SMALL_STATE(453)] = 13280,
  [SMALL_STATE(454)] = 13290,
  [SMALL_STATE(455)] = 13300,
  [SMALL_STATE(456)] = 13310,
  [SMALL_STATE(457)] = 13320,
  [SMALL_STATE(458)] = 13326,
  [SMALL_STATE(459)] = 13332,
  [SMALL_STATE(460)] = 13338,
  [SMALL_STATE(461)] = 13348,
  [SMALL_STATE(462)] = 13358,
  [SMALL_STATE(463)] = 13368,
  [SMALL_STATE(464)] = 13378,
  [SMALL_STATE(465)] = 13388,
  [SMALL_STATE(466)] = 13398,
  [SMALL_STATE(467)] = 13408,
  [SMALL_STATE(468)] = 13418,
  [SMALL_STATE(469)] = 13428,
  [SMALL_STATE(470)] = 13438,
  [SMALL_STATE(471)] = 13448,
  [SMALL_STATE(472)] = 13458,
  [SMALL_STATE(473)] = 13468,
  [SMALL_STATE(474)] = 13478,
  [SMALL_STATE(475)] = 13488,
  [SMALL_STATE(476)] = 13498,
  [SMALL_STATE(477)] = 13508,
  [SMALL_STATE(478)] = 13518,
  [SMALL_STATE(479)] = 13528,
  [SMALL_STATE(480)] = 13538,
  [SMALL_STATE(481)] = 13548,
  [SMALL_STATE(482)] = 13554,
  [SMALL_STATE(483)] = 13564,
  [SMALL_STATE(484)] = 13574,
  [SMALL_STATE(485)] = 13584,
  [SMALL_STATE(486)] = 13594,
  [SMALL_STATE(487)] = 13601,
  [SMALL_STATE(488)] = 13608,
  [SMALL_STATE(489)] = 13615,
  [SMALL_STATE(490)] = 13622,
  [SMALL_STATE(491)] = 13627,
  [SMALL_STATE(492)] = 13632,
  [SMALL_STATE(493)] = 13637,
  [SMALL_STATE(494)] = 13644,
  [SMALL_STATE(495)] = 13649,
  [SMALL_STATE(496)] = 13654,
  [SMALL_STATE(497)] = 13659,
  [SMALL_STATE(498)] = 13664,
  [SMALL_STATE(499)] = 13669,
  [SMALL_STATE(500)] = 13676,
  [SMALL_STATE(501)] = 13681,
  [SMALL_STATE(502)] = 13688,
  [SMALL_STATE(503)] = 13695,
  [SMALL_STATE(504)] = 13702,
  [SMALL_STATE(505)] = 13707,
  [SMALL_STATE(506)] = 13712,
  [SMALL_STATE(507)] = 13719,
  [SMALL_STATE(508)] = 13726,
  [SMALL_STATE(509)] = 13733,
  [SMALL_STATE(510)] = 13738,
  [SMALL_STATE(511)] = 13745,
  [SMALL_STATE(512)] = 13752,
  [SMALL_STATE(513)] = 13759,
  [SMALL_STATE(514)] = 13764,
  [SMALL_STATE(515)] = 13771,
  [SMALL_STATE(516)] = 13778,
  [SMALL_STATE(517)] = 13785,
  [SMALL_STATE(518)] = 13792,
  [SMALL_STATE(519)] = 13797,
  [SMALL_STATE(520)] = 13804,
  [SMALL_STATE(521)] = 13811,
  [SMALL_STATE(522)] = 13818,
  [SMALL_STATE(523)] = 13825,
  [SMALL_STATE(524)] = 13829,
  [SMALL_STATE(525)] = 13833,
  [SMALL_STATE(526)] = 13837,
  [SMALL_STATE(527)] = 13841,
  [SMALL_STATE(528)] = 13845,
  [SMALL_STATE(529)] = 13849,
  [SMALL_STATE(530)] = 13853,
  [SMALL_STATE(531)] = 13857,
  [SMALL_STATE(532)] = 13861,
  [SMALL_STATE(533)] = 13865,
  [SMALL_STATE(534)] = 13869,
  [SMALL_STATE(535)] = 13873,
  [SMALL_STATE(536)] = 13877,
  [SMALL_STATE(537)] = 13881,
  [SMALL_STATE(538)] = 13885,
  [SMALL_STATE(539)] = 13889,
  [SMALL_STATE(540)] = 13893,
  [SMALL_STATE(541)] = 13897,
  [SMALL_STATE(542)] = 13901,
  [SMALL_STATE(543)] = 13905,
  [SMALL_STATE(544)] = 13909,
  [SMALL_STATE(545)] = 13913,
  [SMALL_STATE(546)] = 13917,
  [SMALL_STATE(547)] = 13921,
  [SMALL_STATE(548)] = 13925,
  [SMALL_STATE(549)] = 13929,
  [SMALL_STATE(550)] = 13933,
  [SMALL_STATE(551)] = 13937,
  [SMALL_STATE(552)] = 13941,
  [SMALL_STATE(553)] = 13945,
  [SMALL_STATE(554)] = 13949,
  [SMALL_STATE(555)] = 13953,
  [SMALL_STATE(556)] = 13957,
  [SMALL_STATE(557)] = 13961,
  [SMALL_STATE(558)] = 13965,
  [SMALL_STATE(559)] = 13969,
  [SMALL_STATE(560)] = 13973,
  [SMALL_STATE(561)] = 13977,
  [SMALL_STATE(562)] = 13981,
  [SMALL_STATE(563)] = 13985,
  [SMALL_STATE(564)] = 13989,
  [SMALL_STATE(565)] = 13993,
  [SMALL_STATE(566)] = 13997,
  [SMALL_STATE(567)] = 14001,
  [SMALL_STATE(568)] = 14005,
  [SMALL_STATE(569)] = 14009,
  [SMALL_STATE(570)] = 14013,
  [SMALL_STATE(571)] = 14017,
  [SMALL_STATE(572)] = 14021,
  [SMALL_STATE(573)] = 14025,
  [SMALL_STATE(574)] = 14029,
  [SMALL_STATE(575)] = 14033,
  [SMALL_STATE(576)] = 14037,
  [SMALL_STATE(577)] = 14041,
  [SMALL_STATE(578)] = 14045,
  [SMALL_STATE(579)] = 14049,
  [SMALL_STATE(580)] = 14053,
  [SMALL_STATE(581)] = 14057,
  [SMALL_STATE(582)] = 14061,
  [SMALL_STATE(583)] = 14065,
  [SMALL_STATE(584)] = 14069,
  [SMALL_STATE(585)] = 14073,
  [SMALL_STATE(586)] = 14077,
  [SMALL_STATE(587)] = 14081,
  [SMALL_STATE(588)] = 14085,
  [SMALL_STATE(589)] = 14089,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 22),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 22),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 23),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 13),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
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
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
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
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(179),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(203),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(216),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(216),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 26),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 26),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 17),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 17),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 19),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 19),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 12),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 12),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 12),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 12),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 21),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 21),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 21),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 24),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 24),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 24),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 24),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 12),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 12),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 27),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 27),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 19),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 19),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 27),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 27),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 14), SHIFT_REPEAT(323),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 11),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 16), SHIFT_REPEAT(427),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 10),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 15),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 17),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 10),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
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
