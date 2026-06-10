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
#define STATE_COUNT 618
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  sym__unroled_message_continuation_text = 72,
  sym__nested_indented_raw_text = 73,
  sym_source_file = 74,
  sym_item = 75,
  sym_line_end = 76,
  sym__trivia = 77,
  sym_use = 78,
  sym_type = 79,
  sym_base_type = 80,
  sym_builtin_type = 81,
  sym_user_type = 82,
  sym_type_suffix = 83,
  sym_struct = 84,
  sym_struct_name = 85,
  sym_struct_body = 86,
  sym_field = 87,
  sym_field_name = 88,
  sym_psyche = 89,
  sym_skill = 90,
  sym_service = 91,
  sym_prompt = 92,
  sym_task = 93,
  sym_chore = 94,
  sym_cap_name = 95,
  sym_cap_ref = 96,
  sym_job_name = 97,
  sym_cap_body = 98,
  sym_job_body = 99,
  sym_property = 100,
  sym_property_key = 101,
  sym_property_value = 102,
  sym_instruct = 103,
  sym_instruct_name = 104,
  sym_instruct_body = 105,
  sym_context = 106,
  sym_context_name = 107,
  sym_context_body = 108,
  sym_text_inline = 109,
  sym_text_block = 110,
  sym_text_body = 111,
  sym_text_body_line = 112,
  sym__nested_text_inline_alias = 113,
  sym__nested_text_inline = 114,
  sym__nested_text_block = 115,
  sym__nested_text_body = 116,
  sym__nested_text_body_line = 117,
  sym_thunk = 118,
  sym_thunk_name = 119,
  sym_thunk_body = 120,
  sym_params = 121,
  sym_param = 122,
  sym_param_name = 123,
  sym_flow = 124,
  sym_flow_name = 125,
  sym_flow_body = 126,
  sym_statements = 127,
  sym__flow_statement = 128,
  sym_do_statement = 129,
  sym_implicit_do_statement = 130,
  sym__implicit_do_text_body_line = 131,
  sym_invalid_flow_reserved_statement = 132,
  sym_ask_statement = 133,
  sym_unfold_statement = 134,
  sym_keep_statement = 135,
  sym_drop_statement = 136,
  sym_rank_statement = 137,
  sym_each_statement = 138,
  sym_fold_statement = 139,
  sym_repeat_above_statement = 140,
  sym_repeat_block_statement = 141,
  sym_repeat_body = 142,
  sym_until_clause = 143,
  sym_until_statement = 144,
  sym_condition = 145,
  sym_to_clause = 146,
  sym_par_clause = 147,
  sym_limit_clause = 148,
  sym_times_clause = 149,
  sym_callees = 150,
  sym_callee = 151,
  sym_agent = 152,
  sym_directive = 153,
  sym_directive_key = 154,
  sym_directive_op = 155,
  sym_directive_csv = 156,
  sym__directives = 157,
  sym_settings = 158,
  sym_context_setting = 159,
  sym_instruct_setting = 160,
  sym_text_ref = 161,
  sym_messages = 162,
  sym_message = 163,
  sym_unroled_message = 164,
  sym__unroled_message_initial_line = 165,
  sym__unroled_message_continuation_line = 166,
  sym_invalid_thunk_reserved_message = 167,
  sym_role = 168,
  sym__pass_statement = 169,
  sym__flow_reserved_word = 170,
  sym__thunk_reserved_word = 171,
  sym_assign_operator = 172,
  sym_type_name = 173,
  aux_sym_source_file_repeat1 = 174,
  aux_sym_type_repeat1 = 175,
  aux_sym_struct_body_repeat1 = 176,
  aux_sym_cap_body_repeat1 = 177,
  aux_sym_cap_body_repeat2 = 178,
  aux_sym_text_body_repeat1 = 179,
  aux_sym__nested_text_body_repeat1 = 180,
  aux_sym_params_repeat1 = 181,
  aux_sym_statements_repeat1 = 182,
  aux_sym_implicit_do_statement_repeat1 = 183,
  aux_sym_callees_repeat1 = 184,
  aux_sym_directive_csv_repeat1 = 185,
  aux_sym__directives_repeat1 = 186,
  aux_sym_messages_repeat1 = 187,
  aux_sym_unroled_message_repeat1 = 188,
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
  [sym__unroled_message_continuation_text] = "indented_raw_text",
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
  [sym_invalid_flow_reserved_statement] = "invalid_flow_reserved_statement",
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
  [sym_until_statement] = "until_statement",
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
  [sym_unroled_message] = "unroled_message",
  [sym__unroled_message_initial_line] = "text_body_line",
  [sym__unroled_message_continuation_line] = "text_body_line",
  [sym_invalid_thunk_reserved_message] = "invalid_thunk_reserved_message",
  [sym_role] = "role",
  [sym__pass_statement] = "_pass_statement",
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__thunk_reserved_word] = "_thunk_reserved_word",
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
  [sym__unroled_message_continuation_text] = sym_indented_raw_text,
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
  [sym_invalid_flow_reserved_statement] = sym_invalid_flow_reserved_statement,
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
  [sym_until_statement] = sym_until_statement,
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
  [sym_unroled_message] = sym_unroled_message,
  [sym__unroled_message_initial_line] = sym_text_body_line,
  [sym__unroled_message_continuation_line] = sym_text_body_line,
  [sym_invalid_thunk_reserved_message] = sym_invalid_thunk_reserved_message,
  [sym_role] = sym_role,
  [sym__pass_statement] = sym__pass_statement,
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__thunk_reserved_word] = sym__thunk_reserved_word,
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
  [sym__unroled_message_continuation_text] = {
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
  [sym_invalid_flow_reserved_statement] = {
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
  [sym_until_statement] = {
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
  [sym_invalid_thunk_reserved_message] = {
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
  [sym__thunk_reserved_word] = {
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
  [aux_sym_unroled_message_repeat1] = {
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
  [11] = {.index = 23, .length = 1},
  [12] = {.index = 24, .length = 2},
  [13] = {.index = 26, .length = 4},
  [14] = {.index = 30, .length = 1},
  [15] = {.index = 31, .length = 2},
  [16] = {.index = 33, .length = 2},
  [17] = {.index = 35, .length = 2},
  [18] = {.index = 37, .length = 3},
  [19] = {.index = 40, .length = 4},
  [20] = {.index = 44, .length = 5},
  [21] = {.index = 49, .length = 1},
  [22] = {.index = 50, .length = 4},
  [23] = {.index = 54, .length = 5},
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
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [49] =
    {field_content, 1, .inherited = true},
  [50] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [54] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
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
  [18] = 17,
  [19] = 15,
  [20] = 16,
  [21] = 14,
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
  [69] = 46,
  [70] = 47,
  [71] = 47,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 46,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 65,
  [90] = 66,
  [91] = 91,
  [92] = 51,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 61,
  [98] = 98,
  [99] = 81,
  [100] = 98,
  [101] = 101,
  [102] = 77,
  [103] = 103,
  [104] = 104,
  [105] = 63,
  [106] = 106,
  [107] = 103,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 101,
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
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 61,
  [130] = 94,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 63,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 95,
  [152] = 73,
  [153] = 74,
  [154] = 93,
  [155] = 155,
  [156] = 121,
  [157] = 126,
  [158] = 127,
  [159] = 119,
  [160] = 128,
  [161] = 155,
  [162] = 131,
  [163] = 132,
  [164] = 133,
  [165] = 134,
  [166] = 135,
  [167] = 136,
  [168] = 137,
  [169] = 114,
  [170] = 115,
  [171] = 112,
  [172] = 138,
  [173] = 73,
  [174] = 74,
  [175] = 139,
  [176] = 125,
  [177] = 141,
  [178] = 142,
  [179] = 143,
  [180] = 145,
  [181] = 146,
  [182] = 147,
  [183] = 148,
  [184] = 149,
  [185] = 150,
  [186] = 120,
  [187] = 122,
  [188] = 113,
  [189] = 116,
  [190] = 110,
  [191] = 123,
  [192] = 124,
  [193] = 106,
  [194] = 93,
  [195] = 94,
  [196] = 95,
  [197] = 118,
  [198] = 117,
  [199] = 140,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 200,
  [206] = 40,
  [207] = 207,
  [208] = 41,
  [209] = 204,
  [210] = 39,
  [211] = 51,
  [212] = 93,
  [213] = 94,
  [214] = 214,
  [215] = 87,
  [216] = 93,
  [217] = 94,
  [218] = 218,
  [219] = 51,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 79,
  [226] = 226,
  [227] = 84,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 93,
  [233] = 94,
  [234] = 234,
  [235] = 72,
  [236] = 236,
  [237] = 237,
  [238] = 75,
  [239] = 51,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 93,
  [245] = 94,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 83,
  [250] = 250,
  [251] = 86,
  [252] = 252,
  [253] = 253,
  [254] = 93,
  [255] = 94,
  [256] = 104,
  [257] = 109,
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
  [271] = 93,
  [272] = 94,
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
  [308] = 307,
  [309] = 309,
  [310] = 309,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 314,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 319,
  [323] = 317,
  [324] = 318,
  [325] = 316,
  [326] = 326,
  [327] = 327,
  [328] = 320,
  [329] = 321,
  [330] = 327,
  [331] = 326,
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
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 343,
  [350] = 347,
  [351] = 348,
  [352] = 352,
  [353] = 352,
  [354] = 354,
  [355] = 354,
  [356] = 334,
  [357] = 357,
  [358] = 345,
  [359] = 357,
  [360] = 360,
  [361] = 342,
  [362] = 362,
  [363] = 363,
  [364] = 340,
  [365] = 365,
  [366] = 366,
  [367] = 341,
  [368] = 344,
  [369] = 369,
  [370] = 360,
  [371] = 362,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 363,
  [378] = 366,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 380,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 385,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 386,
  [393] = 393,
  [394] = 394,
  [395] = 387,
  [396] = 390,
  [397] = 393,
  [398] = 394,
  [399] = 393,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 401,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 93,
  [418] = 94,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 411,
  [424] = 409,
  [425] = 425,
  [426] = 425,
  [427] = 402,
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
  [445] = 379,
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
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 463,
  [465] = 465,
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
  [479] = 467,
  [480] = 480,
  [481] = 481,
  [482] = 455,
  [483] = 483,
  [484] = 472,
  [485] = 485,
  [486] = 486,
  [487] = 485,
  [488] = 443,
  [489] = 446,
  [490] = 450,
  [491] = 481,
  [492] = 457,
  [493] = 493,
  [494] = 469,
  [495] = 495,
  [496] = 451,
  [497] = 497,
  [498] = 498,
  [499] = 485,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 379,
  [507] = 471,
  [508] = 465,
  [509] = 497,
  [510] = 461,
  [511] = 511,
  [512] = 512,
  [513] = 93,
  [514] = 514,
  [515] = 93,
  [516] = 94,
  [517] = 517,
  [518] = 518,
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
  [544] = 540,
  [545] = 514,
  [546] = 546,
  [547] = 547,
  [548] = 94,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
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
  [571] = 571,
  [572] = 572,
  [573] = 568,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 560,
  [580] = 580,
  [581] = 552,
  [582] = 554,
  [583] = 583,
  [584] = 554,
  [585] = 585,
  [586] = 552,
  [587] = 552,
  [588] = 552,
  [589] = 552,
  [590] = 552,
  [591] = 552,
  [592] = 552,
  [593] = 552,
  [594] = 552,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 572,
  [605] = 580,
  [606] = 597,
  [607] = 607,
  [608] = 608,
  [609] = 576,
  [610] = 578,
  [611] = 611,
  [612] = 596,
  [613] = 607,
  [614] = 552,
  [615] = 550,
  [616] = 616,
  [617] = 568,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 1,
        '#', 272,
        '(', 349,
        ')', 350,
        '+', 46,
        ',', 351,
        '-', 47,
        ':', 348,
        '=', 289,
        '?', 346,
        'B', 367,
        'J', 369,
        'N', 372,
        'P', 353,
        'T', 357,
        '[', 49,
        'a', 203,
        'c', 113,
        'd', 83,
        'e', 50,
        'f', 145,
        'h', 55,
        'i', 163,
        'k', 95,
        'l', 118,
        'm', 173,
        'n', 181,
        'p', 51,
        'r', 57,
        's', 84,
        't', 53,
        'u', 159,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(374);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(268);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 631,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 655,
        'r', 657,
        's', 677,
        't', 743,
        'u', 723,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 633,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 634,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 760,
        'r', 657,
        's', 677,
        't', 743,
        'u', 723,
        '\t', 8,
        ' ', 8,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(860);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 636,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 722,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 863,
        ' ', 863,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 15,
        ' ', 15,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 722,
        '\t', 19,
        ' ', 19,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 722,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 722,
        '\t', 861,
        ' ', 861,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(271);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(267);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ')', 350,
        ',', 351,
        ':', 348,
        '[', 49,
        'l', 118,
        'p', 59,
        's', 106,
        't', 120,
        'u', 170,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        '+', 452,
        '-', 453,
        '=', 289,
        '\t', 442,
        '\f', 442,
        ' ', 442,
      );
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'l', 394,
        'p', 377,
        '\t', 443,
        '\f', 443,
        ' ', 443,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'p', 377,
        't', 411,
        '\t', 444,
        '\f', 444,
        ' ', 444,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'p', 377,
        '\t', 445,
        '\f', 445,
        ' ', 445,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        't', 411,
        '\t', 446,
        '\f', 446,
        ' ', 446,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'u', 456,
        '\t', 447,
        '\f', 447,
        ' ', 447,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        'd', 388,
        'n', 413,
        '\t', 449,
        '\f', 449,
        ' ', 449,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(451);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 42:
      if (lookahead == '\f') SKIP(42);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\f', 651,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'k', 679,
        'r', 658,
        'u', 723,
        '\t', 43,
        ' ', 43,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 44:
      if (lookahead == '\f') SKIP(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(788);
      END_STATE();
    case 45:
      if (lookahead == '\f') SKIP(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'k') ADVANCE(119);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(330);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(330);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(334);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(322);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(320);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 240:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(326);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(227);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(250);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 253:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(253);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 254:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(254);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 255:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(255);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(463);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 256:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(256);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(464);
      END_STATE();
    case 257:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(257);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 258:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 259:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      END_STATE();
    case 260:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(260);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      END_STATE();
    case 261:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(261);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 262:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(262);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(470);
      END_STATE();
    case 263:
      if (eof) ADVANCE(266);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') SKIP(263);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 264:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 1,
        '#', 22,
        'c', 113,
        'f', 144,
        'i', 163,
        'p', 197,
        's', 84,
        't', 52,
        'u', 219,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(374);
      END_STATE();
    case 265:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 1,
        '#', 22,
        'c', 391,
        'f', 400,
        'i', 406,
        'p', 419,
        's', 382,
        't', 375,
        'u', 421,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_directive_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(393);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'k') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'k') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 's') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 's') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'w') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'x') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'y') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        '+', 452,
        '-', 453,
        '=', 289,
        '\t', 442,
        '\f', 442,
        ' ', 442,
      );
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'l', 394,
        'p', 377,
        '\t', 443,
        '\f', 443,
        ' ', 443,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'p', 377,
        't', 411,
        '\t', 444,
        '\f', 444,
        ' ', 444,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'p', 377,
        '\t', 445,
        '\f', 445,
        ' ', 445,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        't', 411,
        '\t', 446,
        '\f', 446,
        ' ', 446,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        ':', 348,
        'u', 456,
        '\t', 447,
        '\f', 447,
        ' ', 447,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 30,
        '#', 272,
        'd', 388,
        'n', 413,
        '\t', 449,
        '\f', 449,
        ' ', 449,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(451);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 460,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 527,
        'f', 551,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 485,
        'r', 507,
        's', 508,
        't', 479,
        'u', 600,
        '\t', 460,
        ' ', 460,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 461,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 575,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 486,
        'r', 507,
        's', 519,
        't', 579,
        'u', 607,
        '\t', 461,
        ' ', 461,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 462,
        '\r', 1,
        '#', 472,
        'a', 605,
        'c', 527,
        'd', 570,
        'e', 482,
        'f', 550,
        'i', 566,
        'k', 517,
        'p', 588,
        'r', 483,
        's', 520,
        't', 480,
        'u', 562,
        '\t', 462,
        ' ', 462,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 463,
        '\r', 1,
        '#', 472,
        'c', 391,
        'f', 400,
        'i', 406,
        'p', 419,
        's', 382,
        't', 375,
        'u', 421,
        '\t', 463,
        ' ', 463,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 464,
        '\r', 1,
        '#', 472,
        'c', 527,
        'f', 551,
        'i', 566,
        'p', 588,
        's', 520,
        't', 480,
        'u', 608,
        '\t', 464,
        ' ', 464,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\f') ADVANCE(465);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 466,
        '\r', 1,
        '#', 472,
        'a', 605,
        'c', 527,
        'd', 570,
        'e', 482,
        'f', 550,
        'i', 566,
        'k', 517,
        'p', 588,
        'r', 483,
        's', 520,
        't', 480,
        'u', 565,
        '\t', 467,
        ' ', 467,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 466,
        '\r', 1,
        '#', 472,
        'a', 605,
        'c', 527,
        'd', 570,
        'e', 482,
        'f', 550,
        'i', 566,
        'k', 517,
        'p', 588,
        'r', 483,
        's', 520,
        't', 480,
        'u', 569,
        '\t', 467,
        ' ', 467,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 471,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 527,
        'f', 551,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 485,
        'r', 507,
        's', 508,
        't', 479,
        'u', 600,
        '\t', 859,
        ' ', 859,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 471,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 527,
        'f', 551,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 485,
        'r', 507,
        's', 508,
        't', 479,
        'u', 600,
        '\t', 468,
        ' ', 468,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 471,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 527,
        'f', 551,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 485,
        'r', 507,
        's', 508,
        't', 479,
        'u', 600,
        '\t', 469,
        ' ', 469,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 471,
        '\r', 1,
        '#', 472,
        'a', 603,
        'c', 527,
        'f', 551,
        'h', 478,
        'i', 566,
        'm', 571,
        'p', 485,
        'r', 507,
        's', 508,
        't', 479,
        'u', 600,
        '\t', 470,
        ' ', 470,
      );
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(474);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'h') ADVANCE(619);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'h') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'k') ADVANCE(531);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'k') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == 'k') ADVANCE(539);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(580);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(580);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(525);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 631,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 655,
        'r', 657,
        's', 677,
        't', 743,
        'u', 725,
        '\t', 632,
        ' ', 632,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 631,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 655,
        'r', 657,
        's', 677,
        't', 743,
        'u', 732,
        '\t', 632,
        ' ', 632,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 633,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 633,
        ' ', 633,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 634,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 760,
        'r', 657,
        's', 677,
        't', 743,
        'u', 725,
        '\t', 635,
        ' ', 635,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 634,
        '\r', 1,
        '#', 646,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'h', 656,
        'k', 679,
        'm', 736,
        'p', 760,
        'r', 657,
        's', 677,
        't', 743,
        'u', 732,
        '\t', 635,
        ' ', 635,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 636,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 724,
        '\t', 637,
        ' ', 637,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 636,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 731,
        '\t', 637,
        ' ', 637,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 863,
        ' ', 863,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 638,
        ' ', 638,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 639,
        ' ', 639,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 641,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 733,
        '\t', 640,
        ' ', 640,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 724,
        '\t', 644,
        ' ', 644,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 731,
        '\t', 645,
        ' ', 645,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 731,
        '\t', 643,
        ' ', 643,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 268,
        '\f', 642,
        '\r', 1,
        '#', 646,
        'a', 759,
        'c', 693,
        'd', 734,
        'e', 653,
        'f', 718,
        'i', 730,
        'k', 679,
        'p', 751,
        'r', 658,
        's', 685,
        't', 659,
        'u', 731,
        '\t', 861,
        ' ', 861,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(648);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(650);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 651,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'k', 679,
        'r', 658,
        'u', 725,
        '\t', 652,
        ' ', 652,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 651,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'k', 679,
        'r', 658,
        'u', 732,
        '\t', 652,
        ' ', 652,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead == 's') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'h') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'k') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == 'k') ADVANCE(702);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(744);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(744);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(744);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'w') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'x') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(785);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      ADVANCE_MAP(
        '\f', 787,
        '#', 790,
        'a', 844,
        'c', 811,
        'f', 819,
        'h', 791,
        'i', 826,
        'm', 828,
        'p', 794,
        'r', 803,
        's', 804,
        't', 792,
        'u', 841,
        '\t', 787,
        ' ', 787,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == '\f') ADVANCE(788);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == '#') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'a') ADVANCE(840);
      if (lookahead == 'h') ADVANCE(852);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'c') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'c') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'c') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'd') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'd') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead == 'k') ADVANCE(813);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'f') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'f') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'h') ADVANCE(833);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'h') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'i') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'i') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'k') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'l') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'm') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'n') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'n') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'o') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'p') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'r') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 't') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 't') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'u') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'u') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'v') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'w') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'x') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead == 'y') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unroled_message_continuation_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 859,
        '#', 866,
        'a', 954,
        'c', 903,
        'f', 918,
        'h', 867,
        'i', 928,
        'm', 932,
        'p', 874,
        'r', 887,
        's', 888,
        't', 870,
        'u', 951,
        '\t', 859,
        ' ', 859,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 862,
        '#', 866,
        'a', 950,
        'c', 903,
        'd', 931,
        'e', 873,
        'f', 917,
        'i', 928,
        'k', 895,
        'p', 946,
        'r', 868,
        's', 896,
        't', 871,
        'u', 925,
        '\t', 861,
        ' ', 861,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 862,
        '#', 866,
        'a', 950,
        'c', 903,
        'd', 931,
        'e', 873,
        'f', 917,
        'i', 928,
        'k', 895,
        'p', 946,
        'r', 868,
        's', 896,
        't', 871,
        'u', 927,
        '\t', 861,
        ' ', 861,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 864,
        '#', 866,
        'a', 950,
        'c', 903,
        'd', 931,
        'e', 873,
        'f', 917,
        'i', 928,
        'k', 895,
        'p', 946,
        'r', 868,
        's', 896,
        't', 871,
        'u', 925,
        '\t', 863,
        ' ', 863,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 864,
        '#', 866,
        'a', 950,
        'c', 903,
        'd', 931,
        'e', 873,
        'f', 917,
        'i', 928,
        'k', 895,
        'p', 946,
        'r', 868,
        's', 896,
        't', 871,
        'u', 930,
        '\t', 863,
        ' ', 863,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(950);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(950);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == 'k') ADVANCE(906);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(948);
      if (lookahead == 'k') ADVANCE(912);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(939);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(939);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(900);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(970);
      if (lookahead == 'r') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(897);
      if (lookahead == 's') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead == 's') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(970);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
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
  [14] = {.lex_state = 253},
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 257},
  [20] = {.lex_state = 257},
  [21] = {.lex_state = 257},
  [22] = {.lex_state = 254},
  [23] = {.lex_state = 254},
  [24] = {.lex_state = 254},
  [25] = {.lex_state = 254},
  [26] = {.lex_state = 254},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 254},
  [29] = {.lex_state = 254},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 254},
  [40] = {.lex_state = 254},
  [41] = {.lex_state = 254},
  [42] = {.lex_state = 258},
  [43] = {.lex_state = 258},
  [44] = {.lex_state = 258},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 262},
  [47] = {.lex_state = 262},
  [48] = {.lex_state = 254},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 254},
  [51] = {.lex_state = 254},
  [52] = {.lex_state = 254},
  [53] = {.lex_state = 254},
  [54] = {.lex_state = 264},
  [55] = {.lex_state = 258},
  [56] = {.lex_state = 254},
  [57] = {.lex_state = 254},
  [58] = {.lex_state = 258},
  [59] = {.lex_state = 264},
  [60] = {.lex_state = 258},
  [61] = {.lex_state = 262},
  [62] = {.lex_state = 258},
  [63] = {.lex_state = 262},
  [64] = {.lex_state = 258},
  [65] = {.lex_state = 259},
  [66] = {.lex_state = 259},
  [67] = {.lex_state = 259},
  [68] = {.lex_state = 258},
  [69] = {.lex_state = 261},
  [70] = {.lex_state = 261},
  [71] = {.lex_state = 263},
  [72] = {.lex_state = 253},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 254},
  [75] = {.lex_state = 253},
  [76] = {.lex_state = 260},
  [77] = {.lex_state = 259},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 253},
  [80] = {.lex_state = 254},
  [81] = {.lex_state = 259},
  [82] = {.lex_state = 254},
  [83] = {.lex_state = 253},
  [84] = {.lex_state = 253},
  [85] = {.lex_state = 263},
  [86] = {.lex_state = 253},
  [87] = {.lex_state = 254},
  [88] = {.lex_state = 254},
  [89] = {.lex_state = 260},
  [90] = {.lex_state = 260},
  [91] = {.lex_state = 254},
  [92] = {.lex_state = 253},
  [93] = {.lex_state = 254},
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 254},
  [96] = {.lex_state = 254},
  [97] = {.lex_state = 261},
  [98] = {.lex_state = 253},
  [99] = {.lex_state = 260},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 259},
  [102] = {.lex_state = 260},
  [103] = {.lex_state = 259},
  [104] = {.lex_state = 259},
  [105] = {.lex_state = 261},
  [106] = {.lex_state = 253},
  [107] = {.lex_state = 260},
  [108] = {.lex_state = 260},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 253},
  [111] = {.lex_state = 260},
  [112] = {.lex_state = 253},
  [113] = {.lex_state = 253},
  [114] = {.lex_state = 253},
  [115] = {.lex_state = 253},
  [116] = {.lex_state = 253},
  [117] = {.lex_state = 253},
  [118] = {.lex_state = 253},
  [119] = {.lex_state = 253},
  [120] = {.lex_state = 253},
  [121] = {.lex_state = 253},
  [122] = {.lex_state = 253},
  [123] = {.lex_state = 253},
  [124] = {.lex_state = 253},
  [125] = {.lex_state = 253},
  [126] = {.lex_state = 253},
  [127] = {.lex_state = 253},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 263},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 253},
  [132] = {.lex_state = 253},
  [133] = {.lex_state = 253},
  [134] = {.lex_state = 253},
  [135] = {.lex_state = 253},
  [136] = {.lex_state = 253},
  [137] = {.lex_state = 253},
  [138] = {.lex_state = 253},
  [139] = {.lex_state = 253},
  [140] = {.lex_state = 253},
  [141] = {.lex_state = 253},
  [142] = {.lex_state = 253},
  [143] = {.lex_state = 253},
  [144] = {.lex_state = 263},
  [145] = {.lex_state = 253},
  [146] = {.lex_state = 253},
  [147] = {.lex_state = 253},
  [148] = {.lex_state = 253},
  [149] = {.lex_state = 253},
  [150] = {.lex_state = 253},
  [151] = {.lex_state = 253},
  [152] = {.lex_state = 253},
  [153] = {.lex_state = 253},
  [154] = {.lex_state = 253},
  [155] = {.lex_state = 253},
  [156] = {.lex_state = 257},
  [157] = {.lex_state = 257},
  [158] = {.lex_state = 257},
  [159] = {.lex_state = 257},
  [160] = {.lex_state = 257},
  [161] = {.lex_state = 257},
  [162] = {.lex_state = 257},
  [163] = {.lex_state = 257},
  [164] = {.lex_state = 257},
  [165] = {.lex_state = 257},
  [166] = {.lex_state = 257},
  [167] = {.lex_state = 257},
  [168] = {.lex_state = 257},
  [169] = {.lex_state = 257},
  [170] = {.lex_state = 257},
  [171] = {.lex_state = 257},
  [172] = {.lex_state = 257},
  [173] = {.lex_state = 257},
  [174] = {.lex_state = 257},
  [175] = {.lex_state = 257},
  [176] = {.lex_state = 257},
  [177] = {.lex_state = 257},
  [178] = {.lex_state = 257},
  [179] = {.lex_state = 257},
  [180] = {.lex_state = 257},
  [181] = {.lex_state = 257},
  [182] = {.lex_state = 257},
  [183] = {.lex_state = 257},
  [184] = {.lex_state = 257},
  [185] = {.lex_state = 257},
  [186] = {.lex_state = 257},
  [187] = {.lex_state = 257},
  [188] = {.lex_state = 257},
  [189] = {.lex_state = 257},
  [190] = {.lex_state = 257},
  [191] = {.lex_state = 257},
  [192] = {.lex_state = 257},
  [193] = {.lex_state = 257},
  [194] = {.lex_state = 257},
  [195] = {.lex_state = 257},
  [196] = {.lex_state = 257},
  [197] = {.lex_state = 257},
  [198] = {.lex_state = 257},
  [199] = {.lex_state = 257},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 255},
  [202] = {.lex_state = 255},
  [203] = {.lex_state = 255},
  [204] = {.lex_state = 42},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 255},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 255},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 265},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 265},
  [221] = {.lex_state = 256},
  [222] = {.lex_state = 256},
  [223] = {.lex_state = 264},
  [224] = {.lex_state = 264},
  [225] = {.lex_state = 264},
  [226] = {.lex_state = 255},
  [227] = {.lex_state = 264},
  [228] = {.lex_state = 264},
  [229] = {.lex_state = 264},
  [230] = {.lex_state = 264},
  [231] = {.lex_state = 264},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 264},
  [235] = {.lex_state = 264},
  [236] = {.lex_state = 264},
  [237] = {.lex_state = 264},
  [238] = {.lex_state = 264},
  [239] = {.lex_state = 264},
  [240] = {.lex_state = 264},
  [241] = {.lex_state = 264},
  [242] = {.lex_state = 264},
  [243] = {.lex_state = 264},
  [244] = {.lex_state = 255},
  [245] = {.lex_state = 255},
  [246] = {.lex_state = 255},
  [247] = {.lex_state = 264},
  [248] = {.lex_state = 264},
  [249] = {.lex_state = 264},
  [250] = {.lex_state = 264},
  [251] = {.lex_state = 264},
  [252] = {.lex_state = 265},
  [253] = {.lex_state = 265},
  [254] = {.lex_state = 265},
  [255] = {.lex_state = 265},
  [256] = {.lex_state = 256},
  [257] = {.lex_state = 264},
  [258] = {.lex_state = 264},
  [259] = {.lex_state = 264},
  [260] = {.lex_state = 264},
  [261] = {.lex_state = 264},
  [262] = {.lex_state = 264},
  [263] = {.lex_state = 264},
  [264] = {.lex_state = 264},
  [265] = {.lex_state = 264},
  [266] = {.lex_state = 264},
  [267] = {.lex_state = 264},
  [268] = {.lex_state = 264},
  [269] = {.lex_state = 264},
  [270] = {.lex_state = 264},
  [271] = {.lex_state = 264},
  [272] = {.lex_state = 264},
  [273] = {.lex_state = 264},
  [274] = {.lex_state = 264},
  [275] = {.lex_state = 264},
  [276] = {.lex_state = 264},
  [277] = {.lex_state = 264},
  [278] = {.lex_state = 264},
  [279] = {.lex_state = 264},
  [280] = {.lex_state = 264},
  [281] = {.lex_state = 264},
  [282] = {.lex_state = 264},
  [283] = {.lex_state = 264},
  [284] = {.lex_state = 264},
  [285] = {.lex_state = 264},
  [286] = {.lex_state = 264},
  [287] = {.lex_state = 264},
  [288] = {.lex_state = 264},
  [289] = {.lex_state = 264},
  [290] = {.lex_state = 264},
  [291] = {.lex_state = 264},
  [292] = {.lex_state = 264},
  [293] = {.lex_state = 264},
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
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 33},
  [308] = {.lex_state = 33},
  [309] = {.lex_state = 34},
  [310] = {.lex_state = 34},
  [311] = {.lex_state = 31},
  [312] = {.lex_state = 31},
  [313] = {.lex_state = 31},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 40},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 37},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 40},
  [325] = {.lex_state = 31},
  [326] = {.lex_state = 40},
  [327] = {.lex_state = 35},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 35},
  [330] = {.lex_state = 35},
  [331] = {.lex_state = 40},
  [332] = {.lex_state = 20},
  [333] = {.lex_state = 39},
  [334] = {.lex_state = 40},
  [335] = {.lex_state = 32},
  [336] = {.lex_state = 40},
  [337] = {.lex_state = 31},
  [338] = {.lex_state = 31},
  [339] = {.lex_state = 31},
  [340] = {.lex_state = 40},
  [341] = {.lex_state = 40},
  [342] = {.lex_state = 40},
  [343] = {.lex_state = 40},
  [344] = {.lex_state = 40},
  [345] = {.lex_state = 40},
  [346] = {.lex_state = 39},
  [347] = {.lex_state = 40},
  [348] = {.lex_state = 40},
  [349] = {.lex_state = 40},
  [350] = {.lex_state = 40},
  [351] = {.lex_state = 40},
  [352] = {.lex_state = 40},
  [353] = {.lex_state = 40},
  [354] = {.lex_state = 40},
  [355] = {.lex_state = 40},
  [356] = {.lex_state = 40},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 40},
  [359] = {.lex_state = 40},
  [360] = {.lex_state = 40},
  [361] = {.lex_state = 40},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 40},
  [364] = {.lex_state = 40},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 40},
  [367] = {.lex_state = 40},
  [368] = {.lex_state = 40},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 40},
  [371] = {.lex_state = 40},
  [372] = {.lex_state = 40},
  [373] = {.lex_state = 31},
  [374] = {.lex_state = 40},
  [375] = {.lex_state = 40},
  [376] = {.lex_state = 40},
  [377] = {.lex_state = 40},
  [378] = {.lex_state = 40},
  [379] = {.lex_state = 32},
  [380] = {.lex_state = 31},
  [381] = {.lex_state = 20},
  [382] = {.lex_state = 31},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 31},
  [385] = {.lex_state = 31},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 31},
  [388] = {.lex_state = 31},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 31},
  [391] = {.lex_state = 31},
  [392] = {.lex_state = 41},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 31},
  [395] = {.lex_state = 31},
  [396] = {.lex_state = 31},
  [397] = {.lex_state = 12},
  [398] = {.lex_state = 31},
  [399] = {.lex_state = 12},
  [400] = {.lex_state = 31},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 31},
  [403] = {.lex_state = 31},
  [404] = {.lex_state = 40},
  [405] = {.lex_state = 31},
  [406] = {.lex_state = 31},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 31},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 40},
  [412] = {.lex_state = 31},
  [413] = {.lex_state = 31},
  [414] = {.lex_state = 31},
  [415] = {.lex_state = 31},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 20},
  [418] = {.lex_state = 20},
  [419] = {.lex_state = 31},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 82},
  [422] = {.lex_state = 82},
  [423] = {.lex_state = 40},
  [424] = {.lex_state = 31},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 31},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 31},
  [429] = {.lex_state = 31},
  [430] = {.lex_state = 38},
  [431] = {.lex_state = 31},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 40},
  [434] = {.lex_state = 31},
  [435] = {.lex_state = 31},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 38},
  [438] = {.lex_state = 31},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 31},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 31},
  [443] = {.lex_state = 31},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 40},
  [446] = {.lex_state = 31},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 31},
  [454] = {.lex_state = 264},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 31},
  [457] = {.lex_state = 31},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 31},
  [460] = {.lex_state = 31},
  [461] = {.lex_state = 31},
  [462] = {.lex_state = 31},
  [463] = {.lex_state = 31},
  [464] = {.lex_state = 31},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 31},
  [468] = {.lex_state = 31},
  [469] = {.lex_state = 31},
  [470] = {.lex_state = 31},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 31},
  [473] = {.lex_state = 31},
  [474] = {.lex_state = 31},
  [475] = {.lex_state = 31},
  [476] = {.lex_state = 31},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 31},
  [479] = {.lex_state = 31},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 31},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 31},
  [484] = {.lex_state = 31},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 31},
  [489] = {.lex_state = 31},
  [490] = {.lex_state = 31},
  [491] = {.lex_state = 31},
  [492] = {.lex_state = 31},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 31},
  [495] = {.lex_state = 31},
  [496] = {.lex_state = 31},
  [497] = {.lex_state = 31},
  [498] = {.lex_state = 31},
  [499] = {.lex_state = 31},
  [500] = {.lex_state = 31},
  [501] = {.lex_state = 31},
  [502] = {.lex_state = 31},
  [503] = {.lex_state = 31},
  [504] = {.lex_state = 31},
  [505] = {.lex_state = 31},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 31},
  [510] = {.lex_state = 31},
  [511] = {.lex_state = 20},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 6},
  [514] = {.lex_state = 250},
  [515] = {.lex_state = 12},
  [516] = {.lex_state = 12},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 251},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 31},
  [522] = {.lex_state = 31},
  [523] = {.lex_state = 251},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 251},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 252},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 44},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 251},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 252},
  [539] = {.lex_state = 251},
  [540] = {.lex_state = 45},
  [541] = {.lex_state = 31},
  [542] = {.lex_state = 251},
  [543] = {.lex_state = 31},
  [544] = {.lex_state = 45},
  [545] = {.lex_state = 250},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 6},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 31},
  [553] = {.lex_state = 250},
  [554] = {.lex_state = 31},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 31},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 31},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 31},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 252},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 31},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 31},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 31},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 31},
  [582] = {.lex_state = 31},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 31},
  [585] = {.lex_state = 250},
  [586] = {.lex_state = 31},
  [587] = {.lex_state = 31},
  [588] = {.lex_state = 31},
  [589] = {.lex_state = 31},
  [590] = {.lex_state = 31},
  [591] = {.lex_state = 31},
  [592] = {.lex_state = 31},
  [593] = {.lex_state = 31},
  [594] = {.lex_state = 31},
  [595] = {.lex_state = 31},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 31},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 31},
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
    [sym_source_file] = STATE(563),
    [sym_item] = STATE(59),
    [sym__trivia] = STATE(59),
    [sym_use] = STATE(276),
    [sym_struct] = STATE(276),
    [sym_psyche] = STATE(276),
    [sym_skill] = STATE(276),
    [sym_service] = STATE(276),
    [sym_prompt] = STATE(276),
    [sym_task] = STATE(276),
    [sym_chore] = STATE(276),
    [sym_instruct] = STATE(276),
    [sym_context] = STATE(276),
    [sym_thunk] = STATE(276),
    [sym_flow] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(59),
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
      sym__implicit_do_raw_text,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(100), 1,
      sym_flow_body,
    STATE(184), 1,
      sym_repeat_body,
    STATE(205), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(410), 1,
      sym_directive_key,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(72), 2,
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
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [94] = 23,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(98), 1,
      sym_flow_body,
    STATE(143), 1,
      sym_repeat_body,
    STATE(205), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(410), 1,
      sym_directive_key,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(72), 2,
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
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [188] = 23,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(100), 1,
      sym_flow_body,
    STATE(179), 1,
      sym_repeat_body,
    STATE(205), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(410), 1,
      sym_directive_key,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(72), 2,
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
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [282] = 23,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(98), 1,
      sym_flow_body,
    STATE(149), 1,
      sym_repeat_body,
    STATE(205), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(410), 1,
      sym_directive_key,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(72), 2,
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
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [376] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(270), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [467] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(269), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [558] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(287), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [649] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(284), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [740] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(262), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [831] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(273), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [922] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(263), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1013] = 22,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(200), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(260), 1,
      sym_flow_body,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(17), 2,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1104] = 16,
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
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(423), 1,
      sym__flow_reserved_word,
    ACTIONS(85), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(87), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
    STATE(16), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1182] = 16,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_flow_do_keyword,
    ACTIONS(99), 1,
      sym_flow_ask_keyword,
    ACTIONS(102), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(108), 1,
      sym_flow_drop_keyword,
    ACTIONS(111), 1,
      sym_flow_rank_keyword,
    ACTIONS(114), 1,
      sym_flow_each_keyword,
    ACTIONS(117), 1,
      sym_flow_fold_keyword,
    ACTIONS(120), 1,
      sym_flow_repeat_keyword,
    ACTIONS(123), 1,
      sym__implicit_do_raw_text,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(423), 1,
      sym__flow_reserved_word,
    ACTIONS(91), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(94), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
    STATE(15), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1260] = 16,
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
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(423), 1,
      sym__flow_reserved_word,
    ACTIONS(128), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(130), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
    STATE(15), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1338] = 21,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(204), 1,
      sym__directives,
    STATE(206), 1,
      sym_directive,
    STATE(410), 1,
      sym_directive_key,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
      sym_statements,
      sym__pass_statement,
    ACTIONS(132), 4,
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
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1426] = 21,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(206), 1,
      sym_directive,
    STATE(209), 1,
      sym__directives,
    STATE(410), 1,
      sym_directive_key,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(79), 2,
      sym_statements,
      sym__pass_statement,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(132), 4,
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
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [1514] = 16,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_flow_do_keyword,
    ACTIONS(140), 1,
      sym_flow_ask_keyword,
    ACTIONS(143), 1,
      sym_flow_unfold_keyword,
    ACTIONS(146), 1,
      sym_flow_keep_keyword,
    ACTIONS(149), 1,
      sym_flow_drop_keyword,
    ACTIONS(152), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(158), 1,
      sym_flow_fold_keyword,
    ACTIONS(161), 1,
      sym_flow_repeat_keyword,
    ACTIONS(164), 1,
      sym__implicit_do_raw_text,
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(411), 1,
      sym__flow_reserved_word,
    ACTIONS(134), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(94), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(19), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1591] = 16,
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
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(411), 1,
      sym__flow_reserved_word,
    ACTIONS(167), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(130), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(19), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1668] = 16,
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
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(411), 1,
      sym__flow_reserved_word,
    ACTIONS(169), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(87), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
    STATE(20), 15,
      sym__trivia,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
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
  [1745] = 19,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(185), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(250), 1,
      sym_messages,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(179), 10,
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
  [1827] = 19,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(185), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(248), 1,
      sym_messages,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(191), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(193), 10,
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
  [1909] = 14,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    STATE(29), 1,
      sym_message,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(250), 1,
      sym_messages,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(173), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(179), 10,
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
  [1978] = 14,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_message,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(236), 1,
      sym_messages,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(231), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(197), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(199), 10,
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
  [2047] = 14,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_message,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(248), 1,
      sym_messages,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(191), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(193), 10,
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
  [2116] = 12,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(28), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(203), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(205), 10,
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
  [2180] = 12,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym_indented_raw_text,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(215), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(220), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(28), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(209), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(212), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(218), 10,
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
  [2244] = 12,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(404), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(185), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(27), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(228), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(175), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(230), 10,
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
  [2308] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(275), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2387] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(289), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2466] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(274), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2545] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(258), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2624] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(266), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2703] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(267), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2782] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(264), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2861] = 21,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(281), 1,
      sym_thunk_body,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(234), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [2940] = 20,
    ACTIONS(181), 1,
      sym_context_keyword,
    ACTIONS(183), 1,
      sym_instruct_keyword,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(236), 1,
      sym_pass_keyword,
    STATE(22), 1,
      sym__directives,
    STATE(24), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(40), 1,
      sym_directive,
    STATE(44), 1,
      sym__unroled_message_initial_line,
    STATE(48), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(335), 1,
      sym_directive_key,
    STATE(404), 1,
      sym__thunk_reserved_word,
    STATE(437), 1,
      sym_role,
    STATE(80), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(248), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(177), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(238), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(234), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [3016] = 6,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_directive_key,
    STATE(41), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(242), 4,
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
    ACTIONS(244), 17,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3063] = 6,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_directive_key,
    STATE(39), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(248), 4,
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
    ACTIONS(250), 17,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3110] = 6,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      sym_directive_key,
    STATE(41), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(254), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(257), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(260), 17,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3157] = 6,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      sym_blank_line,
    ACTIONS(269), 1,
      sym__unroled_message_continuation_text,
    STATE(42), 1,
      aux_sym_unroled_message_repeat1,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(267), 28,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3203] = 6,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      sym_blank_line,
    ACTIONS(278), 1,
      sym__unroled_message_continuation_text,
    STATE(42), 1,
      aux_sym_unroled_message_repeat1,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(276), 28,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3249] = 6,
    ACTIONS(278), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      sym_blank_line,
    STATE(43), 1,
      aux_sym_unroled_message_repeat1,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(284), 28,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3295] = 6,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      sym_context_keyword,
    STATE(57), 1,
      sym_context_setting,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(288), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(290), 24,
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
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3341] = 6,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      sym_blank_line,
    ACTIONS(300), 1,
      sym__nested_indented_raw_text,
    STATE(47), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(61), 1,
      sym__nested_text_body_line,
    ACTIONS(298), 28,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3387] = 6,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym_blank_line,
    ACTIONS(309), 1,
      sym__nested_indented_raw_text,
    STATE(47), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(61), 1,
      sym__nested_text_body_line,
    ACTIONS(307), 28,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3433] = 6,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_instruct_keyword,
    STATE(52), 1,
      sym_instruct_setting,
    STATE(49), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(314), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(316), 24,
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
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3479] = 6,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_instruct_keyword,
    STATE(57), 1,
      sym_instruct_setting,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(288), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(290), 24,
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
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3525] = 6,
    ACTIONS(292), 1,
      sym_context_keyword,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_context_setting,
    STATE(45), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(320), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(316), 24,
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
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3571] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(324), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(327), 25,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3612] = 4,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(329), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(290), 25,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3653] = 4,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(288), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(333), 25,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3694] = 17,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_use_keyword,
    ACTIONS(346), 1,
      sym_struct_keyword,
    ACTIONS(349), 1,
      sym_psyche_keyword,
    ACTIONS(352), 1,
      sym_skill_keyword,
    ACTIONS(355), 1,
      sym_service_keyword,
    ACTIONS(358), 1,
      sym_prompt_keyword,
    ACTIONS(361), 1,
      sym_context_keyword,
    ACTIONS(364), 1,
      sym_instruct_keyword,
    ACTIONS(367), 1,
      sym_thunk_keyword,
    ACTIONS(370), 1,
      sym_task_keyword,
    ACTIONS(373), 1,
      sym_chore_keyword,
    ACTIONS(376), 1,
      sym_flow_keyword,
    ACTIONS(337), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(340), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(54), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(276), 12,
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
  [3761] = 4,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      sym__unroled_message_continuation_text,
    STATE(68), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(276), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3802] = 4,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(288), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(381), 25,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3843] = 4,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(383), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(333), 25,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3884] = 4,
    ACTIONS(278), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(387), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3925] = 17,
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
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(393), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(54), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(276), 12,
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
  [3992] = 2,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__unroled_message_continuation_text,
  [4028] = 2,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4064] = 2,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__unroled_message_continuation_text,
  [4100] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__nested_indented_raw_text,
  [4136] = 2,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__unroled_message_continuation_text,
  [4172] = 5,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 1,
      sym_blank_line,
    ACTIONS(421), 1,
      sym_indented_raw_text,
    STATE(67), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(419), 26,
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
  [4214] = 5,
    ACTIONS(421), 1,
      sym_indented_raw_text,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 1,
      sym_blank_line,
    STATE(65), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(427), 26,
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
  [4256] = 5,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 1,
      sym_blank_line,
    ACTIONS(436), 1,
      sym_indented_raw_text,
    STATE(67), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(434), 26,
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
  [4298] = 2,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 30,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
      sym__unroled_message_continuation_text,
  [4334] = 6,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      sym_blank_line,
    ACTIONS(445), 1,
      sym__nested_indented_raw_text,
    STATE(70), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(97), 1,
      sym__nested_text_body_line,
    ACTIONS(298), 26,
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
  [4378] = 6,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_blank_line,
    ACTIONS(450), 1,
      sym__nested_indented_raw_text,
    STATE(70), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(97), 1,
      sym__nested_text_body_line,
    ACTIONS(307), 26,
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
  [4422] = 6,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 1,
      sym_blank_line,
    ACTIONS(456), 1,
      sym__nested_indented_raw_text,
    STATE(71), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(129), 1,
      sym__nested_text_body_line,
    ACTIONS(307), 25,
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
  [4465] = 4,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(75), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(461), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(463), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4504] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4539] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4574] = 4,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(475), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(477), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4613] = 5,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 1,
      sym_blank_line,
    ACTIONS(482), 1,
      sym_indented_raw_text,
    STATE(76), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(434), 25,
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
  [4654] = 4,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      sym_indented_raw_text,
    STATE(103), 1,
      sym_text_body_line,
    ACTIONS(419), 27,
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
  [4693] = 2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4728] = 4,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(83), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(489), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(477), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4767] = 2,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4802] = 4,
    ACTIONS(421), 1,
      sym_indented_raw_text,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_text_body_line,
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
  [4841] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4876] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(475), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(505), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4915] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(86), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(507), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(505), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4954] = 6,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__nested_indented_raw_text,
    STATE(71), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(129), 1,
      sym__nested_text_body_line,
    ACTIONS(298), 25,
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
  [4997] = 4,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(475), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(515), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5036] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(519), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5071] = 2,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5106] = 5,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      sym_blank_line,
    ACTIONS(527), 1,
      sym_indented_raw_text,
    STATE(76), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(419), 25,
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
  [5147] = 5,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      sym_indented_raw_text,
    ACTIONS(529), 1,
      sym_blank_line,
    STATE(89), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(427), 25,
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
  [5188] = 2,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5223] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(535), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(327), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5262] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5297] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5332] = 2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5367] = 2,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 29,
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
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5402] = 2,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 28,
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
  [5436] = 4,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(558), 1,
      sym_flow_until_keyword,
    STATE(148), 1,
      sym_until_statement,
    ACTIONS(556), 26,
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
  [5474] = 4,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      sym_indented_raw_text,
    STATE(107), 1,
      sym_text_body_line,
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
  [5512] = 4,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 1,
      sym_flow_until_keyword,
    STATE(183), 1,
      sym_until_statement,
    ACTIONS(556), 26,
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
  [5550] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 28,
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
      sym__implicit_do_raw_text,
  [5584] = 4,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      sym_indented_raw_text,
    STATE(107), 1,
      sym_text_body_line,
    ACTIONS(419), 26,
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
  [5622] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 28,
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
      sym__implicit_do_raw_text,
  [5656] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 28,
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
      sym__implicit_do_raw_text,
  [5690] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 28,
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
  [5724] = 2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 27,
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
  [5757] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 27,
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
      sym__implicit_do_raw_text,
  [5790] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 27,
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
      sym__implicit_do_raw_text,
  [5823] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 27,
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
  [5856] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(580), 27,
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
  [5889] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 27,
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
      sym__implicit_do_raw_text,
  [5922] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 27,
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
  [5955] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 27,
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
  [5988] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 27,
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
  [6021] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 27,
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
  [6054] = 2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 27,
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
  [6087] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 27,
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
  [6120] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 27,
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
  [6153] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 27,
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
  [6186] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 27,
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
  [6219] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 27,
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
  [6252] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 27,
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
  [6285] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 27,
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
  [6318] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 27,
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
  [6351] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 27,
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
  [6384] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 27,
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
  [6417] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 27,
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
  [6450] = 2,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 27,
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
  [6483] = 2,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 27,
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
  [6516] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 27,
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
  [6549] = 2,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(624), 27,
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
  [6582] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 27,
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
  [6615] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 27,
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
  [6648] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 27,
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
  [6681] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 27,
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
  [6714] = 2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 27,
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
  [6747] = 2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 27,
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
  [6780] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 27,
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
  [6813] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 27,
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
  [6846] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 27,
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
  [6879] = 2,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 27,
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
  [6912] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 27,
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
  [6945] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 27,
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
  [6978] = 2,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 27,
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
  [7011] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 27,
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
  [7044] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 27,
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
  [7077] = 2,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 27,
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
  [7110] = 2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 27,
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
  [7143] = 2,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 27,
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
  [7176] = 2,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 27,
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
  [7209] = 2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 27,
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
  [7242] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 27,
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
  [7275] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 27,
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
  [7308] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 27,
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
  [7341] = 2,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(680), 27,
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
  [7374] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 26,
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
  [7406] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 26,
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
  [7438] = 2,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 26,
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
  [7470] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 26,
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
  [7502] = 2,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 26,
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
  [7534] = 2,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(680), 26,
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
  [7566] = 2,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(624), 26,
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
  [7598] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 26,
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
  [7630] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 26,
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
  [7662] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 26,
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
  [7694] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 26,
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
  [7726] = 2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 26,
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
  [7758] = 2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 26,
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
  [7790] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 26,
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
  [7822] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 26,
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
  [7854] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 26,
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
  [7886] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 26,
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
  [7918] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 26,
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
  [7950] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 26,
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
  [7982] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 26,
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
  [8014] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 26,
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
  [8046] = 2,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 26,
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
  [8078] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 26,
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
  [8110] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 26,
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
  [8142] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 26,
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
  [8174] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 26,
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
  [8206] = 2,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 26,
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
  [8238] = 2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 26,
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
  [8270] = 2,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 26,
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
  [8302] = 2,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 26,
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
  [8334] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 26,
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
  [8366] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 26,
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
  [8398] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 26,
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
  [8430] = 2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 26,
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
  [8462] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(580), 26,
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
  [8494] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 26,
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
  [8526] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 26,
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
  [8558] = 2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 26,
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
  [8590] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 26,
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
  [8622] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 26,
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
  [8654] = 2,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 26,
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
  [8686] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 26,
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
  [8718] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 26,
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
  [8750] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 26,
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
  [8782] = 14,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(225), 1,
      sym_statements,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [8837] = 10,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    STATE(243), 1,
      sym_text_body,
    STATE(531), 1,
      sym_property_key,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(686), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(214), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(688), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8884] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_text_body,
    STATE(531), 1,
      sym_property_key,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(696), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(207), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(698), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8931] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_text_body,
    STATE(531), 1,
      sym_property_key,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(702), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(201), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(704), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8978] = 14,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(227), 1,
      sym_statements,
    STATE(411), 1,
      sym__flow_reserved_word,
    STATE(21), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [9033] = 14,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(79), 1,
      sym_statements,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [9088] = 5,
    STATE(410), 1,
      sym_directive_key,
    STATE(210), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(706), 4,
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
    ACTIONS(250), 10,
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
  [9125] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_text_body,
    STATE(531), 1,
      sym_property_key,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(686), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(214), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(710), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9172] = 5,
    STATE(410), 1,
      sym_directive_key,
    STATE(208), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(712), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(257), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(260), 10,
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
  [9209] = 14,
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
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(84), 1,
      sym_statements,
    STATE(423), 1,
      sym__flow_reserved_word,
    STATE(14), 13,
      sym__flow_statement,
      sym_do_statement,
      sym_implicit_do_statement,
      sym_invalid_flow_reserved_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_above_statement,
      sym_repeat_block_statement,
  [9264] = 5,
    STATE(410), 1,
      sym_directive_key,
    STATE(208), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(715), 4,
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
    ACTIONS(244), 10,
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
  [9301] = 3,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(717), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(327), 19,
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
  [9333] = 1,
    ACTIONS(540), 23,
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
  [9359] = 1,
    ACTIONS(544), 23,
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
  [9385] = 6,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      sym_snake_name,
    STATE(531), 1,
      sym_property_key,
    STATE(214), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(722), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(725), 13,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9421] = 1,
    ACTIONS(519), 22,
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
  [9446] = 1,
    ACTIONS(540), 22,
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
  [9471] = 1,
    ACTIONS(544), 22,
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
  [9496] = 7,
    ACTIONS(732), 1,
      sym_blank_line,
    ACTIONS(740), 1,
      sym_snake_name,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(735), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(218), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(738), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9532] = 3,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(743), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(327), 15,
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
  [9560] = 7,
    ACTIONS(748), 1,
      sym_blank_line,
    ACTIONS(754), 1,
      sym_snake_name,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(750), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(218), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(752), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9596] = 5,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      sym_blank_line,
    ACTIONS(763), 1,
      sym_indented_raw_text,
    STATE(221), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(761), 15,
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
  [9627] = 5,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_blank_line,
    STATE(221), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(770), 15,
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
  [9658] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(240), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(708), 13,
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
  [9686] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(195), 13,
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
  [9714] = 4,
    ACTIONS(780), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(782), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(249), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(473), 13,
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
  [9742] = 2,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
    ACTIONS(786), 18,
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
  [9766] = 4,
    ACTIONS(788), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(790), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(251), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(503), 13,
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
  [9794] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
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
  [9822] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(171), 13,
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
  [9850] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(794), 13,
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
  [9878] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(796), 13,
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
  [9906] = 1,
    ACTIONS(540), 19,
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
  [9928] = 1,
    ACTIONS(544), 19,
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
  [9950] = 4,
    ACTIONS(191), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(798), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(229), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(189), 13,
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
    ACTIONS(800), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(802), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(238), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(459), 13,
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
    ACTIONS(804), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(806), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(228), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(796), 13,
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
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(808), 13,
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
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(473), 13,
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
    ACTIONS(810), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(813), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(322), 13,
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
  [10118] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(816), 13,
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
  [10146] = 4,
    ACTIONS(818), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(820), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(237), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(816), 13,
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
  [10174] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(822), 13,
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
  [10202] = 4,
    ACTIONS(824), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(826), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(230), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(822), 13,
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
  [10230] = 2,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 18,
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
  [10254] = 2,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 18,
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
  [10278] = 3,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(834), 1,
      sym_snake_name,
    ACTIONS(831), 17,
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
  [10304] = 4,
    ACTIONS(836), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(838), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(242), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(682), 13,
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
  [10332] = 4,
    ACTIONS(173), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(840), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(224), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(171), 13,
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
  [10360] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(503), 13,
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
  [10388] = 4,
    ACTIONS(197), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(842), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(231), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(195), 13,
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
  [10416] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(239), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(513), 13,
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
  [10444] = 2,
    ACTIONS(844), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(846), 15,
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
  [10467] = 2,
    ACTIONS(848), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(850), 15,
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
  [10490] = 2,
    ACTIONS(538), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(540), 15,
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
  [10513] = 2,
    ACTIONS(542), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(544), 15,
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
  [10536] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 17,
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
  [10559] = 2,
    ACTIONS(576), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(574), 15,
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
  [10581] = 2,
    ACTIONS(854), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(852), 15,
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
  [10603] = 2,
    ACTIONS(858), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(856), 15,
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
  [10625] = 2,
    ACTIONS(862), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(860), 15,
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
  [10647] = 2,
    ACTIONS(866), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(864), 15,
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
  [10669] = 2,
    ACTIONS(870), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(868), 15,
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
  [10691] = 2,
    ACTIONS(874), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(872), 15,
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
  [10713] = 2,
    ACTIONS(878), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(876), 15,
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
  [10735] = 2,
    ACTIONS(882), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(880), 15,
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
  [10757] = 2,
    ACTIONS(886), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(884), 15,
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
  [10779] = 2,
    ACTIONS(890), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(888), 15,
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
  [10801] = 2,
    ACTIONS(894), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(892), 15,
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
  [10823] = 2,
    ACTIONS(898), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(896), 15,
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
  [10845] = 2,
    ACTIONS(902), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(900), 15,
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
  [10867] = 2,
    ACTIONS(540), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(538), 15,
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
  [10889] = 2,
    ACTIONS(544), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(542), 15,
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
  [10911] = 2,
    ACTIONS(906), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(904), 15,
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
  [10933] = 2,
    ACTIONS(910), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(908), 15,
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
  [10955] = 2,
    ACTIONS(914), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(912), 15,
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
  [10977] = 2,
    ACTIONS(918), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(916), 15,
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
  [10999] = 2,
    ACTIONS(922), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(920), 15,
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
  [11021] = 2,
    ACTIONS(926), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(924), 15,
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
  [11043] = 2,
    ACTIONS(930), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(928), 15,
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
  [11065] = 2,
    ACTIONS(934), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(932), 15,
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
  [11087] = 2,
    ACTIONS(938), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(936), 15,
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
  [11109] = 2,
    ACTIONS(942), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(940), 15,
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
  [11131] = 2,
    ACTIONS(946), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(944), 15,
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
  [11153] = 2,
    ACTIONS(950), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(948), 15,
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
  [11175] = 2,
    ACTIONS(954), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(952), 15,
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
  [11197] = 2,
    ACTIONS(958), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(956), 15,
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
  [11219] = 2,
    ACTIONS(962), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(960), 15,
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
  [11241] = 2,
    ACTIONS(966), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(964), 15,
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
  [11263] = 2,
    ACTIONS(970), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(968), 15,
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
  [11285] = 2,
    ACTIONS(974), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(972), 15,
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
  [11307] = 2,
    ACTIONS(978), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(976), 15,
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
  [11329] = 2,
    ACTIONS(982), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(980), 15,
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
  [11351] = 2,
    ACTIONS(986), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(984), 15,
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
  [11373] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(599), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11398] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(555), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11423] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(583), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11448] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(602), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11473] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(549), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11498] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(608), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11523] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(476), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11548] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(537), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11573] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(486), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11598] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(577), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11623] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(557), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11648] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(520), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11673] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(312), 1,
      sym_base_type,
    STATE(369), 1,
      sym_type_name,
    STATE(524), 1,
      sym_type,
    STATE(365), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11698] = 9,
    ACTIONS(994), 1,
      sym_integer_literal,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(998), 1,
      sym_flow_limit_keyword,
    ACTIONS(1000), 1,
      sym_colon,
    ACTIONS(1002), 1,
      sym_snake_name,
    STATE(325), 1,
      sym_callee,
    STATE(471), 1,
      sym_limit_clause,
    STATE(597), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11728] = 9,
    ACTIONS(994), 1,
      sym_integer_literal,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(998), 1,
      sym_flow_limit_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1004), 1,
      sym_colon,
    STATE(316), 1,
      sym_callee,
    STATE(507), 1,
      sym_limit_clause,
    STATE(606), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11758] = 8,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1008), 1,
      sym_colon,
    STATE(390), 1,
      sym_callee,
    STATE(402), 1,
      sym_par_clause,
    STATE(465), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11785] = 8,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1010), 1,
      sym_colon,
    STATE(396), 1,
      sym_callee,
    STATE(427), 1,
      sym_par_clause,
    STATE(508), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11812] = 4,
    ACTIONS(1014), 1,
      sym_array_suffix,
    STATE(311), 1,
      aux_sym_type_repeat1,
    STATE(339), 1,
      sym_type_suffix,
    ACTIONS(1012), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11830] = 4,
    ACTIONS(1019), 1,
      sym_array_suffix,
    STATE(313), 1,
      aux_sym_type_repeat1,
    STATE(339), 1,
      sym_type_suffix,
    ACTIONS(1017), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11848] = 4,
    ACTIONS(1019), 1,
      sym_array_suffix,
    STATE(311), 1,
      aux_sym_type_repeat1,
    STATE(339), 1,
      sym_type_suffix,
    ACTIONS(1021), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11866] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1023), 1,
      sym_colon,
    STATE(428), 1,
      sym_callee,
    STATE(479), 1,
      sym_callees,
    STATE(572), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11890] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1025), 1,
      sym_colon,
    STATE(428), 1,
      sym_callee,
    STATE(467), 1,
      sym_callees,
    STATE(604), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11914] = 8,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1031), 1,
      sym_integer_literal,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1035), 1,
      sym_flow_limit_keyword,
    STATE(122), 1,
      sym_line_end,
    STATE(398), 1,
      sym_limit_clause,
    STATE(490), 1,
      sym_par_clause,
  [11939] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1037), 1,
      sym_colon,
    STATE(491), 1,
      sym_callee,
    STATE(576), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [11960] = 7,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(178), 1,
      sym_condition,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(177), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11983] = 6,
    ACTIONS(1045), 1,
      sym_integer_literal,
    ACTIONS(1047), 1,
      sym_flow_until_keyword,
    ACTIONS(1049), 1,
      sym_colon,
    STATE(190), 1,
      sym_until_clause,
    STATE(380), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12004] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1051), 1,
      sym_colon,
    STATE(494), 1,
      sym_callee,
    STATE(580), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12025] = 6,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1053), 1,
      sym_colon,
    STATE(387), 1,
      sym_callee,
    STATE(409), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12046] = 6,
    ACTIONS(1045), 1,
      sym_integer_literal,
    ACTIONS(1055), 1,
      sym_flow_until_keyword,
    ACTIONS(1057), 1,
      sym_colon,
    STATE(110), 1,
      sym_until_clause,
    STATE(384), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12067] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1059), 1,
      sym_colon,
    STATE(481), 1,
      sym_callee,
    STATE(609), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12088] = 7,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(142), 1,
      sym_condition,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(141), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12111] = 8,
    ACTIONS(1031), 1,
      sym_integer_literal,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1035), 1,
      sym_flow_limit_keyword,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(187), 1,
      sym_line_end,
    STATE(394), 1,
      sym_limit_clause,
    STATE(450), 1,
      sym_par_clause,
  [12136] = 7,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(150), 1,
      sym_condition,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(141), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12159] = 6,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(388), 1,
      sym_callee,
    STATE(425), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12180] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1069), 1,
      sym_colon,
    STATE(469), 1,
      sym_callee,
    STATE(605), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12201] = 6,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1071), 1,
      sym_colon,
    STATE(395), 1,
      sym_callee,
    STATE(424), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12222] = 6,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1073), 1,
      sym_colon,
    STATE(385), 1,
      sym_callee,
    STATE(426), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [12243] = 7,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(185), 1,
      sym_condition,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(177), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12266] = 6,
    ACTIONS(1077), 1,
      sym_comment_line,
    ACTIONS(1079), 1,
      sym_snake_name,
    STATE(288), 1,
      sym_struct_body,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(1075), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(220), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [12287] = 3,
    STATE(448), 1,
      sym_text_ref,
    ACTIONS(1081), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12301] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(176), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12321] = 3,
    STATE(514), 1,
      sym_directive_op,
    ACTIONS(1081), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
    ACTIONS(1085), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12335] = 7,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_block,
    STATE(280), 1,
      sym_text_inline,
    STATE(285), 1,
      sym_instruct_body,
    STATE(389), 1,
      sym_line_end,
  [12357] = 1,
    ACTIONS(1093), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12367] = 1,
    ACTIONS(1095), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12377] = 1,
    ACTIONS(1097), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12387] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(199), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12407] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(180), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12427] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(165), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12447] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(188), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12467] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(182), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12487] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(161), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12507] = 3,
    STATE(449), 1,
      sym_text_ref,
    ACTIONS(1081), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12521] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(189), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12541] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(198), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12561] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(113), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12581] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(116), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12601] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(117), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12621] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12641] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(159), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12661] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(191), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12681] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(123), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12701] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(125), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12721] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(162), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12741] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(155), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12761] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(131), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12781] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(132), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12801] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12821] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(136), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12841] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(138), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12861] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(140), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12881] = 1,
    ACTIONS(1099), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12891] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(156), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12911] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(145), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12931] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(147), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12951] = 1,
    ACTIONS(1101), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12961] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(163), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12981] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(167), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [13001] = 7,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_block,
    STATE(265), 1,
      sym_instruct_body,
    STATE(280), 1,
      sym_text_inline,
    STATE(389), 1,
      sym_line_end,
  [13023] = 1,
    ACTIONS(1103), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13033] = 7,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_block,
    STATE(268), 1,
      sym_text_inline,
    STATE(293), 1,
      sym_context_body,
    STATE(389), 1,
      sym_line_end,
  [13055] = 7,
    ACTIONS(1087), 1,
      sym_newline,
    ACTIONS(1089), 1,
      sym_inline_comment,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(259), 1,
      sym_text_block,
    STATE(268), 1,
      sym_text_inline,
    STATE(282), 1,
      sym_context_body,
    STATE(389), 1,
      sym_line_end,
  [13077] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      sym_text_line,
    STATE(95), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(91), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [13097] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1043), 1,
      sym_text_line,
    STATE(196), 1,
      sym__nested_text_block,
    STATE(397), 1,
      sym_line_end,
    STATE(172), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [13117] = 6,
    ACTIONS(1039), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_inline_comment,
    ACTIONS(1061), 1,
      sym_text_line,
    STATE(151), 1,
      sym__nested_text_block,
    STATE(399), 1,
      sym_line_end,
    STATE(121), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [13137] = 1,
    ACTIONS(1107), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      sym_text_line,
  [13146] = 5,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    ACTIONS(1109), 1,
      sym_flow_until_keyword,
    ACTIONS(1111), 1,
      sym_colon,
    STATE(158), 2,
      sym_line_end,
      sym_until_clause,
  [13163] = 6,
    ACTIONS(1113), 1,
      sym_arrow,
    ACTIONS(1115), 1,
      sym_colon,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1119), 1,
      sym_snake_name,
    STATE(420), 1,
      sym_thunk_name,
    STATE(517), 1,
      sym_params,
  [13182] = 1,
    ACTIONS(1121), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [13191] = 6,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1123), 1,
      sym_arrow,
    ACTIONS(1125), 1,
      sym_colon,
    ACTIONS(1127), 1,
      sym_snake_name,
    STATE(432), 1,
      sym_flow_name,
    STATE(530), 1,
      sym_params,
  [13210] = 5,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1129), 1,
      sym_flow_until_keyword,
    ACTIONS(1131), 1,
      sym_colon,
    STATE(127), 2,
      sym_line_end,
      sym_until_clause,
  [13227] = 5,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    STATE(120), 1,
      sym_line_end,
    STATE(489), 1,
      sym_par_clause,
  [13243] = 3,
    ACTIONS(1133), 1,
      sym_snake_name,
    STATE(468), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [13255] = 5,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(443), 1,
      sym_par_clause,
  [13271] = 5,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(186), 1,
      sym_line_end,
    STATE(446), 1,
      sym_par_clause,
  [13287] = 4,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(1135), 1,
      sym_blank_line,
    STATE(278), 1,
      sym_text_body,
    STATE(222), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [13301] = 5,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
    STATE(457), 1,
      sym_par_clause,
  [13317] = 2,
    ACTIONS(1139), 1,
      sym_flow_times_keyword,
    ACTIONS(1137), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13327] = 3,
    ACTIONS(1133), 1,
      sym_snake_name,
    STATE(474), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [13339] = 5,
    ACTIONS(1141), 1,
      sym_blank_line,
    ACTIONS(1143), 1,
      sym__nested_indented_raw_text,
    STATE(46), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(61), 1,
      sym__nested_text_body_line,
    STATE(74), 1,
      sym__nested_text_body,
  [13355] = 5,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(168), 1,
      sym_line_end,
    STATE(451), 1,
      sym_par_clause,
  [13371] = 5,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    STATE(118), 1,
      sym_line_end,
    STATE(488), 1,
      sym_par_clause,
  [13387] = 5,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    STATE(124), 1,
      sym_line_end,
    STATE(492), 1,
      sym_par_clause,
  [13403] = 5,
    ACTIONS(1145), 1,
      sym_blank_line,
    ACTIONS(1147), 1,
      sym__nested_indented_raw_text,
    STATE(85), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(129), 1,
      sym__nested_text_body_line,
    STATE(174), 1,
      sym__nested_text_body,
  [13419] = 5,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    STATE(137), 1,
      sym_line_end,
    STATE(496), 1,
      sym_par_clause,
  [13435] = 5,
    ACTIONS(1149), 1,
      sym_blank_line,
    ACTIONS(1151), 1,
      sym__nested_indented_raw_text,
    STATE(69), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(97), 1,
      sym__nested_text_body_line,
    STATE(153), 1,
      sym__nested_text_body,
  [13451] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(203), 1,
      sym_line_end,
    STATE(291), 1,
      sym_cap_body,
  [13464] = 2,
    STATE(514), 1,
      sym_directive_op,
    ACTIONS(1157), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13473] = 4,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    ACTIONS(1159), 1,
      sym_colon,
    STATE(192), 1,
      sym_line_end,
  [13486] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(203), 1,
      sym_line_end,
    STATE(290), 1,
      sym_cap_body,
  [13499] = 4,
    ACTIONS(1161), 1,
      sym_newline,
    ACTIONS(1163), 1,
      sym_inline_comment,
    ACTIONS(1165), 1,
      sym_text_line,
    STATE(88), 1,
      sym_line_end,
  [13512] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(203), 1,
      sym_line_end,
    STATE(286), 1,
      sym_cap_body,
  [13525] = 3,
    ACTIONS(1169), 1,
      sym_comma,
    STATE(429), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1167), 2,
      sym_newline,
      sym_inline_comment,
  [13536] = 1,
    ACTIONS(1171), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13543] = 3,
    ACTIONS(1173), 1,
      sym_optional_marker,
    ACTIONS(1175), 1,
      sym_colon,
    ACTIONS(1177), 2,
      sym_rparen,
      sym_comma,
  [13554] = 4,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    ACTIONS(1179), 1,
      sym_colon,
    STATE(197), 1,
      sym_line_end,
  [13567] = 2,
    STATE(545), 1,
      sym_directive_op,
    ACTIONS(1157), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13576] = 4,
    ACTIONS(1181), 1,
      sym_newline,
    ACTIONS(1183), 1,
      sym_inline_comment,
    ACTIONS(1185), 1,
      sym_text_line,
    STATE(171), 1,
      sym_line_end,
  [13589] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(202), 1,
      sym_line_end,
    STATE(292), 1,
      sym_job_body,
  [13602] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(202), 1,
      sym_line_end,
    STATE(261), 1,
      sym_job_body,
  [13615] = 3,
    ACTIONS(1189), 1,
      sym_comma,
    STATE(435), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1187), 2,
      sym_newline,
      sym_inline_comment,
  [13626] = 1,
    ACTIONS(1191), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [13633] = 4,
    ACTIONS(1193), 1,
      sym_rparen,
    ACTIONS(1195), 1,
      sym_snake_name,
    STATE(408), 1,
      sym_param_name,
    STATE(512), 1,
      sym_param,
  [13646] = 2,
    ACTIONS(540), 1,
      sym_comment_line,
    ACTIONS(538), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13655] = 2,
    ACTIONS(544), 1,
      sym_comment_line,
    ACTIONS(542), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13664] = 1,
    ACTIONS(1197), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13671] = 4,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1199), 1,
      sym_arrow,
    ACTIONS(1201), 1,
      sym_colon,
    STATE(518), 1,
      sym_params,
  [13684] = 2,
    STATE(449), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13693] = 2,
    STATE(448), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13702] = 4,
    ACTIONS(1203), 1,
      sym_newline,
    ACTIONS(1205), 1,
      sym_inline_comment,
    ACTIONS(1207), 1,
      sym_text_line,
    STATE(112), 1,
      sym_line_end,
  [13715] = 4,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1209), 1,
      sym_colon,
    STATE(118), 1,
      sym_line_end,
  [13728] = 4,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    ACTIONS(1211), 1,
      sym_colon,
    STATE(186), 1,
      sym_line_end,
  [13741] = 4,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1213), 1,
      sym_colon,
    STATE(120), 1,
      sym_line_end,
  [13754] = 4,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    ACTIONS(1215), 1,
      sym_colon,
    STATE(124), 1,
      sym_line_end,
  [13767] = 3,
    ACTIONS(1189), 1,
      sym_comma,
    STATE(414), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1217), 2,
      sym_newline,
      sym_inline_comment,
  [13778] = 3,
    ACTIONS(1169), 1,
      sym_comma,
    STATE(434), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1219), 2,
      sym_newline,
      sym_inline_comment,
  [13789] = 1,
    ACTIONS(1221), 4,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_text_line,
  [13796] = 1,
    ACTIONS(1223), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [13803] = 4,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1225), 1,
      sym_arrow,
    ACTIONS(1227), 1,
      sym_colon,
    STATE(536), 1,
      sym_params,
  [13816] = 4,
    ACTIONS(1081), 1,
      sym_text_line,
    ACTIONS(1229), 1,
      sym_newline,
    ACTIONS(1231), 1,
      sym_inline_comment,
    STATE(257), 1,
      sym_line_end,
  [13829] = 3,
    ACTIONS(1235), 1,
      sym_comma,
    STATE(434), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1233), 2,
      sym_newline,
      sym_inline_comment,
  [13840] = 3,
    ACTIONS(1240), 1,
      sym_comma,
    STATE(435), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1238), 2,
      sym_newline,
      sym_inline_comment,
  [13851] = 4,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(203), 1,
      sym_line_end,
    STATE(283), 1,
      sym_cap_body,
  [13864] = 2,
    ACTIONS(1243), 1,
      sym_colon,
    ACTIONS(1081), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [13873] = 3,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1155), 1,
      sym_inline_comment,
    STATE(226), 1,
      sym_line_end,
  [13883] = 3,
    ACTIONS(1245), 1,
      sym_rparen,
    ACTIONS(1247), 1,
      sym_comma,
    STATE(493), 1,
      aux_sym_params_repeat1,
  [13893] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [13903] = 1,
    ACTIONS(1253), 3,
      sym_newline,
      sym_inline_comment,
      sym_colon,
  [13909] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13919] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(164), 1,
      sym_line_end,
  [13929] = 3,
    ACTIONS(1255), 1,
      sym_colon,
    ACTIONS(1257), 1,
      sym_snake_name,
    STATE(564), 1,
      sym_context_name,
  [13939] = 1,
    ACTIONS(1107), 3,
      sym_newline,
      sym_inline_comment,
      sym_text_line,
  [13945] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
  [13955] = 2,
    ACTIONS(1259), 1,
      sym_colon,
    ACTIONS(1261), 2,
      sym_rparen,
      sym_comma,
  [13963] = 3,
    ACTIONS(1263), 1,
      sym_newline,
    ACTIONS(1265), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
  [13973] = 3,
    ACTIONS(1263), 1,
      sym_newline,
    ACTIONS(1265), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
  [13983] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(168), 1,
      sym_line_end,
  [13993] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(181), 1,
      sym_line_end,
  [14003] = 3,
    ACTIONS(1267), 1,
      sym_colon,
    ACTIONS(1269), 1,
      sym_snake_name,
    STATE(574), 1,
      sym_instruct_name,
  [14013] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(37), 1,
      sym_line_end,
  [14023] = 3,
    ACTIONS(1275), 1,
      sym_pascal_name,
    STATE(569), 1,
      sym_struct_name,
    STATE(598), 1,
      sym_type_name,
  [14033] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(160), 1,
      sym_line_end,
  [14043] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(36), 1,
      sym_line_end,
  [14053] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(175), 1,
      sym_line_end,
  [14063] = 1,
    ACTIONS(1277), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14069] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [14079] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [14089] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [14099] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [14109] = 3,
    ACTIONS(1279), 1,
      sym_newline,
    ACTIONS(1281), 1,
      sym_inline_comment,
    STATE(257), 1,
      sym_line_end,
  [14119] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [14129] = 3,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1159), 1,
      sym_colon,
    STATE(607), 1,
      sym_par_clause,
  [14139] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
  [14149] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [14159] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(115), 1,
      sym_line_end,
  [14169] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
  [14179] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [14189] = 3,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1283), 1,
      sym_colon,
    STATE(596), 1,
      sym_par_clause,
  [14199] = 3,
    ACTIONS(1263), 1,
      sym_newline,
    ACTIONS(1265), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [14209] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [14219] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(170), 1,
      sym_line_end,
  [14229] = 3,
    ACTIONS(1263), 1,
      sym_newline,
    ACTIONS(1265), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
  [14239] = 3,
    ACTIONS(1285), 1,
      sym_newline,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
  [14249] = 3,
    ACTIONS(1279), 1,
      sym_newline,
    ACTIONS(1281), 1,
      sym_inline_comment,
    STATE(277), 1,
      sym_line_end,
  [14259] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [14269] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
  [14279] = 1,
    ACTIONS(1289), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14285] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
  [14295] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
  [14305] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(35), 1,
      sym_line_end,
  [14315] = 3,
    ACTIONS(1291), 1,
      sym_newline,
    ACTIONS(1293), 1,
      sym_inline_comment,
    STATE(215), 1,
      sym_line_end,
  [14325] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(173), 1,
      sym_line_end,
  [14335] = 3,
    ACTIONS(1285), 1,
      sym_newline,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(253), 1,
      sym_line_end,
  [14345] = 3,
    ACTIONS(1263), 1,
      sym_newline,
    ACTIONS(1265), 1,
      sym_inline_comment,
    STATE(73), 1,
      sym_line_end,
  [14355] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(133), 1,
      sym_line_end,
  [14365] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(135), 1,
      sym_line_end,
  [14375] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
  [14385] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_line_end,
  [14395] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(139), 1,
      sym_line_end,
  [14405] = 3,
    ACTIONS(1295), 1,
      sym_rparen,
    ACTIONS(1297), 1,
      sym_comma,
    STATE(493), 1,
      aux_sym_params_repeat1,
  [14415] = 3,
    ACTIONS(1063), 1,
      sym_newline,
    ACTIONS(1065), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
  [14425] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
  [14435] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(146), 1,
      sym_line_end,
  [14445] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [14455] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
  [14465] = 3,
    ACTIONS(1027), 1,
      sym_newline,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(152), 1,
      sym_line_end,
  [14475] = 1,
    ACTIONS(1233), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [14481] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [14491] = 1,
    ACTIONS(1238), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [14497] = 3,
    ACTIONS(1271), 1,
      sym_newline,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
  [14507] = 3,
    ACTIONS(1279), 1,
      sym_newline,
    ACTIONS(1281), 1,
      sym_inline_comment,
    STATE(279), 1,
      sym_line_end,
  [14517] = 3,
    ACTIONS(1300), 1,
      sym_newline,
    ACTIONS(1302), 1,
      sym_inline_comment,
    STATE(332), 1,
      sym_line_end,
  [14527] = 1,
    ACTIONS(1304), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14533] = 3,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1306), 1,
      sym_colon,
    STATE(612), 1,
      sym_par_clause,
  [14543] = 3,
    ACTIONS(1033), 1,
      sym_flow_par_keyword,
    ACTIONS(1215), 1,
      sym_colon,
    STATE(613), 1,
      sym_par_clause,
  [14553] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [14563] = 3,
    ACTIONS(1249), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [14573] = 3,
    ACTIONS(1195), 1,
      sym_snake_name,
    STATE(408), 1,
      sym_param_name,
    STATE(532), 1,
      sym_param,
  [14583] = 3,
    ACTIONS(1247), 1,
      sym_comma,
    ACTIONS(1308), 1,
      sym_rparen,
    STATE(439), 1,
      aux_sym_params_repeat1,
  [14593] = 1,
    ACTIONS(540), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14598] = 2,
    ACTIONS(1310), 1,
      sym_directive_value,
    STATE(472), 1,
      sym_directive_csv,
  [14605] = 2,
    ACTIONS(538), 1,
      sym__nested_indented_raw_text,
    ACTIONS(540), 1,
      sym_blank_line,
  [14612] = 2,
    ACTIONS(542), 1,
      sym__nested_indented_raw_text,
    ACTIONS(544), 1,
      sym_blank_line,
  [14619] = 2,
    ACTIONS(1312), 1,
      sym_arrow,
    ACTIONS(1314), 1,
      sym_colon,
  [14626] = 2,
    ACTIONS(1316), 1,
      sym_arrow,
    ACTIONS(1318), 1,
      sym_colon,
  [14633] = 2,
    ACTIONS(1320), 1,
      sym__snake_kebab_name,
    STATE(601), 1,
      sym_cap_name,
  [14640] = 1,
    ACTIONS(1322), 2,
      sym_rparen,
      sym_comma,
  [14645] = 1,
    ACTIONS(1324), 2,
      sym_newline,
      sym_inline_comment,
  [14650] = 1,
    ACTIONS(1326), 2,
      sym_newline,
      sym_inline_comment,
  [14655] = 2,
    ACTIONS(1320), 1,
      sym__snake_kebab_name,
    STATE(611), 1,
      sym_cap_name,
  [14662] = 1,
    ACTIONS(1328), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14667] = 1,
    ACTIONS(1330), 2,
      sym_optional_marker,
      sym_colon,
  [14672] = 2,
    ACTIONS(1320), 1,
      sym__snake_kebab_name,
    STATE(567), 1,
      sym_cap_name,
  [14679] = 2,
    ACTIONS(1332), 1,
      sym_optional_marker,
    ACTIONS(1334), 1,
      sym_colon,
  [14686] = 2,
    ACTIONS(1336), 1,
      sym_snake_name,
    STATE(502), 1,
      sym_callee,
  [14693] = 2,
    ACTIONS(1338), 1,
      sym_text_line,
    STATE(504), 1,
      sym_cap_ref,
  [14700] = 2,
    ACTIONS(1340), 1,
      sym_arrow,
    ACTIONS(1342), 1,
      sym_colon,
  [14707] = 2,
    ACTIONS(1344), 1,
      anon_sym_EQ,
    STATE(538), 1,
      sym_assign_operator,
  [14714] = 1,
    ACTIONS(1346), 2,
      sym_rparen,
      sym_comma,
  [14719] = 2,
    ACTIONS(1348), 1,
      sym__unroled_message_continuation_text,
    STATE(68), 1,
      sym__unroled_message_continuation_line,
  [14726] = 1,
    ACTIONS(1350), 2,
      sym_arrow,
      sym_colon,
  [14731] = 2,
    ACTIONS(1320), 1,
      sym__snake_kebab_name,
    STATE(603), 1,
      sym_cap_name,
  [14738] = 2,
    ACTIONS(1352), 1,
      sym_arrow,
    ACTIONS(1354), 1,
      sym_colon,
  [14745] = 1,
    ACTIONS(1356), 2,
      sym_rparen,
      sym_comma,
  [14750] = 2,
    ACTIONS(1358), 1,
      sym_text_line,
    STATE(438), 1,
      sym_property_value,
  [14757] = 2,
    ACTIONS(1360), 1,
      sym__snake_kebab_name,
    STATE(559), 1,
      sym_job_name,
  [14764] = 2,
    ACTIONS(1362), 1,
      sym_indented_raw_text,
    STATE(103), 1,
      sym_text_body_line,
  [14771] = 1,
    ACTIONS(1364), 2,
      sym_newline,
      sym_inline_comment,
  [14776] = 2,
    ACTIONS(1360), 1,
      sym__snake_kebab_name,
    STATE(561), 1,
      sym_job_name,
  [14783] = 1,
    ACTIONS(1366), 2,
      sym_newline,
      sym_inline_comment,
  [14788] = 2,
    ACTIONS(1368), 1,
      sym_indented_raw_text,
    STATE(107), 1,
      sym_text_body_line,
  [14795] = 2,
    ACTIONS(1310), 1,
      sym_directive_value,
    STATE(484), 1,
      sym_directive_csv,
  [14802] = 1,
    ACTIONS(1370), 2,
      sym_arrow,
      sym_colon,
  [14807] = 1,
    ACTIONS(1372), 2,
      sym_arrow,
      sym_colon,
  [14812] = 1,
    ACTIONS(544), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14817] = 1,
    ACTIONS(1374), 1,
      sym_colon,
  [14821] = 1,
    ACTIONS(1376), 1,
      sym_colon,
  [14825] = 1,
    ACTIONS(1378), 1,
      sym_colon,
  [14829] = 1,
    ACTIONS(1380), 1,
      sym_newline,
  [14833] = 1,
    ACTIONS(1382), 1,
      sym_directive_value,
  [14837] = 1,
    ACTIONS(1384), 1,
      sym_newline,
  [14841] = 1,
    ACTIONS(1386), 1,
      sym_colon,
  [14845] = 1,
    ACTIONS(1388), 1,
      sym_colon,
  [14849] = 1,
    ACTIONS(1390), 1,
      sym_colon,
  [14853] = 1,
    ACTIONS(1392), 1,
      anon_sym_EQ,
  [14857] = 1,
    ACTIONS(1394), 1,
      sym_colon,
  [14861] = 1,
    ACTIONS(1396), 1,
      sym_newline,
  [14865] = 1,
    ACTIONS(1398), 1,
      sym_colon,
  [14869] = 1,
    ACTIONS(1400), 1,
      sym_colon,
  [14873] = 1,
    ACTIONS(1402), 1,
      ts_builtin_sym_end,
  [14877] = 1,
    ACTIONS(1404), 1,
      sym_colon,
  [14881] = 1,
    ACTIONS(1406), 1,
      sym_newline,
  [14885] = 1,
    ACTIONS(1408), 1,
      sym_integer_literal,
  [14889] = 1,
    ACTIONS(1410), 1,
      sym_colon,
  [14893] = 1,
    ACTIONS(1412), 1,
      sym_newline,
  [14897] = 1,
    ACTIONS(1414), 1,
      sym_colon,
  [14901] = 1,
    ACTIONS(1416), 1,
      sym_text_line,
  [14905] = 1,
    ACTIONS(1418), 1,
      sym_colon,
  [14909] = 1,
    ACTIONS(1420), 1,
      sym_colon,
  [14913] = 1,
    ACTIONS(1422), 1,
      sym_newline,
  [14917] = 1,
    ACTIONS(1424), 1,
      sym_colon,
  [14921] = 1,
    ACTIONS(1426), 1,
      sym_cap_kind,
  [14925] = 1,
    ACTIONS(1428), 1,
      sym_colon,
  [14929] = 1,
    ACTIONS(1430), 1,
      sym_colon,
  [14933] = 1,
    ACTIONS(1432), 1,
      sym_colon,
  [14937] = 1,
    ACTIONS(1434), 1,
      sym_newline,
  [14941] = 1,
    ACTIONS(1436), 1,
      sym_colon,
  [14945] = 1,
    ACTIONS(1438), 1,
      sym_newline,
  [14949] = 1,
    ACTIONS(1440), 1,
      sym_newline,
  [14953] = 1,
    ACTIONS(1442), 1,
      sym_colon,
  [14957] = 1,
    ACTIONS(1444), 1,
      sym_newline,
  [14961] = 1,
    ACTIONS(1446), 1,
      sym_directive_value,
  [14965] = 1,
    ACTIONS(1448), 1,
      sym_newline,
  [14969] = 1,
    ACTIONS(1450), 1,
      sym_newline,
  [14973] = 1,
    ACTIONS(1452), 1,
      sym_newline,
  [14977] = 1,
    ACTIONS(1454), 1,
      sym_newline,
  [14981] = 1,
    ACTIONS(1456), 1,
      sym_newline,
  [14985] = 1,
    ACTIONS(1458), 1,
      sym_newline,
  [14989] = 1,
    ACTIONS(1460), 1,
      sym_newline,
  [14993] = 1,
    ACTIONS(1462), 1,
      sym_newline,
  [14997] = 1,
    ACTIONS(1464), 1,
      sym_newline,
  [15001] = 1,
    ACTIONS(1466), 1,
      sym_newline,
  [15005] = 1,
    ACTIONS(1468), 1,
      sym_colon,
  [15009] = 1,
    ACTIONS(1283), 1,
      sym_colon,
  [15013] = 1,
    ACTIONS(1470), 1,
      sym_colon,
  [15017] = 1,
    ACTIONS(1472), 1,
      sym_colon,
  [15021] = 1,
    ACTIONS(1474), 1,
      sym_colon,
  [15025] = 1,
    ACTIONS(1476), 1,
      sym_colon,
  [15029] = 1,
    ACTIONS(1478), 1,
      sym_colon,
  [15033] = 1,
    ACTIONS(1480), 1,
      sym_colon,
  [15037] = 1,
    ACTIONS(1482), 1,
      sym_colon,
  [15041] = 1,
    ACTIONS(1484), 1,
      sym_colon,
  [15045] = 1,
    ACTIONS(1306), 1,
      sym_colon,
  [15049] = 1,
    ACTIONS(1486), 1,
      sym_colon,
  [15053] = 1,
    ACTIONS(1488), 1,
      sym_colon,
  [15057] = 1,
    ACTIONS(1490), 1,
      sym_colon,
  [15061] = 1,
    ACTIONS(1492), 1,
      sym_colon,
  [15065] = 1,
    ACTIONS(1494), 1,
      sym_colon,
  [15069] = 1,
    ACTIONS(1496), 1,
      sym_colon,
  [15073] = 1,
    ACTIONS(1498), 1,
      sym_colon,
  [15077] = 1,
    ACTIONS(1500), 1,
      sym_newline,
  [15081] = 1,
    ACTIONS(1502), 1,
      sym_colon,
  [15085] = 1,
    ACTIONS(1504), 1,
      sym_integer_literal,
  [15089] = 1,
    ACTIONS(1506), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 467,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 649,
  [SMALL_STATE(10)] = 740,
  [SMALL_STATE(11)] = 831,
  [SMALL_STATE(12)] = 922,
  [SMALL_STATE(13)] = 1013,
  [SMALL_STATE(14)] = 1104,
  [SMALL_STATE(15)] = 1182,
  [SMALL_STATE(16)] = 1260,
  [SMALL_STATE(17)] = 1338,
  [SMALL_STATE(18)] = 1426,
  [SMALL_STATE(19)] = 1514,
  [SMALL_STATE(20)] = 1591,
  [SMALL_STATE(21)] = 1668,
  [SMALL_STATE(22)] = 1745,
  [SMALL_STATE(23)] = 1827,
  [SMALL_STATE(24)] = 1909,
  [SMALL_STATE(25)] = 1978,
  [SMALL_STATE(26)] = 2047,
  [SMALL_STATE(27)] = 2116,
  [SMALL_STATE(28)] = 2180,
  [SMALL_STATE(29)] = 2244,
  [SMALL_STATE(30)] = 2308,
  [SMALL_STATE(31)] = 2387,
  [SMALL_STATE(32)] = 2466,
  [SMALL_STATE(33)] = 2545,
  [SMALL_STATE(34)] = 2624,
  [SMALL_STATE(35)] = 2703,
  [SMALL_STATE(36)] = 2782,
  [SMALL_STATE(37)] = 2861,
  [SMALL_STATE(38)] = 2940,
  [SMALL_STATE(39)] = 3016,
  [SMALL_STATE(40)] = 3063,
  [SMALL_STATE(41)] = 3110,
  [SMALL_STATE(42)] = 3157,
  [SMALL_STATE(43)] = 3203,
  [SMALL_STATE(44)] = 3249,
  [SMALL_STATE(45)] = 3295,
  [SMALL_STATE(46)] = 3341,
  [SMALL_STATE(47)] = 3387,
  [SMALL_STATE(48)] = 3433,
  [SMALL_STATE(49)] = 3479,
  [SMALL_STATE(50)] = 3525,
  [SMALL_STATE(51)] = 3571,
  [SMALL_STATE(52)] = 3612,
  [SMALL_STATE(53)] = 3653,
  [SMALL_STATE(54)] = 3694,
  [SMALL_STATE(55)] = 3761,
  [SMALL_STATE(56)] = 3802,
  [SMALL_STATE(57)] = 3843,
  [SMALL_STATE(58)] = 3884,
  [SMALL_STATE(59)] = 3925,
  [SMALL_STATE(60)] = 3992,
  [SMALL_STATE(61)] = 4028,
  [SMALL_STATE(62)] = 4064,
  [SMALL_STATE(63)] = 4100,
  [SMALL_STATE(64)] = 4136,
  [SMALL_STATE(65)] = 4172,
  [SMALL_STATE(66)] = 4214,
  [SMALL_STATE(67)] = 4256,
  [SMALL_STATE(68)] = 4298,
  [SMALL_STATE(69)] = 4334,
  [SMALL_STATE(70)] = 4378,
  [SMALL_STATE(71)] = 4422,
  [SMALL_STATE(72)] = 4465,
  [SMALL_STATE(73)] = 4504,
  [SMALL_STATE(74)] = 4539,
  [SMALL_STATE(75)] = 4574,
  [SMALL_STATE(76)] = 4613,
  [SMALL_STATE(77)] = 4654,
  [SMALL_STATE(78)] = 4693,
  [SMALL_STATE(79)] = 4728,
  [SMALL_STATE(80)] = 4767,
  [SMALL_STATE(81)] = 4802,
  [SMALL_STATE(82)] = 4841,
  [SMALL_STATE(83)] = 4876,
  [SMALL_STATE(84)] = 4915,
  [SMALL_STATE(85)] = 4954,
  [SMALL_STATE(86)] = 4997,
  [SMALL_STATE(87)] = 5036,
  [SMALL_STATE(88)] = 5071,
  [SMALL_STATE(89)] = 5106,
  [SMALL_STATE(90)] = 5147,
  [SMALL_STATE(91)] = 5188,
  [SMALL_STATE(92)] = 5223,
  [SMALL_STATE(93)] = 5262,
  [SMALL_STATE(94)] = 5297,
  [SMALL_STATE(95)] = 5332,
  [SMALL_STATE(96)] = 5367,
  [SMALL_STATE(97)] = 5402,
  [SMALL_STATE(98)] = 5436,
  [SMALL_STATE(99)] = 5474,
  [SMALL_STATE(100)] = 5512,
  [SMALL_STATE(101)] = 5550,
  [SMALL_STATE(102)] = 5584,
  [SMALL_STATE(103)] = 5622,
  [SMALL_STATE(104)] = 5656,
  [SMALL_STATE(105)] = 5690,
  [SMALL_STATE(106)] = 5724,
  [SMALL_STATE(107)] = 5757,
  [SMALL_STATE(108)] = 5790,
  [SMALL_STATE(109)] = 5823,
  [SMALL_STATE(110)] = 5856,
  [SMALL_STATE(111)] = 5889,
  [SMALL_STATE(112)] = 5922,
  [SMALL_STATE(113)] = 5955,
  [SMALL_STATE(114)] = 5988,
  [SMALL_STATE(115)] = 6021,
  [SMALL_STATE(116)] = 6054,
  [SMALL_STATE(117)] = 6087,
  [SMALL_STATE(118)] = 6120,
  [SMALL_STATE(119)] = 6153,
  [SMALL_STATE(120)] = 6186,
  [SMALL_STATE(121)] = 6219,
  [SMALL_STATE(122)] = 6252,
  [SMALL_STATE(123)] = 6285,
  [SMALL_STATE(124)] = 6318,
  [SMALL_STATE(125)] = 6351,
  [SMALL_STATE(126)] = 6384,
  [SMALL_STATE(127)] = 6417,
  [SMALL_STATE(128)] = 6450,
  [SMALL_STATE(129)] = 6483,
  [SMALL_STATE(130)] = 6516,
  [SMALL_STATE(131)] = 6549,
  [SMALL_STATE(132)] = 6582,
  [SMALL_STATE(133)] = 6615,
  [SMALL_STATE(134)] = 6648,
  [SMALL_STATE(135)] = 6681,
  [SMALL_STATE(136)] = 6714,
  [SMALL_STATE(137)] = 6747,
  [SMALL_STATE(138)] = 6780,
  [SMALL_STATE(139)] = 6813,
  [SMALL_STATE(140)] = 6846,
  [SMALL_STATE(141)] = 6879,
  [SMALL_STATE(142)] = 6912,
  [SMALL_STATE(143)] = 6945,
  [SMALL_STATE(144)] = 6978,
  [SMALL_STATE(145)] = 7011,
  [SMALL_STATE(146)] = 7044,
  [SMALL_STATE(147)] = 7077,
  [SMALL_STATE(148)] = 7110,
  [SMALL_STATE(149)] = 7143,
  [SMALL_STATE(150)] = 7176,
  [SMALL_STATE(151)] = 7209,
  [SMALL_STATE(152)] = 7242,
  [SMALL_STATE(153)] = 7275,
  [SMALL_STATE(154)] = 7308,
  [SMALL_STATE(155)] = 7341,
  [SMALL_STATE(156)] = 7374,
  [SMALL_STATE(157)] = 7406,
  [SMALL_STATE(158)] = 7438,
  [SMALL_STATE(159)] = 7470,
  [SMALL_STATE(160)] = 7502,
  [SMALL_STATE(161)] = 7534,
  [SMALL_STATE(162)] = 7566,
  [SMALL_STATE(163)] = 7598,
  [SMALL_STATE(164)] = 7630,
  [SMALL_STATE(165)] = 7662,
  [SMALL_STATE(166)] = 7694,
  [SMALL_STATE(167)] = 7726,
  [SMALL_STATE(168)] = 7758,
  [SMALL_STATE(169)] = 7790,
  [SMALL_STATE(170)] = 7822,
  [SMALL_STATE(171)] = 7854,
  [SMALL_STATE(172)] = 7886,
  [SMALL_STATE(173)] = 7918,
  [SMALL_STATE(174)] = 7950,
  [SMALL_STATE(175)] = 7982,
  [SMALL_STATE(176)] = 8014,
  [SMALL_STATE(177)] = 8046,
  [SMALL_STATE(178)] = 8078,
  [SMALL_STATE(179)] = 8110,
  [SMALL_STATE(180)] = 8142,
  [SMALL_STATE(181)] = 8174,
  [SMALL_STATE(182)] = 8206,
  [SMALL_STATE(183)] = 8238,
  [SMALL_STATE(184)] = 8270,
  [SMALL_STATE(185)] = 8302,
  [SMALL_STATE(186)] = 8334,
  [SMALL_STATE(187)] = 8366,
  [SMALL_STATE(188)] = 8398,
  [SMALL_STATE(189)] = 8430,
  [SMALL_STATE(190)] = 8462,
  [SMALL_STATE(191)] = 8494,
  [SMALL_STATE(192)] = 8526,
  [SMALL_STATE(193)] = 8558,
  [SMALL_STATE(194)] = 8590,
  [SMALL_STATE(195)] = 8622,
  [SMALL_STATE(196)] = 8654,
  [SMALL_STATE(197)] = 8686,
  [SMALL_STATE(198)] = 8718,
  [SMALL_STATE(199)] = 8750,
  [SMALL_STATE(200)] = 8782,
  [SMALL_STATE(201)] = 8837,
  [SMALL_STATE(202)] = 8884,
  [SMALL_STATE(203)] = 8931,
  [SMALL_STATE(204)] = 8978,
  [SMALL_STATE(205)] = 9033,
  [SMALL_STATE(206)] = 9088,
  [SMALL_STATE(207)] = 9125,
  [SMALL_STATE(208)] = 9172,
  [SMALL_STATE(209)] = 9209,
  [SMALL_STATE(210)] = 9264,
  [SMALL_STATE(211)] = 9301,
  [SMALL_STATE(212)] = 9333,
  [SMALL_STATE(213)] = 9359,
  [SMALL_STATE(214)] = 9385,
  [SMALL_STATE(215)] = 9421,
  [SMALL_STATE(216)] = 9446,
  [SMALL_STATE(217)] = 9471,
  [SMALL_STATE(218)] = 9496,
  [SMALL_STATE(219)] = 9532,
  [SMALL_STATE(220)] = 9560,
  [SMALL_STATE(221)] = 9596,
  [SMALL_STATE(222)] = 9627,
  [SMALL_STATE(223)] = 9658,
  [SMALL_STATE(224)] = 9686,
  [SMALL_STATE(225)] = 9714,
  [SMALL_STATE(226)] = 9742,
  [SMALL_STATE(227)] = 9766,
  [SMALL_STATE(228)] = 9794,
  [SMALL_STATE(229)] = 9822,
  [SMALL_STATE(230)] = 9850,
  [SMALL_STATE(231)] = 9878,
  [SMALL_STATE(232)] = 9906,
  [SMALL_STATE(233)] = 9928,
  [SMALL_STATE(234)] = 9950,
  [SMALL_STATE(235)] = 9978,
  [SMALL_STATE(236)] = 10006,
  [SMALL_STATE(237)] = 10034,
  [SMALL_STATE(238)] = 10062,
  [SMALL_STATE(239)] = 10090,
  [SMALL_STATE(240)] = 10118,
  [SMALL_STATE(241)] = 10146,
  [SMALL_STATE(242)] = 10174,
  [SMALL_STATE(243)] = 10202,
  [SMALL_STATE(244)] = 10230,
  [SMALL_STATE(245)] = 10254,
  [SMALL_STATE(246)] = 10278,
  [SMALL_STATE(247)] = 10304,
  [SMALL_STATE(248)] = 10332,
  [SMALL_STATE(249)] = 10360,
  [SMALL_STATE(250)] = 10388,
  [SMALL_STATE(251)] = 10416,
  [SMALL_STATE(252)] = 10444,
  [SMALL_STATE(253)] = 10467,
  [SMALL_STATE(254)] = 10490,
  [SMALL_STATE(255)] = 10513,
  [SMALL_STATE(256)] = 10536,
  [SMALL_STATE(257)] = 10559,
  [SMALL_STATE(258)] = 10581,
  [SMALL_STATE(259)] = 10603,
  [SMALL_STATE(260)] = 10625,
  [SMALL_STATE(261)] = 10647,
  [SMALL_STATE(262)] = 10669,
  [SMALL_STATE(263)] = 10691,
  [SMALL_STATE(264)] = 10713,
  [SMALL_STATE(265)] = 10735,
  [SMALL_STATE(266)] = 10757,
  [SMALL_STATE(267)] = 10779,
  [SMALL_STATE(268)] = 10801,
  [SMALL_STATE(269)] = 10823,
  [SMALL_STATE(270)] = 10845,
  [SMALL_STATE(271)] = 10867,
  [SMALL_STATE(272)] = 10889,
  [SMALL_STATE(273)] = 10911,
  [SMALL_STATE(274)] = 10933,
  [SMALL_STATE(275)] = 10955,
  [SMALL_STATE(276)] = 10977,
  [SMALL_STATE(277)] = 10999,
  [SMALL_STATE(278)] = 11021,
  [SMALL_STATE(279)] = 11043,
  [SMALL_STATE(280)] = 11065,
  [SMALL_STATE(281)] = 11087,
  [SMALL_STATE(282)] = 11109,
  [SMALL_STATE(283)] = 11131,
  [SMALL_STATE(284)] = 11153,
  [SMALL_STATE(285)] = 11175,
  [SMALL_STATE(286)] = 11197,
  [SMALL_STATE(287)] = 11219,
  [SMALL_STATE(288)] = 11241,
  [SMALL_STATE(289)] = 11263,
  [SMALL_STATE(290)] = 11285,
  [SMALL_STATE(291)] = 11307,
  [SMALL_STATE(292)] = 11329,
  [SMALL_STATE(293)] = 11351,
  [SMALL_STATE(294)] = 11373,
  [SMALL_STATE(295)] = 11398,
  [SMALL_STATE(296)] = 11423,
  [SMALL_STATE(297)] = 11448,
  [SMALL_STATE(298)] = 11473,
  [SMALL_STATE(299)] = 11498,
  [SMALL_STATE(300)] = 11523,
  [SMALL_STATE(301)] = 11548,
  [SMALL_STATE(302)] = 11573,
  [SMALL_STATE(303)] = 11598,
  [SMALL_STATE(304)] = 11623,
  [SMALL_STATE(305)] = 11648,
  [SMALL_STATE(306)] = 11673,
  [SMALL_STATE(307)] = 11698,
  [SMALL_STATE(308)] = 11728,
  [SMALL_STATE(309)] = 11758,
  [SMALL_STATE(310)] = 11785,
  [SMALL_STATE(311)] = 11812,
  [SMALL_STATE(312)] = 11830,
  [SMALL_STATE(313)] = 11848,
  [SMALL_STATE(314)] = 11866,
  [SMALL_STATE(315)] = 11890,
  [SMALL_STATE(316)] = 11914,
  [SMALL_STATE(317)] = 11939,
  [SMALL_STATE(318)] = 11960,
  [SMALL_STATE(319)] = 11983,
  [SMALL_STATE(320)] = 12004,
  [SMALL_STATE(321)] = 12025,
  [SMALL_STATE(322)] = 12046,
  [SMALL_STATE(323)] = 12067,
  [SMALL_STATE(324)] = 12088,
  [SMALL_STATE(325)] = 12111,
  [SMALL_STATE(326)] = 12136,
  [SMALL_STATE(327)] = 12159,
  [SMALL_STATE(328)] = 12180,
  [SMALL_STATE(329)] = 12201,
  [SMALL_STATE(330)] = 12222,
  [SMALL_STATE(331)] = 12243,
  [SMALL_STATE(332)] = 12266,
  [SMALL_STATE(333)] = 12287,
  [SMALL_STATE(334)] = 12301,
  [SMALL_STATE(335)] = 12321,
  [SMALL_STATE(336)] = 12335,
  [SMALL_STATE(337)] = 12357,
  [SMALL_STATE(338)] = 12367,
  [SMALL_STATE(339)] = 12377,
  [SMALL_STATE(340)] = 12387,
  [SMALL_STATE(341)] = 12407,
  [SMALL_STATE(342)] = 12427,
  [SMALL_STATE(343)] = 12447,
  [SMALL_STATE(344)] = 12467,
  [SMALL_STATE(345)] = 12487,
  [SMALL_STATE(346)] = 12507,
  [SMALL_STATE(347)] = 12521,
  [SMALL_STATE(348)] = 12541,
  [SMALL_STATE(349)] = 12561,
  [SMALL_STATE(350)] = 12581,
  [SMALL_STATE(351)] = 12601,
  [SMALL_STATE(352)] = 12621,
  [SMALL_STATE(353)] = 12641,
  [SMALL_STATE(354)] = 12661,
  [SMALL_STATE(355)] = 12681,
  [SMALL_STATE(356)] = 12701,
  [SMALL_STATE(357)] = 12721,
  [SMALL_STATE(358)] = 12741,
  [SMALL_STATE(359)] = 12761,
  [SMALL_STATE(360)] = 12781,
  [SMALL_STATE(361)] = 12801,
  [SMALL_STATE(362)] = 12821,
  [SMALL_STATE(363)] = 12841,
  [SMALL_STATE(364)] = 12861,
  [SMALL_STATE(365)] = 12881,
  [SMALL_STATE(366)] = 12891,
  [SMALL_STATE(367)] = 12911,
  [SMALL_STATE(368)] = 12931,
  [SMALL_STATE(369)] = 12951,
  [SMALL_STATE(370)] = 12961,
  [SMALL_STATE(371)] = 12981,
  [SMALL_STATE(372)] = 13001,
  [SMALL_STATE(373)] = 13023,
  [SMALL_STATE(374)] = 13033,
  [SMALL_STATE(375)] = 13055,
  [SMALL_STATE(376)] = 13077,
  [SMALL_STATE(377)] = 13097,
  [SMALL_STATE(378)] = 13117,
  [SMALL_STATE(379)] = 13137,
  [SMALL_STATE(380)] = 13146,
  [SMALL_STATE(381)] = 13163,
  [SMALL_STATE(382)] = 13182,
  [SMALL_STATE(383)] = 13191,
  [SMALL_STATE(384)] = 13210,
  [SMALL_STATE(385)] = 13227,
  [SMALL_STATE(386)] = 13243,
  [SMALL_STATE(387)] = 13255,
  [SMALL_STATE(388)] = 13271,
  [SMALL_STATE(389)] = 13287,
  [SMALL_STATE(390)] = 13301,
  [SMALL_STATE(391)] = 13317,
  [SMALL_STATE(392)] = 13327,
  [SMALL_STATE(393)] = 13339,
  [SMALL_STATE(394)] = 13355,
  [SMALL_STATE(395)] = 13371,
  [SMALL_STATE(396)] = 13387,
  [SMALL_STATE(397)] = 13403,
  [SMALL_STATE(398)] = 13419,
  [SMALL_STATE(399)] = 13435,
  [SMALL_STATE(400)] = 13451,
  [SMALL_STATE(401)] = 13464,
  [SMALL_STATE(402)] = 13473,
  [SMALL_STATE(403)] = 13486,
  [SMALL_STATE(404)] = 13499,
  [SMALL_STATE(405)] = 13512,
  [SMALL_STATE(406)] = 13525,
  [SMALL_STATE(407)] = 13536,
  [SMALL_STATE(408)] = 13543,
  [SMALL_STATE(409)] = 13554,
  [SMALL_STATE(410)] = 13567,
  [SMALL_STATE(411)] = 13576,
  [SMALL_STATE(412)] = 13589,
  [SMALL_STATE(413)] = 13602,
  [SMALL_STATE(414)] = 13615,
  [SMALL_STATE(415)] = 13626,
  [SMALL_STATE(416)] = 13633,
  [SMALL_STATE(417)] = 13646,
  [SMALL_STATE(418)] = 13655,
  [SMALL_STATE(419)] = 13664,
  [SMALL_STATE(420)] = 13671,
  [SMALL_STATE(421)] = 13684,
  [SMALL_STATE(422)] = 13693,
  [SMALL_STATE(423)] = 13702,
  [SMALL_STATE(424)] = 13715,
  [SMALL_STATE(425)] = 13728,
  [SMALL_STATE(426)] = 13741,
  [SMALL_STATE(427)] = 13754,
  [SMALL_STATE(428)] = 13767,
  [SMALL_STATE(429)] = 13778,
  [SMALL_STATE(430)] = 13789,
  [SMALL_STATE(431)] = 13796,
  [SMALL_STATE(432)] = 13803,
  [SMALL_STATE(433)] = 13816,
  [SMALL_STATE(434)] = 13829,
  [SMALL_STATE(435)] = 13840,
  [SMALL_STATE(436)] = 13851,
  [SMALL_STATE(437)] = 13864,
  [SMALL_STATE(438)] = 13873,
  [SMALL_STATE(439)] = 13883,
  [SMALL_STATE(440)] = 13893,
  [SMALL_STATE(441)] = 13903,
  [SMALL_STATE(442)] = 13909,
  [SMALL_STATE(443)] = 13919,
  [SMALL_STATE(444)] = 13929,
  [SMALL_STATE(445)] = 13939,
  [SMALL_STATE(446)] = 13945,
  [SMALL_STATE(447)] = 13955,
  [SMALL_STATE(448)] = 13963,
  [SMALL_STATE(449)] = 13973,
  [SMALL_STATE(450)] = 13983,
  [SMALL_STATE(451)] = 13993,
  [SMALL_STATE(452)] = 14003,
  [SMALL_STATE(453)] = 14013,
  [SMALL_STATE(454)] = 14023,
  [SMALL_STATE(455)] = 14033,
  [SMALL_STATE(456)] = 14043,
  [SMALL_STATE(457)] = 14053,
  [SMALL_STATE(458)] = 14063,
  [SMALL_STATE(459)] = 14069,
  [SMALL_STATE(460)] = 14079,
  [SMALL_STATE(461)] = 14089,
  [SMALL_STATE(462)] = 14099,
  [SMALL_STATE(463)] = 14109,
  [SMALL_STATE(464)] = 14119,
  [SMALL_STATE(465)] = 14129,
  [SMALL_STATE(466)] = 14139,
  [SMALL_STATE(467)] = 14149,
  [SMALL_STATE(468)] = 14159,
  [SMALL_STATE(469)] = 14169,
  [SMALL_STATE(470)] = 14179,
  [SMALL_STATE(471)] = 14189,
  [SMALL_STATE(472)] = 14199,
  [SMALL_STATE(473)] = 14209,
  [SMALL_STATE(474)] = 14219,
  [SMALL_STATE(475)] = 14229,
  [SMALL_STATE(476)] = 14239,
  [SMALL_STATE(477)] = 14249,
  [SMALL_STATE(478)] = 14259,
  [SMALL_STATE(479)] = 14269,
  [SMALL_STATE(480)] = 14279,
  [SMALL_STATE(481)] = 14285,
  [SMALL_STATE(482)] = 14295,
  [SMALL_STATE(483)] = 14305,
  [SMALL_STATE(484)] = 14315,
  [SMALL_STATE(485)] = 14325,
  [SMALL_STATE(486)] = 14335,
  [SMALL_STATE(487)] = 14345,
  [SMALL_STATE(488)] = 14355,
  [SMALL_STATE(489)] = 14365,
  [SMALL_STATE(490)] = 14375,
  [SMALL_STATE(491)] = 14385,
  [SMALL_STATE(492)] = 14395,
  [SMALL_STATE(493)] = 14405,
  [SMALL_STATE(494)] = 14415,
  [SMALL_STATE(495)] = 14425,
  [SMALL_STATE(496)] = 14435,
  [SMALL_STATE(497)] = 14445,
  [SMALL_STATE(498)] = 14455,
  [SMALL_STATE(499)] = 14465,
  [SMALL_STATE(500)] = 14475,
  [SMALL_STATE(501)] = 14481,
  [SMALL_STATE(502)] = 14491,
  [SMALL_STATE(503)] = 14497,
  [SMALL_STATE(504)] = 14507,
  [SMALL_STATE(505)] = 14517,
  [SMALL_STATE(506)] = 14527,
  [SMALL_STATE(507)] = 14533,
  [SMALL_STATE(508)] = 14543,
  [SMALL_STATE(509)] = 14553,
  [SMALL_STATE(510)] = 14563,
  [SMALL_STATE(511)] = 14573,
  [SMALL_STATE(512)] = 14583,
  [SMALL_STATE(513)] = 14593,
  [SMALL_STATE(514)] = 14598,
  [SMALL_STATE(515)] = 14605,
  [SMALL_STATE(516)] = 14612,
  [SMALL_STATE(517)] = 14619,
  [SMALL_STATE(518)] = 14626,
  [SMALL_STATE(519)] = 14633,
  [SMALL_STATE(520)] = 14640,
  [SMALL_STATE(521)] = 14645,
  [SMALL_STATE(522)] = 14650,
  [SMALL_STATE(523)] = 14655,
  [SMALL_STATE(524)] = 14662,
  [SMALL_STATE(525)] = 14667,
  [SMALL_STATE(526)] = 14672,
  [SMALL_STATE(527)] = 14679,
  [SMALL_STATE(528)] = 14686,
  [SMALL_STATE(529)] = 14693,
  [SMALL_STATE(530)] = 14700,
  [SMALL_STATE(531)] = 14707,
  [SMALL_STATE(532)] = 14714,
  [SMALL_STATE(533)] = 14719,
  [SMALL_STATE(534)] = 14726,
  [SMALL_STATE(535)] = 14731,
  [SMALL_STATE(536)] = 14738,
  [SMALL_STATE(537)] = 14745,
  [SMALL_STATE(538)] = 14750,
  [SMALL_STATE(539)] = 14757,
  [SMALL_STATE(540)] = 14764,
  [SMALL_STATE(541)] = 14771,
  [SMALL_STATE(542)] = 14776,
  [SMALL_STATE(543)] = 14783,
  [SMALL_STATE(544)] = 14788,
  [SMALL_STATE(545)] = 14795,
  [SMALL_STATE(546)] = 14802,
  [SMALL_STATE(547)] = 14807,
  [SMALL_STATE(548)] = 14812,
  [SMALL_STATE(549)] = 14817,
  [SMALL_STATE(550)] = 14821,
  [SMALL_STATE(551)] = 14825,
  [SMALL_STATE(552)] = 14829,
  [SMALL_STATE(553)] = 14833,
  [SMALL_STATE(554)] = 14837,
  [SMALL_STATE(555)] = 14841,
  [SMALL_STATE(556)] = 14845,
  [SMALL_STATE(557)] = 14849,
  [SMALL_STATE(558)] = 14853,
  [SMALL_STATE(559)] = 14857,
  [SMALL_STATE(560)] = 14861,
  [SMALL_STATE(561)] = 14865,
  [SMALL_STATE(562)] = 14869,
  [SMALL_STATE(563)] = 14873,
  [SMALL_STATE(564)] = 14877,
  [SMALL_STATE(565)] = 14881,
  [SMALL_STATE(566)] = 14885,
  [SMALL_STATE(567)] = 14889,
  [SMALL_STATE(568)] = 14893,
  [SMALL_STATE(569)] = 14897,
  [SMALL_STATE(570)] = 14901,
  [SMALL_STATE(571)] = 14905,
  [SMALL_STATE(572)] = 14909,
  [SMALL_STATE(573)] = 14913,
  [SMALL_STATE(574)] = 14917,
  [SMALL_STATE(575)] = 14921,
  [SMALL_STATE(576)] = 14925,
  [SMALL_STATE(577)] = 14929,
  [SMALL_STATE(578)] = 14933,
  [SMALL_STATE(579)] = 14937,
  [SMALL_STATE(580)] = 14941,
  [SMALL_STATE(581)] = 14945,
  [SMALL_STATE(582)] = 14949,
  [SMALL_STATE(583)] = 14953,
  [SMALL_STATE(584)] = 14957,
  [SMALL_STATE(585)] = 14961,
  [SMALL_STATE(586)] = 14965,
  [SMALL_STATE(587)] = 14969,
  [SMALL_STATE(588)] = 14973,
  [SMALL_STATE(589)] = 14977,
  [SMALL_STATE(590)] = 14981,
  [SMALL_STATE(591)] = 14985,
  [SMALL_STATE(592)] = 14989,
  [SMALL_STATE(593)] = 14993,
  [SMALL_STATE(594)] = 14997,
  [SMALL_STATE(595)] = 15001,
  [SMALL_STATE(596)] = 15005,
  [SMALL_STATE(597)] = 15009,
  [SMALL_STATE(598)] = 15013,
  [SMALL_STATE(599)] = 15017,
  [SMALL_STATE(600)] = 15021,
  [SMALL_STATE(601)] = 15025,
  [SMALL_STATE(602)] = 15029,
  [SMALL_STATE(603)] = 15033,
  [SMALL_STATE(604)] = 15037,
  [SMALL_STATE(605)] = 15041,
  [SMALL_STATE(606)] = 15045,
  [SMALL_STATE(607)] = 15049,
  [SMALL_STATE(608)] = 15053,
  [SMALL_STATE(609)] = 15057,
  [SMALL_STATE(610)] = 15061,
  [SMALL_STATE(611)] = 15065,
  [SMALL_STATE(612)] = 15069,
  [SMALL_STATE(613)] = 15073,
  [SMALL_STATE(614)] = 15077,
  [SMALL_STATE(615)] = 15081,
  [SMALL_STATE(616)] = 15085,
  [SMALL_STATE(617)] = 15089,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(595),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(568),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 2, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 3, 2, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 3, 2, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(211),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(219),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(584),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 27),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 27),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(239),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(239),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 22),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 22),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 26),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 28),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 28),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 26),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 26),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 23),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 23),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 28),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 28),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 13),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 13),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 20),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 20),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 20),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 20),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 23),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 23),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(338),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thunk_reserved_word, 1, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(511),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 22),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1402] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
