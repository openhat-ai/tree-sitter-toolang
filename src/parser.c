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
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 53

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
  sym__cap_definition = 108,
  sym_cap_body = 109,
  sym_task = 110,
  sym_chore = 111,
  sym_cap_name = 112,
  sym_cap_ref = 113,
  sym_job_name = 114,
  sym_job_body = 115,
  sym_property = 116,
  sym_property_key = 117,
  sym_property_value = 118,
  sym_instruct = 119,
  sym_instruct_name = 120,
  sym_instruct_body = 121,
  sym_context = 122,
  sym_context_name = 123,
  sym_context_body = 124,
  sym_text_inline = 125,
  sym_text_block = 126,
  sym_text_body = 127,
  sym_text_body_line = 128,
  sym__nested_text_inline_alias = 129,
  sym__nested_text_inline = 130,
  sym__nested_text_block = 131,
  sym__nested_text_body = 132,
  sym__nested_text_body_line = 133,
  sym_agic = 134,
  sym_agic_name = 135,
  sym_agic_body = 136,
  sym_params = 137,
  sym_param = 138,
  sym_param_name = 139,
  sym_flow = 140,
  sym_flow_name = 141,
  sym_flow_body = 142,
  sym_statements = 143,
  sym__flow_statement = 144,
  sym__flow_operation = 145,
  sym_let_statement = 146,
  sym_run_statement = 147,
  sym_implicit_run_statement = 148,
  sym__implicit_run_text_body_line = 149,
  sym_seek_statement = 150,
  sym_ask_statement = 151,
  sym_scatter_statement = 152,
  sym_storm_statement = 153,
  sym_gather_statement = 154,
  sym_settle_statement = 155,
  sym_map_statement = 156,
  sym_keep_statement = 157,
  sym_drop_statement = 158,
  sym_rank_statement = 159,
  sym_repeat_statement = 160,
  sym_repeat_body = 161,
  sym_repeat_until_body = 162,
  sym_until_statement = 163,
  sym_invalid_flow_reserved_statement = 164,
  sym_inline_agic = 165,
  sym_inline_agic_body = 166,
  sym_par_clause = 167,
  sym_position_clause = 168,
  sym_rank_selection_clause = 169,
  sym_runnable = 170,
  sym_agent = 171,
  sym_local_name = 172,
  sym_directive = 173,
  sym_directive_key = 174,
  sym_directive_op = 175,
  sym_directive_value = 176,
  sym__directives = 177,
  sym_settings = 178,
  sym_context_setting = 179,
  sym_instruct_setting = 180,
  sym_text_ref = 181,
  sym_messages = 182,
  sym_message = 183,
  sym_unroled_message = 184,
  sym__unroled_message_initial_line = 185,
  sym__unroled_message_continuation_line = 186,
  sym_invalid_agic_reserved_message = 187,
  sym_role = 188,
  sym__pass_statement = 189,
  sym__flow_reserved_word = 190,
  sym__agic_reserved_word = 191,
  sym_assign_operator = 192,
  sym_type_name = 193,
  sym_text_line = 194,
  aux_sym_source_file_repeat1 = 195,
  aux_sym_type_repeat1 = 196,
  aux_sym_struct_body_repeat1 = 197,
  aux_sym__cap_definition_repeat1 = 198,
  aux_sym__cap_definition_repeat2 = 199,
  aux_sym_job_body_repeat1 = 200,
  aux_sym_text_body_repeat1 = 201,
  aux_sym__nested_text_body_repeat1 = 202,
  aux_sym_params_repeat1 = 203,
  aux_sym_statements_repeat1 = 204,
  aux_sym_implicit_run_statement_repeat1 = 205,
  aux_sym__directives_repeat1 = 206,
  aux_sym_messages_repeat1 = 207,
  aux_sym_unroled_message_repeat1 = 208,
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
  [sym__cap_definition] = "_cap_definition",
  [sym_cap_body] = "cap_body",
  [sym_task] = "task",
  [sym_chore] = "chore",
  [sym_cap_name] = "cap_name",
  [sym_cap_ref] = "cap_ref",
  [sym_job_name] = "job_name",
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
  [aux_sym__cap_definition_repeat1] = "_cap_definition_repeat1",
  [aux_sym__cap_definition_repeat2] = "_cap_definition_repeat2",
  [aux_sym_job_body_repeat1] = "job_body_repeat1",
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
  [sym__cap_definition] = sym__cap_definition,
  [sym_cap_body] = sym_cap_body,
  [sym_task] = sym_task,
  [sym_chore] = sym_chore,
  [sym_cap_name] = sym_cap_name,
  [sym_cap_ref] = sym_cap_ref,
  [sym_job_name] = sym_job_name,
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
  [aux_sym__cap_definition_repeat1] = aux_sym__cap_definition_repeat1,
  [aux_sym__cap_definition_repeat2] = aux_sym__cap_definition_repeat2,
  [aux_sym_job_body_repeat1] = aux_sym_job_body_repeat1,
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
  [sym__cap_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_cap_body] = {
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
  [aux_sym__cap_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cap_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_job_body_repeat1] = {
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
  field_property = 19,
  field_reference = 20,
  field_return = 21,
  field_runnable = 22,
  field_selection = 23,
  field_statement = 24,
  field_suffix = 25,
  field_type = 26,
  field_value = 27,
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
  [field_property] = "property",
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
  [5] = {.index = 8, .length = 5},
  [6] = {.index = 13, .length = 4},
  [7] = {.index = 17, .length = 1},
  [8] = {.index = 18, .length = 2},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 1},
  [12] = {.index = 25, .length = 2},
  [13] = {.index = 27, .length = 4},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 1},
  [16] = {.index = 36, .length = 1},
  [17] = {.index = 37, .length = 1},
  [18] = {.index = 38, .length = 1},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 2},
  [21] = {.index = 43, .length = 2},
  [22] = {.index = 45, .length = 3},
  [23] = {.index = 48, .length = 4},
  [24] = {.index = 52, .length = 1},
  [25] = {.index = 53, .length = 1},
  [26] = {.index = 54, .length = 2},
  [27] = {.index = 56, .length = 2},
  [28] = {.index = 58, .length = 5},
  [29] = {.index = 63, .length = 1},
  [30] = {.index = 64, .length = 4},
  [31] = {.index = 68, .length = 5},
  [32] = {.index = 73, .length = 1},
  [33] = {.index = 74, .length = 2},
  [34] = {.index = 76, .length = 1},
  [35] = {.index = 77, .length = 2},
  [36] = {.index = 79, .length = 1},
  [37] = {.index = 80, .length = 1},
  [38] = {.index = 81, .length = 2},
  [39] = {.index = 83, .length = 2},
  [40] = {.index = 85, .length = 3},
  [41] = {.index = 88, .length = 6},
  [42] = {.index = 94, .length = 6},
  [43] = {.index = 100, .length = 2},
  [44] = {.index = 102, .length = 2},
  [45] = {.index = 104, .length = 2},
  [46] = {.index = 106, .length = 2},
  [47] = {.index = 108, .length = 2},
  [48] = {.index = 110, .length = 1},
  [49] = {.index = 111, .length = 1},
  [50] = {.index = 112, .length = 7},
  [51] = {.index = 119, .length = 3},
  [52] = {.index = 122, .length = 2},
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
    {field_body, 3, .inherited = true},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_property, 3, .inherited = true},
  [13] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [17] =
    {field_suffix, 0},
  [18] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [20] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [23] =
    {field_content, 0, .inherited = true},
  [24] =
    {field_param, 1},
  [25] =
    {field_name, 0},
    {field_optional, 1},
  [27] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [31] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [35] =
    {field_body, 1},
  [36] =
    {field_property, 0},
  [37] =
    {field_property, 1, .inherited = true},
  [38] =
    {field_content, 0},
  [39] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [41] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [43] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [45] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [48] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [52] =
    {field_agic, 1},
  [53] =
    {field_statement, 1},
  [54] =
    {field_body, 2},
    {field_property, 1, .inherited = true},
  [56] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [58] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [63] =
    {field_content, 1, .inherited = true},
  [64] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [68] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [73] =
    {field_runnable, 1},
  [74] =
    {field_agent, 1},
    {field_agic, 2},
  [76] =
    {field_body, 2},
  [77] =
    {field_agic, 2},
    {field_count, 1},
  [79] =
    {field_limit, 1},
  [80] =
    {field_agic, 2},
  [81] =
    {field_count, 1},
    {field_position, 0},
  [83] =
    {field_count, 1},
    {field_selection, 0},
  [85] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [88] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [94] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [100] =
    {field_name, 1},
    {field_value, 3},
  [102] =
    {field_name, 1},
    {field_statement, 3},
  [104] =
    {field_agent, 1},
    {field_runnable, 2},
  [106] =
    {field_count, 1},
    {field_runnable, 2},
  [108] =
    {field_agic, 3},
    {field_count, 1},
  [110] =
    {field_agic, 3},
  [111] =
    {field_body, 3},
  [112] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [119] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [122] =
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
  [185] = 29,
  [186] = 186,
  [187] = 26,
  [188] = 24,
  [189] = 23,
  [190] = 22,
  [191] = 164,
  [192] = 39,
  [193] = 38,
  [194] = 160,
  [195] = 162,
  [196] = 42,
  [197] = 197,
  [198] = 46,
  [199] = 43,
  [200] = 200,
  [201] = 201,
  [202] = 41,
  [203] = 203,
  [204] = 204,
  [205] = 44,
  [206] = 40,
  [207] = 29,
  [208] = 22,
  [209] = 197,
  [210] = 197,
  [211] = 49,
  [212] = 62,
  [213] = 83,
  [214] = 58,
  [215] = 59,
  [216] = 84,
  [217] = 85,
  [218] = 86,
  [219] = 87,
  [220] = 88,
  [221] = 89,
  [222] = 90,
  [223] = 91,
  [224] = 92,
  [225] = 93,
  [226] = 94,
  [227] = 95,
  [228] = 96,
  [229] = 56,
  [230] = 97,
  [231] = 60,
  [232] = 98,
  [233] = 99,
  [234] = 100,
  [235] = 101,
  [236] = 63,
  [237] = 237,
  [238] = 64,
  [239] = 239,
  [240] = 65,
  [241] = 66,
  [242] = 242,
  [243] = 243,
  [244] = 102,
  [245] = 57,
  [246] = 68,
  [247] = 69,
  [248] = 70,
  [249] = 71,
  [250] = 72,
  [251] = 251,
  [252] = 73,
  [253] = 103,
  [254] = 74,
  [255] = 75,
  [256] = 104,
  [257] = 257,
  [258] = 76,
  [259] = 77,
  [260] = 78,
  [261] = 79,
  [262] = 80,
  [263] = 165,
  [264] = 264,
  [265] = 81,
  [266] = 105,
  [267] = 50,
  [268] = 268,
  [269] = 82,
  [270] = 61,
  [271] = 271,
  [272] = 106,
  [273] = 67,
  [274] = 44,
  [275] = 275,
  [276] = 276,
  [277] = 40,
  [278] = 105,
  [279] = 279,
  [280] = 104,
  [281] = 173,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 102,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 50,
  [295] = 103,
  [296] = 296,
  [297] = 296,
  [298] = 296,
  [299] = 299,
  [300] = 105,
  [301] = 50,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 165,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 50,
  [313] = 313,
  [314] = 165,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 105,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 105,
  [328] = 50,
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
  [343] = 105,
  [344] = 50,
  [345] = 345,
  [346] = 41,
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
  [395] = 386,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 388,
  [402] = 386,
  [403] = 399,
  [404] = 404,
  [405] = 404,
  [406] = 388,
  [407] = 399,
  [408] = 408,
  [409] = 404,
  [410] = 410,
  [411] = 410,
  [412] = 410,
  [413] = 413,
  [414] = 413,
  [415] = 415,
  [416] = 416,
  [417] = 413,
  [418] = 415,
  [419] = 416,
  [420] = 415,
  [421] = 416,
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
  [435] = 428,
  [436] = 436,
  [437] = 437,
  [438] = 422,
  [439] = 439,
  [440] = 436,
  [441] = 423,
  [442] = 442,
  [443] = 423,
  [444] = 444,
  [445] = 422,
  [446] = 428,
  [447] = 434,
  [448] = 433,
  [449] = 432,
  [450] = 432,
  [451] = 433,
  [452] = 434,
  [453] = 453,
  [454] = 454,
  [455] = 436,
  [456] = 437,
  [457] = 457,
  [458] = 437,
  [459] = 459,
  [460] = 459,
  [461] = 461,
  [462] = 459,
  [463] = 463,
  [464] = 463,
  [465] = 463,
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
  [487] = 487,
  [488] = 476,
  [489] = 486,
  [490] = 479,
  [491] = 491,
  [492] = 481,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 484,
  [498] = 493,
  [499] = 480,
  [500] = 477,
  [501] = 478,
  [502] = 480,
  [503] = 485,
  [504] = 504,
  [505] = 479,
  [506] = 481,
  [507] = 477,
  [508] = 475,
  [509] = 484,
  [510] = 485,
  [511] = 486,
  [512] = 487,
  [513] = 476,
  [514] = 493,
  [515] = 486,
  [516] = 482,
  [517] = 482,
  [518] = 478,
  [519] = 496,
  [520] = 487,
  [521] = 496,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 524,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 526,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 526,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 524,
  [545] = 538,
  [546] = 542,
  [547] = 547,
  [548] = 548,
  [549] = 538,
  [550] = 542,
  [551] = 551,
  [552] = 536,
  [553] = 105,
  [554] = 50,
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
  [599] = 599,
  [600] = 558,
  [601] = 601,
  [602] = 567,
  [603] = 569,
  [604] = 581,
  [605] = 583,
  [606] = 586,
  [607] = 590,
  [608] = 608,
  [609] = 601,
  [610] = 610,
  [611] = 611,
  [612] = 610,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 466,
  [618] = 585,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 592,
  [625] = 592,
  [626] = 593,
  [627] = 594,
  [628] = 593,
  [629] = 597,
  [630] = 630,
  [631] = 599,
  [632] = 594,
  [633] = 558,
  [634] = 567,
  [635] = 581,
  [636] = 583,
  [637] = 586,
  [638] = 590,
  [639] = 598,
  [640] = 601,
  [641] = 610,
  [642] = 597,
  [643] = 613,
  [644] = 614,
  [645] = 567,
  [646] = 599,
  [647] = 647,
  [648] = 648,
  [649] = 615,
  [650] = 613,
  [651] = 648,
  [652] = 615,
  [653] = 648,
  [654] = 614,
  [655] = 598,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 105,
  [667] = 50,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 657,
  [673] = 673,
  [674] = 674,
  [675] = 662,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 679,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 679,
  [686] = 686,
  [687] = 669,
  [688] = 688,
  [689] = 105,
  [690] = 656,
  [691] = 691,
  [692] = 688,
  [693] = 656,
  [694] = 691,
  [695] = 657,
  [696] = 691,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 660,
  [702] = 702,
  [703] = 703,
  [704] = 50,
  [705] = 702,
  [706] = 662,
  [707] = 707,
  [708] = 660,
  [709] = 702,
  [710] = 710,
  [711] = 669,
  [712] = 700,
  [713] = 713,
  [714] = 703,
  [715] = 688,
  [716] = 703,
  [717] = 717,
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
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 728,
  [736] = 724,
  [737] = 737,
  [738] = 723,
  [739] = 728,
  [740] = 740,
  [741] = 741,
  [742] = 723,
  [743] = 724,
  [744] = 744,
  [745] = 745,
  [746] = 734,
  [747] = 723,
  [748] = 723,
  [749] = 723,
  [750] = 723,
  [751] = 723,
  [752] = 723,
  [753] = 723,
  [754] = 723,
  [755] = 723,
  [756] = 723,
  [757] = 757,
  [758] = 718,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 734,
  [763] = 733,
  [764] = 737,
  [765] = 745,
  [766] = 766,
  [767] = 767,
  [768] = 718,
  [769] = 385,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 733,
  [776] = 737,
  [777] = 745,
  [778] = 778,
  [779] = 734,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 723,
  [785] = 785,
  [786] = 782,
  [787] = 787,
  [788] = 724,
  [789] = 789,
  [790] = 782,
  [791] = 791,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(331);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 1,
        '#', 337,
        '(', 498,
        ')', 499,
        '+', 59,
        ',', 500,
        '-', 60,
        ':', 497,
        '=', 355,
        '?', 495,
        'B', 516,
        'J', 518,
        'N', 521,
        'P', 502,
        'T', 506,
        '[', 62,
        '_', 345,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(523);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(333);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(333);
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
        '\n', 333,
        '\f', 865,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 899,
        'r', 901,
        's', 911,
        't', 903,
        'u', 997,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 867,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(333);
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
        '\n', 333,
        '\f', 868,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 6,
        ' ', 6,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(333);
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
          lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1073);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(333);
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
        '\n', 333,
        '\f', 869,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 1038,
        'r', 901,
        's', 911,
        't', 903,
        'u', 997,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 871,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 997,
        'w', 966,
        '\t', 14,
        ' ', 14,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(333);
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
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 1078,
        ' ', 1078,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 17,
        ' ', 17,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 18,
        ' ', 18,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(333);
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
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 1076,
        ' ', 1076,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 21,
        ' ', 21,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 22,
        ' ', 22,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 997,
        'w', 966,
        '\t', 26,
        ' ', 26,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 997,
        'w', 966,
        '\t', 24,
        ' ', 24,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 997,
        'w', 966,
        '\t', 1074,
        ' ', 1074,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 333,
        '\r', 1,
        '#', 30,
        '(', 498,
        ')', 499,
        '-', 61,
        ':', 497,
        '_', 345,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(336);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(335);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(334);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(332);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ')', 499,
        ',', 500,
        '-', 61,
        ':', 497,
        '[', 62,
        'f', 562,
        'l', 532,
        'p', 530,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '+', 371,
        '-', 372,
        '=', 355,
        '\t', 358,
        '\f', 358,
        ' ', 358,
      );
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '-', 373,
        ':', 497,
        'p', 530,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '-', 373,
        ':', 497,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
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
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'b', 589,
        'p', 530,
        't', 587,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'd', 544,
        'n', 586,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'f', 562,
        'l', 532,
        'p', 530,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        'a', 405,
        'd', 403,
        'g', 374,
        'k', 381,
        'm', 375,
        'r', 376,
        's', 379,
        '\t', 366,
        '\f', 366,
        ' ', 366,
      );
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        'a', 607,
        'd', 596,
        'g', 524,
        'k', 546,
        'm', 525,
        'r', 526,
        's', 537,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0) ADVANCE(412);
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
        '\f', 890,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 997,
        '\t', 54,
        ' ', 54,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 55:
      if (lookahead == '\f') SKIP(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(656);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == 'b') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(356);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '>') ADVANCE(496);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(496);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(344);
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
      if (lookahead == 'c') ADVANCE(439);
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
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(501);
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
      if (lookahead == 'h') ADVANCE(490);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(420);
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
      if (lookahead == 'k') ADVANCE(453);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(453);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(469);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(441);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(484);
      END_STATE();
    case 181:
      if (lookahead == 'k') ADVANCE(486);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(501);
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
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(482);
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
      if (lookahead == 'n') ADVANCE(448);
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
      if (lookahead == 'o') ADVANCE(488);
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
      if (lookahead == 's') ADVANCE(352);
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
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(465);
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
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(417);
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
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(350);
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
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(501);
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
      if (lookahead == 'w') ADVANCE(445);
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
          lookahead == ' ') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 318:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(318);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 319:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
          lookahead == ' ') ADVANCE(639);
      END_STATE();
    case 321:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(321);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 'p') ADVANCE(603);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == 'w') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(642);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 322:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
          lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 323:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(324);
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
          lookahead == ' ') ADVANCE(638);
      END_STATE();
    case 325:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(646);
      END_STATE();
    case 326:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
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
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 327:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(327);
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
          lookahead == ' ') ADVANCE(649);
      END_STATE();
    case 328:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') SKIP(328);
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
    case 329:
      if (eof) ADVANCE(331);
      ADVANCE_MAP(
        '\n', 333,
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
          lookahead == ' ') SKIP(329);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(523);
      END_STATE();
    case 330:
      if (eof) ADVANCE(331);
      ADVANCE_MAP(
        '\n', 333,
        '\r', 1,
        '#', 29,
        'a', 554,
        'c', 556,
        'f', 569,
        'i', 577,
        'p', 603,
        's', 551,
        't', 531,
        'w', 563,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(330);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_parent_doc_line);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_doc_line);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '+', 371,
        '-', 372,
        '=', 355,
        '\t', 358,
        '\f', 358,
        ' ', 358,
      );
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '-', 373,
        ':', 497,
        'p', 530,
        '\t', 359,
        '\f', 359,
        ' ', 359,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        '-', 373,
        ':', 497,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'b', 589,
        'p', 530,
        't', 587,
        '\t', 361,
        '\f', 361,
        ' ', 361,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'd', 544,
        'n', 586,
        '\t', 362,
        '\f', 362,
        ' ', 362,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        ':', 497,
        'f', 562,
        'l', 532,
        'p', 530,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        'a', 405,
        'd', 403,
        'g', 374,
        'k', 381,
        'm', 375,
        'r', 376,
        's', 379,
        '\t', 366,
        '\f', 366,
        ' ', 366,
      );
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      ADVANCE_MAP(
        '\n', 332,
        '\r', 37,
        '#', 337,
        'a', 607,
        'd', 596,
        'g', 524,
        'k', 546,
        'm', 525,
        'r', 526,
        's', 537,
        '\t', 367,
        '\f', 367,
        ' ', 367,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '>') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'k') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_directive_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_with_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_context_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_instruct_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_agic_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'k') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 't') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'k') ADVANCE(560);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'k') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'k') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'k') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'k') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 's') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 's') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 's') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'v') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'w') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'x') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 638,
        '\r', 1,
        '#', 651,
        'a', 723,
        'b', 788,
        'c', 657,
        'd', 787,
        'e', 659,
        'f', 764,
        'g', 662,
        'h', 704,
        'i', 777,
        'k', 705,
        'l', 703,
        'm', 660,
        'p', 815,
        'r', 664,
        's', 677,
        't', 661,
        'u', 778,
        'w', 742,
        '\t', 638,
        ' ', 638,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 639,
        '\r', 1,
        '#', 651,
        'a', 724,
        'c', 728,
        'f', 765,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 665,
        'r', 706,
        's', 710,
        't', 667,
        'u', 833,
        'w', 742,
        '\t', 639,
        ' ', 639,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 640,
        '\r', 1,
        '#', 651,
        'a', 828,
        'c', 791,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 666,
        'r', 706,
        's', 717,
        't', 802,
        'u', 833,
        '\t', 640,
        ' ', 640,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 641,
        '\r', 1,
        '#', 651,
        'a', 827,
        'b', 788,
        'c', 658,
        'd', 787,
        'e', 659,
        'f', 792,
        'g', 662,
        'h', 704,
        'k', 705,
        'l', 703,
        'm', 660,
        'r', 664,
        's', 678,
        't', 673,
        'u', 778,
        '\t', 641,
        ' ', 641,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 642,
        '\r', 1,
        '#', 651,
        'a', 554,
        'c', 556,
        'f', 569,
        'i', 577,
        'p', 603,
        's', 551,
        't', 531,
        'w', 563,
        '\t', 642,
        ' ', 642,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 643,
        '\r', 1,
        '#', 651,
        'a', 725,
        'c', 728,
        'f', 765,
        'i', 777,
        'p', 815,
        's', 716,
        't', 668,
        'w', 742,
        '\t', 643,
        ' ', 643,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\f') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(644);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 645,
        '\r', 1,
        '#', 651,
        'a', 723,
        'b', 788,
        'c', 657,
        'd', 787,
        'e', 659,
        'f', 764,
        'g', 662,
        'h', 704,
        'i', 777,
        'k', 705,
        'l', 703,
        'm', 660,
        'p', 815,
        'r', 664,
        's', 677,
        't', 661,
        'u', 779,
        'w', 742,
        '\t', 646,
        ' ', 646,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 645,
        '\r', 1,
        '#', 651,
        'a', 723,
        'b', 788,
        'c', 657,
        'd', 787,
        'e', 659,
        'f', 764,
        'g', 662,
        'h', 704,
        'i', 777,
        'k', 705,
        'l', 703,
        'm', 660,
        'p', 815,
        'r', 664,
        's', 677,
        't', 661,
        'u', 786,
        'w', 742,
        '\t', 646,
        ' ', 646,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 650,
        '\r', 1,
        '#', 651,
        'a', 724,
        'c', 728,
        'f', 765,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 665,
        'r', 706,
        's', 710,
        't', 667,
        'u', 833,
        'w', 742,
        '\t', 1072,
        ' ', 1072,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 650,
        '\r', 1,
        '#', 651,
        'a', 724,
        'c', 728,
        'f', 765,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 665,
        'r', 706,
        's', 710,
        't', 667,
        'u', 833,
        'w', 742,
        '\t', 647,
        ' ', 647,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 650,
        '\r', 1,
        '#', 651,
        'a', 724,
        'c', 728,
        'f', 765,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 665,
        'r', 706,
        's', 710,
        't', 667,
        'u', 833,
        'w', 742,
        '\t', 648,
        ' ', 648,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 650,
        '\r', 1,
        '#', 651,
        'a', 724,
        'c', 728,
        'f', 765,
        'h', 669,
        'i', 777,
        'm', 799,
        'p', 665,
        'r', 706,
        's', 710,
        't', 667,
        'u', 833,
        'w', 742,
        '\t', 649,
        ' ', 649,
      );
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(653);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(655);
      if (lookahead != 0) ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == 'h') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead == 'h') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == 'e') ADVANCE(808);
      if (lookahead == 'u') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 's') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'h') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'k') ADVANCE(740);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead == 't') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == 'k') ADVANCE(744);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'k') ADVANCE(740);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'k') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(800);
      if (lookahead == 't') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(800);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead == 'o') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == 's') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 865,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 899,
        'r', 901,
        's', 911,
        't', 903,
        'u', 998,
        '\t', 866,
        ' ', 866,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 865,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 899,
        'r', 901,
        's', 911,
        't', 903,
        'u', 1005,
        '\t', 866,
        ' ', 866,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 867,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 867,
        ' ', 867,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 868,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 868,
        ' ', 868,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 869,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 1038,
        'r', 901,
        's', 911,
        't', 903,
        'u', 998,
        '\t', 870,
        ' ', 870,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 869,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 895,
        'k', 932,
        'l', 936,
        'm', 896,
        'p', 1038,
        'r', 901,
        's', 911,
        't', 903,
        'u', 1005,
        '\t', 870,
        ' ', 870,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 871,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 998,
        'w', 966,
        '\t', 872,
        ' ', 872,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 871,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1005,
        'w', 966,
        '\t', 872,
        ' ', 872,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 1078,
        ' ', 1078,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 873,
        ' ', 873,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 874,
        ' ', 874,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 876,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1006,
        'w', 966,
        '\t', 875,
        ' ', 875,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 1076,
        ' ', 1076,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 877,
        ' ', 877,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 878,
        ' ', 878,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 880,
        '\r', 1,
        '#', 885,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1006,
        '\t', 879,
        ' ', 879,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 998,
        'w', 966,
        '\t', 883,
        ' ', 883,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1005,
        'w', 966,
        '\t', 884,
        ' ', 884,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1005,
        'w', 966,
        '\t', 882,
        ' ', 882,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\n', 333,
        '\f', 881,
        '\r', 1,
        '#', 885,
        'a', 951,
        'b', 1008,
        'c', 892,
        'd', 1007,
        'e', 894,
        'f', 988,
        'g', 900,
        'h', 939,
        'i', 1003,
        'k', 932,
        'l', 936,
        'm', 897,
        'p', 1030,
        'r', 902,
        's', 913,
        't', 898,
        'u', 1005,
        'w', 966,
        '\t', 1074,
        ' ', 1074,
      );
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(887);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '!') ADVANCE(889);
      if (lookahead != 0) ADVANCE(888);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 890,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 998,
        '\t', 891,
        ' ', 891,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      ADVANCE_MAP(
        '\f', 890,
        'a', 1037,
        'b', 1008,
        'c', 893,
        'd', 1007,
        'e', 894,
        'f', 1010,
        'g', 900,
        'h', 939,
        'k', 932,
        'l', 936,
        'm', 897,
        'r', 902,
        's', 912,
        't', 904,
        'u', 1005,
        '\t', 891,
        ' ', 891,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead == 'h') ADVANCE(1018);
      if (lookahead == 'o') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'o') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(959);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'u') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'u') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == 'k') ADVANCE(965);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead == 'k') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'c') ADVANCE(908);
      if (lookahead == 'p') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'd') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == 'r') ADVANCE(1063);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'e') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'f') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'g') ADVANCE(958);
      if (lookahead == 's') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'h') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(976);
      if (lookahead == 's') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1001);
      if (lookahead == 'u') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'k') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'l') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'm') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(950);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'n') ADVANCE(949);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1028);
      if (lookahead == 'r') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(945);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(984);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'p') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1016);
      if (lookahead == 's') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 's') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 't') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'u') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'v') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'x') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == 'y') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(1070);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__implicit_run_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1070);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1071);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1072,
        '#', 1081,
        'a', 1130,
        'c', 1132,
        'f', 1153,
        'h', 1092,
        'i', 1161,
        'm', 1175,
        'p', 1094,
        'r', 1118,
        's', 1121,
        't', 1089,
        'u', 1195,
        'w', 1141,
        '\t', 1072,
        ' ', 1072,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\f') ADVANCE(1073);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1075,
        '#', 1081,
        'a', 1129,
        'b', 1169,
        'c', 1082,
        'd', 1168,
        'e', 1084,
        'f', 1152,
        'g', 1088,
        'h', 1116,
        'i', 1161,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'p', 1188,
        'r', 1090,
        's', 1100,
        't', 1086,
        'u', 1162,
        'w', 1141,
        '\t', 1074,
        ' ', 1074,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1075,
        '#', 1081,
        'a', 1129,
        'b', 1169,
        'c', 1082,
        'd', 1168,
        'e', 1084,
        'f', 1152,
        'g', 1088,
        'h', 1116,
        'i', 1161,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'p', 1188,
        'r', 1090,
        's', 1100,
        't', 1086,
        'u', 1163,
        'w', 1141,
        '\t', 1074,
        ' ', 1074,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1077,
        '#', 1081,
        'a', 1192,
        'b', 1169,
        'c', 1083,
        'd', 1168,
        'e', 1084,
        'f', 1173,
        'g', 1088,
        'h', 1116,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'r', 1090,
        's', 1101,
        't', 1093,
        'u', 1162,
        '\t', 1076,
        ' ', 1076,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1077,
        '#', 1081,
        'a', 1192,
        'b', 1169,
        'c', 1083,
        'd', 1168,
        'e', 1084,
        'f', 1173,
        'g', 1088,
        'h', 1116,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'r', 1090,
        's', 1101,
        't', 1093,
        'u', 1167,
        '\t', 1076,
        ' ', 1076,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1079,
        '#', 1081,
        'a', 1129,
        'b', 1169,
        'c', 1082,
        'd', 1168,
        'e', 1084,
        'f', 1152,
        'g', 1088,
        'h', 1116,
        'i', 1161,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'p', 1188,
        'r', 1090,
        's', 1100,
        't', 1086,
        'u', 1162,
        'w', 1141,
        '\t', 1078,
        ' ', 1078,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      ADVANCE_MAP(
        '\f', 1079,
        '#', 1081,
        'a', 1129,
        'b', 1169,
        'c', 1082,
        'd', 1168,
        'e', 1084,
        'f', 1152,
        'g', 1088,
        'h', 1116,
        'i', 1161,
        'k', 1117,
        'l', 1115,
        'm', 1085,
        'p', 1188,
        'r', 1090,
        's', 1100,
        't', 1086,
        'u', 1167,
        'w', 1141,
        '\t', 1078,
        ' ', 1078,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '!') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '#') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead == 'h') ADVANCE(1174);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1139);
      if (lookahead == 'h') ADVANCE(1138);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1192);
      if (lookahead == 'o') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1160);
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'u') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1140);
      if (lookahead == 'h') ADVANCE(1138);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead == 's') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'a') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1095);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead == 'k') ADVANCE(1136);
      if (lookahead == 'o') ADVANCE(1187);
      if (lookahead == 't') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1095);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead == 'o') ADVANCE(1187);
      if (lookahead == 't') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'd') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1210);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1190);
      if (lookahead == 'k') ADVANCE(1144);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == 't') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'f') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1137);
      if (lookahead == 's') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'g') ADVANCE(1137);
      if (lookahead == 's') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1174);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'h') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1160);
      if (lookahead == 'u') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead == 's') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'i') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'k') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1171);
      if (lookahead == 'o') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'm') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == 's') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1127);
      if (lookahead == 's') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'n') ADVANCE(1126);
      if (lookahead == 's') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1217);
      if (lookahead == 'r') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1124);
      if (lookahead == 's') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead == 'r') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'o') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'p') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead == 's') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'r') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 's') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 't') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'u') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'v') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'w') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'x') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == 'y') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__nested_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1217);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 329},
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
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 326},
  [23] = {.lex_state = 324},
  [24] = {.lex_state = 324},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 324},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 326},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 325},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 325},
  [34] = {.lex_state = 325},
  [35] = {.lex_state = 328},
  [36] = {.lex_state = 328},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 324},
  [39] = {.lex_state = 324},
  [40] = {.lex_state = 326},
  [41] = {.lex_state = 324},
  [42] = {.lex_state = 324},
  [43] = {.lex_state = 324},
  [44] = {.lex_state = 326},
  [45] = {.lex_state = 325},
  [46] = {.lex_state = 319},
  [47] = {.lex_state = 325},
  [48] = {.lex_state = 319},
  [49] = {.lex_state = 319},
  [50] = {.lex_state = 319},
  [51] = {.lex_state = 325},
  [52] = {.lex_state = 325},
  [53] = {.lex_state = 325},
  [54] = {.lex_state = 328},
  [55] = {.lex_state = 328},
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
  [77] = {.lex_state = 319},
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
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 320},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 320},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 320},
  [167] = {.lex_state = 320},
  [168] = {.lex_state = 320},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 320},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 320},
  [176] = {.lex_state = 320},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 320},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 320},
  [195] = {.lex_state = 320},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 48},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 320},
  [201] = {.lex_state = 320},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 320},
  [204] = {.lex_state = 320},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 327},
  [208] = {.lex_state = 327},
  [209] = {.lex_state = 48},
  [210] = {.lex_state = 48},
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
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 320},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 320},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 320},
  [243] = {.lex_state = 320},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 320},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 329},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 320},
  [264] = {.lex_state = 329},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 320},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 320},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 327},
  [275] = {.lex_state = 320},
  [276] = {.lex_state = 320},
  [277] = {.lex_state = 327},
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
  [288] = {.lex_state = 320},
  [289] = {.lex_state = 320},
  [290] = {.lex_state = 320},
  [291] = {.lex_state = 320},
  [292] = {.lex_state = 320},
  [293] = {.lex_state = 320},
  [294] = {.lex_state = 320},
  [295] = {.lex_state = 320},
  [296] = {.lex_state = 49},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 49},
  [299] = {.lex_state = 321},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 53},
  [302] = {.lex_state = 321},
  [303] = {.lex_state = 321},
  [304] = {.lex_state = 321},
  [305] = {.lex_state = 321},
  [306] = {.lex_state = 321},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 330},
  [309] = {.lex_state = 330},
  [310] = {.lex_state = 322},
  [311] = {.lex_state = 322},
  [312] = {.lex_state = 321},
  [313] = {.lex_state = 329},
  [314] = {.lex_state = 329},
  [315] = {.lex_state = 329},
  [316] = {.lex_state = 329},
  [317] = {.lex_state = 329},
  [318] = {.lex_state = 329},
  [319] = {.lex_state = 329},
  [320] = {.lex_state = 329},
  [321] = {.lex_state = 321},
  [322] = {.lex_state = 329},
  [323] = {.lex_state = 329},
  [324] = {.lex_state = 329},
  [325] = {.lex_state = 329},
  [326] = {.lex_state = 329},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 321},
  [330] = {.lex_state = 329},
  [331] = {.lex_state = 329},
  [332] = {.lex_state = 329},
  [333] = {.lex_state = 321},
  [334] = {.lex_state = 329},
  [335] = {.lex_state = 329},
  [336] = {.lex_state = 329},
  [337] = {.lex_state = 329},
  [338] = {.lex_state = 321},
  [339] = {.lex_state = 329},
  [340] = {.lex_state = 329},
  [341] = {.lex_state = 329},
  [342] = {.lex_state = 330},
  [343] = {.lex_state = 330},
  [344] = {.lex_state = 330},
  [345] = {.lex_state = 330},
  [346] = {.lex_state = 322},
  [347] = {.lex_state = 329},
  [348] = {.lex_state = 329},
  [349] = {.lex_state = 329},
  [350] = {.lex_state = 329},
  [351] = {.lex_state = 329},
  [352] = {.lex_state = 329},
  [353] = {.lex_state = 329},
  [354] = {.lex_state = 329},
  [355] = {.lex_state = 329},
  [356] = {.lex_state = 329},
  [357] = {.lex_state = 329},
  [358] = {.lex_state = 329},
  [359] = {.lex_state = 329},
  [360] = {.lex_state = 329},
  [361] = {.lex_state = 329},
  [362] = {.lex_state = 329},
  [363] = {.lex_state = 329},
  [364] = {.lex_state = 329},
  [365] = {.lex_state = 329},
  [366] = {.lex_state = 329},
  [367] = {.lex_state = 329},
  [368] = {.lex_state = 329},
  [369] = {.lex_state = 329},
  [370] = {.lex_state = 329},
  [371] = {.lex_state = 329},
  [372] = {.lex_state = 329},
  [373] = {.lex_state = 329},
  [374] = {.lex_state = 329},
  [375] = {.lex_state = 329},
  [376] = {.lex_state = 329},
  [377] = {.lex_state = 329},
  [378] = {.lex_state = 329},
  [379] = {.lex_state = 329},
  [380] = {.lex_state = 329},
  [381] = {.lex_state = 329},
  [382] = {.lex_state = 329},
  [383] = {.lex_state = 329},
  [384] = {.lex_state = 329},
  [385] = {.lex_state = 48},
  [386] = {.lex_state = 43},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 45},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 43},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 45},
  [402] = {.lex_state = 43},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 45},
  [405] = {.lex_state = 45},
  [406] = {.lex_state = 45},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 45},
  [410] = {.lex_state = 40},
  [411] = {.lex_state = 40},
  [412] = {.lex_state = 40},
  [413] = {.lex_state = 38},
  [414] = {.lex_state = 38},
  [415] = {.lex_state = 38},
  [416] = {.lex_state = 57},
  [417] = {.lex_state = 38},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 57},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 57},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 41},
  [424] = {.lex_state = 44},
  [425] = {.lex_state = 50},
  [426] = {.lex_state = 38},
  [427] = {.lex_state = 44},
  [428] = {.lex_state = 50},
  [429] = {.lex_state = 38},
  [430] = {.lex_state = 50},
  [431] = {.lex_state = 50},
  [432] = {.lex_state = 50},
  [433] = {.lex_state = 50},
  [434] = {.lex_state = 42},
  [435] = {.lex_state = 50},
  [436] = {.lex_state = 50},
  [437] = {.lex_state = 41},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 50},
  [440] = {.lex_state = 50},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 50},
  [443] = {.lex_state = 41},
  [444] = {.lex_state = 50},
  [445] = {.lex_state = 41},
  [446] = {.lex_state = 50},
  [447] = {.lex_state = 42},
  [448] = {.lex_state = 50},
  [449] = {.lex_state = 50},
  [450] = {.lex_state = 50},
  [451] = {.lex_state = 50},
  [452] = {.lex_state = 42},
  [453] = {.lex_state = 50},
  [454] = {.lex_state = 38},
  [455] = {.lex_state = 50},
  [456] = {.lex_state = 41},
  [457] = {.lex_state = 27},
  [458] = {.lex_state = 41},
  [459] = {.lex_state = 56},
  [460] = {.lex_state = 56},
  [461] = {.lex_state = 39},
  [462] = {.lex_state = 56},
  [463] = {.lex_state = 56},
  [464] = {.lex_state = 56},
  [465] = {.lex_state = 56},
  [466] = {.lex_state = 39},
  [467] = {.lex_state = 38},
  [468] = {.lex_state = 38},
  [469] = {.lex_state = 38},
  [470] = {.lex_state = 27},
  [471] = {.lex_state = 38},
  [472] = {.lex_state = 38},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 27},
  [475] = {.lex_state = 42},
  [476] = {.lex_state = 42},
  [477] = {.lex_state = 27},
  [478] = {.lex_state = 27},
  [479] = {.lex_state = 27},
  [480] = {.lex_state = 27},
  [481] = {.lex_state = 27},
  [482] = {.lex_state = 51},
  [483] = {.lex_state = 42},
  [484] = {.lex_state = 42},
  [485] = {.lex_state = 42},
  [486] = {.lex_state = 11},
  [487] = {.lex_state = 42},
  [488] = {.lex_state = 42},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 27},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 27},
  [493] = {.lex_state = 50},
  [494] = {.lex_state = 16},
  [495] = {.lex_state = 58},
  [496] = {.lex_state = 46},
  [497] = {.lex_state = 42},
  [498] = {.lex_state = 50},
  [499] = {.lex_state = 27},
  [500] = {.lex_state = 27},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 42},
  [504] = {.lex_state = 58},
  [505] = {.lex_state = 27},
  [506] = {.lex_state = 27},
  [507] = {.lex_state = 27},
  [508] = {.lex_state = 42},
  [509] = {.lex_state = 42},
  [510] = {.lex_state = 42},
  [511] = {.lex_state = 11},
  [512] = {.lex_state = 42},
  [513] = {.lex_state = 42},
  [514] = {.lex_state = 50},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 51},
  [517] = {.lex_state = 51},
  [518] = {.lex_state = 27},
  [519] = {.lex_state = 46},
  [520] = {.lex_state = 42},
  [521] = {.lex_state = 46},
  [522] = {.lex_state = 50},
  [523] = {.lex_state = 42},
  [524] = {.lex_state = 47},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 38},
  [528] = {.lex_state = 38},
  [529] = {.lex_state = 47},
  [530] = {.lex_state = 38},
  [531] = {.lex_state = 38},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 50},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 52},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 42},
  [541] = {.lex_state = 47},
  [542] = {.lex_state = 52},
  [543] = {.lex_state = 38},
  [544] = {.lex_state = 47},
  [545] = {.lex_state = 52},
  [546] = {.lex_state = 52},
  [547] = {.lex_state = 27},
  [548] = {.lex_state = 38},
  [549] = {.lex_state = 52},
  [550] = {.lex_state = 52},
  [551] = {.lex_state = 38},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 27},
  [554] = {.lex_state = 27},
  [555] = {.lex_state = 47},
  [556] = {.lex_state = 38},
  [557] = {.lex_state = 38},
  [558] = {.lex_state = 38},
  [559] = {.lex_state = 38},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 317},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 27},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 27},
  [567] = {.lex_state = 38},
  [568] = {.lex_state = 38},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 38},
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
  [596] = {.lex_state = 0},
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
  [611] = {.lex_state = 329},
  [612] = {.lex_state = 38},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 38},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 27},
  [617] = {.lex_state = 50},
  [618] = {.lex_state = 38},
  [619] = {.lex_state = 38},
  [620] = {.lex_state = 38},
  [621] = {.lex_state = 38},
  [622] = {.lex_state = 38},
  [623] = {.lex_state = 317},
  [624] = {.lex_state = 38},
  [625] = {.lex_state = 38},
  [626] = {.lex_state = 38},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 38},
  [629] = {.lex_state = 38},
  [630] = {.lex_state = 38},
  [631] = {.lex_state = 38},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 38},
  [634] = {.lex_state = 38},
  [635] = {.lex_state = 38},
  [636] = {.lex_state = 38},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 38},
  [639] = {.lex_state = 38},
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
  [650] = {.lex_state = 38},
  [651] = {.lex_state = 38},
  [652] = {.lex_state = 38},
  [653] = {.lex_state = 38},
  [654] = {.lex_state = 38},
  [655] = {.lex_state = 38},
  [656] = {.lex_state = 55},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 318},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 27},
  [661] = {.lex_state = 38},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 318},
  [665] = {.lex_state = 318},
  [666] = {.lex_state = 11},
  [667] = {.lex_state = 11},
  [668] = {.lex_state = 38},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 318},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 55},
  [677] = {.lex_state = 318},
  [678] = {.lex_state = 38},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 38},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 16},
  [690] = {.lex_state = 55},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 55},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 38},
  [698] = {.lex_state = 318},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 317},
  [701] = {.lex_state = 27},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 16},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 27},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 317},
  [713] = {.lex_state = 38},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 38},
  [724] = {.lex_state = 38},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 38},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 38},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 38},
  [735] = {.lex_state = 38},
  [736] = {.lex_state = 38},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 38},
  [739] = {.lex_state = 38},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 38},
  [743] = {.lex_state = 38},
  [744] = {.lex_state = 317},
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
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 38},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 317},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 38},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 42},
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
  [784] = {.lex_state = 38},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 38},
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
    [sym_source_file] = STATE(785),
    [sym_item] = STATE(264),
    [sym__trivia] = STATE(264),
    [sym_with] = STATE(382),
    [sym_struct] = STATE(382),
    [sym_psyche] = STATE(382),
    [sym_skill] = STATE(382),
    [sym_service] = STATE(382),
    [sym_prompt] = STATE(382),
    [sym_task] = STATE(382),
    [sym_chore] = STATE(382),
    [sym_instruct] = STATE(382),
    [sym_context] = STATE(382),
    [sym_agic] = STATE(382),
    [sym_flow] = STATE(382),
    [aux_sym_source_file_repeat1] = STATE(264),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_flow_body] = STATE(355),
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(335),
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
    [sym__pass_statement] = STATE(335),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(10),
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
    [sym_statements] = STATE(332),
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
    [sym__pass_statement] = STATE(332),
    [sym__flow_reserved_word] = STATE(514),
    [aux_sym__cap_definition_repeat2] = STATE(165),
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
    [sym__flow_reserved_word] = STATE(514),
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
    [sym__flow_reserved_word] = STATE(514),
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
    [sym__flow_reserved_word] = STATE(514),
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(493), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(493), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(493), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(493), 1,
      sym__flow_reserved_word,
    STATE(715), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(227), 1,
      sym_repeat_until_body,
    STATE(493), 1,
      sym__flow_reserved_word,
    STATE(688), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(493), 1,
      sym__flow_reserved_word,
    STATE(692), 1,
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
    STATE(188), 1,
      sym__implicit_run_text_body_line,
    STATE(198), 1,
      sym_statements,
    STATE(232), 1,
      sym_repeat_body,
    STATE(493), 1,
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
    STATE(334), 1,
      sym_statements,
    STATE(514), 1,
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
    STATE(332), 1,
      sym_statements,
    STATE(514), 1,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(324), 1,
      sym_messages,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(331), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(336), 1,
      sym_messages,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(322), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(522), 2,
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
      aux_sym__cap_definition_repeat2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(324), 1,
      sym_messages,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(331), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(336), 1,
      sym_messages,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(322), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(317), 1,
      sym_messages,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(341), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(522), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(379), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(373), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(356), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(357), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(361), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(375), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(378), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(367), 1,
      sym_agic_body,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(186), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(326), 2,
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
  [9283] = 5,
    ACTIONS(693), 1,
      sym_blank_line,
    ACTIONS(696), 1,
      sym__nested_indented_raw_text,
    STATE(185), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(206), 1,
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
  [9329] = 20,
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
    STATE(243), 1,
      sym__unroled_message_initial_line,
    STATE(461), 1,
      sym_directive_key,
    STATE(522), 1,
      sym__agic_reserved_word,
    STATE(541), 1,
      sym_role,
    STATE(283), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(307), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    STATE(336), 2,
      sym_messages,
      sym__pass_statement,
    ACTIONS(613), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(699), 4,
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
  [9405] = 4,
    ACTIONS(701), 1,
      sym_blank_line,
    ACTIONS(704), 1,
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
  [9449] = 4,
    ACTIONS(707), 1,
      sym_blank_line,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    STATE(189), 2,
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
  [9493] = 4,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    ACTIONS(711), 1,
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
  [9537] = 5,
    ACTIONS(713), 1,
      sym_blank_line,
    ACTIONS(715), 1,
      sym__nested_indented_raw_text,
    STATE(185), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(206), 1,
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
  [9583] = 6,
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
  [9630] = 3,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    STATE(199), 1,
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
  [9671] = 3,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    STATE(199), 1,
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
  [9712] = 6,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    STATE(552), 1,
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
  [9842] = 20,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(736), 1,
      sym_flow_run_keyword,
    ACTIONS(738), 1,
      sym_flow_seek_keyword,
    ACTIONS(740), 1,
      sym_flow_ask_keyword,
    ACTIONS(742), 1,
      sym_flow_scatter_keyword,
    ACTIONS(744), 1,
      sym_flow_storm_keyword,
    ACTIONS(746), 1,
      sym_flow_gather_keyword,
    ACTIONS(748), 1,
      sym_flow_settle_keyword,
    ACTIONS(750), 1,
      sym_flow_map_keyword,
    ACTIONS(752), 1,
      sym_flow_keep_keyword,
    ACTIONS(754), 1,
      sym_flow_drop_keyword,
    ACTIONS(756), 1,
      sym_flow_rank_keyword,
    ACTIONS(758), 1,
      sym_flow_repeat_keyword,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(486), 1,
      sym_line_end,
    STATE(602), 1,
      sym_text_line,
    STATE(108), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
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
  [9916] = 3,
    ACTIONS(760), 1,
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
  [9956] = 1,
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
  [9992] = 6,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    ACTIONS(768), 1,
      sym_instruct_keyword,
    STATE(271), 1,
      sym_instruct_setting,
    STATE(263), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(764), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(766), 24,
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
  [10038] = 6,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    ACTIONS(770), 1,
      sym_context_keyword,
    STATE(271), 1,
      sym_context_setting,
    STATE(263), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(764), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(766), 24,
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
  [10084] = 1,
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
  [10120] = 6,
    ACTIONS(768), 1,
      sym_instruct_keyword,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_instruct_setting,
    STATE(200), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(774), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(776), 24,
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
  [10166] = 6,
    ACTIONS(770), 1,
      sym_context_keyword,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_context_setting,
    STATE(201), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(778), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(776), 24,
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
  [10212] = 1,
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
  [10248] = 1,
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
  [10284] = 6,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(780), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__nested_indented_raw_text,
    STATE(207), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
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
  [10330] = 6,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(786), 1,
      sym_blank_line,
    ACTIONS(788), 1,
      sym__nested_indented_raw_text,
    STATE(207), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
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
  [10376] = 20,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
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
    STATE(102), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(645), 1,
      sym_text_line,
    STATE(84), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
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
  [10450] = 20,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
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
    STATE(244), 1,
      sym__nested_text_block,
    STATE(511), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
    STATE(216), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
    STATE(217), 13,
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
  [10559] = 1,
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
  [10594] = 1,
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
  [10629] = 1,
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
  [10664] = 1,
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
  [10699] = 1,
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
  [10734] = 1,
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
  [10769] = 1,
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
  [10804] = 1,
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
  [10839] = 1,
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
  [10874] = 1,
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
  [10909] = 1,
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
  [10944] = 1,
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
  [10979] = 1,
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
  [11014] = 1,
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
  [11049] = 1,
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
  [11084] = 1,
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
  [11119] = 1,
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
  [11154] = 1,
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
  [11189] = 1,
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
  [11224] = 1,
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
  [11259] = 1,
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
  [11294] = 1,
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
  [11329] = 1,
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
  [11364] = 1,
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
  [11399] = 1,
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
  [11434] = 6,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 1,
      sym_blank_line,
    ACTIONS(845), 1,
      sym_indented_raw_text,
    STATE(237), 1,
      aux_sym_unroled_message_repeat1,
    STATE(284), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(843), 27,
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
  [11479] = 1,
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
  [11514] = 4,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    STATE(268), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(848), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(766), 25,
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
  [11555] = 1,
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
  [11590] = 1,
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
  [11625] = 6,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    STATE(237), 1,
      aux_sym_unroled_message_repeat1,
    STATE(284), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(854), 27,
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
  [11670] = 6,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    ACTIONS(860), 1,
      sym_blank_line,
    STATE(242), 1,
      aux_sym_unroled_message_repeat1,
    STATE(284), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(862), 27,
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
  [11715] = 1,
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
  [11750] = 1,
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
  [11785] = 1,
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
  [11820] = 1,
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
  [11855] = 1,
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
  [11890] = 1,
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
  [11925] = 1,
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
  [11960] = 4,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    STATE(263), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(764), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(866), 25,
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
  [12001] = 1,
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
  [12036] = 1,
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
  [12071] = 1,
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
  [12106] = 1,
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
  [12141] = 1,
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
  [12176] = 17,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
    ACTIONS(876), 1,
      sym_with_keyword,
    ACTIONS(879), 1,
      sym_struct_keyword,
    ACTIONS(882), 1,
      sym_psyche_keyword,
    ACTIONS(885), 1,
      sym_skill_keyword,
    ACTIONS(888), 1,
      sym_service_keyword,
    ACTIONS(891), 1,
      sym_prompt_keyword,
    ACTIONS(894), 1,
      sym_context_keyword,
    ACTIONS(897), 1,
      sym_instruct_keyword,
    ACTIONS(900), 1,
      sym_agic_keyword,
    ACTIONS(903), 1,
      sym_task_keyword,
    ACTIONS(906), 1,
      sym_chore_keyword,
    ACTIONS(909), 1,
      sym_flow_keyword,
    ACTIONS(870), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(873), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(257), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(382), 12,
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
  [12243] = 1,
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
  [12278] = 1,
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
  [12313] = 1,
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
  [12348] = 1,
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
  [12383] = 1,
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
  [12418] = 4,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
    STATE(263), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(914), 4,
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
  [12459] = 17,
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
    ACTIONS(917), 1,
      ts_builtin_sym_end,
    ACTIONS(919), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(921), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(257), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
    STATE(382), 12,
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
  [12596] = 1,
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
  [12631] = 4,
    ACTIONS(923), 1,
      ts_builtin_sym_end,
    STATE(263), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(764), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(925), 25,
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
  [12672] = 1,
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
  [12707] = 1,
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
  [12742] = 4,
    ACTIONS(923), 1,
      ts_builtin_sym_end,
    STATE(251), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(927), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(925), 25,
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
  [12783] = 1,
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
  [12818] = 1,
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
  [12853] = 2,
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
  [12889] = 4,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    STATE(279), 1,
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
  [12929] = 4,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(856), 1,
      sym_indented_raw_text,
    STATE(279), 1,
      sym__unroled_message_continuation_line,
    ACTIONS(854), 28,
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
  [12969] = 2,
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
  [13005] = 2,
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
  [13110] = 2,
    ACTIONS(937), 1,
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
  [13145] = 2,
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
  [13180] = 2,
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
  [13215] = 2,
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
  [13250] = 2,
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
  [13285] = 2,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 29,
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
  [13355] = 2,
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
  [13390] = 2,
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
  [13425] = 2,
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
  [13460] = 2,
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
  [13495] = 2,
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
  [13530] = 2,
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
  [13565] = 2,
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
  [13600] = 2,
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
  [13635] = 16,
    ACTIONS(736), 1,
      sym_flow_run_keyword,
    ACTIONS(738), 1,
      sym_flow_seek_keyword,
    ACTIONS(740), 1,
      sym_flow_ask_keyword,
    ACTIONS(742), 1,
      sym_flow_scatter_keyword,
    ACTIONS(744), 1,
      sym_flow_storm_keyword,
    ACTIONS(746), 1,
      sym_flow_gather_keyword,
    ACTIONS(748), 1,
      sym_flow_settle_keyword,
    ACTIONS(750), 1,
      sym_flow_map_keyword,
    ACTIONS(752), 1,
      sym_flow_keep_keyword,
    ACTIONS(754), 1,
      sym_flow_drop_keyword,
    ACTIONS(756), 1,
      sym_flow_rank_keyword,
    ACTIONS(758), 1,
      sym_flow_repeat_keyword,
    ACTIONS(977), 1,
      sym_snake_name,
    STATE(705), 1,
      sym_local_name,
    ACTIONS(975), 3,
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
  [13698] = 16,
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
    ACTIONS(977), 1,
      sym_snake_name,
    STATE(702), 1,
      sym_local_name,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    STATE(245), 13,
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
    ACTIONS(977), 1,
      sym_snake_name,
    STATE(709), 1,
      sym_local_name,
    ACTIONS(975), 3,
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
  [13824] = 12,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    STATE(337), 1,
      sym_cap_body,
    STATE(338), 1,
      sym_property,
    STATE(384), 1,
      sym_text_body,
    STATE(674), 1,
      sym_property_key,
    STATE(302), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(983), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [13876] = 1,
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
  [13906] = 1,
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
  [13936] = 12,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    STATE(316), 1,
      sym_cap_body,
    STATE(338), 1,
      sym_property,
    STATE(384), 1,
      sym_text_body,
    STATE(674), 1,
      sym_property_key,
    STATE(305), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(993), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
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
  [13988] = 10,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
      sym_text_body,
    STATE(674), 1,
      sym_property_key,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(999), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(304), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
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
  [14035] = 10,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(987), 1,
      sym_snake_name,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
    STATE(318), 1,
      sym_text_body,
    STATE(674), 1,
      sym_property_key,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1005), 3,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    STATE(306), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
    ACTIONS(1007), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14082] = 7,
    ACTIONS(1009), 1,
      ts_builtin_sym_end,
    ACTIONS(1016), 1,
      sym_snake_name,
    STATE(338), 1,
      sym_property,
    STATE(674), 1,
      sym_property_key,
    STATE(305), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
    ACTIONS(1011), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1014), 13,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14120] = 6,
    ACTIONS(1019), 1,
      ts_builtin_sym_end,
    ACTIONS(1026), 1,
      sym_snake_name,
    STATE(674), 1,
      sym_property_key,
    STATE(306), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
    ACTIONS(1021), 4,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1024), 13,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14156] = 3,
    STATE(307), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1029), 4,
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
  [14184] = 7,
    ACTIONS(1034), 1,
      sym_blank_line,
    ACTIONS(1040), 1,
      sym_snake_name,
    STATE(707), 1,
      sym_field_name,
    ACTIONS(1032), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1036), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(309), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1038), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14220] = 7,
    ACTIONS(1044), 1,
      sym_blank_line,
    ACTIONS(1052), 1,
      sym_snake_name,
    STATE(707), 1,
      sym_field_name,
    ACTIONS(1042), 2,
      ts_builtin_sym_end,
      sym_parent_doc_line,
    ACTIONS(1047), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(309), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(1050), 12,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14256] = 5,
    ACTIONS(1055), 1,
      ts_builtin_sym_end,
    ACTIONS(1057), 1,
      sym_blank_line,
    ACTIONS(1062), 1,
      sym_indented_raw_text,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1060), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14287] = 5,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1065), 1,
      ts_builtin_sym_end,
    ACTIONS(1067), 1,
      sym_blank_line,
    STATE(310), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
    ACTIONS(1069), 15,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
      sym_skill_keyword,
      sym_service_keyword,
      sym_prompt_keyword,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_agic_keyword,
      sym_task_keyword,
      sym_chore_keyword,
      sym_flow_keyword,
  [14318] = 2,
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
  [14342] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1071), 13,
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
  [14370] = 4,
    ACTIONS(1077), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1080), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(912), 13,
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
  [14398] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14426] = 4,
    ACTIONS(1087), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1089), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(339), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1085), 13,
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
  [14454] = 4,
    ACTIONS(1093), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1095), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(313), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1091), 13,
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
  [14482] = 4,
    ACTIONS(1099), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1101), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(319), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1097), 13,
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
  [14510] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1103), 13,
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
  [14538] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1097), 13,
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
  [14566] = 2,
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
  [14590] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14618] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14646] = 4,
    ACTIONS(650), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1107), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(341), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14674] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1109), 13,
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
  [14702] = 4,
    ACTIONS(635), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1111), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(322), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14730] = 1,
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
  [14752] = 1,
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
  [14774] = 2,
    ACTIONS(1113), 1,
      ts_builtin_sym_end,
    ACTIONS(1115), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14798] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1117), 13,
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
  [14826] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14854] = 4,
    ACTIONS(1119), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1121), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(330), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14882] = 3,
    ACTIONS(1123), 1,
      ts_builtin_sym_end,
    ACTIONS(1129), 1,
      sym_snake_name,
    ACTIONS(1126), 17,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [14908] = 4,
    ACTIONS(1131), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1133), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(315), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1117), 13,
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
  [14936] = 4,
    ACTIONS(1137), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1139), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(323), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14964] = 4,
    ACTIONS(609), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1141), 2,
      sym_blank_line,
      sym_parent_doc_line,
    STATE(331), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [14992] = 4,
    ACTIONS(1145), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1147), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(325), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1143), 13,
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
  [15020] = 2,
    ACTIONS(1149), 1,
      ts_builtin_sym_end,
    ACTIONS(1151), 18,
      sym_blank_line,
      sym_parent_doc_line,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15044] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1153), 13,
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
  [15072] = 4,
    ACTIONS(1155), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1157), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(320), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
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
  [15100] = 4,
    ACTIONS(1073), 2,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1075), 2,
      sym_doc_line,
      sym_comment_line,
    STATE(314), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat2,
    ACTIONS(1091), 13,
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
  [15128] = 2,
    ACTIONS(1159), 3,
      ts_builtin_sym_end,
      sym_blank_line,
      sym_parent_doc_line,
    ACTIONS(1161), 15,
      sym_doc_line,
      sym_comment_line,
      sym_with_keyword,
      sym_struct_keyword,
      sym_psyche_keyword,
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
  [15151] = 2,
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
  [15174] = 2,
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
  [15197] = 2,
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
  [15220] = 2,
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
  [15243] = 2,
    ACTIONS(1169), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1167), 15,
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
  [15265] = 2,
    ACTIONS(1173), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1171), 15,
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
  [15287] = 2,
    ACTIONS(1177), 2,
      sym_doc_line,
      sym_comment_line,
    ACTIONS(1175), 15,
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
  [15309] = 2,
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
  [15331] = 2,
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
  [15353] = 2,
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
  [15375] = 2,
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
  [15397] = 2,
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
  [15419] = 2,
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
  [15441] = 2,
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
  [15463] = 2,
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
  [15485] = 2,
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
  [15507] = 2,
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
  [15529] = 2,
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
  [15551] = 2,
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
  [15573] = 2,
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
  [15595] = 2,
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
  [15617] = 2,
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
  [15639] = 2,
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
  [15661] = 2,
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
  [15683] = 2,
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
  [15705] = 2,
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
  [15727] = 2,
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
  [15749] = 2,
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
  [15771] = 2,
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
  [15793] = 2,
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
  [15815] = 2,
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
  [15837] = 2,
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
  [15859] = 2,
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
  [15881] = 2,
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
  [15903] = 2,
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
  [15925] = 2,
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
  [15947] = 2,
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
  [15969] = 2,
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
  [15991] = 2,
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
  [16013] = 2,
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
  [16035] = 2,
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
  [16057] = 2,
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
  [16079] = 1,
    ACTIONS(1311), 15,
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
  [16097] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1317), 1,
      sym_colon,
    ACTIONS(1319), 1,
      sym_snake_name,
    STATE(62), 1,
      sym_inline_agic_body,
    STATE(452), 1,
      sym_runnable,
    STATE(533), 1,
      sym_rank_selection_clause,
    STATE(675), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16128] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(729), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16153] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1327), 1,
      sym_colon,
    STATE(124), 1,
      sym_inline_agic_body,
    STATE(503), 1,
      sym_runnable,
    STATE(646), 1,
      sym_position_clause,
    STATE(695), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16184] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(767), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16209] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(781), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16234] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(710), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16259] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(727), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16284] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(731), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16309] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(670), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16334] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1327), 1,
      sym_colon,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(447), 1,
      sym_runnable,
    STATE(526), 1,
      sym_rank_selection_clause,
    STATE(706), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16365] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(789), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16390] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(621), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16415] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(726), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16440] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(718), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16465] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(766), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16490] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1329), 1,
      sym_colon,
    STATE(272), 1,
      sym_inline_agic_body,
    STATE(485), 1,
      sym_runnable,
    STATE(599), 1,
      sym_position_clause,
    STATE(657), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16521] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1329), 1,
      sym_colon,
    STATE(212), 1,
      sym_inline_agic_body,
    STATE(434), 1,
      sym_runnable,
    STATE(537), 1,
      sym_rank_selection_clause,
    STATE(662), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16552] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(758), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16577] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1327), 1,
      sym_colon,
    STATE(122), 1,
      sym_inline_agic_body,
    STATE(497), 1,
      sym_runnable,
    STATE(642), 1,
      sym_position_clause,
    STATE(687), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16608] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1317), 1,
      sym_colon,
    ACTIONS(1319), 1,
      sym_snake_name,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(509), 1,
      sym_runnable,
    STATE(629), 1,
      sym_position_clause,
    STATE(669), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16639] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1317), 1,
      sym_colon,
    ACTIONS(1319), 1,
      sym_snake_name,
    STATE(106), 1,
      sym_inline_agic_body,
    STATE(510), 1,
      sym_runnable,
    STATE(631), 1,
      sym_position_clause,
    STATE(672), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16670] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(768), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16695] = 6,
    ACTIONS(1323), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(473), 1,
      sym_type_name,
    STATE(557), 1,
      sym_type,
    STATE(472), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1321), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [16720] = 9,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1329), 1,
      sym_colon,
    STATE(270), 1,
      sym_inline_agic_body,
    STATE(484), 1,
      sym_runnable,
    STATE(597), 1,
      sym_position_clause,
    STATE(711), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16751] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1331), 1,
      sym_arrow,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic,
    STATE(508), 1,
      sym_runnable,
    STATE(627), 1,
      sym_par_clause,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16778] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1335), 1,
      sym_arrow,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(159), 1,
      sym_inline_agic,
    STATE(475), 1,
      sym_runnable,
    STATE(632), 1,
      sym_par_clause,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16805] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_arrow,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(231), 1,
      sym_inline_agic,
    STATE(483), 1,
      sym_runnable,
    STATE(594), 1,
      sym_par_clause,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [16832] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(122), 1,
      sym_inline_agic_body,
    STATE(497), 1,
      sym_runnable,
    STATE(642), 1,
      sym_position_clause,
    STATE(687), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16858] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(270), 1,
      sym_inline_agic_body,
    STATE(484), 1,
      sym_runnable,
    STATE(597), 1,
      sym_position_clause,
    STATE(711), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16884] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(272), 1,
      sym_inline_agic_body,
    STATE(485), 1,
      sym_runnable,
    STATE(599), 1,
      sym_position_clause,
    STATE(657), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16910] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(212), 1,
      sym_inline_agic_body,
    STATE(434), 1,
      sym_runnable,
    STATE(537), 1,
      sym_rank_selection_clause,
    STATE(662), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [16936] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(61), 1,
      sym_inline_agic_body,
    STATE(509), 1,
      sym_runnable,
    STATE(629), 1,
      sym_position_clause,
    STATE(669), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16962] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(106), 1,
      sym_inline_agic_body,
    STATE(510), 1,
      sym_runnable,
    STATE(631), 1,
      sym_position_clause,
    STATE(672), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [16988] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(62), 1,
      sym_inline_agic_body,
    STATE(452), 1,
      sym_runnable,
    STATE(533), 1,
      sym_rank_selection_clause,
    STATE(675), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17014] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(124), 1,
      sym_inline_agic_body,
    STATE(503), 1,
      sym_runnable,
    STATE(646), 1,
      sym_position_clause,
    STATE(695), 1,
      sym_par_clause,
    ACTIONS(1325), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [17040] = 8,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(128), 1,
      sym_inline_agic_body,
    STATE(447), 1,
      sym_runnable,
    STATE(526), 1,
      sym_rank_selection_clause,
    STATE(706), 1,
      sym_par_clause,
    ACTIONS(1315), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17066] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1331), 1,
      sym_arrow,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(58), 1,
      sym_inline_agic,
    STATE(625), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17087] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_arrow,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(215), 1,
      sym_inline_agic,
    STATE(593), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17108] = 4,
    ACTIONS(1353), 1,
      sym_colon,
    STATE(562), 1,
      sym_text_ref,
    ACTIONS(1349), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1351), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17125] = 8,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1355), 1,
      sym_newline,
    ACTIONS(1357), 1,
      sym_inline_comment,
    STATE(362), 1,
      sym_instruct_body,
    STATE(371), 1,
      sym_text_block,
    STATE(374), 1,
      sym_text_inline,
    STATE(494), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_line,
  [17150] = 4,
    ACTIONS(1361), 1,
      sym_array_suffix,
    STATE(454), 1,
      aux_sym_type_repeat1,
    STATE(468), 1,
      sym_type_suffix,
    ACTIONS(1359), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17167] = 4,
    ACTIONS(1363), 1,
      sym_colon,
    STATE(564), 1,
      sym_text_ref,
    ACTIONS(1349), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1351), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [17184] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(244), 1,
      sym__nested_text_block,
    STATE(511), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
    STATE(238), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17207] = 4,
    ACTIONS(1367), 1,
      sym_array_suffix,
    STATE(429), 1,
      aux_sym_type_repeat1,
    STATE(468), 1,
      sym_type_suffix,
    ACTIONS(1365), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17224] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(290), 1,
      sym__nested_text_block,
    STATE(489), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(289), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17247] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(290), 1,
      sym__nested_text_block,
    STATE(489), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(292), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17270] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(244), 1,
      sym__nested_text_block,
    STATE(511), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
    STATE(273), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17293] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(244), 1,
      sym__nested_text_block,
    STATE(511), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
    STATE(254), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17316] = 7,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(269), 1,
      sym_line_end,
    STATE(488), 1,
      sym_rank_selection_clause,
    STATE(610), 1,
      sym_par_clause,
    ACTIONS(1376), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17339] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(486), 1,
      sym_line_end,
    STATE(602), 1,
      sym_text_line,
    STATE(111), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17362] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(244), 1,
      sym__nested_text_block,
    STATE(511), 1,
      sym_line_end,
    STATE(634), 1,
      sym_text_line,
    STATE(228), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17385] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1335), 1,
      sym_arrow,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(140), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17406] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_arrow,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(214), 1,
      sym_inline_agic,
    STATE(592), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17427] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(290), 1,
      sym__nested_text_block,
    STATE(489), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_line,
    STATE(285), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17450] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(486), 1,
      sym_line_end,
    STATE(602), 1,
      sym_text_line,
    STATE(125), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17473] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1331), 1,
      sym_arrow,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(59), 1,
      sym_inline_agic,
    STATE(626), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17494] = 8,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1355), 1,
      sym_newline,
    ACTIONS(1357), 1,
      sym_inline_comment,
    STATE(371), 1,
      sym_text_block,
    STATE(372), 1,
      sym_instruct_body,
    STATE(374), 1,
      sym_text_inline,
    STATE(494), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_line,
  [17519] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1335), 1,
      sym_arrow,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(155), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17540] = 8,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1355), 1,
      sym_newline,
    ACTIONS(1357), 1,
      sym_inline_comment,
    STATE(363), 1,
      sym_context_body,
    STATE(370), 1,
      sym_text_inline,
    STATE(371), 1,
      sym_text_block,
    STATE(494), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_line,
  [17565] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1335), 1,
      sym_arrow,
    ACTIONS(1337), 1,
      sym_colon,
    STATE(149), 1,
      sym_inline_agic,
    STATE(624), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17586] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(645), 1,
      sym_text_line,
    STATE(64), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17609] = 7,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
    STATE(476), 1,
      sym_rank_selection_clause,
    STATE(612), 1,
      sym_par_clause,
    ACTIONS(1376), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17632] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(486), 1,
      sym_line_end,
    STATE(602), 1,
      sym_text_line,
    STATE(150), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17655] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(645), 1,
      sym_text_line,
    STATE(67), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17678] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(138), 1,
      sym__nested_text_block,
    STATE(486), 1,
      sym_line_end,
    STATE(602), 1,
      sym_text_line,
    STATE(134), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17701] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(645), 1,
      sym_text_line,
    STATE(74), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17724] = 7,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
    STATE(513), 1,
      sym_rank_selection_clause,
    STATE(641), 1,
      sym_par_clause,
    ACTIONS(1376), 2,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [17747] = 8,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1355), 1,
      sym_newline,
    ACTIONS(1357), 1,
      sym_inline_comment,
    STATE(360), 1,
      sym_context_body,
    STATE(370), 1,
      sym_text_inline,
    STATE(371), 1,
      sym_text_block,
    STATE(494), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_line,
  [17772] = 4,
    ACTIONS(1361), 1,
      sym_array_suffix,
    STATE(429), 1,
      aux_sym_type_repeat1,
    STATE(468), 1,
      sym_type_suffix,
    ACTIONS(1386), 5,
      sym_newline,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [17789] = 7,
    ACTIONS(730), 1,
      sym_newline,
    ACTIONS(732), 1,
      sym_inline_comment,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    STATE(102), 1,
      sym__nested_text_block,
    STATE(515), 1,
      sym_line_end,
    STATE(645), 1,
      sym_text_line,
    STATE(96), 2,
      sym__nested_text_inline_alias,
      sym__nested_text_inline,
  [17812] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1339), 1,
      sym_arrow,
    ACTIONS(1341), 1,
      sym_colon,
    STATE(229), 1,
      sym_inline_agic,
    STATE(585), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17833] = 6,
    ACTIONS(1390), 1,
      sym_comment_line,
    ACTIONS(1392), 1,
      sym_snake_name,
    STATE(358), 1,
      sym_struct_body,
    STATE(707), 1,
      sym_field_name,
    ACTIONS(1388), 2,
      sym_blank_line,
      sym_doc_line,
    STATE(308), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [17854] = 6,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1331), 1,
      sym_arrow,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(56), 1,
      sym_inline_agic,
    STATE(618), 1,
      sym_runnable,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [17875] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    STATE(69), 1,
      sym_inline_agic,
    STATE(512), 1,
      sym_runnable,
    STATE(637), 1,
      sym_par_clause,
  [17897] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    STATE(247), 1,
      sym_inline_agic,
    STATE(487), 1,
      sym_runnable,
    STATE(606), 1,
      sym_par_clause,
  [17919] = 3,
    STATE(712), 1,
      sym_directive_op,
    ACTIONS(1349), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
    ACTIONS(1402), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [17933] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    STATE(107), 1,
      sym_inline_agic,
    STATE(520), 1,
      sym_runnable,
    STATE(586), 1,
      sym_par_clause,
  [17955] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    STATE(159), 1,
      sym_inline_agic,
    STATE(475), 1,
      sym_runnable,
    STATE(632), 1,
      sym_par_clause,
  [17977] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    STATE(231), 1,
      sym_inline_agic,
    STATE(483), 1,
      sym_runnable,
    STATE(594), 1,
      sym_par_clause,
  [17999] = 7,
    ACTIONS(1313), 1,
      sym_flow_par_keyword,
    ACTIONS(1319), 1,
      sym_snake_name,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    STATE(60), 1,
      sym_inline_agic,
    STATE(508), 1,
      sym_runnable,
    STATE(627), 1,
      sym_par_clause,
  [18021] = 1,
    ACTIONS(1408), 6,
      sym_newline,
      sym_inline_comment,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      aux_sym_directive_value_token1,
  [18030] = 1,
    ACTIONS(1410), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18039] = 1,
    ACTIONS(1412), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18048] = 1,
    ACTIONS(1414), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18057] = 6,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    ACTIONS(1420), 1,
      sym_lparen,
    ACTIONS(1422), 1,
      sym_snake_name,
    STATE(532), 1,
      sym_flow_name,
    STATE(673), 1,
      sym_params,
  [18076] = 1,
    ACTIONS(1424), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18085] = 1,
    ACTIONS(1426), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18094] = 1,
    ACTIONS(1428), 6,
      sym_newline,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18103] = 6,
    ACTIONS(1420), 1,
      sym_lparen,
    ACTIONS(1430), 1,
      sym_arrow,
    ACTIONS(1432), 1,
      sym_colon,
    ACTIONS(1434), 1,
      sym_snake_name,
    STATE(525), 1,
      sym_agic_name,
    STATE(683), 1,
      sym_params,
  [18122] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_line_end,
    STATE(590), 1,
      sym_par_clause,
  [18138] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
    STATE(654), 1,
      sym_par_clause,
  [18154] = 5,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(140), 1,
      sym_inline_agic,
    STATE(595), 1,
      sym_runnable,
  [18170] = 5,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(149), 1,
      sym_inline_agic,
    STATE(624), 1,
      sym_runnable,
  [18186] = 5,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(241), 1,
      sym_inline_agic,
    STATE(604), 1,
      sym_runnable,
  [18202] = 5,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(155), 1,
      sym_inline_agic,
    STATE(628), 1,
      sym_runnable,
  [18218] = 5,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(246), 1,
      sym_inline_agic,
    STATE(605), 1,
      sym_runnable,
  [18234] = 3,
    ACTIONS(1438), 1,
      sym_snake_name,
    STATE(490), 1,
      sym_agent,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18246] = 5,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(252), 1,
      sym_line_end,
    STATE(607), 1,
      sym_par_clause,
  [18262] = 5,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(259), 1,
      sym_line_end,
    STATE(655), 1,
      sym_par_clause,
  [18278] = 5,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(262), 1,
      sym_line_end,
    STATE(609), 1,
      sym_par_clause,
  [18294] = 5,
    ACTIONS(1440), 1,
      sym_blank_line,
    ACTIONS(1442), 1,
      sym__nested_indented_raw_text,
    STATE(35), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(54), 1,
      sym__nested_text_body_line,
    STATE(139), 1,
      sym__nested_text_body,
  [18310] = 5,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(221), 1,
      sym_line_end,
    STATE(613), 1,
      sym_par_clause,
  [18326] = 5,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(226), 1,
      sym_line_end,
    STATE(614), 1,
      sym_par_clause,
  [18342] = 5,
    ACTIONS(1444), 1,
      sym_blank_line,
    ACTIONS(1446), 1,
      sym__nested_indented_raw_text,
    STATE(208), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(277), 1,
      sym__nested_text_body_line,
    STATE(295), 1,
      sym__nested_text_body,
  [18358] = 5,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(133), 1,
      sym_inline_agic,
    STATE(581), 1,
      sym_runnable,
  [18374] = 4,
    ACTIONS(1450), 1,
      sym_rparen,
    STATE(539), 1,
      sym_param_name,
    STATE(570), 1,
      sym_param,
    ACTIONS(1448), 2,
      anon_sym__,
      sym_snake_name,
  [18388] = 5,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(135), 1,
      sym_inline_agic,
    STATE(583), 1,
      sym_runnable,
  [18404] = 5,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1452), 1,
      sym_newline,
    ACTIONS(1454), 1,
      sym_inline_comment,
    STATE(236), 1,
      sym_line_end,
    STATE(600), 1,
      sym_text_line,
  [18420] = 4,
    ACTIONS(989), 1,
      sym_indented_raw_text,
    ACTIONS(1456), 1,
      sym_blank_line,
    STATE(353), 1,
      sym_text_body,
    STATE(311), 2,
      sym_text_body_line,
      aux_sym_text_body_repeat1,
  [18434] = 3,
    ACTIONS(1458), 1,
      sym_colon,
    STATE(564), 1,
      sym_text_ref,
    ACTIONS(1351), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18446] = 3,
    ACTIONS(1460), 1,
      sym_integer_literal,
    ACTIONS(1462), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18458] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_line_end,
    STATE(598), 1,
      sym_par_clause,
  [18474] = 5,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1464), 1,
      sym_newline,
    ACTIONS(1466), 1,
      sym_inline_comment,
    STATE(63), 1,
      sym_line_end,
    STATE(633), 1,
      sym_text_line,
  [18490] = 5,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(215), 1,
      sym_inline_agic,
    STATE(593), 1,
      sym_runnable,
  [18506] = 5,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(56), 1,
      sym_inline_agic,
    STATE(618), 1,
      sym_runnable,
  [18522] = 5,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(58), 1,
      sym_inline_agic,
    STATE(625), 1,
      sym_runnable,
  [18538] = 5,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(59), 1,
      sym_inline_agic,
    STATE(626), 1,
      sym_runnable,
  [18554] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
    STATE(601), 1,
      sym_par_clause,
  [18570] = 3,
    ACTIONS(1468), 1,
      sym_colon,
    STATE(562), 1,
      sym_text_ref,
    ACTIONS(1351), 3,
      anon_sym_default,
      anon_sym_none,
      sym_snake_name,
  [18582] = 5,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(66), 1,
      sym_inline_agic,
    STATE(635), 1,
      sym_runnable,
  [18598] = 5,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(68), 1,
      sym_inline_agic,
    STATE(636), 1,
      sym_runnable,
  [18614] = 5,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(229), 1,
      sym_inline_agic,
    STATE(585), 1,
      sym_runnable,
  [18630] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(73), 1,
      sym_line_end,
    STATE(638), 1,
      sym_par_clause,
  [18646] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(639), 1,
      sym_par_clause,
  [18662] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
    STATE(640), 1,
      sym_par_clause,
  [18678] = 5,
    ACTIONS(1470), 1,
      sym_blank_line,
    ACTIONS(1472), 1,
      sym__nested_indented_raw_text,
    STATE(190), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(206), 1,
      sym__nested_text_body_line,
    STATE(253), 1,
      sym__nested_text_body,
  [18694] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(89), 1,
      sym_line_end,
    STATE(643), 1,
      sym_par_clause,
  [18710] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(644), 1,
      sym_par_clause,
  [18726] = 5,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1474), 1,
      sym_newline,
    ACTIONS(1476), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
    STATE(558), 1,
      sym_text_line,
  [18742] = 5,
    ACTIONS(1478), 1,
      sym_blank_line,
    ACTIONS(1480), 1,
      sym__nested_indented_raw_text,
    STATE(22), 1,
      aux_sym__nested_text_body_repeat1,
    STATE(40), 1,
      sym__nested_text_body_line,
    STATE(103), 1,
      sym__nested_text_body,
  [18758] = 3,
    ACTIONS(1438), 1,
      sym_snake_name,
    STATE(479), 1,
      sym_agent,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18770] = 3,
    ACTIONS(1438), 1,
      sym_snake_name,
    STATE(505), 1,
      sym_agent,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18782] = 5,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    ACTIONS(1436), 1,
      sym_snake_name,
    STATE(214), 1,
      sym_inline_agic,
    STATE(592), 1,
      sym_runnable,
  [18798] = 3,
    ACTIONS(1482), 1,
      sym_integer_literal,
    ACTIONS(1484), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18810] = 5,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(116), 1,
      sym_line_end,
    STATE(650), 1,
      sym_par_clause,
  [18826] = 3,
    ACTIONS(1486), 1,
      sym_integer_literal,
    ACTIONS(1488), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18838] = 5,
    ACTIONS(734), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1490), 1,
      sym_newline,
    ACTIONS(1492), 1,
      sym_inline_comment,
    STATE(286), 1,
      sym_line_end,
    STATE(577), 1,
      sym_text_line,
  [18854] = 1,
    ACTIONS(1494), 5,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_flow_top_keyword,
      sym_flow_bottom_keyword,
  [18862] = 2,
    ACTIONS(1496), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18871] = 4,
    ACTIONS(1420), 1,
      sym_lparen,
    ACTIONS(1498), 1,
      sym_arrow,
    ACTIONS(1500), 1,
      sym_colon,
    STATE(663), 1,
      sym_params,
  [18884] = 4,
    ACTIONS(1343), 1,
      sym_colon,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(143), 1,
      sym_inline_agic_body,
    STATE(681), 1,
      sym_par_clause,
  [18897] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(350), 1,
      sym__cap_definition,
  [18910] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(351), 1,
      sym__cap_definition,
  [18923] = 2,
    ACTIONS(1506), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [18932] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(352), 1,
      sym__cap_definition,
  [18945] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_line_end,
    STATE(347), 1,
      sym__cap_definition,
  [18958] = 4,
    ACTIONS(1420), 1,
      sym_lparen,
    ACTIONS(1508), 1,
      sym_arrow,
    ACTIONS(1510), 1,
      sym_colon,
    STATE(680), 1,
      sym_params,
  [18971] = 4,
    ACTIONS(1347), 1,
      sym_colon,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(81), 1,
      sym_inline_agic_body,
    STATE(685), 1,
      sym_par_clause,
  [18984] = 1,
    ACTIONS(1512), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [18991] = 4,
    ACTIONS(1349), 1,
      aux_sym_directive_value_token1,
    ACTIONS(1514), 1,
      sym_newline,
    ACTIONS(1516), 1,
      sym_inline_comment,
    STATE(364), 1,
      sym_line_end,
  [19004] = 2,
    STATE(700), 1,
      sym_directive_op,
    ACTIONS(1518), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19013] = 4,
    ACTIONS(1345), 1,
      sym_colon,
    ACTIONS(1374), 1,
      sym_flow_par_keyword,
    STATE(265), 1,
      sym_inline_agic_body,
    STATE(679), 1,
      sym_par_clause,
  [19026] = 2,
    ACTIONS(1520), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19035] = 3,
    ACTIONS(1522), 1,
      sym_optional_marker,
    ACTIONS(1524), 1,
      sym_colon,
    ACTIONS(1526), 2,
      sym_rparen,
      sym_comma,
  [19046] = 1,
    ACTIONS(1528), 4,
      sym_newline,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
  [19053] = 2,
    ACTIONS(1530), 1,
      sym_colon,
    ACTIONS(1349), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19062] = 2,
    ACTIONS(1532), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19071] = 1,
    ACTIONS(1534), 4,
      sym_newline,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [19078] = 2,
    ACTIONS(1536), 1,
      sym_colon,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19087] = 2,
    ACTIONS(1538), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19096] = 2,
    ACTIONS(1540), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19105] = 3,
    STATE(539), 1,
      sym_param_name,
    STATE(717), 1,
      sym_param,
    ACTIONS(1448), 2,
      anon_sym__,
      sym_snake_name,
  [19116] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(303), 1,
      sym_line_end,
    STATE(380), 1,
      sym_job_body,
  [19129] = 2,
    ACTIONS(1542), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19138] = 2,
    ACTIONS(1544), 1,
      sym_integer_literal,
    ACTIONS(975), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19147] = 4,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(303), 1,
      sym_line_end,
    STATE(381), 1,
      sym_job_body,
  [19160] = 2,
    STATE(712), 1,
      sym_directive_op,
    ACTIONS(1518), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19169] = 2,
    ACTIONS(597), 1,
      sym_comment_line,
    ACTIONS(595), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19178] = 2,
    ACTIONS(397), 1,
      sym_comment_line,
    ACTIONS(395), 3,
      sym_blank_line,
      sym_doc_line,
      sym_snake_name,
  [19187] = 1,
    ACTIONS(1546), 4,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
      sym_colon,
  [19194] = 3,
    ACTIONS(1548), 1,
      sym_newline,
    ACTIONS(1550), 1,
      sym_inline_comment,
    STATE(383), 1,
      sym_line_end,
  [19204] = 3,
    ACTIONS(1552), 1,
      sym_newline,
    ACTIONS(1554), 1,
      sym_inline_comment,
    STATE(342), 1,
      sym_line_end,
  [19214] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(154), 1,
      sym_line_end,
  [19224] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
  [19234] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
  [19244] = 3,
    ACTIONS(1560), 1,
      aux_sym_directive_value_token1,
    STATE(622), 1,
      sym_property_value,
    STATE(661), 1,
      sym_text_line,
  [19254] = 3,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1564), 1,
      sym_inline_comment,
    STATE(291), 1,
      sym_line_end,
  [19264] = 3,
    ACTIONS(1566), 1,
      sym_colon,
    ACTIONS(1568), 1,
      sym_snake_name,
    STATE(741), 1,
      sym_context_name,
  [19274] = 3,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1564), 1,
      sym_inline_comment,
    STATE(293), 1,
      sym_line_end,
  [19284] = 1,
    ACTIONS(1570), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [19290] = 3,
    ACTIONS(1572), 1,
      sym_colon,
    ACTIONS(1574), 1,
      sym_snake_name,
    STATE(725), 1,
      sym_instruct_name,
  [19300] = 3,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1564), 1,
      sym_inline_comment,
    STATE(280), 1,
      sym_line_end,
  [19310] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(184), 1,
      sym_line_end,
  [19320] = 3,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1564), 1,
      sym_inline_comment,
    STATE(281), 1,
      sym_line_end,
  [19330] = 3,
    ACTIONS(1580), 1,
      sym_rparen,
    ACTIONS(1582), 1,
      sym_comma,
    STATE(572), 1,
      aux_sym_params_repeat1,
  [19340] = 1,
    ACTIONS(1584), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19346] = 3,
    ACTIONS(1582), 1,
      sym_comma,
    ACTIONS(1586), 1,
      sym_rparen,
    STATE(579), 1,
      aux_sym_params_repeat1,
  [19356] = 2,
    ACTIONS(1588), 1,
      sym_colon,
    ACTIONS(1590), 2,
      sym_rparen,
      sym_comma,
  [19364] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(183), 1,
      sym_line_end,
  [19374] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(182), 1,
      sym_line_end,
  [19384] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
  [19394] = 3,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1564), 1,
      sym_inline_comment,
    STATE(288), 1,
      sym_line_end,
  [19404] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
  [19414] = 3,
    ACTIONS(1592), 1,
      sym_rparen,
    ACTIONS(1594), 1,
      sym_comma,
    STATE(579), 1,
      aux_sym_params_repeat1,
  [19424] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_line_end,
  [19434] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_line_end,
  [19444] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
  [19454] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
  [19464] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(180), 1,
      sym_line_end,
  [19474] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(240), 1,
      sym_line_end,
  [19484] = 3,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    STATE(115), 1,
      sym_inline_agic,
  [19494] = 3,
    ACTIONS(1548), 1,
      sym_newline,
    ACTIONS(1550), 1,
      sym_inline_comment,
    STATE(364), 1,
      sym_line_end,
  [19504] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
  [19514] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
  [19524] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_line_end,
  [19534] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
  [19544] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(248), 1,
      sym_line_end,
  [19554] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(249), 1,
      sym_line_end,
  [19564] = 3,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    STATE(250), 1,
      sym_inline_agic,
  [19574] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
  [19584] = 1,
    ACTIONS(1597), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [19590] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(258), 1,
      sym_line_end,
  [19600] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(118), 1,
      sym_line_end,
  [19610] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(261), 1,
      sym_line_end,
  [19620] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(213), 1,
      sym_line_end,
  [19630] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(119), 1,
      sym_line_end,
  [19640] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
  [19650] = 3,
    ACTIONS(1599), 1,
      sym_newline,
    ACTIONS(1601), 1,
      sym_inline_comment,
    STATE(173), 1,
      sym_line_end,
  [19660] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(218), 1,
      sym_line_end,
  [19670] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(219), 1,
      sym_line_end,
  [19680] = 3,
    ACTIONS(1398), 1,
      sym_arrow,
    ACTIONS(1400), 1,
      sym_colon,
    STATE(220), 1,
      sym_inline_agic,
  [19690] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(222), 1,
      sym_line_end,
  [19700] = 3,
    ACTIONS(1548), 1,
      sym_newline,
    ACTIONS(1550), 1,
      sym_inline_comment,
    STATE(359), 1,
      sym_line_end,
  [19710] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(224), 1,
      sym_line_end,
  [19720] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(226), 1,
      sym_line_end,
  [19730] = 3,
    ACTIONS(1603), 1,
      sym_pascal_name,
    STATE(722), 1,
      sym_struct_name,
    STATE(772), 1,
      sym_type_name,
  [19740] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
  [19750] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(211), 1,
      sym_line_end,
  [19760] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(230), 1,
      sym_line_end,
  [19770] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
  [19780] = 1,
    ACTIONS(1609), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [19786] = 1,
    ACTIONS(1408), 3,
      sym_newline,
      sym_inline_comment,
      aux_sym_directive_value_token1,
  [19792] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(65), 1,
      sym_line_end,
  [19802] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
  [19812] = 3,
    ACTIONS(1611), 1,
      sym_newline,
    ACTIONS(1613), 1,
      sym_inline_comment,
    STATE(457), 1,
      sym_line_end,
  [19822] = 3,
    ACTIONS(1552), 1,
      sym_newline,
    ACTIONS(1554), 1,
      sym_inline_comment,
    STATE(345), 1,
      sym_line_end,
  [19832] = 3,
    ACTIONS(1502), 1,
      sym_newline,
    ACTIONS(1504), 1,
      sym_inline_comment,
    STATE(329), 1,
      sym_line_end,
  [19842] = 3,
    ACTIONS(1560), 1,
      aux_sym_directive_value_token1,
    STATE(556), 1,
      sym_cap_ref,
    STATE(713), 1,
      sym_text_line,
  [19852] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
  [19862] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_line_end,
  [19872] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(71), 1,
      sym_line_end,
  [19882] = 3,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    STATE(72), 1,
      sym_inline_agic,
  [19892] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(145), 1,
      sym_line_end,
  [19902] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(76), 1,
      sym_line_end,
  [19912] = 3,
    ACTIONS(1576), 1,
      sym_newline,
    ACTIONS(1578), 1,
      sym_inline_comment,
    STATE(181), 1,
      sym_line_end,
  [19922] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
  [19932] = 3,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
    STATE(147), 1,
      sym_inline_agic,
  [19942] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
  [19952] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(256), 1,
      sym_line_end,
  [19962] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_line_end,
  [19972] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(87), 1,
      sym_line_end,
  [19982] = 3,
    ACTIONS(1394), 1,
      sym_arrow,
    ACTIONS(1396), 1,
      sym_colon,
    STATE(88), 1,
      sym_inline_agic,
  [19992] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
  [20002] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
  [20012] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
  [20022] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
  [20032] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
  [20042] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_line_end,
  [20052] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
  [20062] = 3,
    ACTIONS(1382), 1,
      sym_newline,
    ACTIONS(1384), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym_line_end,
  [20072] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
  [20082] = 3,
    ACTIONS(1556), 1,
      sym_newline,
    ACTIONS(1558), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
  [20092] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
  [20102] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
  [20112] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
  [20122] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
  [20132] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
  [20142] = 3,
    ACTIONS(1605), 1,
      sym_newline,
    ACTIONS(1607), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
  [20152] = 3,
    ACTIONS(1378), 1,
      sym_newline,
    ACTIONS(1380), 1,
      sym_inline_comment,
    STATE(127), 1,
      sym_line_end,
  [20162] = 3,
    ACTIONS(1370), 1,
      sym_newline,
    ACTIONS(1372), 1,
      sym_inline_comment,
    STATE(223), 1,
      sym_line_end,
  [20172] = 2,
    ACTIONS(1615), 1,
      sym_indented_raw_text,
    STATE(199), 1,
      sym_text_body_line,
  [20179] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(260), 1,
      sym_inline_agic_body,
  [20186] = 2,
    ACTIONS(1617), 1,
      sym__snake_kebab_name,
    STATE(778), 1,
      sym_cap_name,
  [20193] = 1,
    ACTIONS(1619), 2,
      sym_arrow,
      sym_colon,
  [20198] = 2,
    ACTIONS(1621), 1,
      sym_snake_name,
    STATE(490), 1,
      sym_agent,
  [20205] = 1,
    ACTIONS(1623), 2,
      sym_newline,
      sym_inline_comment,
  [20210] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(265), 1,
      sym_inline_agic_body,
  [20217] = 2,
    ACTIONS(1625), 1,
      sym_arrow,
    ACTIONS(1627), 1,
      sym_colon,
  [20224] = 2,
    ACTIONS(1617), 1,
      sym__snake_kebab_name,
    STATE(757), 1,
      sym_cap_name,
  [20231] = 2,
    ACTIONS(1629), 1,
      sym__snake_kebab_name,
    STATE(760), 1,
      sym_job_name,
  [20238] = 2,
    ACTIONS(595), 1,
      sym__nested_indented_raw_text,
    ACTIONS(597), 1,
      sym_blank_line,
  [20245] = 2,
    ACTIONS(395), 1,
      sym__nested_indented_raw_text,
    ACTIONS(397), 1,
      sym_blank_line,
  [20252] = 1,
    ACTIONS(1631), 2,
      sym_newline,
      sym_inline_comment,
  [20257] = 2,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(75), 1,
      sym_inline_agic_body,
  [20264] = 1,
    ACTIONS(1633), 2,
      sym_rparen,
      sym_comma,
  [20269] = 2,
    ACTIONS(1629), 1,
      sym__snake_kebab_name,
    STATE(761), 1,
      sym_job_name,
  [20276] = 2,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(78), 1,
      sym_inline_agic_body,
  [20283] = 2,
    ACTIONS(1635), 1,
      sym_arrow,
    ACTIONS(1637), 1,
      sym_colon,
  [20290] = 2,
    ACTIONS(1639), 1,
      anon_sym_EQ,
    STATE(561), 1,
      sym_assign_operator,
  [20297] = 2,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(81), 1,
      sym_inline_agic_body,
  [20304] = 2,
    ACTIONS(1641), 1,
      sym_indented_raw_text,
    STATE(279), 1,
      sym__unroled_message_continuation_line,
  [20311] = 2,
    ACTIONS(1617), 1,
      sym__snake_kebab_name,
    STATE(770), 1,
      sym_cap_name,
  [20318] = 1,
    ACTIONS(1643), 2,
      sym_newline,
      sym_inline_comment,
  [20323] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(225), 1,
      sym_inline_agic_body,
  [20330] = 2,
    ACTIONS(1645), 1,
      sym_arrow,
    ACTIONS(1647), 1,
      sym_colon,
  [20337] = 2,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(120), 1,
      sym_inline_agic_body,
  [20344] = 1,
    ACTIONS(1649), 2,
      sym_arrow,
      sym_colon,
  [20349] = 2,
    ACTIONS(1651), 1,
      sym_arrow,
    ACTIONS(1653), 1,
      sym_colon,
  [20356] = 1,
    ACTIONS(1655), 2,
      sym_newline,
      sym_inline_comment,
  [20361] = 2,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(93), 1,
      sym_inline_agic_body,
  [20368] = 1,
    ACTIONS(1657), 2,
      sym_arrow,
      sym_colon,
  [20373] = 2,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(151), 1,
      sym_inline_agic_body,
  [20380] = 2,
    ACTIONS(1659), 1,
      sym_flow_until_keyword,
    STATE(233), 1,
      sym_until_statement,
  [20387] = 1,
    ACTIONS(597), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20392] = 2,
    ACTIONS(1661), 1,
      sym_indented_raw_text,
    STATE(51), 1,
      sym_text_body_line,
  [20399] = 2,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(132), 1,
      sym_inline_agic_body,
  [20406] = 2,
    ACTIONS(1663), 1,
      sym_flow_until_keyword,
    STATE(99), 1,
      sym_until_statement,
  [20413] = 2,
    ACTIONS(1665), 1,
      sym_indented_raw_text,
    STATE(43), 1,
      sym_text_body_line,
  [20420] = 2,
    ACTIONS(1347), 1,
      sym_colon,
    STATE(101), 1,
      sym_inline_agic_body,
  [20427] = 2,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(158), 1,
      sym_inline_agic_body,
  [20434] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(235), 1,
      sym_inline_agic_body,
  [20441] = 1,
    ACTIONS(1667), 2,
      sym_newline,
      sym_inline_comment,
  [20446] = 2,
    ACTIONS(1617), 1,
      sym__snake_kebab_name,
    STATE(780), 1,
      sym_cap_name,
  [20453] = 1,
    ACTIONS(1669), 2,
      sym_optional_marker,
      sym_colon,
  [20458] = 2,
    ACTIONS(1671), 1,
      aux_sym_directive_value_token1,
    STATE(603), 1,
      sym_directive_value,
  [20465] = 2,
    ACTIONS(1621), 1,
      sym_snake_name,
    STATE(479), 1,
      sym_agent,
  [20472] = 2,
    ACTIONS(1673), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_assign_operator,
  [20479] = 2,
    ACTIONS(1675), 1,
      sym_integer_literal,
    ACTIONS(1677), 1,
      sym_colon,
  [20486] = 1,
    ACTIONS(397), 2,
      sym_blank_line,
      sym_indented_raw_text,
  [20491] = 2,
    ACTIONS(1673), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym_assign_operator,
  [20498] = 2,
    ACTIONS(1343), 1,
      sym_colon,
    STATE(143), 1,
      sym_inline_agic_body,
  [20505] = 2,
    ACTIONS(1679), 1,
      sym_optional_marker,
    ACTIONS(1681), 1,
      sym_colon,
  [20512] = 2,
    ACTIONS(1621), 1,
      sym_snake_name,
    STATE(505), 1,
      sym_agent,
  [20519] = 2,
    ACTIONS(1673), 1,
      anon_sym_EQ,
    STATE(209), 1,
      sym_assign_operator,
  [20526] = 1,
    ACTIONS(1683), 2,
      sym_rparen,
      sym_comma,
  [20531] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(255), 1,
      sym_inline_agic_body,
  [20538] = 2,
    ACTIONS(1671), 1,
      aux_sym_directive_value_token1,
    STATE(569), 1,
      sym_directive_value,
  [20545] = 1,
    ACTIONS(1685), 2,
      sym_newline,
      sym_inline_comment,
  [20550] = 2,
    ACTIONS(1687), 1,
      sym_integer_literal,
    ACTIONS(1689), 1,
      sym_colon,
  [20557] = 2,
    ACTIONS(1691), 1,
      sym_flow_until_keyword,
    STATE(130), 1,
      sym_until_statement,
  [20564] = 2,
    ACTIONS(1693), 1,
      sym_integer_literal,
    ACTIONS(1695), 1,
      sym_colon,
  [20571] = 1,
    ACTIONS(1697), 2,
      sym_rparen,
      sym_comma,
  [20576] = 1,
    ACTIONS(1699), 1,
      sym_colon,
  [20580] = 1,
    ACTIONS(1701), 1,
      sym_colon,
  [20584] = 1,
    ACTIONS(1703), 1,
      sym_integer_literal,
  [20588] = 1,
    ACTIONS(1705), 1,
      sym_colon,
  [20592] = 1,
    ACTIONS(1707), 1,
      sym_colon,
  [20596] = 1,
    ACTIONS(1709), 1,
      sym_newline,
  [20600] = 1,
    ACTIONS(1711), 1,
      sym_newline,
  [20604] = 1,
    ACTIONS(1713), 1,
      sym_colon,
  [20608] = 1,
    ACTIONS(1715), 1,
      sym_colon,
  [20612] = 1,
    ACTIONS(1717), 1,
      sym_colon,
  [20616] = 1,
    ACTIONS(1719), 1,
      sym_newline,
  [20620] = 1,
    ACTIONS(1721), 1,
      sym_colon,
  [20624] = 1,
    ACTIONS(1723), 1,
      anon_sym_EQ,
  [20628] = 1,
    ACTIONS(1725), 1,
      sym_colon,
  [20632] = 1,
    ACTIONS(1727), 1,
      sym_newline,
  [20636] = 1,
    ACTIONS(1729), 1,
      sym_colon,
  [20640] = 1,
    ACTIONS(1731), 1,
      sym_newline,
  [20644] = 1,
    ACTIONS(1733), 1,
      sym_newline,
  [20648] = 1,
    ACTIONS(1735), 1,
      sym_newline,
  [20652] = 1,
    ACTIONS(1737), 1,
      sym_integer_literal,
  [20656] = 1,
    ACTIONS(1739), 1,
      sym_newline,
  [20660] = 1,
    ACTIONS(1741), 1,
      sym_newline,
  [20664] = 1,
    ACTIONS(1743), 1,
      sym_colon,
  [20668] = 1,
    ACTIONS(1745), 1,
      sym_colon,
  [20672] = 1,
    ACTIONS(1747), 1,
      sym_newline,
  [20676] = 1,
    ACTIONS(1749), 1,
      sym_newline,
  [20680] = 1,
    ACTIONS(1751), 1,
      aux_sym_directive_value_token1,
  [20684] = 1,
    ACTIONS(1753), 1,
      sym_integer_literal,
  [20688] = 1,
    ACTIONS(1755), 1,
      sym_newline,
  [20692] = 1,
    ACTIONS(1757), 1,
      sym_newline,
  [20696] = 1,
    ACTIONS(1759), 1,
      sym_newline,
  [20700] = 1,
    ACTIONS(1761), 1,
      sym_newline,
  [20704] = 1,
    ACTIONS(1763), 1,
      sym_newline,
  [20708] = 1,
    ACTIONS(1765), 1,
      sym_newline,
  [20712] = 1,
    ACTIONS(1767), 1,
      sym_newline,
  [20716] = 1,
    ACTIONS(1769), 1,
      sym_newline,
  [20720] = 1,
    ACTIONS(1771), 1,
      sym_newline,
  [20724] = 1,
    ACTIONS(1773), 1,
      sym_newline,
  [20728] = 1,
    ACTIONS(1775), 1,
      sym_newline,
  [20732] = 1,
    ACTIONS(1777), 1,
      sym_colon,
  [20736] = 1,
    ACTIONS(1779), 1,
      sym_colon,
  [20740] = 1,
    ACTIONS(1781), 1,
      sym_integer_literal,
  [20744] = 1,
    ACTIONS(1783), 1,
      sym_colon,
  [20748] = 1,
    ACTIONS(1785), 1,
      sym_colon,
  [20752] = 1,
    ACTIONS(1787), 1,
      sym_newline,
  [20756] = 1,
    ACTIONS(1789), 1,
      sym_colon,
  [20760] = 1,
    ACTIONS(1791), 1,
      sym_integer_literal,
  [20764] = 1,
    ACTIONS(1793), 1,
      sym_integer_literal,
  [20768] = 1,
    ACTIONS(1795), 1,
      sym_colon,
  [20772] = 1,
    ACTIONS(1797), 1,
      sym_colon,
  [20776] = 1,
    ACTIONS(1799), 1,
      sym_colon,
  [20780] = 1,
    ACTIONS(1801), 1,
      aux_sym_directive_value_token1,
  [20784] = 1,
    ACTIONS(1803), 1,
      sym_colon,
  [20788] = 1,
    ACTIONS(1805), 1,
      sym_newline,
  [20792] = 1,
    ACTIONS(1807), 1,
      sym_colon,
  [20796] = 1,
    ACTIONS(1809), 1,
      sym_cap_kind,
  [20800] = 1,
    ACTIONS(1811), 1,
      sym_integer_literal,
  [20804] = 1,
    ACTIONS(1813), 1,
      sym_colon,
  [20808] = 1,
    ACTIONS(1815), 1,
      sym_integer_literal,
  [20812] = 1,
    ACTIONS(1817), 1,
      sym_integer_literal,
  [20816] = 1,
    ACTIONS(1819), 1,
      sym_colon,
  [20820] = 1,
    ACTIONS(1821), 1,
      sym_newline,
  [20824] = 1,
    ACTIONS(1823), 1,
      sym_colon,
  [20828] = 1,
    ACTIONS(1825), 1,
      sym_colon,
  [20832] = 1,
    ACTIONS(1827), 1,
      sym_colon,
  [20836] = 1,
    ACTIONS(1829), 1,
      sym_colon,
  [20840] = 1,
    ACTIONS(1831), 1,
      sym_newline,
  [20844] = 1,
    ACTIONS(1833), 1,
      ts_builtin_sym_end,
  [20848] = 1,
    ACTIONS(1835), 1,
      sym_colon,
  [20852] = 1,
    ACTIONS(1837), 1,
      sym_colon,
  [20856] = 1,
    ACTIONS(1839), 1,
      sym_newline,
  [20860] = 1,
    ACTIONS(1841), 1,
      sym_colon,
  [20864] = 1,
    ACTIONS(1843), 1,
      sym_colon,
  [20868] = 1,
    ACTIONS(1845), 1,
      anon_sym_EQ,
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
  [SMALL_STATE(186)] = 9329,
  [SMALL_STATE(187)] = 9405,
  [SMALL_STATE(188)] = 9449,
  [SMALL_STATE(189)] = 9493,
  [SMALL_STATE(190)] = 9537,
  [SMALL_STATE(191)] = 9583,
  [SMALL_STATE(192)] = 9630,
  [SMALL_STATE(193)] = 9671,
  [SMALL_STATE(194)] = 9712,
  [SMALL_STATE(195)] = 9759,
  [SMALL_STATE(196)] = 9806,
  [SMALL_STATE(197)] = 9842,
  [SMALL_STATE(198)] = 9916,
  [SMALL_STATE(199)] = 9956,
  [SMALL_STATE(200)] = 9992,
  [SMALL_STATE(201)] = 10038,
  [SMALL_STATE(202)] = 10084,
  [SMALL_STATE(203)] = 10120,
  [SMALL_STATE(204)] = 10166,
  [SMALL_STATE(205)] = 10212,
  [SMALL_STATE(206)] = 10248,
  [SMALL_STATE(207)] = 10284,
  [SMALL_STATE(208)] = 10330,
  [SMALL_STATE(209)] = 10376,
  [SMALL_STATE(210)] = 10450,
  [SMALL_STATE(211)] = 10524,
  [SMALL_STATE(212)] = 10559,
  [SMALL_STATE(213)] = 10594,
  [SMALL_STATE(214)] = 10629,
  [SMALL_STATE(215)] = 10664,
  [SMALL_STATE(216)] = 10699,
  [SMALL_STATE(217)] = 10734,
  [SMALL_STATE(218)] = 10769,
  [SMALL_STATE(219)] = 10804,
  [SMALL_STATE(220)] = 10839,
  [SMALL_STATE(221)] = 10874,
  [SMALL_STATE(222)] = 10909,
  [SMALL_STATE(223)] = 10944,
  [SMALL_STATE(224)] = 10979,
  [SMALL_STATE(225)] = 11014,
  [SMALL_STATE(226)] = 11049,
  [SMALL_STATE(227)] = 11084,
  [SMALL_STATE(228)] = 11119,
  [SMALL_STATE(229)] = 11154,
  [SMALL_STATE(230)] = 11189,
  [SMALL_STATE(231)] = 11224,
  [SMALL_STATE(232)] = 11259,
  [SMALL_STATE(233)] = 11294,
  [SMALL_STATE(234)] = 11329,
  [SMALL_STATE(235)] = 11364,
  [SMALL_STATE(236)] = 11399,
  [SMALL_STATE(237)] = 11434,
  [SMALL_STATE(238)] = 11479,
  [SMALL_STATE(239)] = 11514,
  [SMALL_STATE(240)] = 11555,
  [SMALL_STATE(241)] = 11590,
  [SMALL_STATE(242)] = 11625,
  [SMALL_STATE(243)] = 11670,
  [SMALL_STATE(244)] = 11715,
  [SMALL_STATE(245)] = 11750,
  [SMALL_STATE(246)] = 11785,
  [SMALL_STATE(247)] = 11820,
  [SMALL_STATE(248)] = 11855,
  [SMALL_STATE(249)] = 11890,
  [SMALL_STATE(250)] = 11925,
  [SMALL_STATE(251)] = 11960,
  [SMALL_STATE(252)] = 12001,
  [SMALL_STATE(253)] = 12036,
  [SMALL_STATE(254)] = 12071,
  [SMALL_STATE(255)] = 12106,
  [SMALL_STATE(256)] = 12141,
  [SMALL_STATE(257)] = 12176,
  [SMALL_STATE(258)] = 12243,
  [SMALL_STATE(259)] = 12278,
  [SMALL_STATE(260)] = 12313,
  [SMALL_STATE(261)] = 12348,
  [SMALL_STATE(262)] = 12383,
  [SMALL_STATE(263)] = 12418,
  [SMALL_STATE(264)] = 12459,
  [SMALL_STATE(265)] = 12526,
  [SMALL_STATE(266)] = 12561,
  [SMALL_STATE(267)] = 12596,
  [SMALL_STATE(268)] = 12631,
  [SMALL_STATE(269)] = 12672,
  [SMALL_STATE(270)] = 12707,
  [SMALL_STATE(271)] = 12742,
  [SMALL_STATE(272)] = 12783,
  [SMALL_STATE(273)] = 12818,
  [SMALL_STATE(274)] = 12853,
  [SMALL_STATE(275)] = 12889,
  [SMALL_STATE(276)] = 12929,
  [SMALL_STATE(277)] = 12969,
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
  [SMALL_STATE(289)] = 13390,
  [SMALL_STATE(290)] = 13425,
  [SMALL_STATE(291)] = 13460,
  [SMALL_STATE(292)] = 13495,
  [SMALL_STATE(293)] = 13530,
  [SMALL_STATE(294)] = 13565,
  [SMALL_STATE(295)] = 13600,
  [SMALL_STATE(296)] = 13635,
  [SMALL_STATE(297)] = 13698,
  [SMALL_STATE(298)] = 13761,
  [SMALL_STATE(299)] = 13824,
  [SMALL_STATE(300)] = 13876,
  [SMALL_STATE(301)] = 13906,
  [SMALL_STATE(302)] = 13936,
  [SMALL_STATE(303)] = 13988,
  [SMALL_STATE(304)] = 14035,
  [SMALL_STATE(305)] = 14082,
  [SMALL_STATE(306)] = 14120,
  [SMALL_STATE(307)] = 14156,
  [SMALL_STATE(308)] = 14184,
  [SMALL_STATE(309)] = 14220,
  [SMALL_STATE(310)] = 14256,
  [SMALL_STATE(311)] = 14287,
  [SMALL_STATE(312)] = 14318,
  [SMALL_STATE(313)] = 14342,
  [SMALL_STATE(314)] = 14370,
  [SMALL_STATE(315)] = 14398,
  [SMALL_STATE(316)] = 14426,
  [SMALL_STATE(317)] = 14454,
  [SMALL_STATE(318)] = 14482,
  [SMALL_STATE(319)] = 14510,
  [SMALL_STATE(320)] = 14538,
  [SMALL_STATE(321)] = 14566,
  [SMALL_STATE(322)] = 14590,
  [SMALL_STATE(323)] = 14618,
  [SMALL_STATE(324)] = 14646,
  [SMALL_STATE(325)] = 14674,
  [SMALL_STATE(326)] = 14702,
  [SMALL_STATE(327)] = 14730,
  [SMALL_STATE(328)] = 14752,
  [SMALL_STATE(329)] = 14774,
  [SMALL_STATE(330)] = 14798,
  [SMALL_STATE(331)] = 14826,
  [SMALL_STATE(332)] = 14854,
  [SMALL_STATE(333)] = 14882,
  [SMALL_STATE(334)] = 14908,
  [SMALL_STATE(335)] = 14936,
  [SMALL_STATE(336)] = 14964,
  [SMALL_STATE(337)] = 14992,
  [SMALL_STATE(338)] = 15020,
  [SMALL_STATE(339)] = 15044,
  [SMALL_STATE(340)] = 15072,
  [SMALL_STATE(341)] = 15100,
  [SMALL_STATE(342)] = 15128,
  [SMALL_STATE(343)] = 15151,
  [SMALL_STATE(344)] = 15174,
  [SMALL_STATE(345)] = 15197,
  [SMALL_STATE(346)] = 15220,
  [SMALL_STATE(347)] = 15243,
  [SMALL_STATE(348)] = 15265,
  [SMALL_STATE(349)] = 15287,
  [SMALL_STATE(350)] = 15309,
  [SMALL_STATE(351)] = 15331,
  [SMALL_STATE(352)] = 15353,
  [SMALL_STATE(353)] = 15375,
  [SMALL_STATE(354)] = 15397,
  [SMALL_STATE(355)] = 15419,
  [SMALL_STATE(356)] = 15441,
  [SMALL_STATE(357)] = 15463,
  [SMALL_STATE(358)] = 15485,
  [SMALL_STATE(359)] = 15507,
  [SMALL_STATE(360)] = 15529,
  [SMALL_STATE(361)] = 15551,
  [SMALL_STATE(362)] = 15573,
  [SMALL_STATE(363)] = 15595,
  [SMALL_STATE(364)] = 15617,
  [SMALL_STATE(365)] = 15639,
  [SMALL_STATE(366)] = 15661,
  [SMALL_STATE(367)] = 15683,
  [SMALL_STATE(368)] = 15705,
  [SMALL_STATE(369)] = 15727,
  [SMALL_STATE(370)] = 15749,
  [SMALL_STATE(371)] = 15771,
  [SMALL_STATE(372)] = 15793,
  [SMALL_STATE(373)] = 15815,
  [SMALL_STATE(374)] = 15837,
  [SMALL_STATE(375)] = 15859,
  [SMALL_STATE(376)] = 15881,
  [SMALL_STATE(377)] = 15903,
  [SMALL_STATE(378)] = 15925,
  [SMALL_STATE(379)] = 15947,
  [SMALL_STATE(380)] = 15969,
  [SMALL_STATE(381)] = 15991,
  [SMALL_STATE(382)] = 16013,
  [SMALL_STATE(383)] = 16035,
  [SMALL_STATE(384)] = 16057,
  [SMALL_STATE(385)] = 16079,
  [SMALL_STATE(386)] = 16097,
  [SMALL_STATE(387)] = 16128,
  [SMALL_STATE(388)] = 16153,
  [SMALL_STATE(389)] = 16184,
  [SMALL_STATE(390)] = 16209,
  [SMALL_STATE(391)] = 16234,
  [SMALL_STATE(392)] = 16259,
  [SMALL_STATE(393)] = 16284,
  [SMALL_STATE(394)] = 16309,
  [SMALL_STATE(395)] = 16334,
  [SMALL_STATE(396)] = 16365,
  [SMALL_STATE(397)] = 16390,
  [SMALL_STATE(398)] = 16415,
  [SMALL_STATE(399)] = 16440,
  [SMALL_STATE(400)] = 16465,
  [SMALL_STATE(401)] = 16490,
  [SMALL_STATE(402)] = 16521,
  [SMALL_STATE(403)] = 16552,
  [SMALL_STATE(404)] = 16577,
  [SMALL_STATE(405)] = 16608,
  [SMALL_STATE(406)] = 16639,
  [SMALL_STATE(407)] = 16670,
  [SMALL_STATE(408)] = 16695,
  [SMALL_STATE(409)] = 16720,
  [SMALL_STATE(410)] = 16751,
  [SMALL_STATE(411)] = 16778,
  [SMALL_STATE(412)] = 16805,
  [SMALL_STATE(413)] = 16832,
  [SMALL_STATE(414)] = 16858,
  [SMALL_STATE(415)] = 16884,
  [SMALL_STATE(416)] = 16910,
  [SMALL_STATE(417)] = 16936,
  [SMALL_STATE(418)] = 16962,
  [SMALL_STATE(419)] = 16988,
  [SMALL_STATE(420)] = 17014,
  [SMALL_STATE(421)] = 17040,
  [SMALL_STATE(422)] = 17066,
  [SMALL_STATE(423)] = 17087,
  [SMALL_STATE(424)] = 17108,
  [SMALL_STATE(425)] = 17125,
  [SMALL_STATE(426)] = 17150,
  [SMALL_STATE(427)] = 17167,
  [SMALL_STATE(428)] = 17184,
  [SMALL_STATE(429)] = 17207,
  [SMALL_STATE(430)] = 17224,
  [SMALL_STATE(431)] = 17247,
  [SMALL_STATE(432)] = 17270,
  [SMALL_STATE(433)] = 17293,
  [SMALL_STATE(434)] = 17316,
  [SMALL_STATE(435)] = 17339,
  [SMALL_STATE(436)] = 17362,
  [SMALL_STATE(437)] = 17385,
  [SMALL_STATE(438)] = 17406,
  [SMALL_STATE(439)] = 17427,
  [SMALL_STATE(440)] = 17450,
  [SMALL_STATE(441)] = 17473,
  [SMALL_STATE(442)] = 17494,
  [SMALL_STATE(443)] = 17519,
  [SMALL_STATE(444)] = 17540,
  [SMALL_STATE(445)] = 17565,
  [SMALL_STATE(446)] = 17586,
  [SMALL_STATE(447)] = 17609,
  [SMALL_STATE(448)] = 17632,
  [SMALL_STATE(449)] = 17655,
  [SMALL_STATE(450)] = 17678,
  [SMALL_STATE(451)] = 17701,
  [SMALL_STATE(452)] = 17724,
  [SMALL_STATE(453)] = 17747,
  [SMALL_STATE(454)] = 17772,
  [SMALL_STATE(455)] = 17789,
  [SMALL_STATE(456)] = 17812,
  [SMALL_STATE(457)] = 17833,
  [SMALL_STATE(458)] = 17854,
  [SMALL_STATE(459)] = 17875,
  [SMALL_STATE(460)] = 17897,
  [SMALL_STATE(461)] = 17919,
  [SMALL_STATE(462)] = 17933,
  [SMALL_STATE(463)] = 17955,
  [SMALL_STATE(464)] = 17977,
  [SMALL_STATE(465)] = 17999,
  [SMALL_STATE(466)] = 18021,
  [SMALL_STATE(467)] = 18030,
  [SMALL_STATE(468)] = 18039,
  [SMALL_STATE(469)] = 18048,
  [SMALL_STATE(470)] = 18057,
  [SMALL_STATE(471)] = 18076,
  [SMALL_STATE(472)] = 18085,
  [SMALL_STATE(473)] = 18094,
  [SMALL_STATE(474)] = 18103,
  [SMALL_STATE(475)] = 18122,
  [SMALL_STATE(476)] = 18138,
  [SMALL_STATE(477)] = 18154,
  [SMALL_STATE(478)] = 18170,
  [SMALL_STATE(479)] = 18186,
  [SMALL_STATE(480)] = 18202,
  [SMALL_STATE(481)] = 18218,
  [SMALL_STATE(482)] = 18234,
  [SMALL_STATE(483)] = 18246,
  [SMALL_STATE(484)] = 18262,
  [SMALL_STATE(485)] = 18278,
  [SMALL_STATE(486)] = 18294,
  [SMALL_STATE(487)] = 18310,
  [SMALL_STATE(488)] = 18326,
  [SMALL_STATE(489)] = 18342,
  [SMALL_STATE(490)] = 18358,
  [SMALL_STATE(491)] = 18374,
  [SMALL_STATE(492)] = 18388,
  [SMALL_STATE(493)] = 18404,
  [SMALL_STATE(494)] = 18420,
  [SMALL_STATE(495)] = 18434,
  [SMALL_STATE(496)] = 18446,
  [SMALL_STATE(497)] = 18458,
  [SMALL_STATE(498)] = 18474,
  [SMALL_STATE(499)] = 18490,
  [SMALL_STATE(500)] = 18506,
  [SMALL_STATE(501)] = 18522,
  [SMALL_STATE(502)] = 18538,
  [SMALL_STATE(503)] = 18554,
  [SMALL_STATE(504)] = 18570,
  [SMALL_STATE(505)] = 18582,
  [SMALL_STATE(506)] = 18598,
  [SMALL_STATE(507)] = 18614,
  [SMALL_STATE(508)] = 18630,
  [SMALL_STATE(509)] = 18646,
  [SMALL_STATE(510)] = 18662,
  [SMALL_STATE(511)] = 18678,
  [SMALL_STATE(512)] = 18694,
  [SMALL_STATE(513)] = 18710,
  [SMALL_STATE(514)] = 18726,
  [SMALL_STATE(515)] = 18742,
  [SMALL_STATE(516)] = 18758,
  [SMALL_STATE(517)] = 18770,
  [SMALL_STATE(518)] = 18782,
  [SMALL_STATE(519)] = 18798,
  [SMALL_STATE(520)] = 18810,
  [SMALL_STATE(521)] = 18826,
  [SMALL_STATE(522)] = 18838,
  [SMALL_STATE(523)] = 18854,
  [SMALL_STATE(524)] = 18862,
  [SMALL_STATE(525)] = 18871,
  [SMALL_STATE(526)] = 18884,
  [SMALL_STATE(527)] = 18897,
  [SMALL_STATE(528)] = 18910,
  [SMALL_STATE(529)] = 18923,
  [SMALL_STATE(530)] = 18932,
  [SMALL_STATE(531)] = 18945,
  [SMALL_STATE(532)] = 18958,
  [SMALL_STATE(533)] = 18971,
  [SMALL_STATE(534)] = 18984,
  [SMALL_STATE(535)] = 18991,
  [SMALL_STATE(536)] = 19004,
  [SMALL_STATE(537)] = 19013,
  [SMALL_STATE(538)] = 19026,
  [SMALL_STATE(539)] = 19035,
  [SMALL_STATE(540)] = 19046,
  [SMALL_STATE(541)] = 19053,
  [SMALL_STATE(542)] = 19062,
  [SMALL_STATE(543)] = 19071,
  [SMALL_STATE(544)] = 19078,
  [SMALL_STATE(545)] = 19087,
  [SMALL_STATE(546)] = 19096,
  [SMALL_STATE(547)] = 19105,
  [SMALL_STATE(548)] = 19116,
  [SMALL_STATE(549)] = 19129,
  [SMALL_STATE(550)] = 19138,
  [SMALL_STATE(551)] = 19147,
  [SMALL_STATE(552)] = 19160,
  [SMALL_STATE(553)] = 19169,
  [SMALL_STATE(554)] = 19178,
  [SMALL_STATE(555)] = 19187,
  [SMALL_STATE(556)] = 19194,
  [SMALL_STATE(557)] = 19204,
  [SMALL_STATE(558)] = 19214,
  [SMALL_STATE(559)] = 19224,
  [SMALL_STATE(560)] = 19234,
  [SMALL_STATE(561)] = 19244,
  [SMALL_STATE(562)] = 19254,
  [SMALL_STATE(563)] = 19264,
  [SMALL_STATE(564)] = 19274,
  [SMALL_STATE(565)] = 19284,
  [SMALL_STATE(566)] = 19290,
  [SMALL_STATE(567)] = 19300,
  [SMALL_STATE(568)] = 19310,
  [SMALL_STATE(569)] = 19320,
  [SMALL_STATE(570)] = 19330,
  [SMALL_STATE(571)] = 19340,
  [SMALL_STATE(572)] = 19346,
  [SMALL_STATE(573)] = 19356,
  [SMALL_STATE(574)] = 19364,
  [SMALL_STATE(575)] = 19374,
  [SMALL_STATE(576)] = 19384,
  [SMALL_STATE(577)] = 19394,
  [SMALL_STATE(578)] = 19404,
  [SMALL_STATE(579)] = 19414,
  [SMALL_STATE(580)] = 19424,
  [SMALL_STATE(581)] = 19434,
  [SMALL_STATE(582)] = 19444,
  [SMALL_STATE(583)] = 19454,
  [SMALL_STATE(584)] = 19464,
  [SMALL_STATE(585)] = 19474,
  [SMALL_STATE(586)] = 19484,
  [SMALL_STATE(587)] = 19494,
  [SMALL_STATE(588)] = 19504,
  [SMALL_STATE(589)] = 19514,
  [SMALL_STATE(590)] = 19524,
  [SMALL_STATE(591)] = 19534,
  [SMALL_STATE(592)] = 19544,
  [SMALL_STATE(593)] = 19554,
  [SMALL_STATE(594)] = 19564,
  [SMALL_STATE(595)] = 19574,
  [SMALL_STATE(596)] = 19584,
  [SMALL_STATE(597)] = 19590,
  [SMALL_STATE(598)] = 19600,
  [SMALL_STATE(599)] = 19610,
  [SMALL_STATE(600)] = 19620,
  [SMALL_STATE(601)] = 19630,
  [SMALL_STATE(602)] = 19640,
  [SMALL_STATE(603)] = 19650,
  [SMALL_STATE(604)] = 19660,
  [SMALL_STATE(605)] = 19670,
  [SMALL_STATE(606)] = 19680,
  [SMALL_STATE(607)] = 19690,
  [SMALL_STATE(608)] = 19700,
  [SMALL_STATE(609)] = 19710,
  [SMALL_STATE(610)] = 19720,
  [SMALL_STATE(611)] = 19730,
  [SMALL_STATE(612)] = 19740,
  [SMALL_STATE(613)] = 19750,
  [SMALL_STATE(614)] = 19760,
  [SMALL_STATE(615)] = 19770,
  [SMALL_STATE(616)] = 19780,
  [SMALL_STATE(617)] = 19786,
  [SMALL_STATE(618)] = 19792,
  [SMALL_STATE(619)] = 19802,
  [SMALL_STATE(620)] = 19812,
  [SMALL_STATE(621)] = 19822,
  [SMALL_STATE(622)] = 19832,
  [SMALL_STATE(623)] = 19842,
  [SMALL_STATE(624)] = 19852,
  [SMALL_STATE(625)] = 19862,
  [SMALL_STATE(626)] = 19872,
  [SMALL_STATE(627)] = 19882,
  [SMALL_STATE(628)] = 19892,
  [SMALL_STATE(629)] = 19902,
  [SMALL_STATE(630)] = 19912,
  [SMALL_STATE(631)] = 19922,
  [SMALL_STATE(632)] = 19932,
  [SMALL_STATE(633)] = 19942,
  [SMALL_STATE(634)] = 19952,
  [SMALL_STATE(635)] = 19962,
  [SMALL_STATE(636)] = 19972,
  [SMALL_STATE(637)] = 19982,
  [SMALL_STATE(638)] = 19992,
  [SMALL_STATE(639)] = 20002,
  [SMALL_STATE(640)] = 20012,
  [SMALL_STATE(641)] = 20022,
  [SMALL_STATE(642)] = 20032,
  [SMALL_STATE(643)] = 20042,
  [SMALL_STATE(644)] = 20052,
  [SMALL_STATE(645)] = 20062,
  [SMALL_STATE(646)] = 20072,
  [SMALL_STATE(647)] = 20082,
  [SMALL_STATE(648)] = 20092,
  [SMALL_STATE(649)] = 20102,
  [SMALL_STATE(650)] = 20112,
  [SMALL_STATE(651)] = 20122,
  [SMALL_STATE(652)] = 20132,
  [SMALL_STATE(653)] = 20142,
  [SMALL_STATE(654)] = 20152,
  [SMALL_STATE(655)] = 20162,
  [SMALL_STATE(656)] = 20172,
  [SMALL_STATE(657)] = 20179,
  [SMALL_STATE(658)] = 20186,
  [SMALL_STATE(659)] = 20193,
  [SMALL_STATE(660)] = 20198,
  [SMALL_STATE(661)] = 20205,
  [SMALL_STATE(662)] = 20210,
  [SMALL_STATE(663)] = 20217,
  [SMALL_STATE(664)] = 20224,
  [SMALL_STATE(665)] = 20231,
  [SMALL_STATE(666)] = 20238,
  [SMALL_STATE(667)] = 20245,
  [SMALL_STATE(668)] = 20252,
  [SMALL_STATE(669)] = 20257,
  [SMALL_STATE(670)] = 20264,
  [SMALL_STATE(671)] = 20269,
  [SMALL_STATE(672)] = 20276,
  [SMALL_STATE(673)] = 20283,
  [SMALL_STATE(674)] = 20290,
  [SMALL_STATE(675)] = 20297,
  [SMALL_STATE(676)] = 20304,
  [SMALL_STATE(677)] = 20311,
  [SMALL_STATE(678)] = 20318,
  [SMALL_STATE(679)] = 20323,
  [SMALL_STATE(680)] = 20330,
  [SMALL_STATE(681)] = 20337,
  [SMALL_STATE(682)] = 20344,
  [SMALL_STATE(683)] = 20349,
  [SMALL_STATE(684)] = 20356,
  [SMALL_STATE(685)] = 20361,
  [SMALL_STATE(686)] = 20368,
  [SMALL_STATE(687)] = 20373,
  [SMALL_STATE(688)] = 20380,
  [SMALL_STATE(689)] = 20387,
  [SMALL_STATE(690)] = 20392,
  [SMALL_STATE(691)] = 20399,
  [SMALL_STATE(692)] = 20406,
  [SMALL_STATE(693)] = 20413,
  [SMALL_STATE(694)] = 20420,
  [SMALL_STATE(695)] = 20427,
  [SMALL_STATE(696)] = 20434,
  [SMALL_STATE(697)] = 20441,
  [SMALL_STATE(698)] = 20446,
  [SMALL_STATE(699)] = 20453,
  [SMALL_STATE(700)] = 20458,
  [SMALL_STATE(701)] = 20465,
  [SMALL_STATE(702)] = 20472,
  [SMALL_STATE(703)] = 20479,
  [SMALL_STATE(704)] = 20486,
  [SMALL_STATE(705)] = 20491,
  [SMALL_STATE(706)] = 20498,
  [SMALL_STATE(707)] = 20505,
  [SMALL_STATE(708)] = 20512,
  [SMALL_STATE(709)] = 20519,
  [SMALL_STATE(710)] = 20526,
  [SMALL_STATE(711)] = 20531,
  [SMALL_STATE(712)] = 20538,
  [SMALL_STATE(713)] = 20545,
  [SMALL_STATE(714)] = 20550,
  [SMALL_STATE(715)] = 20557,
  [SMALL_STATE(716)] = 20564,
  [SMALL_STATE(717)] = 20571,
  [SMALL_STATE(718)] = 20576,
  [SMALL_STATE(719)] = 20580,
  [SMALL_STATE(720)] = 20584,
  [SMALL_STATE(721)] = 20588,
  [SMALL_STATE(722)] = 20592,
  [SMALL_STATE(723)] = 20596,
  [SMALL_STATE(724)] = 20600,
  [SMALL_STATE(725)] = 20604,
  [SMALL_STATE(726)] = 20608,
  [SMALL_STATE(727)] = 20612,
  [SMALL_STATE(728)] = 20616,
  [SMALL_STATE(729)] = 20620,
  [SMALL_STATE(730)] = 20624,
  [SMALL_STATE(731)] = 20628,
  [SMALL_STATE(732)] = 20632,
  [SMALL_STATE(733)] = 20636,
  [SMALL_STATE(734)] = 20640,
  [SMALL_STATE(735)] = 20644,
  [SMALL_STATE(736)] = 20648,
  [SMALL_STATE(737)] = 20652,
  [SMALL_STATE(738)] = 20656,
  [SMALL_STATE(739)] = 20660,
  [SMALL_STATE(740)] = 20664,
  [SMALL_STATE(741)] = 20668,
  [SMALL_STATE(742)] = 20672,
  [SMALL_STATE(743)] = 20676,
  [SMALL_STATE(744)] = 20680,
  [SMALL_STATE(745)] = 20684,
  [SMALL_STATE(746)] = 20688,
  [SMALL_STATE(747)] = 20692,
  [SMALL_STATE(748)] = 20696,
  [SMALL_STATE(749)] = 20700,
  [SMALL_STATE(750)] = 20704,
  [SMALL_STATE(751)] = 20708,
  [SMALL_STATE(752)] = 20712,
  [SMALL_STATE(753)] = 20716,
  [SMALL_STATE(754)] = 20720,
  [SMALL_STATE(755)] = 20724,
  [SMALL_STATE(756)] = 20728,
  [SMALL_STATE(757)] = 20732,
  [SMALL_STATE(758)] = 20736,
  [SMALL_STATE(759)] = 20740,
  [SMALL_STATE(760)] = 20744,
  [SMALL_STATE(761)] = 20748,
  [SMALL_STATE(762)] = 20752,
  [SMALL_STATE(763)] = 20756,
  [SMALL_STATE(764)] = 20760,
  [SMALL_STATE(765)] = 20764,
  [SMALL_STATE(766)] = 20768,
  [SMALL_STATE(767)] = 20772,
  [SMALL_STATE(768)] = 20776,
  [SMALL_STATE(769)] = 20780,
  [SMALL_STATE(770)] = 20784,
  [SMALL_STATE(771)] = 20788,
  [SMALL_STATE(772)] = 20792,
  [SMALL_STATE(773)] = 20796,
  [SMALL_STATE(774)] = 20800,
  [SMALL_STATE(775)] = 20804,
  [SMALL_STATE(776)] = 20808,
  [SMALL_STATE(777)] = 20812,
  [SMALL_STATE(778)] = 20816,
  [SMALL_STATE(779)] = 20820,
  [SMALL_STATE(780)] = 20824,
  [SMALL_STATE(781)] = 20828,
  [SMALL_STATE(782)] = 20832,
  [SMALL_STATE(783)] = 20836,
  [SMALL_STATE(784)] = 20840,
  [SMALL_STATE(785)] = 20844,
  [SMALL_STATE(786)] = 20848,
  [SMALL_STATE(787)] = 20852,
  [SMALL_STATE(788)] = 20856,
  [SMALL_STATE(789)] = 20860,
  [SMALL_STATE(790)] = 20864,
  [SMALL_STATE(791)] = 20868,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(735),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(728),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(739),
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
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(693),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(743),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(746),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(690),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(788),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(779),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_run_statement, 3, -1, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 1, 0, 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 18),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body_line, 2, 0, 18),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 18),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_run_text_body_line, 2, 0, 18),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_body_line, 2, 0, 18),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_body_line, 2, 0, 18),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 5, 0, 46),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 5, 0, 46),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 24),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 2, 0, 24),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 25),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 2, 0, 25),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 2, 0, 24),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 2, 0, 24),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 2, 0, 24),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 2, 0, 24),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 24),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 2, 0, 24),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 24),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 24),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 2, 0, 24),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 2, 0, 24),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 15),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 2, 0, 15),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 32),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_statement, 3, 0, 32),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 33),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 3, 0, 33),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 34),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 34),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 3, 0, 35),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 3, 0, 35),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 3, 0, 35),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 3, 0, 35),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 32),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 3, 0, 32),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settle_statement, 3, 0, 32),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settle_statement, 3, 0, 32),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 37),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 37),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 3, 0, 32),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 3, 0, 32),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 15),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic_body, 2, 0, 15),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 37),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 37),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 32),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 37),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 37),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 32),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 37),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 37),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 32),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 43),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 43),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 44),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 44),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 45),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seek_statement, 4, 0, 45),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scatter_statement, 4, 0, 46),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scatter_statement, 4, 0, 46),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 47),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 47),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storm_statement, 4, 0, 46),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storm_statement, 4, 0, 46),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 4, 0, 32),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_statement, 4, 0, 32),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 4, 0, 32),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 4, 0, 32),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 4, 0, 32),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 4, 0, 32),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 48),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 48),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 4, 0, 32),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 4, 0, 32),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 49),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 49),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 51),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_agic, 4, 0, 51),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 5, 0, 32),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 5, 0, 32),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 52),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 52),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_until_body, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_body, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_statement, 2, 2, 24),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_statement, 2, 2, 24),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_block, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nested_text_inline, 2, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 24),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 24),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directives, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(165),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic_body, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(771),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 40),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messages, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(734),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(656),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(724),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__nested_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(676),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(732),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 2, -1, 10),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, -1, 10),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(773),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(611),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(698),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(658),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(664),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(677),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(665),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(671),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(263),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 3, -1, 10),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 29),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 29),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 40),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 18),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_continuation_line, 2, 0, 18),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 10),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 18),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unroled_message_initial_line, 2, 0, 18),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_setting, 3, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_setting, 3, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_setting, 3, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 17),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cap_definition, 2, 0, 17),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27), SHIFT_REPEAT(305),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 27), SHIFT_REPEAT(791),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(791),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(307),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(699),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(736),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 1, 1, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 1, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(314),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(314),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 26),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 15),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 40),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 40),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0), REDUCE(aux_sym_text_body_repeat1, 1, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trivia, 1, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 15),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 16),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 16),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 26),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 30),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 30),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 22),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 22),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 31),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 31),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 2, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 23),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 23),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 14),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 14),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 41),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 41),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 42),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 7, 0, 42),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 14),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 14),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 6),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 6),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 28),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 28),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 6),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 6),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 1),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pass_statement, 2, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 42),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 42),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 41),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 41),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 9),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 4, 0, 9),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 50),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 8, 0, 50),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 31),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 6, 0, 31),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 50),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 50),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 28),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 28),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 14),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 14),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 23),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agic, 5, 0, 23),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 13),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 13),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 13),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 13),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 4),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 4, 0, 4),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(467),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_selection_clause, 2, 0, 39),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_clause, 2, 0, 36),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 12),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 21),
  [1594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 21), SHIFT_REPEAT(547),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 30),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_clause, 2, 0, 38),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 11),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 20),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 22),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 11),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1833] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
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
