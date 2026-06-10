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
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  sym__unroled_message_continuation_text = 71,
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
  sym_invalid_flow_reserved_statement = 131,
  sym_ask_statement = 132,
  sym_unfold_statement = 133,
  sym_keep_statement = 134,
  sym_drop_statement = 135,
  sym_rank_statement = 136,
  sym_each_statement = 137,
  sym_fold_statement = 138,
  sym_repeat_above_statement = 139,
  sym_repeat_block_statement = 140,
  sym_repeat_body = 141,
  sym_until_clause = 142,
  sym_until_statement = 143,
  sym_condition = 144,
  sym_to_clause = 145,
  sym_par_clause = 146,
  sym_limit_clause = 147,
  sym_times_clause = 148,
  sym_callees = 149,
  sym_callee = 150,
  sym_agent = 151,
  sym__itemwise_named_head = 152,
  sym__rank_named_head = 153,
  sym_directive = 154,
  sym_directive_key = 155,
  sym_directive_op = 156,
  sym_directive_value = 157,
  sym__directives = 158,
  sym_settings = 159,
  sym_context_setting = 160,
  sym_instruct_setting = 161,
  sym_text_ref = 162,
  sym_messages = 163,
  sym_message = 164,
  sym_unroled_message = 165,
  sym__unroled_message_initial_line = 166,
  sym__unroled_message_continuation_line = 167,
  sym_invalid_thunk_reserved_message = 168,
  sym_role = 169,
  sym__pass_statement = 170,
  sym__flow_reserved_word = 171,
  sym__thunk_reserved_word = 172,
  sym_assign_operator = 173,
  sym_type_name = 174,
  sym_text_line = 175,
  aux_sym_source_file_repeat1 = 176,
  aux_sym_type_repeat1 = 177,
  aux_sym_struct_body_repeat1 = 178,
  aux_sym_cap_body_repeat1 = 179,
  aux_sym_cap_body_repeat2 = 180,
  aux_sym_text_body_repeat1 = 181,
  aux_sym__nested_text_body_repeat1 = 182,
  aux_sym_params_repeat1 = 183,
  aux_sym_statements_repeat1 = 184,
  aux_sym_implicit_do_statement_repeat1 = 185,
  aux_sym_callees_repeat1 = 186,
  aux_sym__directives_repeat1 = 187,
  aux_sym_messages_repeat1 = 188,
  aux_sym_unroled_message_repeat1 = 189,
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
  [68] = 49,
  [69] = 43,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 49,
  [87] = 87,
  [88] = 43,
  [89] = 66,
  [90] = 90,
  [91] = 91,
  [92] = 70,
  [93] = 56,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 67,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 78,
  [103] = 100,
  [104] = 82,
  [105] = 105,
  [106] = 61,
  [107] = 64,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 101,
  [113] = 61,
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
  [126] = 64,
  [127] = 105,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 81,
  [135] = 90,
  [136] = 136,
  [137] = 137,
  [138] = 74,
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
  [173] = 90,
  [174] = 74,
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
  [207] = 75,
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
  [222] = 71,
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
      if (eof) ADVANCE(267);
      ADVANCE_MAP(
        '\n', 269,
        '\r', 1,
        '#', 273,
        '(', 367,
        ')', 368,
        '+', 49,
        ',', 369,
        '-', 50,
        ':', 366,
        '=', 290,
        '?', 364,
        'B', 385,
        'J', 387,
        'N', 390,
        'P', 371,
        'T', 375,
        '[', 52,
        'a', 205,
        'c', 115,
        'd', 85,
        'e', 53,
        'f', 147,
        'h', 58,
        'i', 165,
        'k', 97,
        'l', 120,
        'm', 175,
        'n', 183,
        'p', 54,
        'r', 60,
        's', 86,
        't', 56,
        'u', 161,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(392);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 269,
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
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(860);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')') ADVANCE(368);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(271);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(268);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ')', 368,
        ',', 369,
        ':', 366,
        '[', 52,
        'l', 120,
        'p', 62,
        's', 108,
        't', 122,
        'u', 172,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        '+', 303,
        '-', 304,
        '=', 290,
        '\t', 293,
        '\f', 293,
        ' ', 293,
      );
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'd', 406,
        'n', 431,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'l', 412,
        'p', 395,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'p', 395,
        't', 429,
        '\t', 296,
        '\f', 296,
        ' ', 296,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'p', 395,
        '\t', 297,
        '\f', 297,
        ' ', 297,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        't', 429,
        '\t', 298,
        '\f', 298,
        ' ', 298,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'u', 307,
        '\t', 299,
        '\f', 299,
        ' ', 299,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 43:
      if (lookahead == '\f') SKIP(43);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\f', 651,
        'a', 759,
        'd', 734,
        'e', 653,
        'f', 735,
        'k', 679,
        'r', 658,
        'u', 723,
        '\t', 44,
        ' ', 44,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 45:
      if (lookahead == '\f') SKIP(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(788);
      END_STATE();
    case 46:
      if (lookahead == '\f') SKIP(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(291);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(365);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(365);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'k') ADVANCE(121);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(130);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(348);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(348);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(340);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 245:
      if (lookahead == 'v') ADVANCE(131);
      END_STATE();
    case 246:
      if (lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 247:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 254:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(254);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 255:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(255);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 256:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(256);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(463);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 257:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(257);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(464);
      END_STATE();
    case 258:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 259:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(259);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 260:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(260);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      END_STATE();
    case 261:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(261);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      END_STATE();
    case 262:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(262);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 263:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(263);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(470);
      END_STATE();
    case 264:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(264);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      ADVANCE_MAP(
        '\n', 269,
        '\r', 1,
        '#', 22,
        'c', 115,
        'f', 146,
        'i', 165,
        'p', 199,
        's', 86,
        't', 55,
        'u', 221,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(392);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      ADVANCE_MAP(
        '\n', 269,
        '\r', 1,
        '#', 22,
        'c', 409,
        'f', 418,
        'i', 424,
        'p', 437,
        's', 400,
        't', 393,
        'u', 439,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        '+', 303,
        '-', 304,
        '=', 290,
        '\t', 293,
        '\f', 293,
        ' ', 293,
      );
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'd', 406,
        'n', 431,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'l', 412,
        'p', 395,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'p', 395,
        't', 429,
        '\t', 296,
        '\f', 296,
        ' ', 296,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'p', 395,
        '\t', 297,
        '\f', 297,
        ' ', 297,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        't', 429,
        '\t', 298,
        '\f', 298,
        ' ', 298,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'u', 307,
        '\t', 299,
        '\f', 299,
        ' ', 299,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flow_limit_keyword);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'k') ADVANCE(411);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'k') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'k') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == 's') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 's') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'v') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'x') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
        '\f', 463,
        '\r', 1,
        '#', 472,
        'c', 409,
        'f', 418,
        'i', 424,
        'p', 437,
        's', 400,
        't', 393,
        'u', 439,
        '\t', 463,
        ' ', 463,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') ADVANCE(465);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(474);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(270);
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
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(349);
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
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(318);
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
      if (lookahead == 'e') ADVANCE(325);
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
      if (lookahead == 'e') ADVANCE(331);
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
      if (lookahead == 'h') ADVANCE(353);
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
      if (lookahead == 'k') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(328);
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
      if (lookahead == 'o') ADVANCE(347);
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
      if (lookahead == 's') ADVANCE(287);
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
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(350);
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
      if (lookahead == 'r') ADVANCE(315);
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
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(285);
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
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(316);
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
      if (lookahead == 'w') ADVANCE(344);
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
        '\n', 269,
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
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(648);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(650);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == '\n') ADVANCE(270);
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
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'd') ADVANCE(349);
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
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'e') ADVANCE(318);
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
      if (lookahead == 'h') ADVANCE(353);
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
      if (lookahead == 'k') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'l') ADVANCE(289);
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
      if (lookahead == 'o') ADVANCE(347);
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
      if (lookahead == 's') ADVANCE(287);
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
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 'p') ADVANCE(350);
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
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(288);
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
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 's') ADVANCE(285);
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
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(785);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__implicit_do_raw_text);
      if (lookahead == 't') ADVANCE(336);
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
      if (lookahead == 'w') ADVANCE(344);
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
      if (lookahead == '\n') ADVANCE(270);
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
      if (lookahead == '\n') ADVANCE(270);
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
  [1] = {.lex_state = 265},
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
  [15] = {.lex_state = 254},
  [16] = {.lex_state = 254},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 254},
  [19] = {.lex_state = 258},
  [20] = {.lex_state = 258},
  [21] = {.lex_state = 258},
  [22] = {.lex_state = 255},
  [23] = {.lex_state = 255},
  [24] = {.lex_state = 255},
  [25] = {.lex_state = 255},
  [26] = {.lex_state = 255},
  [27] = {.lex_state = 255},
  [28] = {.lex_state = 255},
  [29] = {.lex_state = 255},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 255},
  [40] = {.lex_state = 255},
  [41] = {.lex_state = 255},
  [42] = {.lex_state = 255},
  [43] = {.lex_state = 263},
  [44] = {.lex_state = 255},
  [45] = {.lex_state = 259},
  [46] = {.lex_state = 255},
  [47] = {.lex_state = 255},
  [48] = {.lex_state = 259},
  [49] = {.lex_state = 263},
  [50] = {.lex_state = 259},
  [51] = {.lex_state = 255},
  [52] = {.lex_state = 259},
  [53] = {.lex_state = 259},
  [54] = {.lex_state = 255},
  [55] = {.lex_state = 265},
  [56] = {.lex_state = 255},
  [57] = {.lex_state = 265},
  [58] = {.lex_state = 255},
  [59] = {.lex_state = 255},
  [60] = {.lex_state = 259},
  [61] = {.lex_state = 263},
  [62] = {.lex_state = 259},
  [63] = {.lex_state = 259},
  [64] = {.lex_state = 263},
  [65] = {.lex_state = 259},
  [66] = {.lex_state = 260},
  [67] = {.lex_state = 260},
  [68] = {.lex_state = 262},
  [69] = {.lex_state = 262},
  [70] = {.lex_state = 260},
  [71] = {.lex_state = 254},
  [72] = {.lex_state = 254},
  [73] = {.lex_state = 255},
  [74] = {.lex_state = 255},
  [75] = {.lex_state = 255},
  [76] = {.lex_state = 254},
  [77] = {.lex_state = 255},
  [78] = {.lex_state = 260},
  [79] = {.lex_state = 255},
  [80] = {.lex_state = 254},
  [81] = {.lex_state = 255},
  [82] = {.lex_state = 260},
  [83] = {.lex_state = 255},
  [84] = {.lex_state = 254},
  [85] = {.lex_state = 254},
  [86] = {.lex_state = 264},
  [87] = {.lex_state = 255},
  [88] = {.lex_state = 264},
  [89] = {.lex_state = 261},
  [90] = {.lex_state = 255},
  [91] = {.lex_state = 255},
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 254},
  [94] = {.lex_state = 255},
  [95] = {.lex_state = 255},
  [96] = {.lex_state = 255},
  [97] = {.lex_state = 255},
  [98] = {.lex_state = 261},
  [99] = {.lex_state = 260},
  [100] = {.lex_state = 254},
  [101] = {.lex_state = 260},
  [102] = {.lex_state = 261},
  [103] = {.lex_state = 254},
  [104] = {.lex_state = 261},
  [105] = {.lex_state = 260},
  [106] = {.lex_state = 262},
  [107] = {.lex_state = 262},
  [108] = {.lex_state = 254},
  [109] = {.lex_state = 254},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 254},
  [112] = {.lex_state = 261},
  [113] = {.lex_state = 264},
  [114] = {.lex_state = 254},
  [115] = {.lex_state = 254},
  [116] = {.lex_state = 254},
  [117] = {.lex_state = 254},
  [118] = {.lex_state = 254},
  [119] = {.lex_state = 254},
  [120] = {.lex_state = 254},
  [121] = {.lex_state = 254},
  [122] = {.lex_state = 254},
  [123] = {.lex_state = 254},
  [124] = {.lex_state = 254},
  [125] = {.lex_state = 261},
  [126] = {.lex_state = 264},
  [127] = {.lex_state = 261},
  [128] = {.lex_state = 254},
  [129] = {.lex_state = 254},
  [130] = {.lex_state = 254},
  [131] = {.lex_state = 254},
  [132] = {.lex_state = 254},
  [133] = {.lex_state = 254},
  [134] = {.lex_state = 254},
  [135] = {.lex_state = 254},
  [136] = {.lex_state = 254},
  [137] = {.lex_state = 254},
  [138] = {.lex_state = 254},
  [139] = {.lex_state = 254},
  [140] = {.lex_state = 254},
  [141] = {.lex_state = 254},
  [142] = {.lex_state = 254},
  [143] = {.lex_state = 254},
  [144] = {.lex_state = 254},
  [145] = {.lex_state = 254},
  [146] = {.lex_state = 254},
  [147] = {.lex_state = 254},
  [148] = {.lex_state = 254},
  [149] = {.lex_state = 254},
  [150] = {.lex_state = 254},
  [151] = {.lex_state = 254},
  [152] = {.lex_state = 254},
  [153] = {.lex_state = 258},
  [154] = {.lex_state = 258},
  [155] = {.lex_state = 258},
  [156] = {.lex_state = 258},
  [157] = {.lex_state = 258},
  [158] = {.lex_state = 258},
  [159] = {.lex_state = 258},
  [160] = {.lex_state = 258},
  [161] = {.lex_state = 258},
  [162] = {.lex_state = 258},
  [163] = {.lex_state = 258},
  [164] = {.lex_state = 258},
  [165] = {.lex_state = 258},
  [166] = {.lex_state = 258},
  [167] = {.lex_state = 258},
  [168] = {.lex_state = 258},
  [169] = {.lex_state = 258},
  [170] = {.lex_state = 258},
  [171] = {.lex_state = 258},
  [172] = {.lex_state = 258},
  [173] = {.lex_state = 258},
  [174] = {.lex_state = 258},
  [175] = {.lex_state = 258},
  [176] = {.lex_state = 258},
  [177] = {.lex_state = 258},
  [178] = {.lex_state = 258},
  [179] = {.lex_state = 258},
  [180] = {.lex_state = 258},
  [181] = {.lex_state = 258},
  [182] = {.lex_state = 258},
  [183] = {.lex_state = 258},
  [184] = {.lex_state = 258},
  [185] = {.lex_state = 258},
  [186] = {.lex_state = 258},
  [187] = {.lex_state = 258},
  [188] = {.lex_state = 258},
  [189] = {.lex_state = 258},
  [190] = {.lex_state = 258},
  [191] = {.lex_state = 258},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 256},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 256},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 256},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 256},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 256},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 266},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 266},
  [213] = {.lex_state = 257},
  [214] = {.lex_state = 257},
  [215] = {.lex_state = 265},
  [216] = {.lex_state = 265},
  [217] = {.lex_state = 265},
  [218] = {.lex_state = 265},
  [219] = {.lex_state = 265},
  [220] = {.lex_state = 265},
  [221] = {.lex_state = 265},
  [222] = {.lex_state = 265},
  [223] = {.lex_state = 265},
  [224] = {.lex_state = 256},
  [225] = {.lex_state = 265},
  [226] = {.lex_state = 265},
  [227] = {.lex_state = 265},
  [228] = {.lex_state = 265},
  [229] = {.lex_state = 256},
  [230] = {.lex_state = 265},
  [231] = {.lex_state = 265},
  [232] = {.lex_state = 256},
  [233] = {.lex_state = 265},
  [234] = {.lex_state = 265},
  [235] = {.lex_state = 265},
  [236] = {.lex_state = 265},
  [237] = {.lex_state = 265},
  [238] = {.lex_state = 265},
  [239] = {.lex_state = 265},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 265},
  [243] = {.lex_state = 256},
  [244] = {.lex_state = 266},
  [245] = {.lex_state = 266},
  [246] = {.lex_state = 266},
  [247] = {.lex_state = 266},
  [248] = {.lex_state = 257},
  [249] = {.lex_state = 265},
  [250] = {.lex_state = 265},
  [251] = {.lex_state = 265},
  [252] = {.lex_state = 265},
  [253] = {.lex_state = 265},
  [254] = {.lex_state = 265},
  [255] = {.lex_state = 265},
  [256] = {.lex_state = 265},
  [257] = {.lex_state = 265},
  [258] = {.lex_state = 265},
  [259] = {.lex_state = 265},
  [260] = {.lex_state = 265},
  [261] = {.lex_state = 265},
  [262] = {.lex_state = 265},
  [263] = {.lex_state = 265},
  [264] = {.lex_state = 265},
  [265] = {.lex_state = 265},
  [266] = {.lex_state = 265},
  [267] = {.lex_state = 265},
  [268] = {.lex_state = 265},
  [269] = {.lex_state = 265},
  [270] = {.lex_state = 265},
  [271] = {.lex_state = 265},
  [272] = {.lex_state = 265},
  [273] = {.lex_state = 265},
  [274] = {.lex_state = 265},
  [275] = {.lex_state = 265},
  [276] = {.lex_state = 265},
  [277] = {.lex_state = 265},
  [278] = {.lex_state = 265},
  [279] = {.lex_state = 265},
  [280] = {.lex_state = 265},
  [281] = {.lex_state = 265},
  [282] = {.lex_state = 265},
  [283] = {.lex_state = 265},
  [284] = {.lex_state = 265},
  [285] = {.lex_state = 265},
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
  [378] = {.lex_state = 48},
  [379] = {.lex_state = 39},
  [380] = {.lex_state = 39},
  [381] = {.lex_state = 39},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 48},
  [384] = {.lex_state = 41},
  [385] = {.lex_state = 39},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 42},
  [388] = {.lex_state = 12},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 47},
  [392] = {.lex_state = 47},
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
  [429] = {.lex_state = 48},
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
  [450] = {.lex_state = 48},
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
  [484] = {.lex_state = 265},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 31},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 31},
  [491] = {.lex_state = 31},
  [492] = {.lex_state = 31},
  [493] = {.lex_state = 252},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 31},
  [497] = {.lex_state = 31},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 31},
  [500] = {.lex_state = 252},
  [501] = {.lex_state = 31},
  [502] = {.lex_state = 45},
  [503] = {.lex_state = 6},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 31},
  [506] = {.lex_state = 12},
  [507] = {.lex_state = 12},
  [508] = {.lex_state = 31},
  [509] = {.lex_state = 252},
  [510] = {.lex_state = 6},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 31},
  [513] = {.lex_state = 31},
  [514] = {.lex_state = 31},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 31},
  [518] = {.lex_state = 31},
  [519] = {.lex_state = 253},
  [520] = {.lex_state = 253},
  [521] = {.lex_state = 46},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 31},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 253},
  [528] = {.lex_state = 46},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 253},
  [533] = {.lex_state = 253},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 252},
  [537] = {.lex_state = 253},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 31},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 252},
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
  [577] = {.lex_state = 252},
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
    [sym_item] = STATE(57),
    [sym__trivia] = STATE(57),
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
    [aux_sym_source_file_repeat1] = STATE(57),
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
    STATE(66), 1,
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
    STATE(66), 1,
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
    STATE(66), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(66), 1,
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
    STATE(66), 1,
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
    STATE(66), 1,
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
    STATE(66), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(89), 1,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(215), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(218), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(238), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(215), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(218), 1,
      sym_messages,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
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
    STATE(87), 2,
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
    STATE(47), 1,
      sym_context_setting,
    STATE(50), 1,
      sym__unroled_message_initial_line,
    STATE(369), 1,
      sym_directive_key,
    STATE(384), 1,
      sym__thunk_reserved_word,
    STATE(409), 1,
      sym_role,
    STATE(87), 2,
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
    STATE(59), 1,
      sym_context_setting,
    STATE(46), 2,
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
    STATE(61), 1,
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
    STATE(58), 1,
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
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      sym_blank_line,
    ACTIONS(295), 1,
      sym__unroled_message_continuation_text,
    STATE(45), 1,
      aux_sym_unroled_message_repeat1,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(293), 28,
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
  [3341] = 6,
    ACTIONS(268), 1,
      sym_context_keyword,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
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
  [3387] = 6,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym_instruct_keyword,
    STATE(59), 1,
      sym_instruct_setting,
    STATE(44), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(298), 4,
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
  [3433] = 6,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym_blank_line,
    ACTIONS(306), 1,
      sym__unroled_message_continuation_text,
    STATE(45), 1,
      aux_sym_unroled_message_repeat1,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(304), 28,
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
  [3479] = 6,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym_blank_line,
    ACTIONS(314), 1,
      sym__nested_indented_raw_text,
    STATE(43), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(61), 1,
      sym__nested_text_body_line,
    ACTIONS(312), 28,
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
  [3525] = 6,
    ACTIONS(306), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_blank_line,
    STATE(48), 1,
      aux_sym_unroled_message_repeat1,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
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
  [3571] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(324), 25,
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
    ACTIONS(306), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(328), 29,
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
  [3653] = 4,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      sym__unroled_message_continuation_text,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(304), 29,
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
  [3694] = 4,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(332), 25,
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
  [3735] = 17,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      sym_use_keyword,
    ACTIONS(345), 1,
      sym_struct_keyword,
    ACTIONS(348), 1,
      sym_psyche_keyword,
    ACTIONS(351), 1,
      sym_skill_keyword,
    ACTIONS(354), 1,
      sym_service_keyword,
    ACTIONS(357), 1,
      sym_prompt_keyword,
    ACTIONS(360), 1,
      sym_context_keyword,
    ACTIONS(363), 1,
      sym_instruct_keyword,
    ACTIONS(366), 1,
      sym_thunk_keyword,
    ACTIONS(369), 1,
      sym_task_keyword,
    ACTIONS(372), 1,
      sym_chore_keyword,
    ACTIONS(375), 1,
      sym_flow_keyword,
    ACTIONS(336), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(339), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(55), 3,
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
  [3802] = 4,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(380), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(383), 25,
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
  [3843] = 17,
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
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(389), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(55), 3,
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
  [3910] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(54), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(391), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(324), 25,
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
  [3951] = 4,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(393), 4,
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
      sym__unroled_message_continuation_text,
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
      sym__nested_indented_raw_text,
  [4172] = 2,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 30,
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
  [4208] = 5,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      sym_blank_line,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    STATE(67), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(423), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4250] = 5,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      sym_blank_line,
    STATE(70), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(431), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4292] = 6,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(435), 1,
      sym__nested_indented_raw_text,
    STATE(69), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(106), 1,
      sym__nested_text_body_line,
    ACTIONS(312), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4336] = 6,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      sym_blank_line,
    ACTIONS(440), 1,
      sym__nested_indented_raw_text,
    STATE(69), 1,
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
  [4380] = 5,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 1,
      sym_blank_line,
    ACTIONS(450), 1,
      sym_indented_raw_text,
    STATE(70), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(448), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4422] = 4,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
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
  [4461] = 4,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
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
  [4500] = 2,
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
  [4535] = 2,
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
  [4570] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 29,
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
  [4605] = 4,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(455), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(479), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4644] = 2,
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
  [4679] = 4,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_text_body_line,
    ACTIONS(431), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4718] = 2,
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
  [4753] = 4,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(489), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(479), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4792] = 2,
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
  [4827] = 4,
    ACTIONS(425), 1,
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
  [4866] = 2,
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
  [4901] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(455), 4,
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
  [4940] = 4,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(71), 2,
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
  [4979] = 6,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__nested_indented_raw_text,
    STATE(88), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(113), 1,
      sym__nested_text_body_line,
    ACTIONS(312), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5022] = 2,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 29,
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
  [5057] = 6,
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
  [5100] = 5,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym_indented_raw_text,
    STATE(98), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(423), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5141] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 29,
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
  [5176] = 2,
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
  [5211] = 5,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 1,
      sym_blank_line,
    ACTIONS(534), 1,
      sym_indented_raw_text,
    STATE(92), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(448), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5252] = 4,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(93), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(537), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
      sym__implicit_do_raw_text,
  [5291] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 29,
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
  [5326] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 29,
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
  [5361] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 29,
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
  [5396] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 29,
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
  [5431] = 5,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      sym_indented_raw_text,
    ACTIONS(552), 1,
      sym_blank_line,
    STATE(92), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(431), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5472] = 2,
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
  [5506] = 4,
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
  [5544] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5578] = 4,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      sym_indented_raw_text,
    STATE(112), 1,
      sym_text_body_line,
    ACTIONS(431), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5616] = 4,
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
  [5654] = 4,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      sym_indented_raw_text,
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
  [5692] = 2,
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
  [5726] = 2,
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
  [5760] = 2,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5794] = 2,
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
  [5827] = 2,
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
  [5860] = 2,
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
  [5893] = 2,
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
  [5926] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5959] = 2,
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
  [5992] = 2,
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
  [6025] = 2,
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
  [6058] = 2,
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
  [6091] = 2,
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
  [6124] = 2,
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
  [6157] = 2,
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
  [6190] = 2,
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
  [6223] = 2,
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
  [6256] = 2,
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
  [6289] = 2,
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
  [6322] = 2,
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
  [6355] = 2,
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
  [6388] = 2,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [6421] = 2,
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
  [6454] = 2,
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
  [6487] = 2,
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
  [6520] = 2,
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
  [6553] = 2,
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
  [6586] = 2,
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
  [6619] = 2,
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
  [6652] = 2,
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
  [6685] = 2,
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
  [6718] = 2,
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
  [6751] = 2,
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
  [6784] = 2,
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
  [6817] = 2,
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
  [6850] = 2,
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
  [6883] = 2,
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
  [6916] = 2,
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
  [6949] = 2,
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
  [6982] = 2,
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
  [7015] = 2,
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
  [7048] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [7081] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [7114] = 2,
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
  [7147] = 2,
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
  [7180] = 2,
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
  [7213] = 2,
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
  [7246] = 2,
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
  [7279] = 2,
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
  [7311] = 2,
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
  [7343] = 2,
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
  [7375] = 2,
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
  [7407] = 2,
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
  [7439] = 2,
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
  [7471] = 2,
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
  [7503] = 2,
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
  [7535] = 2,
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
  [7567] = 2,
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
  [7599] = 2,
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
  [7631] = 2,
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
  [7663] = 2,
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
  [7695] = 2,
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
  [7727] = 2,
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
  [7759] = 2,
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
  [7791] = 2,
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
  [7823] = 2,
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
  [7855] = 2,
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
  [7887] = 2,
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
  [7919] = 2,
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
  [7951] = 2,
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
  [7983] = 2,
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
  [8015] = 2,
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
  [8047] = 2,
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
  [8079] = 2,
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
  [8111] = 2,
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
  [8143] = 2,
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
  [8175] = 2,
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
  [8207] = 2,
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
  [8239] = 2,
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
  [8271] = 2,
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
  [8303] = 2,
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
  [8335] = 2,
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
  [8367] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [8399] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [8431] = 2,
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
  [8463] = 2,
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
  [8495] = 2,
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
  [8527] = 14,
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
    STATE(89), 1,
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
  [8582] = 10,
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
  [8629] = 14,
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
  [8684] = 10,
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
  [8731] = 14,
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
    STATE(89), 1,
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
  [8786] = 10,
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
  [8833] = 5,
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
  [8870] = 5,
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
  [8907] = 10,
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
  [8954] = 14,
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
  [9009] = 5,
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
  [9046] = 3,
    STATE(203), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(717), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(383), 19,
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
  [9078] = 1,
    ACTIONS(546), 23,
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
  [9104] = 6,
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
  [9140] = 1,
    ACTIONS(542), 23,
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
  [9166] = 1,
    ACTIONS(475), 22,
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
  [9191] = 1,
    ACTIONS(542), 22,
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
  [9216] = 1,
    ACTIONS(546), 22,
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
  [9241] = 7,
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
  [9277] = 3,
    STATE(211), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(743), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(383), 15,
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
  [9305] = 7,
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
  [9341] = 5,
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
  [9372] = 5,
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
  [9403] = 4,
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
  [9431] = 4,
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
  [9459] = 4,
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
  [9487] = 4,
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
  [9515] = 4,
    ACTIONS(784), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(787), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(378), 13,
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
  [9543] = 4,
    ACTIONS(790), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(792), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(223), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(477), 13,
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
  [9571] = 4,
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
  [9599] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
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
  [9627] = 4,
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
  [9655] = 2,
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
  [9679] = 4,
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
  [9707] = 4,
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
  [9735] = 4,
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
  [9763] = 4,
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
  [9791] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9815] = 4,
    ACTIONS(808), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(810), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [9843] = 4,
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
  [9871] = 3,
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
  [9897] = 4,
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
  [9925] = 4,
    ACTIONS(776), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(778), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(219), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(477), 13,
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
  [9953] = 4,
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
  [9981] = 4,
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
  [10009] = 4,
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
  [10037] = 4,
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
  [10065] = 4,
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
  [10093] = 1,
    ACTIONS(542), 19,
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
  [10115] = 1,
    ACTIONS(546), 19,
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
  [10137] = 4,
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
  [10165] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10189] = 2,
    ACTIONS(540), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(542), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10212] = 2,
    ACTIONS(544), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(546), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10235] = 2,
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
  [10258] = 2,
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
  [10281] = 2,
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
  [10304] = 2,
    ACTIONS(546), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(544), 15,
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
  [10326] = 2,
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
  [10348] = 2,
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
  [10370] = 2,
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
  [10392] = 2,
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
  [10414] = 2,
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
  [10436] = 2,
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
  [10458] = 2,
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
  [10480] = 2,
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
  [10502] = 2,
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
  [10524] = 2,
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
  [10546] = 2,
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
  [10568] = 2,
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
  [10590] = 2,
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
  [10612] = 2,
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
  [10634] = 2,
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
  [10656] = 2,
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
  [10678] = 2,
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
  [10700] = 2,
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
  [10722] = 2,
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
  [10744] = 2,
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
  [10766] = 2,
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
  [10788] = 2,
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
  [10810] = 2,
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
  [10832] = 2,
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
  [10854] = 2,
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
  [10876] = 2,
    ACTIONS(542), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(540), 15,
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
  [10898] = 2,
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
  [10920] = 2,
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
  [10942] = 2,
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
  [10964] = 2,
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
  [10986] = 2,
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
  [11008] = 2,
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
  [11030] = 2,
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
  [11052] = 2,
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
  [11074] = 2,
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
  [11096] = 2,
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
  [11118] = 6,
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
  [11143] = 6,
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
  [11168] = 6,
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
  [11193] = 6,
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
  [11218] = 6,
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
  [11243] = 6,
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
  [11268] = 6,
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
  [11293] = 6,
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
  [11318] = 6,
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
  [11343] = 6,
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
  [11368] = 6,
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
  [11393] = 6,
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
  [11418] = 6,
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
  [11443] = 10,
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
  [11476] = 10,
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
  [11509] = 9,
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
  [11539] = 9,
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
  [11569] = 4,
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
  [11587] = 8,
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
  [11613] = 4,
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
  [11631] = 4,
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
  [11649] = 7,
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
  [11673] = 7,
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
  [11697] = 7,
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
  [11721] = 8,
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
  [11747] = 8,
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
  [11773] = 8,
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
  [11799] = 7,
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
  [11823] = 7,
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
  [11847] = 7,
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
  [11871] = 6,
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
  [11892] = 8,
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
  [11917] = 6,
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
  [11938] = 8,
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
  [11963] = 8,
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
  [11988] = 7,
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
  [12011] = 7,
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
  [12034] = 7,
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
  [12057] = 8,
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
  [12082] = 7,
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
  [12105] = 7,
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
  [12128] = 7,
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
  [12151] = 7,
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
  [12174] = 4,
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
  [12191] = 6,
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
  [12212] = 7,
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
  [12235] = 7,
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
    STATE(73), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12258] = 7,
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
  [12281] = 6,
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
  [12302] = 7,
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
  [12325] = 7,
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
  [12348] = 7,
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
  [12371] = 7,
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
  [12394] = 7,
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
  [12417] = 7,
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
  [12440] = 7,
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
  [12463] = 7,
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
  [12486] = 6,
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
  [12507] = 7,
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
  [12530] = 7,
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
  [12553] = 7,
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
  [12576] = 7,
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
  [12599] = 7,
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
  [12622] = 7,
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
  [12645] = 7,
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
  [12668] = 7,
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
  [12691] = 7,
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
  [12714] = 7,
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
  [12737] = 7,
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
  [12760] = 6,
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
  [12781] = 7,
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
  [12804] = 7,
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
  [12827] = 7,
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
  [12850] = 7,
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
  [12873] = 7,
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
  [12896] = 7,
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
  [12919] = 6,
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
  [12940] = 4,
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
  [12957] = 1,
    ACTIONS(1077), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12967] = 1,
    ACTIONS(1079), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12977] = 1,
    ACTIONS(1081), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12987] = 1,
    ACTIONS(1083), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12997] = 1,
    ACTIONS(1085), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13007] = 3,
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
  [13021] = 6,
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
  [13041] = 1,
    ACTIONS(1097), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13051] = 1,
    ACTIONS(1099), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [13060] = 5,
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
  [13077] = 5,
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
  [13094] = 6,
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
  [13113] = 6,
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
  [13132] = 1,
    ACTIONS(1131), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [13141] = 5,
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
  [13157] = 4,
    ACTIONS(1137), 1,
      sym_colon,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13171] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1141), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13185] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1143), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13199] = 4,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(1145), 1,
      sym_blank_line,
    STATE(259), 1,
      sym_text_body,
    STATE(214), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [13213] = 5,
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
  [13229] = 5,
    ACTIONS(1021), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1151), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
    STATE(481), 1,
      sym_text_line,
  [13245] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1153), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13259] = 2,
    ACTIONS(1157), 1,
      sym_flow_times_keyword,
    ACTIONS(1155), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13269] = 3,
    ACTIONS(1159), 1,
      sym_snake_name,
    STATE(426), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13281] = 5,
    ACTIONS(1161), 1,
      sym_blank_line,
    ACTIONS(1163), 1,
      sym__nested_indented_raw_text,
    STATE(49), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(61), 1,
      sym__nested_text_body_line,
    STATE(90), 1,
      sym__nested_text_body,
  [13297] = 5,
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
  [13313] = 5,
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
  [13329] = 3,
    ACTIONS(1173), 1,
      sym_colon,
    STATE(452), 1,
      sym_text_ref,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13341] = 3,
    ACTIONS(1175), 1,
      sym_colon,
    STATE(449), 1,
      sym_text_ref,
    ACTIONS(1055), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13353] = 5,
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
  [13369] = 5,
    ACTIONS(1181), 1,
      sym_blank_line,
    ACTIONS(1183), 1,
      sym__nested_indented_raw_text,
    STATE(68), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(106), 1,
      sym__nested_text_body_line,
    STATE(135), 1,
      sym__nested_text_body,
  [13385] = 3,
    ACTIONS(1159), 1,
      sym_snake_name,
    STATE(501), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13397] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1185), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13411] = 4,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1187), 1,
      sym_colon,
    STATE(539), 1,
      sym_callee,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13425] = 2,
    STATE(536), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13434] = 3,
    ACTIONS(1193), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1191), 2,
      sym_newline,
      sym_inline_comment,
  [13445] = 3,
    ACTIONS(1198), 1,
      sym_comma,
    STATE(403), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1196), 2,
      sym_newline,
      sym_inline_comment,
  [13456] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
    STATE(278), 1,
      sym_job_body,
  [13469] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
    STATE(281), 1,
      sym_job_body,
  [13482] = 3,
    ACTIONS(1198), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1204), 2,
      sym_newline,
      sym_inline_comment,
  [13493] = 1,
    ACTIONS(1206), 4,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_snake_name,
  [13500] = 2,
    ACTIONS(542), 1,
      sym_comment_line,
    ACTIONS(540), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13509] = 2,
    ACTIONS(546), 1,
      sym_comment_line,
    ACTIONS(544), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13518] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    STATE(514), 1,
      sym_par_clause,
    ACTIONS(1208), 2,
      sym_newline,
      sym_inline_comment,
  [13529] = 4,
    ACTIONS(1210), 1,
      sym_rparen,
    ACTIONS(1212), 1,
      sym_snake_name,
    STATE(421), 1,
      sym_param_name,
    STATE(431), 1,
      sym_param,
  [13542] = 2,
    ACTIONS(1214), 1,
      sym_colon,
    ACTIONS(1053), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13551] = 1,
    ACTIONS(1216), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13558] = 4,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1218), 1,
      sym_arrow,
    ACTIONS(1220), 1,
      sym_colon,
    STATE(516), 1,
      sym_params,
  [13571] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(256), 1,
      sym_cap_body,
  [13584] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(252), 1,
      sym_cap_body,
  [13597] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    STATE(539), 1,
      sym_par_clause,
    ACTIONS(1135), 2,
      sym_newline,
      sym_inline_comment,
  [13608] = 1,
    ACTIONS(1222), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [13615] = 4,
    ACTIONS(1121), 1,
      sym_lparen,
    ACTIONS(1224), 1,
      sym_arrow,
    ACTIONS(1226), 1,
      sym_colon,
    STATE(538), 1,
      sym_params,
  [13628] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(254), 1,
      sym_cap_body,
  [13641] = 4,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(197), 1,
      sym_line_end,
    STATE(255), 1,
      sym_cap_body,
  [13654] = 4,
    ACTIONS(1053), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1228), 1,
      sym_newline,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [13667] = 1,
    ACTIONS(1232), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13674] = 3,
    ACTIONS(1234), 1,
      sym_optional_marker,
    ACTIONS(1236), 1,
      sym_colon,
    ACTIONS(1238), 2,
      sym_rparen,
      sym_comma,
  [13685] = 2,
    STATE(509), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13694] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(138), 1,
      sym_line_end,
  [13704] = 1,
    ACTIONS(1240), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [13710] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [13720] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
  [13730] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(163), 1,
      sym_line_end,
  [13740] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(74), 1,
      sym_line_end,
  [13750] = 2,
    ACTIONS(1252), 1,
      sym_colon,
    ACTIONS(1250), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13758] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [13768] = 3,
    ACTIONS(1254), 1,
      sym_rparen,
    ACTIONS(1256), 1,
      sym_comma,
    STATE(464), 1,
      aux_sym_params_repeat1,
  [13778] = 1,
    ACTIONS(1191), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13784] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [13794] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1147), 1,
      sym_colon,
    STATE(505), 1,
      sym_callee,
  [13804] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(159), 1,
      sym_line_end,
  [13814] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
  [13824] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(155), 1,
      sym_line_end,
  [13834] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(35), 1,
      sym_line_end,
  [13844] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(165), 1,
      sym_line_end,
  [13854] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [13864] = 1,
    ACTIONS(1131), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13870] = 3,
    ACTIONS(1266), 1,
      sym_newline,
    ACTIONS(1268), 1,
      sym_inline_comment,
    STATE(318), 1,
      sym_line_end,
  [13880] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13890] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13900] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    ACTIONS(1153), 1,
      sym_colon,
    STATE(600), 1,
      sym_par_clause,
  [13910] = 3,
    ACTIONS(1270), 1,
      sym_colon,
    ACTIONS(1272), 1,
      sym_snake_name,
    STATE(592), 1,
      sym_context_name,
  [13920] = 3,
    ACTIONS(1274), 1,
      sym_newline,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(247), 1,
      sym_line_end,
  [13930] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(167), 1,
      sym_line_end,
  [13940] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
  [13950] = 2,
    ACTIONS(1240), 1,
      sym_colon,
    ACTIONS(1278), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13958] = 3,
    ACTIONS(1280), 1,
      sym_colon,
    ACTIONS(1282), 1,
      sym_snake_name,
    STATE(590), 1,
      sym_instruct_name,
  [13968] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [13978] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1284), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [13988] = 1,
    ACTIONS(1286), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13994] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
  [14004] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(191), 1,
      sym_line_end,
  [14014] = 1,
    ACTIONS(1288), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14020] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
  [14030] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(161), 1,
      sym_line_end,
  [14040] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [14050] = 3,
    ACTIONS(1212), 1,
      sym_snake_name,
    STATE(421), 1,
      sym_param_name,
    STATE(529), 1,
      sym_param,
  [14060] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [14070] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(251), 1,
      sym_line_end,
  [14080] = 3,
    ACTIONS(1256), 1,
      sym_comma,
    ACTIONS(1290), 1,
      sym_rparen,
    STATE(489), 1,
      aux_sym_params_repeat1,
  [14090] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
  [14100] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [14110] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_line_end,
  [14120] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
  [14130] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
  [14140] = 1,
    ACTIONS(1252), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [14146] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [14156] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [14166] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
  [14176] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(36), 1,
      sym_line_end,
  [14186] = 2,
    ACTIONS(1292), 1,
      sym_colon,
    ACTIONS(1294), 2,
      sym_rparen,
      sym_comma,
  [14194] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(174), 1,
      sym_line_end,
  [14204] = 3,
    ACTIONS(1296), 1,
      sym_newline,
    ACTIONS(1298), 1,
      sym_inline_comment,
    STATE(207), 1,
      sym_line_end,
  [14214] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [14224] = 1,
    ACTIONS(1300), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14230] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [14240] = 3,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1248), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [14250] = 3,
    ACTIONS(1274), 1,
      sym_newline,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(246), 1,
      sym_line_end,
  [14260] = 3,
    ACTIONS(1200), 1,
      sym_newline,
    ACTIONS(1202), 1,
      sym_inline_comment,
    STATE(224), 1,
      sym_line_end,
  [14270] = 3,
    ACTIONS(1302), 1,
      sym_pascal_name,
    STATE(561), 1,
      sym_struct_name,
    STATE(564), 1,
      sym_type_name,
  [14280] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(260), 1,
      sym_line_end,
  [14290] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(37), 1,
      sym_line_end,
  [14300] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
  [14310] = 3,
    ACTIONS(1101), 1,
      sym_newline,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(172), 1,
      sym_line_end,
  [14320] = 3,
    ACTIONS(1304), 1,
      sym_rparen,
    ACTIONS(1306), 1,
      sym_comma,
    STATE(489), 1,
      aux_sym_params_repeat1,
  [14330] = 3,
    ACTIONS(1258), 1,
      sym_newline,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
  [14340] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [14350] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [14360] = 3,
    ACTIONS(1309), 1,
      aux_sym_directive_value_token1,
    STATE(463), 1,
      sym_cap_ref,
    STATE(508), 1,
      sym_text_line,
  [14370] = 3,
    ACTIONS(1133), 1,
      sym_colon,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(505), 1,
      sym_callee,
  [14380] = 3,
    ACTIONS(1093), 1,
      sym_flow_par_keyword,
    ACTIONS(1137), 1,
      sym_colon,
    STATE(601), 1,
      sym_par_clause,
  [14390] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [14400] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [14410] = 3,
    ACTIONS(1139), 1,
      sym_snake_name,
    ACTIONS(1311), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [14420] = 3,
    ACTIONS(1262), 1,
      sym_newline,
    ACTIONS(1264), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [14430] = 3,
    ACTIONS(1309), 1,
      aux_sym_directive_value_token1,
    STATE(483), 1,
      sym_property_value,
    STATE(525), 1,
      sym_text_line,
  [14440] = 3,
    ACTIONS(1109), 1,
      sym_newline,
    ACTIONS(1111), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [14450] = 2,
    ACTIONS(1313), 1,
      sym__unroled_message_continuation_text,
    STATE(60), 1,
      sym__unroled_message_continuation_line,
  [14457] = 1,
    ACTIONS(542), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14462] = 1,
    ACTIONS(1315), 2,
      sym_arrow,
      sym_colon,
  [14467] = 1,
    ACTIONS(1208), 2,
      sym_newline,
      sym_inline_comment,
  [14472] = 2,
    ACTIONS(540), 1,
      sym__nested_indented_raw_text,
    ACTIONS(542), 1,
      sym_blank_line,
  [14479] = 2,
    ACTIONS(544), 1,
      sym__nested_indented_raw_text,
    ACTIONS(546), 1,
      sym_blank_line,
  [14486] = 1,
    ACTIONS(1317), 2,
      sym_newline,
      sym_inline_comment,
  [14491] = 2,
    ACTIONS(1319), 1,
      aux_sym_directive_value_token1,
    STATE(430), 1,
      sym_directive_value,
  [14498] = 1,
    ACTIONS(546), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14503] = 1,
    ACTIONS(1321), 2,
      sym_arrow,
      sym_colon,
  [14508] = 1,
    ACTIONS(1323), 2,
      sym_newline,
      sym_inline_comment,
  [14513] = 1,
    ACTIONS(1325), 2,
      sym_newline,
      sym_inline_comment,
  [14518] = 1,
    ACTIONS(1327), 2,
      sym_newline,
      sym_inline_comment,
  [14523] = 2,
    ACTIONS(1329), 1,
      sym_arrow,
    ACTIONS(1331), 1,
      sym_colon,
  [14530] = 2,
    ACTIONS(1333), 1,
      sym_arrow,
    ACTIONS(1335), 1,
      sym_colon,
  [14537] = 1,
    ACTIONS(1337), 2,
      sym_newline,
      sym_inline_comment,
  [14542] = 1,
    ACTIONS(1339), 2,
      sym_newline,
      sym_inline_comment,
  [14547] = 2,
    ACTIONS(1341), 1,
      sym__snake_kebab_name,
    STATE(544), 1,
      sym_job_name,
  [14554] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(554), 1,
      sym_cap_name,
  [14561] = 2,
    ACTIONS(1345), 1,
      sym_indented_raw_text,
    STATE(112), 1,
      sym_text_body_line,
  [14568] = 2,
    ACTIONS(1347), 1,
      sym_arrow,
    ACTIONS(1349), 1,
      sym_colon,
  [14575] = 1,
    ACTIONS(1351), 2,
      sym_optional_marker,
      sym_colon,
  [14580] = 2,
    ACTIONS(1353), 1,
      sym_optional_marker,
    ACTIONS(1355), 1,
      sym_colon,
  [14587] = 1,
    ACTIONS(1357), 2,
      sym_newline,
      sym_inline_comment,
  [14592] = 1,
    ACTIONS(1359), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14597] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(543), 1,
      sym_cap_name,
  [14604] = 2,
    ACTIONS(1361), 1,
      sym_indented_raw_text,
    STATE(101), 1,
      sym_text_body_line,
  [14611] = 1,
    ACTIONS(1363), 2,
      sym_rparen,
      sym_comma,
  [14616] = 1,
    ACTIONS(1365), 2,
      sym_arrow,
      sym_colon,
  [14621] = 2,
    ACTIONS(1139), 1,
      sym_snake_name,
    STATE(432), 1,
      sym_callee,
  [14628] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(560), 1,
      sym_cap_name,
  [14635] = 2,
    ACTIONS(1341), 1,
      sym__snake_kebab_name,
    STATE(542), 1,
      sym_job_name,
  [14642] = 1,
    ACTIONS(1367), 2,
      sym_rparen,
      sym_comma,
  [14647] = 2,
    ACTIONS(1369), 1,
      anon_sym_EQ,
    STATE(500), 1,
      sym_assign_operator,
  [14654] = 2,
    ACTIONS(1319), 1,
      aux_sym_directive_value_token1,
    STATE(477), 1,
      sym_directive_value,
  [14661] = 2,
    ACTIONS(1343), 1,
      sym__snake_kebab_name,
    STATE(583), 1,
      sym_cap_name,
  [14668] = 2,
    ACTIONS(1371), 1,
      sym_arrow,
    ACTIONS(1373), 1,
      sym_colon,
  [14675] = 1,
    ACTIONS(1375), 2,
      sym_newline,
      sym_inline_comment,
  [14680] = 1,
    ACTIONS(1377), 2,
      sym_rparen,
      sym_comma,
  [14685] = 1,
    ACTIONS(1379), 1,
      sym_colon,
  [14689] = 1,
    ACTIONS(1381), 1,
      sym_colon,
  [14693] = 1,
    ACTIONS(1383), 1,
      sym_colon,
  [14697] = 1,
    ACTIONS(1385), 1,
      sym_colon,
  [14701] = 1,
    ACTIONS(1387), 1,
      sym_colon,
  [14705] = 1,
    ACTIONS(1389), 1,
      aux_sym_directive_value_token1,
  [14709] = 1,
    ACTIONS(1391), 1,
      sym_colon,
  [14713] = 1,
    ACTIONS(1393), 1,
      sym_colon,
  [14717] = 1,
    ACTIONS(1395), 1,
      sym_colon,
  [14721] = 1,
    ACTIONS(1397), 1,
      sym_newline,
  [14725] = 1,
    ACTIONS(1399), 1,
      sym_cap_kind,
  [14729] = 1,
    ACTIONS(1401), 1,
      sym_newline,
  [14733] = 1,
    ACTIONS(1403), 1,
      sym_newline,
  [14737] = 1,
    ACTIONS(1405), 1,
      sym_colon,
  [14741] = 1,
    ACTIONS(1407), 1,
      sym_colon,
  [14745] = 1,
    ACTIONS(1409), 1,
      sym_newline,
  [14749] = 1,
    ACTIONS(1411), 1,
      sym_colon,
  [14753] = 1,
    ACTIONS(1413), 1,
      sym_newline,
  [14757] = 1,
    ACTIONS(1415), 1,
      sym_newline,
  [14761] = 1,
    ACTIONS(1417), 1,
      sym_colon,
  [14765] = 1,
    ACTIONS(1419), 1,
      sym_colon,
  [14769] = 1,
    ACTIONS(1421), 1,
      sym_newline,
  [14773] = 1,
    ACTIONS(1423), 1,
      sym_colon,
  [14777] = 1,
    ACTIONS(1425), 1,
      sym_colon,
  [14781] = 1,
    ACTIONS(1427), 1,
      sym_colon,
  [14785] = 1,
    ACTIONS(1429), 1,
      sym_newline,
  [14789] = 1,
    ACTIONS(1431), 1,
      sym_newline,
  [14793] = 1,
    ACTIONS(1433), 1,
      sym_colon,
  [14797] = 1,
    ACTIONS(1435), 1,
      anon_sym_EQ,
  [14801] = 1,
    ACTIONS(1437), 1,
      sym_newline,
  [14805] = 1,
    ACTIONS(1439), 1,
      sym_newline,
  [14809] = 1,
    ACTIONS(1441), 1,
      sym_newline,
  [14813] = 1,
    ACTIONS(1443), 1,
      sym_newline,
  [14817] = 1,
    ACTIONS(1445), 1,
      sym_newline,
  [14821] = 1,
    ACTIONS(1447), 1,
      sym_newline,
  [14825] = 1,
    ACTIONS(1449), 1,
      sym_newline,
  [14829] = 1,
    ACTIONS(1451), 1,
      aux_sym_directive_value_token1,
  [14833] = 1,
    ACTIONS(1453), 1,
      sym_newline,
  [14837] = 1,
    ACTIONS(1455), 1,
      sym_newline,
  [14841] = 1,
    ACTIONS(1457), 1,
      sym_newline,
  [14845] = 1,
    ACTIONS(1459), 1,
      sym_colon,
  [14849] = 1,
    ACTIONS(1461), 1,
      sym_colon,
  [14853] = 1,
    ACTIONS(1463), 1,
      sym_colon,
  [14857] = 1,
    ACTIONS(1465), 1,
      sym_integer_literal,
  [14861] = 1,
    ACTIONS(1467), 1,
      sym_colon,
  [14865] = 1,
    ACTIONS(1469), 1,
      sym_newline,
  [14869] = 1,
    ACTIONS(1471), 1,
      ts_builtin_sym_end,
  [14873] = 1,
    ACTIONS(1473), 1,
      sym_integer_literal,
  [14877] = 1,
    ACTIONS(1475), 1,
      sym_colon,
  [14881] = 1,
    ACTIONS(1477), 1,
      sym_colon,
  [14885] = 1,
    ACTIONS(1479), 1,
      sym_colon,
  [14889] = 1,
    ACTIONS(1481), 1,
      sym_colon,
  [14893] = 1,
    ACTIONS(1483), 1,
      sym_colon,
  [14897] = 1,
    ACTIONS(1485), 1,
      sym_colon,
  [14901] = 1,
    ACTIONS(1487), 1,
      sym_colon,
  [14905] = 1,
    ACTIONS(1489), 1,
      sym_newline,
  [14909] = 1,
    ACTIONS(1491), 1,
      sym_colon,
  [14913] = 1,
    ACTIONS(1493), 1,
      sym_colon,
  [14917] = 1,
    ACTIONS(1495), 1,
      sym_integer_literal,
  [14921] = 1,
    ACTIONS(1497), 1,
      sym_colon,
  [14925] = 1,
    ACTIONS(1499), 1,
      sym_colon,
  [14929] = 1,
    ACTIONS(1501), 1,
      sym_colon,
  [14933] = 1,
    ACTIONS(1503), 1,
      sym_colon,
  [14937] = 1,
    ACTIONS(1505), 1,
      sym_colon,
  [14941] = 1,
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
  [SMALL_STATE(49)] = 3479,
  [SMALL_STATE(50)] = 3525,
  [SMALL_STATE(51)] = 3571,
  [SMALL_STATE(52)] = 3612,
  [SMALL_STATE(53)] = 3653,
  [SMALL_STATE(54)] = 3694,
  [SMALL_STATE(55)] = 3735,
  [SMALL_STATE(56)] = 3802,
  [SMALL_STATE(57)] = 3843,
  [SMALL_STATE(58)] = 3910,
  [SMALL_STATE(59)] = 3951,
  [SMALL_STATE(60)] = 3992,
  [SMALL_STATE(61)] = 4028,
  [SMALL_STATE(62)] = 4064,
  [SMALL_STATE(63)] = 4100,
  [SMALL_STATE(64)] = 4136,
  [SMALL_STATE(65)] = 4172,
  [SMALL_STATE(66)] = 4208,
  [SMALL_STATE(67)] = 4250,
  [SMALL_STATE(68)] = 4292,
  [SMALL_STATE(69)] = 4336,
  [SMALL_STATE(70)] = 4380,
  [SMALL_STATE(71)] = 4422,
  [SMALL_STATE(72)] = 4461,
  [SMALL_STATE(73)] = 4500,
  [SMALL_STATE(74)] = 4535,
  [SMALL_STATE(75)] = 4570,
  [SMALL_STATE(76)] = 4605,
  [SMALL_STATE(77)] = 4644,
  [SMALL_STATE(78)] = 4679,
  [SMALL_STATE(79)] = 4718,
  [SMALL_STATE(80)] = 4753,
  [SMALL_STATE(81)] = 4792,
  [SMALL_STATE(82)] = 4827,
  [SMALL_STATE(83)] = 4866,
  [SMALL_STATE(84)] = 4901,
  [SMALL_STATE(85)] = 4940,
  [SMALL_STATE(86)] = 4979,
  [SMALL_STATE(87)] = 5022,
  [SMALL_STATE(88)] = 5057,
  [SMALL_STATE(89)] = 5100,
  [SMALL_STATE(90)] = 5141,
  [SMALL_STATE(91)] = 5176,
  [SMALL_STATE(92)] = 5211,
  [SMALL_STATE(93)] = 5252,
  [SMALL_STATE(94)] = 5291,
  [SMALL_STATE(95)] = 5326,
  [SMALL_STATE(96)] = 5361,
  [SMALL_STATE(97)] = 5396,
  [SMALL_STATE(98)] = 5431,
  [SMALL_STATE(99)] = 5472,
  [SMALL_STATE(100)] = 5506,
  [SMALL_STATE(101)] = 5544,
  [SMALL_STATE(102)] = 5578,
  [SMALL_STATE(103)] = 5616,
  [SMALL_STATE(104)] = 5654,
  [SMALL_STATE(105)] = 5692,
  [SMALL_STATE(106)] = 5726,
  [SMALL_STATE(107)] = 5760,
  [SMALL_STATE(108)] = 5794,
  [SMALL_STATE(109)] = 5827,
  [SMALL_STATE(110)] = 5860,
  [SMALL_STATE(111)] = 5893,
  [SMALL_STATE(112)] = 5926,
  [SMALL_STATE(113)] = 5959,
  [SMALL_STATE(114)] = 5992,
  [SMALL_STATE(115)] = 6025,
  [SMALL_STATE(116)] = 6058,
  [SMALL_STATE(117)] = 6091,
  [SMALL_STATE(118)] = 6124,
  [SMALL_STATE(119)] = 6157,
  [SMALL_STATE(120)] = 6190,
  [SMALL_STATE(121)] = 6223,
  [SMALL_STATE(122)] = 6256,
  [SMALL_STATE(123)] = 6289,
  [SMALL_STATE(124)] = 6322,
  [SMALL_STATE(125)] = 6355,
  [SMALL_STATE(126)] = 6388,
  [SMALL_STATE(127)] = 6421,
  [SMALL_STATE(128)] = 6454,
  [SMALL_STATE(129)] = 6487,
  [SMALL_STATE(130)] = 6520,
  [SMALL_STATE(131)] = 6553,
  [SMALL_STATE(132)] = 6586,
  [SMALL_STATE(133)] = 6619,
  [SMALL_STATE(134)] = 6652,
  [SMALL_STATE(135)] = 6685,
  [SMALL_STATE(136)] = 6718,
  [SMALL_STATE(137)] = 6751,
  [SMALL_STATE(138)] = 6784,
  [SMALL_STATE(139)] = 6817,
  [SMALL_STATE(140)] = 6850,
  [SMALL_STATE(141)] = 6883,
  [SMALL_STATE(142)] = 6916,
  [SMALL_STATE(143)] = 6949,
  [SMALL_STATE(144)] = 6982,
  [SMALL_STATE(145)] = 7015,
  [SMALL_STATE(146)] = 7048,
  [SMALL_STATE(147)] = 7081,
  [SMALL_STATE(148)] = 7114,
  [SMALL_STATE(149)] = 7147,
  [SMALL_STATE(150)] = 7180,
  [SMALL_STATE(151)] = 7213,
  [SMALL_STATE(152)] = 7246,
  [SMALL_STATE(153)] = 7279,
  [SMALL_STATE(154)] = 7311,
  [SMALL_STATE(155)] = 7343,
  [SMALL_STATE(156)] = 7375,
  [SMALL_STATE(157)] = 7407,
  [SMALL_STATE(158)] = 7439,
  [SMALL_STATE(159)] = 7471,
  [SMALL_STATE(160)] = 7503,
  [SMALL_STATE(161)] = 7535,
  [SMALL_STATE(162)] = 7567,
  [SMALL_STATE(163)] = 7599,
  [SMALL_STATE(164)] = 7631,
  [SMALL_STATE(165)] = 7663,
  [SMALL_STATE(166)] = 7695,
  [SMALL_STATE(167)] = 7727,
  [SMALL_STATE(168)] = 7759,
  [SMALL_STATE(169)] = 7791,
  [SMALL_STATE(170)] = 7823,
  [SMALL_STATE(171)] = 7855,
  [SMALL_STATE(172)] = 7887,
  [SMALL_STATE(173)] = 7919,
  [SMALL_STATE(174)] = 7951,
  [SMALL_STATE(175)] = 7983,
  [SMALL_STATE(176)] = 8015,
  [SMALL_STATE(177)] = 8047,
  [SMALL_STATE(178)] = 8079,
  [SMALL_STATE(179)] = 8111,
  [SMALL_STATE(180)] = 8143,
  [SMALL_STATE(181)] = 8175,
  [SMALL_STATE(182)] = 8207,
  [SMALL_STATE(183)] = 8239,
  [SMALL_STATE(184)] = 8271,
  [SMALL_STATE(185)] = 8303,
  [SMALL_STATE(186)] = 8335,
  [SMALL_STATE(187)] = 8367,
  [SMALL_STATE(188)] = 8399,
  [SMALL_STATE(189)] = 8431,
  [SMALL_STATE(190)] = 8463,
  [SMALL_STATE(191)] = 8495,
  [SMALL_STATE(192)] = 8527,
  [SMALL_STATE(193)] = 8582,
  [SMALL_STATE(194)] = 8629,
  [SMALL_STATE(195)] = 8684,
  [SMALL_STATE(196)] = 8731,
  [SMALL_STATE(197)] = 8786,
  [SMALL_STATE(198)] = 8833,
  [SMALL_STATE(199)] = 8870,
  [SMALL_STATE(200)] = 8907,
  [SMALL_STATE(201)] = 8954,
  [SMALL_STATE(202)] = 9009,
  [SMALL_STATE(203)] = 9046,
  [SMALL_STATE(204)] = 9078,
  [SMALL_STATE(205)] = 9104,
  [SMALL_STATE(206)] = 9140,
  [SMALL_STATE(207)] = 9166,
  [SMALL_STATE(208)] = 9191,
  [SMALL_STATE(209)] = 9216,
  [SMALL_STATE(210)] = 9241,
  [SMALL_STATE(211)] = 9277,
  [SMALL_STATE(212)] = 9305,
  [SMALL_STATE(213)] = 9341,
  [SMALL_STATE(214)] = 9372,
  [SMALL_STATE(215)] = 9403,
  [SMALL_STATE(216)] = 9431,
  [SMALL_STATE(217)] = 9459,
  [SMALL_STATE(218)] = 9487,
  [SMALL_STATE(219)] = 9515,
  [SMALL_STATE(220)] = 9543,
  [SMALL_STATE(221)] = 9571,
  [SMALL_STATE(222)] = 9599,
  [SMALL_STATE(223)] = 9627,
  [SMALL_STATE(224)] = 9655,
  [SMALL_STATE(225)] = 9679,
  [SMALL_STATE(226)] = 9707,
  [SMALL_STATE(227)] = 9735,
  [SMALL_STATE(228)] = 9763,
  [SMALL_STATE(229)] = 9791,
  [SMALL_STATE(230)] = 9815,
  [SMALL_STATE(231)] = 9843,
  [SMALL_STATE(232)] = 9871,
  [SMALL_STATE(233)] = 9897,
  [SMALL_STATE(234)] = 9925,
  [SMALL_STATE(235)] = 9953,
  [SMALL_STATE(236)] = 9981,
  [SMALL_STATE(237)] = 10009,
  [SMALL_STATE(238)] = 10037,
  [SMALL_STATE(239)] = 10065,
  [SMALL_STATE(240)] = 10093,
  [SMALL_STATE(241)] = 10115,
  [SMALL_STATE(242)] = 10137,
  [SMALL_STATE(243)] = 10165,
  [SMALL_STATE(244)] = 10189,
  [SMALL_STATE(245)] = 10212,
  [SMALL_STATE(246)] = 10235,
  [SMALL_STATE(247)] = 10258,
  [SMALL_STATE(248)] = 10281,
  [SMALL_STATE(249)] = 10304,
  [SMALL_STATE(250)] = 10326,
  [SMALL_STATE(251)] = 10348,
  [SMALL_STATE(252)] = 10370,
  [SMALL_STATE(253)] = 10392,
  [SMALL_STATE(254)] = 10414,
  [SMALL_STATE(255)] = 10436,
  [SMALL_STATE(256)] = 10458,
  [SMALL_STATE(257)] = 10480,
  [SMALL_STATE(258)] = 10502,
  [SMALL_STATE(259)] = 10524,
  [SMALL_STATE(260)] = 10546,
  [SMALL_STATE(261)] = 10568,
  [SMALL_STATE(262)] = 10590,
  [SMALL_STATE(263)] = 10612,
  [SMALL_STATE(264)] = 10634,
  [SMALL_STATE(265)] = 10656,
  [SMALL_STATE(266)] = 10678,
  [SMALL_STATE(267)] = 10700,
  [SMALL_STATE(268)] = 10722,
  [SMALL_STATE(269)] = 10744,
  [SMALL_STATE(270)] = 10766,
  [SMALL_STATE(271)] = 10788,
  [SMALL_STATE(272)] = 10810,
  [SMALL_STATE(273)] = 10832,
  [SMALL_STATE(274)] = 10854,
  [SMALL_STATE(275)] = 10876,
  [SMALL_STATE(276)] = 10898,
  [SMALL_STATE(277)] = 10920,
  [SMALL_STATE(278)] = 10942,
  [SMALL_STATE(279)] = 10964,
  [SMALL_STATE(280)] = 10986,
  [SMALL_STATE(281)] = 11008,
  [SMALL_STATE(282)] = 11030,
  [SMALL_STATE(283)] = 11052,
  [SMALL_STATE(284)] = 11074,
  [SMALL_STATE(285)] = 11096,
  [SMALL_STATE(286)] = 11118,
  [SMALL_STATE(287)] = 11143,
  [SMALL_STATE(288)] = 11168,
  [SMALL_STATE(289)] = 11193,
  [SMALL_STATE(290)] = 11218,
  [SMALL_STATE(291)] = 11243,
  [SMALL_STATE(292)] = 11268,
  [SMALL_STATE(293)] = 11293,
  [SMALL_STATE(294)] = 11318,
  [SMALL_STATE(295)] = 11343,
  [SMALL_STATE(296)] = 11368,
  [SMALL_STATE(297)] = 11393,
  [SMALL_STATE(298)] = 11418,
  [SMALL_STATE(299)] = 11443,
  [SMALL_STATE(300)] = 11476,
  [SMALL_STATE(301)] = 11509,
  [SMALL_STATE(302)] = 11539,
  [SMALL_STATE(303)] = 11569,
  [SMALL_STATE(304)] = 11587,
  [SMALL_STATE(305)] = 11613,
  [SMALL_STATE(306)] = 11631,
  [SMALL_STATE(307)] = 11649,
  [SMALL_STATE(308)] = 11673,
  [SMALL_STATE(309)] = 11697,
  [SMALL_STATE(310)] = 11721,
  [SMALL_STATE(311)] = 11747,
  [SMALL_STATE(312)] = 11773,
  [SMALL_STATE(313)] = 11799,
  [SMALL_STATE(314)] = 11823,
  [SMALL_STATE(315)] = 11847,
  [SMALL_STATE(316)] = 11871,
  [SMALL_STATE(317)] = 11892,
  [SMALL_STATE(318)] = 11917,
  [SMALL_STATE(319)] = 11938,
  [SMALL_STATE(320)] = 11963,
  [SMALL_STATE(321)] = 11988,
  [SMALL_STATE(322)] = 12011,
  [SMALL_STATE(323)] = 12034,
  [SMALL_STATE(324)] = 12057,
  [SMALL_STATE(325)] = 12082,
  [SMALL_STATE(326)] = 12105,
  [SMALL_STATE(327)] = 12128,
  [SMALL_STATE(328)] = 12151,
  [SMALL_STATE(329)] = 12174,
  [SMALL_STATE(330)] = 12191,
  [SMALL_STATE(331)] = 12212,
  [SMALL_STATE(332)] = 12235,
  [SMALL_STATE(333)] = 12258,
  [SMALL_STATE(334)] = 12281,
  [SMALL_STATE(335)] = 12302,
  [SMALL_STATE(336)] = 12325,
  [SMALL_STATE(337)] = 12348,
  [SMALL_STATE(338)] = 12371,
  [SMALL_STATE(339)] = 12394,
  [SMALL_STATE(340)] = 12417,
  [SMALL_STATE(341)] = 12440,
  [SMALL_STATE(342)] = 12463,
  [SMALL_STATE(343)] = 12486,
  [SMALL_STATE(344)] = 12507,
  [SMALL_STATE(345)] = 12530,
  [SMALL_STATE(346)] = 12553,
  [SMALL_STATE(347)] = 12576,
  [SMALL_STATE(348)] = 12599,
  [SMALL_STATE(349)] = 12622,
  [SMALL_STATE(350)] = 12645,
  [SMALL_STATE(351)] = 12668,
  [SMALL_STATE(352)] = 12691,
  [SMALL_STATE(353)] = 12714,
  [SMALL_STATE(354)] = 12737,
  [SMALL_STATE(355)] = 12760,
  [SMALL_STATE(356)] = 12781,
  [SMALL_STATE(357)] = 12804,
  [SMALL_STATE(358)] = 12827,
  [SMALL_STATE(359)] = 12850,
  [SMALL_STATE(360)] = 12873,
  [SMALL_STATE(361)] = 12896,
  [SMALL_STATE(362)] = 12919,
  [SMALL_STATE(363)] = 12940,
  [SMALL_STATE(364)] = 12957,
  [SMALL_STATE(365)] = 12967,
  [SMALL_STATE(366)] = 12977,
  [SMALL_STATE(367)] = 12987,
  [SMALL_STATE(368)] = 12997,
  [SMALL_STATE(369)] = 13007,
  [SMALL_STATE(370)] = 13021,
  [SMALL_STATE(371)] = 13041,
  [SMALL_STATE(372)] = 13051,
  [SMALL_STATE(373)] = 13060,
  [SMALL_STATE(374)] = 13077,
  [SMALL_STATE(375)] = 13094,
  [SMALL_STATE(376)] = 13113,
  [SMALL_STATE(377)] = 13132,
  [SMALL_STATE(378)] = 13141,
  [SMALL_STATE(379)] = 13157,
  [SMALL_STATE(380)] = 13171,
  [SMALL_STATE(381)] = 13185,
  [SMALL_STATE(382)] = 13199,
  [SMALL_STATE(383)] = 13213,
  [SMALL_STATE(384)] = 13229,
  [SMALL_STATE(385)] = 13245,
  [SMALL_STATE(386)] = 13259,
  [SMALL_STATE(387)] = 13269,
  [SMALL_STATE(388)] = 13281,
  [SMALL_STATE(389)] = 13297,
  [SMALL_STATE(390)] = 13313,
  [SMALL_STATE(391)] = 13329,
  [SMALL_STATE(392)] = 13341,
  [SMALL_STATE(393)] = 13353,
  [SMALL_STATE(394)] = 13369,
  [SMALL_STATE(395)] = 13385,
  [SMALL_STATE(396)] = 13397,
  [SMALL_STATE(397)] = 13411,
  [SMALL_STATE(398)] = 13425,
  [SMALL_STATE(399)] = 13434,
  [SMALL_STATE(400)] = 13445,
  [SMALL_STATE(401)] = 13456,
  [SMALL_STATE(402)] = 13469,
  [SMALL_STATE(403)] = 13482,
  [SMALL_STATE(404)] = 13493,
  [SMALL_STATE(405)] = 13500,
  [SMALL_STATE(406)] = 13509,
  [SMALL_STATE(407)] = 13518,
  [SMALL_STATE(408)] = 13529,
  [SMALL_STATE(409)] = 13542,
  [SMALL_STATE(410)] = 13551,
  [SMALL_STATE(411)] = 13558,
  [SMALL_STATE(412)] = 13571,
  [SMALL_STATE(413)] = 13584,
  [SMALL_STATE(414)] = 13597,
  [SMALL_STATE(415)] = 13608,
  [SMALL_STATE(416)] = 13615,
  [SMALL_STATE(417)] = 13628,
  [SMALL_STATE(418)] = 13641,
  [SMALL_STATE(419)] = 13654,
  [SMALL_STATE(420)] = 13667,
  [SMALL_STATE(421)] = 13674,
  [SMALL_STATE(422)] = 13685,
  [SMALL_STATE(423)] = 13694,
  [SMALL_STATE(424)] = 13704,
  [SMALL_STATE(425)] = 13710,
  [SMALL_STATE(426)] = 13720,
  [SMALL_STATE(427)] = 13730,
  [SMALL_STATE(428)] = 13740,
  [SMALL_STATE(429)] = 13750,
  [SMALL_STATE(430)] = 13758,
  [SMALL_STATE(431)] = 13768,
  [SMALL_STATE(432)] = 13778,
  [SMALL_STATE(433)] = 13784,
  [SMALL_STATE(434)] = 13794,
  [SMALL_STATE(435)] = 13804,
  [SMALL_STATE(436)] = 13814,
  [SMALL_STATE(437)] = 13824,
  [SMALL_STATE(438)] = 13834,
  [SMALL_STATE(439)] = 13844,
  [SMALL_STATE(440)] = 13854,
  [SMALL_STATE(441)] = 13864,
  [SMALL_STATE(442)] = 13870,
  [SMALL_STATE(443)] = 13880,
  [SMALL_STATE(444)] = 13890,
  [SMALL_STATE(445)] = 13900,
  [SMALL_STATE(446)] = 13910,
  [SMALL_STATE(447)] = 13920,
  [SMALL_STATE(448)] = 13930,
  [SMALL_STATE(449)] = 13940,
  [SMALL_STATE(450)] = 13950,
  [SMALL_STATE(451)] = 13958,
  [SMALL_STATE(452)] = 13968,
  [SMALL_STATE(453)] = 13978,
  [SMALL_STATE(454)] = 13988,
  [SMALL_STATE(455)] = 13994,
  [SMALL_STATE(456)] = 14004,
  [SMALL_STATE(457)] = 14014,
  [SMALL_STATE(458)] = 14020,
  [SMALL_STATE(459)] = 14030,
  [SMALL_STATE(460)] = 14040,
  [SMALL_STATE(461)] = 14050,
  [SMALL_STATE(462)] = 14060,
  [SMALL_STATE(463)] = 14070,
  [SMALL_STATE(464)] = 14080,
  [SMALL_STATE(465)] = 14090,
  [SMALL_STATE(466)] = 14100,
  [SMALL_STATE(467)] = 14110,
  [SMALL_STATE(468)] = 14120,
  [SMALL_STATE(469)] = 14130,
  [SMALL_STATE(470)] = 14140,
  [SMALL_STATE(471)] = 14146,
  [SMALL_STATE(472)] = 14156,
  [SMALL_STATE(473)] = 14166,
  [SMALL_STATE(474)] = 14176,
  [SMALL_STATE(475)] = 14186,
  [SMALL_STATE(476)] = 14194,
  [SMALL_STATE(477)] = 14204,
  [SMALL_STATE(478)] = 14214,
  [SMALL_STATE(479)] = 14224,
  [SMALL_STATE(480)] = 14230,
  [SMALL_STATE(481)] = 14240,
  [SMALL_STATE(482)] = 14250,
  [SMALL_STATE(483)] = 14260,
  [SMALL_STATE(484)] = 14270,
  [SMALL_STATE(485)] = 14280,
  [SMALL_STATE(486)] = 14290,
  [SMALL_STATE(487)] = 14300,
  [SMALL_STATE(488)] = 14310,
  [SMALL_STATE(489)] = 14320,
  [SMALL_STATE(490)] = 14330,
  [SMALL_STATE(491)] = 14340,
  [SMALL_STATE(492)] = 14350,
  [SMALL_STATE(493)] = 14360,
  [SMALL_STATE(494)] = 14370,
  [SMALL_STATE(495)] = 14380,
  [SMALL_STATE(496)] = 14390,
  [SMALL_STATE(497)] = 14400,
  [SMALL_STATE(498)] = 14410,
  [SMALL_STATE(499)] = 14420,
  [SMALL_STATE(500)] = 14430,
  [SMALL_STATE(501)] = 14440,
  [SMALL_STATE(502)] = 14450,
  [SMALL_STATE(503)] = 14457,
  [SMALL_STATE(504)] = 14462,
  [SMALL_STATE(505)] = 14467,
  [SMALL_STATE(506)] = 14472,
  [SMALL_STATE(507)] = 14479,
  [SMALL_STATE(508)] = 14486,
  [SMALL_STATE(509)] = 14491,
  [SMALL_STATE(510)] = 14498,
  [SMALL_STATE(511)] = 14503,
  [SMALL_STATE(512)] = 14508,
  [SMALL_STATE(513)] = 14513,
  [SMALL_STATE(514)] = 14518,
  [SMALL_STATE(515)] = 14523,
  [SMALL_STATE(516)] = 14530,
  [SMALL_STATE(517)] = 14537,
  [SMALL_STATE(518)] = 14542,
  [SMALL_STATE(519)] = 14547,
  [SMALL_STATE(520)] = 14554,
  [SMALL_STATE(521)] = 14561,
  [SMALL_STATE(522)] = 14568,
  [SMALL_STATE(523)] = 14575,
  [SMALL_STATE(524)] = 14580,
  [SMALL_STATE(525)] = 14587,
  [SMALL_STATE(526)] = 14592,
  [SMALL_STATE(527)] = 14597,
  [SMALL_STATE(528)] = 14604,
  [SMALL_STATE(529)] = 14611,
  [SMALL_STATE(530)] = 14616,
  [SMALL_STATE(531)] = 14621,
  [SMALL_STATE(532)] = 14628,
  [SMALL_STATE(533)] = 14635,
  [SMALL_STATE(534)] = 14642,
  [SMALL_STATE(535)] = 14647,
  [SMALL_STATE(536)] = 14654,
  [SMALL_STATE(537)] = 14661,
  [SMALL_STATE(538)] = 14668,
  [SMALL_STATE(539)] = 14675,
  [SMALL_STATE(540)] = 14680,
  [SMALL_STATE(541)] = 14685,
  [SMALL_STATE(542)] = 14689,
  [SMALL_STATE(543)] = 14693,
  [SMALL_STATE(544)] = 14697,
  [SMALL_STATE(545)] = 14701,
  [SMALL_STATE(546)] = 14705,
  [SMALL_STATE(547)] = 14709,
  [SMALL_STATE(548)] = 14713,
  [SMALL_STATE(549)] = 14717,
  [SMALL_STATE(550)] = 14721,
  [SMALL_STATE(551)] = 14725,
  [SMALL_STATE(552)] = 14729,
  [SMALL_STATE(553)] = 14733,
  [SMALL_STATE(554)] = 14737,
  [SMALL_STATE(555)] = 14741,
  [SMALL_STATE(556)] = 14745,
  [SMALL_STATE(557)] = 14749,
  [SMALL_STATE(558)] = 14753,
  [SMALL_STATE(559)] = 14757,
  [SMALL_STATE(560)] = 14761,
  [SMALL_STATE(561)] = 14765,
  [SMALL_STATE(562)] = 14769,
  [SMALL_STATE(563)] = 14773,
  [SMALL_STATE(564)] = 14777,
  [SMALL_STATE(565)] = 14781,
  [SMALL_STATE(566)] = 14785,
  [SMALL_STATE(567)] = 14789,
  [SMALL_STATE(568)] = 14793,
  [SMALL_STATE(569)] = 14797,
  [SMALL_STATE(570)] = 14801,
  [SMALL_STATE(571)] = 14805,
  [SMALL_STATE(572)] = 14809,
  [SMALL_STATE(573)] = 14813,
  [SMALL_STATE(574)] = 14817,
  [SMALL_STATE(575)] = 14821,
  [SMALL_STATE(576)] = 14825,
  [SMALL_STATE(577)] = 14829,
  [SMALL_STATE(578)] = 14833,
  [SMALL_STATE(579)] = 14837,
  [SMALL_STATE(580)] = 14841,
  [SMALL_STATE(581)] = 14845,
  [SMALL_STATE(582)] = 14849,
  [SMALL_STATE(583)] = 14853,
  [SMALL_STATE(584)] = 14857,
  [SMALL_STATE(585)] = 14861,
  [SMALL_STATE(586)] = 14865,
  [SMALL_STATE(587)] = 14869,
  [SMALL_STATE(588)] = 14873,
  [SMALL_STATE(589)] = 14877,
  [SMALL_STATE(590)] = 14881,
  [SMALL_STATE(591)] = 14885,
  [SMALL_STATE(592)] = 14889,
  [SMALL_STATE(593)] = 14893,
  [SMALL_STATE(594)] = 14897,
  [SMALL_STATE(595)] = 14901,
  [SMALL_STATE(596)] = 14905,
  [SMALL_STATE(597)] = 14909,
  [SMALL_STATE(598)] = 14913,
  [SMALL_STATE(599)] = 14917,
  [SMALL_STATE(600)] = 14921,
  [SMALL_STATE(601)] = 14925,
  [SMALL_STATE(602)] = 14929,
  [SMALL_STATE(603)] = 14933,
  [SMALL_STATE(604)] = 14937,
  [SMALL_STATE(605)] = 14941,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
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
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
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
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(570),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
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
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
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
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
