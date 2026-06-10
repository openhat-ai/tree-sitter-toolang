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
#define STATE_COUNT 606
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
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
  aux_sym_directive_value_token1 = 26,
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
  sym_indented_raw_text = 69,
  sym__implicit_do_raw_text = 70,
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
  sym__implicit_do_text_body_line = 129,
  sym_invalid_flow_reserved_statement = 130,
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
  sym_until_statement = 142,
  sym_condition = 143,
  sym_to_clause = 144,
  sym_par_clause = 145,
  sym_limit_clause = 146,
  sym_times_clause = 147,
  sym_callees = 148,
  sym_callee = 149,
  sym_agent = 150,
  sym__itemwise_named_head = 151,
  sym__rank_named_head = 152,
  sym_directive = 153,
  sym_directive_key = 154,
  sym_directive_op = 155,
  sym_directive_value = 156,
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
  sym_text_line = 174,
  aux_sym_source_file_repeat1 = 175,
  aux_sym_type_repeat1 = 176,
  aux_sym_struct_body_repeat1 = 177,
  aux_sym_cap_body_repeat1 = 178,
  aux_sym_cap_body_repeat2 = 179,
  aux_sym_text_body_repeat1 = 180,
  aux_sym__nested_text_body_repeat1 = 181,
  aux_sym_params_repeat1 = 182,
  aux_sym_statements_repeat1 = 183,
  aux_sym_implicit_do_statement_repeat1 = 184,
  aux_sym_callees_repeat1 = 185,
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
  [aux_sym_directive_value_token1] = "directive_value_token1",
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
  [sym__itemwise_named_head] = "_itemwise_named_head",
  [sym__rank_named_head] = "_rank_named_head",
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
  [sym_invalid_thunk_reserved_message] = "invalid_thunk_reserved_message",
  [sym_role] = "role",
  [sym__pass_statement] = "_pass_statement",
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__thunk_reserved_word] = "_thunk_reserved_word",
  [sym_assign_operator] = "assign_operator",
  [sym_type_name] = "type_name",
  [sym_text_line] = "text_line",
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
  [aux_sym_directive_value_token1] = aux_sym_directive_value_token1,
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
  [sym__itemwise_named_head] = sym__itemwise_named_head,
  [sym__rank_named_head] = sym__rank_named_head,
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
  [sym_invalid_thunk_reserved_message] = sym_invalid_thunk_reserved_message,
  [sym_role] = sym_role,
  [sym__pass_statement] = sym__pass_statement,
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__thunk_reserved_word] = sym__thunk_reserved_word,
  [sym_assign_operator] = sym_assign_operator,
  [sym_type_name] = sym_type_name,
  [sym_text_line] = sym_text_line,
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
  [sym__itemwise_named_head] = {
    .visible = false,
    .named = true,
  },
  [sym__rank_named_head] = {
    .visible = false,
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
  [27] = {.index = 74, .length = 7},
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
    {field_value, 2},
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
  [17] = 14,
  [18] = 18,
  [19] = 18,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 43,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 64,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 47,
  [87] = 87,
  [88] = 43,
  [89] = 89,
  [90] = 63,
  [91] = 91,
  [92] = 65,
  [93] = 56,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 67,
  [103] = 100,
  [104] = 82,
  [105] = 105,
  [106] = 59,
  [107] = 61,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 101,
  [113] = 59,
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
  [125] = 99,
  [126] = 61,
  [127] = 105,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 81,
  [135] = 69,
  [136] = 136,
  [137] = 137,
  [138] = 70,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 94,
  [147] = 95,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 140,
  [155] = 141,
  [156] = 142,
  [157] = 81,
  [158] = 143,
  [159] = 144,
  [160] = 145,
  [161] = 148,
  [162] = 149,
  [163] = 151,
  [164] = 123,
  [165] = 128,
  [166] = 139,
  [167] = 109,
  [168] = 110,
  [169] = 150,
  [170] = 133,
  [171] = 137,
  [172] = 111,
  [173] = 69,
  [174] = 70,
  [175] = 115,
  [176] = 116,
  [177] = 117,
  [178] = 118,
  [179] = 119,
  [180] = 120,
  [181] = 121,
  [182] = 122,
  [183] = 108,
  [184] = 124,
  [185] = 129,
  [186] = 130,
  [187] = 94,
  [188] = 95,
  [189] = 131,
  [190] = 132,
  [191] = 114,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 194,
  [197] = 197,
  [198] = 40,
  [199] = 39,
  [200] = 200,
  [201] = 192,
  [202] = 41,
  [203] = 56,
  [204] = 95,
  [205] = 205,
  [206] = 94,
  [207] = 74,
  [208] = 94,
  [209] = 95,
  [210] = 210,
  [211] = 56,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 56,
  [220] = 80,
  [221] = 221,
  [222] = 87,
  [223] = 84,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 94,
  [230] = 72,
  [231] = 85,
  [232] = 232,
  [233] = 233,
  [234] = 76,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 94,
  [241] = 95,
  [242] = 242,
  [243] = 95,
  [244] = 94,
  [245] = 95,
  [246] = 246,
  [247] = 247,
  [248] = 105,
  [249] = 95,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 136,
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
  [275] = 94,
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
  [300] = 299,
  [301] = 301,
  [302] = 301,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 304,
  [311] = 311,
  [312] = 311,
  [313] = 308,
  [314] = 309,
  [315] = 307,
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
  [330] = 316,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 333,
  [337] = 335,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 325,
  [345] = 345,
  [346] = 323,
  [347] = 326,
  [348] = 328,
  [349] = 349,
  [350] = 350,
  [351] = 338,
  [352] = 349,
  [353] = 321,
  [354] = 322,
  [355] = 334,
  [356] = 339,
  [357] = 340,
  [358] = 350,
  [359] = 341,
  [360] = 345,
  [361] = 342,
  [362] = 343,
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
  [374] = 373,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 378,
  [384] = 384,
  [385] = 379,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 389,
  [391] = 391,
  [392] = 392,
  [393] = 388,
  [394] = 388,
  [395] = 387,
  [396] = 380,
  [397] = 381,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 94,
  [406] = 95,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 398,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 423,
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
  [441] = 377,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 424,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 377,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 425,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 437,
  [463] = 463,
  [464] = 464,
  [465] = 435,
  [466] = 466,
  [467] = 459,
  [468] = 427,
  [469] = 439,
  [470] = 429,
  [471] = 448,
  [472] = 456,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 423,
  [477] = 430,
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
  [488] = 473,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 434,
  [495] = 445,
  [496] = 496,
  [497] = 460,
  [498] = 453,
  [499] = 466,
  [500] = 500,
  [501] = 426,
  [502] = 502,
  [503] = 94,
  [504] = 504,
  [505] = 505,
  [506] = 94,
  [507] = 95,
  [508] = 508,
  [509] = 509,
  [510] = 95,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
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
  [528] = 521,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 509,
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
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 553,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 559,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 552,
  [567] = 553,
  [568] = 568,
  [569] = 569,
  [570] = 559,
  [571] = 552,
  [572] = 552,
  [573] = 552,
  [574] = 552,
  [575] = 552,
  [576] = 552,
  [577] = 577,
  [578] = 552,
  [579] = 552,
  [580] = 556,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 581,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 552,
  [597] = 591,
  [598] = 563,
  [599] = 588,
  [600] = 600,
  [601] = 600,
  [602] = 602,
  [603] = 555,
  [604] = 541,
  [605] = 552,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 1,
        '#', 271,
        '(', 365,
        ')', 366,
        '+', 48,
        ',', 367,
        '-', 49,
        ':', 364,
        '=', 288,
        '?', 362,
        'B', 383,
        'J', 385,
        'N', 388,
        'P', 369,
        'T', 373,
        '[', 51,
        'a', 204,
        'c', 114,
        'd', 84,
        'e', 52,
        'f', 146,
        'h', 57,
        'i', 164,
        'k', 96,
        'l', 119,
        'm', 174,
        'n', 182,
        'p', 53,
        'r', 59,
        's', 85,
        't', 55,
        'u', 160,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(390);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(267);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 629,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 653,
        'r', 655,
        's', 675,
        't', 741,
        'u', 721,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 631,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(459);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(463);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 632,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 758,
        'r', 655,
        's', 675,
        't', 741,
        'u', 721,
        '\t', 8,
        ' ', 8,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(786);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 634,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 720,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 789,
        ' ', 789,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 15,
        ' ', 15,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 720,
        '\t', 19,
        ' ', 19,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 720,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 720,
        '\t', 787,
        ' ', 787,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(268);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(266);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ')', 366,
        ',', 367,
        ':', 364,
        '[', 51,
        'l', 119,
        'p', 61,
        's', 107,
        't', 121,
        'u', 171,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        '+', 301,
        '-', 302,
        '=', 288,
        '\t', 291,
        '\f', 291,
        ' ', 291,
      );
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'd', 404,
        'n', 429,
        '\t', 292,
        '\f', 292,
        ' ', 292,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'l', 410,
        'p', 393,
        '\t', 293,
        '\f', 293,
        ' ', 293,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'p', 393,
        't', 427,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'p', 393,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        't', 427,
        '\t', 296,
        '\f', 296,
        ' ', 296,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'u', 305,
        '\t', 297,
        '\f', 297,
        ' ', 297,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 43:
      if (lookahead == '\f') SKIP(43);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\f', 649,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'k', 677,
        'r', 656,
        'u', 721,
        '\t', 44,
        ' ', 44,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 45:
      if (lookahead == '\f') SKIP(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(475);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(363);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(363);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(129);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(346);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(342);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 253:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(253);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 254:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(254);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 255:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(255);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead == 'f') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 256:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(256);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      END_STATE();
    case 257:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(257);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 258:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 259:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(260);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(261);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(468);
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') SKIP(262);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 1,
        '#', 22,
        'c', 114,
        'f', 145,
        'i', 164,
        'p', 198,
        's', 85,
        't', 54,
        'u', 220,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(390);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '\n', 267,
        '\r', 1,
        '#', 22,
        'c', 407,
        'f', 416,
        'i', 422,
        'p', 435,
        's', 398,
        't', 391,
        'u', 437,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        '+', 301,
        '-', 302,
        '=', 288,
        '\t', 291,
        '\f', 291,
        ' ', 291,
      );
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'd', 404,
        'n', 429,
        '\t', 292,
        '\f', 292,
        ' ', 292,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'l', 410,
        'p', 393,
        '\t', 293,
        '\f', 293,
        ' ', 293,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'p', 393,
        't', 427,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'p', 393,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        't', 427,
        '\t', 296,
        '\f', 296,
        ' ', 296,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 30,
        '#', 271,
        ':', 364,
        'u', 305,
        '\t', 297,
        '\f', 297,
        ' ', 297,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'c') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'c') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'c') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'c') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'h') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'h') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'k') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'k') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'p') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == 's') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'v') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'w') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'x') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 458,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 525,
        'f', 549,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 483,
        'r', 505,
        's', 506,
        't', 477,
        'u', 598,
        '\t', 458,
        ' ', 458,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 459,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 573,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 484,
        'r', 505,
        's', 517,
        't', 577,
        'u', 605,
        '\t', 459,
        ' ', 459,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 460,
        '\r', 1,
        '#', 470,
        'a', 603,
        'c', 525,
        'd', 568,
        'e', 480,
        'f', 548,
        'i', 564,
        'k', 515,
        'p', 586,
        'r', 481,
        's', 518,
        't', 478,
        'u', 560,
        '\t', 460,
        ' ', 460,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 461,
        '\r', 1,
        '#', 470,
        'c', 407,
        'f', 416,
        'i', 422,
        'p', 435,
        's', 398,
        't', 391,
        'u', 437,
        '\t', 461,
        ' ', 461,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 462,
        '\r', 1,
        '#', 470,
        'c', 525,
        'f', 549,
        'i', 564,
        'p', 586,
        's', 518,
        't', 478,
        'u', 606,
        '\t', 462,
        ' ', 462,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\f') ADVANCE(463);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 464,
        '\r', 1,
        '#', 470,
        'a', 603,
        'c', 525,
        'd', 568,
        'e', 480,
        'f', 548,
        'i', 564,
        'k', 515,
        'p', 586,
        'r', 481,
        's', 518,
        't', 478,
        'u', 563,
        '\t', 465,
        ' ', 465,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 464,
        '\r', 1,
        '#', 470,
        'a', 603,
        'c', 525,
        'd', 568,
        'e', 480,
        'f', 548,
        'i', 564,
        'k', 515,
        'p', 586,
        'r', 481,
        's', 518,
        't', 478,
        'u', 567,
        '\t', 465,
        ' ', 465,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 469,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 525,
        'f', 549,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 483,
        'r', 505,
        's', 506,
        't', 477,
        'u', 598,
        '\t', 785,
        ' ', 785,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 469,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 525,
        'f', 549,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 483,
        'r', 505,
        's', 506,
        't', 477,
        'u', 598,
        '\t', 466,
        ' ', 466,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 469,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 525,
        'f', 549,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 483,
        'r', 505,
        's', 506,
        't', 477,
        'u', 598,
        '\t', 467,
        ' ', 467,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 469,
        '\r', 1,
        '#', 470,
        'a', 601,
        'c', 525,
        'f', 549,
        'h', 476,
        'i', 564,
        'm', 569,
        'p', 483,
        'r', 505,
        's', 506,
        't', 477,
        'u', 598,
        '\t', 468,
        ' ', 468,
      );
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(474);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(617);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'k') ADVANCE(529);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'k') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'k') ADVANCE(537);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 629,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 653,
        'r', 655,
        's', 675,
        't', 741,
        'u', 723,
        '\t', 630,
        ' ', 630,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 629,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 653,
        'r', 655,
        's', 675,
        't', 741,
        'u', 730,
        '\t', 630,
        ' ', 630,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 631,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 631,
        ' ', 631,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 632,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 758,
        'r', 655,
        's', 675,
        't', 741,
        'u', 723,
        '\t', 633,
        ' ', 633,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 632,
        '\r', 1,
        '#', 644,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'h', 654,
        'k', 677,
        'm', 734,
        'p', 758,
        'r', 655,
        's', 675,
        't', 741,
        'u', 730,
        '\t', 633,
        ' ', 633,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 634,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 722,
        '\t', 635,
        ' ', 635,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 634,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 729,
        '\t', 635,
        ' ', 635,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 789,
        ' ', 789,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 636,
        ' ', 636,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 637,
        ' ', 637,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 639,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 731,
        '\t', 638,
        ' ', 638,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 722,
        '\t', 642,
        ' ', 642,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 729,
        '\t', 643,
        ' ', 643,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 729,
        '\t', 641,
        ' ', 641,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\n', 267,
        '\f', 640,
        '\r', 1,
        '#', 644,
        'a', 757,
        'c', 691,
        'd', 732,
        'e', 651,
        'f', 716,
        'i', 728,
        'k', 677,
        'p', 749,
        'r', 656,
        's', 683,
        't', 657,
        'u', 729,
        '\t', 787,
        ' ', 787,
      );
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead != 0) ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(648);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 649,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'k', 677,
        'r', 656,
        'u', 723,
        '\t', 650,
        ' ', 650,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      ADVANCE_MAP(
        '\f', 649,
        'a', 757,
        'd', 732,
        'e', 651,
        'f', 733,
        'k', 677,
        'r', 656,
        'u', 730,
        '\t', 650,
        ' ', 650,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == 'h') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead == 'p') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == 'k') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == 'k') ADVANCE(700);
      if (lookahead == 't') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(740);
      if (lookahead == 'o') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'h') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'i') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'm') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(684);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead == 's') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'u') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'v') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'x') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'y') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 785,
        '#', 792,
        'a', 880,
        'c', 829,
        'f', 844,
        'h', 793,
        'i', 854,
        'm', 858,
        'p', 800,
        'r', 813,
        's', 814,
        't', 796,
        'u', 877,
        '\t', 785,
        ' ', 785,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 788,
        '#', 792,
        'a', 876,
        'c', 829,
        'd', 857,
        'e', 799,
        'f', 843,
        'i', 854,
        'k', 821,
        'p', 872,
        'r', 794,
        's', 822,
        't', 797,
        'u', 851,
        '\t', 787,
        ' ', 787,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 788,
        '#', 792,
        'a', 876,
        'c', 829,
        'd', 857,
        'e', 799,
        'f', 843,
        'i', 854,
        'k', 821,
        'p', 872,
        'r', 794,
        's', 822,
        't', 797,
        'u', 853,
        '\t', 787,
        ' ', 787,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 790,
        '#', 792,
        'a', 876,
        'c', 829,
        'd', 857,
        'e', 799,
        'f', 843,
        'i', 854,
        'k', 821,
        'p', 872,
        'r', 794,
        's', 822,
        't', 797,
        'u', 851,
        '\t', 789,
        ' ', 789,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 790,
        '#', 792,
        'a', 876,
        'c', 829,
        'd', 857,
        'e', 799,
        'f', 843,
        'i', 854,
        'k', 821,
        'p', 872,
        'r', 794,
        's', 822,
        't', 797,
        'u', 856,
        '\t', 789,
        ' ', 789,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(850);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'h') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'h') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 'r') ADVANCE(860);
      if (lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == 'k') ADVANCE(832);
      if (lookahead == 't') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(874);
      if (lookahead == 'k') ADVANCE(838);
      if (lookahead == 't') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(859);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(825);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(827);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(826);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(896);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == 's') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(860);
      if (lookahead == 's') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(896);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
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
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 253},
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
  [42] = {.lex_state = 254},
  [43] = {.lex_state = 261},
  [44] = {.lex_state = 254},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 254},
  [47] = {.lex_state = 261},
  [48] = {.lex_state = 254},
  [49] = {.lex_state = 254},
  [50] = {.lex_state = 254},
  [51] = {.lex_state = 254},
  [52] = {.lex_state = 254},
  [53] = {.lex_state = 254},
  [54] = {.lex_state = 263},
  [55] = {.lex_state = 263},
  [56] = {.lex_state = 254},
  [57] = {.lex_state = 254},
  [58] = {.lex_state = 260},
  [59] = {.lex_state = 261},
  [60] = {.lex_state = 254},
  [61] = {.lex_state = 261},
  [62] = {.lex_state = 254},
  [63] = {.lex_state = 258},
  [64] = {.lex_state = 258},
  [65] = {.lex_state = 258},
  [66] = {.lex_state = 260},
  [67] = {.lex_state = 258},
  [68] = {.lex_state = 254},
  [69] = {.lex_state = 254},
  [70] = {.lex_state = 254},
  [71] = {.lex_state = 259},
  [72] = {.lex_state = 253},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 254},
  [75] = {.lex_state = 254},
  [76] = {.lex_state = 253},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 254},
  [80] = {.lex_state = 253},
  [81] = {.lex_state = 254},
  [82] = {.lex_state = 258},
  [83] = {.lex_state = 254},
  [84] = {.lex_state = 253},
  [85] = {.lex_state = 253},
  [86] = {.lex_state = 262},
  [87] = {.lex_state = 253},
  [88] = {.lex_state = 262},
  [89] = {.lex_state = 254},
  [90] = {.lex_state = 259},
  [91] = {.lex_state = 254},
  [92] = {.lex_state = 259},
  [93] = {.lex_state = 253},
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 254},
  [96] = {.lex_state = 254},
  [97] = {.lex_state = 254},
  [98] = {.lex_state = 254},
  [99] = {.lex_state = 258},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 258},
  [102] = {.lex_state = 259},
  [103] = {.lex_state = 253},
  [104] = {.lex_state = 259},
  [105] = {.lex_state = 258},
  [106] = {.lex_state = 260},
  [107] = {.lex_state = 260},
  [108] = {.lex_state = 253},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 253},
  [111] = {.lex_state = 253},
  [112] = {.lex_state = 259},
  [113] = {.lex_state = 262},
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
  [125] = {.lex_state = 259},
  [126] = {.lex_state = 262},
  [127] = {.lex_state = 259},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 253},
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
  [144] = {.lex_state = 253},
  [145] = {.lex_state = 253},
  [146] = {.lex_state = 253},
  [147] = {.lex_state = 253},
  [148] = {.lex_state = 253},
  [149] = {.lex_state = 253},
  [150] = {.lex_state = 253},
  [151] = {.lex_state = 253},
  [152] = {.lex_state = 253},
  [153] = {.lex_state = 257},
  [154] = {.lex_state = 257},
  [155] = {.lex_state = 257},
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
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 255},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 255},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 255},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 255},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 255},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 264},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 264},
  [213] = {.lex_state = 256},
  [214] = {.lex_state = 256},
  [215] = {.lex_state = 263},
  [216] = {.lex_state = 263},
  [217] = {.lex_state = 263},
  [218] = {.lex_state = 263},
  [219] = {.lex_state = 263},
  [220] = {.lex_state = 263},
  [221] = {.lex_state = 263},
  [222] = {.lex_state = 263},
  [223] = {.lex_state = 263},
  [224] = {.lex_state = 255},
  [225] = {.lex_state = 263},
  [226] = {.lex_state = 263},
  [227] = {.lex_state = 263},
  [228] = {.lex_state = 263},
  [229] = {.lex_state = 255},
  [230] = {.lex_state = 263},
  [231] = {.lex_state = 263},
  [232] = {.lex_state = 255},
  [233] = {.lex_state = 263},
  [234] = {.lex_state = 263},
  [235] = {.lex_state = 263},
  [236] = {.lex_state = 263},
  [237] = {.lex_state = 263},
  [238] = {.lex_state = 263},
  [239] = {.lex_state = 263},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 263},
  [243] = {.lex_state = 255},
  [244] = {.lex_state = 264},
  [245] = {.lex_state = 264},
  [246] = {.lex_state = 264},
  [247] = {.lex_state = 264},
  [248] = {.lex_state = 256},
  [249] = {.lex_state = 263},
  [250] = {.lex_state = 263},
  [251] = {.lex_state = 263},
  [252] = {.lex_state = 263},
  [253] = {.lex_state = 263},
  [254] = {.lex_state = 263},
  [255] = {.lex_state = 263},
  [256] = {.lex_state = 263},
  [257] = {.lex_state = 263},
  [258] = {.lex_state = 263},
  [259] = {.lex_state = 263},
  [260] = {.lex_state = 263},
  [261] = {.lex_state = 263},
  [262] = {.lex_state = 263},
  [263] = {.lex_state = 263},
  [264] = {.lex_state = 263},
  [265] = {.lex_state = 263},
  [266] = {.lex_state = 263},
  [267] = {.lex_state = 263},
  [268] = {.lex_state = 263},
  [269] = {.lex_state = 263},
  [270] = {.lex_state = 263},
  [271] = {.lex_state = 263},
  [272] = {.lex_state = 263},
  [273] = {.lex_state = 263},
  [274] = {.lex_state = 263},
  [275] = {.lex_state = 263},
  [276] = {.lex_state = 263},
  [277] = {.lex_state = 263},
  [278] = {.lex_state = 263},
  [279] = {.lex_state = 263},
  [280] = {.lex_state = 263},
  [281] = {.lex_state = 263},
  [282] = {.lex_state = 263},
  [283] = {.lex_state = 263},
  [284] = {.lex_state = 263},
  [285] = {.lex_state = 263},
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
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 34},
  [300] = {.lex_state = 34},
  [301] = {.lex_state = 35},
  [302] = {.lex_state = 35},
  [303] = {.lex_state = 31},
  [304] = {.lex_state = 41},
  [305] = {.lex_state = 31},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 37},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 41},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 41},
  [313] = {.lex_state = 37},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 20},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 41},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 41},
  [324] = {.lex_state = 41},
  [325] = {.lex_state = 41},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 41},
  [332] = {.lex_state = 41},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 38},
  [335] = {.lex_state = 41},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 41},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 41},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 37},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 41},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 41},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 41},
  [355] = {.lex_state = 38},
  [356] = {.lex_state = 41},
  [357] = {.lex_state = 41},
  [358] = {.lex_state = 41},
  [359] = {.lex_state = 41},
  [360] = {.lex_state = 41},
  [361] = {.lex_state = 41},
  [362] = {.lex_state = 37},
  [363] = {.lex_state = 33},
  [364] = {.lex_state = 31},
  [365] = {.lex_state = 31},
  [366] = {.lex_state = 31},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 31},
  [369] = {.lex_state = 32},
  [370] = {.lex_state = 31},
  [371] = {.lex_state = 31},
  [372] = {.lex_state = 31},
  [373] = {.lex_state = 31},
  [374] = {.lex_state = 31},
  [375] = {.lex_state = 20},
  [376] = {.lex_state = 20},
  [377] = {.lex_state = 32},
  [378] = {.lex_state = 47},
  [379] = {.lex_state = 39},
  [380] = {.lex_state = 39},
  [381] = {.lex_state = 39},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 47},
  [384] = {.lex_state = 41},
  [385] = {.lex_state = 39},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 42},
  [388] = {.lex_state = 12},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 46},
  [392] = {.lex_state = 46},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 12},
  [395] = {.lex_state = 42},
  [396] = {.lex_state = 39},
  [397] = {.lex_state = 39},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 31},
  [400] = {.lex_state = 31},
  [401] = {.lex_state = 31},
  [402] = {.lex_state = 31},
  [403] = {.lex_state = 31},
  [404] = {.lex_state = 39},
  [405] = {.lex_state = 20},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 31},
  [408] = {.lex_state = 20},
  [409] = {.lex_state = 40},
  [410] = {.lex_state = 31},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 31},
  [413] = {.lex_state = 31},
  [414] = {.lex_state = 31},
  [415] = {.lex_state = 40},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 31},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 31},
  [424] = {.lex_state = 31},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 31},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 31},
  [429] = {.lex_state = 47},
  [430] = {.lex_state = 31},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 31},
  [433] = {.lex_state = 31},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 31},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 31},
  [438] = {.lex_state = 31},
  [439] = {.lex_state = 31},
  [440] = {.lex_state = 31},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 31},
  [443] = {.lex_state = 31},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 31},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 47},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 31},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 31},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 31},
  [459] = {.lex_state = 31},
  [460] = {.lex_state = 31},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 31},
  [463] = {.lex_state = 31},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 31},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 31},
  [468] = {.lex_state = 31},
  [469] = {.lex_state = 31},
  [470] = {.lex_state = 31},
  [471] = {.lex_state = 31},
  [472] = {.lex_state = 31},
  [473] = {.lex_state = 31},
  [474] = {.lex_state = 31},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 31},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 31},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 31},
  [481] = {.lex_state = 31},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 31},
  [484] = {.lex_state = 263},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 31},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 31},
  [491] = {.lex_state = 31},
  [492] = {.lex_state = 31},
  [493] = {.lex_state = 251},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 31},
  [497] = {.lex_state = 31},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 31},
  [500] = {.lex_state = 251},
  [501] = {.lex_state = 31},
  [502] = {.lex_state = 45},
  [503] = {.lex_state = 6},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 31},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 12},
  [508] = {.lex_state = 31},
  [509] = {.lex_state = 251},
  [510] = {.lex_state = 6},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 31},
  [513] = {.lex_state = 31},
  [514] = {.lex_state = 31},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 31},
  [518] = {.lex_state = 31},
  [519] = {.lex_state = 252},
  [520] = {.lex_state = 252},
  [521] = {.lex_state = 45},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 31},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 252},
  [528] = {.lex_state = 45},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 252},
  [533] = {.lex_state = 252},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 251},
  [537] = {.lex_state = 252},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 31},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 251},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 31},
  [551] = {.lex_state = 31},
  [552] = {.lex_state = 31},
  [553] = {.lex_state = 31},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 31},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 31},
  [559] = {.lex_state = 31},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 31},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 31},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 31},
  [571] = {.lex_state = 31},
  [572] = {.lex_state = 31},
  [573] = {.lex_state = 31},
  [574] = {.lex_state = 31},
  [575] = {.lex_state = 31},
  [576] = {.lex_state = 31},
  [577] = {.lex_state = 251},
  [578] = {.lex_state = 31},
  [579] = {.lex_state = 31},
  [580] = {.lex_state = 31},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 31},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 31},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 31},
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
    [sym_source_file] = STATE(587),
    [sym_item] = STATE(55),
    [sym__trivia] = STATE(55),
    [sym_use] = STATE(285),
    [sym_struct] = STATE(285),
    [sym_psyche] = STATE(285),
    [sym_skill] = STATE(285),
    [sym_service] = STATE(285),
    [sym_prompt] = STATE(285),
    [sym_task] = STATE(285),
    [sym_chore] = STATE(285),
    [sym_instruct] = STATE(285),
    [sym_context] = STATE(285),
    [sym_thunk] = STATE(285),
    [sym_flow] = STATE(285),
    [aux_sym_source_file_repeat1] = STATE(55),
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(103), 1,
      sym_flow_body,
    STATE(184), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(17), 2,
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
    STATE(15), 13,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(103), 1,
      sym_flow_body,
    STATE(189), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(17), 2,
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
    STATE(15), 13,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(100), 1,
      sym_flow_body,
    STATE(124), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(17), 2,
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
    STATE(15), 13,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(100), 1,
      sym_flow_body,
    STATE(131), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(17), 2,
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
    STATE(15), 13,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(265), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(276), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(277), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(279), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(257), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(269), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(280), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
    STATE(196), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(284), 1,
      sym_flow_body,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(230), 2,
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
  [1104] = 21,
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
    STATE(192), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(389), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(203), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(220), 2,
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
  [1192] = 16,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(390), 1,
      sym__flow_reserved_word,
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
    STATE(18), 15,
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
  [1270] = 16,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(390), 1,
      sym__flow_reserved_word,
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
  [1348] = 21,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(201), 1,
      sym__directives,
    STATE(202), 1,
      sym_directive,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(398), 1,
      sym_directive_key,
    STATE(80), 2,
      sym_statements,
      sym__pass_statement,
    STATE(203), 2,
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
    STATE(15), 13,
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
  [1436] = 16,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(390), 1,
      sym__flow_reserved_word,
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
  [1514] = 16,
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
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(389), 1,
      sym__flow_reserved_word,
    ACTIONS(134), 4,
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
  [1591] = 16,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_flow_do_keyword,
    ACTIONS(142), 1,
      sym_flow_ask_keyword,
    ACTIONS(145), 1,
      sym_flow_unfold_keyword,
    ACTIONS(148), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(154), 1,
      sym_flow_rank_keyword,
    ACTIONS(157), 1,
      sym_flow_each_keyword,
    ACTIONS(160), 1,
      sym_flow_fold_keyword,
    ACTIONS(163), 1,
      sym_flow_repeat_keyword,
    ACTIONS(166), 1,
      sym__implicit_do_raw_text,
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(389), 1,
      sym__flow_reserved_word,
    ACTIONS(136), 4,
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
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__implicit_do_text_body_line,
    STATE(389), 1,
      sym__flow_reserved_word,
    ACTIONS(169), 4,
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
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(215), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(225), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(384), 2,
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
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(218), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(384), 2,
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
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_message,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(238), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(237), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(384), 2,
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
  [1978] = 14,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    STATE(29), 1,
      sym_message,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(215), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(225), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(384), 2,
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
  [2047] = 14,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_message,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(218), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(384), 2,
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
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_indented_raw_text,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(384), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(209), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(214), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(27), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
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
    ACTIONS(212), 10,
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
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(384), 2,
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
    ACTIONS(222), 4,
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
    ACTIONS(224), 10,
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
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(384), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(264), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(271), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(272), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(263), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(266), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(283), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(282), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(22), 1,
      sym__directives,
    STATE(25), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(253), 1,
      sym_thunk_body,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(239), 2,
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
    STATE(23), 1,
      sym__directives,
    STATE(26), 1,
      sym_settings,
    STATE(29), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruct_setting,
    STATE(46), 1,
      sym_context_setting,
    STATE(52), 1,
      sym__unroled_message_initial_line,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(68), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(422), 1,
      sym_directive_key,
    STATE(39), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(242), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(245), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(248), 17,
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
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    STATE(422), 1,
      sym_directive_key,
    STATE(39), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(252), 4,
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
    ACTIONS(254), 17,
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
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(422), 1,
      sym_directive_key,
    STATE(40), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(258), 4,
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
    ACTIONS(268), 1,
      sym_context_keyword,
    STATE(49), 1,
      sym_context_setting,
    STATE(45), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(264), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(266), 24,
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
  [3203] = 6,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      sym_blank_line,
    ACTIONS(277), 1,
      sym__nested_indented_raw_text,
    STATE(43), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(59), 1,
      sym__nested_text_body_line,
    ACTIONS(275), 28,
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
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym_instruct_keyword,
    STATE(57), 1,
      sym_instruct_setting,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(284), 24,
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
  [3295] = 6,
    ACTIONS(268), 1,
      sym_context_keyword,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_context_setting,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(284), 24,
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
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym_instruct_keyword,
    STATE(49), 1,
      sym_instruct_setting,
    STATE(44), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(288), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(266), 24,
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
  [3387] = 6,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      sym_blank_line,
    ACTIONS(296), 1,
      sym__nested_indented_raw_text,
    STATE(43), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(59), 1,
      sym__nested_text_body_line,
    ACTIONS(294), 28,
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
  [3433] = 4,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(300), 25,
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
  [3474] = 4,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(302), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(284), 25,
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
  [3515] = 6,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      sym_blank_line,
    ACTIONS(310), 1,
      sym_indented_raw_text,
    STATE(53), 1,
      aux_sym_unroled_message_repeat1,
    STATE(73), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(308), 27,
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
  [3560] = 4,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(314), 25,
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
  [3601] = 6,
    ACTIONS(310), 1,
      sym_indented_raw_text,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_blank_line,
    STATE(50), 1,
      aux_sym_unroled_message_repeat1,
    STATE(73), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(320), 27,
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
  [3646] = 6,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym_indented_raw_text,
    STATE(53), 1,
      aux_sym_unroled_message_repeat1,
    STATE(73), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(327), 27,
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
  [3691] = 17,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      sym_use_keyword,
    ACTIONS(343), 1,
      sym_struct_keyword,
    ACTIONS(346), 1,
      sym_psyche_keyword,
    ACTIONS(349), 1,
      sym_skill_keyword,
    ACTIONS(352), 1,
      sym_service_keyword,
    ACTIONS(355), 1,
      sym_prompt_keyword,
    ACTIONS(358), 1,
      sym_context_keyword,
    ACTIONS(361), 1,
      sym_instruct_keyword,
    ACTIONS(364), 1,
      sym_thunk_keyword,
    ACTIONS(367), 1,
      sym_task_keyword,
    ACTIONS(370), 1,
      sym_chore_keyword,
    ACTIONS(373), 1,
      sym_flow_keyword,
    ACTIONS(334), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(337), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(54), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(285), 12,
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
  [3758] = 17,
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
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(380), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(54), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(285), 12,
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
  [3825] = 4,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(384), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(387), 25,
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
  [3866] = 4,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(389), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(300), 25,
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
  [3907] = 6,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 1,
      sym_blank_line,
    ACTIONS(394), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(106), 1,
      sym__nested_text_body_line,
    ACTIONS(275), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [3951] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 30,
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
  [3987] = 4,
    ACTIONS(310), 1,
      sym_indented_raw_text,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(403), 28,
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
  [4027] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 30,
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
  [4063] = 4,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym_indented_raw_text,
    STATE(79), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(308), 28,
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
  [4103] = 5,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 1,
      sym_blank_line,
    ACTIONS(415), 1,
      sym_indented_raw_text,
    STATE(64), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(413), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4145] = 5,
    ACTIONS(415), 1,
      sym_indented_raw_text,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      sym_blank_line,
    STATE(65), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(421), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4187] = 5,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 1,
      sym_blank_line,
    ACTIONS(430), 1,
      sym_indented_raw_text,
    STATE(65), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(428), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4229] = 6,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(435), 1,
      sym__nested_indented_raw_text,
    STATE(58), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(106), 1,
      sym__nested_text_body_line,
    ACTIONS(294), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4273] = 4,
    ACTIONS(415), 1,
      sym_indented_raw_text,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_text_body_line,
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
      sym_flow_until_keyword,
      sym__implicit_do_raw_text,
  [4312] = 2,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 29,
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
  [4347] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 29,
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
  [4382] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 29,
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
  [4417] = 5,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 1,
      sym_blank_line,
    ACTIONS(451), 1,
      sym_indented_raw_text,
    STATE(92), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(421), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4458] = 4,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(455), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(457), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4497] = 2,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    ACTIONS(461), 29,
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
  [4532] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 29,
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
  [4567] = 2,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 29,
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
  [4602] = 4,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(473), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(475), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4641] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 29,
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
  [4676] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 29,
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
  [4711] = 2,
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
  [4746] = 4,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(489), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(475), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4785] = 2,
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
  [4820] = 4,
    ACTIONS(415), 1,
      sym_indented_raw_text,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
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
  [4859] = 2,
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
  [4894] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(473), 4,
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
  [4933] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(87), 2,
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
  [4972] = 6,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__nested_indented_raw_text,
    STATE(88), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(113), 1,
      sym__nested_text_body_line,
    ACTIONS(294), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5015] = 4,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(473), 4,
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
  [5054] = 6,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 1,
      sym_blank_line,
    ACTIONS(520), 1,
      sym__nested_indented_raw_text,
    STATE(88), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(113), 1,
      sym__nested_text_body_line,
    ACTIONS(275), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5097] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 29,
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
  [5132] = 5,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 1,
      sym_indented_raw_text,
    ACTIONS(527), 1,
      sym_blank_line,
    STATE(71), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(413), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5173] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 29,
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
  [5208] = 5,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 1,
      sym_blank_line,
    ACTIONS(532), 1,
      sym_indented_raw_text,
    STATE(92), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(428), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5249] = 4,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(535), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(387), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5288] = 2,
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
  [5323] = 2,
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
  [5358] = 2,
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
  [5393] = 2,
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
  [5428] = 2,
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
  [5463] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5497] = 4,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      sym_flow_until_keyword,
    STATE(130), 1,
      sym_until_statement,
    ACTIONS(560), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5535] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5569] = 4,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 1,
      sym_indented_raw_text,
    STATE(112), 1,
      sym_text_body_line,
    ACTIONS(421), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5607] = 4,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 1,
      sym_flow_until_keyword,
    STATE(186), 1,
      sym_until_statement,
    ACTIONS(560), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5645] = 4,
    ACTIONS(451), 1,
      sym_indented_raw_text,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
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
  [5683] = 2,
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
  [5717] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5751] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5785] = 2,
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
  [5818] = 2,
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
  [5851] = 2,
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
  [5884] = 2,
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
  [5917] = 2,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5950] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5983] = 2,
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
  [6016] = 2,
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
  [6049] = 2,
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
  [6082] = 2,
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
  [6115] = 2,
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
  [6148] = 2,
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
  [6181] = 2,
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
  [6214] = 2,
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
  [6247] = 2,
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
  [6280] = 2,
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
  [6313] = 2,
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
  [6346] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [6379] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [6412] = 2,
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
  [6445] = 2,
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
  [6478] = 2,
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
  [6511] = 2,
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
  [6544] = 2,
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
  [6577] = 2,
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
  [6610] = 2,
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
  [6643] = 2,
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
  [6676] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [6709] = 2,
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
  [6742] = 2,
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
  [6775] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [6808] = 2,
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
  [6841] = 2,
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
  [6874] = 2,
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
  [6907] = 2,
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
  [6940] = 2,
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
  [6973] = 2,
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
  [7006] = 2,
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
  [7039] = 2,
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
  [7072] = 2,
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
  [7105] = 2,
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
  [7138] = 2,
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
  [7171] = 2,
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
  [7204] = 2,
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
  [7237] = 2,
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
  [7270] = 2,
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
  [7302] = 2,
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
  [7334] = 2,
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
  [7366] = 2,
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
  [7398] = 2,
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
  [7430] = 2,
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
  [7462] = 2,
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
  [7494] = 2,
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
  [7526] = 2,
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
  [7558] = 2,
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
  [7590] = 2,
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
  [7622] = 2,
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
  [7654] = 2,
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
  [7686] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7718] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7750] = 2,
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
  [7782] = 2,
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
  [7814] = 2,
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
  [7846] = 2,
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
  [7878] = 2,
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
  [7910] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7942] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7974] = 2,
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
  [8006] = 2,
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
  [8038] = 2,
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
  [8070] = 2,
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
  [8102] = 2,
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
  [8134] = 2,
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
  [8166] = 2,
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
  [8198] = 2,
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
  [8230] = 2,
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
  [8262] = 2,
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
  [8294] = 2,
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
  [8326] = 2,
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
  [8358] = 2,
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
  [8390] = 2,
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
  [8422] = 2,
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
  [8454] = 2,
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
  [8486] = 2,
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
  [8518] = 14,
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
    STATE(231), 1,
      sym_statements,
    STATE(389), 1,
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
  [8573] = 10,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    STATE(228), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(686), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(195), 3,
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
  [8620] = 14,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(80), 1,
      sym_statements,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(15), 13,
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
  [8675] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(696), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(205), 3,
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
  [8722] = 14,
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
    STATE(220), 1,
      sym_statements,
    STATE(389), 1,
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
  [8777] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(702), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(200), 3,
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
  [8824] = 5,
    STATE(398), 1,
      sym_directive_key,
    STATE(199), 3,
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
    ACTIONS(254), 10,
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
  [8861] = 5,
    STATE(398), 1,
      sym_directive_key,
    STATE(199), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(708), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(245), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(248), 10,
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
  [8898] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(696), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(205), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(713), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8945] = 14,
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
    STATE(63), 1,
      sym__implicit_do_text_body_line,
    STATE(85), 1,
      sym_statements,
    STATE(390), 1,
      sym__flow_reserved_word,
    STATE(15), 13,
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
  [9000] = 5,
    STATE(398), 1,
      sym_directive_key,
    STATE(198), 3,
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
  [9037] = 3,
    STATE(203), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(717), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(387), 19,
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
  [9069] = 1,
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
  [9095] = 6,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      sym_snake_name,
    STATE(535), 1,
      sym_property_key,
    STATE(205), 3,
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
  [9131] = 1,
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
  [9157] = 1,
    ACTIONS(465), 22,
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
  [9182] = 1,
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
  [9207] = 1,
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
  [9232] = 7,
    ACTIONS(732), 1,
      sym_blank_line,
    ACTIONS(740), 1,
      sym_snake_name,
    STATE(524), 1,
      sym_field_name,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(735), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(210), 2,
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
  [9268] = 3,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(743), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(387), 15,
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
  [9296] = 7,
    ACTIONS(748), 1,
      sym_blank_line,
    ACTIONS(754), 1,
      sym_snake_name,
    STATE(524), 1,
      sym_field_name,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(750), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(210), 2,
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
  [9332] = 5,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      sym_blank_line,
    ACTIONS(763), 1,
      sym_indented_raw_text,
    STATE(213), 2,
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
  [9363] = 5,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_blank_line,
    STATE(213), 2,
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
  [9394] = 4,
    ACTIONS(191), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(221), 2,
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
  [9422] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(774), 13,
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
  [9450] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(780), 13,
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
  [9478] = 4,
    ACTIONS(197), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(782), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(237), 2,
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
  [9506] = 4,
    ACTIONS(784), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(787), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(382), 13,
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
  [9534] = 4,
    ACTIONS(790), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(792), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(223), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(471), 13,
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
  [9562] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9590] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9618] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9646] = 2,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    ACTIONS(796), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9670] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9698] = 4,
    ACTIONS(798), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(800), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(242), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(780), 13,
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
  [9726] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(802), 13,
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
    ACTIONS(804), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(806), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(217), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(694), 13,
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
  [9782] = 2,
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
  [9806] = 4,
    ACTIONS(808), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(810), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(453), 13,
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
  [9834] = 4,
    ACTIONS(812), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(814), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(222), 2,
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
  [9862] = 3,
    ACTIONS(816), 1,
      ts_builtin_sym_end,
    ACTIONS(822), 1,
      sym_snake_name,
    ACTIONS(819), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9888] = 4,
    ACTIONS(824), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(826), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(235), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(711), 13,
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
  [9916] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(471), 13,
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
  [9944] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(828), 13,
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
  [9972] = 4,
    ACTIONS(830), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(832), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(828), 13,
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
  [10000] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(834), 13,
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
  [10028] = 4,
    ACTIONS(836), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(838), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(227), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(834), 13,
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
  [10056] = 4,
    ACTIONS(173), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(840), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(225), 2,
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
  [10084] = 1,
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
  [10106] = 1,
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
  [10128] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(842), 13,
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
  [10156] = 2,
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
  [10180] = 2,
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
  [10203] = 2,
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
  [10226] = 2,
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
  [10249] = 2,
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
  [10272] = 2,
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
  [10295] = 2,
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
  [10317] = 2,
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
  [10339] = 2,
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
  [10361] = 2,
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
  [10383] = 2,
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
  [10405] = 2,
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
  [10427] = 2,
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
  [10449] = 2,
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
  [10471] = 2,
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
  [10493] = 2,
    ACTIONS(648), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(646), 15,
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
  [10515] = 2,
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
  [10537] = 2,
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
  [10559] = 2,
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
  [10581] = 2,
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
  [10603] = 2,
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
  [10625] = 2,
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
  [10647] = 2,
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
  [10669] = 2,
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
  [10691] = 2,
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
  [10713] = 2,
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
  [10735] = 2,
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
  [10757] = 2,
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
  [10779] = 2,
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
  [10801] = 2,
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
  [10823] = 2,
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
  [10845] = 2,
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
  [10911] = 2,
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
  [10933] = 2,
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
  [10955] = 2,
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
  [10977] = 2,
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
  [10999] = 2,
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
  [11021] = 2,
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
  [11043] = 2,
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
  [11065] = 2,
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
  [11087] = 2,
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
  [11109] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(585), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11134] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(594), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11159] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(582), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11184] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(545), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11209] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(548), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11234] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(557), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11259] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(540), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11284] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(547), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11309] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(526), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11334] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(447), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11359] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(534), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11384] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(549), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11409] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(305), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(482), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11434] = 10,
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
    STATE(370), 1,
      sym_callee,
    STATE(383), 1,
      sym_limit_clause,
    STATE(434), 1,
      sym_par_clause,
    STATE(439), 1,
      sym__rank_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11467] = 10,
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
    STATE(370), 1,
      sym_callee,
    STATE(378), 1,
      sym_limit_clause,
    STATE(469), 1,
      sym__rank_named_head,
    STATE(494), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11500] = 9,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1008), 1,
      sym_colon,
    STATE(379), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(471), 1,
      sym__itemwise_named_head,
    STATE(495), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11530] = 9,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1010), 1,
      sym_colon,
    STATE(385), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(445), 1,
      sym_to_clause,
    STATE(448), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11560] = 4,
    ACTIONS(1014), 1,
      sym_array_suffix,
    STATE(303), 1,
      aux_sym_type_repeat1,
    STATE(368), 1,
      sym_type_suffix,
    ACTIONS(1012), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11578] = 8,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(183), 1,
      sym_condition,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(182), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11604] = 4,
    ACTIONS(1025), 1,
      sym_array_suffix,
    STATE(306), 1,
      aux_sym_type_repeat1,
    STATE(368), 1,
      sym_type_suffix,
    ACTIONS(1023), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11622] = 4,
    ACTIONS(1025), 1,
      sym_array_suffix,
    STATE(303), 1,
      aux_sym_type_repeat1,
    STATE(368), 1,
      sym_type_suffix,
    ACTIONS(1027), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11640] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1029), 1,
      sym_colon,
    STATE(381), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(427), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11664] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1031), 1,
      sym_colon,
    STATE(400), 1,
      sym_callee,
    STATE(437), 1,
      sym_callees,
    STATE(581), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11688] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1033), 1,
      sym_colon,
    STATE(380), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(459), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11712] = 8,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(108), 1,
      sym_condition,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(122), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11738] = 8,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(190), 1,
      sym_condition,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(182), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11764] = 8,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(132), 1,
      sym_condition,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(122), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11790] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1035), 1,
      sym_colon,
    STATE(400), 1,
      sym_callee,
    STATE(462), 1,
      sym_callees,
    STATE(589), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11814] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1037), 1,
      sym_colon,
    STATE(396), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(467), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11838] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1039), 1,
      sym_colon,
    STATE(397), 1,
      sym_par_clause,
    STATE(414), 1,
      sym_callee,
    STATE(468), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11862] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1041), 1,
      sym_colon,
    STATE(465), 1,
      sym_callee,
    STATE(541), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11883] = 8,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1043), 1,
      sym_newline,
    ACTIONS(1045), 1,
      sym_inline_comment,
    STATE(261), 1,
      sym_context_body,
    STATE(268), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(485), 1,
      sym_text_line,
  [11908] = 6,
    ACTIONS(1049), 1,
      sym_comment_line,
    ACTIONS(1051), 1,
      sym_snake_name,
    STATE(250), 1,
      sym_struct_body,
    STATE(524), 1,
      sym_field_name,
    ACTIONS(1047), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(212), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11929] = 8,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1043), 1,
      sym_newline,
    ACTIONS(1045), 1,
      sym_inline_comment,
    STATE(270), 1,
      sym_text_block,
    STATE(273), 1,
      sym_instruct_body,
    STATE(274), 1,
      sym_text_inline,
    STATE(382), 1,
      sym_line_end,
    STATE(485), 1,
      sym_text_line,
  [11954] = 8,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1043), 1,
      sym_newline,
    ACTIONS(1045), 1,
      sym_inline_comment,
    STATE(262), 1,
      sym_instruct_body,
    STATE(270), 1,
      sym_text_block,
    STATE(274), 1,
      sym_text_inline,
    STATE(382), 1,
      sym_line_end,
    STATE(485), 1,
      sym_text_line,
  [11979] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(153), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12002] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(185), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12025] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(177), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12048] = 8,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1043), 1,
      sym_newline,
    ACTIONS(1045), 1,
      sym_inline_comment,
    STATE(267), 1,
      sym_context_body,
    STATE(268), 1,
      sym_text_inline,
    STATE(270), 1,
      sym_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(485), 1,
      sym_text_line,
  [12073] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(175), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12096] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(178), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12119] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(81), 1,
      sym__nested_text_block,
    STATE(388), 1,
      sym_line_end,
    STATE(428), 1,
      sym_text_line,
    STATE(77), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12142] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(179), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12165] = 4,
    ACTIONS(1057), 1,
      sym_colon,
    STATE(452), 1,
      sym_text_ref,
    ACTIONS(1053), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12182] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1059), 1,
      sym_colon,
    STATE(435), 1,
      sym_callee,
    STATE(604), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12203] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(81), 1,
      sym__nested_text_block,
    STATE(388), 1,
      sym_line_end,
    STATE(428), 1,
      sym_text_line,
    STATE(96), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12226] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(81), 1,
      sym__nested_text_block,
    STATE(388), 1,
      sym_line_end,
    STATE(428), 1,
      sym_text_line,
    STATE(78), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12249] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(154), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12272] = 6,
    ACTIONS(1061), 1,
      sym_integer_literal,
    ACTIONS(1063), 1,
      sym_flow_until_keyword,
    ACTIONS(1065), 1,
      sym_colon,
    STATE(150), 1,
      sym_until_clause,
    STATE(374), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12293] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(158), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12316] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(140), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12339] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(143), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12362] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(145), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12385] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(149), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12408] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(123), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12431] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(139), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12454] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(110), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12477] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(456), 1,
      sym_callee,
    STATE(591), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12498] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(115), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12521] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(116), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12544] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(117), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12567] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(118), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12590] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(119), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12613] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(120), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12636] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(121), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12659] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(160), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12682] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(180), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12705] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(152), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12728] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(134), 1,
      sym__nested_text_block,
    STATE(394), 1,
      sym_line_end,
    STATE(423), 1,
      sym_text_line,
    STATE(129), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12751] = 6,
    ACTIONS(1061), 1,
      sym_integer_literal,
    ACTIONS(1069), 1,
      sym_flow_until_keyword,
    ACTIONS(1071), 1,
      sym_colon,
    STATE(169), 1,
      sym_until_clause,
    STATE(373), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12772] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(162), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12795] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(164), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12818] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(181), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12841] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(166), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12864] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(176), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12887] = 7,
    ACTIONS(1017), 1,
      sym_newline,
    ACTIONS(1019), 1,
      sym_inline_comment,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    STATE(157), 1,
      sym__nested_text_block,
    STATE(393), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
    STATE(168), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12910] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1073), 1,
      sym_colon,
    STATE(472), 1,
      sym_callee,
    STATE(597), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12931] = 4,
    ACTIONS(1075), 1,
      sym_colon,
    STATE(449), 1,
      sym_text_ref,
    ACTIONS(1053), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12948] = 1,
    ACTIONS(1077), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12958] = 1,
    ACTIONS(1079), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12968] = 1,
    ACTIONS(1081), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12978] = 1,
    ACTIONS(1083), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12988] = 1,
    ACTIONS(1085), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12998] = 3,
    STATE(509), 1,
      sym_directive_op,
    ACTIONS(1053), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1087), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13012] = 6,
    ACTIONS(1091), 1,
      sym_integer_literal,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    ACTIONS(1095), 1,
      sym_flow_limit_keyword,
    STATE(407), 1,
      sym_limit_clause,
    STATE(505), 1,
      sym_par_clause,
    ACTIONS(1089), 2,
      sym_newline,
      sym_inline_comment,
  [13032] = 1,
    ACTIONS(1097), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13042] = 1,
    ACTIONS(1099), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [13051] = 5,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      sym_flow_until_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(170), 2,
      sym_line_end,
      sym_until_clause,
  [13068] = 5,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    ACTIONS(1113), 1,
      sym_flow_until_keyword,
    ACTIONS(1115), 1,
      sym_colon,
    STATE(133), 2,
      sym_line_end,
      sym_until_clause,
  [13085] = 6,
    ACTIONS(1117), 1,
      sym_arrow,
    ACTIONS(1119), 1,
      sym_colon,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1123), 1,
      sym_snake_name,
    STATE(411), 1,
      sym_thunk_name,
    STATE(515), 1,
      sym_params,
  [13104] = 6,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1125), 1,
      sym_arrow,
    ACTIONS(1127), 1,
      sym_colon,
    ACTIONS(1129), 1,
      sym_snake_name,
    STATE(416), 1,
      sym_flow_name,
    STATE(522), 1,
      sym_params,
  [13123] = 1,
    ACTIONS(1131), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [13132] = 5,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1133), 1,
      sym_colon,
    STATE(498), 1,
      sym_par_clause,
    STATE(505), 1,
      sym_callee,
  [13148] = 4,
    ACTIONS(1137), 1,
      sym_colon,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13162] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1141), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13176] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1143), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13190] = 4,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(1145), 1,
      sym_blank_line,
    STATE(259), 1,
      sym_text_body,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [13204] = 5,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1147), 1,
      sym_colon,
    STATE(453), 1,
      sym_par_clause,
    STATE(505), 1,
      sym_callee,
  [13220] = 5,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1151), 1,
      sym_inline_comment,
    STATE(98), 1,
      sym_line_end,
    STATE(481), 1,
      sym_text_line,
  [13236] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1153), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13250] = 2,
    ACTIONS(1157), 1,
      sym_flow_times_keyword,
    ACTIONS(1155), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13260] = 3,
    ACTIONS(1159), 1,
      sym_snake_name,
    STATE(426), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13272] = 5,
    ACTIONS(1161), 1,
      sym_blank_line,
    ACTIONS(1163), 1,
      sym__nested_indented_raw_text,
    STATE(47), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(59), 1,
      sym__nested_text_body_line,
    STATE(69), 1,
      sym__nested_text_body,
  [13288] = 5,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1165), 1,
      sym_newline,
    ACTIONS(1167), 1,
      sym_inline_comment,
    STATE(171), 1,
      sym_line_end,
    STATE(488), 1,
      sym_text_line,
  [13304] = 5,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1169), 1,
      sym_newline,
    ACTIONS(1171), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
    STATE(473), 1,
      sym_text_line,
  [13320] = 3,
    ACTIONS(1173), 1,
      sym_colon,
    STATE(452), 1,
      sym_text_ref,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13332] = 3,
    ACTIONS(1175), 1,
      sym_colon,
    STATE(449), 1,
      sym_text_ref,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13344] = 5,
    ACTIONS(1177), 1,
      sym_blank_line,
    ACTIONS(1179), 1,
      sym__nested_indented_raw_text,
    STATE(86), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(113), 1,
      sym__nested_text_body_line,
    STATE(173), 1,
      sym__nested_text_body,
  [13360] = 5,
    ACTIONS(1181), 1,
      sym_blank_line,
    ACTIONS(1183), 1,
      sym__nested_indented_raw_text,
    STATE(66), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(106), 1,
      sym__nested_text_body_line,
    STATE(135), 1,
      sym__nested_text_body,
  [13376] = 3,
    ACTIONS(1159), 1,
      sym_snake_name,
    STATE(501), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13388] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1185), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13402] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1187), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13416] = 2,
    STATE(536), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13425] = 3,
    ACTIONS(1193), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1191), 2,
      sym_newline,
      sym_inline_comment,
  [13436] = 3,
    ACTIONS(1198), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1196), 2,
      sym_newline,
      sym_inline_comment,
  [13447] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
    STATE(278), 1,
      sym_job_body,
  [13460] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
    STATE(281), 1,
      sym_job_body,
  [13473] = 3,
    ACTIONS(1198), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1204), 2,
      sym_newline,
      sym_inline_comment,
  [13484] = 1,
    ACTIONS(1206), 4,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_snake_name,
  [13491] = 2,
    ACTIONS(540), 1,
      sym_comment_line,
    ACTIONS(538), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13500] = 2,
    ACTIONS(544), 1,
      sym_comment_line,
    ACTIONS(542), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13509] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    STATE(514), 1,
      sym_par_clause,
    ACTIONS(1208), 2,
      sym_newline,
      sym_inline_comment,
  [13520] = 4,
    ACTIONS(1210), 1,
      sym_rparen,
    ACTIONS(1212), 1,
      sym_snake_name,
    STATE(421), 1,
      sym_param_name,
    STATE(431), 1,
      sym_param,
  [13533] = 2,
    ACTIONS(1214), 1,
      sym_colon,
    ACTIONS(1053), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13542] = 1,
    ACTIONS(1216), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13549] = 4,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1218), 1,
      sym_arrow,
    ACTIONS(1220), 1,
      sym_colon,
    STATE(516), 1,
      sym_params,
  [13562] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(256), 1,
      sym_cap_body,
  [13575] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(252), 1,
      sym_cap_body,
  [13588] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    STATE(539), 1,
      sym_par_clause,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13599] = 1,
    ACTIONS(1222), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [13606] = 4,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1224), 1,
      sym_arrow,
    ACTIONS(1226), 1,
      sym_colon,
    STATE(538), 1,
      sym_params,
  [13619] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(254), 1,
      sym_cap_body,
  [13632] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(255), 1,
      sym_cap_body,
  [13645] = 4,
    ACTIONS(1053), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1228), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [13658] = 1,
    ACTIONS(1232), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13665] = 3,
    ACTIONS(1234), 1,
      sym_optional_marker,
    ACTIONS(1236), 1,
      sym_colon,
    ACTIONS(1238), 2,
      sym_rparen,
      sym_comma,
  [13676] = 2,
    STATE(509), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13685] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(138), 1,
      sym_line_end,
  [13695] = 1,
    ACTIONS(1240), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [13701] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [13711] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
  [13721] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(163), 1,
      sym_line_end,
  [13731] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_line_end,
  [13741] = 2,
    ACTIONS(1252), 1,
      sym_colon,
    ACTIONS(1250), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13749] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(74), 1,
      sym_line_end,
  [13759] = 3,
    ACTIONS(1254), 1,
      sym_rparen,
    ACTIONS(1256), 1,
      sym_comma,
    STATE(464), 1,
      aux_sym_params_repeat1,
  [13769] = 1,
    ACTIONS(1191), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13775] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [13785] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1147), 1,
      sym_colon,
    STATE(505), 1,
      sym_callee,
  [13795] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(159), 1,
      sym_line_end,
  [13805] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
  [13815] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(155), 1,
      sym_line_end,
  [13825] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(35), 1,
      sym_line_end,
  [13835] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(165), 1,
      sym_line_end,
  [13845] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13855] = 1,
    ACTIONS(1131), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13861] = 3,
    ACTIONS(1266), 1,
      sym_newline,
    ACTIONS(1268), 1,
      sym_inline_comment,
    STATE(318), 1,
      sym_line_end,
  [13871] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13881] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13891] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    ACTIONS(1153), 1,
      sym_colon,
    STATE(600), 1,
      sym_par_clause,
  [13901] = 3,
    ACTIONS(1270), 1,
      sym_colon,
    ACTIONS(1272), 1,
      sym_snake_name,
    STATE(592), 1,
      sym_context_name,
  [13911] = 3,
    ACTIONS(1274), 1,
      sym_newline,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(247), 1,
      sym_line_end,
  [13921] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(167), 1,
      sym_line_end,
  [13931] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
  [13941] = 2,
    ACTIONS(1240), 1,
      sym_colon,
    ACTIONS(1278), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13949] = 3,
    ACTIONS(1280), 1,
      sym_colon,
    ACTIONS(1282), 1,
      sym_snake_name,
    STATE(590), 1,
      sym_instruct_name,
  [13959] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [13969] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1284), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [13979] = 1,
    ACTIONS(1286), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13985] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
  [13995] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(191), 1,
      sym_line_end,
  [14005] = 1,
    ACTIONS(1288), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14011] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
  [14021] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(161), 1,
      sym_line_end,
  [14031] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [14041] = 3,
    ACTIONS(1212), 1,
      sym_snake_name,
    STATE(421), 1,
      sym_param_name,
    STATE(529), 1,
      sym_param,
  [14051] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [14061] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(251), 1,
      sym_line_end,
  [14071] = 3,
    ACTIONS(1256), 1,
      sym_comma,
    ACTIONS(1290), 1,
      sym_rparen,
    STATE(489), 1,
      aux_sym_params_repeat1,
  [14081] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
  [14091] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [14101] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_line_end,
  [14111] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
  [14121] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
  [14131] = 1,
    ACTIONS(1252), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [14137] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [14147] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [14157] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
  [14167] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(36), 1,
      sym_line_end,
  [14177] = 2,
    ACTIONS(1292), 1,
      sym_colon,
    ACTIONS(1294), 2,
      sym_rparen,
      sym_comma,
  [14185] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
  [14195] = 3,
    ACTIONS(1296), 1,
      sym_newline,
    ACTIONS(1298), 1,
      sym_inline_comment,
    STATE(207), 1,
      sym_line_end,
  [14205] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [14215] = 1,
    ACTIONS(1300), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14221] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [14231] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [14241] = 3,
    ACTIONS(1274), 1,
      sym_newline,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(246), 1,
      sym_line_end,
  [14251] = 3,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(224), 1,
      sym_line_end,
  [14261] = 3,
    ACTIONS(1302), 1,
      sym_pascal_name,
    STATE(561), 1,
      sym_struct_name,
    STATE(564), 1,
      sym_type_name,
  [14271] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(260), 1,
      sym_line_end,
  [14281] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(37), 1,
      sym_line_end,
  [14291] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
  [14301] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
  [14311] = 3,
    ACTIONS(1304), 1,
      sym_rparen,
    ACTIONS(1306), 1,
      sym_comma,
    STATE(489), 1,
      aux_sym_params_repeat1,
  [14321] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
  [14331] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [14341] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [14351] = 3,
    ACTIONS(1309), 1,
      aux_sym_directive_value_token1,
    STATE(463), 1,
      sym_cap_ref,
    STATE(508), 1,
      sym_text_line,
  [14361] = 3,
    ACTIONS(1133), 1,
      sym_colon,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(505), 1,
      sym_callee,
  [14371] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    ACTIONS(1137), 1,
      sym_colon,
    STATE(601), 1,
      sym_par_clause,
  [14381] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [14391] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [14401] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1311), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [14411] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [14421] = 3,
    ACTIONS(1309), 1,
      aux_sym_directive_value_token1,
    STATE(483), 1,
      sym_property_value,
    STATE(525), 1,
      sym_text_line,
  [14431] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [14441] = 2,
    ACTIONS(1313), 1,
      sym_indented_raw_text,
    STATE(79), 1,
      sym__unroled_message_continuation_line,
  [14448] = 1,
    ACTIONS(540), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14453] = 1,
    ACTIONS(1315), 2,
      sym_arrow,
      sym_colon,
  [14458] = 1,
    ACTIONS(1208), 2,
      sym_newline,
      sym_inline_comment,
  [14463] = 2,
    ACTIONS(538), 1,
      sym__nested_indented_raw_text,
    ACTIONS(540), 1,
      sym_blank_line,
  [14470] = 2,
    ACTIONS(542), 1,
      sym__nested_indented_raw_text,
    ACTIONS(544), 1,
      sym_blank_line,
  [14477] = 1,
    ACTIONS(1317), 2,
      sym_newline,
      sym_inline_comment,
  [14482] = 2,
    ACTIONS(1319), 1,
      aux_sym_directive_value_token1,
    STATE(430), 1,
      sym_directive_value,
  [14489] = 1,
    ACTIONS(544), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14494] = 1,
    ACTIONS(1321), 2,
      sym_arrow,
      sym_colon,
  [14499] = 1,
    ACTIONS(1323), 2,
      sym_newline,
      sym_inline_comment,
  [14504] = 1,
    ACTIONS(1325), 2,
      sym_newline,
      sym_inline_comment,
  [14509] = 1,
    ACTIONS(1327), 2,
      sym_newline,
      sym_inline_comment,
  [14514] = 2,
    ACTIONS(1329), 1,
      sym_arrow,
    ACTIONS(1331), 1,
      sym_colon,
  [14521] = 2,
    ACTIONS(1333), 1,
      sym_arrow,
    ACTIONS(1335), 1,
      sym_colon,
  [14528] = 1,
    ACTIONS(1337), 2,
      sym_newline,
      sym_inline_comment,
  [14533] = 1,
    ACTIONS(1339), 2,
      sym_newline,
      sym_inline_comment,
  [14538] = 2,
    ACTIONS(1341), 1,
      sym__snake_kebab_name,
    STATE(544), 1,
      sym_job_name,
  [14545] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(554), 1,
      sym_cap_name,
  [14552] = 2,
    ACTIONS(1345), 1,
      sym_indented_raw_text,
    STATE(112), 1,
      sym_text_body_line,
  [14559] = 2,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
  [14566] = 1,
    ACTIONS(1351), 2,
      sym_optional_marker,
      sym_colon,
  [14571] = 2,
    ACTIONS(1353), 1,
      sym_optional_marker,
    ACTIONS(1355), 1,
      sym_colon,
  [14578] = 1,
    ACTIONS(1357), 2,
      sym_newline,
      sym_inline_comment,
  [14583] = 1,
    ACTIONS(1359), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14588] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(543), 1,
      sym_cap_name,
  [14595] = 2,
    ACTIONS(1361), 1,
      sym_indented_raw_text,
    STATE(101), 1,
      sym_text_body_line,
  [14602] = 1,
    ACTIONS(1363), 2,
      sym_rparen,
      sym_comma,
  [14607] = 1,
    ACTIONS(1365), 2,
      sym_arrow,
      sym_colon,
  [14612] = 2,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(432), 1,
      sym_callee,
  [14619] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(560), 1,
      sym_cap_name,
  [14626] = 2,
    ACTIONS(1341), 1,
      sym__snake_kebab_name,
    STATE(542), 1,
      sym_job_name,
  [14633] = 1,
    ACTIONS(1367), 2,
      sym_rparen,
      sym_comma,
  [14638] = 2,
    ACTIONS(1369), 1,
      anon_sym_EQ,
    STATE(500), 1,
      sym_assign_operator,
  [14645] = 2,
    ACTIONS(1319), 1,
      aux_sym_directive_value_token1,
    STATE(477), 1,
      sym_directive_value,
  [14652] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(583), 1,
      sym_cap_name,
  [14659] = 2,
    ACTIONS(1371), 1,
      sym_arrow,
    ACTIONS(1373), 1,
      sym_colon,
  [14666] = 1,
    ACTIONS(1375), 2,
      sym_newline,
      sym_inline_comment,
  [14671] = 1,
    ACTIONS(1377), 2,
      sym_rparen,
      sym_comma,
  [14676] = 1,
    ACTIONS(1379), 1,
      sym_colon,
  [14680] = 1,
    ACTIONS(1381), 1,
      sym_colon,
  [14684] = 1,
    ACTIONS(1383), 1,
      sym_colon,
  [14688] = 1,
    ACTIONS(1385), 1,
      sym_colon,
  [14692] = 1,
    ACTIONS(1387), 1,
      sym_colon,
  [14696] = 1,
    ACTIONS(1389), 1,
      aux_sym_directive_value_token1,
  [14700] = 1,
    ACTIONS(1391), 1,
      sym_colon,
  [14704] = 1,
    ACTIONS(1393), 1,
      sym_colon,
  [14708] = 1,
    ACTIONS(1395), 1,
      sym_colon,
  [14712] = 1,
    ACTIONS(1397), 1,
      sym_newline,
  [14716] = 1,
    ACTIONS(1399), 1,
      sym_cap_kind,
  [14720] = 1,
    ACTIONS(1401), 1,
      sym_newline,
  [14724] = 1,
    ACTIONS(1403), 1,
      sym_newline,
  [14728] = 1,
    ACTIONS(1405), 1,
      sym_colon,
  [14732] = 1,
    ACTIONS(1407), 1,
      sym_colon,
  [14736] = 1,
    ACTIONS(1409), 1,
      sym_newline,
  [14740] = 1,
    ACTIONS(1411), 1,
      sym_colon,
  [14744] = 1,
    ACTIONS(1413), 1,
      sym_newline,
  [14748] = 1,
    ACTIONS(1415), 1,
      sym_newline,
  [14752] = 1,
    ACTIONS(1417), 1,
      sym_colon,
  [14756] = 1,
    ACTIONS(1419), 1,
      sym_colon,
  [14760] = 1,
    ACTIONS(1421), 1,
      sym_newline,
  [14764] = 1,
    ACTIONS(1423), 1,
      sym_colon,
  [14768] = 1,
    ACTIONS(1425), 1,
      sym_colon,
  [14772] = 1,
    ACTIONS(1427), 1,
      sym_colon,
  [14776] = 1,
    ACTIONS(1429), 1,
      sym_newline,
  [14780] = 1,
    ACTIONS(1431), 1,
      sym_newline,
  [14784] = 1,
    ACTIONS(1433), 1,
      sym_colon,
  [14788] = 1,
    ACTIONS(1435), 1,
      anon_sym_EQ,
  [14792] = 1,
    ACTIONS(1437), 1,
      sym_newline,
  [14796] = 1,
    ACTIONS(1439), 1,
      sym_newline,
  [14800] = 1,
    ACTIONS(1441), 1,
      sym_newline,
  [14804] = 1,
    ACTIONS(1443), 1,
      sym_newline,
  [14808] = 1,
    ACTIONS(1445), 1,
      sym_newline,
  [14812] = 1,
    ACTIONS(1447), 1,
      sym_newline,
  [14816] = 1,
    ACTIONS(1449), 1,
      sym_newline,
  [14820] = 1,
    ACTIONS(1451), 1,
      aux_sym_directive_value_token1,
  [14824] = 1,
    ACTIONS(1453), 1,
      sym_newline,
  [14828] = 1,
    ACTIONS(1455), 1,
      sym_newline,
  [14832] = 1,
    ACTIONS(1457), 1,
      sym_newline,
  [14836] = 1,
    ACTIONS(1459), 1,
      sym_colon,
  [14840] = 1,
    ACTIONS(1461), 1,
      sym_colon,
  [14844] = 1,
    ACTIONS(1463), 1,
      sym_colon,
  [14848] = 1,
    ACTIONS(1465), 1,
      sym_integer_literal,
  [14852] = 1,
    ACTIONS(1467), 1,
      sym_colon,
  [14856] = 1,
    ACTIONS(1469), 1,
      sym_newline,
  [14860] = 1,
    ACTIONS(1471), 1,
      ts_builtin_sym_end,
  [14864] = 1,
    ACTIONS(1473), 1,
      sym_integer_literal,
  [14868] = 1,
    ACTIONS(1475), 1,
      sym_colon,
  [14872] = 1,
    ACTIONS(1477), 1,
      sym_colon,
  [14876] = 1,
    ACTIONS(1479), 1,
      sym_colon,
  [14880] = 1,
    ACTIONS(1481), 1,
      sym_colon,
  [14884] = 1,
    ACTIONS(1483), 1,
      sym_colon,
  [14888] = 1,
    ACTIONS(1485), 1,
      sym_colon,
  [14892] = 1,
    ACTIONS(1487), 1,
      sym_colon,
  [14896] = 1,
    ACTIONS(1489), 1,
      sym_newline,
  [14900] = 1,
    ACTIONS(1491), 1,
      sym_colon,
  [14904] = 1,
    ACTIONS(1493), 1,
      sym_colon,
  [14908] = 1,
    ACTIONS(1495), 1,
      sym_integer_literal,
  [14912] = 1,
    ACTIONS(1497), 1,
      sym_colon,
  [14916] = 1,
    ACTIONS(1499), 1,
      sym_colon,
  [14920] = 1,
    ACTIONS(1501), 1,
      sym_colon,
  [14924] = 1,
    ACTIONS(1503), 1,
      sym_colon,
  [14928] = 1,
    ACTIONS(1505), 1,
      sym_colon,
  [14932] = 1,
    ACTIONS(1507), 1,
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
  [SMALL_STATE(15)] = 1192,
  [SMALL_STATE(16)] = 1270,
  [SMALL_STATE(17)] = 1348,
  [SMALL_STATE(18)] = 1436,
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
  [SMALL_STATE(49)] = 3474,
  [SMALL_STATE(50)] = 3515,
  [SMALL_STATE(51)] = 3560,
  [SMALL_STATE(52)] = 3601,
  [SMALL_STATE(53)] = 3646,
  [SMALL_STATE(54)] = 3691,
  [SMALL_STATE(55)] = 3758,
  [SMALL_STATE(56)] = 3825,
  [SMALL_STATE(57)] = 3866,
  [SMALL_STATE(58)] = 3907,
  [SMALL_STATE(59)] = 3951,
  [SMALL_STATE(60)] = 3987,
  [SMALL_STATE(61)] = 4027,
  [SMALL_STATE(62)] = 4063,
  [SMALL_STATE(63)] = 4103,
  [SMALL_STATE(64)] = 4145,
  [SMALL_STATE(65)] = 4187,
  [SMALL_STATE(66)] = 4229,
  [SMALL_STATE(67)] = 4273,
  [SMALL_STATE(68)] = 4312,
  [SMALL_STATE(69)] = 4347,
  [SMALL_STATE(70)] = 4382,
  [SMALL_STATE(71)] = 4417,
  [SMALL_STATE(72)] = 4458,
  [SMALL_STATE(73)] = 4497,
  [SMALL_STATE(74)] = 4532,
  [SMALL_STATE(75)] = 4567,
  [SMALL_STATE(76)] = 4602,
  [SMALL_STATE(77)] = 4641,
  [SMALL_STATE(78)] = 4676,
  [SMALL_STATE(79)] = 4711,
  [SMALL_STATE(80)] = 4746,
  [SMALL_STATE(81)] = 4785,
  [SMALL_STATE(82)] = 4820,
  [SMALL_STATE(83)] = 4859,
  [SMALL_STATE(84)] = 4894,
  [SMALL_STATE(85)] = 4933,
  [SMALL_STATE(86)] = 4972,
  [SMALL_STATE(87)] = 5015,
  [SMALL_STATE(88)] = 5054,
  [SMALL_STATE(89)] = 5097,
  [SMALL_STATE(90)] = 5132,
  [SMALL_STATE(91)] = 5173,
  [SMALL_STATE(92)] = 5208,
  [SMALL_STATE(93)] = 5249,
  [SMALL_STATE(94)] = 5288,
  [SMALL_STATE(95)] = 5323,
  [SMALL_STATE(96)] = 5358,
  [SMALL_STATE(97)] = 5393,
  [SMALL_STATE(98)] = 5428,
  [SMALL_STATE(99)] = 5463,
  [SMALL_STATE(100)] = 5497,
  [SMALL_STATE(101)] = 5535,
  [SMALL_STATE(102)] = 5569,
  [SMALL_STATE(103)] = 5607,
  [SMALL_STATE(104)] = 5645,
  [SMALL_STATE(105)] = 5683,
  [SMALL_STATE(106)] = 5717,
  [SMALL_STATE(107)] = 5751,
  [SMALL_STATE(108)] = 5785,
  [SMALL_STATE(109)] = 5818,
  [SMALL_STATE(110)] = 5851,
  [SMALL_STATE(111)] = 5884,
  [SMALL_STATE(112)] = 5917,
  [SMALL_STATE(113)] = 5950,
  [SMALL_STATE(114)] = 5983,
  [SMALL_STATE(115)] = 6016,
  [SMALL_STATE(116)] = 6049,
  [SMALL_STATE(117)] = 6082,
  [SMALL_STATE(118)] = 6115,
  [SMALL_STATE(119)] = 6148,
  [SMALL_STATE(120)] = 6181,
  [SMALL_STATE(121)] = 6214,
  [SMALL_STATE(122)] = 6247,
  [SMALL_STATE(123)] = 6280,
  [SMALL_STATE(124)] = 6313,
  [SMALL_STATE(125)] = 6346,
  [SMALL_STATE(126)] = 6379,
  [SMALL_STATE(127)] = 6412,
  [SMALL_STATE(128)] = 6445,
  [SMALL_STATE(129)] = 6478,
  [SMALL_STATE(130)] = 6511,
  [SMALL_STATE(131)] = 6544,
  [SMALL_STATE(132)] = 6577,
  [SMALL_STATE(133)] = 6610,
  [SMALL_STATE(134)] = 6643,
  [SMALL_STATE(135)] = 6676,
  [SMALL_STATE(136)] = 6709,
  [SMALL_STATE(137)] = 6742,
  [SMALL_STATE(138)] = 6775,
  [SMALL_STATE(139)] = 6808,
  [SMALL_STATE(140)] = 6841,
  [SMALL_STATE(141)] = 6874,
  [SMALL_STATE(142)] = 6907,
  [SMALL_STATE(143)] = 6940,
  [SMALL_STATE(144)] = 6973,
  [SMALL_STATE(145)] = 7006,
  [SMALL_STATE(146)] = 7039,
  [SMALL_STATE(147)] = 7072,
  [SMALL_STATE(148)] = 7105,
  [SMALL_STATE(149)] = 7138,
  [SMALL_STATE(150)] = 7171,
  [SMALL_STATE(151)] = 7204,
  [SMALL_STATE(152)] = 7237,
  [SMALL_STATE(153)] = 7270,
  [SMALL_STATE(154)] = 7302,
  [SMALL_STATE(155)] = 7334,
  [SMALL_STATE(156)] = 7366,
  [SMALL_STATE(157)] = 7398,
  [SMALL_STATE(158)] = 7430,
  [SMALL_STATE(159)] = 7462,
  [SMALL_STATE(160)] = 7494,
  [SMALL_STATE(161)] = 7526,
  [SMALL_STATE(162)] = 7558,
  [SMALL_STATE(163)] = 7590,
  [SMALL_STATE(164)] = 7622,
  [SMALL_STATE(165)] = 7654,
  [SMALL_STATE(166)] = 7686,
  [SMALL_STATE(167)] = 7718,
  [SMALL_STATE(168)] = 7750,
  [SMALL_STATE(169)] = 7782,
  [SMALL_STATE(170)] = 7814,
  [SMALL_STATE(171)] = 7846,
  [SMALL_STATE(172)] = 7878,
  [SMALL_STATE(173)] = 7910,
  [SMALL_STATE(174)] = 7942,
  [SMALL_STATE(175)] = 7974,
  [SMALL_STATE(176)] = 8006,
  [SMALL_STATE(177)] = 8038,
  [SMALL_STATE(178)] = 8070,
  [SMALL_STATE(179)] = 8102,
  [SMALL_STATE(180)] = 8134,
  [SMALL_STATE(181)] = 8166,
  [SMALL_STATE(182)] = 8198,
  [SMALL_STATE(183)] = 8230,
  [SMALL_STATE(184)] = 8262,
  [SMALL_STATE(185)] = 8294,
  [SMALL_STATE(186)] = 8326,
  [SMALL_STATE(187)] = 8358,
  [SMALL_STATE(188)] = 8390,
  [SMALL_STATE(189)] = 8422,
  [SMALL_STATE(190)] = 8454,
  [SMALL_STATE(191)] = 8486,
  [SMALL_STATE(192)] = 8518,
  [SMALL_STATE(193)] = 8573,
  [SMALL_STATE(194)] = 8620,
  [SMALL_STATE(195)] = 8675,
  [SMALL_STATE(196)] = 8722,
  [SMALL_STATE(197)] = 8777,
  [SMALL_STATE(198)] = 8824,
  [SMALL_STATE(199)] = 8861,
  [SMALL_STATE(200)] = 8898,
  [SMALL_STATE(201)] = 8945,
  [SMALL_STATE(202)] = 9000,
  [SMALL_STATE(203)] = 9037,
  [SMALL_STATE(204)] = 9069,
  [SMALL_STATE(205)] = 9095,
  [SMALL_STATE(206)] = 9131,
  [SMALL_STATE(207)] = 9157,
  [SMALL_STATE(208)] = 9182,
  [SMALL_STATE(209)] = 9207,
  [SMALL_STATE(210)] = 9232,
  [SMALL_STATE(211)] = 9268,
  [SMALL_STATE(212)] = 9296,
  [SMALL_STATE(213)] = 9332,
  [SMALL_STATE(214)] = 9363,
  [SMALL_STATE(215)] = 9394,
  [SMALL_STATE(216)] = 9422,
  [SMALL_STATE(217)] = 9450,
  [SMALL_STATE(218)] = 9478,
  [SMALL_STATE(219)] = 9506,
  [SMALL_STATE(220)] = 9534,
  [SMALL_STATE(221)] = 9562,
  [SMALL_STATE(222)] = 9590,
  [SMALL_STATE(223)] = 9618,
  [SMALL_STATE(224)] = 9646,
  [SMALL_STATE(225)] = 9670,
  [SMALL_STATE(226)] = 9698,
  [SMALL_STATE(227)] = 9726,
  [SMALL_STATE(228)] = 9754,
  [SMALL_STATE(229)] = 9782,
  [SMALL_STATE(230)] = 9806,
  [SMALL_STATE(231)] = 9834,
  [SMALL_STATE(232)] = 9862,
  [SMALL_STATE(233)] = 9888,
  [SMALL_STATE(234)] = 9916,
  [SMALL_STATE(235)] = 9944,
  [SMALL_STATE(236)] = 9972,
  [SMALL_STATE(237)] = 10000,
  [SMALL_STATE(238)] = 10028,
  [SMALL_STATE(239)] = 10056,
  [SMALL_STATE(240)] = 10084,
  [SMALL_STATE(241)] = 10106,
  [SMALL_STATE(242)] = 10128,
  [SMALL_STATE(243)] = 10156,
  [SMALL_STATE(244)] = 10180,
  [SMALL_STATE(245)] = 10203,
  [SMALL_STATE(246)] = 10226,
  [SMALL_STATE(247)] = 10249,
  [SMALL_STATE(248)] = 10272,
  [SMALL_STATE(249)] = 10295,
  [SMALL_STATE(250)] = 10317,
  [SMALL_STATE(251)] = 10339,
  [SMALL_STATE(252)] = 10361,
  [SMALL_STATE(253)] = 10383,
  [SMALL_STATE(254)] = 10405,
  [SMALL_STATE(255)] = 10427,
  [SMALL_STATE(256)] = 10449,
  [SMALL_STATE(257)] = 10471,
  [SMALL_STATE(258)] = 10493,
  [SMALL_STATE(259)] = 10515,
  [SMALL_STATE(260)] = 10537,
  [SMALL_STATE(261)] = 10559,
  [SMALL_STATE(262)] = 10581,
  [SMALL_STATE(263)] = 10603,
  [SMALL_STATE(264)] = 10625,
  [SMALL_STATE(265)] = 10647,
  [SMALL_STATE(266)] = 10669,
  [SMALL_STATE(267)] = 10691,
  [SMALL_STATE(268)] = 10713,
  [SMALL_STATE(269)] = 10735,
  [SMALL_STATE(270)] = 10757,
  [SMALL_STATE(271)] = 10779,
  [SMALL_STATE(272)] = 10801,
  [SMALL_STATE(273)] = 10823,
  [SMALL_STATE(274)] = 10845,
  [SMALL_STATE(275)] = 10867,
  [SMALL_STATE(276)] = 10889,
  [SMALL_STATE(277)] = 10911,
  [SMALL_STATE(278)] = 10933,
  [SMALL_STATE(279)] = 10955,
  [SMALL_STATE(280)] = 10977,
  [SMALL_STATE(281)] = 10999,
  [SMALL_STATE(282)] = 11021,
  [SMALL_STATE(283)] = 11043,
  [SMALL_STATE(284)] = 11065,
  [SMALL_STATE(285)] = 11087,
  [SMALL_STATE(286)] = 11109,
  [SMALL_STATE(287)] = 11134,
  [SMALL_STATE(288)] = 11159,
  [SMALL_STATE(289)] = 11184,
  [SMALL_STATE(290)] = 11209,
  [SMALL_STATE(291)] = 11234,
  [SMALL_STATE(292)] = 11259,
  [SMALL_STATE(293)] = 11284,
  [SMALL_STATE(294)] = 11309,
  [SMALL_STATE(295)] = 11334,
  [SMALL_STATE(296)] = 11359,
  [SMALL_STATE(297)] = 11384,
  [SMALL_STATE(298)] = 11409,
  [SMALL_STATE(299)] = 11434,
  [SMALL_STATE(300)] = 11467,
  [SMALL_STATE(301)] = 11500,
  [SMALL_STATE(302)] = 11530,
  [SMALL_STATE(303)] = 11560,
  [SMALL_STATE(304)] = 11578,
  [SMALL_STATE(305)] = 11604,
  [SMALL_STATE(306)] = 11622,
  [SMALL_STATE(307)] = 11640,
  [SMALL_STATE(308)] = 11664,
  [SMALL_STATE(309)] = 11688,
  [SMALL_STATE(310)] = 11712,
  [SMALL_STATE(311)] = 11738,
  [SMALL_STATE(312)] = 11764,
  [SMALL_STATE(313)] = 11790,
  [SMALL_STATE(314)] = 11814,
  [SMALL_STATE(315)] = 11838,
  [SMALL_STATE(316)] = 11862,
  [SMALL_STATE(317)] = 11883,
  [SMALL_STATE(318)] = 11908,
  [SMALL_STATE(319)] = 11929,
  [SMALL_STATE(320)] = 11954,
  [SMALL_STATE(321)] = 11979,
  [SMALL_STATE(322)] = 12002,
  [SMALL_STATE(323)] = 12025,
  [SMALL_STATE(324)] = 12048,
  [SMALL_STATE(325)] = 12073,
  [SMALL_STATE(326)] = 12096,
  [SMALL_STATE(327)] = 12119,
  [SMALL_STATE(328)] = 12142,
  [SMALL_STATE(329)] = 12165,
  [SMALL_STATE(330)] = 12182,
  [SMALL_STATE(331)] = 12203,
  [SMALL_STATE(332)] = 12226,
  [SMALL_STATE(333)] = 12249,
  [SMALL_STATE(334)] = 12272,
  [SMALL_STATE(335)] = 12293,
  [SMALL_STATE(336)] = 12316,
  [SMALL_STATE(337)] = 12339,
  [SMALL_STATE(338)] = 12362,
  [SMALL_STATE(339)] = 12385,
  [SMALL_STATE(340)] = 12408,
  [SMALL_STATE(341)] = 12431,
  [SMALL_STATE(342)] = 12454,
  [SMALL_STATE(343)] = 12477,
  [SMALL_STATE(344)] = 12498,
  [SMALL_STATE(345)] = 12521,
  [SMALL_STATE(346)] = 12544,
  [SMALL_STATE(347)] = 12567,
  [SMALL_STATE(348)] = 12590,
  [SMALL_STATE(349)] = 12613,
  [SMALL_STATE(350)] = 12636,
  [SMALL_STATE(351)] = 12659,
  [SMALL_STATE(352)] = 12682,
  [SMALL_STATE(353)] = 12705,
  [SMALL_STATE(354)] = 12728,
  [SMALL_STATE(355)] = 12751,
  [SMALL_STATE(356)] = 12772,
  [SMALL_STATE(357)] = 12795,
  [SMALL_STATE(358)] = 12818,
  [SMALL_STATE(359)] = 12841,
  [SMALL_STATE(360)] = 12864,
  [SMALL_STATE(361)] = 12887,
  [SMALL_STATE(362)] = 12910,
  [SMALL_STATE(363)] = 12931,
  [SMALL_STATE(364)] = 12948,
  [SMALL_STATE(365)] = 12958,
  [SMALL_STATE(366)] = 12968,
  [SMALL_STATE(367)] = 12978,
  [SMALL_STATE(368)] = 12988,
  [SMALL_STATE(369)] = 12998,
  [SMALL_STATE(370)] = 13012,
  [SMALL_STATE(371)] = 13032,
  [SMALL_STATE(372)] = 13042,
  [SMALL_STATE(373)] = 13051,
  [SMALL_STATE(374)] = 13068,
  [SMALL_STATE(375)] = 13085,
  [SMALL_STATE(376)] = 13104,
  [SMALL_STATE(377)] = 13123,
  [SMALL_STATE(378)] = 13132,
  [SMALL_STATE(379)] = 13148,
  [SMALL_STATE(380)] = 13162,
  [SMALL_STATE(381)] = 13176,
  [SMALL_STATE(382)] = 13190,
  [SMALL_STATE(383)] = 13204,
  [SMALL_STATE(384)] = 13220,
  [SMALL_STATE(385)] = 13236,
  [SMALL_STATE(386)] = 13250,
  [SMALL_STATE(387)] = 13260,
  [SMALL_STATE(388)] = 13272,
  [SMALL_STATE(389)] = 13288,
  [SMALL_STATE(390)] = 13304,
  [SMALL_STATE(391)] = 13320,
  [SMALL_STATE(392)] = 13332,
  [SMALL_STATE(393)] = 13344,
  [SMALL_STATE(394)] = 13360,
  [SMALL_STATE(395)] = 13376,
  [SMALL_STATE(396)] = 13388,
  [SMALL_STATE(397)] = 13402,
  [SMALL_STATE(398)] = 13416,
  [SMALL_STATE(399)] = 13425,
  [SMALL_STATE(400)] = 13436,
  [SMALL_STATE(401)] = 13447,
  [SMALL_STATE(402)] = 13460,
  [SMALL_STATE(403)] = 13473,
  [SMALL_STATE(404)] = 13484,
  [SMALL_STATE(405)] = 13491,
  [SMALL_STATE(406)] = 13500,
  [SMALL_STATE(407)] = 13509,
  [SMALL_STATE(408)] = 13520,
  [SMALL_STATE(409)] = 13533,
  [SMALL_STATE(410)] = 13542,
  [SMALL_STATE(411)] = 13549,
  [SMALL_STATE(412)] = 13562,
  [SMALL_STATE(413)] = 13575,
  [SMALL_STATE(414)] = 13588,
  [SMALL_STATE(415)] = 13599,
  [SMALL_STATE(416)] = 13606,
  [SMALL_STATE(417)] = 13619,
  [SMALL_STATE(418)] = 13632,
  [SMALL_STATE(419)] = 13645,
  [SMALL_STATE(420)] = 13658,
  [SMALL_STATE(421)] = 13665,
  [SMALL_STATE(422)] = 13676,
  [SMALL_STATE(423)] = 13685,
  [SMALL_STATE(424)] = 13695,
  [SMALL_STATE(425)] = 13701,
  [SMALL_STATE(426)] = 13711,
  [SMALL_STATE(427)] = 13721,
  [SMALL_STATE(428)] = 13731,
  [SMALL_STATE(429)] = 13741,
  [SMALL_STATE(430)] = 13749,
  [SMALL_STATE(431)] = 13759,
  [SMALL_STATE(432)] = 13769,
  [SMALL_STATE(433)] = 13775,
  [SMALL_STATE(434)] = 13785,
  [SMALL_STATE(435)] = 13795,
  [SMALL_STATE(436)] = 13805,
  [SMALL_STATE(437)] = 13815,
  [SMALL_STATE(438)] = 13825,
  [SMALL_STATE(439)] = 13835,
  [SMALL_STATE(440)] = 13845,
  [SMALL_STATE(441)] = 13855,
  [SMALL_STATE(442)] = 13861,
  [SMALL_STATE(443)] = 13871,
  [SMALL_STATE(444)] = 13881,
  [SMALL_STATE(445)] = 13891,
  [SMALL_STATE(446)] = 13901,
  [SMALL_STATE(447)] = 13911,
  [SMALL_STATE(448)] = 13921,
  [SMALL_STATE(449)] = 13931,
  [SMALL_STATE(450)] = 13941,
  [SMALL_STATE(451)] = 13949,
  [SMALL_STATE(452)] = 13959,
  [SMALL_STATE(453)] = 13969,
  [SMALL_STATE(454)] = 13979,
  [SMALL_STATE(455)] = 13985,
  [SMALL_STATE(456)] = 13995,
  [SMALL_STATE(457)] = 14005,
  [SMALL_STATE(458)] = 14011,
  [SMALL_STATE(459)] = 14021,
  [SMALL_STATE(460)] = 14031,
  [SMALL_STATE(461)] = 14041,
  [SMALL_STATE(462)] = 14051,
  [SMALL_STATE(463)] = 14061,
  [SMALL_STATE(464)] = 14071,
  [SMALL_STATE(465)] = 14081,
  [SMALL_STATE(466)] = 14091,
  [SMALL_STATE(467)] = 14101,
  [SMALL_STATE(468)] = 14111,
  [SMALL_STATE(469)] = 14121,
  [SMALL_STATE(470)] = 14131,
  [SMALL_STATE(471)] = 14137,
  [SMALL_STATE(472)] = 14147,
  [SMALL_STATE(473)] = 14157,
  [SMALL_STATE(474)] = 14167,
  [SMALL_STATE(475)] = 14177,
  [SMALL_STATE(476)] = 14185,
  [SMALL_STATE(477)] = 14195,
  [SMALL_STATE(478)] = 14205,
  [SMALL_STATE(479)] = 14215,
  [SMALL_STATE(480)] = 14221,
  [SMALL_STATE(481)] = 14231,
  [SMALL_STATE(482)] = 14241,
  [SMALL_STATE(483)] = 14251,
  [SMALL_STATE(484)] = 14261,
  [SMALL_STATE(485)] = 14271,
  [SMALL_STATE(486)] = 14281,
  [SMALL_STATE(487)] = 14291,
  [SMALL_STATE(488)] = 14301,
  [SMALL_STATE(489)] = 14311,
  [SMALL_STATE(490)] = 14321,
  [SMALL_STATE(491)] = 14331,
  [SMALL_STATE(492)] = 14341,
  [SMALL_STATE(493)] = 14351,
  [SMALL_STATE(494)] = 14361,
  [SMALL_STATE(495)] = 14371,
  [SMALL_STATE(496)] = 14381,
  [SMALL_STATE(497)] = 14391,
  [SMALL_STATE(498)] = 14401,
  [SMALL_STATE(499)] = 14411,
  [SMALL_STATE(500)] = 14421,
  [SMALL_STATE(501)] = 14431,
  [SMALL_STATE(502)] = 14441,
  [SMALL_STATE(503)] = 14448,
  [SMALL_STATE(504)] = 14453,
  [SMALL_STATE(505)] = 14458,
  [SMALL_STATE(506)] = 14463,
  [SMALL_STATE(507)] = 14470,
  [SMALL_STATE(508)] = 14477,
  [SMALL_STATE(509)] = 14482,
  [SMALL_STATE(510)] = 14489,
  [SMALL_STATE(511)] = 14494,
  [SMALL_STATE(512)] = 14499,
  [SMALL_STATE(513)] = 14504,
  [SMALL_STATE(514)] = 14509,
  [SMALL_STATE(515)] = 14514,
  [SMALL_STATE(516)] = 14521,
  [SMALL_STATE(517)] = 14528,
  [SMALL_STATE(518)] = 14533,
  [SMALL_STATE(519)] = 14538,
  [SMALL_STATE(520)] = 14545,
  [SMALL_STATE(521)] = 14552,
  [SMALL_STATE(522)] = 14559,
  [SMALL_STATE(523)] = 14566,
  [SMALL_STATE(524)] = 14571,
  [SMALL_STATE(525)] = 14578,
  [SMALL_STATE(526)] = 14583,
  [SMALL_STATE(527)] = 14588,
  [SMALL_STATE(528)] = 14595,
  [SMALL_STATE(529)] = 14602,
  [SMALL_STATE(530)] = 14607,
  [SMALL_STATE(531)] = 14612,
  [SMALL_STATE(532)] = 14619,
  [SMALL_STATE(533)] = 14626,
  [SMALL_STATE(534)] = 14633,
  [SMALL_STATE(535)] = 14638,
  [SMALL_STATE(536)] = 14645,
  [SMALL_STATE(537)] = 14652,
  [SMALL_STATE(538)] = 14659,
  [SMALL_STATE(539)] = 14666,
  [SMALL_STATE(540)] = 14671,
  [SMALL_STATE(541)] = 14676,
  [SMALL_STATE(542)] = 14680,
  [SMALL_STATE(543)] = 14684,
  [SMALL_STATE(544)] = 14688,
  [SMALL_STATE(545)] = 14692,
  [SMALL_STATE(546)] = 14696,
  [SMALL_STATE(547)] = 14700,
  [SMALL_STATE(548)] = 14704,
  [SMALL_STATE(549)] = 14708,
  [SMALL_STATE(550)] = 14712,
  [SMALL_STATE(551)] = 14716,
  [SMALL_STATE(552)] = 14720,
  [SMALL_STATE(553)] = 14724,
  [SMALL_STATE(554)] = 14728,
  [SMALL_STATE(555)] = 14732,
  [SMALL_STATE(556)] = 14736,
  [SMALL_STATE(557)] = 14740,
  [SMALL_STATE(558)] = 14744,
  [SMALL_STATE(559)] = 14748,
  [SMALL_STATE(560)] = 14752,
  [SMALL_STATE(561)] = 14756,
  [SMALL_STATE(562)] = 14760,
  [SMALL_STATE(563)] = 14764,
  [SMALL_STATE(564)] = 14768,
  [SMALL_STATE(565)] = 14772,
  [SMALL_STATE(566)] = 14776,
  [SMALL_STATE(567)] = 14780,
  [SMALL_STATE(568)] = 14784,
  [SMALL_STATE(569)] = 14788,
  [SMALL_STATE(570)] = 14792,
  [SMALL_STATE(571)] = 14796,
  [SMALL_STATE(572)] = 14800,
  [SMALL_STATE(573)] = 14804,
  [SMALL_STATE(574)] = 14808,
  [SMALL_STATE(575)] = 14812,
  [SMALL_STATE(576)] = 14816,
  [SMALL_STATE(577)] = 14820,
  [SMALL_STATE(578)] = 14824,
  [SMALL_STATE(579)] = 14828,
  [SMALL_STATE(580)] = 14832,
  [SMALL_STATE(581)] = 14836,
  [SMALL_STATE(582)] = 14840,
  [SMALL_STATE(583)] = 14844,
  [SMALL_STATE(584)] = 14848,
  [SMALL_STATE(585)] = 14852,
  [SMALL_STATE(586)] = 14856,
  [SMALL_STATE(587)] = 14860,
  [SMALL_STATE(588)] = 14864,
  [SMALL_STATE(589)] = 14868,
  [SMALL_STATE(590)] = 14872,
  [SMALL_STATE(591)] = 14876,
  [SMALL_STATE(592)] = 14880,
  [SMALL_STATE(593)] = 14884,
  [SMALL_STATE(594)] = 14888,
  [SMALL_STATE(595)] = 14892,
  [SMALL_STATE(596)] = 14896,
  [SMALL_STATE(597)] = 14900,
  [SMALL_STATE(598)] = 14904,
  [SMALL_STATE(599)] = 14908,
  [SMALL_STATE(600)] = 14912,
  [SMALL_STATE(601)] = 14916,
  [SMALL_STATE(602)] = 14920,
  [SMALL_STATE(603)] = 14924,
  [SMALL_STATE(604)] = 14928,
  [SMALL_STATE(605)] = 14932,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(570),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 2, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 3, 2, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 3, 2, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(203),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(211),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(219),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(219),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 24),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 24),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 22),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 22),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 23),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 23),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 20),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 20),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 13),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 13),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 23),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 23),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 26),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 26),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 26),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 20),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 20),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 27),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 27),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 27),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 27),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(366),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thunk_reserved_word, 1, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 1, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__itemwise_named_head, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 2, 0, 0),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(461),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 3, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__itemwise_named_head, 2, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 22),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
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
