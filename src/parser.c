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
#define STATE_COUNT 792
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  sym__implicit_run_raw_text = 87,
  sym__nested_indented_raw_text = 88,
  sym_source_file = 89,
  sym_item = 90,
  sym_line_end = 91,
  sym__trivia = 92,
  sym_with = 93,
  sym_type = 94,
  sym_base_type = 95,
  sym_builtin_type = 96,
  sym_user_type = 97,
  sym_type_suffix = 98,
  sym_struct = 99,
  sym_struct_name = 100,
  sym_struct_body = 101,
  sym_field = 102,
  sym_field_name = 103,
  sym_psyche = 104,
  sym_skill = 105,
  sym_service = 106,
  sym_prompt = 107,
  sym_task = 108,
  sym_chore = 109,
  sym_cap_name = 110,
  sym_cap_ref = 111,
  sym_job_name = 112,
  sym_cap_body = 113,
  sym_job_body = 114,
  sym_property = 115,
  sym_property_key = 116,
  sym_property_value = 117,
  sym_instruct = 118,
  sym_instruct_name = 119,
  sym_instruct_body = 120,
  sym_context = 121,
  sym_context_name = 122,
  sym_context_body = 123,
  sym_text_inline = 124,
  sym_text_block = 125,
  sym_text_body = 126,
  sym_text_body_line = 127,
  sym__nested_text_inline_alias = 128,
  sym__nested_text_inline = 129,
  sym__nested_text_block = 130,
  sym__nested_text_body = 131,
  sym__nested_text_body_line = 132,
  sym_agic = 133,
  sym_agic_name = 134,
  sym_agic_body = 135,
  sym_params = 136,
  sym_param = 137,
  sym_param_name = 138,
  sym_flow = 139,
  sym_flow_name = 140,
  sym_flow_body = 141,
  sym_statements = 142,
  sym__flow_statement = 143,
  sym__flow_operation = 144,
  sym_let_statement = 145,
  sym_run_statement = 146,
  sym_implicit_run_statement = 147,
  sym__implicit_run_text_body_line = 148,
  sym_seek_statement = 149,
  sym_ask_statement = 150,
  sym_scatter_statement = 151,
  sym_storm_statement = 152,
  sym_gather_statement = 153,
  sym_settle_statement = 154,
  sym_map_statement = 155,
  sym_keep_statement = 156,
  sym_drop_statement = 157,
  sym_rank_statement = 158,
  sym_repeat_statement = 159,
  sym_repeat_body = 160,
  sym_repeat_until_body = 161,
  sym_until_statement = 162,
  sym_invalid_flow_reserved_statement = 163,
  sym_inline_agic = 164,
  sym_inline_agic_body = 165,
  sym_par_clause = 166,
  sym_position_clause = 167,
  sym_rank_selection_clause = 168,
  sym_runnable = 169,
  sym_agent = 170,
  sym_local_name = 171,
  sym_directive = 172,
  sym_directive_key = 173,
  sym_directive_op = 174,
  sym_directive_value = 175,
  sym__directives = 176,
  sym_settings = 177,
  sym_context_setting = 178,
  sym_instruct_setting = 179,
  sym_text_ref = 180,
  sym_messages = 181,
  sym_message = 182,
  sym_unroled_message = 183,
  sym__unroled_message_initial_line = 184,
  sym__unroled_message_continuation_line = 185,
  sym_invalid_agic_reserved_message = 186,
  sym_role = 187,
  sym__pass_statement = 188,
  sym__flow_reserved_word = 189,
  sym__agic_reserved_word = 190,
  sym_assign_operator = 191,
  sym_type_name = 192,
  sym_text_line = 193,
  aux_sym_source_file_repeat1 = 194,
  aux_sym_type_repeat1 = 195,
  aux_sym_struct_body_repeat1 = 196,
  aux_sym_cap_body_repeat1 = 197,
  aux_sym_cap_body_repeat2 = 198,
  aux_sym_text_body_repeat1 = 199,
  aux_sym__nested_text_body_repeat1 = 200,
  aux_sym_params_repeat1 = 201,
  aux_sym_statements_repeat1 = 202,
  aux_sym_implicit_run_statement_repeat1 = 203,
  aux_sym__directives_repeat1 = 204,
  aux_sym_messages_repeat1 = 205,
  aux_sym_unroled_message_repeat1 = 206,
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
  [17] = 13,
  [18] = 11,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 21,
  [28] = 20,
  [29] = 29,
  [30] = 20,
  [31] = 24,
  [32] = 32,
  [33] = 26,
  [34] = 23,
  [35] = 22,
  [36] = 29,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 38,
  [46] = 46,
  [47] = 39,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 42,
  [53] = 41,
  [54] = 40,
  [55] = 44,
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
  [107] = 69,
  [108] = 84,
  [109] = 79,
  [110] = 85,
  [111] = 64,
  [112] = 65,
  [113] = 86,
  [114] = 87,
  [115] = 88,
  [116] = 89,
  [117] = 90,
  [118] = 91,
  [119] = 92,
  [120] = 93,
  [121] = 94,
  [122] = 61,
  [123] = 95,
  [124] = 106,
  [125] = 96,
  [126] = 49,
  [127] = 97,
  [128] = 62,
  [129] = 98,
  [130] = 99,
  [131] = 100,
  [132] = 101,
  [133] = 66,
  [134] = 67,
  [135] = 68,
  [136] = 80,
  [137] = 82,
  [138] = 102,
  [139] = 103,
  [140] = 56,
  [141] = 104,
  [142] = 70,
  [143] = 81,
  [144] = 63,
  [145] = 71,
  [146] = 57,
  [147] = 72,
  [148] = 73,
  [149] = 58,
  [150] = 74,
  [151] = 75,
  [152] = 105,
  [153] = 50,
  [154] = 83,
  [155] = 59,
  [156] = 76,
  [157] = 77,
  [158] = 78,
  [159] = 60,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 105,
  [170] = 50,
  [171] = 171,
  [172] = 105,
  [173] = 173,
  [174] = 50,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 24,
  [186] = 23,
  [187] = 26,
  [188] = 188,
  [189] = 22,
  [190] = 29,
  [191] = 38,
  [192] = 39,
  [193] = 164,
  [194] = 160,
  [195] = 162,
  [196] = 42,
  [197] = 46,
  [198] = 43,
  [199] = 41,
  [200] = 200,
  [201] = 201,
  [202] = 22,
  [203] = 203,
  [204] = 204,
  [205] = 40,
  [206] = 44,
  [207] = 29,
  [208] = 208,
  [209] = 57,
  [210] = 106,
  [211] = 62,
  [212] = 82,
  [213] = 83,
  [214] = 60,
  [215] = 84,
  [216] = 85,
  [217] = 86,
  [218] = 87,
  [219] = 88,
  [220] = 89,
  [221] = 90,
  [222] = 91,
  [223] = 92,
  [224] = 93,
  [225] = 94,
  [226] = 95,
  [227] = 61,
  [228] = 96,
  [229] = 49,
  [230] = 97,
  [231] = 63,
  [232] = 98,
  [233] = 99,
  [234] = 100,
  [235] = 101,
  [236] = 236,
  [237] = 237,
  [238] = 64,
  [239] = 65,
  [240] = 240,
  [241] = 241,
  [242] = 66,
  [243] = 102,
  [244] = 67,
  [245] = 68,
  [246] = 69,
  [247] = 70,
  [248] = 248,
  [249] = 71,
  [250] = 250,
  [251] = 72,
  [252] = 73,
  [253] = 103,
  [254] = 74,
  [255] = 75,
  [256] = 104,
  [257] = 76,
  [258] = 77,
  [259] = 78,
  [260] = 79,
  [261] = 165,
  [262] = 80,
  [263] = 58,
  [264] = 264,
  [265] = 265,
  [266] = 105,
  [267] = 50,
  [268] = 81,
  [269] = 56,
  [270] = 59,
  [271] = 44,
  [272] = 40,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 104,
  [278] = 278,
  [279] = 102,
  [280] = 173,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 105,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 287,
  [291] = 291,
  [292] = 292,
  [293] = 103,
  [294] = 287,
  [295] = 50,
  [296] = 50,
  [297] = 105,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 302,
  [304] = 302,
  [305] = 305,
  [306] = 165,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 105,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 50,
  [321] = 321,
  [322] = 322,
  [323] = 105,
  [324] = 50,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 165,
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
  [340] = 105,
  [341] = 41,
  [342] = 50,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
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
  [368] = 105,
  [369] = 50,
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
  [397] = 383,
  [398] = 398,
  [399] = 384,
  [400] = 385,
  [401] = 386,
  [402] = 383,
  [403] = 384,
  [404] = 385,
  [405] = 386,
  [406] = 406,
  [407] = 407,
  [408] = 407,
  [409] = 407,
  [410] = 410,
  [411] = 411,
  [412] = 411,
  [413] = 413,
  [414] = 411,
  [415] = 413,
  [416] = 410,
  [417] = 413,
  [418] = 410,
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
  [433] = 428,
  [434] = 419,
  [435] = 435,
  [436] = 427,
  [437] = 437,
  [438] = 432,
  [439] = 439,
  [440] = 440,
  [441] = 421,
  [442] = 422,
  [443] = 419,
  [444] = 444,
  [445] = 427,
  [446] = 446,
  [447] = 447,
  [448] = 422,
  [449] = 431,
  [450] = 432,
  [451] = 428,
  [452] = 431,
  [453] = 453,
  [454] = 421,
  [455] = 453,
  [456] = 439,
  [457] = 439,
  [458] = 453,
  [459] = 459,
  [460] = 460,
  [461] = 459,
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
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 475,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 477,
  [488] = 488,
  [489] = 476,
  [490] = 480,
  [491] = 482,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 484,
  [498] = 492,
  [499] = 499,
  [500] = 478,
  [501] = 479,
  [502] = 481,
  [503] = 503,
  [504] = 480,
  [505] = 505,
  [506] = 482,
  [507] = 478,
  [508] = 475,
  [509] = 479,
  [510] = 484,
  [511] = 485,
  [512] = 477,
  [513] = 488,
  [514] = 476,
  [515] = 488,
  [516] = 492,
  [517] = 477,
  [518] = 486,
  [519] = 486,
  [520] = 481,
  [521] = 505,
  [522] = 505,
  [523] = 485,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 524,
  [532] = 528,
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
  [543] = 105,
  [544] = 524,
  [545] = 537,
  [546] = 542,
  [547] = 50,
  [548] = 548,
  [549] = 537,
  [550] = 542,
  [551] = 528,
  [552] = 536,
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
  [565] = 466,
  [566] = 566,
  [567] = 567,
  [568] = 568,
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
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 585,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 558,
  [600] = 600,
  [601] = 567,
  [602] = 569,
  [603] = 603,
  [604] = 582,
  [605] = 583,
  [606] = 586,
  [607] = 590,
  [608] = 608,
  [609] = 600,
  [610] = 610,
  [611] = 611,
  [612] = 610,
  [613] = 613,
  [614] = 608,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 466,
  [620] = 585,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 592,
  [626] = 593,
  [627] = 592,
  [628] = 593,
  [629] = 594,
  [630] = 630,
  [631] = 596,
  [632] = 594,
  [633] = 598,
  [634] = 558,
  [635] = 635,
  [636] = 567,
  [637] = 582,
  [638] = 583,
  [639] = 586,
  [640] = 596,
  [641] = 590,
  [642] = 597,
  [643] = 600,
  [644] = 610,
  [645] = 613,
  [646] = 608,
  [647] = 598,
  [648] = 567,
  [649] = 613,
  [650] = 617,
  [651] = 651,
  [652] = 615,
  [653] = 653,
  [654] = 651,
  [655] = 617,
  [656] = 651,
  [657] = 615,
  [658] = 597,
  [659] = 659,
  [660] = 660,
  [661] = 660,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 50,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 681,
  [690] = 690,
  [691] = 668,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 681,
  [696] = 660,
  [697] = 682,
  [698] = 682,
  [699] = 666,
  [700] = 667,
  [701] = 668,
  [702] = 105,
  [703] = 703,
  [704] = 684,
  [705] = 684,
  [706] = 679,
  [707] = 703,
  [708] = 105,
  [709] = 703,
  [710] = 50,
  [711] = 711,
  [712] = 712,
  [713] = 666,
  [714] = 670,
  [715] = 715,
  [716] = 667,
  [717] = 670,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 720,
  [731] = 382,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 734,
  [740] = 740,
  [741] = 741,
  [742] = 741,
  [743] = 727,
  [744] = 727,
  [745] = 745,
  [746] = 734,
  [747] = 741,
  [748] = 741,
  [749] = 741,
  [750] = 741,
  [751] = 741,
  [752] = 741,
  [753] = 741,
  [754] = 741,
  [755] = 741,
  [756] = 741,
  [757] = 757,
  [758] = 741,
  [759] = 720,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 719,
  [766] = 763,
  [767] = 764,
  [768] = 735,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 734,
  [774] = 774,
  [775] = 763,
  [776] = 764,
  [777] = 719,
  [778] = 778,
  [779] = 779,
  [780] = 735,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 741,
  [785] = 727,
  [786] = 772,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 772,
  [791] = 791,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(330);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 1,
        '#', 336,
        '(', 459,
        ')', 460,
        '+', 58,
        ',', 461,
        '-', 59,
        ':', 458,
        '=', 354,
        '?', 456,
        'B', 477,
        'J', 479,
        'N', 482,
        'P', 463,
        'T', 467,
        '[', 61,
        '_', 344,
        'a', 147,
        'b', 219,
        'c', 63,
        'd', 111,
        'e', 64,
        'f', 158,
        'g', 70,
        'h', 73,
        'i', 208,
        'k', 122,
        'l', 86,
        'm', 66,
        'n', 230,
        'p', 67,
        'r', 75,
        's', 91,
        't', 68,
        'u', 209,
        'w', 166,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(484);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(332);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 826,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 860,
        'r', 862,
        's', 872,
        't', 864,
        'u', 958,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 828,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(5);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 829,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 6,
        ' ', 6,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(601);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1034);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 830,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 999,
        'r', 862,
        's', 872,
        't', 864,
        'u', 958,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 832,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 958,
        'w', 927,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(602);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 1039,
        ' ', 1039,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 18,
        ' ', 18,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 1037,
        ' ', 1037,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 21,
        ' ', 21,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 22,
        ' ', 22,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 958,
        'w', 927,
        '\t', 26,
        ' ', 26,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 958,
        'w', 927,
        '\t', 24,
        ' ', 24,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 958,
        'w', 927,
        '\t', 1035,
        ' ', 1035,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 1,
        '#', 30,
        '(', 459,
        ')', 460,
        '-', 60,
        ':', 458,
        '_', 344,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(335);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(334);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(333);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(331);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ')', 460,
        ',', 461,
        '-', 60,
        ':', 458,
        '[', 61,
        'b', 550,
        'p', 491,
        't', 548,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '+', 369,
        '-', 370,
        '=', 354,
        '\t', 357,
        '\f', 357,
        ' ', 357,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '-', 371,
        ':', 458,
        'p', 491,
        '\t', 358,
        '\f', 358,
        ' ', 358,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '-', 371,
        ':', 458,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'b', 219,
        'p', 83,
        's', 140,
        't', 235,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'b', 550,
        'p', 491,
        't', 548,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'd', 505,
        'n', 547,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'f', 523,
        'l', 493,
        'p', 491,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        'a', 568,
        'd', 557,
        'g', 485,
        'k', 507,
        'm', 486,
        'r', 487,
        's', 498,
        '\t', 365,
        '\f', 365,
        ' ', 365,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 52:
      if (lookahead == '\f') SKIP(52);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        '\f', 851,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 958,
        '\t', 53,
        ' ', 53,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 54:
      if (lookahead == '\f') SKIP(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(457);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(457);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(343);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(154);
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
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(172);
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(169);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(414);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(414);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(430);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(412);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(402);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(445);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(447);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(426);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 306:
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 307:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 308:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 309:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 310:
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 311:
      if (lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 312:
      if (lookahead == 'y') ADVANCE(102);
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
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 317:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(317);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 318:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(318);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 319:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(319);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(600);
      END_STATE();
    case 320:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(320);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'c') ADVANCE(517);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(564);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(603);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 321:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(321);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 322:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(322);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 323:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(323);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(599);
      END_STATE();
    case 324:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(324);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(607);
      END_STATE();
    case 325:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(325);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 326:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(326);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(610);
      END_STATE();
    case 327:
      if (eof) ADVANCE(330);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') SKIP(327);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 328:
      if (eof) ADVANCE(330);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 1,
        '#', 29,
        'a', 146,
        'c', 152,
        'f', 192,
        'i', 208,
        'p', 255,
        's', 133,
        't', 77,
        'w', 166,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(328);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(484);
      END_STATE();
    case 329:
      if (eof) ADVANCE(330);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 1,
        '#', 29,
        'a', 515,
        'c', 517,
        'f', 530,
        'i', 538,
        'p', 564,
        's', 512,
        't', 492,
        'w', 524,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(329);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '+', 369,
        '-', 370,
        '=', 354,
        '\t', 357,
        '\f', 357,
        ' ', 357,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '-', 371,
        ':', 458,
        'p', 491,
        '\t', 358,
        '\f', 358,
        ' ', 358,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        '-', 371,
        ':', 458,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'b', 550,
        'p', 491,
        't', 548,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'd', 505,
        'n', 547,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        ':', 458,
        'f', 523,
        'l', 493,
        'p', 491,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 331,
        '\r', 37,
        '#', 336,
        'a', 568,
        'd', 557,
        'g', 485,
        'k', 507,
        'm', 486,
        'r', 487,
        's', 498,
        '\t', 365,
        '\f', 365,
        ' ', 365,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_with_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_agic_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 't') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(521);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'f') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead == 'o') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'k') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'k') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'k') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'k') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == 's') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 's') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 's') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 's') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'v') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'w') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'x') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 599,
        '\r', 1,
        '#', 612,
        'a', 684,
        'b', 749,
        'c', 618,
        'd', 748,
        'e', 620,
        'f', 725,
        'g', 623,
        'h', 665,
        'i', 738,
        'k', 666,
        'l', 664,
        'm', 621,
        'p', 776,
        'r', 625,
        's', 638,
        't', 622,
        'u', 739,
        'w', 703,
        '\t', 599,
        ' ', 599,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 600,
        '\r', 1,
        '#', 612,
        'a', 685,
        'c', 689,
        'f', 726,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 626,
        'r', 667,
        's', 671,
        't', 628,
        'u', 794,
        'w', 703,
        '\t', 600,
        ' ', 600,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 601,
        '\r', 1,
        '#', 612,
        'a', 789,
        'c', 752,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 627,
        'r', 667,
        's', 678,
        't', 763,
        'u', 794,
        '\t', 601,
        ' ', 601,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 602,
        '\r', 1,
        '#', 612,
        'a', 788,
        'b', 749,
        'c', 619,
        'd', 748,
        'e', 620,
        'f', 753,
        'g', 623,
        'h', 665,
        'k', 666,
        'l', 664,
        'm', 621,
        'r', 625,
        's', 639,
        't', 634,
        'u', 739,
        '\t', 602,
        ' ', 602,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 603,
        '\r', 1,
        '#', 612,
        'a', 515,
        'c', 517,
        'f', 530,
        'i', 538,
        'p', 564,
        's', 512,
        't', 492,
        'w', 524,
        '\t', 603,
        ' ', 603,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 604,
        '\r', 1,
        '#', 612,
        'a', 686,
        'c', 689,
        'f', 726,
        'i', 738,
        'p', 776,
        's', 677,
        't', 629,
        'w', 703,
        '\t', 604,
        ' ', 604,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(605);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 606,
        '\r', 1,
        '#', 612,
        'a', 684,
        'b', 749,
        'c', 618,
        'd', 748,
        'e', 620,
        'f', 725,
        'g', 623,
        'h', 665,
        'i', 738,
        'k', 666,
        'l', 664,
        'm', 621,
        'p', 776,
        'r', 625,
        's', 638,
        't', 622,
        'u', 740,
        'w', 703,
        '\t', 607,
        ' ', 607,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 606,
        '\r', 1,
        '#', 612,
        'a', 684,
        'b', 749,
        'c', 618,
        'd', 748,
        'e', 620,
        'f', 725,
        'g', 623,
        'h', 665,
        'i', 738,
        'k', 666,
        'l', 664,
        'm', 621,
        'p', 776,
        'r', 625,
        's', 638,
        't', 622,
        'u', 747,
        'w', 703,
        '\t', 607,
        ' ', 607,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 611,
        '\r', 1,
        '#', 612,
        'a', 685,
        'c', 689,
        'f', 726,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 626,
        'r', 667,
        's', 671,
        't', 628,
        'u', 794,
        'w', 703,
        '\t', 1033,
        ' ', 1033,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 611,
        '\r', 1,
        '#', 612,
        'a', 685,
        'c', 689,
        'f', 726,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 626,
        'r', 667,
        's', 671,
        't', 628,
        'u', 794,
        'w', 703,
        '\t', 608,
        ' ', 608,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 611,
        '\r', 1,
        '#', 612,
        'a', 685,
        'c', 689,
        'f', 726,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 626,
        'r', 667,
        's', 671,
        't', 628,
        'u', 794,
        'w', 703,
        '\t', 609,
        ' ', 609,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 611,
        '\r', 1,
        '#', 612,
        'a', 685,
        'c', 689,
        'f', 726,
        'h', 630,
        'i', 738,
        'm', 760,
        'p', 626,
        'r', 667,
        's', 671,
        't', 628,
        'u', 794,
        'w', 703,
        '\t', 610,
        ' ', 610,
      );
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead != 0) ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(616);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'h') ADVANCE(754);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(695);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'u') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead == 's') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 's') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 'k') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead == 't') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == 't') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 'k') ADVANCE(705);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(772);
      if (lookahead == 'k') ADVANCE(701);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == 'k') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(761);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(761);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(694);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(694);
      if (lookahead == 's') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(754);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(715);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 826,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 860,
        'r', 862,
        's', 872,
        't', 864,
        'u', 959,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 826,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 860,
        'r', 862,
        's', 872,
        't', 864,
        'u', 966,
        '\t', 827,
        ' ', 827,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 828,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 828,
        ' ', 828,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 829,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 829,
        ' ', 829,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 830,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 999,
        'r', 862,
        's', 872,
        't', 864,
        'u', 959,
        '\t', 831,
        ' ', 831,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 830,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 856,
        'k', 893,
        'l', 897,
        'm', 857,
        'p', 999,
        'r', 862,
        's', 872,
        't', 864,
        'u', 966,
        '\t', 831,
        ' ', 831,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 832,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 959,
        'w', 927,
        '\t', 833,
        ' ', 833,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 832,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 966,
        'w', 927,
        '\t', 833,
        ' ', 833,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 1039,
        ' ', 1039,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 834,
        ' ', 834,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 835,
        ' ', 835,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 837,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 967,
        'w', 927,
        '\t', 836,
        ' ', 836,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 1037,
        ' ', 1037,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 838,
        ' ', 838,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 839,
        ' ', 839,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 841,
        '\r', 1,
        '#', 846,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 967,
        '\t', 840,
        ' ', 840,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 959,
        'w', 927,
        '\t', 844,
        ' ', 844,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 966,
        'w', 927,
        '\t', 845,
        ' ', 845,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 966,
        'w', 927,
        '\t', 843,
        ' ', 843,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 332,
        '\f', 842,
        '\r', 1,
        '#', 846,
        'a', 912,
        'b', 969,
        'c', 853,
        'd', 968,
        'e', 855,
        'f', 949,
        'g', 861,
        'h', 900,
        'i', 964,
        'k', 893,
        'l', 897,
        'm', 858,
        'p', 991,
        'r', 863,
        's', 874,
        't', 859,
        'u', 966,
        'w', 927,
        '\t', 1035,
        ' ', 1035,
      );
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(848);
      if (lookahead != 0) ADVANCE(847);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(847);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(850);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 851,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 959,
        '\t', 852,
        ' ', 852,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 851,
        'a', 998,
        'b', 969,
        'c', 854,
        'd', 968,
        'e', 855,
        'f', 971,
        'g', 861,
        'h', 900,
        'k', 893,
        'l', 897,
        'm', 858,
        'r', 863,
        's', 873,
        't', 865,
        'u', 966,
        '\t', 852,
        ' ', 852,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(944);
      if (lookahead == 'h') ADVANCE(979);
      if (lookahead == 'o') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == 'h') ADVANCE(922);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1003);
      if (lookahead == 's') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'h') ADVANCE(922);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'h') ADVANCE(922);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == 'k') ADVANCE(926);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'k') ADVANCE(929);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(869);
      if (lookahead == 'p') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == 'r') ADVANCE(1023);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(980);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(980);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(980);
      if (lookahead == 't') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'g') ADVANCE(919);
      if (lookahead == 's') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead == 's') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead == 'u') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(908);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(911);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(910);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(989);
      if (lookahead == 'r') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(906);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(977);
      if (lookahead == 's') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'x') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(1031);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1032);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1033,
        '#', 1042,
        'a', 1091,
        'c', 1093,
        'f', 1114,
        'h', 1053,
        'i', 1122,
        'm', 1136,
        'p', 1055,
        'r', 1079,
        's', 1082,
        't', 1050,
        'u', 1156,
        'w', 1102,
        '\t', 1033,
        ' ', 1033,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(1034);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1036,
        '#', 1042,
        'a', 1090,
        'b', 1130,
        'c', 1043,
        'd', 1129,
        'e', 1045,
        'f', 1113,
        'g', 1049,
        'h', 1077,
        'i', 1122,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'p', 1149,
        'r', 1051,
        's', 1061,
        't', 1047,
        'u', 1123,
        'w', 1102,
        '\t', 1035,
        ' ', 1035,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1036,
        '#', 1042,
        'a', 1090,
        'b', 1130,
        'c', 1043,
        'd', 1129,
        'e', 1045,
        'f', 1113,
        'g', 1049,
        'h', 1077,
        'i', 1122,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'p', 1149,
        'r', 1051,
        's', 1061,
        't', 1047,
        'u', 1124,
        'w', 1102,
        '\t', 1035,
        ' ', 1035,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1038,
        '#', 1042,
        'a', 1153,
        'b', 1130,
        'c', 1044,
        'd', 1129,
        'e', 1045,
        'f', 1134,
        'g', 1049,
        'h', 1077,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'r', 1051,
        's', 1062,
        't', 1054,
        'u', 1123,
        '\t', 1037,
        ' ', 1037,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1038,
        '#', 1042,
        'a', 1153,
        'b', 1130,
        'c', 1044,
        'd', 1129,
        'e', 1045,
        'f', 1134,
        'g', 1049,
        'h', 1077,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'r', 1051,
        's', 1062,
        't', 1054,
        'u', 1128,
        '\t', 1037,
        ' ', 1037,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1040,
        '#', 1042,
        'a', 1090,
        'b', 1130,
        'c', 1043,
        'd', 1129,
        'e', 1045,
        'f', 1113,
        'g', 1049,
        'h', 1077,
        'i', 1122,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'p', 1149,
        'r', 1051,
        's', 1061,
        't', 1047,
        'u', 1123,
        'w', 1102,
        '\t', 1039,
        ' ', 1039,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1040,
        '#', 1042,
        'a', 1090,
        'b', 1130,
        'c', 1043,
        'd', 1129,
        'e', 1045,
        'f', 1113,
        'g', 1049,
        'h', 1077,
        'i', 1122,
        'k', 1078,
        'l', 1076,
        'm', 1046,
        'p', 1149,
        'r', 1051,
        's', 1061,
        't', 1047,
        'u', 1128,
        'w', 1102,
        '\t', 1039,
        ' ', 1039,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1112);
      if (lookahead == 'h') ADVANCE(1135);
      if (lookahead == 'o') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1100);
      if (lookahead == 'h') ADVANCE(1099);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1153);
      if (lookahead == 'o') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1121);
      if (lookahead == 'e') ADVANCE(1144);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1101);
      if (lookahead == 'h') ADVANCE(1099);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1155);
      if (lookahead == 'r') ADVANCE(1133);
      if (lookahead == 's') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'k') ADVANCE(1097);
      if (lookahead == 'o') ADVANCE(1148);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1073);
      if (lookahead == 'o') ADVANCE(1148);
      if (lookahead == 't') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == 't') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == 'k') ADVANCE(1105);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1134);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1134);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1098);
      if (lookahead == 's') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1135);
      if (lookahead == 'o') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1121);
      if (lookahead == 'u') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead == 's') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1086);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1088);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1087);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1178);
      if (lookahead == 'r') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1085);
      if (lookahead == 's') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1133);
      if (lookahead == 's') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 328},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 318},
  [12] = {.lex_state = 318},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 322},
  [15] = {.lex_state = 322},
  [16] = {.lex_state = 322},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 325},
  [23] = {.lex_state = 323},
  [24] = {.lex_state = 323},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 323},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 325},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 324},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 324},
  [34] = {.lex_state = 324},
  [35] = {.lex_state = 327},
  [36] = {.lex_state = 327},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 323},
  [39] = {.lex_state = 323},
  [40] = {.lex_state = 325},
  [41] = {.lex_state = 323},
  [42] = {.lex_state = 323},
  [43] = {.lex_state = 323},
  [44] = {.lex_state = 325},
  [45] = {.lex_state = 324},
  [46] = {.lex_state = 318},
  [47] = {.lex_state = 324},
  [48] = {.lex_state = 318},
  [49] = {.lex_state = 318},
  [50] = {.lex_state = 318},
  [51] = {.lex_state = 324},
  [52] = {.lex_state = 324},
  [53] = {.lex_state = 324},
  [54] = {.lex_state = 327},
  [55] = {.lex_state = 327},
  [56] = {.lex_state = 318},
  [57] = {.lex_state = 318},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 318},
  [60] = {.lex_state = 318},
  [61] = {.lex_state = 318},
  [62] = {.lex_state = 318},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 318},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 318},
  [67] = {.lex_state = 318},
  [68] = {.lex_state = 318},
  [69] = {.lex_state = 318},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 318},
  [72] = {.lex_state = 318},
  [73] = {.lex_state = 318},
  [74] = {.lex_state = 318},
  [75] = {.lex_state = 318},
  [76] = {.lex_state = 318},
  [77] = {.lex_state = 318},
  [78] = {.lex_state = 318},
  [79] = {.lex_state = 318},
  [80] = {.lex_state = 318},
  [81] = {.lex_state = 318},
  [82] = {.lex_state = 318},
  [83] = {.lex_state = 318},
  [84] = {.lex_state = 318},
  [85] = {.lex_state = 318},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 318},
  [88] = {.lex_state = 318},
  [89] = {.lex_state = 318},
  [90] = {.lex_state = 318},
  [91] = {.lex_state = 318},
  [92] = {.lex_state = 318},
  [93] = {.lex_state = 318},
  [94] = {.lex_state = 318},
  [95] = {.lex_state = 318},
  [96] = {.lex_state = 318},
  [97] = {.lex_state = 318},
  [98] = {.lex_state = 318},
  [99] = {.lex_state = 318},
  [100] = {.lex_state = 318},
  [101] = {.lex_state = 318},
  [102] = {.lex_state = 318},
  [103] = {.lex_state = 318},
  [104] = {.lex_state = 318},
  [105] = {.lex_state = 318},
  [106] = {.lex_state = 318},
  [107] = {.lex_state = 322},
  [108] = {.lex_state = 322},
  [109] = {.lex_state = 322},
  [110] = {.lex_state = 322},
  [111] = {.lex_state = 322},
  [112] = {.lex_state = 322},
  [113] = {.lex_state = 322},
  [114] = {.lex_state = 322},
  [115] = {.lex_state = 322},
  [116] = {.lex_state = 322},
  [117] = {.lex_state = 322},
  [118] = {.lex_state = 322},
  [119] = {.lex_state = 322},
  [120] = {.lex_state = 322},
  [121] = {.lex_state = 322},
  [122] = {.lex_state = 322},
  [123] = {.lex_state = 322},
  [124] = {.lex_state = 322},
  [125] = {.lex_state = 322},
  [126] = {.lex_state = 322},
  [127] = {.lex_state = 322},
  [128] = {.lex_state = 322},
  [129] = {.lex_state = 322},
  [130] = {.lex_state = 322},
  [131] = {.lex_state = 322},
  [132] = {.lex_state = 322},
  [133] = {.lex_state = 322},
  [134] = {.lex_state = 322},
  [135] = {.lex_state = 322},
  [136] = {.lex_state = 322},
  [137] = {.lex_state = 322},
  [138] = {.lex_state = 322},
  [139] = {.lex_state = 322},
  [140] = {.lex_state = 322},
  [141] = {.lex_state = 322},
  [142] = {.lex_state = 322},
  [143] = {.lex_state = 322},
  [144] = {.lex_state = 322},
  [145] = {.lex_state = 322},
  [146] = {.lex_state = 322},
  [147] = {.lex_state = 322},
  [148] = {.lex_state = 322},
  [149] = {.lex_state = 322},
  [150] = {.lex_state = 322},
  [151] = {.lex_state = 322},
  [152] = {.lex_state = 322},
  [153] = {.lex_state = 322},
  [154] = {.lex_state = 322},
  [155] = {.lex_state = 322},
  [156] = {.lex_state = 322},
  [157] = {.lex_state = 322},
  [158] = {.lex_state = 322},
  [159] = {.lex_state = 322},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 319},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 319},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 319},
  [167] = {.lex_state = 319},
  [168] = {.lex_state = 319},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 319},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 319},
  [176] = {.lex_state = 319},
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
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 20},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 319},
  [194] = {.lex_state = 319},
  [195] = {.lex_state = 319},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 319},
  [201] = {.lex_state = 319},
  [202] = {.lex_state = 326},
  [203] = {.lex_state = 319},
  [204] = {.lex_state = 319},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 326},
  [208] = {.lex_state = 328},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
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
  [236] = {.lex_state = 319},
  [237] = {.lex_state = 319},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 319},
  [241] = {.lex_state = 319},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 328},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 319},
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
  [261] = {.lex_state = 319},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 319},
  [265] = {.lex_state = 319},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 326},
  [272] = {.lex_state = 326},
  [273] = {.lex_state = 319},
  [274] = {.lex_state = 319},
  [275] = {.lex_state = 319},
  [276] = {.lex_state = 319},
  [277] = {.lex_state = 319},
  [278] = {.lex_state = 319},
  [279] = {.lex_state = 319},
  [280] = {.lex_state = 319},
  [281] = {.lex_state = 319},
  [282] = {.lex_state = 319},
  [283] = {.lex_state = 319},
  [284] = {.lex_state = 319},
  [285] = {.lex_state = 319},
  [286] = {.lex_state = 319},
  [287] = {.lex_state = 48},
  [288] = {.lex_state = 319},
  [289] = {.lex_state = 319},
  [290] = {.lex_state = 48},
  [291] = {.lex_state = 319},
  [292] = {.lex_state = 319},
  [293] = {.lex_state = 319},
  [294] = {.lex_state = 48},
  [295] = {.lex_state = 319},
  [296] = {.lex_state = 52},
  [297] = {.lex_state = 52},
  [298] = {.lex_state = 320},
  [299] = {.lex_state = 320},
  [300] = {.lex_state = 320},
  [301] = {.lex_state = 320},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 320},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 329},
  [308] = {.lex_state = 329},
  [309] = {.lex_state = 321},
  [310] = {.lex_state = 321},
  [311] = {.lex_state = 320},
  [312] = {.lex_state = 328},
  [313] = {.lex_state = 328},
  [314] = {.lex_state = 328},
  [315] = {.lex_state = 328},
  [316] = {.lex_state = 328},
  [317] = {.lex_state = 328},
  [318] = {.lex_state = 328},
  [319] = {.lex_state = 328},
  [320] = {.lex_state = 320},
  [321] = {.lex_state = 328},
  [322] = {.lex_state = 328},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 328},
  [326] = {.lex_state = 328},
  [327] = {.lex_state = 328},
  [328] = {.lex_state = 328},
  [329] = {.lex_state = 328},
  [330] = {.lex_state = 328},
  [331] = {.lex_state = 328},
  [332] = {.lex_state = 328},
  [333] = {.lex_state = 328},
  [334] = {.lex_state = 328},
  [335] = {.lex_state = 328},
  [336] = {.lex_state = 328},
  [337] = {.lex_state = 328},
  [338] = {.lex_state = 320},
  [339] = {.lex_state = 320},
  [340] = {.lex_state = 329},
  [341] = {.lex_state = 321},
  [342] = {.lex_state = 329},
  [343] = {.lex_state = 329},
  [344] = {.lex_state = 329},
  [345] = {.lex_state = 328},
  [346] = {.lex_state = 328},
  [347] = {.lex_state = 328},
  [348] = {.lex_state = 328},
  [349] = {.lex_state = 328},
  [350] = {.lex_state = 328},
  [351] = {.lex_state = 328},
  [352] = {.lex_state = 328},
  [353] = {.lex_state = 328},
  [354] = {.lex_state = 328},
  [355] = {.lex_state = 328},
  [356] = {.lex_state = 328},
  [357] = {.lex_state = 328},
  [358] = {.lex_state = 328},
  [359] = {.lex_state = 328},
  [360] = {.lex_state = 328},
  [361] = {.lex_state = 328},
  [362] = {.lex_state = 328},
  [363] = {.lex_state = 328},
  [364] = {.lex_state = 328},
  [365] = {.lex_state = 328},
  [366] = {.lex_state = 328},
  [367] = {.lex_state = 328},
  [368] = {.lex_state = 328},
  [369] = {.lex_state = 328},
  [370] = {.lex_state = 328},
  [371] = {.lex_state = 328},
  [372] = {.lex_state = 328},
  [373] = {.lex_state = 328},
  [374] = {.lex_state = 328},
  [375] = {.lex_state = 328},
  [376] = {.lex_state = 328},
  [377] = {.lex_state = 328},
  [378] = {.lex_state = 328},
  [379] = {.lex_state = 328},
  [380] = {.lex_state = 328},
  [381] = {.lex_state = 328},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 45},
  [385] = {.lex_state = 45},
  [386] = {.lex_state = 43},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 45},
  [400] = {.lex_state = 45},
  [401] = {.lex_state = 43},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 45},
  [404] = {.lex_state = 45},
  [405] = {.lex_state = 43},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 40},
  [408] = {.lex_state = 40},
  [409] = {.lex_state = 40},
  [410] = {.lex_state = 38},
  [411] = {.lex_state = 57},
  [412] = {.lex_state = 57},
  [413] = {.lex_state = 57},
  [414] = {.lex_state = 57},
  [415] = {.lex_state = 57},
  [416] = {.lex_state = 38},
  [417] = {.lex_state = 57},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 49},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 41},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 49},
  [424] = {.lex_state = 38},
  [425] = {.lex_state = 49},
  [426] = {.lex_state = 38},
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 42},
  [429] = {.lex_state = 44},
  [430] = {.lex_state = 49},
  [431] = {.lex_state = 49},
  [432] = {.lex_state = 49},
  [433] = {.lex_state = 42},
  [434] = {.lex_state = 49},
  [435] = {.lex_state = 27},
  [436] = {.lex_state = 49},
  [437] = {.lex_state = 44},
  [438] = {.lex_state = 49},
  [439] = {.lex_state = 41},
  [440] = {.lex_state = 49},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 41},
  [443] = {.lex_state = 49},
  [444] = {.lex_state = 49},
  [445] = {.lex_state = 49},
  [446] = {.lex_state = 49},
  [447] = {.lex_state = 49},
  [448] = {.lex_state = 41},
  [449] = {.lex_state = 49},
  [450] = {.lex_state = 49},
  [451] = {.lex_state = 42},
  [452] = {.lex_state = 49},
  [453] = {.lex_state = 49},
  [454] = {.lex_state = 41},
  [455] = {.lex_state = 49},
  [456] = {.lex_state = 41},
  [457] = {.lex_state = 41},
  [458] = {.lex_state = 49},
  [459] = {.lex_state = 55},
  [460] = {.lex_state = 39},
  [461] = {.lex_state = 55},
  [462] = {.lex_state = 55},
  [463] = {.lex_state = 55},
  [464] = {.lex_state = 55},
  [465] = {.lex_state = 55},
  [466] = {.lex_state = 39},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 38},
  [469] = {.lex_state = 38},
  [470] = {.lex_state = 38},
  [471] = {.lex_state = 27},
  [472] = {.lex_state = 38},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 38},
  [475] = {.lex_state = 42},
  [476] = {.lex_state = 42},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 27},
  [479] = {.lex_state = 27},
  [480] = {.lex_state = 27},
  [481] = {.lex_state = 27},
  [482] = {.lex_state = 27},
  [483] = {.lex_state = 42},
  [484] = {.lex_state = 42},
  [485] = {.lex_state = 42},
  [486] = {.lex_state = 50},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 42},
  [489] = {.lex_state = 42},
  [490] = {.lex_state = 27},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 49},
  [493] = {.lex_state = 27},
  [494] = {.lex_state = 49},
  [495] = {.lex_state = 56},
  [496] = {.lex_state = 42},
  [497] = {.lex_state = 42},
  [498] = {.lex_state = 49},
  [499] = {.lex_state = 16},
  [500] = {.lex_state = 27},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 56},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 46},
  [506] = {.lex_state = 27},
  [507] = {.lex_state = 27},
  [508] = {.lex_state = 42},
  [509] = {.lex_state = 27},
  [510] = {.lex_state = 42},
  [511] = {.lex_state = 42},
  [512] = {.lex_state = 11},
  [513] = {.lex_state = 42},
  [514] = {.lex_state = 42},
  [515] = {.lex_state = 42},
  [516] = {.lex_state = 49},
  [517] = {.lex_state = 11},
  [518] = {.lex_state = 50},
  [519] = {.lex_state = 50},
  [520] = {.lex_state = 27},
  [521] = {.lex_state = 46},
  [522] = {.lex_state = 46},
  [523] = {.lex_state = 42},
  [524] = {.lex_state = 47},
  [525] = {.lex_state = 38},
  [526] = {.lex_state = 38},
  [527] = {.lex_state = 38},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 47},
  [530] = {.lex_state = 42},
  [531] = {.lex_state = 47},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 38},
  [534] = {.lex_state = 38},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 51},
  [538] = {.lex_state = 27},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 51},
  [543] = {.lex_state = 27},
  [544] = {.lex_state = 47},
  [545] = {.lex_state = 51},
  [546] = {.lex_state = 51},
  [547] = {.lex_state = 27},
  [548] = {.lex_state = 49},
  [549] = {.lex_state = 51},
  [550] = {.lex_state = 51},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 47},
  [554] = {.lex_state = 38},
  [555] = {.lex_state = 38},
  [556] = {.lex_state = 38},
  [557] = {.lex_state = 38},
  [558] = {.lex_state = 38},
  [559] = {.lex_state = 38},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 38},
  [562] = {.lex_state = 316},
  [563] = {.lex_state = 38},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 27},
  [567] = {.lex_state = 38},
  [568] = {.lex_state = 27},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 38},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 38},
  [578] = {.lex_state = 38},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 38},
  [581] = {.lex_state = 38},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 38},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 38},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 38},
  [588] = {.lex_state = 38},
  [589] = {.lex_state = 38},
  [590] = {.lex_state = 38},
  [591] = {.lex_state = 38},
  [592] = {.lex_state = 38},
  [593] = {.lex_state = 38},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 38},
  [596] = {.lex_state = 38},
  [597] = {.lex_state = 38},
  [598] = {.lex_state = 38},
  [599] = {.lex_state = 38},
  [600] = {.lex_state = 38},
  [601] = {.lex_state = 38},
  [602] = {.lex_state = 38},
  [603] = {.lex_state = 38},
  [604] = {.lex_state = 38},
  [605] = {.lex_state = 38},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 38},
  [608] = {.lex_state = 38},
  [609] = {.lex_state = 38},
  [610] = {.lex_state = 38},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 38},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 38},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 328},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 27},
  [619] = {.lex_state = 49},
  [620] = {.lex_state = 38},
  [621] = {.lex_state = 38},
  [622] = {.lex_state = 38},
  [623] = {.lex_state = 38},
  [624] = {.lex_state = 38},
  [625] = {.lex_state = 38},
  [626] = {.lex_state = 38},
  [627] = {.lex_state = 38},
  [628] = {.lex_state = 38},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 316},
  [631] = {.lex_state = 38},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 38},
  [634] = {.lex_state = 38},
  [635] = {.lex_state = 38},
  [636] = {.lex_state = 38},
  [637] = {.lex_state = 38},
  [638] = {.lex_state = 38},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 38},
  [641] = {.lex_state = 38},
  [642] = {.lex_state = 38},
  [643] = {.lex_state = 38},
  [644] = {.lex_state = 38},
  [645] = {.lex_state = 38},
  [646] = {.lex_state = 38},
  [647] = {.lex_state = 38},
  [648] = {.lex_state = 38},
  [649] = {.lex_state = 38},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 38},
  [652] = {.lex_state = 38},
  [653] = {.lex_state = 38},
  [654] = {.lex_state = 38},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 38},
  [657] = {.lex_state = 38},
  [658] = {.lex_state = 38},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 54},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 38},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 317},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 16},
  [676] = {.lex_state = 38},
  [677] = {.lex_state = 38},
  [678] = {.lex_state = 317},
  [679] = {.lex_state = 316},
  [680] = {.lex_state = 38},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 317},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 54},
  [686] = {.lex_state = 317},
  [687] = {.lex_state = 317},
  [688] = {.lex_state = 317},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 38},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 54},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 16},
  [703] = {.lex_state = 27},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 316},
  [707] = {.lex_state = 27},
  [708] = {.lex_state = 11},
  [709] = {.lex_state = 27},
  [710] = {.lex_state = 11},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 54},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 38},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 38},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 38},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 42},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 38},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 38},
  [731] = {.lex_state = 316},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 38},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 38},
  [739] = {.lex_state = 38},
  [740] = {.lex_state = 316},
  [741] = {.lex_state = 38},
  [742] = {.lex_state = 38},
  [743] = {.lex_state = 38},
  [744] = {.lex_state = 38},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 38},
  [747] = {.lex_state = 38},
  [748] = {.lex_state = 38},
  [749] = {.lex_state = 38},
  [750] = {.lex_state = 38},
  [751] = {.lex_state = 38},
  [752] = {.lex_state = 38},
  [753] = {.lex_state = 38},
  [754] = {.lex_state = 38},
  [755] = {.lex_state = 38},
  [756] = {.lex_state = 38},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 38},
  [759] = {.lex_state = 38},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 38},
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
  [785] = {.lex_state = 38},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
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
    [sym_source_file] = STATE(762),
    [sym_item] = STATE(208),
    [sym__trivia] = STATE(208),
    [sym_with] = STATE(347),
    [sym_struct] = STATE(347),
    [sym_psyche] = STATE(347),
    [sym_skill] = STATE(347),
    [sym_service] = STATE(347),
    [sym_prompt] = STATE(347),
    [sym_task] = STATE(347),
    [sym_chore] = STATE(347),
    [sym_instruct] = STATE(347),
    [sym_context] = STATE(347),
    [sym_agic] = STATE(347),
    [sym_flow] = STATE(347),
    [aux_sym_source_file_repeat1] = STATE(208),
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
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(354),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(366),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(353),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(348),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(377),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(349),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_flow_body] = STATE(365),
    [sym_statements] = STATE(330),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(37),
    [sym__pass_statement] = STATE(330),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym_statements] = STATE(336),
    [sym__flow_statement] = STATE(14),
    [sym__flow_operation] = STATE(14),
    [sym_let_statement] = STATE(14),
    [sym_run_statement] = STATE(14),
    [sym_implicit_run_statement] = STATE(14),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym_directive] = STATE(160),
    [sym_directive_key] = STATE(536),
    [sym__directives] = STATE(32),
    [sym__pass_statement] = STATE(336),
    [sym__flow_reserved_word] = STATE(516),
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
    [sym__trivia] = STATE(11),
    [sym__flow_statement] = STATE(11),
    [sym__flow_operation] = STATE(11),
    [sym_let_statement] = STATE(11),
    [sym_run_statement] = STATE(11),
    [sym_implicit_run_statement] = STATE(11),
    [sym__implicit_run_text_body_line] = STATE(24),
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
    [sym__flow_reserved_word] = STATE(498),
    [aux_sym_statements_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_blank_line] = ACTIONS(73),
    [sym_parent_doc_line] = ACTIONS(73),
    [sym_doc_line] = ACTIONS(73),
    [sym_comment_line] = ACTIONS(73),
    [sym_with_keyword] = ACTIONS(76),
    [sym_struct_keyword] = ACTIONS(76),
    [sym_psyche_keyword] = ACTIONS(76),
    [sym_skill_keyword] = ACTIONS(76),
    [sym_service_keyword] = ACTIONS(76),
    [sym_prompt_keyword] = ACTIONS(76),
    [sym_context_keyword] = ACTIONS(76),
    [sym_instruct_keyword] = ACTIONS(76),
    [sym_agic_keyword] = ACTIONS(76),
    [sym_task_keyword] = ACTIONS(76),
    [sym_chore_keyword] = ACTIONS(76),
    [sym_flow_keyword] = ACTIONS(76),
    [sym_flow_run_keyword] = ACTIONS(78),
    [sym_flow_let_keyword] = ACTIONS(81),
    [sym_flow_seek_keyword] = ACTIONS(84),
    [sym_flow_ask_keyword] = ACTIONS(87),
    [sym_flow_scatter_keyword] = ACTIONS(90),
    [sym_flow_storm_keyword] = ACTIONS(93),
    [sym_flow_gather_keyword] = ACTIONS(96),
    [sym_flow_settle_keyword] = ACTIONS(99),
    [sym_flow_map_keyword] = ACTIONS(102),
    [sym_flow_keep_keyword] = ACTIONS(105),
    [sym_flow_drop_keyword] = ACTIONS(108),
    [sym_flow_rank_keyword] = ACTIONS(111),
    [sym_flow_repeat_keyword] = ACTIONS(114),
    [sym_flow_until_keyword] = ACTIONS(76),
    [sym_flow_top_keyword] = ACTIONS(117),
    [sym_flow_bottom_keyword] = ACTIONS(117),
    [sym_flow_think_keyword] = ACTIONS(117),
    [sym_flow_use_keyword] = ACTIONS(117),
    [sym_thunk_keyword] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_unfold] = ACTIONS(117),
    [anon_sym_each] = ACTIONS(117),
    [anon_sym_fold] = ACTIONS(117),
    [anon_sym_sort] = ACTIONS(117),
    [anon_sym_head] = ACTIONS(117),
    [anon_sym_tail] = ACTIONS(117),
    [sym__implicit_run_raw_text] = ACTIONS(120),
  },
  [12] = {
    [sym__trivia] = STATE(13),
    [sym__flow_statement] = STATE(13),
    [sym__flow_operation] = STATE(13),
    [sym_let_statement] = STATE(13),
    [sym_run_statement] = STATE(13),
    [sym_implicit_run_statement] = STATE(13),
    [sym__implicit_run_text_body_line] = STATE(24),
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
    [sym__flow_reserved_word] = STATE(498),
    [aux_sym_statements_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_blank_line] = ACTIONS(125),
    [sym_parent_doc_line] = ACTIONS(125),
    [sym_doc_line] = ACTIONS(125),
    [sym_comment_line] = ACTIONS(125),
    [sym_with_keyword] = ACTIONS(127),
    [sym_struct_keyword] = ACTIONS(127),
    [sym_psyche_keyword] = ACTIONS(127),
    [sym_skill_keyword] = ACTIONS(127),
    [sym_service_keyword] = ACTIONS(127),
    [sym_prompt_keyword] = ACTIONS(127),
    [sym_context_keyword] = ACTIONS(127),
    [sym_instruct_keyword] = ACTIONS(127),
    [sym_agic_keyword] = ACTIONS(127),
    [sym_task_keyword] = ACTIONS(127),
    [sym_chore_keyword] = ACTIONS(127),
    [sym_flow_keyword] = ACTIONS(127),
    [sym_flow_run_keyword] = ACTIONS(129),
    [sym_flow_let_keyword] = ACTIONS(131),
    [sym_flow_seek_keyword] = ACTIONS(133),
    [sym_flow_ask_keyword] = ACTIONS(135),
    [sym_flow_scatter_keyword] = ACTIONS(137),
    [sym_flow_storm_keyword] = ACTIONS(139),
    [sym_flow_gather_keyword] = ACTIONS(141),
    [sym_flow_settle_keyword] = ACTIONS(143),
    [sym_flow_map_keyword] = ACTIONS(145),
    [sym_flow_keep_keyword] = ACTIONS(147),
    [sym_flow_drop_keyword] = ACTIONS(149),
    [sym_flow_rank_keyword] = ACTIONS(151),
    [sym_flow_repeat_keyword] = ACTIONS(153),
    [sym_flow_until_keyword] = ACTIONS(127),
    [sym_flow_top_keyword] = ACTIONS(155),
    [sym_flow_bottom_keyword] = ACTIONS(155),
    [sym_flow_think_keyword] = ACTIONS(155),
    [sym_flow_use_keyword] = ACTIONS(155),
    [sym_thunk_keyword] = ACTIONS(155),
    [anon_sym_call] = ACTIONS(155),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_unfold] = ACTIONS(155),
    [anon_sym_each] = ACTIONS(155),
    [anon_sym_fold] = ACTIONS(155),
    [anon_sym_sort] = ACTIONS(155),
    [anon_sym_head] = ACTIONS(155),
    [anon_sym_tail] = ACTIONS(155),
    [sym__implicit_run_raw_text] = ACTIONS(157),
  },
  [13] = {
    [sym__trivia] = STATE(11),
    [sym__flow_statement] = STATE(11),
    [sym__flow_operation] = STATE(11),
    [sym_let_statement] = STATE(11),
    [sym_run_statement] = STATE(11),
    [sym_implicit_run_statement] = STATE(11),
    [sym__implicit_run_text_body_line] = STATE(24),
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
    [sym__flow_reserved_word] = STATE(498),
    [aux_sym_statements_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_blank_line] = ACTIONS(161),
    [sym_parent_doc_line] = ACTIONS(161),
    [sym_doc_line] = ACTIONS(161),
    [sym_comment_line] = ACTIONS(161),
    [sym_with_keyword] = ACTIONS(163),
    [sym_struct_keyword] = ACTIONS(163),
    [sym_psyche_keyword] = ACTIONS(163),
    [sym_skill_keyword] = ACTIONS(163),
    [sym_service_keyword] = ACTIONS(163),
    [sym_prompt_keyword] = ACTIONS(163),
    [sym_context_keyword] = ACTIONS(163),
    [sym_instruct_keyword] = ACTIONS(163),
    [sym_agic_keyword] = ACTIONS(163),
    [sym_task_keyword] = ACTIONS(163),
    [sym_chore_keyword] = ACTIONS(163),
    [sym_flow_keyword] = ACTIONS(163),
    [sym_flow_run_keyword] = ACTIONS(129),
    [sym_flow_let_keyword] = ACTIONS(131),
    [sym_flow_seek_keyword] = ACTIONS(133),
    [sym_flow_ask_keyword] = ACTIONS(135),
    [sym_flow_scatter_keyword] = ACTIONS(137),
    [sym_flow_storm_keyword] = ACTIONS(139),
    [sym_flow_gather_keyword] = ACTIONS(141),
    [sym_flow_settle_keyword] = ACTIONS(143),
    [sym_flow_map_keyword] = ACTIONS(145),
    [sym_flow_keep_keyword] = ACTIONS(147),
    [sym_flow_drop_keyword] = ACTIONS(149),
    [sym_flow_rank_keyword] = ACTIONS(151),
    [sym_flow_repeat_keyword] = ACTIONS(153),
    [sym_flow_until_keyword] = ACTIONS(163),
    [sym_flow_top_keyword] = ACTIONS(155),
    [sym_flow_bottom_keyword] = ACTIONS(155),
    [sym_flow_think_keyword] = ACTIONS(155),
    [sym_flow_use_keyword] = ACTIONS(155),
    [sym_thunk_keyword] = ACTIONS(155),
    [anon_sym_call] = ACTIONS(155),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_unfold] = ACTIONS(155),
    [anon_sym_each] = ACTIONS(155),
    [anon_sym_fold] = ACTIONS(155),
    [anon_sym_sort] = ACTIONS(155),
    [anon_sym_head] = ACTIONS(155),
    [anon_sym_tail] = ACTIONS(155),
    [sym__implicit_run_raw_text] = ACTIONS(157),
  },
  [14] = {
    [sym__trivia] = STATE(15),
    [sym__flow_statement] = STATE(15),
    [sym__flow_operation] = STATE(15),
    [sym_let_statement] = STATE(15),
    [sym_run_statement] = STATE(15),
    [sym_implicit_run_statement] = STATE(15),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym__flow_reserved_word] = STATE(516),
    [aux_sym_statements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_blank_line] = ACTIONS(165),
    [sym_parent_doc_line] = ACTIONS(165),
    [sym_doc_line] = ACTIONS(165),
    [sym_comment_line] = ACTIONS(165),
    [sym_with_keyword] = ACTIONS(127),
    [sym_struct_keyword] = ACTIONS(127),
    [sym_psyche_keyword] = ACTIONS(127),
    [sym_skill_keyword] = ACTIONS(127),
    [sym_service_keyword] = ACTIONS(127),
    [sym_prompt_keyword] = ACTIONS(127),
    [sym_context_keyword] = ACTIONS(127),
    [sym_instruct_keyword] = ACTIONS(127),
    [sym_agic_keyword] = ACTIONS(127),
    [sym_task_keyword] = ACTIONS(127),
    [sym_chore_keyword] = ACTIONS(127),
    [sym_flow_keyword] = ACTIONS(127),
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
    [sym__trivia] = STATE(16),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym__flow_reserved_word] = STATE(516),
    [aux_sym_statements_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_blank_line] = ACTIONS(167),
    [sym_parent_doc_line] = ACTIONS(167),
    [sym_doc_line] = ACTIONS(167),
    [sym_comment_line] = ACTIONS(167),
    [sym_with_keyword] = ACTIONS(163),
    [sym_struct_keyword] = ACTIONS(163),
    [sym_psyche_keyword] = ACTIONS(163),
    [sym_skill_keyword] = ACTIONS(163),
    [sym_service_keyword] = ACTIONS(163),
    [sym_prompt_keyword] = ACTIONS(163),
    [sym_context_keyword] = ACTIONS(163),
    [sym_instruct_keyword] = ACTIONS(163),
    [sym_agic_keyword] = ACTIONS(163),
    [sym_task_keyword] = ACTIONS(163),
    [sym_chore_keyword] = ACTIONS(163),
    [sym_flow_keyword] = ACTIONS(163),
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
  [16] = {
    [sym__trivia] = STATE(16),
    [sym__flow_statement] = STATE(16),
    [sym__flow_operation] = STATE(16),
    [sym_let_statement] = STATE(16),
    [sym_run_statement] = STATE(16),
    [sym_implicit_run_statement] = STATE(16),
    [sym__implicit_run_text_body_line] = STATE(31),
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
    [sym__flow_reserved_word] = STATE(516),
    [aux_sym_statements_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_blank_line] = ACTIONS(169),
    [sym_parent_doc_line] = ACTIONS(169),
    [sym_doc_line] = ACTIONS(169),
    [sym_comment_line] = ACTIONS(169),
    [sym_with_keyword] = ACTIONS(76),
    [sym_struct_keyword] = ACTIONS(76),
    [sym_psyche_keyword] = ACTIONS(76),
    [sym_skill_keyword] = ACTIONS(76),
    [sym_service_keyword] = ACTIONS(76),
    [sym_prompt_keyword] = ACTIONS(76),
    [sym_context_keyword] = ACTIONS(76),
    [sym_instruct_keyword] = ACTIONS(76),
    [sym_agic_keyword] = ACTIONS(76),
    [sym_task_keyword] = ACTIONS(76),
    [sym_chore_keyword] = ACTIONS(76),
    [sym_flow_keyword] = ACTIONS(76),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(163), 1,
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
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(492), 1,
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
  [94] = 20,
    ACTIONS(76), 1,
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
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(492), 1,
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
    ACTIONS(127), 1,
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
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(492), 1,
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
  [282] = 20,
    ACTIONS(129), 1,
      sym_flow_run_keyword,
    ACTIONS(131), 1,
      sym_flow_let_keyword,
    ACTIONS(133), 1,
      sym_flow_seek_keyword,
    ACTIONS(135), 1,
      sym_flow_ask_keyword,
    ACTIONS(137), 1,
      sym_flow_scatter_keyword,
    ACTIONS(139), 1,
      sym_flow_storm_keyword,
    ACTIONS(141), 1,
      sym_flow_gather_keyword,
    ACTIONS(143), 1,
      sym_flow_settle_keyword,
    ACTIONS(145), 1,
      sym_flow_map_keyword,
    ACTIONS(147), 1,
      sym_flow_keep_keyword,
    ACTIONS(149), 1,
      sym_flow_drop_keyword,
    ACTIONS(151), 1,
      sym_flow_rank_keyword,
    ACTIONS(153), 1,
      sym_flow_repeat_keyword,
    ACTIONS(157), 1,
      sym__implicit_run_raw_text,
    STATE(24), 1,
      sym__implicit_run_text_body_line,
    STATE(46), 1,
      sym_statements,
    STATE(129), 1,
      sym_repeat_body,
    STATE(498), 1,
      sym__flow_reserved_word,
    ACTIONS(155), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
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
  [371] = 20,
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
    STATE(123), 1,
      sym_repeat_until_body,
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(492), 1,
      sym__flow_reserved_word,
    STATE(713), 1,
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
    STATE(19), 17,
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
  [460] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(305), 1,
      sym__nested_indented_raw_text,
    STATE(29), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(40), 1,
      sym__nested_text_body_line,
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
  [521] = 5,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      sym_blank_line,
    ACTIONS(313), 1,
      sym_indented_raw_text,
    STATE(26), 2,
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
  [580] = 5,
    ACTIONS(313), 1,
      sym_indented_raw_text,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      sym_blank_line,
    STATE(23), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(319), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
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
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(226), 1,
      sym_repeat_until_body,
    STATE(492), 1,
      sym__flow_reserved_word,
    STATE(666), 1,
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
    STATE(19), 17,
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
  [728] = 5,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      sym_blank_line,
    ACTIONS(328), 1,
      sym_indented_raw_text,
    STATE(26), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(326), 43,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
      sym_thunk_keyword,
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
    STATE(95), 1,
      sym_repeat_until_body,
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(492), 1,
      sym__flow_reserved_word,
    STATE(699), 1,
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
    STATE(19), 17,
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
  [876] = 20,
    ACTIONS(129), 1,
      sym_flow_run_keyword,
    ACTIONS(131), 1,
      sym_flow_let_keyword,
    ACTIONS(133), 1,
      sym_flow_seek_keyword,
    ACTIONS(135), 1,
      sym_flow_ask_keyword,
    ACTIONS(137), 1,
      sym_flow_scatter_keyword,
    ACTIONS(139), 1,
      sym_flow_storm_keyword,
    ACTIONS(141), 1,
      sym_flow_gather_keyword,
    ACTIONS(143), 1,
      sym_flow_settle_keyword,
    ACTIONS(145), 1,
      sym_flow_map_keyword,
    ACTIONS(147), 1,
      sym_flow_keep_keyword,
    ACTIONS(149), 1,
      sym_flow_drop_keyword,
    ACTIONS(151), 1,
      sym_flow_rank_keyword,
    ACTIONS(153), 1,
      sym_flow_repeat_keyword,
    ACTIONS(157), 1,
      sym__implicit_run_raw_text,
    STATE(24), 1,
      sym__implicit_run_text_body_line,
    STATE(48), 1,
      sym_statements,
    STATE(98), 1,
      sym_repeat_body,
    STATE(498), 1,
      sym__flow_reserved_word,
    ACTIONS(155), 13,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
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
  [965] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_blank_line,
    ACTIONS(338), 1,
      sym__nested_indented_raw_text,
    STATE(29), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(40), 1,
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
    STATE(185), 1,
      sym__implicit_run_text_body_line,
    STATE(197), 1,
      sym_statements,
    STATE(232), 1,
      sym_repeat_body,
    STATE(492), 1,
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
    STATE(19), 17,
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
  [1115] = 5,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      sym_blank_line,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    STATE(34), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(319), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [1173] = 19,
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
    STATE(31), 1,
      sym__implicit_run_text_body_line,
    STATE(333), 1,
      sym_statements,
    STATE(516), 1,
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
  [1259] = 5,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym_indented_raw_text,
    STATE(33), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(326), 42,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [1317] = 5,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    ACTIONS(351), 1,
      sym_blank_line,
    STATE(33), 2,
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
  [1375] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      sym_blank_line,
    ACTIONS(355), 1,
      sym__nested_indented_raw_text,
    STATE(36), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(54), 1,
      sym__nested_text_body_line,
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
  [1435] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      sym_blank_line,
    ACTIONS(360), 1,
      sym__nested_indented_raw_text,
    STATE(36), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(54), 1,
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
  [1495] = 19,
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
    STATE(31), 1,
      sym__implicit_run_text_body_line,
    STATE(336), 1,
      sym_statements,
    STATE(516), 1,
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
  [1581] = 4,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      sym_indented_raw_text,
    STATE(43), 1,
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
  [1637] = 4,
    ACTIONS(313), 1,
      sym_indented_raw_text,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
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
  [1744] = 2,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
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
  [1795] = 2,
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
  [1846] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 45,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
      sym_flow_map_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_repeat_keyword,
      sym_flow_until_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
      sym_flow_think_keyword,
      sym_flow_use_keyword,
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
  [1897] = 2,
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
  [1948] = 4,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    STATE(51), 1,
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
  [2003] = 4,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 1,
      sym_flow_until_keyword,
    STATE(131), 1,
      sym_until_statement,
    ACTIONS(385), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [2058] = 4,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
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
  [2113] = 4,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym_flow_until_keyword,
    STATE(100), 1,
      sym_until_statement,
    ACTIONS(385), 43,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [2268] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [2368] = 2,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 44,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [2418] = 2,
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
  [2468] = 2,
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
  [2518] = 2,
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
  [2568] = 2,
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
  [2618] = 2,
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
  [2668] = 2,
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
  [2718] = 2,
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
  [2768] = 2,
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
  [2818] = 2,
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
  [2868] = 2,
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
  [2918] = 2,
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
  [2968] = 2,
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
  [3018] = 2,
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
  [3068] = 2,
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
  [3118] = 2,
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
  [3168] = 2,
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
  [3218] = 2,
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
  [3268] = 2,
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
  [3318] = 2,
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
  [3368] = 2,
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
  [3418] = 2,
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
  [3468] = 2,
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
  [3518] = 2,
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
  [3568] = 2,
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
  [5215] = 2,
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
  [5264] = 2,
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
  [5313] = 2,
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
  [5362] = 2,
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
  [5411] = 2,
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
  [5460] = 2,
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
  [5509] = 2,
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
  [5558] = 2,
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
  [5607] = 2,
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
  [5656] = 2,
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
  [5705] = 2,
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
  [5754] = 2,
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
  [5803] = 2,
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
  [5852] = 2,
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
  [5901] = 2,
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
  [5950] = 2,
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
  [5999] = 2,
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
  [6048] = 2,
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
  [6097] = 2,
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
  [6146] = 2,
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
  [6195] = 2,
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
  [6244] = 2,
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
  [6293] = 2,
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
  [6538] = 2,
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
  [6587] = 2,
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
  [6636] = 2,
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
  [6685] = 2,
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
  [6734] = 2,
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
  [6783] = 2,
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
  [6832] = 2,
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
  [6881] = 2,
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
  [6930] = 2,
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
  [6979] = 2,
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
  [7028] = 2,
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
  [7077] = 2,
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
  [7126] = 2,
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
  [7175] = 2,
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
  [7224] = 2,
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
  [7273] = 2,
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
  [7322] = 2,
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
  [7371] = 2,
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
  [7420] = 2,
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
  [7469] = 2,
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
  [7518] = 2,
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
  [7665] = 5,
    STATE(536), 1,
      sym_directive_key,
    STATE(164), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(603), 4,
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
    ACTIONS(605), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [7719] = 19,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(621), 1,
      sym_pass_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    STATE(168), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(317), 1,
      sym_messages,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(318), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(609), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(615), 10,
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
  [7801] = 5,
    STATE(536), 1,
      sym_directive_key,
    STATE(162), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(625), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(628), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(631), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(621), 1,
      sym_pass_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(321), 1,
      sym_messages,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(337), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(635), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(637), 10,
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
    STATE(536), 1,
      sym_directive_key,
    STATE(162), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(639), 4,
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
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    STATE(175), 1,
      sym_message,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(317), 1,
      sym_messages,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(318), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(621), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(609), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(615), 10,
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
  [8109] = 14,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_message,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(321), 1,
      sym_messages,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(337), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(621), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(635), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(637), 10,
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
  [8178] = 14,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_message,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(316), 1,
      sym_messages,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(314), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(621), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    ACTIONS(650), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
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
  [8247] = 1,
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
  [8290] = 1,
    ACTIONS(397), 40,
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
  [8333] = 12,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(670), 1,
      sym_indented_raw_text,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(662), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(667), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(171), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(656), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(659), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(665), 10,
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
  [8439] = 1,
    ACTIONS(673), 39,
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
  [8481] = 1,
    ACTIONS(397), 39,
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
  [8523] = 12,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(621), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(176), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(677), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
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
  [8587] = 12,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(494), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(621), 3,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_pass_keyword,
    STATE(171), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
    ACTIONS(683), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(611), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(685), 10,
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
  [8651] = 21,
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(379), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(357), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(356), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(360), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(375), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(373), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(378), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(163), 1,
      sym__directives,
    STATE(167), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(367), 1,
      sym_agic_body,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(188), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(334), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
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
  [9283] = 4,
    ACTIONS(693), 1,
      sym_blank_line,
    ACTIONS(695), 1,
      sym_indented_raw_text,
    STATE(186), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(319), 31,
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
  [9327] = 4,
    ACTIONS(695), 1,
      sym_indented_raw_text,
    ACTIONS(697), 1,
      sym_blank_line,
    STATE(187), 2,
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
  [9371] = 4,
    ACTIONS(699), 1,
      sym_blank_line,
    ACTIONS(702), 1,
      sym_indented_raw_text,
    STATE(187), 2,
      sym_text_body_line,
      aux_sym_implicit_run_statement_repeat1,
    ACTIONS(326), 31,
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
  [9415] = 20,
    ACTIONS(617), 1,
      sym_context_keyword,
    ACTIONS(619), 1,
      sym_instruct_keyword,
    ACTIONS(623), 1,
      sym_indented_raw_text,
    ACTIONS(691), 1,
      sym_pass_keyword,
    STATE(161), 1,
      sym__directives,
    STATE(166), 1,
      sym_settings,
    STATE(175), 1,
      sym_message,
    STATE(194), 1,
      sym_directive,
    STATE(203), 1,
      sym_context_setting,
    STATE(204), 1,
      sym_instruct_setting,
    STATE(241), 1,
      sym__unroled_message_initial_line,
    STATE(460), 1,
      sym_directive_key,
    STATE(494), 1,
      sym__agic_reserved_word,
    STATE(553), 1,
      sym_role,
    STATE(284), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(306), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    STATE(321), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(705), 4,
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
  [9491] = 5,
    ACTIONS(707), 1,
      sym_blank_line,
    ACTIONS(709), 1,
      sym__nested_indented_raw_text,
    STATE(190), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(205), 1,
      sym__nested_text_body_line,
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
  [9537] = 5,
    ACTIONS(711), 1,
      sym_blank_line,
    ACTIONS(714), 1,
      sym__nested_indented_raw_text,
    STATE(190), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(205), 1,
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
  [9583] = 3,
    ACTIONS(695), 1,
      sym_indented_raw_text,
    STATE(198), 1,
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
  [9624] = 3,
    ACTIONS(695), 1,
      sym_indented_raw_text,
    STATE(198), 1,
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
  [9665] = 6,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
    STATE(552), 1,
      sym_directive_key,
    STATE(195), 3,
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
  [9712] = 6,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    STATE(552), 1,
      sym_directive_key,
    STATE(193), 3,
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
    ACTIONS(605), 17,
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
  [9759] = 6,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(552), 1,
      sym_directive_key,
    STATE(195), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
    ACTIONS(727), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(628), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(631), 17,
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
  [9806] = 1,
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
  [9842] = 3,
    ACTIONS(730), 1,
      sym_flow_until_keyword,
    STATE(234), 1,
      sym_until_statement,
    ACTIONS(385), 31,
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
  [9882] = 1,
    ACTIONS(326), 33,
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
  [9918] = 1,
    ACTIONS(373), 33,
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
  [9954] = 6,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      sym_instruct_keyword,
    STATE(265), 1,
      sym_instruct_setting,
    STATE(261), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(736), 24,
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
  [10000] = 6,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    ACTIONS(740), 1,
      sym_context_keyword,
    STATE(265), 1,
      sym_context_setting,
    STATE(261), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(736), 24,
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
  [10046] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(742), 1,
      sym_blank_line,
    ACTIONS(744), 1,
      sym__nested_indented_raw_text,
    STATE(207), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(272), 1,
      sym__nested_text_body_line,
    ACTIONS(303), 28,
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
  [10092] = 6,
    ACTIONS(738), 1,
      sym_instruct_keyword,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
    STATE(237), 1,
      sym_instruct_setting,
    STATE(200), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(748), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(750), 24,
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
  [10138] = 6,
    ACTIONS(740), 1,
      sym_context_keyword,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
    STATE(237), 1,
      sym_context_setting,
    STATE(201), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(752), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(750), 24,
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
  [10184] = 1,
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
  [10220] = 1,
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
  [10256] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(754), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__nested_indented_raw_text,
    STATE(207), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(272), 1,
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
  [10302] = 17,
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
    ACTIONS(760), 1,
      ts_builtin_sym_end,
    ACTIONS(762), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(764), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(248), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(347), 12,
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
  [10369] = 1,
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
  [10404] = 1,
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
  [10439] = 1,
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
  [10474] = 1,
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
  [10509] = 1,
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
  [10544] = 1,
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
  [10579] = 1,
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
  [10614] = 1,
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
  [10649] = 1,
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
  [10684] = 1,
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
  [10719] = 1,
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
  [10754] = 1,
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
  [10789] = 1,
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
  [10824] = 1,
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
  [10859] = 1,
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
  [10894] = 1,
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
  [10929] = 1,
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
  [10964] = 1,
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
  [10999] = 1,
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
  [11034] = 1,
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
  [11069] = 1,
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
  [11104] = 1,
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
  [11139] = 1,
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
  [11174] = 1,
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
  [11209] = 1,
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
  [11244] = 1,
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
  [11279] = 1,
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
  [11314] = 6,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym_indented_raw_text,
    STATE(236), 1,
      aux_sym_unroled_message_repeat1,
    STATE(286), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(771), 27,
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
  [11359] = 4,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
    STATE(264), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(776), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(736), 25,
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
  [11400] = 1,
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
  [11435] = 1,
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
  [11470] = 6,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(780), 1,
      sym_blank_line,
    ACTIONS(784), 1,
      sym_indented_raw_text,
    STATE(236), 1,
      aux_sym_unroled_message_repeat1,
    STATE(286), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(782), 27,
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
  [11515] = 6,
    ACTIONS(784), 1,
      sym_indented_raw_text,
    ACTIONS(786), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      sym_blank_line,
    STATE(240), 1,
      aux_sym_unroled_message_repeat1,
    STATE(286), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(790), 27,
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
  [11560] = 1,
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
  [11595] = 1,
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
  [11630] = 1,
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
  [11665] = 1,
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
  [11700] = 1,
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
  [11735] = 1,
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
  [11770] = 17,
    ACTIONS(792), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 1,
      sym_with_keyword,
    ACTIONS(803), 1,
      sym_struct_keyword,
    ACTIONS(806), 1,
      sym_psyche_keyword,
    ACTIONS(809), 1,
      sym_skill_keyword,
    ACTIONS(812), 1,
      sym_service_keyword,
    ACTIONS(815), 1,
      sym_prompt_keyword,
    ACTIONS(818), 1,
      sym_context_keyword,
    ACTIONS(821), 1,
      sym_instruct_keyword,
    ACTIONS(824), 1,
      sym_agic_keyword,
    ACTIONS(827), 1,
      sym_task_keyword,
    ACTIONS(830), 1,
      sym_chore_keyword,
    ACTIONS(833), 1,
      sym_flow_keyword,
    ACTIONS(794), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(797), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(248), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(347), 12,
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
  [11837] = 1,
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
  [11872] = 4,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    STATE(261), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(838), 25,
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
  [11913] = 1,
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
  [11948] = 1,
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
  [11983] = 1,
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
  [12018] = 1,
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
  [12053] = 1,
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
  [12088] = 1,
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
  [12123] = 1,
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
  [12158] = 1,
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
  [12193] = 1,
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
  [12228] = 1,
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
  [12263] = 4,
    ACTIONS(840), 1,
      ts_builtin_sym_end,
    STATE(261), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(842), 4,
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
  [12304] = 1,
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
  [12339] = 1,
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
  [12374] = 4,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    STATE(261), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(734), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(847), 25,
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
  [12415] = 4,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    STATE(250), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(849), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(847), 25,
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
  [12456] = 1,
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
  [12491] = 1,
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
  [12526] = 1,
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
  [12561] = 1,
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
  [12596] = 1,
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
  [12631] = 2,
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
  [12667] = 2,
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
  [12703] = 4,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(784), 1,
      sym_indented_raw_text,
    STATE(291), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(782), 28,
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
  [12743] = 4,
    ACTIONS(784), 1,
      sym_indented_raw_text,
    ACTIONS(851), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(853), 28,
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
  [12783] = 2,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    ACTIONS(857), 29,
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
  [12818] = 2,
    ACTIONS(859), 1,
      ts_builtin_sym_end,
    ACTIONS(861), 29,
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
  [12853] = 2,
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
  [12888] = 2,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    ACTIONS(865), 29,
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
  [12923] = 2,
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
  [12958] = 2,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
    ACTIONS(673), 29,
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
  [12993] = 2,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    ACTIONS(865), 29,
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
  [13028] = 2,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    ACTIONS(871), 29,
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
  [13063] = 2,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    ACTIONS(871), 29,
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
  [13098] = 2,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    ACTIONS(875), 29,
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
  [13133] = 2,
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
  [13168] = 2,
    ACTIONS(877), 1,
      ts_builtin_sym_end,
    ACTIONS(879), 29,
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
  [13203] = 16,
    ACTIONS(883), 1,
      sym_flow_run_keyword,
    ACTIONS(885), 1,
      sym_flow_seek_keyword,
    ACTIONS(887), 1,
      sym_flow_ask_keyword,
    ACTIONS(889), 1,
      sym_flow_scatter_keyword,
    ACTIONS(891), 1,
      sym_flow_storm_keyword,
    ACTIONS(893), 1,
      sym_flow_gather_keyword,
    ACTIONS(895), 1,
      sym_flow_settle_keyword,
    ACTIONS(897), 1,
      sym_flow_map_keyword,
    ACTIONS(899), 1,
      sym_flow_keep_keyword,
    ACTIONS(901), 1,
      sym_flow_drop_keyword,
    ACTIONS(903), 1,
      sym_flow_rank_keyword,
    ACTIONS(905), 1,
      sym_flow_repeat_keyword,
    ACTIONS(907), 1,
      sym_snake_name,
    STATE(617), 1,
      sym_local_name,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(146), 13,
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
  [13266] = 2,
    ACTIONS(909), 1,
      ts_builtin_sym_end,
    ACTIONS(911), 29,
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
  [13301] = 2,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
    ACTIONS(915), 29,
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
  [13336] = 16,
    ACTIONS(907), 1,
      sym_snake_name,
    ACTIONS(917), 1,
      sym_flow_run_keyword,
    ACTIONS(919), 1,
      sym_flow_seek_keyword,
    ACTIONS(921), 1,
      sym_flow_ask_keyword,
    ACTIONS(923), 1,
      sym_flow_scatter_keyword,
    ACTIONS(925), 1,
      sym_flow_storm_keyword,
    ACTIONS(927), 1,
      sym_flow_gather_keyword,
    ACTIONS(929), 1,
      sym_flow_settle_keyword,
    ACTIONS(931), 1,
      sym_flow_map_keyword,
    ACTIONS(933), 1,
      sym_flow_keep_keyword,
    ACTIONS(935), 1,
      sym_flow_drop_keyword,
    ACTIONS(937), 1,
      sym_flow_rank_keyword,
    ACTIONS(939), 1,
      sym_flow_repeat_keyword,
    STATE(650), 1,
      sym_local_name,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(209), 13,
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
  [13399] = 2,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
    ACTIONS(943), 29,
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
  [13434] = 2,
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
  [13469] = 2,
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
  [13504] = 16,
    ACTIONS(907), 1,
      sym_snake_name,
    ACTIONS(949), 1,
      sym_flow_run_keyword,
    ACTIONS(951), 1,
      sym_flow_seek_keyword,
    ACTIONS(953), 1,
      sym_flow_ask_keyword,
    ACTIONS(955), 1,
      sym_flow_scatter_keyword,
    ACTIONS(957), 1,
      sym_flow_storm_keyword,
    ACTIONS(959), 1,
      sym_flow_gather_keyword,
    ACTIONS(961), 1,
      sym_flow_settle_keyword,
    ACTIONS(963), 1,
      sym_flow_map_keyword,
    ACTIONS(965), 1,
      sym_flow_keep_keyword,
    ACTIONS(967), 1,
      sym_flow_drop_keyword,
    ACTIONS(969), 1,
      sym_flow_rank_keyword,
    ACTIONS(971), 1,
      sym_flow_repeat_keyword,
    STATE(655), 1,
      sym_local_name,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(57), 13,
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
  [13567] = 2,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 29,
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
  [13602] = 1,
    ACTIONS(397), 27,
      sym_flow_run_keyword,
      sym_flow_let_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
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
  [13632] = 1,
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
  [13662] = 10,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    ACTIONS(975), 1,
      sym_blank_line,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    STATE(315), 1,
      sym_text_body,
    STATE(665), 1,
      sym_property_key,
    STATE(309), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(977), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(979), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [13709] = 10,
    ACTIONS(975), 1,
      sym_blank_line,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym_text_body,
    STATE(665), 1,
      sym_property_key,
    STATE(309), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(987), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(298), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(989), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [13756] = 10,
    ACTIONS(975), 1,
      sym_blank_line,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    STATE(325), 1,
      sym_text_body,
    STATE(665), 1,
      sym_property_key,
    STATE(309), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(993), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(301), 3,
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
  [13803] = 10,
    ACTIONS(975), 1,
      sym_blank_line,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      sym_text_body,
    STATE(665), 1,
      sym_property_key,
    STATE(309), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(977), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(999), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [13850] = 13,
    ACTIONS(1001), 1,
      sym_flow_run_keyword,
    ACTIONS(1003), 1,
      sym_flow_seek_keyword,
    ACTIONS(1005), 1,
      sym_flow_ask_keyword,
    ACTIONS(1007), 1,
      sym_flow_scatter_keyword,
    ACTIONS(1009), 1,
      sym_flow_storm_keyword,
    ACTIONS(1011), 1,
      sym_flow_gather_keyword,
    ACTIONS(1013), 1,
      sym_flow_settle_keyword,
    ACTIONS(1015), 1,
      sym_flow_map_keyword,
    ACTIONS(1017), 1,
      sym_flow_keep_keyword,
    ACTIONS(1019), 1,
      sym_flow_drop_keyword,
    ACTIONS(1021), 1,
      sym_flow_rank_keyword,
    ACTIONS(1023), 1,
      sym_flow_repeat_keyword,
    STATE(110), 13,
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
  [13902] = 13,
    ACTIONS(1025), 1,
      sym_flow_run_keyword,
    ACTIONS(1027), 1,
      sym_flow_seek_keyword,
    ACTIONS(1029), 1,
      sym_flow_ask_keyword,
    ACTIONS(1031), 1,
      sym_flow_scatter_keyword,
    ACTIONS(1033), 1,
      sym_flow_storm_keyword,
    ACTIONS(1035), 1,
      sym_flow_gather_keyword,
    ACTIONS(1037), 1,
      sym_flow_settle_keyword,
    ACTIONS(1039), 1,
      sym_flow_map_keyword,
    ACTIONS(1041), 1,
      sym_flow_keep_keyword,
    ACTIONS(1043), 1,
      sym_flow_drop_keyword,
    ACTIONS(1045), 1,
      sym_flow_rank_keyword,
    ACTIONS(1047), 1,
      sym_flow_repeat_keyword,
    STATE(216), 13,
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
  [13954] = 13,
    ACTIONS(1049), 1,
      sym_flow_run_keyword,
    ACTIONS(1051), 1,
      sym_flow_seek_keyword,
    ACTIONS(1053), 1,
      sym_flow_ask_keyword,
    ACTIONS(1055), 1,
      sym_flow_scatter_keyword,
    ACTIONS(1057), 1,
      sym_flow_storm_keyword,
    ACTIONS(1059), 1,
      sym_flow_gather_keyword,
    ACTIONS(1061), 1,
      sym_flow_settle_keyword,
    ACTIONS(1063), 1,
      sym_flow_map_keyword,
    ACTIONS(1065), 1,
      sym_flow_keep_keyword,
    ACTIONS(1067), 1,
      sym_flow_drop_keyword,
    ACTIONS(1069), 1,
      sym_flow_rank_keyword,
    ACTIONS(1071), 1,
      sym_flow_repeat_keyword,
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
  [14006] = 6,
    ACTIONS(1073), 1,
      ts_builtin_sym_end,
    ACTIONS(1080), 1,
      sym_snake_name,
    STATE(665), 1,
      sym_property_key,
    STATE(305), 3,
      sym__trivia,
      sym_property,
      aux_sym_cap_body_repeat1,
    ACTIONS(1075), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1078), 13,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14042] = 3,
    STATE(306), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1083), 4,
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
  [14070] = 7,
    ACTIONS(1088), 1,
      sym_blank_line,
    ACTIONS(1096), 1,
      sym_snake_name,
    STATE(715), 1,
      sym_field_name,
    ACTIONS(1086), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1091), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(307), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1094), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14106] = 7,
    ACTIONS(1101), 1,
      sym_blank_line,
    ACTIONS(1107), 1,
      sym_snake_name,
    STATE(715), 1,
      sym_field_name,
    ACTIONS(1099), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1103), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(307), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1105), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14142] = 5,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
    ACTIONS(1111), 1,
      sym_blank_line,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1113), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14173] = 5,
    ACTIONS(1115), 1,
      ts_builtin_sym_end,
    ACTIONS(1117), 1,
      sym_blank_line,
    ACTIONS(1122), 1,
      sym_indented_raw_text,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1120), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14204] = 2,
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
  [14228] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1125), 13,
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
  [14256] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14284] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1133), 13,
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
  [14312] = 4,
    ACTIONS(1135), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1137), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(327), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14340] = 4,
    ACTIONS(1139), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1141), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(335), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1133), 13,
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
  [14368] = 4,
    ACTIONS(650), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1143), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(314), 2,
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
  [14396] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
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
  [14424] = 4,
    ACTIONS(1145), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1147), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(313), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(973), 13,
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
  [14452] = 2,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14476] = 4,
    ACTIONS(609), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1149), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(318), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(607), 13,
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
  [14504] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1151), 13,
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
  [14532] = 1,
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
  [14554] = 1,
    ACTIONS(397), 19,
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
  [14576] = 4,
    ACTIONS(1153), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1155), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(312), 2,
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
  [14604] = 4,
    ACTIONS(1157), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1159), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(322), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1125), 13,
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
  [14632] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
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
  [14660] = 4,
    ACTIONS(1163), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1166), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(840), 13,
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
  [14688] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14716] = 4,
    ACTIONS(1173), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1175), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(331), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1171), 13,
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
  [14744] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1177), 13,
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
  [14772] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1179), 13,
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
  [14800] = 4,
    ACTIONS(1181), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1183), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(332), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
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
  [14828] = 4,
    ACTIONS(635), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1185), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(337), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(633), 13,
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
  [14856] = 4,
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1187), 13,
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
  [14884] = 4,
    ACTIONS(1189), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1191), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(329), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(1177), 13,
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
    ACTIONS(1127), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1129), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(328), 2,
      sym__trivia,
      aux_sym_cap_body_repeat2,
    ACTIONS(607), 13,
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
  [14940] = 3,
    ACTIONS(1193), 1,
      ts_builtin_sym_end,
    ACTIONS(1199), 1,
      sym_snake_name,
    ACTIONS(1196), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14966] = 2,
    ACTIONS(1201), 1,
      ts_builtin_sym_end,
    ACTIONS(1203), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14990] = 2,
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
  [15013] = 2,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15036] = 2,
    ACTIONS(395), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(397), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15059] = 2,
    ACTIONS(1205), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1207), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15082] = 2,
    ACTIONS(1209), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1211), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15105] = 2,
    ACTIONS(1215), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1213), 15,
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
  [15127] = 2,
    ACTIONS(1219), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1217), 15,
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
  [15149] = 2,
    ACTIONS(1223), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1221), 15,
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
  [15171] = 2,
    ACTIONS(1227), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1225), 15,
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
  [15193] = 2,
    ACTIONS(1231), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1229), 15,
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
  [15215] = 2,
    ACTIONS(1235), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1233), 15,
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
  [15237] = 2,
    ACTIONS(1239), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1237), 15,
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
  [15259] = 2,
    ACTIONS(1243), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1241), 15,
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
  [15281] = 2,
    ACTIONS(1247), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1245), 15,
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
  [15303] = 2,
    ACTIONS(1251), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1249), 15,
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
  [15325] = 2,
    ACTIONS(1255), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1253), 15,
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
  [15347] = 2,
    ACTIONS(1259), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1257), 15,
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
  [15369] = 2,
    ACTIONS(1263), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1261), 15,
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
  [15391] = 2,
    ACTIONS(1267), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1265), 15,
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
  [15413] = 2,
    ACTIONS(1271), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1269), 15,
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
  [15435] = 2,
    ACTIONS(1275), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1273), 15,
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
  [15457] = 2,
    ACTIONS(1279), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1277), 15,
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
  [15479] = 2,
    ACTIONS(1283), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1281), 15,
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
  [15501] = 2,
    ACTIONS(1287), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1285), 15,
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
  [15523] = 2,
    ACTIONS(1291), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1289), 15,
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
  [15545] = 2,
    ACTIONS(1295), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1293), 15,
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
  [15567] = 2,
    ACTIONS(1299), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1297), 15,
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
  [15589] = 2,
    ACTIONS(1303), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1301), 15,
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
  [15611] = 2,
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
  [15633] = 2,
    ACTIONS(397), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(395), 15,
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
  [15655] = 2,
    ACTIONS(1307), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1305), 15,
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
  [15677] = 2,
    ACTIONS(1311), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1309), 15,
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
  [15699] = 2,
    ACTIONS(1315), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1313), 15,
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
  [15721] = 2,
    ACTIONS(1319), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1317), 15,
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
  [15743] = 2,
    ACTIONS(1323), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1321), 15,
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
  [15765] = 2,
    ACTIONS(1327), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1325), 15,
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
  [15787] = 2,
    ACTIONS(1331), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1329), 15,
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
  [15809] = 2,
    ACTIONS(1335), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1333), 15,
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
  [15831] = 2,
    ACTIONS(1339), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1337), 15,
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
  [15853] = 2,
    ACTIONS(1343), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1341), 15,
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
  [15875] = 2,
    ACTIONS(1347), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1345), 15,
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
  [15897] = 2,
    ACTIONS(1351), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1349), 15,
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
  [15919] = 1,
    ACTIONS(1353), 12,
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
  [15934] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(780), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [15959] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1363), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_snake_name,
    STATE(122), 1,
      sym_inline_agic_body,
    STATE(497), 1,
      sym_runnable,
    STATE(640), 1,
      sym_position_clause,
    STATE(689), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [15990] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1363), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_snake_name,
    STATE(124), 1,
      sym_inline_agic_body,
    STATE(523), 1,
      sym_runnable,
    STATE(647), 1,
      sym_position_clause,
    STATE(697), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16021] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1363), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_snake_name,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(428), 1,
      sym_runnable,
    STATE(551), 1,
      sym_rank_selection_clause,
    STATE(705), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16052] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(622), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16077] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(737), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16102] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(728), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16127] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(770), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16152] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(557), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16177] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(781), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16202] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(673), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16227] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(791), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16252] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(712), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16277] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(726), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16302] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(768), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16327] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(733), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16352] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1369), 1,
      sym_colon,
    STATE(227), 1,
      sym_inline_agic_body,
    STATE(484), 1,
      sym_runnable,
    STATE(596), 1,
      sym_position_clause,
    STATE(695), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16383] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1369), 1,
      sym_colon,
    STATE(210), 1,
      sym_inline_agic_body,
    STATE(485), 1,
      sym_runnable,
    STATE(598), 1,
      sym_position_clause,
    STATE(698), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16414] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1369), 1,
      sym_colon,
    STATE(211), 1,
      sym_inline_agic_body,
    STATE(433), 1,
      sym_runnable,
    STATE(528), 1,
      sym_rank_selection_clause,
    STATE(704), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16445] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(735), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16470] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1371), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(510), 1,
      sym_runnable,
    STATE(631), 1,
      sym_position_clause,
    STATE(681), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16501] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1371), 1,
      sym_colon,
    STATE(106), 1,
      sym_inline_agic_body,
    STATE(511), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(682), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16532] = 9,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1371), 1,
      sym_colon,
    STATE(62), 1,
      sym_inline_agic_body,
    STATE(451), 1,
      sym_runnable,
    STATE(532), 1,
      sym_rank_selection_clause,
    STATE(684), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16563] = 6,
    ACTIONS(1357), 1,
      sym_pascal_name,
    STATE(424), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type_name,
    STATE(721), 1,
      sym_type,
    STATE(473), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1355), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16588] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1373), 1,
      sym_arrow,
    ACTIONS(1375), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic,
    STATE(508), 1,
      sym_runnable,
    STATE(629), 1,
      sym_par_clause,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16615] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1377), 1,
      sym_arrow,
    ACTIONS(1379), 1,
      sym_colon,
    STATE(214), 1,
      sym_inline_agic,
    STATE(483), 1,
      sym_runnable,
    STATE(594), 1,
      sym_par_clause,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16642] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1381), 1,
      sym_arrow,
    ACTIONS(1383), 1,
      sym_colon,
    STATE(159), 1,
      sym_inline_agic,
    STATE(475), 1,
      sym_runnable,
    STATE(632), 1,
      sym_par_clause,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16669] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(211), 1,
      sym_inline_agic_body,
    STATE(433), 1,
      sym_runnable,
    STATE(528), 1,
      sym_rank_selection_clause,
    STATE(704), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16695] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(122), 1,
      sym_inline_agic_body,
    STATE(497), 1,
      sym_runnable,
    STATE(640), 1,
      sym_position_clause,
    STATE(689), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16721] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(227), 1,
      sym_inline_agic_body,
    STATE(484), 1,
      sym_runnable,
    STATE(596), 1,
      sym_position_clause,
    STATE(695), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16747] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(210), 1,
      sym_inline_agic_body,
    STATE(485), 1,
      sym_runnable,
    STATE(598), 1,
      sym_position_clause,
    STATE(698), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16773] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(510), 1,
      sym_runnable,
    STATE(631), 1,
      sym_position_clause,
    STATE(681), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16799] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(106), 1,
      sym_inline_agic_body,
    STATE(511), 1,
      sym_runnable,
    STATE(633), 1,
      sym_position_clause,
    STATE(682), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16825] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(62), 1,
      sym_inline_agic_body,
    STATE(451), 1,
      sym_runnable,
    STATE(532), 1,
      sym_rank_selection_clause,
    STATE(684), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16851] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(124), 1,
      sym_inline_agic_body,
    STATE(523), 1,
      sym_runnable,
    STATE(647), 1,
      sym_position_clause,
    STATE(697), 1,
      sym_par_clause,
    ACTIONS(1361), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16877] = 8,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(428), 1,
      sym_runnable,
    STATE(551), 1,
      sym_rank_selection_clause,
    STATE(705), 1,
      sym_par_clause,
    ACTIONS(1367), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16903] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(517), 1,
      sym_line_end,
    STATE(648), 1,
      sym_text_line,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [16926] = 4,
    ACTIONS(1399), 1,
      sym_array_suffix,
    STATE(426), 1,
      aux_sym_type_repeat1,
    STATE(469), 1,
      sym_type_suffix,
    ACTIONS(1397), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [16943] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1377), 1,
      sym_arrow,
    ACTIONS(1379), 1,
      sym_colon,
    STATE(263), 1,
      sym_inline_agic,
    STATE(592), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16964] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1377), 1,
      sym_arrow,
    ACTIONS(1379), 1,
      sym_colon,
    STATE(270), 1,
      sym_inline_agic,
    STATE(593), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16985] = 8,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1401), 1,
      sym_newline,
    ACTIONS(1403), 1,
      sym_inline_comment,
    STATE(362), 1,
      sym_instruct_body,
    STATE(371), 1,
      sym_text_block,
    STATE(374), 1,
      sym_text_inline,
    STATE(499), 1,
      sym_line_end,
    STATE(559), 1,
      sym_text_line,
  [17010] = 4,
    ACTIONS(1399), 1,
      sym_array_suffix,
    STATE(420), 1,
      aux_sym_type_repeat1,
    STATE(469), 1,
      sym_type_suffix,
    ACTIONS(1405), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17027] = 8,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1401), 1,
      sym_newline,
    ACTIONS(1403), 1,
      sym_inline_comment,
    STATE(371), 1,
      sym_text_block,
    STATE(372), 1,
      sym_instruct_body,
    STATE(374), 1,
      sym_text_inline,
    STATE(499), 1,
      sym_line_end,
    STATE(559), 1,
      sym_text_line,
  [17052] = 4,
    ACTIONS(1409), 1,
      sym_array_suffix,
    STATE(426), 1,
      aux_sym_type_repeat1,
    STATE(469), 1,
      sym_type_suffix,
    ACTIONS(1407), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17069] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(243), 1,
      sym__nested_text_block,
    STATE(512), 1,
      sym_line_end,
    STATE(636), 1,
      sym_text_line,
    STATE(238), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17092] = 7,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(137), 1,
      sym_line_end,
    STATE(476), 1,
      sym_rank_selection_clause,
    STATE(612), 1,
      sym_par_clause,
    ACTIONS(1418), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17115] = 4,
    ACTIONS(1424), 1,
      sym_colon,
    STATE(564), 1,
      sym_text_ref,
    ACTIONS(1420), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1422), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17132] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(279), 1,
      sym__nested_text_block,
    STATE(477), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(275), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17155] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(243), 1,
      sym__nested_text_block,
    STATE(512), 1,
      sym_line_end,
    STATE(636), 1,
      sym_text_line,
    STATE(244), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17178] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(243), 1,
      sym__nested_text_block,
    STATE(512), 1,
      sym_line_end,
    STATE(636), 1,
      sym_text_line,
    STATE(254), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17201] = 7,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(212), 1,
      sym_line_end,
    STATE(489), 1,
      sym_rank_selection_clause,
    STATE(610), 1,
      sym_par_clause,
    ACTIONS(1418), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17224] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(243), 1,
      sym__nested_text_block,
    STATE(512), 1,
      sym_line_end,
    STATE(636), 1,
      sym_text_line,
    STATE(215), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17247] = 6,
    ACTIONS(1432), 1,
      sym_comment_line,
    ACTIONS(1434), 1,
      sym_snake_name,
    STATE(358), 1,
      sym_struct_body,
    STATE(715), 1,
      sym_field_name,
    ACTIONS(1430), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(308), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [17268] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(487), 1,
      sym_line_end,
    STATE(601), 1,
      sym_text_line,
    STATE(111), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17291] = 4,
    ACTIONS(1436), 1,
      sym_colon,
    STATE(563), 1,
      sym_text_ref,
    ACTIONS(1420), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1422), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17308] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(487), 1,
      sym_line_end,
    STATE(601), 1,
      sym_text_line,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17331] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1373), 1,
      sym_arrow,
    ACTIONS(1375), 1,
      sym_colon,
    STATE(56), 1,
      sym_inline_agic,
    STATE(620), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17352] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(279), 1,
      sym__nested_text_block,
    STATE(477), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(278), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17375] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1373), 1,
      sym_arrow,
    ACTIONS(1375), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(627), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17396] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1373), 1,
      sym_arrow,
    ACTIONS(1375), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17417] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(487), 1,
      sym_line_end,
    STATE(601), 1,
      sym_text_line,
    STATE(108), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17440] = 8,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1401), 1,
      sym_newline,
    ACTIONS(1403), 1,
      sym_inline_comment,
    STATE(370), 1,
      sym_text_inline,
    STATE(371), 1,
      sym_text_block,
    STATE(381), 1,
      sym_context_body,
    STATE(499), 1,
      sym_line_end,
    STATE(559), 1,
      sym_text_line,
  [17465] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(517), 1,
      sym_line_end,
    STATE(648), 1,
      sym_text_line,
    STATE(64), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17488] = 8,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1401), 1,
      sym_newline,
    ACTIONS(1403), 1,
      sym_inline_comment,
    STATE(363), 1,
      sym_context_body,
    STATE(370), 1,
      sym_text_inline,
    STATE(371), 1,
      sym_text_block,
    STATE(499), 1,
      sym_line_end,
    STATE(559), 1,
      sym_text_line,
  [17513] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(279), 1,
      sym__nested_text_block,
    STATE(477), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(282), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17536] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1381), 1,
      sym_arrow,
    ACTIONS(1383), 1,
      sym_colon,
    STATE(155), 1,
      sym_inline_agic,
    STATE(626), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17557] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(517), 1,
      sym_line_end,
    STATE(648), 1,
      sym_text_line,
    STATE(67), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17580] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(517), 1,
      sym_line_end,
    STATE(648), 1,
      sym_text_line,
    STATE(74), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17603] = 7,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
    STATE(514), 1,
      sym_rank_selection_clause,
    STATE(644), 1,
      sym_par_clause,
    ACTIONS(1418), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17626] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(487), 1,
      sym_line_end,
    STATE(601), 1,
      sym_text_line,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17649] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(487), 1,
      sym_line_end,
    STATE(601), 1,
      sym_text_line,
    STATE(125), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17672] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1381), 1,
      sym_arrow,
    ACTIONS(1383), 1,
      sym_colon,
    STATE(149), 1,
      sym_inline_agic,
    STATE(625), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17693] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(517), 1,
      sym_line_end,
    STATE(648), 1,
      sym_text_line,
    STATE(96), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17716] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1381), 1,
      sym_arrow,
    ACTIONS(1383), 1,
      sym_colon,
    STATE(140), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17737] = 6,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1377), 1,
      sym_arrow,
    ACTIONS(1379), 1,
      sym_colon,
    STATE(269), 1,
      sym_inline_agic,
    STATE(585), 1,
      sym_runnable,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17758] = 7,
    ACTIONS(1391), 1,
      sym_newline,
    ACTIONS(1393), 1,
      sym_inline_comment,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    STATE(243), 1,
      sym__nested_text_block,
    STATE(512), 1,
      sym_line_end,
    STATE(636), 1,
      sym_text_line,
    STATE(228), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17781] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic,
    STATE(508), 1,
      sym_runnable,
    STATE(629), 1,
      sym_par_clause,
  [17803] = 3,
    STATE(679), 1,
      sym_directive_op,
    ACTIONS(1420), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1446), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [17817] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    STATE(214), 1,
      sym_inline_agic,
    STATE(483), 1,
      sym_runnable,
    STATE(594), 1,
      sym_par_clause,
  [17839] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    STATE(107), 1,
      sym_inline_agic,
    STATE(515), 1,
      sym_runnable,
    STATE(586), 1,
      sym_par_clause,
  [17861] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    STATE(159), 1,
      sym_inline_agic,
    STATE(475), 1,
      sym_runnable,
    STATE(632), 1,
      sym_par_clause,
  [17883] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    STATE(69), 1,
      sym_inline_agic,
    STATE(513), 1,
      sym_runnable,
    STATE(639), 1,
      sym_par_clause,
  [17905] = 7,
    ACTIONS(1359), 1,
      sym_flow_par_keyword,
    ACTIONS(1365), 1,
      sym_snake_name,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    STATE(246), 1,
      sym_inline_agic,
    STATE(488), 1,
      sym_runnable,
    STATE(606), 1,
      sym_par_clause,
  [17927] = 1,
    ACTIONS(1456), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [17936] = 6,
    ACTIONS(1458), 1,
      sym_arrow,
    ACTIONS(1460), 1,
      sym_colon,
    ACTIONS(1462), 1,
      sym_lparen,
    ACTIONS(1464), 1,
      sym_snake_name,
    STATE(541), 1,
      sym_agic_name,
    STATE(674), 1,
      sym_params,
  [17955] = 1,
    ACTIONS(1466), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17964] = 1,
    ACTIONS(1468), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17973] = 1,
    ACTIONS(1470), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17982] = 6,
    ACTIONS(1462), 1,
      sym_lparen,
    ACTIONS(1472), 1,
      sym_arrow,
    ACTIONS(1474), 1,
      sym_colon,
    ACTIONS(1476), 1,
      sym_snake_name,
    STATE(540), 1,
      sym_flow_name,
    STATE(664), 1,
      sym_params,
  [18001] = 1,
    ACTIONS(1478), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18010] = 1,
    ACTIONS(1480), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18019] = 1,
    ACTIONS(1482), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18028] = 5,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(148), 1,
      sym_line_end,
    STATE(590), 1,
      sym_par_clause,
  [18044] = 5,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(121), 1,
      sym_line_end,
    STATE(608), 1,
      sym_par_clause,
  [18060] = 5,
    ACTIONS(1484), 1,
      sym_blank_line,
    ACTIONS(1486), 1,
      sym__nested_indented_raw_text,
    STATE(202), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(272), 1,
      sym__nested_text_body_line,
    STATE(293), 1,
      sym__nested_text_body,
  [18076] = 5,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(140), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
  [18092] = 5,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(149), 1,
      sym_inline_agic,
    STATE(625), 1,
      sym_runnable,
  [18108] = 5,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(242), 1,
      sym_inline_agic,
    STATE(604), 1,
      sym_runnable,
  [18124] = 5,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(155), 1,
      sym_inline_agic,
    STATE(626), 1,
      sym_runnable,
  [18140] = 5,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(245), 1,
      sym_inline_agic,
    STATE(605), 1,
      sym_runnable,
  [18156] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
    STATE(607), 1,
      sym_par_clause,
  [18172] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
    STATE(658), 1,
      sym_par_clause,
  [18188] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(262), 1,
      sym_line_end,
    STATE(609), 1,
      sym_par_clause,
  [18204] = 3,
    ACTIONS(1490), 1,
      sym_snake_name,
    STATE(490), 1,
      sym_agent,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18216] = 5,
    ACTIONS(1492), 1,
      sym_blank_line,
    ACTIONS(1494), 1,
      sym__nested_indented_raw_text,
    STATE(35), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(54), 1,
      sym__nested_text_body_line,
    STATE(139), 1,
      sym__nested_text_body,
  [18232] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(220), 1,
      sym_line_end,
    STATE(613), 1,
      sym_par_clause,
  [18248] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(225), 1,
      sym_line_end,
    STATE(614), 1,
      sym_par_clause,
  [18264] = 5,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(133), 1,
      sym_inline_agic,
    STATE(582), 1,
      sym_runnable,
  [18280] = 5,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(135), 1,
      sym_inline_agic,
    STATE(583), 1,
      sym_runnable,
  [18296] = 5,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1496), 1,
      sym_newline,
    ACTIONS(1498), 1,
      sym_inline_comment,
    STATE(231), 1,
      sym_line_end,
    STATE(599), 1,
      sym_text_line,
  [18312] = 4,
    ACTIONS(1502), 1,
      sym_rparen,
    STATE(539), 1,
      sym_param_name,
    STATE(571), 1,
      sym_param,
    ACTIONS(1500), 2,
      anon_sym__,
      sym_snake_name,
  [18326] = 5,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1504), 1,
      sym_newline,
    ACTIONS(1506), 1,
      sym_inline_comment,
    STATE(288), 1,
      sym_line_end,
    STATE(577), 1,
      sym_text_line,
  [18342] = 3,
    ACTIONS(1508), 1,
      sym_colon,
    STATE(564), 1,
      sym_text_ref,
    ACTIONS(1422), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18354] = 1,
    ACTIONS(1510), 5,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [18362] = 5,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(157), 1,
      sym_line_end,
    STATE(597), 1,
      sym_par_clause,
  [18378] = 5,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1512), 1,
      sym_newline,
    ACTIONS(1514), 1,
      sym_inline_comment,
    STATE(63), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
  [18394] = 4,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1516), 1,
      sym_blank_line,
    STATE(355), 1,
      sym_text_body,
    STATE(309), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [18408] = 5,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(56), 1,
      sym_inline_agic,
    STATE(620), 1,
      sym_runnable,
  [18424] = 5,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(58), 1,
      sym_inline_agic,
    STATE(627), 1,
      sym_runnable,
  [18440] = 5,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(59), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
  [18456] = 3,
    ACTIONS(1518), 1,
      sym_colon,
    STATE(563), 1,
      sym_text_ref,
    ACTIONS(1422), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18468] = 5,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(66), 1,
      sym_inline_agic,
    STATE(637), 1,
      sym_runnable,
  [18484] = 3,
    ACTIONS(1520), 1,
      sym_integer_literal,
    ACTIONS(1522), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18496] = 5,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(68), 1,
      sym_inline_agic,
    STATE(638), 1,
      sym_runnable,
  [18512] = 5,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(269), 1,
      sym_inline_agic,
    STATE(585), 1,
      sym_runnable,
  [18528] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(73), 1,
      sym_line_end,
    STATE(641), 1,
      sym_par_clause,
  [18544] = 5,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(263), 1,
      sym_inline_agic,
    STATE(592), 1,
      sym_runnable,
  [18560] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(642), 1,
      sym_par_clause,
  [18576] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
    STATE(643), 1,
      sym_par_clause,
  [18592] = 5,
    ACTIONS(1524), 1,
      sym_blank_line,
    ACTIONS(1526), 1,
      sym__nested_indented_raw_text,
    STATE(189), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(205), 1,
      sym__nested_text_body_line,
    STATE(253), 1,
      sym__nested_text_body,
  [18608] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
    STATE(645), 1,
      sym_par_clause,
  [18624] = 5,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(646), 1,
      sym_par_clause,
  [18640] = 5,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(116), 1,
      sym_line_end,
    STATE(649), 1,
      sym_par_clause,
  [18656] = 5,
    ACTIONS(1395), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1528), 1,
      sym_newline,
    ACTIONS(1530), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
    STATE(558), 1,
      sym_text_line,
  [18672] = 5,
    ACTIONS(1532), 1,
      sym_blank_line,
    ACTIONS(1534), 1,
      sym__nested_indented_raw_text,
    STATE(22), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(40), 1,
      sym__nested_text_body_line,
    STATE(103), 1,
      sym__nested_text_body,
  [18688] = 3,
    ACTIONS(1490), 1,
      sym_snake_name,
    STATE(480), 1,
      sym_agent,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18700] = 3,
    ACTIONS(1490), 1,
      sym_snake_name,
    STATE(504), 1,
      sym_agent,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18712] = 5,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_snake_name,
    STATE(270), 1,
      sym_inline_agic,
    STATE(593), 1,
      sym_runnable,
  [18728] = 3,
    ACTIONS(1536), 1,
      sym_integer_literal,
    ACTIONS(1538), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18740] = 3,
    ACTIONS(1540), 1,
      sym_integer_literal,
    ACTIONS(1542), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18752] = 5,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(136), 1,
      sym_line_end,
    STATE(600), 1,
      sym_par_clause,
  [18768] = 2,
    ACTIONS(1544), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18777] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(300), 1,
      sym_line_end,
    STATE(361), 1,
      sym_job_body,
  [18790] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(350), 1,
      sym_cap_body,
  [18803] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(351), 1,
      sym_cap_body,
  [18816] = 4,
    ACTIONS(1385), 1,
      sym_colon,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(268), 1,
      sym_inline_agic_body,
    STATE(661), 1,
      sym_par_clause,
  [18829] = 1,
    ACTIONS(1550), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [18836] = 1,
    ACTIONS(1552), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [18843] = 2,
    ACTIONS(1554), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18852] = 4,
    ACTIONS(1389), 1,
      sym_colon,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(81), 1,
      sym_inline_agic_body,
    STATE(696), 1,
      sym_par_clause,
  [18865] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(352), 1,
      sym_cap_body,
  [18878] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(345), 1,
      sym_cap_body,
  [18891] = 1,
    ACTIONS(1556), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18898] = 2,
    STATE(706), 1,
      sym_directive_op,
    ACTIONS(1558), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [18907] = 2,
    ACTIONS(1560), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18916] = 3,
    STATE(539), 1,
      sym_param_name,
    STATE(662), 1,
      sym_param,
    ACTIONS(1500), 2,
      anon_sym__,
      sym_snake_name,
  [18927] = 3,
    ACTIONS(1562), 1,
      sym_optional_marker,
    ACTIONS(1564), 1,
      sym_colon,
    ACTIONS(1566), 2,
      sym_rparen,
      sym_comma,
  [18938] = 4,
    ACTIONS(1462), 1,
      sym_lparen,
    ACTIONS(1568), 1,
      sym_arrow,
    ACTIONS(1570), 1,
      sym_colon,
    STATE(694), 1,
      sym_params,
  [18951] = 4,
    ACTIONS(1462), 1,
      sym_lparen,
    ACTIONS(1572), 1,
      sym_arrow,
    ACTIONS(1574), 1,
      sym_colon,
    STATE(711), 1,
      sym_params,
  [18964] = 2,
    ACTIONS(1576), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18973] = 2,
    ACTIONS(597), 1,
      sym_comment_line,
    ACTIONS(595), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [18982] = 2,
    ACTIONS(1578), 1,
      sym_colon,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18991] = 2,
    ACTIONS(1580), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19000] = 2,
    ACTIONS(1582), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19009] = 2,
    ACTIONS(397), 1,
      sym_comment_line,
    ACTIONS(395), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19018] = 4,
    ACTIONS(1420), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1584), 1,
      sym_newline,
    ACTIONS(1586), 1,
      sym_inline_comment,
    STATE(364), 1,
      sym_line_end,
  [19031] = 2,
    ACTIONS(1588), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19040] = 2,
    ACTIONS(1590), 1,
      sym_integer_literal,
    ACTIONS(881), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19049] = 4,
    ACTIONS(1387), 1,
      sym_colon,
    ACTIONS(1416), 1,
      sym_flow_par_keyword,
    STATE(143), 1,
      sym_inline_agic_body,
    STATE(660), 1,
      sym_par_clause,
  [19062] = 2,
    STATE(679), 1,
      sym_directive_op,
    ACTIONS(1558), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19071] = 2,
    ACTIONS(1592), 1,
      sym_colon,
    ACTIONS(1420), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19080] = 4,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(300), 1,
      sym_line_end,
    STATE(380), 1,
      sym_job_body,
  [19093] = 1,
    ACTIONS(1594), 4,
      sym_newline,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [19100] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(346), 1,
      sym_line_end,
  [19110] = 3,
    ACTIONS(1600), 1,
      sym_newline,
    ACTIONS(1602), 1,
      sym_inline_comment,
    STATE(344), 1,
      sym_line_end,
  [19120] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(154), 1,
      sym_line_end,
  [19130] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(359), 1,
      sym_line_end,
  [19140] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [19150] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [19160] = 3,
    ACTIONS(1608), 1,
      aux_sym_directive_value_token1,
    STATE(623), 1,
      sym_property_value,
    STATE(677), 1,
      sym_text_line,
  [19170] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(281), 1,
      sym_line_end,
  [19180] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(283), 1,
      sym_line_end,
  [19190] = 1,
    ACTIONS(1614), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19196] = 3,
    ACTIONS(1616), 1,
      sym_colon,
    ACTIONS(1618), 1,
      sym_snake_name,
    STATE(722), 1,
      sym_context_name,
  [19206] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(277), 1,
      sym_line_end,
  [19216] = 3,
    ACTIONS(1620), 1,
      sym_colon,
    ACTIONS(1622), 1,
      sym_snake_name,
    STATE(745), 1,
      sym_instruct_name,
  [19226] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(280), 1,
      sym_line_end,
  [19236] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(184), 1,
      sym_line_end,
  [19246] = 3,
    ACTIONS(1628), 1,
      sym_rparen,
    ACTIONS(1630), 1,
      sym_comma,
    STATE(573), 1,
      aux_sym_params_repeat1,
  [19256] = 1,
    ACTIONS(1632), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19262] = 3,
    ACTIONS(1630), 1,
      sym_comma,
    ACTIONS(1634), 1,
      sym_rparen,
    STATE(579), 1,
      aux_sym_params_repeat1,
  [19272] = 2,
    ACTIONS(1636), 1,
      sym_colon,
    ACTIONS(1638), 2,
      sym_rparen,
      sym_comma,
  [19280] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(183), 1,
      sym_line_end,
  [19290] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(182), 1,
      sym_line_end,
  [19300] = 3,
    ACTIONS(1610), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_inline_comment,
    STATE(276), 1,
      sym_line_end,
  [19310] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(181), 1,
      sym_line_end,
  [19320] = 3,
    ACTIONS(1640), 1,
      sym_rparen,
    ACTIONS(1642), 1,
      sym_comma,
    STATE(579), 1,
      aux_sym_params_repeat1,
  [19330] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
  [19340] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_line_end,
  [19350] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_line_end,
  [19360] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [19370] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
  [19380] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(239), 1,
      sym_line_end,
  [19390] = 3,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    STATE(115), 1,
      sym_inline_agic,
  [19400] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [19410] = 3,
    ACTIONS(1596), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_inline_comment,
    STATE(364), 1,
      sym_line_end,
  [19420] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [19430] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
  [19440] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [19450] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(247), 1,
      sym_line_end,
  [19460] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(249), 1,
      sym_line_end,
  [19470] = 3,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    STATE(251), 1,
      sym_inline_agic,
  [19480] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
  [19490] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(257), 1,
      sym_line_end,
  [19500] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(118), 1,
      sym_line_end,
  [19510] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(260), 1,
      sym_line_end,
  [19520] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(213), 1,
      sym_line_end,
  [19530] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(119), 1,
      sym_line_end,
  [19540] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [19550] = 3,
    ACTIONS(1645), 1,
      sym_newline,
    ACTIONS(1647), 1,
      sym_inline_comment,
    STATE(173), 1,
      sym_line_end,
  [19560] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [19570] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(217), 1,
      sym_line_end,
  [19580] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(218), 1,
      sym_line_end,
  [19590] = 3,
    ACTIONS(1448), 1,
      sym_arrow,
    ACTIONS(1450), 1,
      sym_colon,
    STATE(219), 1,
      sym_inline_agic,
  [19600] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(221), 1,
      sym_line_end,
  [19610] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(127), 1,
      sym_line_end,
  [19620] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(223), 1,
      sym_line_end,
  [19630] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(225), 1,
      sym_line_end,
  [19640] = 1,
    ACTIONS(1649), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19646] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
  [19656] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(229), 1,
      sym_line_end,
  [19666] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(230), 1,
      sym_line_end,
  [19676] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
  [19686] = 3,
    ACTIONS(1655), 1,
      sym_pascal_name,
    STATE(732), 1,
      sym_struct_name,
    STATE(783), 1,
      sym_type_name,
  [19696] = 3,
    ACTIONS(1657), 1,
      anon_sym_EQ,
    ACTIONS(1659), 1,
      sym_colon,
    STATE(302), 1,
      sym_assign_operator,
  [19706] = 1,
    ACTIONS(1661), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [19712] = 1,
    ACTIONS(1456), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19718] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(65), 1,
      sym_line_end,
  [19728] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [19738] = 3,
    ACTIONS(1600), 1,
      sym_newline,
    ACTIONS(1602), 1,
      sym_inline_comment,
    STATE(343), 1,
      sym_line_end,
  [19748] = 3,
    ACTIONS(1546), 1,
      sym_newline,
    ACTIONS(1548), 1,
      sym_inline_comment,
    STATE(339), 1,
      sym_line_end,
  [19758] = 3,
    ACTIONS(1663), 1,
      sym_newline,
    ACTIONS(1665), 1,
      sym_inline_comment,
    STATE(435), 1,
      sym_line_end,
  [19768] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [19778] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(145), 1,
      sym_line_end,
  [19788] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_line_end,
  [19798] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(71), 1,
      sym_line_end,
  [19808] = 3,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    STATE(72), 1,
      sym_inline_agic,
  [19818] = 3,
    ACTIONS(1608), 1,
      aux_sym_directive_value_token1,
    STATE(556), 1,
      sym_cap_ref,
    STATE(676), 1,
      sym_text_line,
  [19828] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(76), 1,
      sym_line_end,
  [19838] = 3,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    STATE(147), 1,
      sym_inline_agic,
  [19848] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
  [19858] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [19868] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
  [19878] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(256), 1,
      sym_line_end,
  [19888] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_line_end,
  [19898] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [19908] = 3,
    ACTIONS(1442), 1,
      sym_arrow,
    ACTIONS(1444), 1,
      sym_colon,
    STATE(88), 1,
      sym_inline_agic,
  [19918] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
  [19928] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
  [19938] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
  [19948] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [19958] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [19968] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_line_end,
  [19978] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [19988] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [19998] = 3,
    ACTIONS(1438), 1,
      sym_newline,
    ACTIONS(1440), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym_line_end,
  [20008] = 3,
    ACTIONS(1412), 1,
      sym_newline,
    ACTIONS(1414), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
  [20018] = 3,
    ACTIONS(1657), 1,
      anon_sym_EQ,
    ACTIONS(1667), 1,
      sym_colon,
    STATE(303), 1,
      sym_assign_operator,
  [20028] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [20038] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [20048] = 3,
    ACTIONS(1604), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [20058] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
  [20068] = 3,
    ACTIONS(1657), 1,
      anon_sym_EQ,
    ACTIONS(1669), 1,
      sym_colon,
    STATE(304), 1,
      sym_assign_operator,
  [20078] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [20088] = 3,
    ACTIONS(1651), 1,
      sym_newline,
    ACTIONS(1653), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [20098] = 3,
    ACTIONS(1426), 1,
      sym_newline,
    ACTIONS(1428), 1,
      sym_inline_comment,
    STATE(222), 1,
      sym_line_end,
  [20108] = 1,
    ACTIONS(1671), 2,
      sym_optional_marker,
      sym_colon,
  [20113] = 2,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(120), 1,
      sym_inline_agic_body,
  [20120] = 2,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(224), 1,
      sym_inline_agic_body,
  [20127] = 1,
    ACTIONS(1673), 2,
      sym_rparen,
      sym_comma,
  [20132] = 1,
    ACTIONS(1675), 2,
      sym_arrow,
      sym_colon,
  [20137] = 2,
    ACTIONS(1677), 1,
      sym_arrow,
    ACTIONS(1679), 1,
      sym_colon,
  [20144] = 2,
    ACTIONS(1681), 1,
      anon_sym_EQ,
    STATE(562), 1,
      sym_assign_operator,
  [20151] = 2,
    ACTIONS(1683), 1,
      sym_flow_until_keyword,
    STATE(233), 1,
      sym_until_statement,
  [20158] = 2,
    ACTIONS(1685), 1,
      sym_indented_raw_text,
    STATE(198), 1,
      sym_text_body_line,
  [20165] = 2,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(235), 1,
      sym_inline_agic_body,
  [20172] = 1,
    ACTIONS(1687), 2,
      sym_newline,
      sym_inline_comment,
  [20177] = 2,
    ACTIONS(1689), 1,
      sym_integer_literal,
    ACTIONS(1691), 1,
      sym_colon,
  [20184] = 1,
    ACTIONS(1693), 2,
      anon_sym_EQ,
      sym_colon,
  [20189] = 2,
    ACTIONS(1695), 1,
      sym__snake_kebab_name,
    STATE(779), 1,
      sym_cap_name,
  [20196] = 1,
    ACTIONS(1697), 2,
      sym_rparen,
      sym_comma,
  [20201] = 2,
    ACTIONS(1699), 1,
      sym_arrow,
    ACTIONS(1701), 1,
      sym_colon,
  [20208] = 1,
    ACTIONS(397), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20213] = 1,
    ACTIONS(1703), 2,
      sym_newline,
      sym_inline_comment,
  [20218] = 1,
    ACTIONS(1705), 2,
      sym_newline,
      sym_inline_comment,
  [20223] = 2,
    ACTIONS(1695), 1,
      sym__snake_kebab_name,
    STATE(787), 1,
      sym_cap_name,
  [20230] = 2,
    ACTIONS(1707), 1,
      aux_sym_directive_value_token1,
    STATE(569), 1,
      sym_directive_value,
  [20237] = 1,
    ACTIONS(1709), 2,
      sym_newline,
      sym_inline_comment,
  [20242] = 2,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(75), 1,
      sym_inline_agic_body,
  [20249] = 2,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(78), 1,
      sym_inline_agic_body,
  [20256] = 2,
    ACTIONS(1695), 1,
      sym__snake_kebab_name,
    STATE(789), 1,
      sym_cap_name,
  [20263] = 2,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(81), 1,
      sym_inline_agic_body,
  [20270] = 2,
    ACTIONS(1711), 1,
      sym_indented_raw_text,
    STATE(291), 1,
      sym__unroled_message_continuation_line,
  [20277] = 2,
    ACTIONS(1695), 1,
      sym__snake_kebab_name,
    STATE(760), 1,
      sym_cap_name,
  [20284] = 2,
    ACTIONS(1713), 1,
      sym__snake_kebab_name,
    STATE(774), 1,
      sym_job_name,
  [20291] = 2,
    ACTIONS(1713), 1,
      sym__snake_kebab_name,
    STATE(778), 1,
      sym_job_name,
  [20298] = 2,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(151), 1,
      sym_inline_agic_body,
  [20305] = 1,
    ACTIONS(1715), 2,
      sym_arrow,
      sym_colon,
  [20310] = 2,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(132), 1,
      sym_inline_agic_body,
  [20317] = 1,
    ACTIONS(1717), 2,
      sym_arrow,
      sym_colon,
  [20322] = 1,
    ACTIONS(1719), 2,
      sym_newline,
      sym_inline_comment,
  [20327] = 2,
    ACTIONS(1721), 1,
      sym_arrow,
    ACTIONS(1723), 1,
      sym_colon,
  [20334] = 2,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(255), 1,
      sym_inline_agic_body,
  [20341] = 2,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(93), 1,
      sym_inline_agic_body,
  [20348] = 2,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(158), 1,
      sym_inline_agic_body,
  [20355] = 2,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(259), 1,
      sym_inline_agic_body,
  [20362] = 2,
    ACTIONS(1725), 1,
      sym_flow_until_keyword,
    STATE(99), 1,
      sym_until_statement,
  [20369] = 2,
    ACTIONS(1727), 1,
      sym_indented_raw_text,
    STATE(43), 1,
      sym_text_body_line,
  [20376] = 2,
    ACTIONS(1389), 1,
      sym_colon,
    STATE(101), 1,
      sym_inline_agic_body,
  [20383] = 1,
    ACTIONS(597), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20388] = 2,
    ACTIONS(1729), 1,
      sym_snake_name,
    STATE(490), 1,
      sym_agent,
  [20395] = 2,
    ACTIONS(1385), 1,
      sym_colon,
    STATE(268), 1,
      sym_inline_agic_body,
  [20402] = 2,
    ACTIONS(1387), 1,
      sym_colon,
    STATE(143), 1,
      sym_inline_agic_body,
  [20409] = 2,
    ACTIONS(1707), 1,
      aux_sym_directive_value_token1,
    STATE(602), 1,
      sym_directive_value,
  [20416] = 2,
    ACTIONS(1729), 1,
      sym_snake_name,
    STATE(480), 1,
      sym_agent,
  [20423] = 2,
    ACTIONS(595), 1,
      sym__nested_indented_raw_text,
    ACTIONS(597), 1,
      sym_blank_line,
  [20430] = 2,
    ACTIONS(1729), 1,
      sym_snake_name,
    STATE(504), 1,
      sym_agent,
  [20437] = 2,
    ACTIONS(395), 1,
      sym__nested_indented_raw_text,
    ACTIONS(397), 1,
      sym_blank_line,
  [20444] = 2,
    ACTIONS(1731), 1,
      sym_arrow,
    ACTIONS(1733), 1,
      sym_colon,
  [20451] = 1,
    ACTIONS(1735), 2,
      sym_rparen,
      sym_comma,
  [20456] = 2,
    ACTIONS(1737), 1,
      sym_flow_until_keyword,
    STATE(130), 1,
      sym_until_statement,
  [20463] = 2,
    ACTIONS(1739), 1,
      sym_integer_literal,
    ACTIONS(1741), 1,
      sym_colon,
  [20470] = 2,
    ACTIONS(1743), 1,
      sym_optional_marker,
    ACTIONS(1745), 1,
      sym_colon,
  [20477] = 2,
    ACTIONS(1747), 1,
      sym_indented_raw_text,
    STATE(51), 1,
      sym_text_body_line,
  [20484] = 2,
    ACTIONS(1749), 1,
      sym_integer_literal,
    ACTIONS(1751), 1,
      sym_colon,
  [20491] = 1,
    ACTIONS(1753), 2,
      sym_newline,
      sym_inline_comment,
  [20496] = 1,
    ACTIONS(1755), 1,
      sym_integer_literal,
  [20500] = 1,
    ACTIONS(1757), 1,
      sym_newline,
  [20504] = 1,
    ACTIONS(1759), 1,
      sym_colon,
  [20508] = 1,
    ACTIONS(1761), 1,
      sym_colon,
  [20512] = 1,
    ACTIONS(1763), 1,
      sym_newline,
  [20516] = 1,
    ACTIONS(1765), 1,
      sym_colon,
  [20520] = 1,
    ACTIONS(1767), 1,
      sym_cap_kind,
  [20524] = 1,
    ACTIONS(1769), 1,
      sym_colon,
  [20528] = 1,
    ACTIONS(1771), 1,
      sym_newline,
  [20532] = 1,
    ACTIONS(1773), 1,
      sym_colon,
  [20536] = 1,
    ACTIONS(1775), 1,
      sym_colon,
  [20540] = 1,
    ACTIONS(1777), 1,
      sym_newline,
  [20544] = 1,
    ACTIONS(1353), 1,
      aux_sym_directive_value_token1,
  [20548] = 1,
    ACTIONS(1779), 1,
      sym_colon,
  [20552] = 1,
    ACTIONS(1781), 1,
      sym_colon,
  [20556] = 1,
    ACTIONS(1783), 1,
      sym_newline,
  [20560] = 1,
    ACTIONS(1785), 1,
      sym_colon,
  [20564] = 1,
    ACTIONS(1787), 1,
      anon_sym_EQ,
  [20568] = 1,
    ACTIONS(1789), 1,
      sym_colon,
  [20572] = 1,
    ACTIONS(1791), 1,
      sym_newline,
  [20576] = 1,
    ACTIONS(1793), 1,
      sym_newline,
  [20580] = 1,
    ACTIONS(1795), 1,
      aux_sym_directive_value_token1,
  [20584] = 1,
    ACTIONS(1797), 1,
      sym_newline,
  [20588] = 1,
    ACTIONS(1799), 1,
      sym_newline,
  [20592] = 1,
    ACTIONS(1801), 1,
      sym_newline,
  [20596] = 1,
    ACTIONS(1803), 1,
      sym_newline,
  [20600] = 1,
    ACTIONS(1805), 1,
      sym_colon,
  [20604] = 1,
    ACTIONS(1807), 1,
      sym_newline,
  [20608] = 1,
    ACTIONS(1809), 1,
      sym_newline,
  [20612] = 1,
    ACTIONS(1811), 1,
      sym_newline,
  [20616] = 1,
    ACTIONS(1813), 1,
      sym_newline,
  [20620] = 1,
    ACTIONS(1815), 1,
      sym_newline,
  [20624] = 1,
    ACTIONS(1817), 1,
      sym_newline,
  [20628] = 1,
    ACTIONS(1819), 1,
      sym_newline,
  [20632] = 1,
    ACTIONS(1821), 1,
      sym_newline,
  [20636] = 1,
    ACTIONS(1823), 1,
      sym_newline,
  [20640] = 1,
    ACTIONS(1825), 1,
      sym_newline,
  [20644] = 1,
    ACTIONS(1827), 1,
      sym_newline,
  [20648] = 1,
    ACTIONS(1829), 1,
      sym_integer_literal,
  [20652] = 1,
    ACTIONS(1831), 1,
      sym_newline,
  [20656] = 1,
    ACTIONS(1833), 1,
      sym_newline,
  [20660] = 1,
    ACTIONS(1835), 1,
      sym_colon,
  [20664] = 1,
    ACTIONS(1837), 1,
      sym_integer_literal,
  [20668] = 1,
    ACTIONS(1839), 1,
      ts_builtin_sym_end,
  [20672] = 1,
    ACTIONS(1841), 1,
      sym_colon,
  [20676] = 1,
    ACTIONS(1843), 1,
      sym_integer_literal,
  [20680] = 1,
    ACTIONS(1845), 1,
      sym_integer_literal,
  [20684] = 1,
    ACTIONS(1847), 1,
      sym_colon,
  [20688] = 1,
    ACTIONS(1849), 1,
      sym_integer_literal,
  [20692] = 1,
    ACTIONS(1851), 1,
      sym_colon,
  [20696] = 1,
    ACTIONS(1853), 1,
      sym_colon,
  [20700] = 1,
    ACTIONS(1855), 1,
      sym_colon,
  [20704] = 1,
    ACTIONS(1857), 1,
      sym_colon,
  [20708] = 1,
    ACTIONS(1859), 1,
      sym_colon,
  [20712] = 1,
    ACTIONS(1861), 1,
      sym_newline,
  [20716] = 1,
    ACTIONS(1863), 1,
      sym_colon,
  [20720] = 1,
    ACTIONS(1865), 1,
      sym_colon,
  [20724] = 1,
    ACTIONS(1867), 1,
      sym_integer_literal,
  [20728] = 1,
    ACTIONS(1869), 1,
      sym_integer_literal,
  [20732] = 1,
    ACTIONS(1871), 1,
      sym_colon,
  [20736] = 1,
    ACTIONS(1873), 1,
      sym_colon,
  [20740] = 1,
    ACTIONS(1875), 1,
      sym_colon,
  [20744] = 1,
    ACTIONS(1877), 1,
      sym_colon,
  [20748] = 1,
    ACTIONS(1879), 1,
      sym_colon,
  [20752] = 1,
    ACTIONS(1881), 1,
      sym_colon,
  [20756] = 1,
    ACTIONS(1883), 1,
      sym_newline,
  [20760] = 1,
    ACTIONS(1885), 1,
      sym_newline,
  [20764] = 1,
    ACTIONS(1887), 1,
      sym_colon,
  [20768] = 1,
    ACTIONS(1889), 1,
      sym_colon,
  [20772] = 1,
    ACTIONS(1891), 1,
      sym_integer_literal,
  [20776] = 1,
    ACTIONS(1893), 1,
      sym_colon,
  [20780] = 1,
    ACTIONS(1895), 1,
      sym_colon,
  [20784] = 1,
    ACTIONS(1897), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 94,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 580,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 728,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 876,
  [SMALL_STATE(29)] = 965,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1115,
  [SMALL_STATE(32)] = 1173,
  [SMALL_STATE(33)] = 1259,
  [SMALL_STATE(34)] = 1317,
  [SMALL_STATE(35)] = 1375,
  [SMALL_STATE(36)] = 1435,
  [SMALL_STATE(37)] = 1495,
  [SMALL_STATE(38)] = 1581,
  [SMALL_STATE(39)] = 1637,
  [SMALL_STATE(40)] = 1693,
  [SMALL_STATE(41)] = 1744,
  [SMALL_STATE(42)] = 1795,
  [SMALL_STATE(43)] = 1846,
  [SMALL_STATE(44)] = 1897,
  [SMALL_STATE(45)] = 1948,
  [SMALL_STATE(46)] = 2003,
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
  [SMALL_STATE(161)] = 7719,
  [SMALL_STATE(162)] = 7801,
  [SMALL_STATE(163)] = 7855,
  [SMALL_STATE(164)] = 7937,
  [SMALL_STATE(165)] = 7991,
  [SMALL_STATE(166)] = 8040,
  [SMALL_STATE(167)] = 8109,
  [SMALL_STATE(168)] = 8178,
  [SMALL_STATE(169)] = 8247,
  [SMALL_STATE(170)] = 8290,
  [SMALL_STATE(171)] = 8333,
  [SMALL_STATE(172)] = 8397,
  [SMALL_STATE(173)] = 8439,
  [SMALL_STATE(174)] = 8481,
  [SMALL_STATE(175)] = 8523,
  [SMALL_STATE(176)] = 8587,
  [SMALL_STATE(177)] = 8651,
  [SMALL_STATE(178)] = 8730,
  [SMALL_STATE(179)] = 8809,
  [SMALL_STATE(180)] = 8888,
  [SMALL_STATE(181)] = 8967,
  [SMALL_STATE(182)] = 9046,
  [SMALL_STATE(183)] = 9125,
  [SMALL_STATE(184)] = 9204,
  [SMALL_STATE(185)] = 9283,
  [SMALL_STATE(186)] = 9327,
  [SMALL_STATE(187)] = 9371,
  [SMALL_STATE(188)] = 9415,
  [SMALL_STATE(189)] = 9491,
  [SMALL_STATE(190)] = 9537,
  [SMALL_STATE(191)] = 9583,
  [SMALL_STATE(192)] = 9624,
  [SMALL_STATE(193)] = 9665,
  [SMALL_STATE(194)] = 9712,
  [SMALL_STATE(195)] = 9759,
  [SMALL_STATE(196)] = 9806,
  [SMALL_STATE(197)] = 9842,
  [SMALL_STATE(198)] = 9882,
  [SMALL_STATE(199)] = 9918,
  [SMALL_STATE(200)] = 9954,
  [SMALL_STATE(201)] = 10000,
  [SMALL_STATE(202)] = 10046,
  [SMALL_STATE(203)] = 10092,
  [SMALL_STATE(204)] = 10138,
  [SMALL_STATE(205)] = 10184,
  [SMALL_STATE(206)] = 10220,
  [SMALL_STATE(207)] = 10256,
  [SMALL_STATE(208)] = 10302,
  [SMALL_STATE(209)] = 10369,
  [SMALL_STATE(210)] = 10404,
  [SMALL_STATE(211)] = 10439,
  [SMALL_STATE(212)] = 10474,
  [SMALL_STATE(213)] = 10509,
  [SMALL_STATE(214)] = 10544,
  [SMALL_STATE(215)] = 10579,
  [SMALL_STATE(216)] = 10614,
  [SMALL_STATE(217)] = 10649,
  [SMALL_STATE(218)] = 10684,
  [SMALL_STATE(219)] = 10719,
  [SMALL_STATE(220)] = 10754,
  [SMALL_STATE(221)] = 10789,
  [SMALL_STATE(222)] = 10824,
  [SMALL_STATE(223)] = 10859,
  [SMALL_STATE(224)] = 10894,
  [SMALL_STATE(225)] = 10929,
  [SMALL_STATE(226)] = 10964,
  [SMALL_STATE(227)] = 10999,
  [SMALL_STATE(228)] = 11034,
  [SMALL_STATE(229)] = 11069,
  [SMALL_STATE(230)] = 11104,
  [SMALL_STATE(231)] = 11139,
  [SMALL_STATE(232)] = 11174,
  [SMALL_STATE(233)] = 11209,
  [SMALL_STATE(234)] = 11244,
  [SMALL_STATE(235)] = 11279,
  [SMALL_STATE(236)] = 11314,
  [SMALL_STATE(237)] = 11359,
  [SMALL_STATE(238)] = 11400,
  [SMALL_STATE(239)] = 11435,
  [SMALL_STATE(240)] = 11470,
  [SMALL_STATE(241)] = 11515,
  [SMALL_STATE(242)] = 11560,
  [SMALL_STATE(243)] = 11595,
  [SMALL_STATE(244)] = 11630,
  [SMALL_STATE(245)] = 11665,
  [SMALL_STATE(246)] = 11700,
  [SMALL_STATE(247)] = 11735,
  [SMALL_STATE(248)] = 11770,
  [SMALL_STATE(249)] = 11837,
  [SMALL_STATE(250)] = 11872,
  [SMALL_STATE(251)] = 11913,
  [SMALL_STATE(252)] = 11948,
  [SMALL_STATE(253)] = 11983,
  [SMALL_STATE(254)] = 12018,
  [SMALL_STATE(255)] = 12053,
  [SMALL_STATE(256)] = 12088,
  [SMALL_STATE(257)] = 12123,
  [SMALL_STATE(258)] = 12158,
  [SMALL_STATE(259)] = 12193,
  [SMALL_STATE(260)] = 12228,
  [SMALL_STATE(261)] = 12263,
  [SMALL_STATE(262)] = 12304,
  [SMALL_STATE(263)] = 12339,
  [SMALL_STATE(264)] = 12374,
  [SMALL_STATE(265)] = 12415,
  [SMALL_STATE(266)] = 12456,
  [SMALL_STATE(267)] = 12491,
  [SMALL_STATE(268)] = 12526,
  [SMALL_STATE(269)] = 12561,
  [SMALL_STATE(270)] = 12596,
  [SMALL_STATE(271)] = 12631,
  [SMALL_STATE(272)] = 12667,
  [SMALL_STATE(273)] = 12703,
  [SMALL_STATE(274)] = 12743,
  [SMALL_STATE(275)] = 12783,
  [SMALL_STATE(276)] = 12818,
  [SMALL_STATE(277)] = 12853,
  [SMALL_STATE(278)] = 12888,
  [SMALL_STATE(279)] = 12923,
  [SMALL_STATE(280)] = 12958,
  [SMALL_STATE(281)] = 12993,
  [SMALL_STATE(282)] = 13028,
  [SMALL_STATE(283)] = 13063,
  [SMALL_STATE(284)] = 13098,
  [SMALL_STATE(285)] = 13133,
  [SMALL_STATE(286)] = 13168,
  [SMALL_STATE(287)] = 13203,
  [SMALL_STATE(288)] = 13266,
  [SMALL_STATE(289)] = 13301,
  [SMALL_STATE(290)] = 13336,
  [SMALL_STATE(291)] = 13399,
  [SMALL_STATE(292)] = 13434,
  [SMALL_STATE(293)] = 13469,
  [SMALL_STATE(294)] = 13504,
  [SMALL_STATE(295)] = 13567,
  [SMALL_STATE(296)] = 13602,
  [SMALL_STATE(297)] = 13632,
  [SMALL_STATE(298)] = 13662,
  [SMALL_STATE(299)] = 13709,
  [SMALL_STATE(300)] = 13756,
  [SMALL_STATE(301)] = 13803,
  [SMALL_STATE(302)] = 13850,
  [SMALL_STATE(303)] = 13902,
  [SMALL_STATE(304)] = 13954,
  [SMALL_STATE(305)] = 14006,
  [SMALL_STATE(306)] = 14042,
  [SMALL_STATE(307)] = 14070,
  [SMALL_STATE(308)] = 14106,
  [SMALL_STATE(309)] = 14142,
  [SMALL_STATE(310)] = 14173,
  [SMALL_STATE(311)] = 14204,
  [SMALL_STATE(312)] = 14228,
  [SMALL_STATE(313)] = 14256,
  [SMALL_STATE(314)] = 14284,
  [SMALL_STATE(315)] = 14312,
  [SMALL_STATE(316)] = 14340,
  [SMALL_STATE(317)] = 14368,
  [SMALL_STATE(318)] = 14396,
  [SMALL_STATE(319)] = 14424,
  [SMALL_STATE(320)] = 14452,
  [SMALL_STATE(321)] = 14476,
  [SMALL_STATE(322)] = 14504,
  [SMALL_STATE(323)] = 14532,
  [SMALL_STATE(324)] = 14554,
  [SMALL_STATE(325)] = 14576,
  [SMALL_STATE(326)] = 14604,
  [SMALL_STATE(327)] = 14632,
  [SMALL_STATE(328)] = 14660,
  [SMALL_STATE(329)] = 14688,
  [SMALL_STATE(330)] = 14716,
  [SMALL_STATE(331)] = 14744,
  [SMALL_STATE(332)] = 14772,
  [SMALL_STATE(333)] = 14800,
  [SMALL_STATE(334)] = 14828,
  [SMALL_STATE(335)] = 14856,
  [SMALL_STATE(336)] = 14884,
  [SMALL_STATE(337)] = 14912,
  [SMALL_STATE(338)] = 14940,
  [SMALL_STATE(339)] = 14966,
  [SMALL_STATE(340)] = 14990,
  [SMALL_STATE(341)] = 15013,
  [SMALL_STATE(342)] = 15036,
  [SMALL_STATE(343)] = 15059,
  [SMALL_STATE(344)] = 15082,
  [SMALL_STATE(345)] = 15105,
  [SMALL_STATE(346)] = 15127,
  [SMALL_STATE(347)] = 15149,
  [SMALL_STATE(348)] = 15171,
  [SMALL_STATE(349)] = 15193,
  [SMALL_STATE(350)] = 15215,
  [SMALL_STATE(351)] = 15237,
  [SMALL_STATE(352)] = 15259,
  [SMALL_STATE(353)] = 15281,
  [SMALL_STATE(354)] = 15303,
  [SMALL_STATE(355)] = 15325,
  [SMALL_STATE(356)] = 15347,
  [SMALL_STATE(357)] = 15369,
  [SMALL_STATE(358)] = 15391,
  [SMALL_STATE(359)] = 15413,
  [SMALL_STATE(360)] = 15435,
  [SMALL_STATE(361)] = 15457,
  [SMALL_STATE(362)] = 15479,
  [SMALL_STATE(363)] = 15501,
  [SMALL_STATE(364)] = 15523,
  [SMALL_STATE(365)] = 15545,
  [SMALL_STATE(366)] = 15567,
  [SMALL_STATE(367)] = 15589,
  [SMALL_STATE(368)] = 15611,
  [SMALL_STATE(369)] = 15633,
  [SMALL_STATE(370)] = 15655,
  [SMALL_STATE(371)] = 15677,
  [SMALL_STATE(372)] = 15699,
  [SMALL_STATE(373)] = 15721,
  [SMALL_STATE(374)] = 15743,
  [SMALL_STATE(375)] = 15765,
  [SMALL_STATE(376)] = 15787,
  [SMALL_STATE(377)] = 15809,
  [SMALL_STATE(378)] = 15831,
  [SMALL_STATE(379)] = 15853,
  [SMALL_STATE(380)] = 15875,
  [SMALL_STATE(381)] = 15897,
  [SMALL_STATE(382)] = 15919,
  [SMALL_STATE(383)] = 15934,
  [SMALL_STATE(384)] = 15959,
  [SMALL_STATE(385)] = 15990,
  [SMALL_STATE(386)] = 16021,
  [SMALL_STATE(387)] = 16052,
  [SMALL_STATE(388)] = 16077,
  [SMALL_STATE(389)] = 16102,
  [SMALL_STATE(390)] = 16127,
  [SMALL_STATE(391)] = 16152,
  [SMALL_STATE(392)] = 16177,
  [SMALL_STATE(393)] = 16202,
  [SMALL_STATE(394)] = 16227,
  [SMALL_STATE(395)] = 16252,
  [SMALL_STATE(396)] = 16277,
  [SMALL_STATE(397)] = 16302,
  [SMALL_STATE(398)] = 16327,
  [SMALL_STATE(399)] = 16352,
  [SMALL_STATE(400)] = 16383,
  [SMALL_STATE(401)] = 16414,
  [SMALL_STATE(402)] = 16445,
  [SMALL_STATE(403)] = 16470,
  [SMALL_STATE(404)] = 16501,
  [SMALL_STATE(405)] = 16532,
  [SMALL_STATE(406)] = 16563,
  [SMALL_STATE(407)] = 16588,
  [SMALL_STATE(408)] = 16615,
  [SMALL_STATE(409)] = 16642,
  [SMALL_STATE(410)] = 16669,
  [SMALL_STATE(411)] = 16695,
  [SMALL_STATE(412)] = 16721,
  [SMALL_STATE(413)] = 16747,
  [SMALL_STATE(414)] = 16773,
  [SMALL_STATE(415)] = 16799,
  [SMALL_STATE(416)] = 16825,
  [SMALL_STATE(417)] = 16851,
  [SMALL_STATE(418)] = 16877,
  [SMALL_STATE(419)] = 16903,
  [SMALL_STATE(420)] = 16926,
  [SMALL_STATE(421)] = 16943,
  [SMALL_STATE(422)] = 16964,
  [SMALL_STATE(423)] = 16985,
  [SMALL_STATE(424)] = 17010,
  [SMALL_STATE(425)] = 17027,
  [SMALL_STATE(426)] = 17052,
  [SMALL_STATE(427)] = 17069,
  [SMALL_STATE(428)] = 17092,
  [SMALL_STATE(429)] = 17115,
  [SMALL_STATE(430)] = 17132,
  [SMALL_STATE(431)] = 17155,
  [SMALL_STATE(432)] = 17178,
  [SMALL_STATE(433)] = 17201,
  [SMALL_STATE(434)] = 17224,
  [SMALL_STATE(435)] = 17247,
  [SMALL_STATE(436)] = 17268,
  [SMALL_STATE(437)] = 17291,
  [SMALL_STATE(438)] = 17308,
  [SMALL_STATE(439)] = 17331,
  [SMALL_STATE(440)] = 17352,
  [SMALL_STATE(441)] = 17375,
  [SMALL_STATE(442)] = 17396,
  [SMALL_STATE(443)] = 17417,
  [SMALL_STATE(444)] = 17440,
  [SMALL_STATE(445)] = 17465,
  [SMALL_STATE(446)] = 17488,
  [SMALL_STATE(447)] = 17513,
  [SMALL_STATE(448)] = 17536,
  [SMALL_STATE(449)] = 17557,
  [SMALL_STATE(450)] = 17580,
  [SMALL_STATE(451)] = 17603,
  [SMALL_STATE(452)] = 17626,
  [SMALL_STATE(453)] = 17649,
  [SMALL_STATE(454)] = 17672,
  [SMALL_STATE(455)] = 17693,
  [SMALL_STATE(456)] = 17716,
  [SMALL_STATE(457)] = 17737,
  [SMALL_STATE(458)] = 17758,
  [SMALL_STATE(459)] = 17781,
  [SMALL_STATE(460)] = 17803,
  [SMALL_STATE(461)] = 17817,
  [SMALL_STATE(462)] = 17839,
  [SMALL_STATE(463)] = 17861,
  [SMALL_STATE(464)] = 17883,
  [SMALL_STATE(465)] = 17905,
  [SMALL_STATE(466)] = 17927,
  [SMALL_STATE(467)] = 17936,
  [SMALL_STATE(468)] = 17955,
  [SMALL_STATE(469)] = 17964,
  [SMALL_STATE(470)] = 17973,
  [SMALL_STATE(471)] = 17982,
  [SMALL_STATE(472)] = 18001,
  [SMALL_STATE(473)] = 18010,
  [SMALL_STATE(474)] = 18019,
  [SMALL_STATE(475)] = 18028,
  [SMALL_STATE(476)] = 18044,
  [SMALL_STATE(477)] = 18060,
  [SMALL_STATE(478)] = 18076,
  [SMALL_STATE(479)] = 18092,
  [SMALL_STATE(480)] = 18108,
  [SMALL_STATE(481)] = 18124,
  [SMALL_STATE(482)] = 18140,
  [SMALL_STATE(483)] = 18156,
  [SMALL_STATE(484)] = 18172,
  [SMALL_STATE(485)] = 18188,
  [SMALL_STATE(486)] = 18204,
  [SMALL_STATE(487)] = 18216,
  [SMALL_STATE(488)] = 18232,
  [SMALL_STATE(489)] = 18248,
  [SMALL_STATE(490)] = 18264,
  [SMALL_STATE(491)] = 18280,
  [SMALL_STATE(492)] = 18296,
  [SMALL_STATE(493)] = 18312,
  [SMALL_STATE(494)] = 18326,
  [SMALL_STATE(495)] = 18342,
  [SMALL_STATE(496)] = 18354,
  [SMALL_STATE(497)] = 18362,
  [SMALL_STATE(498)] = 18378,
  [SMALL_STATE(499)] = 18394,
  [SMALL_STATE(500)] = 18408,
  [SMALL_STATE(501)] = 18424,
  [SMALL_STATE(502)] = 18440,
  [SMALL_STATE(503)] = 18456,
  [SMALL_STATE(504)] = 18468,
  [SMALL_STATE(505)] = 18484,
  [SMALL_STATE(506)] = 18496,
  [SMALL_STATE(507)] = 18512,
  [SMALL_STATE(508)] = 18528,
  [SMALL_STATE(509)] = 18544,
  [SMALL_STATE(510)] = 18560,
  [SMALL_STATE(511)] = 18576,
  [SMALL_STATE(512)] = 18592,
  [SMALL_STATE(513)] = 18608,
  [SMALL_STATE(514)] = 18624,
  [SMALL_STATE(515)] = 18640,
  [SMALL_STATE(516)] = 18656,
  [SMALL_STATE(517)] = 18672,
  [SMALL_STATE(518)] = 18688,
  [SMALL_STATE(519)] = 18700,
  [SMALL_STATE(520)] = 18712,
  [SMALL_STATE(521)] = 18728,
  [SMALL_STATE(522)] = 18740,
  [SMALL_STATE(523)] = 18752,
  [SMALL_STATE(524)] = 18768,
  [SMALL_STATE(525)] = 18777,
  [SMALL_STATE(526)] = 18790,
  [SMALL_STATE(527)] = 18803,
  [SMALL_STATE(528)] = 18816,
  [SMALL_STATE(529)] = 18829,
  [SMALL_STATE(530)] = 18836,
  [SMALL_STATE(531)] = 18843,
  [SMALL_STATE(532)] = 18852,
  [SMALL_STATE(533)] = 18865,
  [SMALL_STATE(534)] = 18878,
  [SMALL_STATE(535)] = 18891,
  [SMALL_STATE(536)] = 18898,
  [SMALL_STATE(537)] = 18907,
  [SMALL_STATE(538)] = 18916,
  [SMALL_STATE(539)] = 18927,
  [SMALL_STATE(540)] = 18938,
  [SMALL_STATE(541)] = 18951,
  [SMALL_STATE(542)] = 18964,
  [SMALL_STATE(543)] = 18973,
  [SMALL_STATE(544)] = 18982,
  [SMALL_STATE(545)] = 18991,
  [SMALL_STATE(546)] = 19000,
  [SMALL_STATE(547)] = 19009,
  [SMALL_STATE(548)] = 19018,
  [SMALL_STATE(549)] = 19031,
  [SMALL_STATE(550)] = 19040,
  [SMALL_STATE(551)] = 19049,
  [SMALL_STATE(552)] = 19062,
  [SMALL_STATE(553)] = 19071,
  [SMALL_STATE(554)] = 19080,
  [SMALL_STATE(555)] = 19093,
  [SMALL_STATE(556)] = 19100,
  [SMALL_STATE(557)] = 19110,
  [SMALL_STATE(558)] = 19120,
  [SMALL_STATE(559)] = 19130,
  [SMALL_STATE(560)] = 19140,
  [SMALL_STATE(561)] = 19150,
  [SMALL_STATE(562)] = 19160,
  [SMALL_STATE(563)] = 19170,
  [SMALL_STATE(564)] = 19180,
  [SMALL_STATE(565)] = 19190,
  [SMALL_STATE(566)] = 19196,
  [SMALL_STATE(567)] = 19206,
  [SMALL_STATE(568)] = 19216,
  [SMALL_STATE(569)] = 19226,
  [SMALL_STATE(570)] = 19236,
  [SMALL_STATE(571)] = 19246,
  [SMALL_STATE(572)] = 19256,
  [SMALL_STATE(573)] = 19262,
  [SMALL_STATE(574)] = 19272,
  [SMALL_STATE(575)] = 19280,
  [SMALL_STATE(576)] = 19290,
  [SMALL_STATE(577)] = 19300,
  [SMALL_STATE(578)] = 19310,
  [SMALL_STATE(579)] = 19320,
  [SMALL_STATE(580)] = 19330,
  [SMALL_STATE(581)] = 19340,
  [SMALL_STATE(582)] = 19350,
  [SMALL_STATE(583)] = 19360,
  [SMALL_STATE(584)] = 19370,
  [SMALL_STATE(585)] = 19380,
  [SMALL_STATE(586)] = 19390,
  [SMALL_STATE(587)] = 19400,
  [SMALL_STATE(588)] = 19410,
  [SMALL_STATE(589)] = 19420,
  [SMALL_STATE(590)] = 19430,
  [SMALL_STATE(591)] = 19440,
  [SMALL_STATE(592)] = 19450,
  [SMALL_STATE(593)] = 19460,
  [SMALL_STATE(594)] = 19470,
  [SMALL_STATE(595)] = 19480,
  [SMALL_STATE(596)] = 19490,
  [SMALL_STATE(597)] = 19500,
  [SMALL_STATE(598)] = 19510,
  [SMALL_STATE(599)] = 19520,
  [SMALL_STATE(600)] = 19530,
  [SMALL_STATE(601)] = 19540,
  [SMALL_STATE(602)] = 19550,
  [SMALL_STATE(603)] = 19560,
  [SMALL_STATE(604)] = 19570,
  [SMALL_STATE(605)] = 19580,
  [SMALL_STATE(606)] = 19590,
  [SMALL_STATE(607)] = 19600,
  [SMALL_STATE(608)] = 19610,
  [SMALL_STATE(609)] = 19620,
  [SMALL_STATE(610)] = 19630,
  [SMALL_STATE(611)] = 19640,
  [SMALL_STATE(612)] = 19646,
  [SMALL_STATE(613)] = 19656,
  [SMALL_STATE(614)] = 19666,
  [SMALL_STATE(615)] = 19676,
  [SMALL_STATE(616)] = 19686,
  [SMALL_STATE(617)] = 19696,
  [SMALL_STATE(618)] = 19706,
  [SMALL_STATE(619)] = 19712,
  [SMALL_STATE(620)] = 19718,
  [SMALL_STATE(621)] = 19728,
  [SMALL_STATE(622)] = 19738,
  [SMALL_STATE(623)] = 19748,
  [SMALL_STATE(624)] = 19758,
  [SMALL_STATE(625)] = 19768,
  [SMALL_STATE(626)] = 19778,
  [SMALL_STATE(627)] = 19788,
  [SMALL_STATE(628)] = 19798,
  [SMALL_STATE(629)] = 19808,
  [SMALL_STATE(630)] = 19818,
  [SMALL_STATE(631)] = 19828,
  [SMALL_STATE(632)] = 19838,
  [SMALL_STATE(633)] = 19848,
  [SMALL_STATE(634)] = 19858,
  [SMALL_STATE(635)] = 19868,
  [SMALL_STATE(636)] = 19878,
  [SMALL_STATE(637)] = 19888,
  [SMALL_STATE(638)] = 19898,
  [SMALL_STATE(639)] = 19908,
  [SMALL_STATE(640)] = 19918,
  [SMALL_STATE(641)] = 19928,
  [SMALL_STATE(642)] = 19938,
  [SMALL_STATE(643)] = 19948,
  [SMALL_STATE(644)] = 19958,
  [SMALL_STATE(645)] = 19968,
  [SMALL_STATE(646)] = 19978,
  [SMALL_STATE(647)] = 19988,
  [SMALL_STATE(648)] = 19998,
  [SMALL_STATE(649)] = 20008,
  [SMALL_STATE(650)] = 20018,
  [SMALL_STATE(651)] = 20028,
  [SMALL_STATE(652)] = 20038,
  [SMALL_STATE(653)] = 20048,
  [SMALL_STATE(654)] = 20058,
  [SMALL_STATE(655)] = 20068,
  [SMALL_STATE(656)] = 20078,
  [SMALL_STATE(657)] = 20088,
  [SMALL_STATE(658)] = 20098,
  [SMALL_STATE(659)] = 20108,
  [SMALL_STATE(660)] = 20113,
  [SMALL_STATE(661)] = 20120,
  [SMALL_STATE(662)] = 20127,
  [SMALL_STATE(663)] = 20132,
  [SMALL_STATE(664)] = 20137,
  [SMALL_STATE(665)] = 20144,
  [SMALL_STATE(666)] = 20151,
  [SMALL_STATE(667)] = 20158,
  [SMALL_STATE(668)] = 20165,
  [SMALL_STATE(669)] = 20172,
  [SMALL_STATE(670)] = 20177,
  [SMALL_STATE(671)] = 20184,
  [SMALL_STATE(672)] = 20189,
  [SMALL_STATE(673)] = 20196,
  [SMALL_STATE(674)] = 20201,
  [SMALL_STATE(675)] = 20208,
  [SMALL_STATE(676)] = 20213,
  [SMALL_STATE(677)] = 20218,
  [SMALL_STATE(678)] = 20223,
  [SMALL_STATE(679)] = 20230,
  [SMALL_STATE(680)] = 20237,
  [SMALL_STATE(681)] = 20242,
  [SMALL_STATE(682)] = 20249,
  [SMALL_STATE(683)] = 20256,
  [SMALL_STATE(684)] = 20263,
  [SMALL_STATE(685)] = 20270,
  [SMALL_STATE(686)] = 20277,
  [SMALL_STATE(687)] = 20284,
  [SMALL_STATE(688)] = 20291,
  [SMALL_STATE(689)] = 20298,
  [SMALL_STATE(690)] = 20305,
  [SMALL_STATE(691)] = 20310,
  [SMALL_STATE(692)] = 20317,
  [SMALL_STATE(693)] = 20322,
  [SMALL_STATE(694)] = 20327,
  [SMALL_STATE(695)] = 20334,
  [SMALL_STATE(696)] = 20341,
  [SMALL_STATE(697)] = 20348,
  [SMALL_STATE(698)] = 20355,
  [SMALL_STATE(699)] = 20362,
  [SMALL_STATE(700)] = 20369,
  [SMALL_STATE(701)] = 20376,
  [SMALL_STATE(702)] = 20383,
  [SMALL_STATE(703)] = 20388,
  [SMALL_STATE(704)] = 20395,
  [SMALL_STATE(705)] = 20402,
  [SMALL_STATE(706)] = 20409,
  [SMALL_STATE(707)] = 20416,
  [SMALL_STATE(708)] = 20423,
  [SMALL_STATE(709)] = 20430,
  [SMALL_STATE(710)] = 20437,
  [SMALL_STATE(711)] = 20444,
  [SMALL_STATE(712)] = 20451,
  [SMALL_STATE(713)] = 20456,
  [SMALL_STATE(714)] = 20463,
  [SMALL_STATE(715)] = 20470,
  [SMALL_STATE(716)] = 20477,
  [SMALL_STATE(717)] = 20484,
  [SMALL_STATE(718)] = 20491,
  [SMALL_STATE(719)] = 20496,
  [SMALL_STATE(720)] = 20500,
  [SMALL_STATE(721)] = 20504,
  [SMALL_STATE(722)] = 20508,
  [SMALL_STATE(723)] = 20512,
  [SMALL_STATE(724)] = 20516,
  [SMALL_STATE(725)] = 20520,
  [SMALL_STATE(726)] = 20524,
  [SMALL_STATE(727)] = 20528,
  [SMALL_STATE(728)] = 20532,
  [SMALL_STATE(729)] = 20536,
  [SMALL_STATE(730)] = 20540,
  [SMALL_STATE(731)] = 20544,
  [SMALL_STATE(732)] = 20548,
  [SMALL_STATE(733)] = 20552,
  [SMALL_STATE(734)] = 20556,
  [SMALL_STATE(735)] = 20560,
  [SMALL_STATE(736)] = 20564,
  [SMALL_STATE(737)] = 20568,
  [SMALL_STATE(738)] = 20572,
  [SMALL_STATE(739)] = 20576,
  [SMALL_STATE(740)] = 20580,
  [SMALL_STATE(741)] = 20584,
  [SMALL_STATE(742)] = 20588,
  [SMALL_STATE(743)] = 20592,
  [SMALL_STATE(744)] = 20596,
  [SMALL_STATE(745)] = 20600,
  [SMALL_STATE(746)] = 20604,
  [SMALL_STATE(747)] = 20608,
  [SMALL_STATE(748)] = 20612,
  [SMALL_STATE(749)] = 20616,
  [SMALL_STATE(750)] = 20620,
  [SMALL_STATE(751)] = 20624,
  [SMALL_STATE(752)] = 20628,
  [SMALL_STATE(753)] = 20632,
  [SMALL_STATE(754)] = 20636,
  [SMALL_STATE(755)] = 20640,
  [SMALL_STATE(756)] = 20644,
  [SMALL_STATE(757)] = 20648,
  [SMALL_STATE(758)] = 20652,
  [SMALL_STATE(759)] = 20656,
  [SMALL_STATE(760)] = 20660,
  [SMALL_STATE(761)] = 20664,
  [SMALL_STATE(762)] = 20668,
  [SMALL_STATE(763)] = 20672,
  [SMALL_STATE(764)] = 20676,
  [SMALL_STATE(765)] = 20680,
  [SMALL_STATE(766)] = 20684,
  [SMALL_STATE(767)] = 20688,
  [SMALL_STATE(768)] = 20692,
  [SMALL_STATE(769)] = 20696,
  [SMALL_STATE(770)] = 20700,
  [SMALL_STATE(771)] = 20704,
  [SMALL_STATE(772)] = 20708,
  [SMALL_STATE(773)] = 20712,
  [SMALL_STATE(774)] = 20716,
  [SMALL_STATE(775)] = 20720,
  [SMALL_STATE(776)] = 20724,
  [SMALL_STATE(777)] = 20728,
  [SMALL_STATE(778)] = 20732,
  [SMALL_STATE(779)] = 20736,
  [SMALL_STATE(780)] = 20740,
  [SMALL_STATE(781)] = 20744,
  [SMALL_STATE(782)] = 20748,
  [SMALL_STATE(783)] = 20752,
  [SMALL_STATE(784)] = 20756,
  [SMALL_STATE(785)] = 20760,
  [SMALL_STATE(786)] = 20764,
  [SMALL_STATE(787)] = 20768,
  [SMALL_STATE(788)] = 20772,
  [SMALL_STATE(789)] = 20776,
  [SMALL_STATE(790)] = 20780,
  [SMALL_STATE(791)] = 20784,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(720),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(759),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(730),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body, 1, 1, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 2, -1, 10),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 1, -1, 10),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(700),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(743),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(746),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(716),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(785),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(773),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 14),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 14),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 14),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 14),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 5, 0, 41),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 5, 0, 41),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 20),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 2, 0, 20),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 21),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 2, 0, 21),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 20),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 2, 0, 20),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 20),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 2, 0, 20),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 2, 0, 20),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 20),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 2, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 2, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 26),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 2, 0, 26),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 27),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 3, 0, 27),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 28),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 3, 0, 28),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 30),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 3, 0, 30),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 30),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 3, 0, 30),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 27),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 3, 0, 27),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 27),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 3, 0, 27),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 32),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 32),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 27),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 27),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 26),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic_body, 2, 0, 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 27),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 27),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 27),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 27),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 27),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 27),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 38),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 38),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 39),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 39),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 40),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 4, 0, 40),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 4, 0, 41),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 4, 0, 41),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 42),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 42),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 41),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 41),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 4, 0, 27),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 4, 0, 27),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 27),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 27),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 27),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 27),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 43),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 43),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 27),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 27),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 44),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 44),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 46),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 4, 0, 46),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 27),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 27),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 47),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 47),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 2, 2, 20),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 2, 2, 20),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 20),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 20),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(165),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(619),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(723),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 35),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(667),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(744),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(734),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(739),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(685),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(738),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(725),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(616),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(672),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(683),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(686),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(568),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(687),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(688),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(261),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 35),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 14),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 23),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 23),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 14),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(736),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(306),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1096] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(659),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(727),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 3, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 4, 0, 0),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(328),
  [1166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat2, 2, 0, 0), SHIFT_REPEAT(328),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 35),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 35),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 18),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 18),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 24),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 24),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 4),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 4, 0, 4),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 25),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 25),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 19),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 19),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 13),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 13),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 36),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 36),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 37),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 37),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 13),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 13),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 22),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 22),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [1279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 37),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 37),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 36),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 36),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 9),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 4, 0, 9),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 45),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 8, 0, 45),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 25),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 25),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 45),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 45),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 22),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 22),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 13),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 13),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 19),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 19),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 15), SHIFT_REPEAT(468),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_selection_clause, 2, 0, 34),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 31),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17),
  [1642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 17), SHIFT_REPEAT(538),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 16),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 18),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 24),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_clause, 2, 0, 33),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1839] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
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
