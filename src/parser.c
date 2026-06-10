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
#define STATE_COUNT 602
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 48,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 47,
  [71] = 66,
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
  [84] = 48,
  [85] = 85,
  [86] = 47,
  [87] = 87,
  [88] = 67,
  [89] = 89,
  [90] = 90,
  [91] = 58,
  [92] = 92,
  [93] = 93,
  [94] = 68,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 78,
  [99] = 99,
  [100] = 100,
  [101] = 63,
  [102] = 81,
  [103] = 103,
  [104] = 97,
  [105] = 65,
  [106] = 106,
  [107] = 103,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 99,
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
  [126] = 93,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 63,
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
  [141] = 65,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 72,
  [147] = 95,
  [148] = 75,
  [149] = 92,
  [150] = 150,
  [151] = 75,
  [152] = 72,
  [153] = 112,
  [154] = 128,
  [155] = 145,
  [156] = 110,
  [157] = 113,
  [158] = 129,
  [159] = 116,
  [160] = 117,
  [161] = 131,
  [162] = 118,
  [163] = 132,
  [164] = 119,
  [165] = 120,
  [166] = 114,
  [167] = 144,
  [168] = 133,
  [169] = 134,
  [170] = 95,
  [171] = 115,
  [172] = 135,
  [173] = 136,
  [174] = 122,
  [175] = 137,
  [176] = 138,
  [177] = 139,
  [178] = 123,
  [179] = 140,
  [180] = 124,
  [181] = 92,
  [182] = 93,
  [183] = 143,
  [184] = 106,
  [185] = 125,
  [186] = 150,
  [187] = 127,
  [188] = 142,
  [189] = 121,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 41,
  [195] = 195,
  [196] = 40,
  [197] = 39,
  [198] = 198,
  [199] = 191,
  [200] = 193,
  [201] = 58,
  [202] = 202,
  [203] = 93,
  [204] = 92,
  [205] = 83,
  [206] = 92,
  [207] = 93,
  [208] = 208,
  [209] = 58,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 73,
  [216] = 216,
  [217] = 217,
  [218] = 85,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 92,
  [224] = 93,
  [225] = 225,
  [226] = 226,
  [227] = 76,
  [228] = 228,
  [229] = 79,
  [230] = 82,
  [231] = 96,
  [232] = 232,
  [233] = 233,
  [234] = 58,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 92,
  [239] = 93,
  [240] = 240,
  [241] = 241,
  [242] = 93,
  [243] = 100,
  [244] = 244,
  [245] = 245,
  [246] = 92,
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
  [272] = 109,
  [273] = 273,
  [274] = 274,
  [275] = 92,
  [276] = 93,
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
  [297] = 293,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 307,
  [309] = 305,
  [310] = 302,
  [311] = 303,
  [312] = 312,
  [313] = 312,
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
  [329] = 314,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 324,
  [336] = 336,
  [337] = 337,
  [338] = 331,
  [339] = 334,
  [340] = 315,
  [341] = 316,
  [342] = 317,
  [343] = 318,
  [344] = 344,
  [345] = 327,
  [346] = 336,
  [347] = 347,
  [348] = 319,
  [349] = 322,
  [350] = 326,
  [351] = 330,
  [352] = 352,
  [353] = 352,
  [354] = 347,
  [355] = 337,
  [356] = 323,
  [357] = 344,
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
  [370] = 369,
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
  [382] = 376,
  [383] = 383,
  [384] = 384,
  [385] = 376,
  [386] = 384,
  [387] = 378,
  [388] = 377,
  [389] = 380,
  [390] = 374,
  [391] = 379,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 92,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 93,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
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
  [418] = 395,
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
  [435] = 427,
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
  [447] = 368,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 421,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 452,
  [462] = 419,
  [463] = 463,
  [464] = 464,
  [465] = 445,
  [466] = 448,
  [467] = 449,
  [468] = 468,
  [469] = 469,
  [470] = 455,
  [471] = 459,
  [472] = 464,
  [473] = 473,
  [474] = 468,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 420,
  [479] = 424,
  [480] = 480,
  [481] = 476,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 424,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 457,
  [492] = 492,
  [493] = 368,
  [494] = 473,
  [495] = 437,
  [496] = 444,
  [497] = 469,
  [498] = 498,
  [499] = 92,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 92,
  [508] = 93,
  [509] = 509,
  [510] = 93,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 511,
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
  [529] = 526,
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
  [555] = 542,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 551,
  [560] = 560,
  [561] = 557,
  [562] = 557,
  [563] = 551,
  [564] = 564,
  [565] = 565,
  [566] = 542,
  [567] = 557,
  [568] = 557,
  [569] = 557,
  [570] = 557,
  [571] = 557,
  [572] = 557,
  [573] = 573,
  [574] = 557,
  [575] = 557,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 550,
  [586] = 580,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 565,
  [591] = 591,
  [592] = 592,
  [593] = 584,
  [594] = 594,
  [595] = 544,
  [596] = 594,
  [597] = 597,
  [598] = 597,
  [599] = 579,
  [600] = 600,
  [601] = 557,
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
        '+', 48,
        ',', 369,
        '-', 49,
        ':', 366,
        '=', 290,
        '?', 364,
        'B', 385,
        'J', 387,
        'N', 390,
        'P', 371,
        'T', 375,
        '[', 51,
        'a', 205,
        'c', 115,
        'd', 85,
        'e', 52,
        'f', 147,
        'h', 57,
        'i', 165,
        'k', 97,
        'l', 120,
        'm', 175,
        'n', 183,
        'p', 53,
        'r', 59,
        's', 86,
        't', 55,
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(59);
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
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(860);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
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
        '\t', 11,
        ' ', 11,
      );
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(465);
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
      if (lookahead == '-') ADVANCE(50);
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
        '[', 51,
        'l', 120,
        'p', 61,
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
        'l', 412,
        'p', 395,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        ':', 366,
        'p', 395,
        't', 429,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
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
        't', 429,
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
        'u', 307,
        '\t', 298,
        '\f', 298,
        ' ', 298,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        'd', 406,
        'n', 431,
        '\t', 300,
        '\f', 300,
        ' ', 300,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(60);
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
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(291);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(365);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(365);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
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
      if (lookahead == 'e') ADVANCE(69);
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
      if (lookahead == 'e') ADVANCE(62);
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
      if (lookahead == 'f') ADVANCE(58);
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
      if (lookahead == 'i') ADVANCE(73);
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
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(76);
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
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(82);
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
      if (lookahead == 'n') ADVANCE(81);
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
      if (lookahead == 'o') ADVANCE(83);
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
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(72);
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
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(79);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(56);
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
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(56);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(56);
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
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(54);
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
        't', 54,
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
        'l', 412,
        'p', 395,
        '\t', 294,
        '\f', 294,
        ' ', 294,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
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
        'p', 395,
        't', 429,
        '\t', 295,
        '\f', 295,
        ' ', 295,
      );
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
        't', 429,
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
        'u', 307,
        '\t', 298,
        '\f', 298,
        ' ', 298,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 268,
        '\r', 30,
        '#', 273,
        'd', 406,
        'n', 431,
        '\t', 300,
        '\f', 300,
        ' ', 300,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
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
  [17] = {.lex_state = 254},
  [18] = {.lex_state = 2},
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
  [42] = {.lex_state = 259},
  [43] = {.lex_state = 259},
  [44] = {.lex_state = 255},
  [45] = {.lex_state = 255},
  [46] = {.lex_state = 255},
  [47] = {.lex_state = 263},
  [48] = {.lex_state = 263},
  [49] = {.lex_state = 259},
  [50] = {.lex_state = 255},
  [51] = {.lex_state = 255},
  [52] = {.lex_state = 255},
  [53] = {.lex_state = 259},
  [54] = {.lex_state = 255},
  [55] = {.lex_state = 259},
  [56] = {.lex_state = 265},
  [57] = {.lex_state = 265},
  [58] = {.lex_state = 255},
  [59] = {.lex_state = 255},
  [60] = {.lex_state = 262},
  [61] = {.lex_state = 259},
  [62] = {.lex_state = 259},
  [63] = {.lex_state = 263},
  [64] = {.lex_state = 259},
  [65] = {.lex_state = 263},
  [66] = {.lex_state = 260},
  [67] = {.lex_state = 260},
  [68] = {.lex_state = 260},
  [69] = {.lex_state = 259},
  [70] = {.lex_state = 262},
  [71] = {.lex_state = 261},
  [72] = {.lex_state = 255},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 255},
  [75] = {.lex_state = 255},
  [76] = {.lex_state = 254},
  [77] = {.lex_state = 255},
  [78] = {.lex_state = 260},
  [79] = {.lex_state = 254},
  [80] = {.lex_state = 255},
  [81] = {.lex_state = 260},
  [82] = {.lex_state = 254},
  [83] = {.lex_state = 255},
  [84] = {.lex_state = 264},
  [85] = {.lex_state = 254},
  [86] = {.lex_state = 264},
  [87] = {.lex_state = 255},
  [88] = {.lex_state = 261},
  [89] = {.lex_state = 255},
  [90] = {.lex_state = 255},
  [91] = {.lex_state = 254},
  [92] = {.lex_state = 255},
  [93] = {.lex_state = 255},
  [94] = {.lex_state = 261},
  [95] = {.lex_state = 255},
  [96] = {.lex_state = 254},
  [97] = {.lex_state = 254},
  [98] = {.lex_state = 261},
  [99] = {.lex_state = 260},
  [100] = {.lex_state = 260},
  [101] = {.lex_state = 262},
  [102] = {.lex_state = 261},
  [103] = {.lex_state = 260},
  [104] = {.lex_state = 254},
  [105] = {.lex_state = 262},
  [106] = {.lex_state = 254},
  [107] = {.lex_state = 261},
  [108] = {.lex_state = 261},
  [109] = {.lex_state = 254},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 261},
  [112] = {.lex_state = 254},
  [113] = {.lex_state = 254},
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
  [125] = {.lex_state = 254},
  [126] = {.lex_state = 254},
  [127] = {.lex_state = 254},
  [128] = {.lex_state = 254},
  [129] = {.lex_state = 254},
  [130] = {.lex_state = 264},
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
  [141] = {.lex_state = 264},
  [142] = {.lex_state = 254},
  [143] = {.lex_state = 254},
  [144] = {.lex_state = 254},
  [145] = {.lex_state = 254},
  [146] = {.lex_state = 254},
  [147] = {.lex_state = 254},
  [148] = {.lex_state = 254},
  [149] = {.lex_state = 254},
  [150] = {.lex_state = 254},
  [151] = {.lex_state = 258},
  [152] = {.lex_state = 258},
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
  [190] = {.lex_state = 256},
  [191] = {.lex_state = 43},
  [192] = {.lex_state = 256},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 256},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 256},
  [199] = {.lex_state = 43},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 256},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 266},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 266},
  [211] = {.lex_state = 257},
  [212] = {.lex_state = 257},
  [213] = {.lex_state = 265},
  [214] = {.lex_state = 265},
  [215] = {.lex_state = 265},
  [216] = {.lex_state = 265},
  [217] = {.lex_state = 256},
  [218] = {.lex_state = 265},
  [219] = {.lex_state = 265},
  [220] = {.lex_state = 256},
  [221] = {.lex_state = 265},
  [222] = {.lex_state = 265},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 265},
  [226] = {.lex_state = 265},
  [227] = {.lex_state = 265},
  [228] = {.lex_state = 265},
  [229] = {.lex_state = 265},
  [230] = {.lex_state = 265},
  [231] = {.lex_state = 265},
  [232] = {.lex_state = 265},
  [233] = {.lex_state = 265},
  [234] = {.lex_state = 265},
  [235] = {.lex_state = 265},
  [236] = {.lex_state = 265},
  [237] = {.lex_state = 265},
  [238] = {.lex_state = 256},
  [239] = {.lex_state = 256},
  [240] = {.lex_state = 265},
  [241] = {.lex_state = 265},
  [242] = {.lex_state = 266},
  [243] = {.lex_state = 257},
  [244] = {.lex_state = 266},
  [245] = {.lex_state = 266},
  [246] = {.lex_state = 266},
  [247] = {.lex_state = 265},
  [248] = {.lex_state = 265},
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
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 33},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 33},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 34},
  [300] = {.lex_state = 34},
  [301] = {.lex_state = 31},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 35},
  [304] = {.lex_state = 31},
  [305] = {.lex_state = 41},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 41},
  [308] = {.lex_state = 41},
  [309] = {.lex_state = 41},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 35},
  [312] = {.lex_state = 35},
  [313] = {.lex_state = 35},
  [314] = {.lex_state = 41},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 20},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 37},
  [325] = {.lex_state = 41},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 41},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 41},
  [332] = {.lex_state = 41},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 41},
  [335] = {.lex_state = 37},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 41},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 41},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 41},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 41},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 41},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 41},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 31},
  [360] = {.lex_state = 31},
  [361] = {.lex_state = 31},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 32},
  [364] = {.lex_state = 31},
  [365] = {.lex_state = 40},
  [366] = {.lex_state = 31},
  [367] = {.lex_state = 31},
  [368] = {.lex_state = 32},
  [369] = {.lex_state = 31},
  [370] = {.lex_state = 31},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 20},
  [373] = {.lex_state = 31},
  [374] = {.lex_state = 47},
  [375] = {.lex_state = 41},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 38},
  [378] = {.lex_state = 41},
  [379] = {.lex_state = 38},
  [380] = {.lex_state = 38},
  [381] = {.lex_state = 31},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 12},
  [384] = {.lex_state = 42},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 42},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 38},
  [389] = {.lex_state = 38},
  [390] = {.lex_state = 47},
  [391] = {.lex_state = 38},
  [392] = {.lex_state = 38},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 31},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 31},
  [397] = {.lex_state = 31},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 31},
  [400] = {.lex_state = 84},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 20},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 31},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 31},
  [408] = {.lex_state = 39},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 31},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 84},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 39},
  [415] = {.lex_state = 31},
  [416] = {.lex_state = 31},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 31},
  [421] = {.lex_state = 31},
  [422] = {.lex_state = 31},
  [423] = {.lex_state = 31},
  [424] = {.lex_state = 31},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 31},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 20},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 31},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 47},
  [436] = {.lex_state = 31},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 31},
  [440] = {.lex_state = 31},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 31},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 31},
  [447] = {.lex_state = 41},
  [448] = {.lex_state = 31},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 31},
  [453] = {.lex_state = 31},
  [454] = {.lex_state = 31},
  [455] = {.lex_state = 31},
  [456] = {.lex_state = 47},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 31},
  [459] = {.lex_state = 31},
  [460] = {.lex_state = 31},
  [461] = {.lex_state = 31},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 31},
  [464] = {.lex_state = 31},
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
  [475] = {.lex_state = 31},
  [476] = {.lex_state = 31},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 31},
  [479] = {.lex_state = 31},
  [480] = {.lex_state = 265},
  [481] = {.lex_state = 31},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 31},
  [484] = {.lex_state = 31},
  [485] = {.lex_state = 31},
  [486] = {.lex_state = 31},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 31},
  [489] = {.lex_state = 252},
  [490] = {.lex_state = 252},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 31},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 31},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 31},
  [497] = {.lex_state = 31},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 12},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 31},
  [502] = {.lex_state = 31},
  [503] = {.lex_state = 253},
  [504] = {.lex_state = 45},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 9},
  [508] = {.lex_state = 9},
  [509] = {.lex_state = 31},
  [510] = {.lex_state = 12},
  [511] = {.lex_state = 46},
  [512] = {.lex_state = 253},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 31},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 46},
  [518] = {.lex_state = 31},
  [519] = {.lex_state = 31},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 31},
  [524] = {.lex_state = 253},
  [525] = {.lex_state = 253},
  [526] = {.lex_state = 252},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 253},
  [529] = {.lex_state = 252},
  [530] = {.lex_state = 253},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 31},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 31},
  [537] = {.lex_state = 252},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 31},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 31},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 31},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 252},
  [555] = {.lex_state = 31},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 31},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 31},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 31},
  [562] = {.lex_state = 31},
  [563] = {.lex_state = 31},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 31},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 31},
  [568] = {.lex_state = 31},
  [569] = {.lex_state = 31},
  [570] = {.lex_state = 31},
  [571] = {.lex_state = 31},
  [572] = {.lex_state = 31},
  [573] = {.lex_state = 31},
  [574] = {.lex_state = 31},
  [575] = {.lex_state = 31},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 31},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 31},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 31},
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
    [sym_source_file] = STATE(547),
    [sym_item] = STATE(57),
    [sym__trivia] = STATE(57),
    [sym_use] = STATE(265),
    [sym_struct] = STATE(265),
    [sym_psyche] = STATE(265),
    [sym_skill] = STATE(265),
    [sym_service] = STATE(265),
    [sym_prompt] = STATE(265),
    [sym_task] = STATE(265),
    [sym_chore] = STATE(265),
    [sym_instruct] = STATE(265),
    [sym_context] = STATE(265),
    [sym_thunk] = STATE(265),
    [sym_flow] = STATE(265),
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
    STATE(104), 1,
      sym_flow_body,
    STATE(145), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym_directive,
    STATE(200), 1,
      sym__directives,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(73), 2,
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
    STATE(16), 13,
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
    STATE(97), 1,
      sym_flow_body,
    STATE(179), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym_directive,
    STATE(200), 1,
      sym__directives,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(73), 2,
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
    STATE(16), 13,
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
    STATE(97), 1,
      sym_flow_body,
    STATE(155), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym_directive,
    STATE(200), 1,
      sym__directives,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(73), 2,
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
    STATE(16), 13,
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
    STATE(104), 1,
      sym_flow_body,
    STATE(140), 1,
      sym_repeat_body,
    STATE(194), 1,
      sym_directive,
    STATE(200), 1,
      sym__directives,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(18), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(73), 2,
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
    STATE(16), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(250), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(260), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(261), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(251), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(273), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(249), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(248), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(193), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(266), 1,
      sym_flow_body,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(14), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(215), 2,
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
    STATE(19), 13,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(194), 1,
      sym_directive,
    STATE(199), 1,
      sym__directives,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(201), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(229), 2,
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
    STATE(19), 13,
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
      sym__implicit_do_raw_text,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(378), 1,
      sym__flow_reserved_word,
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
  [1270] = 16,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__implicit_do_text_body_line,
    STATE(378), 1,
      sym__flow_reserved_word,
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
    STATE(17), 15,
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
  [1348] = 16,
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
    STATE(378), 1,
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
    STATE(191), 1,
      sym__directives,
    STATE(194), 1,
      sym_directive,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(395), 1,
      sym_directive_key,
    STATE(79), 2,
      sym_statements,
      sym__pass_statement,
    STATE(201), 2,
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
    STATE(16), 13,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(387), 1,
      sym__flow_reserved_word,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(387), 1,
      sym__flow_reserved_word,
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
    STATE(21), 15,
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
      sym__implicit_do_raw_text,
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(387), 1,
      sym__flow_reserved_word,
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
    STATE(21), 15,
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
    STATE(24), 1,
      sym_settings,
    STATE(27), 1,
      sym_message,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(225), 1,
      sym_messages,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(213), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(375), 2,
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
    STATE(26), 1,
      sym_settings,
    STATE(27), 1,
      sym_message,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(235), 1,
      sym_messages,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(375), 2,
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
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_message,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(235), 1,
      sym_messages,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(236), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(375), 2,
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
  [1978] = 14,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    STATE(27), 1,
      sym_message,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(225), 1,
      sym_messages,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(213), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(375), 2,
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
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_message,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(214), 1,
      sym_messages,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(240), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(375), 2,
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
  [2116] = 12,
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(375), 2,
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
    ACTIONS(187), 1,
      sym_indented_raw_text,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(375), 2,
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
    STATE(29), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(209), 4,
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
    ACTIONS(211), 10,
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
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_indented_raw_text,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(375), 2,
      sym_directive_key,
      sym__thunk_reserved_word,
    ACTIONS(221), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(226), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(29), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(215), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(218), 8,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(282), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(263), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(281), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(280), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(267), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(253), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(254), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(264), 1,
      sym_thunk_body,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(38), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(221), 2,
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
    STATE(24), 1,
      sym_settings,
    STATE(27), 1,
      sym_message,
    STATE(41), 1,
      sym_directive,
    STATE(42), 1,
      sym__unroled_message_initial_line,
    STATE(46), 1,
      sym_context_setting,
    STATE(50), 1,
      sym_instruct_setting,
    STATE(363), 1,
      sym_directive_key,
    STATE(375), 1,
      sym__thunk_reserved_word,
    STATE(408), 1,
      sym_role,
    STATE(90), 2,
      sym_unroled_message,
      sym_invalid_thunk_reserved_message,
    STATE(209), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(225), 2,
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
    STATE(418), 1,
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
    STATE(418), 1,
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
    STATE(418), 1,
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
    ACTIONS(264), 1,
      sym_blank_line,
    ACTIONS(268), 1,
      sym__unroled_message_continuation_text,
    STATE(49), 1,
      aux_sym_unroled_message_repeat1,
    STATE(61), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(266), 28,
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
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      sym_blank_line,
    ACTIONS(277), 1,
      sym__unroled_message_continuation_text,
    STATE(43), 1,
      aux_sym_unroled_message_repeat1,
    STATE(61), 1,
      sym__unroled_message_continuation_line,
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
    STATE(51), 1,
      sym_instruct_setting,
    STATE(58), 2,
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
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      sym_context_keyword,
    STATE(51), 1,
      sym_context_setting,
    STATE(58), 2,
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
    ACTIONS(286), 1,
      sym_instruct_keyword,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_instruct_setting,
    STATE(44), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(292), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(294), 24,
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
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      sym_blank_line,
    ACTIONS(303), 1,
      sym__nested_indented_raw_text,
    STATE(47), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(63), 1,
      sym__nested_text_body_line,
    ACTIONS(301), 28,
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
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      sym_blank_line,
    ACTIONS(312), 1,
      sym__nested_indented_raw_text,
    STATE(47), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(63), 1,
      sym__nested_text_body_line,
    ACTIONS(310), 28,
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
    ACTIONS(268), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      sym_blank_line,
    STATE(43), 1,
      aux_sym_unroled_message_repeat1,
    STATE(61), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(318), 28,
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
    ACTIONS(288), 1,
      sym_context_keyword,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_context_setting,
    STATE(45), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(320), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(294), 24,
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
    STATE(59), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(324), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(326), 25,
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
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(326), 25,
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
    ACTIONS(268), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(330), 29,
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
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(332), 4,
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
  [3735] = 4,
    ACTIONS(268), 1,
      sym__unroled_message_continuation_text,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(318), 29,
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
  [3776] = 17,
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
    STATE(56), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(265), 12,
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
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(382), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(56), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(265), 12,
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
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(386), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(389), 25,
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
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(282), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(393), 25,
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
  [3992] = 6,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__nested_indented_raw_text,
    STATE(70), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(101), 1,
      sym__nested_text_body_line,
    ACTIONS(310), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4036] = 2,
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
      sym__unroled_message_continuation_text,
  [4072] = 2,
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
  [4108] = 2,
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
  [4144] = 2,
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
  [4180] = 2,
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
      sym__nested_indented_raw_text,
  [4216] = 5,
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
  [4258] = 5,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      sym_blank_line,
    STATE(68), 2,
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
  [4300] = 5,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 1,
      sym_blank_line,
    ACTIONS(440), 1,
      sym_indented_raw_text,
    STATE(68), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(438), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4342] = 2,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 30,
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
  [4378] = 6,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_blank_line,
    ACTIONS(450), 1,
      sym__nested_indented_raw_text,
    STATE(70), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(101), 1,
      sym__nested_text_body_line,
    ACTIONS(301), 26,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4422] = 5,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 1,
      sym_blank_line,
    ACTIONS(455), 1,
      sym_indented_raw_text,
    STATE(88), 2,
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
  [4463] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 29,
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
  [4498] = 4,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(463), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(465), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4537] = 2,
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
  [4572] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 29,
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
  [4607] = 4,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(477), 4,
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
  [4646] = 2,
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
  [4681] = 4,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
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
  [4720] = 4,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(82), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(485), 4,
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
  [4759] = 2,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 29,
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
  [4794] = 4,
    ACTIONS(425), 1,
      sym_indented_raw_text,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      sym_text_body_line,
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
  [4833] = 4,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(477), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(497), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4872] = 2,
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
  [4907] = 6,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 1,
      sym_blank_line,
    ACTIONS(505), 1,
      sym__nested_indented_raw_text,
    STATE(86), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(130), 1,
      sym__nested_text_body_line,
    ACTIONS(310), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [4950] = 4,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(477), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(509), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [4989] = 6,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 1,
      sym_blank_line,
    ACTIONS(514), 1,
      sym__nested_indented_raw_text,
    STATE(86), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(130), 1,
      sym__nested_text_body_line,
    ACTIONS(301), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5032] = 2,
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
  [5067] = 5,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      sym_indented_raw_text,
    ACTIONS(521), 1,
      sym_blank_line,
    STATE(94), 2,
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
  [5108] = 2,
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
  [5143] = 2,
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
  [5178] = 4,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(531), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(389), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5217] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 29,
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
  [5252] = 2,
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
  [5287] = 5,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      sym_blank_line,
    ACTIONS(545), 1,
      sym_indented_raw_text,
    STATE(94), 2,
      sym_text_body_line,
      aux_sym_implicit_do_statement_repeat1,
    ACTIONS(438), 25,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [5328] = 2,
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
  [5363] = 4,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(85), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(552), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(497), 23,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5402] = 4,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(558), 1,
      sym_flow_until_keyword,
    STATE(167), 1,
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
  [5440] = 4,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      sym_indented_raw_text,
    STATE(111), 1,
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
  [5478] = 2,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(438), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5512] = 2,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5546] = 2,
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
  [5580] = 4,
    ACTIONS(455), 1,
      sym_indented_raw_text,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_text_body_line,
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
  [5618] = 2,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [5652] = 4,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 1,
      sym_flow_until_keyword,
    STATE(144), 1,
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
  [5690] = 2,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 28,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(438), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [6516] = 2,
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
  [6549] = 2,
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
  [6582] = 2,
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
  [6615] = 2,
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
  [6648] = 2,
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
  [6681] = 2,
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
  [6714] = 2,
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
  [6747] = 2,
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
  [6780] = 2,
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
  [6813] = 2,
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
  [6846] = 2,
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
  [6879] = 2,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [6912] = 2,
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
  [6945] = 2,
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
  [6978] = 2,
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
  [7011] = 2,
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
  [7044] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [7143] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 27,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_do_keyword,
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
  [7209] = 2,
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
  [7241] = 2,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7273] = 2,
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
  [7305] = 2,
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
  [7337] = 2,
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
  [7369] = 2,
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
  [7401] = 2,
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
  [7433] = 2,
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
  [7465] = 2,
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
  [7497] = 2,
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
  [7529] = 2,
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
  [7561] = 2,
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
  [7593] = 2,
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
  [7625] = 2,
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
  [7657] = 2,
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
  [7689] = 2,
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
  [7721] = 2,
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
  [7753] = 2,
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
  [7785] = 2,
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
  [7817] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [7849] = 2,
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
  [7881] = 2,
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
  [7913] = 2,
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
  [7945] = 2,
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
  [7977] = 2,
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
  [8009] = 2,
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
  [8041] = 2,
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
  [8073] = 2,
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
  [8105] = 2,
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
  [8137] = 2,
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
  [8169] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 26,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
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
  [8201] = 2,
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
  [8233] = 2,
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
  [8265] = 2,
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
  [8297] = 2,
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
  [8329] = 2,
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
  [8361] = 2,
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
  [8393] = 2,
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
  [8425] = 2,
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
  [8457] = 10,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    STATE(219), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(212), 2,
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
  [8504] = 14,
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
    STATE(96), 1,
      sym_statements,
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(16), 13,
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
  [8559] = 10,
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
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(696), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(198), 3,
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
  [8606] = 14,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(229), 1,
      sym_statements,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(19), 13,
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
  [8661] = 5,
    STATE(395), 1,
      sym_directive_key,
    STATE(196), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(700), 4,
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
  [8698] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(704), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(202), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
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
  [8745] = 5,
    STATE(395), 1,
      sym_directive_key,
    STATE(197), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(708), 4,
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
  [8782] = 5,
    STATE(395), 1,
      sym_directive_key,
    STATE(197), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(710), 4,
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
  [8819] = 10,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(690), 1,
      sym_snake_name,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_text_body,
    STATE(535), 1,
      sym_property_key,
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(704), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(202), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(715), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [8866] = 14,
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
    STATE(71), 1,
      sym__implicit_do_text_body_line,
    STATE(231), 1,
      sym_statements,
    STATE(387), 1,
      sym__flow_reserved_word,
    STATE(19), 13,
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
  [8921] = 14,
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
    STATE(378), 1,
      sym__flow_reserved_word,
    STATE(16), 13,
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
  [8976] = 3,
    STATE(201), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(717), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(389), 19,
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
  [9008] = 6,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      sym_snake_name,
    STATE(535), 1,
      sym_property_key,
    STATE(202), 3,
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
  [9044] = 1,
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
  [9070] = 1,
    ACTIONS(536), 23,
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
  [9096] = 1,
    ACTIONS(501), 22,
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
  [9121] = 1,
    ACTIONS(536), 22,
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
  [9146] = 1,
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
  [9171] = 7,
    ACTIONS(732), 1,
      sym_blank_line,
    ACTIONS(738), 1,
      sym_snake_name,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(734), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(210), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(736), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9207] = 3,
    STATE(209), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(740), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(389), 15,
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
  [9235] = 7,
    ACTIONS(745), 1,
      sym_blank_line,
    ACTIONS(753), 1,
      sym_snake_name,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(748), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(210), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(751), 12,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_thunk_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [9271] = 5,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      sym_blank_line,
    ACTIONS(763), 1,
      sym_indented_raw_text,
    STATE(211), 2,
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
  [9302] = 5,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_blank_line,
    STATE(211), 2,
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
  [9333] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [9361] = 4,
    ACTIONS(778), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(780), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(222), 2,
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
  [9389] = 4,
    ACTIONS(782), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(784), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(227), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(461), 13,
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
  [9417] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(786), 13,
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
  [9445] = 3,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(794), 1,
      sym_snake_name,
    ACTIONS(791), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9471] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(507), 13,
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
  [9499] = 4,
    ACTIONS(796), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(798), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(232), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(702), 13,
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
  [9527] = 2,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
    ACTIONS(802), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [9551] = 4,
    ACTIONS(173), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(804), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(213), 2,
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
  [9579] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(806), 13,
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
  [9607] = 1,
    ACTIONS(536), 19,
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
  [9629] = 1,
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
  [9651] = 4,
    ACTIONS(191), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(808), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(236), 2,
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
  [9679] = 4,
    ACTIONS(810), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(812), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(241), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(713), 13,
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
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(475), 13,
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
    ACTIONS(816), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(818), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(216), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(814), 13,
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
    ACTIONS(820), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(822), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(230), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(475), 13,
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
  [9791] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(495), 13,
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
  [9819] = 4,
    ACTIONS(824), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(826), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(218), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(495), 13,
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
  [9847] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [9875] = 4,
    ACTIONS(830), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(832), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(237), 2,
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
  [9903] = 4,
    ACTIONS(834), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(837), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(384), 13,
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
  [9931] = 4,
    ACTIONS(197), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(840), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(240), 2,
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
  [9959] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [9987] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [10015] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10039] = 2,
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
  [10063] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
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
  [10091] = 4,
    ACTIONS(772), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(774), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(234), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(814), 13,
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
  [10119] = 2,
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
  [10142] = 2,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10165] = 2,
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
  [10188] = 2,
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
  [10211] = 2,
    ACTIONS(534), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(536), 15,
      sym_doc_line,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [10234] = 2,
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
  [10256] = 2,
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
  [10278] = 2,
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
  [10300] = 2,
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
  [10322] = 2,
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
  [10344] = 2,
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
  [10366] = 2,
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
  [10388] = 2,
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
  [10410] = 2,
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
  [10432] = 2,
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
  [10454] = 2,
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
  [10476] = 2,
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
  [10498] = 2,
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
  [10520] = 2,
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
  [10542] = 2,
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
  [10564] = 2,
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
  [10586] = 2,
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
  [10608] = 2,
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
  [10630] = 2,
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
  [10652] = 2,
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
  [10674] = 2,
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
  [10696] = 2,
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
  [10718] = 2,
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
  [10740] = 2,
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
  [10762] = 2,
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
  [10784] = 2,
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
  [10806] = 2,
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
  [10828] = 2,
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
  [10850] = 2,
    ACTIONS(536), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(534), 15,
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
  [10872] = 2,
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
  [10894] = 2,
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
  [10916] = 2,
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
  [10938] = 2,
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
  [10960] = 2,
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
  [10982] = 2,
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
  [11004] = 2,
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
  [11026] = 2,
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
  [11048] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(600), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11073] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(531), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11098] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(564), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11123] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(543), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11148] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(453), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11173] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(538), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11198] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(521), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11223] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(552), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11248] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(558), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11273] = 10,
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
    STATE(361), 1,
      sym_callee,
    STATE(390), 1,
      sym_limit_clause,
    STATE(471), 1,
      sym__rank_named_head,
    STATE(491), 1,
      sym_par_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11306] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(549), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11331] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(483), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11356] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(500), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11381] = 10,
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
    STATE(361), 1,
      sym_callee,
    STATE(374), 1,
      sym_limit_clause,
    STATE(457), 1,
      sym_par_clause,
    STATE(459), 1,
      sym__rank_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11414] = 6,
    ACTIONS(990), 1,
      sym_pascal_name,
    STATE(304), 1,
      sym_base_type,
    STATE(367), 1,
      sym_type_name,
    STATE(588), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(988), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11439] = 9,
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
    STATE(407), 1,
      sym_callee,
    STATE(462), 1,
      sym_to_clause,
    STATE(464), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11469] = 9,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1010), 1,
      sym_colon,
    STATE(391), 1,
      sym_par_clause,
    STATE(407), 1,
      sym_callee,
    STATE(419), 1,
      sym_to_clause,
    STATE(472), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11499] = 4,
    ACTIONS(1014), 1,
      sym_array_suffix,
    STATE(301), 1,
      aux_sym_type_repeat1,
    STATE(358), 1,
      sym_type_suffix,
    ACTIONS(1012), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11517] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1017), 1,
      sym_colon,
    STATE(416), 1,
      sym_callee,
    STATE(445), 1,
      sym_callees,
    STATE(550), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11541] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1019), 1,
      sym_colon,
    STATE(377), 1,
      sym_par_clause,
    STATE(407), 1,
      sym_callee,
    STATE(497), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11565] = 4,
    ACTIONS(1023), 1,
      sym_array_suffix,
    STATE(306), 1,
      aux_sym_type_repeat1,
    STATE(358), 1,
      sym_type_suffix,
    ACTIONS(1021), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11583] = 8,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(184), 1,
      sym_condition,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(176), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11609] = 4,
    ACTIONS(1023), 1,
      sym_array_suffix,
    STATE(301), 1,
      aux_sym_type_repeat1,
    STATE(358), 1,
      sym_type_suffix,
    ACTIONS(1031), 6,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11627] = 8,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(139), 1,
      sym_condition,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(138), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11653] = 8,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(177), 1,
      sym_condition,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(176), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11679] = 8,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(106), 1,
      sym_condition,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(138), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11705] = 7,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1033), 1,
      sym_colon,
    STATE(416), 1,
      sym_callee,
    STATE(465), 1,
      sym_callees,
    STATE(585), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11729] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1035), 1,
      sym_colon,
    STATE(388), 1,
      sym_par_clause,
    STATE(407), 1,
      sym_callee,
    STATE(469), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11753] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1037), 1,
      sym_colon,
    STATE(389), 1,
      sym_par_clause,
    STATE(407), 1,
      sym_callee,
    STATE(470), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11777] = 7,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1039), 1,
      sym_colon,
    STATE(380), 1,
      sym_par_clause,
    STATE(407), 1,
      sym_callee,
    STATE(455), 1,
      sym__itemwise_named_head,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [11801] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(142), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11824] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(165), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11847] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(174), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11870] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(180), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11893] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(186), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11916] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(172), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [11939] = 6,
    ACTIONS(1043), 1,
      sym_comment_line,
    ACTIONS(1045), 1,
      sym_snake_name,
    STATE(283), 1,
      sym_struct_body,
    STATE(527), 1,
      sym_field_name,
    ACTIONS(1041), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(208), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [11960] = 8,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1047), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_inline_comment,
    STATE(255), 1,
      sym_context_body,
    STATE(257), 1,
      sym_text_inline,
    STATE(258), 1,
      sym_text_block,
    STATE(383), 1,
      sym_line_end,
    STATE(425), 1,
      sym_text_line,
  [11985] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(173), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12008] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1051), 1,
      sym_colon,
    STATE(468), 1,
      sym_callee,
    STATE(584), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12029] = 6,
    ACTIONS(1053), 1,
      sym_integer_literal,
    ACTIONS(1055), 1,
      sym_flow_until_keyword,
    ACTIONS(1057), 1,
      sym_colon,
    STATE(156), 1,
      sym_until_clause,
    STATE(370), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12050] = 8,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1047), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_text_block,
    STATE(268), 1,
      sym_instruct_body,
    STATE(279), 1,
      sym_text_inline,
    STATE(383), 1,
      sym_line_end,
    STATE(425), 1,
      sym_text_line,
  [12075] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(175), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12098] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(163), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12121] = 8,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1047), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_text_block,
    STATE(278), 1,
      sym_instruct_body,
    STATE(279), 1,
      sym_text_inline,
    STATE(383), 1,
      sym_line_end,
    STATE(425), 1,
      sym_text_line,
  [12146] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(188), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12169] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(183), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12192] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(159), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12215] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(72), 1,
      sym__nested_text_block,
    STATE(376), 1,
      sym_line_end,
    STATE(424), 1,
      sym_text_line,
    STATE(89), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12238] = 8,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1047), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_inline_comment,
    STATE(257), 1,
      sym_text_inline,
    STATE(258), 1,
      sym_text_block,
    STATE(277), 1,
      sym_context_body,
    STATE(383), 1,
      sym_line_end,
    STATE(425), 1,
      sym_text_line,
  [12263] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(162), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12286] = 6,
    ACTIONS(1053), 1,
      sym_integer_literal,
    ACTIONS(1059), 1,
      sym_flow_until_keyword,
    ACTIONS(1061), 1,
      sym_colon,
    STATE(110), 1,
      sym_until_clause,
    STATE(369), 1,
      sym_times_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12307] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(168), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12330] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(113), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12353] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(116), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12376] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(118), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12399] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(120), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12422] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(122), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12445] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(124), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12468] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12491] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(131), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12514] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(132), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12537] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(133), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12560] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12583] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(135), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12606] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(136), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12629] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(137), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12652] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(146), 1,
      sym__nested_text_block,
    STATE(385), 1,
      sym_line_end,
    STATE(486), 1,
      sym_text_line,
    STATE(143), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12675] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1063), 1,
      sym_colon,
    STATE(449), 1,
      sym_callee,
    STATE(580), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12696] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1065), 1,
      sym_colon,
    STATE(467), 1,
      sym_callee,
    STATE(586), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12717] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(169), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12740] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(157), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12763] = 6,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1006), 1,
      sym_flow_to_keyword,
    ACTIONS(1067), 1,
      sym_colon,
    STATE(474), 1,
      sym_callee,
    STATE(593), 1,
      sym_to_clause,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [12784] = 7,
    ACTIONS(1025), 1,
      sym_newline,
    ACTIONS(1027), 1,
      sym_inline_comment,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    STATE(152), 1,
      sym__nested_text_block,
    STATE(382), 1,
      sym_line_end,
    STATE(479), 1,
      sym_text_line,
    STATE(161), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [12807] = 1,
    ACTIONS(1069), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12817] = 1,
    ACTIONS(1071), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12827] = 1,
    ACTIONS(1073), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12837] = 6,
    ACTIONS(1077), 1,
      sym_integer_literal,
    ACTIONS(1079), 1,
      sym_flow_par_keyword,
    ACTIONS(1081), 1,
      sym_flow_limit_keyword,
    STATE(394), 1,
      sym_limit_clause,
    STATE(533), 1,
      sym_par_clause,
    ACTIONS(1075), 2,
      sym_newline,
      sym_inline_comment,
  [12857] = 3,
    STATE(422), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1085), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12871] = 3,
    STATE(529), 1,
      sym_directive_op,
    ACTIONS(1083), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1087), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12885] = 1,
    ACTIONS(1089), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12895] = 3,
    STATE(423), 1,
      sym_text_ref,
    ACTIONS(1083), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1085), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [12909] = 1,
    ACTIONS(1091), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12919] = 1,
    ACTIONS(1093), 7,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12929] = 1,
    ACTIONS(1095), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [12938] = 5,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    ACTIONS(1101), 1,
      sym_flow_until_keyword,
    ACTIONS(1103), 1,
      sym_colon,
    STATE(128), 2,
      sym_line_end,
      sym_until_clause,
  [12955] = 5,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    ACTIONS(1109), 1,
      sym_flow_until_keyword,
    ACTIONS(1111), 1,
      sym_colon,
    STATE(154), 2,
      sym_line_end,
      sym_until_clause,
  [12972] = 6,
    ACTIONS(1113), 1,
      sym_arrow,
    ACTIONS(1115), 1,
      sym_colon,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1119), 1,
      sym_snake_name,
    STATE(409), 1,
      sym_thunk_name,
    STATE(513), 1,
      sym_params,
  [12991] = 6,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1121), 1,
      sym_arrow,
    ACTIONS(1123), 1,
      sym_colon,
    ACTIONS(1125), 1,
      sym_snake_name,
    STATE(403), 1,
      sym_flow_name,
    STATE(506), 1,
      sym_params,
  [13010] = 1,
    ACTIONS(1127), 6,
      sym_newline,
      sym_inline_comment,
      sym_integer_literal,
      sym_flow_par_keyword,
      sym_flow_limit_keyword,
      sym_comma,
  [13019] = 5,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1129), 1,
      sym_colon,
    STATE(437), 1,
      sym_par_clause,
    STATE(533), 1,
      sym_callee,
  [13035] = 5,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1131), 1,
      sym_newline,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(431), 1,
      sym_text_line,
  [13051] = 5,
    ACTIONS(1135), 1,
      sym_blank_line,
    ACTIONS(1137), 1,
      sym__nested_indented_raw_text,
    STATE(48), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(63), 1,
      sym__nested_text_body_line,
    STATE(95), 1,
      sym__nested_text_body,
  [13067] = 4,
    ACTIONS(1141), 1,
      sym_colon,
    ACTIONS(1143), 1,
      sym_snake_name,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13081] = 5,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1145), 1,
      sym_newline,
    ACTIONS(1147), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
    STATE(476), 1,
      sym_text_line,
  [13097] = 4,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1149), 1,
      sym_colon,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13111] = 4,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1151), 1,
      sym_colon,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13125] = 2,
    ACTIONS(1155), 1,
      sym_flow_times_keyword,
    ACTIONS(1153), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13135] = 5,
    ACTIONS(1157), 1,
      sym_blank_line,
    ACTIONS(1159), 1,
      sym__nested_indented_raw_text,
    STATE(84), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(130), 1,
      sym__nested_text_body_line,
    STATE(170), 1,
      sym__nested_text_body,
  [13151] = 4,
    ACTIONS(692), 1,
      sym_indented_raw_text,
    ACTIONS(1161), 1,
      sym_blank_line,
    STATE(271), 1,
      sym_text_body,
    STATE(212), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [13165] = 3,
    ACTIONS(1163), 1,
      sym_snake_name,
    STATE(448), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13177] = 5,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1167), 1,
      sym__nested_indented_raw_text,
    STATE(60), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(101), 1,
      sym__nested_text_body_line,
    STATE(147), 1,
      sym__nested_text_body,
  [13193] = 3,
    ACTIONS(1163), 1,
      sym_snake_name,
    STATE(466), 1,
      sym_agent,
    ACTIONS(992), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13205] = 5,
    ACTIONS(1029), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1169), 1,
      sym_newline,
    ACTIONS(1171), 1,
      sym_inline_comment,
    STATE(153), 1,
      sym_line_end,
    STATE(481), 1,
      sym_text_line,
  [13221] = 4,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1173), 1,
      sym_colon,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13235] = 4,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1175), 1,
      sym_colon,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13249] = 5,
    ACTIONS(996), 1,
      sym_flow_par_keyword,
    ACTIONS(1002), 1,
      sym_snake_name,
    ACTIONS(1177), 1,
      sym_colon,
    STATE(495), 1,
      sym_par_clause,
    STATE(533), 1,
      sym_callee,
  [13265] = 4,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1179), 1,
      sym_colon,
    STATE(536), 1,
      sym_callee,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13279] = 1,
    ACTIONS(1181), 4,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_snake_name,
  [13286] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(190), 1,
      sym_line_end,
    STATE(262), 1,
      sym_cap_body,
  [13299] = 3,
    ACTIONS(1079), 1,
      sym_flow_par_keyword,
    STATE(514), 1,
      sym_par_clause,
    ACTIONS(1187), 2,
      sym_newline,
      sym_inline_comment,
  [13310] = 2,
    STATE(526), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13319] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(190), 1,
      sym_line_end,
    STATE(270), 1,
      sym_cap_body,
  [13332] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
    STATE(256), 1,
      sym_job_body,
  [13345] = 2,
    ACTIONS(536), 1,
      sym_comment_line,
    ACTIONS(534), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13354] = 3,
    ACTIONS(1193), 1,
      sym_comma,
    STATE(415), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1191), 2,
      sym_newline,
      sym_inline_comment,
  [13365] = 2,
    STATE(423), 1,
      sym_text_ref,
    ACTIONS(1085), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13374] = 4,
    ACTIONS(1083), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1195), 1,
      sym_newline,
    ACTIONS(1197), 1,
      sym_inline_comment,
    STATE(272), 1,
      sym_line_end,
  [13387] = 2,
    ACTIONS(540), 1,
      sym_comment_line,
    ACTIONS(538), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [13396] = 4,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1199), 1,
      sym_arrow,
    ACTIONS(1201), 1,
      sym_colon,
    STATE(520), 1,
      sym_params,
  [13409] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(190), 1,
      sym_line_end,
    STATE(269), 1,
      sym_cap_body,
  [13422] = 1,
    ACTIONS(1203), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13429] = 4,
    ACTIONS(1205), 1,
      sym_rparen,
    ACTIONS(1207), 1,
      sym_snake_name,
    STATE(411), 1,
      sym_param_name,
    STATE(430), 1,
      sym_param,
  [13442] = 3,
    ACTIONS(1079), 1,
      sym_flow_par_keyword,
    STATE(536), 1,
      sym_par_clause,
    ACTIONS(1139), 2,
      sym_newline,
      sym_inline_comment,
  [13453] = 2,
    ACTIONS(1209), 1,
      sym_colon,
    ACTIONS(1083), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13462] = 4,
    ACTIONS(1117), 1,
      sym_lparen,
    ACTIONS(1211), 1,
      sym_arrow,
    ACTIONS(1213), 1,
      sym_colon,
    STATE(498), 1,
      sym_params,
  [13475] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
    STATE(252), 1,
      sym_job_body,
  [13488] = 3,
    ACTIONS(1215), 1,
      sym_optional_marker,
    ACTIONS(1217), 1,
      sym_colon,
    ACTIONS(1219), 2,
      sym_rparen,
      sym_comma,
  [13499] = 2,
    STATE(422), 1,
      sym_text_ref,
    ACTIONS(1085), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [13508] = 1,
    ACTIONS(1221), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13515] = 1,
    ACTIONS(1223), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [13522] = 3,
    ACTIONS(1227), 1,
      sym_comma,
    STATE(415), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1225), 2,
      sym_newline,
      sym_inline_comment,
  [13533] = 3,
    ACTIONS(1193), 1,
      sym_comma,
    STATE(399), 1,
      aux_sym_callees_repeat1,
    ACTIONS(1230), 2,
      sym_newline,
      sym_inline_comment,
  [13544] = 4,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(190), 1,
      sym_line_end,
    STATE(259), 1,
      sym_cap_body,
  [13557] = 2,
    STATE(529), 1,
      sym_directive_op,
    ACTIONS(1189), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [13566] = 3,
    ACTIONS(1079), 1,
      sym_flow_par_keyword,
    ACTIONS(1179), 1,
      sym_colon,
    STATE(597), 1,
      sym_par_clause,
  [13576] = 3,
    ACTIONS(1232), 1,
      sym_newline,
    ACTIONS(1234), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [13586] = 1,
    ACTIONS(1236), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [13592] = 3,
    ACTIONS(1232), 1,
      sym_newline,
    ACTIONS(1234), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
  [13602] = 3,
    ACTIONS(1232), 1,
      sym_newline,
    ACTIONS(1234), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [13612] = 3,
    ACTIONS(1232), 1,
      sym_newline,
    ACTIONS(1234), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
  [13622] = 3,
    ACTIONS(1238), 1,
      sym_newline,
    ACTIONS(1240), 1,
      sym_inline_comment,
    STATE(274), 1,
      sym_line_end,
  [13632] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(37), 1,
      sym_line_end,
  [13642] = 1,
    ACTIONS(1246), 3,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
  [13648] = 3,
    ACTIONS(1248), 1,
      sym_colon,
    ACTIONS(1250), 1,
      sym_snake_name,
    STATE(560), 1,
      sym_context_name,
  [13658] = 3,
    ACTIONS(1252), 1,
      sym_colon,
    ACTIONS(1254), 1,
      sym_snake_name,
    STATE(583), 1,
      sym_instruct_name,
  [13668] = 3,
    ACTIONS(1256), 1,
      sym_rparen,
    ACTIONS(1258), 1,
      sym_comma,
    STATE(434), 1,
      aux_sym_params_repeat1,
  [13678] = 3,
    ACTIONS(1232), 1,
      sym_newline,
    ACTIONS(1234), 1,
      sym_inline_comment,
    STATE(74), 1,
      sym_line_end,
  [13688] = 3,
    ACTIONS(1207), 1,
      sym_snake_name,
    STATE(411), 1,
      sym_param_name,
    STATE(515), 1,
      sym_param,
  [13698] = 3,
    ACTIONS(1260), 1,
      sym_rparen,
    ACTIONS(1262), 1,
      sym_comma,
    STATE(433), 1,
      aux_sym_params_repeat1,
  [13708] = 3,
    ACTIONS(1258), 1,
      sym_comma,
    ACTIONS(1265), 1,
      sym_rparen,
    STATE(433), 1,
      aux_sym_params_repeat1,
  [13718] = 2,
    ACTIONS(1246), 1,
      sym_colon,
    ACTIONS(1267), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13726] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
  [13736] = 3,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1269), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [13746] = 2,
    ACTIONS(1271), 1,
      sym_colon,
    ACTIONS(1273), 2,
      sym_rparen,
      sym_comma,
  [13754] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
  [13764] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
  [13774] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(35), 1,
      sym_line_end,
  [13784] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [13794] = 1,
    ACTIONS(1275), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [13800] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [13810] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
  [13820] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(36), 1,
      sym_line_end,
  [13830] = 1,
    ACTIONS(1095), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [13836] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(171), 1,
      sym_line_end,
  [13846] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(160), 1,
      sym_line_end,
  [13856] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [13866] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
  [13876] = 3,
    ACTIONS(1238), 1,
      sym_newline,
    ACTIONS(1240), 1,
      sym_inline_comment,
    STATE(272), 1,
      sym_line_end,
  [13886] = 3,
    ACTIONS(1281), 1,
      sym_newline,
    ACTIONS(1283), 1,
      sym_inline_comment,
    STATE(244), 1,
      sym_line_end,
  [13896] = 3,
    ACTIONS(1183), 1,
      sym_newline,
    ACTIONS(1185), 1,
      sym_inline_comment,
    STATE(220), 1,
      sym_line_end,
  [13906] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(189), 1,
      sym_line_end,
  [13916] = 2,
    ACTIONS(1236), 1,
      sym_colon,
    ACTIONS(1285), 2,
      sym_flow_par_keyword,
      sym_snake_name,
  [13924] = 3,
    ACTIONS(1129), 1,
      sym_colon,
    ACTIONS(1143), 1,
      sym_snake_name,
    STATE(533), 1,
      sym_callee,
  [13934] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [13944] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
  [13954] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [13964] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [13974] = 3,
    ACTIONS(1079), 1,
      sym_flow_par_keyword,
    ACTIONS(1149), 1,
      sym_colon,
    STATE(598), 1,
      sym_par_clause,
  [13984] = 1,
    ACTIONS(1225), 3,
      sym_newline,
      sym_inline_comment,
      sym_comma,
  [13990] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(185), 1,
      sym_line_end,
  [14000] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [14010] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(115), 1,
      sym_line_end,
  [14020] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
  [14030] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(187), 1,
      sym_line_end,
  [14040] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(119), 1,
      sym_line_end,
  [14050] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
  [14060] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(123), 1,
      sym_line_end,
  [14070] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
  [14080] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [14090] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(127), 1,
      sym_line_end,
  [14100] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [14110] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
  [14120] = 1,
    ACTIONS(1287), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14126] = 3,
    ACTIONS(1289), 1,
      sym_newline,
    ACTIONS(1291), 1,
      sym_inline_comment,
    STATE(205), 1,
      sym_line_end,
  [14136] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
  [14146] = 3,
    ACTIONS(1293), 1,
      sym_pascal_name,
    STATE(556), 1,
      sym_struct_name,
    STATE(578), 1,
      sym_type_name,
  [14156] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_line_end,
  [14166] = 3,
    ACTIONS(1238), 1,
      sym_newline,
    ACTIONS(1240), 1,
      sym_inline_comment,
    STATE(247), 1,
      sym_line_end,
  [14176] = 3,
    ACTIONS(1281), 1,
      sym_newline,
    ACTIONS(1283), 1,
      sym_inline_comment,
    STATE(245), 1,
      sym_line_end,
  [14186] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
  [14196] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
  [14206] = 3,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_line_end,
  [14216] = 3,
    ACTIONS(1295), 1,
      sym_newline,
    ACTIONS(1297), 1,
      sym_inline_comment,
    STATE(320), 1,
      sym_line_end,
  [14226] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
  [14236] = 3,
    ACTIONS(1299), 1,
      aux_sym_directive_value_token1,
    STATE(482), 1,
      sym_cap_ref,
    STATE(518), 1,
      sym_text_line,
  [14246] = 3,
    ACTIONS(1299), 1,
      aux_sym_directive_value_token1,
    STATE(454), 1,
      sym_property_value,
    STATE(501), 1,
      sym_text_line,
  [14256] = 3,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1177), 1,
      sym_colon,
    STATE(533), 1,
      sym_callee,
  [14266] = 3,
    ACTIONS(1242), 1,
      sym_newline,
    ACTIONS(1244), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
  [14276] = 1,
    ACTIONS(1301), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14282] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [14292] = 3,
    ACTIONS(1143), 1,
      sym_snake_name,
    ACTIONS(1303), 1,
      sym_colon,
    STATE(514), 1,
      sym_callee,
  [14302] = 3,
    ACTIONS(1277), 1,
      sym_newline,
    ACTIONS(1279), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [14312] = 3,
    ACTIONS(1105), 1,
      sym_newline,
    ACTIONS(1107), 1,
      sym_inline_comment,
    STATE(164), 1,
      sym_line_end,
  [14322] = 2,
    ACTIONS(1305), 1,
      sym_arrow,
    ACTIONS(1307), 1,
      sym_colon,
  [14329] = 1,
    ACTIONS(536), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14334] = 1,
    ACTIONS(1309), 2,
      sym_rparen,
      sym_comma,
  [14339] = 1,
    ACTIONS(1311), 2,
      sym_newline,
      sym_inline_comment,
  [14344] = 1,
    ACTIONS(1313), 2,
      sym_newline,
      sym_inline_comment,
  [14349] = 2,
    ACTIONS(1315), 1,
      sym__snake_kebab_name,
    STATE(540), 1,
      sym_cap_name,
  [14356] = 2,
    ACTIONS(1317), 1,
      sym__unroled_message_continuation_text,
    STATE(62), 1,
      sym__unroled_message_continuation_line,
  [14363] = 1,
    ACTIONS(1319), 2,
      sym_arrow,
      sym_colon,
  [14368] = 2,
    ACTIONS(1321), 1,
      sym_arrow,
    ACTIONS(1323), 1,
      sym_colon,
  [14375] = 2,
    ACTIONS(534), 1,
      sym__nested_indented_raw_text,
    ACTIONS(536), 1,
      sym_blank_line,
  [14382] = 2,
    ACTIONS(538), 1,
      sym__nested_indented_raw_text,
    ACTIONS(540), 1,
      sym_blank_line,
  [14389] = 1,
    ACTIONS(1325), 2,
      sym_newline,
      sym_inline_comment,
  [14394] = 1,
    ACTIONS(540), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [14399] = 2,
    ACTIONS(1327), 1,
      sym_indented_raw_text,
    STATE(111), 1,
      sym_text_body_line,
  [14406] = 2,
    ACTIONS(1315), 1,
      sym__snake_kebab_name,
    STATE(541), 1,
      sym_cap_name,
  [14413] = 2,
    ACTIONS(1329), 1,
      sym_arrow,
    ACTIONS(1331), 1,
      sym_colon,
  [14420] = 1,
    ACTIONS(1333), 2,
      sym_newline,
      sym_inline_comment,
  [14425] = 1,
    ACTIONS(1335), 2,
      sym_rparen,
      sym_comma,
  [14430] = 1,
    ACTIONS(1337), 2,
      sym_arrow,
      sym_colon,
  [14435] = 2,
    ACTIONS(1339), 1,
      sym_indented_raw_text,
    STATE(99), 1,
      sym_text_body_line,
  [14442] = 1,
    ACTIONS(1341), 2,
      sym_newline,
      sym_inline_comment,
  [14447] = 1,
    ACTIONS(1343), 2,
      sym_newline,
      sym_inline_comment,
  [14452] = 2,
    ACTIONS(1345), 1,
      sym_arrow,
    ACTIONS(1347), 1,
      sym_colon,
  [14459] = 1,
    ACTIONS(1349), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14464] = 1,
    ACTIONS(1351), 2,
      sym_optional_marker,
      sym_colon,
  [14469] = 1,
    ACTIONS(1353), 2,
      sym_newline,
      sym_inline_comment,
  [14474] = 2,
    ACTIONS(1355), 1,
      sym__snake_kebab_name,
    STATE(553), 1,
      sym_job_name,
  [14481] = 2,
    ACTIONS(1315), 1,
      sym__snake_kebab_name,
    STATE(592), 1,
      sym_cap_name,
  [14488] = 2,
    ACTIONS(1357), 1,
      aux_sym_directive_value_token1,
    STATE(478), 1,
      sym_directive_value,
  [14495] = 2,
    ACTIONS(1359), 1,
      sym_optional_marker,
    ACTIONS(1361), 1,
      sym_colon,
  [14502] = 2,
    ACTIONS(1315), 1,
      sym__snake_kebab_name,
    STATE(589), 1,
      sym_cap_name,
  [14509] = 2,
    ACTIONS(1357), 1,
      aux_sym_directive_value_token1,
    STATE(420), 1,
      sym_directive_value,
  [14516] = 2,
    ACTIONS(1355), 1,
      sym__snake_kebab_name,
    STATE(548), 1,
      sym_job_name,
  [14523] = 1,
    ACTIONS(1363), 2,
      sym_rparen,
      sym_comma,
  [14528] = 2,
    ACTIONS(1143), 1,
      sym_snake_name,
    STATE(463), 1,
      sym_callee,
  [14535] = 1,
    ACTIONS(1187), 2,
      sym_newline,
      sym_inline_comment,
  [14540] = 1,
    ACTIONS(1365), 2,
      sym_arrow,
      sym_colon,
  [14545] = 2,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    STATE(490), 1,
      sym_assign_operator,
  [14552] = 1,
    ACTIONS(1369), 2,
      sym_newline,
      sym_inline_comment,
  [14557] = 1,
    ACTIONS(1371), 1,
      aux_sym_directive_value_token1,
  [14561] = 1,
    ACTIONS(1373), 1,
      sym_colon,
  [14565] = 1,
    ACTIONS(1375), 1,
      sym_colon,
  [14569] = 1,
    ACTIONS(1377), 1,
      sym_colon,
  [14573] = 1,
    ACTIONS(1379), 1,
      sym_colon,
  [14577] = 1,
    ACTIONS(1381), 1,
      sym_newline,
  [14581] = 1,
    ACTIONS(1383), 1,
      sym_colon,
  [14585] = 1,
    ACTIONS(1385), 1,
      sym_integer_literal,
  [14589] = 1,
    ACTIONS(1387), 1,
      sym_newline,
  [14593] = 1,
    ACTIONS(1389), 1,
      sym_colon,
  [14597] = 1,
    ACTIONS(1391), 1,
      ts_builtin_sym_end,
  [14601] = 1,
    ACTIONS(1393), 1,
      sym_colon,
  [14605] = 1,
    ACTIONS(1395), 1,
      sym_colon,
  [14609] = 1,
    ACTIONS(1397), 1,
      sym_colon,
  [14613] = 1,
    ACTIONS(1399), 1,
      sym_newline,
  [14617] = 1,
    ACTIONS(1401), 1,
      sym_colon,
  [14621] = 1,
    ACTIONS(1403), 1,
      sym_colon,
  [14625] = 1,
    ACTIONS(1405), 1,
      aux_sym_directive_value_token1,
  [14629] = 1,
    ACTIONS(1407), 1,
      sym_newline,
  [14633] = 1,
    ACTIONS(1409), 1,
      sym_colon,
  [14637] = 1,
    ACTIONS(1411), 1,
      sym_newline,
  [14641] = 1,
    ACTIONS(1413), 1,
      sym_colon,
  [14645] = 1,
    ACTIONS(1415), 1,
      sym_newline,
  [14649] = 1,
    ACTIONS(1417), 1,
      sym_colon,
  [14653] = 1,
    ACTIONS(1419), 1,
      sym_newline,
  [14657] = 1,
    ACTIONS(1421), 1,
      sym_newline,
  [14661] = 1,
    ACTIONS(1423), 1,
      sym_newline,
  [14665] = 1,
    ACTIONS(1425), 1,
      sym_colon,
  [14669] = 1,
    ACTIONS(1427), 1,
      sym_newline,
  [14673] = 1,
    ACTIONS(1429), 1,
      sym_newline,
  [14677] = 1,
    ACTIONS(1431), 1,
      sym_newline,
  [14681] = 1,
    ACTIONS(1433), 1,
      sym_newline,
  [14685] = 1,
    ACTIONS(1435), 1,
      sym_newline,
  [14689] = 1,
    ACTIONS(1437), 1,
      sym_newline,
  [14693] = 1,
    ACTIONS(1439), 1,
      sym_newline,
  [14697] = 1,
    ACTIONS(1441), 1,
      sym_newline,
  [14701] = 1,
    ACTIONS(1443), 1,
      sym_cap_kind,
  [14705] = 1,
    ACTIONS(1445), 1,
      sym_newline,
  [14709] = 1,
    ACTIONS(1447), 1,
      sym_newline,
  [14713] = 1,
    ACTIONS(1449), 1,
      sym_colon,
  [14717] = 1,
    ACTIONS(1451), 1,
      sym_colon,
  [14721] = 1,
    ACTIONS(1453), 1,
      sym_colon,
  [14725] = 1,
    ACTIONS(1455), 1,
      sym_colon,
  [14729] = 1,
    ACTIONS(1457), 1,
      sym_colon,
  [14733] = 1,
    ACTIONS(1459), 1,
      sym_newline,
  [14737] = 1,
    ACTIONS(1461), 1,
      sym_integer_literal,
  [14741] = 1,
    ACTIONS(1463), 1,
      sym_colon,
  [14745] = 1,
    ACTIONS(1465), 1,
      sym_colon,
  [14749] = 1,
    ACTIONS(1467), 1,
      sym_colon,
  [14753] = 1,
    ACTIONS(1469), 1,
      sym_colon,
  [14757] = 1,
    ACTIONS(1471), 1,
      sym_colon,
  [14761] = 1,
    ACTIONS(1473), 1,
      sym_colon,
  [14765] = 1,
    ACTIONS(1475), 1,
      sym_colon,
  [14769] = 1,
    ACTIONS(1477), 1,
      sym_newline,
  [14773] = 1,
    ACTIONS(1479), 1,
      anon_sym_EQ,
  [14777] = 1,
    ACTIONS(1481), 1,
      sym_colon,
  [14781] = 1,
    ACTIONS(1483), 1,
      sym_colon,
  [14785] = 1,
    ACTIONS(1485), 1,
      sym_colon,
  [14789] = 1,
    ACTIONS(1487), 1,
      sym_integer_literal,
  [14793] = 1,
    ACTIONS(1489), 1,
      sym_colon,
  [14797] = 1,
    ACTIONS(1491), 1,
      sym_colon,
  [14801] = 1,
    ACTIONS(1493), 1,
      sym_colon,
  [14805] = 1,
    ACTIONS(1495), 1,
      sym_colon,
  [14809] = 1,
    ACTIONS(1497), 1,
      sym_colon,
  [14813] = 1,
    ACTIONS(1499), 1,
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
  [SMALL_STATE(55)] = 3735,
  [SMALL_STATE(56)] = 3776,
  [SMALL_STATE(57)] = 3843,
  [SMALL_STATE(58)] = 3910,
  [SMALL_STATE(59)] = 3951,
  [SMALL_STATE(60)] = 3992,
  [SMALL_STATE(61)] = 4036,
  [SMALL_STATE(62)] = 4072,
  [SMALL_STATE(63)] = 4108,
  [SMALL_STATE(64)] = 4144,
  [SMALL_STATE(65)] = 4180,
  [SMALL_STATE(66)] = 4216,
  [SMALL_STATE(67)] = 4258,
  [SMALL_STATE(68)] = 4300,
  [SMALL_STATE(69)] = 4342,
  [SMALL_STATE(70)] = 4378,
  [SMALL_STATE(71)] = 4422,
  [SMALL_STATE(72)] = 4463,
  [SMALL_STATE(73)] = 4498,
  [SMALL_STATE(74)] = 4537,
  [SMALL_STATE(75)] = 4572,
  [SMALL_STATE(76)] = 4607,
  [SMALL_STATE(77)] = 4646,
  [SMALL_STATE(78)] = 4681,
  [SMALL_STATE(79)] = 4720,
  [SMALL_STATE(80)] = 4759,
  [SMALL_STATE(81)] = 4794,
  [SMALL_STATE(82)] = 4833,
  [SMALL_STATE(83)] = 4872,
  [SMALL_STATE(84)] = 4907,
  [SMALL_STATE(85)] = 4950,
  [SMALL_STATE(86)] = 4989,
  [SMALL_STATE(87)] = 5032,
  [SMALL_STATE(88)] = 5067,
  [SMALL_STATE(89)] = 5108,
  [SMALL_STATE(90)] = 5143,
  [SMALL_STATE(91)] = 5178,
  [SMALL_STATE(92)] = 5217,
  [SMALL_STATE(93)] = 5252,
  [SMALL_STATE(94)] = 5287,
  [SMALL_STATE(95)] = 5328,
  [SMALL_STATE(96)] = 5363,
  [SMALL_STATE(97)] = 5402,
  [SMALL_STATE(98)] = 5440,
  [SMALL_STATE(99)] = 5478,
  [SMALL_STATE(100)] = 5512,
  [SMALL_STATE(101)] = 5546,
  [SMALL_STATE(102)] = 5580,
  [SMALL_STATE(103)] = 5618,
  [SMALL_STATE(104)] = 5652,
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
  [SMALL_STATE(152)] = 7241,
  [SMALL_STATE(153)] = 7273,
  [SMALL_STATE(154)] = 7305,
  [SMALL_STATE(155)] = 7337,
  [SMALL_STATE(156)] = 7369,
  [SMALL_STATE(157)] = 7401,
  [SMALL_STATE(158)] = 7433,
  [SMALL_STATE(159)] = 7465,
  [SMALL_STATE(160)] = 7497,
  [SMALL_STATE(161)] = 7529,
  [SMALL_STATE(162)] = 7561,
  [SMALL_STATE(163)] = 7593,
  [SMALL_STATE(164)] = 7625,
  [SMALL_STATE(165)] = 7657,
  [SMALL_STATE(166)] = 7689,
  [SMALL_STATE(167)] = 7721,
  [SMALL_STATE(168)] = 7753,
  [SMALL_STATE(169)] = 7785,
  [SMALL_STATE(170)] = 7817,
  [SMALL_STATE(171)] = 7849,
  [SMALL_STATE(172)] = 7881,
  [SMALL_STATE(173)] = 7913,
  [SMALL_STATE(174)] = 7945,
  [SMALL_STATE(175)] = 7977,
  [SMALL_STATE(176)] = 8009,
  [SMALL_STATE(177)] = 8041,
  [SMALL_STATE(178)] = 8073,
  [SMALL_STATE(179)] = 8105,
  [SMALL_STATE(180)] = 8137,
  [SMALL_STATE(181)] = 8169,
  [SMALL_STATE(182)] = 8201,
  [SMALL_STATE(183)] = 8233,
  [SMALL_STATE(184)] = 8265,
  [SMALL_STATE(185)] = 8297,
  [SMALL_STATE(186)] = 8329,
  [SMALL_STATE(187)] = 8361,
  [SMALL_STATE(188)] = 8393,
  [SMALL_STATE(189)] = 8425,
  [SMALL_STATE(190)] = 8457,
  [SMALL_STATE(191)] = 8504,
  [SMALL_STATE(192)] = 8559,
  [SMALL_STATE(193)] = 8606,
  [SMALL_STATE(194)] = 8661,
  [SMALL_STATE(195)] = 8698,
  [SMALL_STATE(196)] = 8745,
  [SMALL_STATE(197)] = 8782,
  [SMALL_STATE(198)] = 8819,
  [SMALL_STATE(199)] = 8866,
  [SMALL_STATE(200)] = 8921,
  [SMALL_STATE(201)] = 8976,
  [SMALL_STATE(202)] = 9008,
  [SMALL_STATE(203)] = 9044,
  [SMALL_STATE(204)] = 9070,
  [SMALL_STATE(205)] = 9096,
  [SMALL_STATE(206)] = 9121,
  [SMALL_STATE(207)] = 9146,
  [SMALL_STATE(208)] = 9171,
  [SMALL_STATE(209)] = 9207,
  [SMALL_STATE(210)] = 9235,
  [SMALL_STATE(211)] = 9271,
  [SMALL_STATE(212)] = 9302,
  [SMALL_STATE(213)] = 9333,
  [SMALL_STATE(214)] = 9361,
  [SMALL_STATE(215)] = 9389,
  [SMALL_STATE(216)] = 9417,
  [SMALL_STATE(217)] = 9445,
  [SMALL_STATE(218)] = 9471,
  [SMALL_STATE(219)] = 9499,
  [SMALL_STATE(220)] = 9527,
  [SMALL_STATE(221)] = 9551,
  [SMALL_STATE(222)] = 9579,
  [SMALL_STATE(223)] = 9607,
  [SMALL_STATE(224)] = 9629,
  [SMALL_STATE(225)] = 9651,
  [SMALL_STATE(226)] = 9679,
  [SMALL_STATE(227)] = 9707,
  [SMALL_STATE(228)] = 9735,
  [SMALL_STATE(229)] = 9763,
  [SMALL_STATE(230)] = 9791,
  [SMALL_STATE(231)] = 9819,
  [SMALL_STATE(232)] = 9847,
  [SMALL_STATE(233)] = 9875,
  [SMALL_STATE(234)] = 9903,
  [SMALL_STATE(235)] = 9931,
  [SMALL_STATE(236)] = 9959,
  [SMALL_STATE(237)] = 9987,
  [SMALL_STATE(238)] = 10015,
  [SMALL_STATE(239)] = 10039,
  [SMALL_STATE(240)] = 10063,
  [SMALL_STATE(241)] = 10091,
  [SMALL_STATE(242)] = 10119,
  [SMALL_STATE(243)] = 10142,
  [SMALL_STATE(244)] = 10165,
  [SMALL_STATE(245)] = 10188,
  [SMALL_STATE(246)] = 10211,
  [SMALL_STATE(247)] = 10234,
  [SMALL_STATE(248)] = 10256,
  [SMALL_STATE(249)] = 10278,
  [SMALL_STATE(250)] = 10300,
  [SMALL_STATE(251)] = 10322,
  [SMALL_STATE(252)] = 10344,
  [SMALL_STATE(253)] = 10366,
  [SMALL_STATE(254)] = 10388,
  [SMALL_STATE(255)] = 10410,
  [SMALL_STATE(256)] = 10432,
  [SMALL_STATE(257)] = 10454,
  [SMALL_STATE(258)] = 10476,
  [SMALL_STATE(259)] = 10498,
  [SMALL_STATE(260)] = 10520,
  [SMALL_STATE(261)] = 10542,
  [SMALL_STATE(262)] = 10564,
  [SMALL_STATE(263)] = 10586,
  [SMALL_STATE(264)] = 10608,
  [SMALL_STATE(265)] = 10630,
  [SMALL_STATE(266)] = 10652,
  [SMALL_STATE(267)] = 10674,
  [SMALL_STATE(268)] = 10696,
  [SMALL_STATE(269)] = 10718,
  [SMALL_STATE(270)] = 10740,
  [SMALL_STATE(271)] = 10762,
  [SMALL_STATE(272)] = 10784,
  [SMALL_STATE(273)] = 10806,
  [SMALL_STATE(274)] = 10828,
  [SMALL_STATE(275)] = 10850,
  [SMALL_STATE(276)] = 10872,
  [SMALL_STATE(277)] = 10894,
  [SMALL_STATE(278)] = 10916,
  [SMALL_STATE(279)] = 10938,
  [SMALL_STATE(280)] = 10960,
  [SMALL_STATE(281)] = 10982,
  [SMALL_STATE(282)] = 11004,
  [SMALL_STATE(283)] = 11026,
  [SMALL_STATE(284)] = 11048,
  [SMALL_STATE(285)] = 11073,
  [SMALL_STATE(286)] = 11098,
  [SMALL_STATE(287)] = 11123,
  [SMALL_STATE(288)] = 11148,
  [SMALL_STATE(289)] = 11173,
  [SMALL_STATE(290)] = 11198,
  [SMALL_STATE(291)] = 11223,
  [SMALL_STATE(292)] = 11248,
  [SMALL_STATE(293)] = 11273,
  [SMALL_STATE(294)] = 11306,
  [SMALL_STATE(295)] = 11331,
  [SMALL_STATE(296)] = 11356,
  [SMALL_STATE(297)] = 11381,
  [SMALL_STATE(298)] = 11414,
  [SMALL_STATE(299)] = 11439,
  [SMALL_STATE(300)] = 11469,
  [SMALL_STATE(301)] = 11499,
  [SMALL_STATE(302)] = 11517,
  [SMALL_STATE(303)] = 11541,
  [SMALL_STATE(304)] = 11565,
  [SMALL_STATE(305)] = 11583,
  [SMALL_STATE(306)] = 11609,
  [SMALL_STATE(307)] = 11627,
  [SMALL_STATE(308)] = 11653,
  [SMALL_STATE(309)] = 11679,
  [SMALL_STATE(310)] = 11705,
  [SMALL_STATE(311)] = 11729,
  [SMALL_STATE(312)] = 11753,
  [SMALL_STATE(313)] = 11777,
  [SMALL_STATE(314)] = 11801,
  [SMALL_STATE(315)] = 11824,
  [SMALL_STATE(316)] = 11847,
  [SMALL_STATE(317)] = 11870,
  [SMALL_STATE(318)] = 11893,
  [SMALL_STATE(319)] = 11916,
  [SMALL_STATE(320)] = 11939,
  [SMALL_STATE(321)] = 11960,
  [SMALL_STATE(322)] = 11985,
  [SMALL_STATE(323)] = 12008,
  [SMALL_STATE(324)] = 12029,
  [SMALL_STATE(325)] = 12050,
  [SMALL_STATE(326)] = 12075,
  [SMALL_STATE(327)] = 12098,
  [SMALL_STATE(328)] = 12121,
  [SMALL_STATE(329)] = 12146,
  [SMALL_STATE(330)] = 12169,
  [SMALL_STATE(331)] = 12192,
  [SMALL_STATE(332)] = 12215,
  [SMALL_STATE(333)] = 12238,
  [SMALL_STATE(334)] = 12263,
  [SMALL_STATE(335)] = 12286,
  [SMALL_STATE(336)] = 12307,
  [SMALL_STATE(337)] = 12330,
  [SMALL_STATE(338)] = 12353,
  [SMALL_STATE(339)] = 12376,
  [SMALL_STATE(340)] = 12399,
  [SMALL_STATE(341)] = 12422,
  [SMALL_STATE(342)] = 12445,
  [SMALL_STATE(343)] = 12468,
  [SMALL_STATE(344)] = 12491,
  [SMALL_STATE(345)] = 12514,
  [SMALL_STATE(346)] = 12537,
  [SMALL_STATE(347)] = 12560,
  [SMALL_STATE(348)] = 12583,
  [SMALL_STATE(349)] = 12606,
  [SMALL_STATE(350)] = 12629,
  [SMALL_STATE(351)] = 12652,
  [SMALL_STATE(352)] = 12675,
  [SMALL_STATE(353)] = 12696,
  [SMALL_STATE(354)] = 12717,
  [SMALL_STATE(355)] = 12740,
  [SMALL_STATE(356)] = 12763,
  [SMALL_STATE(357)] = 12784,
  [SMALL_STATE(358)] = 12807,
  [SMALL_STATE(359)] = 12817,
  [SMALL_STATE(360)] = 12827,
  [SMALL_STATE(361)] = 12837,
  [SMALL_STATE(362)] = 12857,
  [SMALL_STATE(363)] = 12871,
  [SMALL_STATE(364)] = 12885,
  [SMALL_STATE(365)] = 12895,
  [SMALL_STATE(366)] = 12909,
  [SMALL_STATE(367)] = 12919,
  [SMALL_STATE(368)] = 12929,
  [SMALL_STATE(369)] = 12938,
  [SMALL_STATE(370)] = 12955,
  [SMALL_STATE(371)] = 12972,
  [SMALL_STATE(372)] = 12991,
  [SMALL_STATE(373)] = 13010,
  [SMALL_STATE(374)] = 13019,
  [SMALL_STATE(375)] = 13035,
  [SMALL_STATE(376)] = 13051,
  [SMALL_STATE(377)] = 13067,
  [SMALL_STATE(378)] = 13081,
  [SMALL_STATE(379)] = 13097,
  [SMALL_STATE(380)] = 13111,
  [SMALL_STATE(381)] = 13125,
  [SMALL_STATE(382)] = 13135,
  [SMALL_STATE(383)] = 13151,
  [SMALL_STATE(384)] = 13165,
  [SMALL_STATE(385)] = 13177,
  [SMALL_STATE(386)] = 13193,
  [SMALL_STATE(387)] = 13205,
  [SMALL_STATE(388)] = 13221,
  [SMALL_STATE(389)] = 13235,
  [SMALL_STATE(390)] = 13249,
  [SMALL_STATE(391)] = 13265,
  [SMALL_STATE(392)] = 13279,
  [SMALL_STATE(393)] = 13286,
  [SMALL_STATE(394)] = 13299,
  [SMALL_STATE(395)] = 13310,
  [SMALL_STATE(396)] = 13319,
  [SMALL_STATE(397)] = 13332,
  [SMALL_STATE(398)] = 13345,
  [SMALL_STATE(399)] = 13354,
  [SMALL_STATE(400)] = 13365,
  [SMALL_STATE(401)] = 13374,
  [SMALL_STATE(402)] = 13387,
  [SMALL_STATE(403)] = 13396,
  [SMALL_STATE(404)] = 13409,
  [SMALL_STATE(405)] = 13422,
  [SMALL_STATE(406)] = 13429,
  [SMALL_STATE(407)] = 13442,
  [SMALL_STATE(408)] = 13453,
  [SMALL_STATE(409)] = 13462,
  [SMALL_STATE(410)] = 13475,
  [SMALL_STATE(411)] = 13488,
  [SMALL_STATE(412)] = 13499,
  [SMALL_STATE(413)] = 13508,
  [SMALL_STATE(414)] = 13515,
  [SMALL_STATE(415)] = 13522,
  [SMALL_STATE(416)] = 13533,
  [SMALL_STATE(417)] = 13544,
  [SMALL_STATE(418)] = 13557,
  [SMALL_STATE(419)] = 13566,
  [SMALL_STATE(420)] = 13576,
  [SMALL_STATE(421)] = 13586,
  [SMALL_STATE(422)] = 13592,
  [SMALL_STATE(423)] = 13602,
  [SMALL_STATE(424)] = 13612,
  [SMALL_STATE(425)] = 13622,
  [SMALL_STATE(426)] = 13632,
  [SMALL_STATE(427)] = 13642,
  [SMALL_STATE(428)] = 13648,
  [SMALL_STATE(429)] = 13658,
  [SMALL_STATE(430)] = 13668,
  [SMALL_STATE(431)] = 13678,
  [SMALL_STATE(432)] = 13688,
  [SMALL_STATE(433)] = 13698,
  [SMALL_STATE(434)] = 13708,
  [SMALL_STATE(435)] = 13718,
  [SMALL_STATE(436)] = 13726,
  [SMALL_STATE(437)] = 13736,
  [SMALL_STATE(438)] = 13746,
  [SMALL_STATE(439)] = 13754,
  [SMALL_STATE(440)] = 13764,
  [SMALL_STATE(441)] = 13774,
  [SMALL_STATE(442)] = 13784,
  [SMALL_STATE(443)] = 13794,
  [SMALL_STATE(444)] = 13800,
  [SMALL_STATE(445)] = 13810,
  [SMALL_STATE(446)] = 13820,
  [SMALL_STATE(447)] = 13830,
  [SMALL_STATE(448)] = 13836,
  [SMALL_STATE(449)] = 13846,
  [SMALL_STATE(450)] = 13856,
  [SMALL_STATE(451)] = 13866,
  [SMALL_STATE(452)] = 13876,
  [SMALL_STATE(453)] = 13886,
  [SMALL_STATE(454)] = 13896,
  [SMALL_STATE(455)] = 13906,
  [SMALL_STATE(456)] = 13916,
  [SMALL_STATE(457)] = 13924,
  [SMALL_STATE(458)] = 13934,
  [SMALL_STATE(459)] = 13944,
  [SMALL_STATE(460)] = 13954,
  [SMALL_STATE(461)] = 13964,
  [SMALL_STATE(462)] = 13974,
  [SMALL_STATE(463)] = 13984,
  [SMALL_STATE(464)] = 13990,
  [SMALL_STATE(465)] = 14000,
  [SMALL_STATE(466)] = 14010,
  [SMALL_STATE(467)] = 14020,
  [SMALL_STATE(468)] = 14030,
  [SMALL_STATE(469)] = 14040,
  [SMALL_STATE(470)] = 14050,
  [SMALL_STATE(471)] = 14060,
  [SMALL_STATE(472)] = 14070,
  [SMALL_STATE(473)] = 14080,
  [SMALL_STATE(474)] = 14090,
  [SMALL_STATE(475)] = 14100,
  [SMALL_STATE(476)] = 14110,
  [SMALL_STATE(477)] = 14120,
  [SMALL_STATE(478)] = 14126,
  [SMALL_STATE(479)] = 14136,
  [SMALL_STATE(480)] = 14146,
  [SMALL_STATE(481)] = 14156,
  [SMALL_STATE(482)] = 14166,
  [SMALL_STATE(483)] = 14176,
  [SMALL_STATE(484)] = 14186,
  [SMALL_STATE(485)] = 14196,
  [SMALL_STATE(486)] = 14206,
  [SMALL_STATE(487)] = 14216,
  [SMALL_STATE(488)] = 14226,
  [SMALL_STATE(489)] = 14236,
  [SMALL_STATE(490)] = 14246,
  [SMALL_STATE(491)] = 14256,
  [SMALL_STATE(492)] = 14266,
  [SMALL_STATE(493)] = 14276,
  [SMALL_STATE(494)] = 14282,
  [SMALL_STATE(495)] = 14292,
  [SMALL_STATE(496)] = 14302,
  [SMALL_STATE(497)] = 14312,
  [SMALL_STATE(498)] = 14322,
  [SMALL_STATE(499)] = 14329,
  [SMALL_STATE(500)] = 14334,
  [SMALL_STATE(501)] = 14339,
  [SMALL_STATE(502)] = 14344,
  [SMALL_STATE(503)] = 14349,
  [SMALL_STATE(504)] = 14356,
  [SMALL_STATE(505)] = 14363,
  [SMALL_STATE(506)] = 14368,
  [SMALL_STATE(507)] = 14375,
  [SMALL_STATE(508)] = 14382,
  [SMALL_STATE(509)] = 14389,
  [SMALL_STATE(510)] = 14394,
  [SMALL_STATE(511)] = 14399,
  [SMALL_STATE(512)] = 14406,
  [SMALL_STATE(513)] = 14413,
  [SMALL_STATE(514)] = 14420,
  [SMALL_STATE(515)] = 14425,
  [SMALL_STATE(516)] = 14430,
  [SMALL_STATE(517)] = 14435,
  [SMALL_STATE(518)] = 14442,
  [SMALL_STATE(519)] = 14447,
  [SMALL_STATE(520)] = 14452,
  [SMALL_STATE(521)] = 14459,
  [SMALL_STATE(522)] = 14464,
  [SMALL_STATE(523)] = 14469,
  [SMALL_STATE(524)] = 14474,
  [SMALL_STATE(525)] = 14481,
  [SMALL_STATE(526)] = 14488,
  [SMALL_STATE(527)] = 14495,
  [SMALL_STATE(528)] = 14502,
  [SMALL_STATE(529)] = 14509,
  [SMALL_STATE(530)] = 14516,
  [SMALL_STATE(531)] = 14523,
  [SMALL_STATE(532)] = 14528,
  [SMALL_STATE(533)] = 14535,
  [SMALL_STATE(534)] = 14540,
  [SMALL_STATE(535)] = 14545,
  [SMALL_STATE(536)] = 14552,
  [SMALL_STATE(537)] = 14557,
  [SMALL_STATE(538)] = 14561,
  [SMALL_STATE(539)] = 14565,
  [SMALL_STATE(540)] = 14569,
  [SMALL_STATE(541)] = 14573,
  [SMALL_STATE(542)] = 14577,
  [SMALL_STATE(543)] = 14581,
  [SMALL_STATE(544)] = 14585,
  [SMALL_STATE(545)] = 14589,
  [SMALL_STATE(546)] = 14593,
  [SMALL_STATE(547)] = 14597,
  [SMALL_STATE(548)] = 14601,
  [SMALL_STATE(549)] = 14605,
  [SMALL_STATE(550)] = 14609,
  [SMALL_STATE(551)] = 14613,
  [SMALL_STATE(552)] = 14617,
  [SMALL_STATE(553)] = 14621,
  [SMALL_STATE(554)] = 14625,
  [SMALL_STATE(555)] = 14629,
  [SMALL_STATE(556)] = 14633,
  [SMALL_STATE(557)] = 14637,
  [SMALL_STATE(558)] = 14641,
  [SMALL_STATE(559)] = 14645,
  [SMALL_STATE(560)] = 14649,
  [SMALL_STATE(561)] = 14653,
  [SMALL_STATE(562)] = 14657,
  [SMALL_STATE(563)] = 14661,
  [SMALL_STATE(564)] = 14665,
  [SMALL_STATE(565)] = 14669,
  [SMALL_STATE(566)] = 14673,
  [SMALL_STATE(567)] = 14677,
  [SMALL_STATE(568)] = 14681,
  [SMALL_STATE(569)] = 14685,
  [SMALL_STATE(570)] = 14689,
  [SMALL_STATE(571)] = 14693,
  [SMALL_STATE(572)] = 14697,
  [SMALL_STATE(573)] = 14701,
  [SMALL_STATE(574)] = 14705,
  [SMALL_STATE(575)] = 14709,
  [SMALL_STATE(576)] = 14713,
  [SMALL_STATE(577)] = 14717,
  [SMALL_STATE(578)] = 14721,
  [SMALL_STATE(579)] = 14725,
  [SMALL_STATE(580)] = 14729,
  [SMALL_STATE(581)] = 14733,
  [SMALL_STATE(582)] = 14737,
  [SMALL_STATE(583)] = 14741,
  [SMALL_STATE(584)] = 14745,
  [SMALL_STATE(585)] = 14749,
  [SMALL_STATE(586)] = 14753,
  [SMALL_STATE(587)] = 14757,
  [SMALL_STATE(588)] = 14761,
  [SMALL_STATE(589)] = 14765,
  [SMALL_STATE(590)] = 14769,
  [SMALL_STATE(591)] = 14773,
  [SMALL_STATE(592)] = 14777,
  [SMALL_STATE(593)] = 14781,
  [SMALL_STATE(594)] = 14785,
  [SMALL_STATE(595)] = 14789,
  [SMALL_STATE(596)] = 14793,
  [SMALL_STATE(597)] = 14797,
  [SMALL_STATE(598)] = 14801,
  [SMALL_STATE(599)] = 14805,
  [SMALL_STATE(600)] = 14809,
  [SMALL_STATE(601)] = 14813,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(590),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(503),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(58),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 21),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 1, -1, 10),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 2, -1, 10),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 3, -2, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_thunk_reserved_message, 2, -2, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_do_statement, 3, -1, 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 4, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(559),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_do_text_body_line, 2, 0, 14),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 3, 2, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 3, 2, 0),
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
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_above_statement, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 4, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 4, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 4, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 2, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 4, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_statement, 5, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(201),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(591),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 24),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 24),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(234),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(234),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 22),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 22),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 26),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 26),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 25),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 25),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 20),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 20),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 13),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 13),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 27),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 27),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 23),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 23),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 20),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 20),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 27),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 27),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 26),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 25),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 25),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 23),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 23),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(360),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 1, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thunk_reserved_word, 1, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callee, 1, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__itemwise_named_head, 1, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 2, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 2, 0, 0),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times_clause, 2, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callees_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callees, 1, 0, 0),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(432),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_clause, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 22),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rank_named_head, 3, 0, 0),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_clause, 2, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__itemwise_named_head, 2, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
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
