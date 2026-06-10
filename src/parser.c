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
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 83

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_parent_doc_comment = 2,
  sym_doc_comment = 3,
  sym_line_comment = 4,
  sym_inline_comment = 5,
  anon_sym_Text = 6,
  anon_sym_Number = 7,
  anon_sym_Boolean = 8,
  anon_sym_Json = 9,
  anon_sym_Part = 10,
  anon_sym_Pack = 11,
  sym_array_suffix = 12,
  sym_block_language = 13,
  sym_call_ref = 14,
  sym_integer_literal = 15,
  aux_sym_flow_inline_text_token1 = 16,
  anon_sym_models = 17,
  anon_sym_tools = 18,
  anon_sym_skills = 19,
  anon_sym_services = 20,
  anon_sym_psyches = 21,
  anon_sym_hands = 22,
  anon_sym_handoffs = 23,
  anon_sym_recall = 24,
  anon_sym_EQ = 25,
  anon_sym_PLUS_EQ = 26,
  anon_sym_DASH_EQ = 27,
  anon_sym_context = 28,
  anon_sym_instruct = 29,
  anon_sym_user = 30,
  anon_sym_assistant = 31,
  anon_sym_tool = 32,
  anon_sym_default = 33,
  anon_sym_none = 34,
  sym_use_keyword = 35,
  sym_struct_keyword = 36,
  sym_psyche_keyword = 37,
  sym_skill_keyword = 38,
  sym_service_keyword = 39,
  sym_prompt_keyword = 40,
  sym_thunk_keyword = 41,
  sym_task_keyword = 42,
  sym_chore_keyword = 43,
  sym_flow_keyword = 44,
  sym_pass_keyword = 45,
  sym_flow_do_keyword = 46,
  sym_flow_ask_keyword = 47,
  sym_flow_unfold_keyword = 48,
  sym_flow_keep_keyword = 49,
  sym_flow_drop_keyword = 50,
  sym_flow_rank_keyword = 51,
  sym_flow_each_keyword = 52,
  sym_flow_fold_keyword = 53,
  sym_flow_repeat_keyword = 54,
  sym_flow_until_keyword = 55,
  sym_flow_to_keyword = 56,
  sym_flow_par_keyword = 57,
  sym_optional_marker = 58,
  sym_arrow = 59,
  sym_colon = 60,
  sym_lparen = 61,
  sym_rparen = 62,
  sym_comma = 63,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 64,
  sym_cap_kind = 65,
  sym_cap_uri = 66,
  sym_cap_shorthand = 67,
  sym_bare_value = 68,
  sym_type_name = 69,
  sym_value_name = 70,
  sym_indented_raw_text = 71,
  sym_flow_bare_raw_text = 72,
  sym_fenced_raw_text = 73,
  sym_source_file = 74,
  sym_item = 75,
  sym_newline = 76,
  sym_blank_line = 77,
  sym_line_end = 78,
  sym_use = 79,
  sym_type = 80,
  sym_base_type = 81,
  sym_builtin_type = 82,
  sym_user_type = 83,
  sym_type_suffix = 84,
  sym_struct = 85,
  sym_struct_name = 86,
  sym_struct_body = 87,
  sym_field = 88,
  sym_field_name = 89,
  sym_psyche = 90,
  sym_skill = 91,
  sym_service = 92,
  sym_prompt = 93,
  sym_task = 94,
  sym_chore = 95,
  sym_cap_name = 96,
  sym_cap_ref = 97,
  sym_job_name = 98,
  sym_cap_body = 99,
  sym_job_body = 100,
  sym_cap_indented_content_line = 101,
  sym_job_indented_content_line = 102,
  sym_property_eq = 103,
  sym_property_key = 104,
  sym_property_value = 105,
  sym_instruct = 106,
  sym_instruct_name = 107,
  sym_instruct_body = 108,
  sym_context = 109,
  sym_context_name = 110,
  sym_context_body = 111,
  sym_block_indented = 112,
  sym_block_fenced = 113,
  sym_block_indented_content_line = 114,
  sym_block_fenced_content_line = 115,
  sym_thunk = 116,
  sym_thunk_name = 117,
  sym_thunk_body = 118,
  sym_params = 119,
  sym_param = 120,
  sym_param_name = 121,
  sym_flow = 122,
  sym_flow_name = 123,
  sym_flow_body = 124,
  sym_flow_body_tail = 125,
  sym_flow_statement = 126,
  sym_flow_statement_entry = 127,
  sym_implicit_thunk_statement = 128,
  sym_implicit_thunk_body = 129,
  sym_flow_bare_content_line = 130,
  sym_do_statement = 131,
  sym_ask_statement = 132,
  sym_unfold_statement = 133,
  sym_keep_statement = 134,
  sym_drop_statement = 135,
  sym_rank_statement = 136,
  sym_each_statement = 137,
  sym_fold_statement = 138,
  sym_repeat_statement = 139,
  sym_repeat_block_body = 140,
  sym_until_clause = 141,
  sym_flow_condition_body = 142,
  sym_flow_inline_statement_body = 143,
  sym_flow_inline_output_type = 144,
  sym_flow_inline_parallel_head = 145,
  sym_flow_inline_rank_head = 146,
  sym_flow_inline_each_head = 147,
  sym_flow_named_parallel_head = 148,
  sym_flow_parallelism = 149,
  sym_flow_rank_limit = 150,
  sym_call_ref_list = 151,
  sym_flow_inline_body = 152,
  sym_flow_repeat_count = 153,
  sym_flow_inline_text = 154,
  sym_directive = 155,
  sym_directive_key = 156,
  sym_directive_op = 157,
  sym_directive_csv = 158,
  sym_instruction_section = 159,
  sym_message_section = 160,
  sym_thunk_tail = 161,
  sym_roled_message = 162,
  sym_unroled_message = 163,
  sym_unroled_message_block = 164,
  sym_block_indented_implicit = 165,
  sym_context_block = 166,
  sym_instruct_block = 167,
  sym_roled_message_block = 168,
  sym_pass_statement = 169,
  sym_context_block_kind = 170,
  sym_instruct_block_kind = 171,
  sym_roled_message_kind = 172,
  sym_block_value = 173,
  sym_block_inline = 174,
  sym_block_name = 175,
  sym_block_content_inline = 176,
  sym_context_keyword = 177,
  sym_instruct_keyword = 178,
  sym_assign_operator = 179,
  sym_fence_open = 180,
  sym_fence_close = 181,
  sym__snake_kebab_name = 182,
  sym_inline_text = 183,
  aux_sym_source_file_repeat1 = 184,
  aux_sym_type_repeat1 = 185,
  aux_sym_struct_body_repeat1 = 186,
  aux_sym_cap_body_repeat1 = 187,
  aux_sym_job_body_repeat1 = 188,
  aux_sym_block_indented_repeat1 = 189,
  aux_sym_block_fenced_repeat1 = 190,
  aux_sym_thunk_body_repeat1 = 191,
  aux_sym_thunk_body_repeat2 = 192,
  aux_sym_params_repeat1 = 193,
  aux_sym_flow_body_repeat1 = 194,
  aux_sym_flow_body_tail_repeat1 = 195,
  aux_sym_flow_body_tail_repeat2 = 196,
  aux_sym_implicit_thunk_body_repeat1 = 197,
  aux_sym_call_ref_list_repeat1 = 198,
  aux_sym_directive_csv_repeat1 = 199,
  aux_sym_message_section_repeat1 = 200,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
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
  [sym_block_language] = "block_language",
  [sym_call_ref] = "call_ref",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_flow_inline_text_token1] = "flow_inline_text_token1",
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
  [anon_sym_context] = "context",
  [anon_sym_instruct] = "instruct",
  [anon_sym_user] = "user",
  [anon_sym_assistant] = "assistant",
  [anon_sym_tool] = "tool",
  [anon_sym_default] = "default",
  [anon_sym_none] = "none",
  [sym_use_keyword] = "use_keyword",
  [sym_struct_keyword] = "struct_keyword",
  [sym_psyche_keyword] = "psyche_keyword",
  [sym_skill_keyword] = "skill_keyword",
  [sym_service_keyword] = "service_keyword",
  [sym_prompt_keyword] = "prompt_keyword",
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
  [sym_optional_marker] = "optional_marker",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_cap_kind] = "cap_kind",
  [sym_cap_uri] = "cap_uri",
  [sym_cap_shorthand] = "cap_shorthand",
  [sym_bare_value] = "bare_value",
  [sym_type_name] = "type_name",
  [sym_value_name] = "value_name",
  [sym_indented_raw_text] = "indented_raw_text",
  [sym_flow_bare_raw_text] = "flow_bare_raw_text",
  [sym_fenced_raw_text] = "fenced_raw_text",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_line_end] = "line_end",
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
  [sym_cap_indented_content_line] = "cap_indented_content_line",
  [sym_job_indented_content_line] = "job_indented_content_line",
  [sym_property_eq] = "property_eq",
  [sym_property_key] = "property_key",
  [sym_property_value] = "property_value",
  [sym_instruct] = "instruct",
  [sym_instruct_name] = "instruct_name",
  [sym_instruct_body] = "instruct_body",
  [sym_context] = "context",
  [sym_context_name] = "context_name",
  [sym_context_body] = "context_body",
  [sym_block_indented] = "block_indented",
  [sym_block_fenced] = "block_fenced",
  [sym_block_indented_content_line] = "block_indented_content_line",
  [sym_block_fenced_content_line] = "block_fenced_content_line",
  [sym_thunk] = "thunk",
  [sym_thunk_name] = "thunk_name",
  [sym_thunk_body] = "thunk_body",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_param_name] = "param_name",
  [sym_flow] = "flow",
  [sym_flow_name] = "flow_name",
  [sym_flow_body] = "flow_body",
  [sym_flow_body_tail] = "flow_body_tail",
  [sym_flow_statement] = "flow_statement",
  [sym_flow_statement_entry] = "flow_statement_entry",
  [sym_implicit_thunk_statement] = "statement",
  [sym_implicit_thunk_body] = "implicit_thunk_body",
  [sym_flow_bare_content_line] = "flow_bare_content_line",
  [sym_do_statement] = "statement",
  [sym_ask_statement] = "statement",
  [sym_unfold_statement] = "statement",
  [sym_keep_statement] = "statement",
  [sym_drop_statement] = "statement",
  [sym_rank_statement] = "statement",
  [sym_each_statement] = "statement",
  [sym_fold_statement] = "statement",
  [sym_repeat_statement] = "statement",
  [sym_repeat_block_body] = "repeat_block_body",
  [sym_until_clause] = "until_clause",
  [sym_flow_condition_body] = "flow_condition_body",
  [sym_flow_inline_statement_body] = "flow_inline_statement_body",
  [sym_flow_inline_output_type] = "flow_inline_output_type",
  [sym_flow_inline_parallel_head] = "flow_inline_parallel_head",
  [sym_flow_inline_rank_head] = "flow_inline_rank_head",
  [sym_flow_inline_each_head] = "flow_inline_each_head",
  [sym_flow_named_parallel_head] = "flow_named_parallel_head",
  [sym_flow_parallelism] = "flow_parallelism",
  [sym_flow_rank_limit] = "flow_rank_limit",
  [sym_call_ref_list] = "call_ref_list",
  [sym_flow_inline_body] = "flow_inline_body",
  [sym_flow_repeat_count] = "flow_repeat_count",
  [sym_flow_inline_text] = "flow_inline_text",
  [sym_directive] = "directive",
  [sym_directive_key] = "directive_key",
  [sym_directive_op] = "directive_op",
  [sym_directive_csv] = "directive_csv",
  [sym_instruction_section] = "instruction_section",
  [sym_message_section] = "message_section",
  [sym_thunk_tail] = "thunk_tail",
  [sym_roled_message] = "roled_message",
  [sym_unroled_message] = "unroled_message",
  [sym_unroled_message_block] = "block",
  [sym_block_indented_implicit] = "block_indented_implicit",
  [sym_context_block] = "block",
  [sym_instruct_block] = "block",
  [sym_roled_message_block] = "block",
  [sym_pass_statement] = "pass_statement",
  [sym_context_block_kind] = "context_block_kind",
  [sym_instruct_block_kind] = "instruct_block_kind",
  [sym_roled_message_kind] = "roled_message_kind",
  [sym_block_value] = "block_value",
  [sym_block_inline] = "block_inline",
  [sym_block_name] = "block_name",
  [sym_block_content_inline] = "block_content_inline",
  [sym_context_keyword] = "context_keyword",
  [sym_instruct_keyword] = "instruct_keyword",
  [sym_assign_operator] = "assign_operator",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym__snake_kebab_name] = "_snake_kebab_name",
  [sym_inline_text] = "inline_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_cap_body_repeat1] = "cap_body_repeat1",
  [aux_sym_job_body_repeat1] = "job_body_repeat1",
  [aux_sym_block_indented_repeat1] = "block_indented_repeat1",
  [aux_sym_block_fenced_repeat1] = "block_fenced_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_flow_body_repeat1] = "flow_body_repeat1",
  [aux_sym_flow_body_tail_repeat1] = "flow_body_tail_repeat1",
  [aux_sym_flow_body_tail_repeat2] = "flow_body_tail_repeat2",
  [aux_sym_implicit_thunk_body_repeat1] = "implicit_thunk_body_repeat1",
  [aux_sym_call_ref_list_repeat1] = "call_ref_list_repeat1",
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
  [aux_sym_message_section_repeat1] = "message_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
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
  [sym_block_language] = sym_block_language,
  [sym_call_ref] = sym_call_ref,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_flow_inline_text_token1] = aux_sym_flow_inline_text_token1,
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
  [anon_sym_context] = anon_sym_context,
  [anon_sym_instruct] = anon_sym_instruct,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_assistant] = anon_sym_assistant,
  [anon_sym_tool] = anon_sym_tool,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_none] = anon_sym_none,
  [sym_use_keyword] = sym_use_keyword,
  [sym_struct_keyword] = sym_struct_keyword,
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_skill_keyword] = sym_skill_keyword,
  [sym_service_keyword] = sym_service_keyword,
  [sym_prompt_keyword] = sym_prompt_keyword,
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
  [sym_optional_marker] = sym_optional_marker,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_cap_kind] = sym_cap_kind,
  [sym_cap_uri] = sym_cap_uri,
  [sym_cap_shorthand] = sym_cap_shorthand,
  [sym_bare_value] = sym_bare_value,
  [sym_type_name] = sym_type_name,
  [sym_value_name] = sym_value_name,
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym_flow_bare_raw_text] = sym_flow_bare_raw_text,
  [sym_fenced_raw_text] = sym_fenced_raw_text,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_line_end] = sym_line_end,
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
  [sym_cap_indented_content_line] = sym_cap_indented_content_line,
  [sym_job_indented_content_line] = sym_job_indented_content_line,
  [sym_property_eq] = sym_property_eq,
  [sym_property_key] = sym_property_key,
  [sym_property_value] = sym_property_value,
  [sym_instruct] = sym_instruct,
  [sym_instruct_name] = sym_instruct_name,
  [sym_instruct_body] = sym_instruct_body,
  [sym_context] = sym_context,
  [sym_context_name] = sym_context_name,
  [sym_context_body] = sym_context_body,
  [sym_block_indented] = sym_block_indented,
  [sym_block_fenced] = sym_block_fenced,
  [sym_block_indented_content_line] = sym_block_indented_content_line,
  [sym_block_fenced_content_line] = sym_block_fenced_content_line,
  [sym_thunk] = sym_thunk,
  [sym_thunk_name] = sym_thunk_name,
  [sym_thunk_body] = sym_thunk_body,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_param_name] = sym_param_name,
  [sym_flow] = sym_flow,
  [sym_flow_name] = sym_flow_name,
  [sym_flow_body] = sym_flow_body,
  [sym_flow_body_tail] = sym_flow_body_tail,
  [sym_flow_statement] = sym_flow_statement,
  [sym_flow_statement_entry] = sym_flow_statement_entry,
  [sym_implicit_thunk_statement] = sym_implicit_thunk_statement,
  [sym_implicit_thunk_body] = sym_implicit_thunk_body,
  [sym_flow_bare_content_line] = sym_flow_bare_content_line,
  [sym_do_statement] = sym_implicit_thunk_statement,
  [sym_ask_statement] = sym_implicit_thunk_statement,
  [sym_unfold_statement] = sym_implicit_thunk_statement,
  [sym_keep_statement] = sym_implicit_thunk_statement,
  [sym_drop_statement] = sym_implicit_thunk_statement,
  [sym_rank_statement] = sym_implicit_thunk_statement,
  [sym_each_statement] = sym_implicit_thunk_statement,
  [sym_fold_statement] = sym_implicit_thunk_statement,
  [sym_repeat_statement] = sym_implicit_thunk_statement,
  [sym_repeat_block_body] = sym_repeat_block_body,
  [sym_until_clause] = sym_until_clause,
  [sym_flow_condition_body] = sym_flow_condition_body,
  [sym_flow_inline_statement_body] = sym_flow_inline_statement_body,
  [sym_flow_inline_output_type] = sym_flow_inline_output_type,
  [sym_flow_inline_parallel_head] = sym_flow_inline_parallel_head,
  [sym_flow_inline_rank_head] = sym_flow_inline_rank_head,
  [sym_flow_inline_each_head] = sym_flow_inline_each_head,
  [sym_flow_named_parallel_head] = sym_flow_named_parallel_head,
  [sym_flow_parallelism] = sym_flow_parallelism,
  [sym_flow_rank_limit] = sym_flow_rank_limit,
  [sym_call_ref_list] = sym_call_ref_list,
  [sym_flow_inline_body] = sym_flow_inline_body,
  [sym_flow_repeat_count] = sym_flow_repeat_count,
  [sym_flow_inline_text] = sym_flow_inline_text,
  [sym_directive] = sym_directive,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_op] = sym_directive_op,
  [sym_directive_csv] = sym_directive_csv,
  [sym_instruction_section] = sym_instruction_section,
  [sym_message_section] = sym_message_section,
  [sym_thunk_tail] = sym_thunk_tail,
  [sym_roled_message] = sym_roled_message,
  [sym_unroled_message] = sym_unroled_message,
  [sym_unroled_message_block] = sym_unroled_message_block,
  [sym_block_indented_implicit] = sym_block_indented_implicit,
  [sym_context_block] = sym_unroled_message_block,
  [sym_instruct_block] = sym_unroled_message_block,
  [sym_roled_message_block] = sym_unroled_message_block,
  [sym_pass_statement] = sym_pass_statement,
  [sym_context_block_kind] = sym_context_block_kind,
  [sym_instruct_block_kind] = sym_instruct_block_kind,
  [sym_roled_message_kind] = sym_roled_message_kind,
  [sym_block_value] = sym_block_value,
  [sym_block_inline] = sym_block_inline,
  [sym_block_name] = sym_block_name,
  [sym_block_content_inline] = sym_block_content_inline,
  [sym_context_keyword] = sym_context_keyword,
  [sym_instruct_keyword] = sym_instruct_keyword,
  [sym_assign_operator] = sym_assign_operator,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym__snake_kebab_name] = sym__snake_kebab_name,
  [sym_inline_text] = sym_inline_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_cap_body_repeat1] = aux_sym_cap_body_repeat1,
  [aux_sym_job_body_repeat1] = aux_sym_job_body_repeat1,
  [aux_sym_block_indented_repeat1] = aux_sym_block_indented_repeat1,
  [aux_sym_block_fenced_repeat1] = aux_sym_block_fenced_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_flow_body_repeat1] = aux_sym_flow_body_repeat1,
  [aux_sym_flow_body_tail_repeat1] = aux_sym_flow_body_tail_repeat1,
  [aux_sym_flow_body_tail_repeat2] = aux_sym_flow_body_tail_repeat2,
  [aux_sym_implicit_thunk_body_repeat1] = aux_sym_implicit_thunk_body_repeat1,
  [aux_sym_call_ref_list_repeat1] = aux_sym_call_ref_list_repeat1,
  [aux_sym_directive_csv_repeat1] = aux_sym_directive_csv_repeat1,
  [aux_sym_message_section_repeat1] = aux_sym_message_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_newline_token1] = {
    .visible = false,
    .named = false,
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
  [sym_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_call_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_inline_text_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instruct] = {
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
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_cap_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value_name] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bare_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fenced_raw_text] = {
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
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_end] = {
    .visible = true,
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
  [sym_cap_indented_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_job_indented_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_property_eq] = {
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
  [sym_block_indented] = {
    .visible = true,
    .named = true,
  },
  [sym_block_fenced] = {
    .visible = true,
    .named = true,
  },
  [sym_block_indented_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_block_fenced_content_line] = {
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
  [sym_flow_body_tail] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_statement_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_thunk_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_thunk_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bare_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
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
  [sym_repeat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_block_body] = {
    .visible = true,
    .named = true,
  },
  [sym_until_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_condition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_statement_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_output_type] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_parallel_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_rank_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_each_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_named_parallel_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_parallelism] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_rank_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_call_ref_list] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_count] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_text] = {
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
  [sym_instruction_section] = {
    .visible = true,
    .named = true,
  },
  [sym_message_section] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_tail] = {
    .visible = true,
    .named = true,
  },
  [sym_roled_message] = {
    .visible = true,
    .named = true,
  },
  [sym_unroled_message] = {
    .visible = true,
    .named = true,
  },
  [sym_unroled_message_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_indented_implicit] = {
    .visible = true,
    .named = true,
  },
  [sym_context_block] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_block] = {
    .visible = true,
    .named = true,
  },
  [sym_roled_message_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pass_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_context_block_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_block_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_roled_message_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_block_value] = {
    .visible = true,
    .named = true,
  },
  [sym_block_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_block_content_inline] = {
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
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_open] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_close] = {
    .visible = true,
    .named = true,
  },
  [sym__snake_kebab_name] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_text] = {
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
  [aux_sym_job_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_indented_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_fenced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_thunk_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_thunk_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_body_tail_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_body_tail_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_implicit_thunk_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_ref_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_csv_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_base = 2,
  field_body = 3,
  field_close = 4,
  field_colon = 5,
  field_condition = 6,
  field_condition_keyword = 7,
  field_content = 8,
  field_count = 9,
  field_entry = 10,
  field_head = 11,
  field_instruction = 12,
  field_key = 13,
  field_keyword = 14,
  field_kind = 15,
  field_language = 16,
  field_messages = 17,
  field_name = 18,
  field_operator = 19,
  field_optional = 20,
  field_output = 21,
  field_param = 22,
  field_params = 23,
  field_reference = 24,
  field_suffix = 25,
  field_tail = 26,
  field_target = 27,
  field_targets = 28,
  field_text = 29,
  field_type = 30,
  field_value = 31,
  field_values = 32,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_base] = "base",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_condition] = "condition",
  [field_condition_keyword] = "condition_keyword",
  [field_content] = "content",
  [field_count] = "count",
  [field_entry] = "entry",
  [field_head] = "head",
  [field_instruction] = "instruction",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_messages] = "messages",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_output] = "output",
  [field_param] = "param",
  [field_params] = "params",
  [field_reference] = "reference",
  [field_suffix] = "suffix",
  [field_tail] = "tail",
  [field_target] = "target",
  [field_targets] = "targets",
  [field_text] = "text",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 1},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 4},
  [20] = {.index = 38, .length = 4},
  [21] = {.index = 42, .length = 4},
  [22] = {.index = 46, .length = 2},
  [23] = {.index = 48, .length = 1},
  [24] = {.index = 49, .length = 1},
  [25] = {.index = 50, .length = 1},
  [26] = {.index = 51, .length = 1},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 2},
  [30] = {.index = 58, .length = 3},
  [31] = {.index = 61, .length = 4},
  [32] = {.index = 65, .length = 4},
  [33] = {.index = 69, .length = 1},
  [34] = {.index = 70, .length = 2},
  [35] = {.index = 72, .length = 1},
  [36] = {.index = 73, .length = 1},
  [37] = {.index = 74, .length = 5},
  [38] = {.index = 79, .length = 2},
  [39] = {.index = 81, .length = 1},
  [40] = {.index = 82, .length = 1},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 2},
  [43] = {.index = 87, .length = 3},
  [44] = {.index = 90, .length = 4},
  [45] = {.index = 94, .length = 5},
  [46] = {.index = 99, .length = 5},
  [47] = {.index = 104, .length = 5},
  [48] = {.index = 109, .length = 2},
  [49] = {.index = 111, .length = 2},
  [50] = {.index = 113, .length = 3},
  [51] = {.index = 116, .length = 2},
  [52] = {.index = 118, .length = 2},
  [53] = {.index = 120, .length = 2},
  [54] = {.index = 122, .length = 2},
  [55] = {.index = 124, .length = 2},
  [56] = {.index = 126, .length = 1},
  [57] = {.index = 127, .length = 2},
  [58] = {.index = 129, .length = 2},
  [59] = {.index = 131, .length = 3},
  [60] = {.index = 134, .length = 6},
  [61] = {.index = 140, .length = 6},
  [62] = {.index = 146, .length = 6},
  [63] = {.index = 152, .length = 1},
  [64] = {.index = 153, .length = 2},
  [65] = {.index = 155, .length = 2},
  [66] = {.index = 157, .length = 2},
  [67] = {.index = 159, .length = 4},
  [68] = {.index = 163, .length = 1},
  [69] = {.index = 164, .length = 2},
  [70] = {.index = 166, .length = 3},
  [71] = {.index = 169, .length = 2},
  [72] = {.index = 171, .length = 7},
  [73] = {.index = 178, .length = 1},
  [74] = {.index = 179, .length = 1},
  [75] = {.index = 180, .length = 2},
  [76] = {.index = 182, .length = 1},
  [77] = {.index = 183, .length = 5},
  [78] = {.index = 188, .length = 4},
  [79] = {.index = 192, .length = 2},
  [80] = {.index = 194, .length = 2},
  [81] = {.index = 196, .length = 3},
  [82] = {.index = 199, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
  [1] =
    {field_colon, 1},
    {field_keyword, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [7] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [10] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [14] =
    {field_suffix, 0},
  [15] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [17] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [20] =
    {field_instruction, 0},
  [21] =
    {field_messages, 0},
  [22] =
    {field_tail, 0},
  [23] =
    {field_value, 0},
  [24] =
    {field_param, 1},
  [25] =
    {field_name, 0},
    {field_optional, 1},
  [27] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [30] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [33] =
    {field_body, 0},
  [34] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [38] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [42] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [46] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [48] =
    {field_keyword, 0},
  [49] =
    {field_content, 0},
  [50] =
    {field_instruction, 1},
  [51] =
    {field_tail, 1},
  [52] =
    {field_instruction, 0},
    {field_tail, 1},
  [54] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [56] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [58] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [61] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [65] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [69] =
    {field_target, 0},
  [70] =
    {field_body, 1},
    {field_keyword, 0},
  [72] =
    {field_count, 0},
  [73] =
    {field_close, 2},
  [74] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [79] =
    {field_instruction, 1},
    {field_tail, 2},
  [81] =
    {field_instruction, 2},
  [82] =
    {field_tail, 2},
  [83] =
    {field_instruction, 0},
    {field_tail, 2},
  [85] =
    {field_kind, 0},
    {field_value, 1},
  [87] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [90] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [94] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [99] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [104] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [109] =
    {field_target, 0},
    {field_target, 1, .inherited = true},
  [111] =
    {field_keyword, 0},
    {field_type, 1},
  [113] =
    {field_body, 2},
    {field_head, 1},
    {field_keyword, 0},
  [116] =
    {field_keyword, 0},
    {field_targets, 1},
  [118] =
    {field_keyword, 0},
    {field_target, 1},
  [120] =
    {field_count, 1},
    {field_keyword, 0},
  [122] =
    {field_head, 1},
    {field_keyword, 0},
  [124] =
    {field_close, 3},
    {field_language, 1},
  [126] =
    {field_close, 3},
  [127] =
    {field_instruction, 1},
    {field_tail, 3},
  [129] =
    {field_instruction, 2},
    {field_tail, 3},
  [131] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [134] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [140] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [146] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [152] =
    {field_target, 1},
  [153] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [155] =
    {field_colon, 0},
    {field_value, 2},
  [157] =
    {field_colon, 0},
    {field_value, 1},
  [159] =
    {field_colon, 2},
    {field_condition, 3},
    {field_condition_keyword, 1},
    {field_keyword, 0},
  [163] =
    {field_entry, 0},
  [164] =
    {field_close, 4},
    {field_language, 1},
  [166] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [169] =
    {field_instruction, 2},
    {field_tail, 4},
  [171] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [178] =
    {field_text, 1},
  [179] =
    {field_text, 0},
  [180] =
    {field_condition, 1},
    {field_entry, 0},
  [182] =
    {field_entry, 1},
  [183] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [188] =
    {field_body, 4},
    {field_colon, 2},
    {field_count, 1},
    {field_keyword, 0},
  [192] =
    {field_condition, 2},
    {field_entry, 0},
  [194] =
    {field_condition, 2},
    {field_entry, 1},
  [196] =
    {field_colon, 1},
    {field_condition, 2},
    {field_keyword, 0},
  [199] =
    {field_condition, 3},
    {field_entry, 1},
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
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 14,
  [18] = 12,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
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
  [49] = 44,
  [50] = 45,
  [51] = 51,
  [52] = 46,
  [53] = 53,
  [54] = 48,
  [55] = 47,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 57,
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
  [73] = 64,
  [74] = 71,
  [75] = 70,
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
  [89] = 69,
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
  [104] = 72,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 64,
  [111] = 111,
  [112] = 64,
  [113] = 68,
  [114] = 67,
  [115] = 70,
  [116] = 116,
  [117] = 70,
  [118] = 118,
  [119] = 66,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 108,
  [127] = 102,
  [128] = 106,
  [129] = 70,
  [130] = 118,
  [131] = 103,
  [132] = 105,
  [133] = 107,
  [134] = 109,
  [135] = 111,
  [136] = 116,
  [137] = 120,
  [138] = 77,
  [139] = 78,
  [140] = 79,
  [141] = 80,
  [142] = 81,
  [143] = 82,
  [144] = 83,
  [145] = 84,
  [146] = 85,
  [147] = 87,
  [148] = 121,
  [149] = 122,
  [150] = 123,
  [151] = 64,
  [152] = 92,
  [153] = 90,
  [154] = 91,
  [155] = 76,
  [156] = 100,
  [157] = 93,
  [158] = 86,
  [159] = 88,
  [160] = 94,
  [161] = 95,
  [162] = 68,
  [163] = 67,
  [164] = 96,
  [165] = 97,
  [166] = 98,
  [167] = 99,
  [168] = 125,
  [169] = 101,
  [170] = 124,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 46,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 44,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 45,
  [188] = 188,
  [189] = 189,
  [190] = 67,
  [191] = 184,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 65,
  [196] = 185,
  [197] = 68,
  [198] = 64,
  [199] = 68,
  [200] = 67,
  [201] = 46,
  [202] = 70,
  [203] = 203,
  [204] = 70,
  [205] = 205,
  [206] = 72,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 68,
  [217] = 217,
  [218] = 64,
  [219] = 67,
  [220] = 70,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 64,
  [226] = 68,
  [227] = 67,
  [228] = 70,
  [229] = 67,
  [230] = 230,
  [231] = 72,
  [232] = 232,
  [233] = 64,
  [234] = 68,
  [235] = 67,
  [236] = 70,
  [237] = 64,
  [238] = 70,
  [239] = 68,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 210,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 217,
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
  [286] = 213,
  [287] = 214,
  [288] = 215,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 292,
  [297] = 64,
  [298] = 70,
  [299] = 68,
  [300] = 67,
  [301] = 70,
  [302] = 64,
  [303] = 303,
  [304] = 304,
  [305] = 305,
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
  [325] = 321,
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
  [337] = 332,
  [338] = 338,
  [339] = 338,
  [340] = 336,
  [341] = 329,
  [342] = 342,
  [343] = 328,
  [344] = 344,
  [345] = 345,
  [346] = 335,
  [347] = 334,
  [348] = 326,
  [349] = 345,
  [350] = 342,
  [351] = 351,
  [352] = 351,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 356,
  [359] = 354,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 360,
  [366] = 366,
  [367] = 364,
  [368] = 368,
  [369] = 369,
  [370] = 368,
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
  [390] = 375,
  [391] = 376,
  [392] = 378,
  [393] = 381,
  [394] = 382,
  [395] = 383,
  [396] = 396,
  [397] = 385,
  [398] = 386,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 372,
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
  [420] = 403,
  [421] = 421,
  [422] = 422,
  [423] = 70,
  [424] = 68,
  [425] = 67,
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
  [436] = 407,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 422,
  [444] = 389,
  [445] = 429,
  [446] = 446,
  [447] = 442,
  [448] = 373,
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
  [464] = 68,
  [465] = 67,
  [466] = 70,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 458,
  [476] = 476,
  [477] = 476,
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
  [488] = 488,
  [489] = 489,
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
  [503] = 493,
  [504] = 504,
  [505] = 493,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 506,
  [518] = 507,
  [519] = 514,
  [520] = 482,
  [521] = 496,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 491,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 516,
  [530] = 530,
  [531] = 522,
  [532] = 493,
  [533] = 508,
  [534] = 493,
  [535] = 508,
  [536] = 493,
  [537] = 493,
  [538] = 493,
  [539] = 493,
  [540] = 493,
  [541] = 493,
  [542] = 493,
  [543] = 493,
  [544] = 495,
  [545] = 545,
  [546] = 502,
  [547] = 547,
  [548] = 508,
  [549] = 70,
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
  [560] = 64,
  [561] = 561,
  [562] = 562,
  [563] = 68,
  [564] = 67,
  [565] = 565,
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
  [582] = 70,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 581,
  [590] = 590,
  [591] = 591,
  [592] = 572,
  [593] = 593,
  [594] = 568,
  [595] = 595,
  [596] = 562,
  [597] = 583,
  [598] = 598,
  [599] = 599,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(0);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == 'B') ADVANCE(369);
      if (lookahead == 'J') ADVANCE(371);
      if (lookahead == 'N') ADVANCE(374);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(376);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == 'B') ADVANCE(369);
      if (lookahead == 'J') ADVANCE(371);
      if (lookahead == 'N') ADVANCE(374);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(376);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '+') ADVANCE(581);
      if (lookahead == ',') ADVANCE(344);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == 'B') ADVANCE(369);
      if (lookahead == 'J') ADVANCE(371);
      if (lookahead == 'N') ADVANCE(374);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '`') ADVANCE(585);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'm') ADVANCE(608);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'm') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 252,
        '\r', 1,
        '#', 256,
        ')', 343,
        ',', 344,
        ':', 341,
        '[', 41,
        '`', 43,
        'm', 75,
        'p', 52,
        's', 103,
        'u', 163,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 252,
        '\r', 1,
        '#', 256,
        '`', 273,
        'd', 389,
        'n', 410,
        '\t', 270,
        '\f', 270,
        ' ', 270,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(734);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(253);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(253);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\f') SKIP(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      END_STATE();
    case 30:
      if (lookahead == '\f') SKIP(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\f') SKIP(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(730);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(34);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(35);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(36);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(340);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(340);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(263);
      END_STATE();
    case 42:
      if (lookahead == '`') ADVANCE(345);
      END_STATE();
    case 43:
      if (lookahead == '`') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'k') ADVANCE(115);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(198);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 126:
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(317);
      END_STATE();
    case 129:
      if (lookahead == 'k') ADVANCE(315);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 227:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 228:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(321);
      END_STATE();
    case 232:
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(239);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 240:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(348);
      END_STATE();
    case 241:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(241);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 242:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(242);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(438);
      END_STATE();
    case 243:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(243);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 244:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(244);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(415);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(441);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 245:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(245);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(442);
      END_STATE();
    case 246:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 247:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(247);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 248:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(248);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(436);
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\f') SKIP(249);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      ADVANCE_MAP(
        '\n', 252,
        '\r', 1,
        '#', 21,
        '(', 342,
        ')', 343,
        '+', 38,
        ',', 344,
        '-', 39,
        ':', 341,
        '=', 284,
        '?', 339,
        'B', 369,
        'J', 371,
        'N', 374,
        'P', 355,
        'T', 359,
        'c', 392,
        'f', 399,
        'i', 404,
        'p', 415,
        's', 383,
        't', 377,
        'u', 417,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(376);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_parent_doc_comment);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_call_ref);
      if (lookahead == 'a') ADVANCE(267);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_call_ref);
      if (lookahead == 'o') ADVANCE(336);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_call_ref);
      if (lookahead == 'r') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_call_ref);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 252,
        '\r', 1,
        '#', 256,
        '`', 273,
        'd', 389,
        'n', 410,
        '\t', 270,
        '\f', 270,
        ' ', 270,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(350);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(348);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        0x0b, 580,
        '\f', 440,
        '\r', 1,
        '#', 445,
        'a', 559,
        'c', 494,
        'd', 530,
        'e', 456,
        'f', 513,
        'i', 527,
        'k', 487,
        'p', 460,
        'r', 457,
        's', 488,
        't', 454,
        'u', 523,
        '\t', 436,
        ' ', 436,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        0x0b, 580,
        '\f', 444,
        '\r', 1,
        '#', 445,
        'a', 559,
        'c', 494,
        'd', 530,
        'e', 456,
        'f', 513,
        'i', 527,
        'k', 487,
        'p', 460,
        'r', 457,
        's', 488,
        't', 454,
        'u', 526,
        '\t', 437,
        ' ', 437,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 438,
        '\r', 1,
        '#', 445,
        'a', 557,
        'c', 494,
        'f', 514,
        'h', 451,
        'i', 527,
        'm', 531,
        'p', 459,
        'r', 479,
        's', 480,
        't', 452,
        'u', 554,
        '\t', 438,
        ' ', 438,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 439,
        '\r', 1,
        '#', 445,
        'a', 557,
        'c', 494,
        'f', 514,
        'i', 527,
        'p', 460,
        's', 488,
        't', 453,
        'u', 554,
        '\t', 439,
        ' ', 439,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 440,
        '\r', 1,
        '#', 445,
        'a', 559,
        'c', 494,
        'd', 530,
        'e', 456,
        'f', 513,
        'i', 527,
        'k', 487,
        'p', 460,
        'r', 457,
        's', 488,
        't', 454,
        'u', 523,
        '\t', 436,
        ' ', 436,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 441,
        '\r', 1,
        '#', 445,
        'c', 392,
        'f', 399,
        'i', 404,
        'p', 415,
        's', 383,
        't', 377,
        'u', 417,
        '\t', 441,
        ' ', 441,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 442,
        '\r', 1,
        '#', 445,
        'c', 494,
        'f', 514,
        'i', 527,
        'p', 546,
        's', 488,
        't', 454,
        'u', 561,
        '\t', 442,
        ' ', 442,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 443,
        '\r', 1,
        '#', 445,
        'a', 557,
        'c', 494,
        'f', 514,
        'i', 527,
        'p', 546,
        's', 488,
        't', 453,
        'u', 554,
        '\t', 443,
        ' ', 443,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 252,
        '\f', 444,
        '\r', 1,
        '#', 445,
        'a', 559,
        'c', 494,
        'd', 530,
        'e', 456,
        'f', 513,
        'i', 527,
        'k', 487,
        'p', 460,
        'r', 457,
        's', 488,
        't', 454,
        'u', 526,
        '\t', 437,
        ' ', 437,
      );
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(449);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(253);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'h') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'h') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'h') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(497);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'k') ADVANCE(502);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'h') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'h') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'k') ADVANCE(638);
      if (lookahead == 't') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'k') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'x') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(734);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(734);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 241},
  [2] = {.lex_state = 242},
  [3] = {.lex_state = 242},
  [4] = {.lex_state = 242},
  [5] = {.lex_state = 242},
  [6] = {.lex_state = 242},
  [7] = {.lex_state = 242},
  [8] = {.lex_state = 242},
  [9] = {.lex_state = 242},
  [10] = {.lex_state = 242},
  [11] = {.lex_state = 242},
  [12] = {.lex_state = 241},
  [13] = {.lex_state = 241},
  [14] = {.lex_state = 241},
  [15] = {.lex_state = 241},
  [16] = {.lex_state = 241},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 241},
  [19] = {.lex_state = 241},
  [20] = {.lex_state = 246},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 246},
  [23] = {.lex_state = 241},
  [24] = {.lex_state = 246},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 246},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 242},
  [36] = {.lex_state = 241},
  [37] = {.lex_state = 243},
  [38] = {.lex_state = 243},
  [39] = {.lex_state = 243},
  [40] = {.lex_state = 243},
  [41] = {.lex_state = 241},
  [42] = {.lex_state = 243},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 248},
  [45] = {.lex_state = 248},
  [46] = {.lex_state = 248},
  [47] = {.lex_state = 241},
  [48] = {.lex_state = 241},
  [49] = {.lex_state = 249},
  [50] = {.lex_state = 249},
  [51] = {.lex_state = 241},
  [52] = {.lex_state = 249},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 246},
  [55] = {.lex_state = 246},
  [56] = {.lex_state = 246},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 247},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 247},
  [64] = {.lex_state = 248},
  [65] = {.lex_state = 242},
  [66] = {.lex_state = 241},
  [67] = {.lex_state = 242},
  [68] = {.lex_state = 242},
  [69] = {.lex_state = 241},
  [70] = {.lex_state = 242},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 248},
  [73] = {.lex_state = 242},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 248},
  [76] = {.lex_state = 241},
  [77] = {.lex_state = 241},
  [78] = {.lex_state = 241},
  [79] = {.lex_state = 241},
  [80] = {.lex_state = 241},
  [81] = {.lex_state = 241},
  [82] = {.lex_state = 241},
  [83] = {.lex_state = 241},
  [84] = {.lex_state = 241},
  [85] = {.lex_state = 241},
  [86] = {.lex_state = 241},
  [87] = {.lex_state = 241},
  [88] = {.lex_state = 241},
  [89] = {.lex_state = 246},
  [90] = {.lex_state = 241},
  [91] = {.lex_state = 241},
  [92] = {.lex_state = 241},
  [93] = {.lex_state = 241},
  [94] = {.lex_state = 241},
  [95] = {.lex_state = 241},
  [96] = {.lex_state = 241},
  [97] = {.lex_state = 241},
  [98] = {.lex_state = 241},
  [99] = {.lex_state = 241},
  [100] = {.lex_state = 241},
  [101] = {.lex_state = 241},
  [102] = {.lex_state = 241},
  [103] = {.lex_state = 241},
  [104] = {.lex_state = 249},
  [105] = {.lex_state = 241},
  [106] = {.lex_state = 241},
  [107] = {.lex_state = 241},
  [108] = {.lex_state = 241},
  [109] = {.lex_state = 241},
  [110] = {.lex_state = 249},
  [111] = {.lex_state = 241},
  [112] = {.lex_state = 241},
  [113] = {.lex_state = 241},
  [114] = {.lex_state = 241},
  [115] = {.lex_state = 249},
  [116] = {.lex_state = 241},
  [117] = {.lex_state = 241},
  [118] = {.lex_state = 241},
  [119] = {.lex_state = 246},
  [120] = {.lex_state = 241},
  [121] = {.lex_state = 241},
  [122] = {.lex_state = 241},
  [123] = {.lex_state = 241},
  [124] = {.lex_state = 241},
  [125] = {.lex_state = 241},
  [126] = {.lex_state = 246},
  [127] = {.lex_state = 246},
  [128] = {.lex_state = 246},
  [129] = {.lex_state = 246},
  [130] = {.lex_state = 246},
  [131] = {.lex_state = 246},
  [132] = {.lex_state = 246},
  [133] = {.lex_state = 246},
  [134] = {.lex_state = 246},
  [135] = {.lex_state = 246},
  [136] = {.lex_state = 246},
  [137] = {.lex_state = 246},
  [138] = {.lex_state = 246},
  [139] = {.lex_state = 246},
  [140] = {.lex_state = 246},
  [141] = {.lex_state = 246},
  [142] = {.lex_state = 246},
  [143] = {.lex_state = 246},
  [144] = {.lex_state = 246},
  [145] = {.lex_state = 246},
  [146] = {.lex_state = 246},
  [147] = {.lex_state = 246},
  [148] = {.lex_state = 246},
  [149] = {.lex_state = 246},
  [150] = {.lex_state = 246},
  [151] = {.lex_state = 246},
  [152] = {.lex_state = 246},
  [153] = {.lex_state = 246},
  [154] = {.lex_state = 246},
  [155] = {.lex_state = 246},
  [156] = {.lex_state = 246},
  [157] = {.lex_state = 246},
  [158] = {.lex_state = 246},
  [159] = {.lex_state = 246},
  [160] = {.lex_state = 246},
  [161] = {.lex_state = 246},
  [162] = {.lex_state = 246},
  [163] = {.lex_state = 246},
  [164] = {.lex_state = 246},
  [165] = {.lex_state = 246},
  [166] = {.lex_state = 246},
  [167] = {.lex_state = 246},
  [168] = {.lex_state = 246},
  [169] = {.lex_state = 246},
  [170] = {.lex_state = 246},
  [171] = {.lex_state = 243},
  [172] = {.lex_state = 243},
  [173] = {.lex_state = 243},
  [174] = {.lex_state = 243},
  [175] = {.lex_state = 247},
  [176] = {.lex_state = 244},
  [177] = {.lex_state = 244},
  [178] = {.lex_state = 243},
  [179] = {.lex_state = 244},
  [180] = {.lex_state = 244},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 247},
  [183] = {.lex_state = 244},
  [184] = {.lex_state = 247},
  [185] = {.lex_state = 247},
  [186] = {.lex_state = 244},
  [187] = {.lex_state = 247},
  [188] = {.lex_state = 250},
  [189] = {.lex_state = 250},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 245},
  [192] = {.lex_state = 243},
  [193] = {.lex_state = 243},
  [194] = {.lex_state = 243},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 245},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 243},
  [199] = {.lex_state = 243},
  [200] = {.lex_state = 243},
  [201] = {.lex_state = 245},
  [202] = {.lex_state = 243},
  [203] = {.lex_state = 243},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 247},
  [206] = {.lex_state = 247},
  [207] = {.lex_state = 247},
  [208] = {.lex_state = 247},
  [209] = {.lex_state = 247},
  [210] = {.lex_state = 247},
  [211] = {.lex_state = 247},
  [212] = {.lex_state = 247},
  [213] = {.lex_state = 247},
  [214] = {.lex_state = 247},
  [215] = {.lex_state = 247},
  [216] = {.lex_state = 247},
  [217] = {.lex_state = 247},
  [218] = {.lex_state = 247},
  [219] = {.lex_state = 247},
  [220] = {.lex_state = 247},
  [221] = {.lex_state = 247},
  [222] = {.lex_state = 244},
  [223] = {.lex_state = 244},
  [224] = {.lex_state = 244},
  [225] = {.lex_state = 244},
  [226] = {.lex_state = 244},
  [227] = {.lex_state = 244},
  [228] = {.lex_state = 244},
  [229] = {.lex_state = 250},
  [230] = {.lex_state = 250},
  [231] = {.lex_state = 245},
  [232] = {.lex_state = 250},
  [233] = {.lex_state = 245},
  [234] = {.lex_state = 245},
  [235] = {.lex_state = 245},
  [236] = {.lex_state = 245},
  [237] = {.lex_state = 250},
  [238] = {.lex_state = 250},
  [239] = {.lex_state = 250},
  [240] = {.lex_state = 241},
  [241] = {.lex_state = 241},
  [242] = {.lex_state = 241},
  [243] = {.lex_state = 241},
  [244] = {.lex_state = 241},
  [245] = {.lex_state = 241},
  [246] = {.lex_state = 241},
  [247] = {.lex_state = 241},
  [248] = {.lex_state = 241},
  [249] = {.lex_state = 241},
  [250] = {.lex_state = 241},
  [251] = {.lex_state = 241},
  [252] = {.lex_state = 241},
  [253] = {.lex_state = 241},
  [254] = {.lex_state = 241},
  [255] = {.lex_state = 241},
  [256] = {.lex_state = 241},
  [257] = {.lex_state = 241},
  [258] = {.lex_state = 241},
  [259] = {.lex_state = 241},
  [260] = {.lex_state = 241},
  [261] = {.lex_state = 241},
  [262] = {.lex_state = 241},
  [263] = {.lex_state = 241},
  [264] = {.lex_state = 241},
  [265] = {.lex_state = 241},
  [266] = {.lex_state = 241},
  [267] = {.lex_state = 241},
  [268] = {.lex_state = 241},
  [269] = {.lex_state = 241},
  [270] = {.lex_state = 241},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 241},
  [273] = {.lex_state = 241},
  [274] = {.lex_state = 241},
  [275] = {.lex_state = 241},
  [276] = {.lex_state = 241},
  [277] = {.lex_state = 241},
  [278] = {.lex_state = 241},
  [279] = {.lex_state = 241},
  [280] = {.lex_state = 241},
  [281] = {.lex_state = 241},
  [282] = {.lex_state = 241},
  [283] = {.lex_state = 241},
  [284] = {.lex_state = 241},
  [285] = {.lex_state = 241},
  [286] = {.lex_state = 241},
  [287] = {.lex_state = 241},
  [288] = {.lex_state = 241},
  [289] = {.lex_state = 241},
  [290] = {.lex_state = 241},
  [291] = {.lex_state = 241},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 241},
  [294] = {.lex_state = 241},
  [295] = {.lex_state = 241},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 250},
  [304] = {.lex_state = 250},
  [305] = {.lex_state = 250},
  [306] = {.lex_state = 250},
  [307] = {.lex_state = 250},
  [308] = {.lex_state = 250},
  [309] = {.lex_state = 250},
  [310] = {.lex_state = 250},
  [311] = {.lex_state = 250},
  [312] = {.lex_state = 250},
  [313] = {.lex_state = 250},
  [314] = {.lex_state = 250},
  [315] = {.lex_state = 250},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 14},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 34},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 34},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 17},
  [330] = {.lex_state = 14},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 35},
  [333] = {.lex_state = 14},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 19},
  [336] = {.lex_state = 19},
  [337] = {.lex_state = 35},
  [338] = {.lex_state = 35},
  [339] = {.lex_state = 35},
  [340] = {.lex_state = 19},
  [341] = {.lex_state = 17},
  [342] = {.lex_state = 19},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 17},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 17},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 15},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 14},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 19},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 14},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 36},
  [365] = {.lex_state = 36},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 14},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 14},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 14},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 14},
  [380] = {.lex_state = 14},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 81},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 81},
  [388] = {.lex_state = 14},
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
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 250},
  [402] = {.lex_state = 250},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 14},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 18},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 250},
  [419] = {.lex_state = 14},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 18},
  [424] = {.lex_state = 18},
  [425] = {.lex_state = 18},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 250},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 14},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 14},
  [442] = {.lex_state = 250},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 250},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 250},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 237},
  [452] = {.lex_state = 14},
  [453] = {.lex_state = 18},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 18},
  [456] = {.lex_state = 250},
  [457] = {.lex_state = 14},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 18},
  [460] = {.lex_state = 250},
  [461] = {.lex_state = 250},
  [462] = {.lex_state = 18},
  [463] = {.lex_state = 250},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 19},
  [467] = {.lex_state = 18},
  [468] = {.lex_state = 238},
  [469] = {.lex_state = 250},
  [470] = {.lex_state = 81},
  [471] = {.lex_state = 81},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 18},
  [474] = {.lex_state = 18},
  [475] = {.lex_state = 29},
  [476] = {.lex_state = 29},
  [477] = {.lex_state = 29},
  [478] = {.lex_state = 14},
  [479] = {.lex_state = 18},
  [480] = {.lex_state = 250},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 250},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 250},
  [485] = {.lex_state = 14},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 250},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 18},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 30},
  [492] = {.lex_state = 250},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 250},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 250},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 250},
  [500] = {.lex_state = 250},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 239},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 250},
  [507] = {.lex_state = 250},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 250},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 18},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 250},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 250},
  [517] = {.lex_state = 250},
  [518] = {.lex_state = 250},
  [519] = {.lex_state = 250},
  [520] = {.lex_state = 250},
  [521] = {.lex_state = 250},
  [522] = {.lex_state = 250},
  [523] = {.lex_state = 250},
  [524] = {.lex_state = 250},
  [525] = {.lex_state = 30},
  [526] = {.lex_state = 250},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 250},
  [529] = {.lex_state = 250},
  [530] = {.lex_state = 250},
  [531] = {.lex_state = 250},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 239},
  [547] = {.lex_state = 250},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 29},
  [550] = {.lex_state = 15},
  [551] = {.lex_state = 250},
  [552] = {.lex_state = 250},
  [553] = {.lex_state = 250},
  [554] = {.lex_state = 250},
  [555] = {.lex_state = 250},
  [556] = {.lex_state = 250},
  [557] = {.lex_state = 250},
  [558] = {.lex_state = 250},
  [559] = {.lex_state = 250},
  [560] = {.lex_state = 30},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 29},
  [564] = {.lex_state = 29},
  [565] = {.lex_state = 250},
  [566] = {.lex_state = 239},
  [567] = {.lex_state = 250},
  [568] = {.lex_state = 250},
  [569] = {.lex_state = 250},
  [570] = {.lex_state = 250},
  [571] = {.lex_state = 250},
  [572] = {.lex_state = 250},
  [573] = {.lex_state = 250},
  [574] = {.lex_state = 250},
  [575] = {.lex_state = 250},
  [576] = {.lex_state = 250},
  [577] = {.lex_state = 250},
  [578] = {.lex_state = 239},
  [579] = {.lex_state = 250},
  [580] = {.lex_state = 237},
  [581] = {.lex_state = 15},
  [582] = {.lex_state = 30},
  [583] = {.lex_state = 250},
  [584] = {.lex_state = 14},
  [585] = {.lex_state = 250},
  [586] = {.lex_state = 250},
  [587] = {.lex_state = 250},
  [588] = {.lex_state = 250},
  [589] = {.lex_state = 15},
  [590] = {.lex_state = 250},
  [591] = {.lex_state = 250},
  [592] = {.lex_state = 250},
  [593] = {.lex_state = 250},
  [594] = {.lex_state = 250},
  [595] = {.lex_state = 250},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 250},
  [598] = {.lex_state = 250},
  [599] = {.lex_state = 250},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Json] = ACTIONS(1),
    [anon_sym_Part] = ACTIONS(1),
    [anon_sym_Pack] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [sym_block_language] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_hands] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
    [anon_sym_recall] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_instruct] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_assistant] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [sym_psyche_keyword] = ACTIONS(1),
    [sym_skill_keyword] = ACTIONS(1),
    [sym_service_keyword] = ACTIONS(1),
    [sym_prompt_keyword] = ACTIONS(1),
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
    [sym_optional_marker] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_cap_kind] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
    [sym_flow_bare_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(561),
    [sym_item] = STATE(36),
    [sym_newline] = STATE(151),
    [sym_blank_line] = STATE(36),
    [sym_use] = STATE(240),
    [sym_struct] = STATE(240),
    [sym_psyche] = STATE(240),
    [sym_skill] = STATE(240),
    [sym_service] = STATE(240),
    [sym_prompt] = STATE(240),
    [sym_task] = STATE(240),
    [sym_chore] = STATE(240),
    [sym_instruct] = STATE(240),
    [sym_context] = STATE(240),
    [sym_thunk] = STATE(240),
    [sym_flow] = STATE(240),
    [sym_context_keyword] = STATE(455),
    [sym_instruct_keyword] = STATE(473),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_parent_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(9),
    [anon_sym_context] = ACTIONS(11),
    [anon_sym_instruct] = ACTIONS(13),
    [sym_use_keyword] = ACTIONS(15),
    [sym_struct_keyword] = ACTIONS(17),
    [sym_psyche_keyword] = ACTIONS(19),
    [sym_skill_keyword] = ACTIONS(21),
    [sym_service_keyword] = ACTIONS(23),
    [sym_prompt_keyword] = ACTIONS(25),
    [sym_thunk_keyword] = ACTIONS(27),
    [sym_task_keyword] = ACTIONS(29),
    [sym_chore_keyword] = ACTIONS(31),
    [sym_flow_keyword] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    STATE(39), 1,
      sym_instruction_section,
    STATE(73), 1,
      sym_newline,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(258), 1,
      sym_thunk_tail,
    STATE(267), 1,
      sym_message_section,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(3), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(39), 12,
      sym_parent_doc_comment,
      sym_doc_comment,
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
  [105] = 27,
    ACTIONS(37), 1,
      aux_sym_newline_token1,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_line_comment,
    STATE(38), 1,
      sym_instruction_section,
    STATE(73), 1,
      sym_newline,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(249), 1,
      sym_thunk_tail,
    STATE(267), 1,
      sym_message_section,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(35), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(57), 12,
      sym_parent_doc_comment,
      sym_doc_comment,
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
  [210] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(272), 1,
      sym_thunk_body,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(63), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [309] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(255), 1,
      sym_thunk_body,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(67), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [408] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(278), 1,
      sym_thunk_body,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(71), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [507] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(247), 1,
      sym_thunk_body,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(75), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [606] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(257), 1,
      sym_thunk_body,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(79), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [705] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(294), 1,
      sym_thunk_body,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(83), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [804] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(284), 1,
      sym_thunk_body,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(87), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [903] = 25,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(42), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_instruct_block,
    STATE(174), 1,
      sym_context_block,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_thunk_body,
    STATE(267), 1,
      sym_message_section,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(442), 1,
      sym_directive_key,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(43), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(91), 14,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
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
  [1002] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(102), 1,
      sym_until_clause,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1092] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(96), 1,
      sym_until_clause,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    ACTIONS(123), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(17), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1182] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(127), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(167), 1,
      sym_until_clause,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1272] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(127), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(168), 1,
      sym_until_clause,
    ACTIONS(131), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(18), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1362] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(127), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(164), 1,
      sym_until_clause,
    ACTIONS(133), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(14), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1452] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(99), 1,
      sym_until_clause,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1542] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(127), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(127), 1,
      sym_until_clause,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1632] = 21,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(125), 1,
      sym_until_clause,
    ACTIONS(135), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(12), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [1722] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(151), 1,
      sym_newline,
    STATE(266), 1,
      sym_pass_statement,
    ACTIONS(139), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(21), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(137), 14,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [1811] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(151), 1,
      sym_newline,
    STATE(269), 1,
      sym_pass_statement,
    ACTIONS(165), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(26), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [1900] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(151), 1,
      sym_newline,
    STATE(269), 1,
      sym_pass_statement,
    ACTIONS(167), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [1989] = 19,
    ACTIONS(171), 1,
      aux_sym_newline_token1,
    ACTIONS(177), 1,
      sym_flow_do_keyword,
    ACTIONS(180), 1,
      sym_flow_ask_keyword,
    ACTIONS(183), 1,
      sym_flow_unfold_keyword,
    ACTIONS(186), 1,
      sym_flow_keep_keyword,
    ACTIONS(189), 1,
      sym_flow_drop_keyword,
    ACTIONS(192), 1,
      sym_flow_rank_keyword,
    ACTIONS(195), 1,
      sym_flow_each_keyword,
    ACTIONS(198), 1,
      sym_flow_fold_keyword,
    ACTIONS(201), 1,
      sym_flow_repeat_keyword,
    ACTIONS(204), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(112), 1,
      sym_newline,
    STATE(118), 1,
      sym_implicit_thunk_body,
    ACTIONS(174), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
      sym_flow_until_keyword,
  [2074] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(151), 1,
      sym_newline,
    STATE(245), 1,
      sym_pass_statement,
    ACTIONS(165), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(26), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(207), 14,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [2163] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(253), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2263] = 19,
    ACTIONS(217), 1,
      aux_sym_newline_token1,
    ACTIONS(223), 1,
      sym_flow_do_keyword,
    ACTIONS(226), 1,
      sym_flow_ask_keyword,
    ACTIONS(229), 1,
      sym_flow_unfold_keyword,
    ACTIONS(232), 1,
      sym_flow_keep_keyword,
    ACTIONS(235), 1,
      sym_flow_drop_keyword,
    ACTIONS(238), 1,
      sym_flow_rank_keyword,
    ACTIONS(241), 1,
      sym_flow_each_keyword,
    ACTIONS(244), 1,
      sym_flow_fold_keyword,
    ACTIONS(247), 1,
      sym_flow_repeat_keyword,
    ACTIONS(250), 1,
      sym_flow_bare_raw_text,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(151), 1,
      sym_newline,
    ACTIONS(220), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(26), 3,
      sym_blank_line,
      sym_flow_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
    ACTIONS(169), 15,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_pass_keyword,
  [2347] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(262), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2447] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(241), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2547] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(254), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2647] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(242), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2747] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(280), 1,
      sym_flow_body,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2847] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(285), 1,
      sym_flow_body,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [2947] = 27,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(260), 1,
      sym_flow_body,
    STATE(263), 1,
      sym_flow_body_tail,
    STATE(265), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [3047] = 26,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_doc_comment,
    ACTIONS(213), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(265), 1,
      sym_pass_statement,
    STATE(295), 1,
      sym_flow_body_tail,
    STATE(297), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(181), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(215), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [3144] = 8,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      aux_sym_newline_token1,
    ACTIONS(260), 1,
      sym_line_comment,
    STATE(73), 1,
      sym_newline,
    STATE(442), 1,
      sym_directive_key,
    STATE(35), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(263), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(258), 19,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [3196] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(11), 1,
      anon_sym_context,
    ACTIONS(13), 1,
      anon_sym_instruct,
    ACTIONS(15), 1,
      sym_use_keyword,
    ACTIONS(17), 1,
      sym_struct_keyword,
    ACTIONS(19), 1,
      sym_psyche_keyword,
    ACTIONS(21), 1,
      sym_skill_keyword,
    ACTIONS(23), 1,
      sym_service_keyword,
    ACTIONS(25), 1,
      sym_prompt_keyword,
    ACTIONS(27), 1,
      sym_thunk_keyword,
    ACTIONS(29), 1,
      sym_task_keyword,
    ACTIONS(31), 1,
      sym_chore_keyword,
    ACTIONS(33), 1,
      sym_flow_keyword,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym_parent_doc_comment,
    STATE(151), 1,
      sym_newline,
    STATE(455), 1,
      sym_context_keyword,
    STATE(473), 1,
      sym_instruct_keyword,
    ACTIONS(270), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(41), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(240), 12,
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
  [3274] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(278), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(259), 1,
      sym_thunk_tail,
    STATE(267), 1,
      sym_message_section,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(276), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3346] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(290), 1,
      sym_thunk_tail,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(37), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(282), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3418] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(248), 1,
      sym_thunk_tail,
    STATE(267), 1,
      sym_message_section,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(43), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(288), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3490] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(278), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(250), 1,
      sym_thunk_tail,
    STATE(267), 1,
      sym_message_section,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(294), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3562] = 21,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(301), 1,
      sym_parent_doc_comment,
    ACTIONS(307), 1,
      anon_sym_context,
    ACTIONS(310), 1,
      anon_sym_instruct,
    ACTIONS(313), 1,
      sym_use_keyword,
    ACTIONS(316), 1,
      sym_struct_keyword,
    ACTIONS(319), 1,
      sym_psyche_keyword,
    ACTIONS(322), 1,
      sym_skill_keyword,
    ACTIONS(325), 1,
      sym_service_keyword,
    ACTIONS(328), 1,
      sym_prompt_keyword,
    ACTIONS(331), 1,
      sym_thunk_keyword,
    ACTIONS(334), 1,
      sym_task_keyword,
    ACTIONS(337), 1,
      sym_chore_keyword,
    ACTIONS(340), 1,
      sym_flow_keyword,
    STATE(151), 1,
      sym_newline,
    STATE(455), 1,
      sym_context_keyword,
    STATE(473), 1,
      sym_instruct_keyword,
    ACTIONS(304), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(41), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(240), 12,
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
  [3640] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(283), 1,
      sym_thunk_tail,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(345), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3712] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(278), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(198), 1,
      sym_newline,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(246), 1,
      sym_pass_statement,
    STATE(267), 1,
      sym_message_section,
    STATE(289), 1,
      sym_thunk_tail,
    STATE(579), 1,
      sym_roled_message_kind,
    STATE(58), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(351), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [3784] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      aux_sym_newline_token1,
    ACTIONS(359), 1,
      sym_indented_raw_text,
    STATE(64), 1,
      sym_newline,
    STATE(46), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 27,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_flow_bare_raw_text,
  [3831] = 6,
    ACTIONS(355), 1,
      aux_sym_newline_token1,
    ACTIONS(359), 1,
      sym_indented_raw_text,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_newline,
    STATE(44), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(363), 27,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_flow_bare_raw_text,
  [3878] = 6,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      aux_sym_newline_token1,
    ACTIONS(372), 1,
      sym_indented_raw_text,
    STATE(64), 1,
      sym_newline,
    STATE(46), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(370), 27,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_flow_bare_raw_text,
  [3925] = 7,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(382), 1,
      sym_flow_bare_raw_text,
    STATE(525), 1,
      sym_blank_line,
    STATE(560), 1,
      sym_newline,
    ACTIONS(380), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(47), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(375), 25,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [3973] = 7,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(66), 1,
      sym_blank_line,
    STATE(112), 1,
      sym_newline,
    ACTIONS(387), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(51), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(385), 25,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [4021] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      aux_sym_newline_token1,
    ACTIONS(391), 1,
      sym_indented_raw_text,
    STATE(110), 1,
      sym_newline,
    STATE(52), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 26,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [4067] = 6,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      aux_sym_newline_token1,
    ACTIONS(391), 1,
      sym_indented_raw_text,
    STATE(110), 1,
      sym_newline,
    STATE(49), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(363), 26,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [4113] = 7,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(69), 1,
      sym_blank_line,
    STATE(112), 1,
      sym_newline,
    ACTIONS(395), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(47), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(393), 25,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [4161] = 6,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_indented_raw_text,
    STATE(110), 1,
      sym_newline,
    STATE(52), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(370), 26,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [4207] = 22,
    ACTIONS(141), 1,
      sym_pass_keyword,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_unfold_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_rank_keyword,
    ACTIONS(155), 1,
      sym_flow_each_keyword,
    ACTIONS(157), 1,
      sym_flow_fold_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(403), 1,
      sym_doc_comment,
    ACTIONS(405), 1,
      sym_line_comment,
    STATE(22), 1,
      sym_flow_statement,
    STATE(54), 1,
      sym_flow_bare_content_line,
    STATE(128), 1,
      sym_flow_statement_entry,
    STATE(130), 1,
      sym_implicit_thunk_body,
    STATE(266), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_newline,
    STATE(292), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(126), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [4284] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(119), 1,
      sym_blank_line,
    STATE(151), 1,
      sym_newline,
    ACTIONS(387), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(56), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(385), 24,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4331] = 7,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(407), 1,
      sym_flow_bare_raw_text,
    STATE(491), 1,
      sym_blank_line,
    STATE(560), 1,
      sym_newline,
    ACTIONS(380), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(55), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(375), 24,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4378] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(89), 1,
      sym_blank_line,
    STATE(151), 1,
      sym_newline,
    ACTIONS(395), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(55), 2,
      sym_flow_bare_content_line,
      aux_sym_implicit_thunk_body_repeat1,
    ACTIONS(393), 24,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4425] = 21,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(412), 1,
      sym_doc_comment,
    ACTIONS(414), 1,
      sym_line_comment,
    STATE(16), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(157), 1,
      sym_repeat_block_body,
    STATE(302), 1,
      sym_newline,
    STATE(71), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [4499] = 13,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(422), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(218), 1,
      sym_newline,
    STATE(579), 1,
      sym_roled_message_kind,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(59), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(420), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4557] = 13,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(218), 1,
      sym_newline,
    STATE(579), 1,
      sym_roled_message_kind,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(63), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(426), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4615] = 21,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(430), 1,
      sym_doc_comment,
    ACTIONS(432), 1,
      sym_line_comment,
    STATE(13), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(98), 1,
      sym_repeat_block_body,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(302), 1,
      sym_newline,
    STATE(74), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [4689] = 21,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(412), 1,
      sym_doc_comment,
    ACTIONS(414), 1,
      sym_line_comment,
    STATE(16), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(166), 1,
      sym_repeat_block_body,
    STATE(302), 1,
      sym_newline,
    STATE(71), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [4763] = 21,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(430), 1,
      sym_doc_comment,
    ACTIONS(432), 1,
      sym_line_comment,
    STATE(13), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(93), 1,
      sym_repeat_block_body,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(302), 1,
      sym_newline,
    STATE(74), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [4837] = 13,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(436), 1,
      aux_sym_newline_token1,
    ACTIONS(441), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      sym_indented_raw_text,
    STATE(187), 1,
      sym_block_indented_content_line,
    STATE(208), 1,
      sym_unroled_message_block,
    STATE(209), 1,
      sym_block_indented_implicit,
    STATE(211), 1,
      sym_roled_message_block,
    STATE(218), 1,
      sym_newline,
    STATE(579), 1,
      sym_roled_message_kind,
    ACTIONS(444), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(63), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(439), 14,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [4895] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 29,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_indented_raw_text,
      sym_flow_bare_raw_text,
  [4930] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 29,
      aux_sym_newline_token1,
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
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [4965] = 4,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(87), 1,
      sym_flow_bare_content_line,
    ACTIONS(395), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(393), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5004] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 29,
      aux_sym_newline_token1,
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
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [5039] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 29,
      aux_sym_newline_token1,
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
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [5074] = 4,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(87), 1,
      sym_flow_bare_content_line,
    ACTIONS(468), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(466), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5113] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 29,
      aux_sym_newline_token1,
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
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [5148] = 20,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(474), 1,
      sym_doc_comment,
    ACTIONS(476), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(302), 1,
      sym_newline,
    STATE(296), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [5219] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 29,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_indented_raw_text,
      sym_flow_bare_raw_text,
  [5254] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 29,
      aux_sym_newline_token1,
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
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [5289] = 20,
    ACTIONS(99), 1,
      sym_flow_do_keyword,
    ACTIONS(101), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_unfold_keyword,
    ACTIONS(105), 1,
      sym_flow_keep_keyword,
    ACTIONS(107), 1,
      sym_flow_drop_keyword,
    ACTIONS(109), 1,
      sym_flow_rank_keyword,
    ACTIONS(111), 1,
      sym_flow_each_keyword,
    ACTIONS(113), 1,
      sym_flow_fold_keyword,
    ACTIONS(115), 1,
      sym_flow_repeat_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(474), 1,
      sym_doc_comment,
    ACTIONS(476), 1,
      sym_line_comment,
    STATE(19), 1,
      sym_flow_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(106), 1,
      sym_flow_statement_entry,
    STATE(118), 1,
      sym_implicit_thunk_body,
    STATE(302), 1,
      sym_newline,
    STATE(296), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(108), 10,
      sym_implicit_thunk_statement,
      sym_do_statement,
      sym_ask_statement,
      sym_unfold_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_rank_statement,
      sym_each_statement,
      sym_fold_statement,
      sym_repeat_statement,
  [5360] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 29,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
      sym_indented_raw_text,
      sym_flow_bare_raw_text,
  [5395] = 2,
    ACTIONS(484), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(482), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5429] = 2,
    ACTIONS(488), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(486), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5463] = 2,
    ACTIONS(492), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(490), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5497] = 2,
    ACTIONS(496), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(494), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5531] = 2,
    ACTIONS(500), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(498), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5565] = 2,
    ACTIONS(504), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(502), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5599] = 2,
    ACTIONS(508), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(506), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5633] = 2,
    ACTIONS(512), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(510), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5667] = 2,
    ACTIONS(516), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(514), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5701] = 2,
    ACTIONS(520), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(518), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5735] = 2,
    ACTIONS(524), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(522), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5769] = 2,
    ACTIONS(380), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(375), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5803] = 2,
    ACTIONS(528), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(526), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5837] = 4,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(147), 1,
      sym_flow_bare_content_line,
    ACTIONS(468), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(466), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [5875] = 2,
    ACTIONS(532), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(530), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5909] = 2,
    ACTIONS(536), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(534), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5943] = 2,
    ACTIONS(540), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(538), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [5977] = 2,
    ACTIONS(544), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(542), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6011] = 2,
    ACTIONS(548), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(546), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6045] = 2,
    ACTIONS(552), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(550), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6079] = 2,
    ACTIONS(556), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(554), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6113] = 2,
    ACTIONS(560), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(558), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6147] = 2,
    ACTIONS(564), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(562), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6181] = 2,
    ACTIONS(568), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(566), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6215] = 2,
    ACTIONS(572), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(570), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6249] = 2,
    ACTIONS(576), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(574), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6283] = 2,
    ACTIONS(580), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(578), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6317] = 2,
    ACTIONS(584), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(582), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6351] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 28,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [6385] = 2,
    ACTIONS(588), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(586), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6419] = 2,
    ACTIONS(592), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(590), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6453] = 2,
    ACTIONS(596), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(594), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6487] = 2,
    ACTIONS(600), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(598), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6521] = 2,
    ACTIONS(604), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(602), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6555] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 28,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [6589] = 2,
    ACTIONS(608), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(606), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6623] = 2,
    ACTIONS(452), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(450), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6657] = 2,
    ACTIONS(464), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(462), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6691] = 2,
    ACTIONS(460), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(458), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6725] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 28,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_bare_raw_text,
  [6759] = 2,
    ACTIONS(612), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(610), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6793] = 2,
    ACTIONS(472), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(470), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6827] = 2,
    ACTIONS(616), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(614), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6861] = 4,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(147), 1,
      sym_flow_bare_content_line,
    ACTIONS(395), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(393), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [6899] = 2,
    ACTIONS(620), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(618), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6933] = 2,
    ACTIONS(624), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(622), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [6967] = 2,
    ACTIONS(628), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(626), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [7001] = 2,
    ACTIONS(632), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(630), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [7035] = 2,
    ACTIONS(636), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(634), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [7069] = 2,
    ACTIONS(640), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(638), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_flow_until_keyword,
  [7103] = 2,
    ACTIONS(600), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(598), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7136] = 2,
    ACTIONS(580), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(578), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7169] = 2,
    ACTIONS(592), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(590), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7202] = 2,
    ACTIONS(472), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(470), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7235] = 2,
    ACTIONS(616), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(614), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7268] = 2,
    ACTIONS(584), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(582), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7301] = 2,
    ACTIONS(588), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(586), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7334] = 2,
    ACTIONS(596), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(594), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7367] = 2,
    ACTIONS(604), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(602), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7400] = 2,
    ACTIONS(608), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(606), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7433] = 2,
    ACTIONS(612), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(610), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7466] = 2,
    ACTIONS(620), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(618), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7499] = 2,
    ACTIONS(488), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(486), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7532] = 2,
    ACTIONS(492), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(490), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7565] = 2,
    ACTIONS(496), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(494), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7598] = 2,
    ACTIONS(500), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(498), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7631] = 2,
    ACTIONS(504), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(502), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7664] = 2,
    ACTIONS(508), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(506), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7697] = 2,
    ACTIONS(512), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(510), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7730] = 2,
    ACTIONS(516), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(514), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7763] = 2,
    ACTIONS(520), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(518), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7796] = 2,
    ACTIONS(380), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(375), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7829] = 2,
    ACTIONS(624), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(622), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7862] = 2,
    ACTIONS(628), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(626), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7895] = 2,
    ACTIONS(632), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(630), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7928] = 2,
    ACTIONS(452), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(450), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7961] = 2,
    ACTIONS(540), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(538), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [7994] = 2,
    ACTIONS(532), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(530), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8027] = 2,
    ACTIONS(536), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(534), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8060] = 2,
    ACTIONS(484), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(482), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8093] = 2,
    ACTIONS(572), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(570), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8126] = 2,
    ACTIONS(544), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(542), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8159] = 2,
    ACTIONS(524), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(522), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8192] = 2,
    ACTIONS(528), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(526), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8225] = 2,
    ACTIONS(548), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(546), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8258] = 2,
    ACTIONS(552), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(550), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8291] = 2,
    ACTIONS(464), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(462), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8324] = 2,
    ACTIONS(460), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(458), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8357] = 2,
    ACTIONS(556), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(554), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8390] = 2,
    ACTIONS(560), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(558), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8423] = 2,
    ACTIONS(564), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(562), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8456] = 2,
    ACTIONS(568), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(566), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8489] = 2,
    ACTIONS(640), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(638), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8522] = 2,
    ACTIONS(576), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(574), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8555] = 2,
    ACTIONS(636), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(634), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [8588] = 9,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(278), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_instruct_block,
    STATE(198), 1,
      sym_newline,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(644), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [8634] = 9,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 1,
      sym_line_comment,
    STATE(194), 1,
      sym_context_block,
    STATE(198), 1,
      sym_newline,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(173), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(648), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [8680] = 9,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(278), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_context_block,
    STATE(198), 1,
      sym_newline,
    STATE(384), 1,
      sym_context_block_kind,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(644), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [8726] = 9,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(274), 1,
      aux_sym_newline_token1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 1,
      sym_line_comment,
    STATE(194), 1,
      sym_instruct_block,
    STATE(198), 1,
      sym_newline,
    STATE(387), 1,
      sym_instruct_block_kind,
    STATE(171), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(648), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [8772] = 6,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 1,
      aux_sym_newline_token1,
    ACTIONS(657), 1,
      sym_indented_raw_text,
    STATE(218), 1,
      sym_newline,
    STATE(175), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(370), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
  [8810] = 9,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(662), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_value_name,
    ACTIONS(670), 1,
      sym_indented_raw_text,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(664), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(186), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_body_repeat1,
    ACTIONS(666), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [8854] = 9,
    ACTIONS(662), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_value_name,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(678), 1,
      sym_indented_raw_text,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(674), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(179), 4,
      sym_blank_line,
      sym_job_indented_content_line,
      sym_property_eq,
      aux_sym_job_body_repeat1,
    ACTIONS(676), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [8898] = 6,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
    ACTIONS(682), 1,
      aux_sym_newline_token1,
    ACTIONS(687), 1,
      sym_line_comment,
    STATE(198), 1,
      sym_newline,
    STATE(178), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(685), 19,
      sym_parent_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [8936] = 9,
    ACTIONS(662), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_value_name,
    ACTIONS(678), 1,
      sym_indented_raw_text,
    ACTIONS(690), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(692), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(180), 4,
      sym_blank_line,
      sym_job_indented_content_line,
      sym_property_eq,
      aux_sym_job_body_repeat1,
    ACTIONS(694), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [8980] = 9,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      aux_sym_newline_token1,
    ACTIONS(706), 1,
      sym_value_name,
    ACTIONS(709), 1,
      sym_indented_raw_text,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(701), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(180), 4,
      sym_blank_line,
      sym_job_indented_content_line,
      sym_property_eq,
      aux_sym_job_body_repeat1,
    ACTIONS(704), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [9024] = 5,
    STATE(447), 1,
      sym_directive_key,
    ACTIONS(714), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    STATE(181), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(716), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(712), 12,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [9060] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    STATE(218), 1,
      sym_newline,
    STATE(175), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
  [9098] = 9,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 1,
      aux_sym_newline_token1,
    ACTIONS(729), 1,
      sym_value_name,
    ACTIONS(732), 1,
      sym_indented_raw_text,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(724), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(183), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_body_repeat1,
    ACTIONS(727), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [9142] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      sym_newline,
    STATE(185), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(737), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
  [9180] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      sym_newline,
    STATE(175), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(741), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
  [9218] = 9,
    ACTIONS(662), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_value_name,
    ACTIONS(670), 1,
      sym_indented_raw_text,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_newline,
    STATE(499), 1,
      sym_property_key,
    ACTIONS(745), 3,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
    STATE(183), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_body_repeat1,
    ACTIONS(747), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [9262] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    STATE(218), 1,
      sym_newline,
    STATE(182), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(363), 18,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
  [9300] = 8,
    ACTIONS(751), 1,
      aux_sym_newline_token1,
    ACTIONS(759), 1,
      sym_value_name,
    STATE(237), 1,
      sym_newline,
    STATE(494), 1,
      sym_field_name,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(754), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(188), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(757), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [9340] = 8,
    ACTIONS(764), 1,
      aux_sym_newline_token1,
    ACTIONS(770), 1,
      sym_value_name,
    STATE(237), 1,
      sym_newline,
    STATE(494), 1,
      sym_field_name,
    ACTIONS(762), 2,
      ts_builtin_sym_end,
      sym_parent_doc_comment,
    ACTIONS(766), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(188), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(768), 12,
      anon_sym_context,
      anon_sym_instruct,
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
  [9380] = 2,
    ACTIONS(460), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(458), 20,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [9407] = 6,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    ACTIONS(772), 1,
      aux_sym_newline_token1,
    ACTIONS(774), 1,
      sym_indented_raw_text,
    STATE(233), 1,
      sym_newline,
    STATE(196), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(737), 15,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [9442] = 2,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    ACTIONS(778), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9469] = 2,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
    ACTIONS(782), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9496] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9523] = 2,
    ACTIONS(456), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(454), 20,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [9550] = 6,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    ACTIONS(772), 1,
      aux_sym_newline_token1,
    ACTIONS(774), 1,
      sym_indented_raw_text,
    STATE(233), 1,
      sym_newline,
    STATE(201), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(741), 15,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [9585] = 2,
    ACTIONS(464), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(462), 20,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [9612] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9639] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9666] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9693] = 6,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(784), 1,
      aux_sym_newline_token1,
    ACTIONS(787), 1,
      sym_indented_raw_text,
    STATE(233), 1,
      sym_newline,
    STATE(201), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(370), 15,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [9728] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9755] = 2,
    ACTIONS(790), 1,
      ts_builtin_sym_end,
    ACTIONS(792), 21,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [9782] = 2,
    ACTIONS(472), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(470), 20,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [9809] = 2,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    ACTIONS(796), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9835] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9861] = 2,
    ACTIONS(798), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9887] = 2,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    ACTIONS(804), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9913] = 2,
    ACTIONS(806), 1,
      ts_builtin_sym_end,
    ACTIONS(808), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9939] = 2,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
    ACTIONS(812), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9965] = 2,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
    ACTIONS(816), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [9991] = 2,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    ACTIONS(820), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10017] = 2,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    ACTIONS(824), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10043] = 2,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
    ACTIONS(828), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10069] = 2,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
    ACTIONS(832), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10095] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10121] = 2,
    ACTIONS(834), 1,
      ts_builtin_sym_end,
    ACTIONS(836), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10147] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10173] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10199] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10225] = 2,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 20,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
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
      sym_indented_raw_text,
  [10251] = 2,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(844), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10275] = 2,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10299] = 2,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(852), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10323] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10347] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10371] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10395] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 18,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
      sym_indented_raw_text,
  [10419] = 2,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(460), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10442] = 2,
    ACTIONS(854), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(856), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10465] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 17,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_indented_raw_text,
  [10488] = 2,
    ACTIONS(858), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(860), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10511] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 17,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_indented_raw_text,
  [10534] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 17,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_indented_raw_text,
  [10557] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 17,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_indented_raw_text,
  [10580] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 17,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_indented_raw_text,
  [10603] = 2,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(452), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10626] = 2,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(472), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10649] = 2,
    ACTIONS(462), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
    ACTIONS(464), 15,
      sym_doc_comment,
      sym_line_comment,
      anon_sym_context,
      anon_sym_instruct,
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
      sym_value_name,
  [10672] = 2,
    ACTIONS(864), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(862), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10694] = 2,
    ACTIONS(868), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(866), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10716] = 2,
    ACTIONS(872), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(870), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10738] = 2,
    ACTIONS(812), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(810), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10760] = 2,
    ACTIONS(876), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(874), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10782] = 2,
    ACTIONS(880), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(878), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10804] = 2,
    ACTIONS(884), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(882), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10826] = 2,
    ACTIONS(888), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(886), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10848] = 2,
    ACTIONS(892), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(890), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10870] = 2,
    ACTIONS(896), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(894), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10892] = 2,
    ACTIONS(900), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(898), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10914] = 2,
    ACTIONS(904), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(902), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10936] = 2,
    ACTIONS(908), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(906), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10958] = 2,
    ACTIONS(912), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(910), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [10980] = 2,
    ACTIONS(916), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(914), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11002] = 2,
    ACTIONS(920), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(918), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11024] = 2,
    ACTIONS(836), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(834), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11046] = 2,
    ACTIONS(924), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(922), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11068] = 2,
    ACTIONS(928), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(926), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11090] = 2,
    ACTIONS(932), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(930), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11112] = 2,
    ACTIONS(936), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(934), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11134] = 2,
    ACTIONS(940), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(938), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11156] = 2,
    ACTIONS(944), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(942), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11178] = 2,
    ACTIONS(948), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(946), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11200] = 2,
    ACTIONS(952), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(950), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11222] = 2,
    ACTIONS(954), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11244] = 2,
    ACTIONS(956), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(163), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11266] = 2,
    ACTIONS(960), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(958), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11288] = 2,
    ACTIONS(964), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(962), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11310] = 2,
    ACTIONS(966), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(207), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11332] = 2,
    ACTIONS(970), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(968), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11354] = 13,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(972), 1,
      sym_inline_comment,
    ACTIONS(974), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(978), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(184), 1,
      sym_line_end,
    STATE(212), 1,
      sym_block_value,
    STATE(216), 1,
      sym_newline,
    STATE(370), 1,
      sym_fence_open,
    STATE(414), 1,
      sym_block_name,
    STATE(415), 1,
      sym_block_content_inline,
    STATE(545), 1,
      sym_inline_text,
    ACTIONS(976), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(207), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [11398] = 2,
    ACTIONS(982), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(980), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11420] = 2,
    ACTIONS(986), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(984), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11442] = 2,
    ACTIONS(990), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(988), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11464] = 2,
    ACTIONS(994), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(992), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11486] = 2,
    ACTIONS(998), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(996), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11508] = 2,
    ACTIONS(1002), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1000), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11530] = 2,
    ACTIONS(1006), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1004), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11552] = 2,
    ACTIONS(1010), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1008), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11574] = 2,
    ACTIONS(1014), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1012), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11596] = 2,
    ACTIONS(1018), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1016), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11618] = 2,
    ACTIONS(1022), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1020), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11640] = 2,
    ACTIONS(1026), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1024), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11662] = 2,
    ACTIONS(1030), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1028), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11684] = 2,
    ACTIONS(1034), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1032), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11706] = 2,
    ACTIONS(824), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(822), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11728] = 2,
    ACTIONS(828), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(826), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11750] = 2,
    ACTIONS(832), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(830), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11772] = 2,
    ACTIONS(1038), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1036), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11794] = 2,
    ACTIONS(1042), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1040), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11816] = 2,
    ACTIONS(1046), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1044), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11838] = 7,
    ACTIONS(1048), 1,
      aux_sym_newline_token1,
    ACTIONS(1051), 1,
      sym_doc_comment,
    ACTIONS(1054), 1,
      sym_line_comment,
    ACTIONS(1059), 1,
      sym_flow_bare_raw_text,
    STATE(297), 1,
      sym_newline,
    STATE(292), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(1057), 10,
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
  [11870] = 2,
    ACTIONS(1063), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1061), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11892] = 2,
    ACTIONS(1067), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1065), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11914] = 2,
    ACTIONS(1071), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1069), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_parent_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
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
  [11936] = 7,
    ACTIONS(1059), 1,
      sym_flow_bare_raw_text,
    ACTIONS(1073), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_doc_comment,
    ACTIONS(1079), 1,
      sym_line_comment,
    STATE(302), 1,
      sym_newline,
    STATE(296), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(1057), 9,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [11967] = 2,
    ACTIONS(452), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(450), 12,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [11986] = 2,
    ACTIONS(472), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(470), 12,
      aux_sym_newline_token1,
      sym_doc_comment,
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
  [12005] = 2,
    ACTIONS(464), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(462), 11,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [12023] = 2,
    ACTIONS(460), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(458), 11,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [12041] = 2,
    ACTIONS(472), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(470), 11,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [12059] = 2,
    ACTIONS(452), 2,
      sym_line_comment,
      sym_flow_bare_raw_text,
    ACTIONS(450), 11,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [12077] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(576), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12099] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(588), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12121] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(573), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12143] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(485), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12165] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(574), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12187] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(557), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12209] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(547), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12231] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(567), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12253] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(377), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12275] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(528), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12297] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(569), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12319] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(435), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12341] = 5,
    ACTIONS(1084), 1,
      sym_type_name,
    STATE(324), 1,
      sym_base_type,
    STATE(595), 1,
      sym_type,
    STATE(344), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1082), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12363] = 8,
    ACTIONS(764), 1,
      aux_sym_newline_token1,
    ACTIONS(1086), 1,
      sym_doc_comment,
    ACTIONS(1088), 1,
      sym_line_comment,
    ACTIONS(1090), 1,
      sym_value_name,
    STATE(237), 1,
      sym_newline,
    STATE(276), 1,
      sym_struct_body,
    STATE(494), 1,
      sym_field_name,
    STATE(189), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [12390] = 8,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    ACTIONS(1094), 1,
      sym_inline_comment,
    ACTIONS(1096), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(191), 1,
      sym_line_end,
    STATE(234), 1,
      sym_newline,
    STATE(274), 1,
      sym_context_body,
    STATE(368), 1,
      sym_fence_open,
    STATE(282), 2,
      sym_block_indented,
      sym_block_fenced,
  [12416] = 4,
    ACTIONS(1100), 1,
      sym_array_suffix,
    STATE(318), 1,
      aux_sym_type_repeat1,
    STATE(331), 1,
      sym_type_suffix,
    ACTIONS(1098), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12434] = 8,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    ACTIONS(1094), 1,
      sym_inline_comment,
    ACTIONS(1096), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(191), 1,
      sym_line_end,
    STATE(234), 1,
      sym_newline,
    STATE(281), 1,
      sym_context_body,
    STATE(368), 1,
      sym_fence_open,
    STATE(282), 2,
      sym_block_indented,
      sym_block_fenced,
  [12460] = 8,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    ACTIONS(1094), 1,
      sym_inline_comment,
    ACTIONS(1096), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(191), 1,
      sym_line_end,
    STATE(234), 1,
      sym_newline,
    STATE(275), 1,
      sym_instruct_body,
    STATE(368), 1,
      sym_fence_open,
    STATE(277), 2,
      sym_block_indented,
      sym_block_fenced,
  [12486] = 9,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(156), 1,
      sym_flow_inline_statement_body,
    STATE(385), 1,
      sym_flow_named_parallel_head,
    STATE(452), 1,
      sym_flow_inline_output_type,
    STATE(496), 1,
      sym_flow_inline_each_head,
    STATE(504), 1,
      sym_flow_parallelism,
  [12514] = 4,
    ACTIONS(1113), 1,
      sym_array_suffix,
    STATE(318), 1,
      aux_sym_type_repeat1,
    STATE(331), 1,
      sym_type_suffix,
    ACTIONS(1111), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12532] = 8,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    ACTIONS(1094), 1,
      sym_inline_comment,
    ACTIONS(1096), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(191), 1,
      sym_line_end,
    STATE(234), 1,
      sym_newline,
    STATE(264), 1,
      sym_instruct_body,
    STATE(368), 1,
      sym_fence_open,
    STATE(277), 2,
      sym_block_indented,
      sym_block_fenced,
  [12558] = 4,
    ACTIONS(1113), 1,
      sym_array_suffix,
    STATE(322), 1,
      aux_sym_type_repeat1,
    STATE(331), 1,
      sym_type_suffix,
    ACTIONS(1115), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12576] = 9,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(100), 1,
      sym_flow_inline_statement_body,
    STATE(397), 1,
      sym_flow_named_parallel_head,
    STATE(452), 1,
      sym_flow_inline_output_type,
    STATE(504), 1,
      sym_flow_parallelism,
    STATE(521), 1,
      sym_flow_inline_each_head,
  [12604] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(76), 1,
      sym_flow_condition_body,
    STATE(448), 1,
      sym_flow_inline_text,
    STATE(477), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [12626] = 1,
    ACTIONS(1125), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12636] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    STATE(288), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(357), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12656] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(420), 1,
      sym_flow_inline_body,
    STATE(458), 1,
      sym_line_end,
    STATE(488), 1,
      sym_flow_inline_text,
    STATE(563), 1,
      sym_newline,
  [12678] = 1,
    ACTIONS(1133), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12688] = 1,
    ACTIONS(1135), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12698] = 7,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(150), 1,
      sym_flow_inline_statement_body,
    STATE(381), 1,
      sym_flow_named_parallel_head,
    STATE(507), 1,
      sym_flow_inline_parallel_head,
    STATE(512), 1,
      sym_flow_parallelism,
  [12720] = 1,
    ACTIONS(1137), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12730] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(165), 1,
      sym_flow_condition_body,
    STATE(373), 1,
      sym_flow_inline_text,
    STATE(476), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [12752] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    STATE(256), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(357), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12772] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    STATE(243), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(328), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12792] = 7,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(123), 1,
      sym_flow_inline_statement_body,
    STATE(393), 1,
      sym_flow_named_parallel_head,
    STATE(512), 1,
      sym_flow_parallelism,
    STATE(518), 1,
      sym_flow_inline_parallel_head,
  [12814] = 7,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(124), 1,
      sym_flow_inline_statement_body,
    STATE(394), 1,
      sym_flow_named_parallel_head,
    STATE(512), 1,
      sym_flow_parallelism,
    STATE(519), 1,
      sym_flow_inline_parallel_head,
  [12836] = 7,
    ACTIONS(1103), 1,
      sym_call_ref,
    ACTIONS(1107), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(170), 1,
      sym_flow_inline_statement_body,
    STATE(382), 1,
      sym_flow_named_parallel_head,
    STATE(512), 1,
      sym_flow_parallelism,
    STATE(514), 1,
      sym_flow_inline_parallel_head,
  [12858] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    ACTIONS(1139), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(210), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(343), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12878] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(403), 1,
      sym_flow_inline_body,
    STATE(475), 1,
      sym_line_end,
    STATE(488), 1,
      sym_flow_inline_text,
    STATE(563), 1,
      sym_newline,
  [12900] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    ACTIONS(1139), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(213), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(346), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12920] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    ACTIONS(1139), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(215), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(357), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12940] = 1,
    ACTIONS(1141), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12950] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(169), 1,
      sym_flow_condition_body,
    STATE(373), 1,
      sym_flow_inline_text,
    STATE(476), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [12972] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    ACTIONS(1139), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(217), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(357), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12992] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(97), 1,
      sym_flow_condition_body,
    STATE(448), 1,
      sym_flow_inline_text,
    STATE(477), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [13014] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(155), 1,
      sym_flow_condition_body,
    STATE(373), 1,
      sym_flow_inline_text,
    STATE(476), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [13036] = 7,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    ACTIONS(1123), 1,
      aux_sym_flow_inline_text_token1,
    STATE(101), 1,
      sym_flow_condition_body,
    STATE(448), 1,
      sym_flow_inline_text,
    STATE(477), 1,
      sym_line_end,
    STATE(563), 1,
      sym_newline,
  [13058] = 6,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1131), 1,
      sym_fenced_raw_text,
    STATE(286), 1,
      sym_fence_close,
    STATE(481), 1,
      sym_newline,
    STATE(335), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13078] = 6,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1143), 1,
      sym_call_ref,
    ACTIONS(1145), 1,
      sym_integer_literal,
    STATE(152), 1,
      sym_flow_inline_statement_body,
    STATE(482), 1,
      sym_flow_inline_rank_head,
    STATE(565), 1,
      sym_flow_rank_limit,
  [13097] = 6,
    ACTIONS(1117), 1,
      sym_colon,
    ACTIONS(1145), 1,
      sym_integer_literal,
    ACTIONS(1147), 1,
      sym_call_ref,
    STATE(92), 1,
      sym_flow_inline_statement_body,
    STATE(520), 1,
      sym_flow_inline_rank_head,
    STATE(565), 1,
      sym_flow_rank_limit,
  [13116] = 6,
    ACTIONS(1149), 1,
      sym_arrow,
    ACTIONS(1151), 1,
      sym_colon,
    ACTIONS(1153), 1,
      sym_lparen,
    ACTIONS(1155), 1,
      sym_value_name,
    STATE(428), 1,
      sym_flow_name,
    STATE(500), 1,
      sym_params,
  [13135] = 6,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    ACTIONS(1159), 1,
      sym_flow_until_keyword,
    ACTIONS(1161), 1,
      sym_colon,
    STATE(146), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13154] = 6,
    ACTIONS(1153), 1,
      sym_lparen,
    ACTIONS(1163), 1,
      sym_arrow,
    ACTIONS(1165), 1,
      sym_colon,
    ACTIONS(1167), 1,
      sym_value_name,
    STATE(418), 1,
      sym_thunk_name,
    STATE(484), 1,
      sym_params,
  [13173] = 6,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    ACTIONS(1169), 1,
      sym_call_ref,
    STATE(121), 1,
      sym_flow_inline_statement_body,
    STATE(390), 1,
      sym_call_ref_list,
    STATE(516), 1,
      sym_flow_inline_output_type,
  [13192] = 5,
    ACTIONS(1171), 1,
      aux_sym_newline_token1,
    ACTIONS(1174), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1176), 1,
      sym_fenced_raw_text,
    STATE(481), 1,
      sym_newline,
    STATE(357), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13209] = 6,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1169), 1,
      sym_call_ref,
    STATE(148), 1,
      sym_flow_inline_statement_body,
    STATE(375), 1,
      sym_call_ref_list,
    STATE(529), 1,
      sym_flow_inline_output_type,
  [13228] = 6,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    ACTIONS(1181), 1,
      sym_flow_until_keyword,
    ACTIONS(1183), 1,
      sym_colon,
    STATE(85), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13247] = 5,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    ACTIONS(1185), 1,
      sym_call_ref,
    STATE(86), 1,
      sym_flow_inline_statement_body,
    STATE(522), 1,
      sym_flow_inline_output_type,
  [13263] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(176), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(273), 1,
      sym_cap_body,
  [13279] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(176), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(279), 1,
      sym_cap_body,
  [13295] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(252), 1,
      sym_job_body,
  [13311] = 5,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1191), 1,
      sym_call_ref,
    STATE(149), 1,
      sym_flow_inline_statement_body,
    STATE(506), 1,
      sym_flow_inline_output_type,
  [13327] = 5,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1193), 1,
      sym_call_ref,
    STATE(158), 1,
      sym_flow_inline_statement_body,
    STATE(531), 1,
      sym_flow_inline_output_type,
  [13343] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(176), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(293), 1,
      sym_cap_body,
  [13359] = 5,
    ACTIONS(1105), 1,
      sym_flow_to_keyword,
    ACTIONS(1117), 1,
      sym_colon,
    ACTIONS(1195), 1,
      sym_call_ref,
    STATE(122), 1,
      sym_flow_inline_statement_body,
    STATE(517), 1,
      sym_flow_inline_output_type,
  [13375] = 5,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    ACTIONS(1199), 1,
      sym_inline_comment,
    ACTIONS(1201), 1,
      sym_block_language,
    STATE(336), 1,
      sym_line_end,
    STATE(464), 1,
      sym_newline,
  [13391] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(176), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(270), 1,
      sym_cap_body,
  [13407] = 5,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    ACTIONS(1199), 1,
      sym_inline_comment,
    ACTIONS(1203), 1,
      sym_block_language,
    STATE(340), 1,
      sym_line_end,
    STATE(464), 1,
      sym_newline,
  [13423] = 5,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
    STATE(251), 1,
      sym_job_body,
  [13439] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13452] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(161), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13465] = 3,
    ACTIONS(1211), 1,
      sym_comma,
    STATE(419), 1,
      aux_sym_call_ref_list_repeat1,
    ACTIONS(1209), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13476] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(132), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13489] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(133), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13502] = 4,
    ACTIONS(764), 1,
      aux_sym_newline_token1,
    ACTIONS(1213), 1,
      sym_inline_comment,
    STATE(230), 1,
      sym_line_end,
    STATE(239), 1,
      sym_newline,
  [13515] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13528] = 3,
    ACTIONS(1217), 1,
      sym_comma,
    STATE(379), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1215), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13539] = 3,
    ACTIONS(1222), 1,
      sym_flow_par_keyword,
    STATE(490), 1,
      sym_flow_parallelism,
    ACTIONS(1220), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13550] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13563] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(139), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13576] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13589] = 2,
    STATE(433), 1,
      sym_block_name,
    ACTIONS(976), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
  [13598] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(143), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13611] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(144), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [13624] = 2,
    STATE(434), 1,
      sym_block_name,
    ACTIONS(976), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
  [13633] = 1,
    ACTIONS(1224), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [13640] = 4,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(1226), 1,
      sym_inline_comment,
    STATE(57), 1,
      sym_line_end,
    STATE(299), 1,
      sym_newline,
  [13653] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13666] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13679] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13692] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
  [13705] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13718] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13731] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [13744] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13757] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13770] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13783] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13796] = 1,
    ACTIONS(1232), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13803] = 3,
    ACTIONS(1234), 1,
      sym_optional_marker,
    ACTIONS(1236), 1,
      sym_colon,
    ACTIONS(1238), 2,
      sym_rparen,
      sym_comma,
  [13814] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [13827] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13840] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [13853] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [13866] = 4,
    ACTIONS(1240), 1,
      sym_integer_literal,
    ACTIONS(1242), 1,
      sym_flow_until_keyword,
    ACTIONS(1244), 1,
      sym_colon,
    STATE(354), 1,
      sym_flow_repeat_count,
  [13879] = 3,
    ACTIONS(1248), 1,
      sym_comma,
    STATE(438), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1246), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13890] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(65), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [13903] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13916] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [13929] = 4,
    ACTIONS(1250), 1,
      aux_sym_newline_token1,
    ACTIONS(1252), 1,
      sym_inline_comment,
    STATE(316), 1,
      sym_line_end,
    STATE(424), 1,
      sym_newline,
  [13942] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [13955] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(216), 1,
      sym_newline,
    STATE(221), 1,
      sym_line_end,
  [13968] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(205), 1,
      sym_line_end,
    STATE(216), 1,
      sym_newline,
  [13981] = 4,
    ACTIONS(1258), 1,
      sym_rparen,
    ACTIONS(1260), 1,
      sym_value_name,
    STATE(402), 1,
      sym_param_name,
    STATE(480), 1,
      sym_param,
  [13994] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [14007] = 4,
    ACTIONS(1153), 1,
      sym_lparen,
    ACTIONS(1262), 1,
      sym_arrow,
    ACTIONS(1264), 1,
      sym_colon,
    STATE(526), 1,
      sym_params,
  [14020] = 3,
    ACTIONS(1211), 1,
      sym_comma,
    STATE(441), 1,
      aux_sym_call_ref_list_repeat1,
    ACTIONS(1266), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14031] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(154), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [14044] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [14057] = 4,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    ACTIONS(1199), 1,
      sym_inline_comment,
    STATE(350), 1,
      sym_line_end,
    STATE(464), 1,
      sym_newline,
  [14070] = 2,
    ACTIONS(472), 1,
      sym_line_comment,
    ACTIONS(470), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14079] = 2,
    ACTIONS(464), 1,
      sym_line_comment,
    ACTIONS(462), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14088] = 2,
    ACTIONS(460), 1,
      sym_line_comment,
    ACTIONS(458), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14097] = 1,
    ACTIONS(1268), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_call_ref,
      sym_colon,
  [14104] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [14117] = 4,
    ACTIONS(1153), 1,
      sym_lparen,
    ACTIONS(1270), 1,
      sym_arrow,
    ACTIONS(1272), 1,
      sym_colon,
    STATE(509), 1,
      sym_params,
  [14130] = 4,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(1226), 1,
      sym_inline_comment,
    STATE(61), 1,
      sym_line_end,
    STATE(299), 1,
      sym_newline,
  [14143] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [14156] = 4,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    ACTIONS(1207), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(197), 1,
      sym_newline,
  [14169] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(162), 1,
      sym_newline,
    STATE(291), 1,
      sym_line_end,
  [14182] = 4,
    ACTIONS(1274), 1,
      aux_sym_newline_token1,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_line_end,
    STATE(199), 1,
      sym_newline,
  [14195] = 4,
    ACTIONS(1274), 1,
      aux_sym_newline_token1,
    ACTIONS(1276), 1,
      sym_inline_comment,
    STATE(199), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [14208] = 4,
    ACTIONS(764), 1,
      aux_sym_newline_token1,
    ACTIONS(1213), 1,
      sym_inline_comment,
    STATE(232), 1,
      sym_line_end,
    STATE(239), 1,
      sym_newline,
  [14221] = 4,
    ACTIONS(1240), 1,
      sym_integer_literal,
    ACTIONS(1278), 1,
      sym_flow_until_keyword,
    ACTIONS(1280), 1,
      sym_colon,
    STATE(359), 1,
      sym_flow_repeat_count,
  [14234] = 4,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    ACTIONS(1189), 1,
      sym_inline_comment,
    STATE(223), 1,
      sym_line_end,
    STATE(226), 1,
      sym_newline,
  [14247] = 3,
    ACTIONS(1248), 1,
      sym_comma,
    STATE(379), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1282), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14258] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [14271] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      sym_inline_comment,
    STATE(162), 1,
      sym_newline,
    STATE(244), 1,
      sym_line_end,
  [14284] = 3,
    ACTIONS(1286), 1,
      sym_comma,
    STATE(441), 1,
      aux_sym_call_ref_list_repeat1,
    ACTIONS(1284), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14295] = 2,
    STATE(502), 1,
      sym_directive_op,
    ACTIONS(1289), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14304] = 4,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    ACTIONS(1199), 1,
      sym_inline_comment,
    STATE(342), 1,
      sym_line_end,
    STATE(464), 1,
      sym_newline,
  [14317] = 4,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(1226), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_line_end,
    STATE(299), 1,
      sym_newline,
  [14330] = 4,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    ACTIONS(1226), 1,
      sym_inline_comment,
    STATE(60), 1,
      sym_line_end,
    STATE(299), 1,
      sym_newline,
  [14343] = 4,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    ACTIONS(1230), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(68), 1,
      sym_newline,
  [14356] = 2,
    STATE(546), 1,
      sym_directive_op,
    ACTIONS(1289), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14365] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1179), 1,
      sym_inline_comment,
    STATE(95), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14378] = 3,
    ACTIONS(1291), 1,
      sym_rparen,
    ACTIONS(1293), 1,
      sym_comma,
    STATE(449), 1,
      aux_sym_params_repeat1,
  [14388] = 3,
    ACTIONS(1296), 1,
      sym_value_name,
    STATE(554), 1,
      sym__snake_kebab_name,
    STATE(590), 1,
      sym_cap_name,
  [14398] = 3,
    ACTIONS(1298), 1,
      aux_sym_flow_inline_text_token1,
    STATE(437), 1,
      sym_property_value,
    STATE(515), 1,
      sym_inline_text,
  [14408] = 3,
    ACTIONS(1222), 1,
      sym_flow_par_keyword,
    ACTIONS(1300), 1,
      sym_colon,
    STATE(553), 1,
      sym_flow_parallelism,
  [14418] = 3,
    ACTIONS(1296), 1,
      sym_value_name,
    STATE(554), 1,
      sym__snake_kebab_name,
    STATE(599), 1,
      sym_cap_name,
  [14428] = 1,
    ACTIONS(1302), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [14434] = 3,
    ACTIONS(1304), 1,
      sym_colon,
    ACTIONS(1306), 1,
      sym_value_name,
    STATE(571), 1,
      sym_context_name,
  [14444] = 1,
    ACTIONS(1308), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14450] = 1,
    ACTIONS(1215), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [14456] = 3,
    ACTIONS(1310), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_block_indented_content_line,
    STATE(153), 1,
      sym_block_indented_implicit,
  [14466] = 3,
    ACTIONS(1260), 1,
      sym_value_name,
    STATE(402), 1,
      sym_param_name,
    STATE(523), 1,
      sym_param,
  [14476] = 3,
    ACTIONS(1312), 1,
      sym_rparen,
    ACTIONS(1314), 1,
      sym_comma,
    STATE(449), 1,
      aux_sym_params_repeat1,
  [14486] = 2,
    ACTIONS(1316), 1,
      sym_colon,
    ACTIONS(1318), 2,
      sym_rparen,
      sym_comma,
  [14494] = 3,
    ACTIONS(1296), 1,
      sym_value_name,
    STATE(554), 1,
      sym__snake_kebab_name,
    STATE(558), 1,
      sym_cap_name,
  [14504] = 1,
    ACTIONS(1320), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14510] = 1,
    ACTIONS(464), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14516] = 1,
    ACTIONS(460), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14522] = 1,
    ACTIONS(472), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14528] = 3,
    ACTIONS(1296), 1,
      sym_value_name,
    STATE(554), 1,
      sym__snake_kebab_name,
    STATE(570), 1,
      sym_cap_name,
  [14538] = 3,
    ACTIONS(1322), 1,
      sym_cap_uri,
    ACTIONS(1324), 1,
      sym_cap_shorthand,
    STATE(440), 1,
      sym_cap_ref,
  [14548] = 1,
    ACTIONS(1326), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14554] = 1,
    ACTIONS(1328), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
  [14560] = 1,
    ACTIONS(1330), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
  [14566] = 1,
    ACTIONS(1332), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14572] = 3,
    ACTIONS(1334), 1,
      sym_colon,
    ACTIONS(1336), 1,
      sym_value_name,
    STATE(577), 1,
      sym_instruct_name,
  [14582] = 3,
    ACTIONS(1338), 1,
      sym_value_name,
    STATE(551), 1,
      sym_job_name,
    STATE(555), 1,
      sym__snake_kebab_name,
  [14592] = 3,
    ACTIONS(1340), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_block_indented_content_line,
    STATE(90), 1,
      sym_block_indented_implicit,
  [14602] = 3,
    ACTIONS(1310), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_block_indented_content_line,
    STATE(160), 1,
      sym_block_indented_implicit,
  [14612] = 3,
    ACTIONS(1340), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_block_indented_content_line,
    STATE(94), 1,
      sym_block_indented_implicit,
  [14622] = 1,
    ACTIONS(1342), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [14628] = 3,
    ACTIONS(1338), 1,
      sym_value_name,
    STATE(555), 1,
      sym__snake_kebab_name,
    STATE(556), 1,
      sym_job_name,
  [14638] = 3,
    ACTIONS(1314), 1,
      sym_comma,
    ACTIONS(1344), 1,
      sym_rparen,
    STATE(460), 1,
      aux_sym_params_repeat1,
  [14648] = 1,
    ACTIONS(1346), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14654] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(141), 1,
      sym_flow_inline_statement_body,
  [14661] = 2,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    STATE(472), 1,
      sym_newline,
  [14668] = 2,
    ACTIONS(1348), 1,
      sym_arrow,
    ACTIONS(1350), 1,
      sym_colon,
  [14675] = 1,
    ACTIONS(1352), 2,
      sym_flow_par_keyword,
      sym_colon,
  [14680] = 1,
    ACTIONS(1354), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14685] = 1,
    ACTIONS(1356), 2,
      sym_arrow,
      sym_colon,
  [14690] = 1,
    ACTIONS(1358), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14695] = 1,
    ACTIONS(1360), 2,
      sym_colon,
      sym_value_name,
  [14700] = 1,
    ACTIONS(1362), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14705] = 2,
    ACTIONS(1364), 1,
      sym_flow_bare_raw_text,
    STATE(147), 1,
      sym_flow_bare_content_line,
  [14712] = 1,
    ACTIONS(1366), 2,
      sym_optional_marker,
      sym_colon,
  [14717] = 2,
    ACTIONS(1228), 1,
      aux_sym_newline_token1,
    STATE(67), 1,
      sym_newline,
  [14724] = 2,
    ACTIONS(1368), 1,
      sym_optional_marker,
    ACTIONS(1370), 1,
      sym_colon,
  [14731] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(159), 1,
      sym_newline,
  [14738] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(142), 1,
      sym_flow_inline_statement_body,
  [14745] = 2,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    STATE(224), 1,
      sym_newline,
  [14752] = 2,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    STATE(222), 1,
      sym_newline,
  [14759] = 2,
    ACTIONS(1372), 1,
      anon_sym_EQ,
    STATE(451), 1,
      sym_assign_operator,
  [14766] = 2,
    ACTIONS(1374), 1,
      sym_arrow,
    ACTIONS(1376), 1,
      sym_colon,
  [14773] = 1,
    ACTIONS(1378), 2,
      sym_colon,
      sym_value_name,
  [14778] = 2,
    ACTIONS(1380), 1,
      sym_bare_value,
    STATE(409), 1,
      sym_directive_csv,
  [14785] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(163), 1,
      sym_newline,
  [14792] = 2,
    ACTIONS(1300), 1,
      sym_colon,
    ACTIONS(1382), 1,
      sym_call_ref,
  [14799] = 2,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    STATE(190), 1,
      sym_newline,
  [14806] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(135), 1,
      sym_flow_inline_statement_body,
  [14813] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(136), 1,
      sym_flow_inline_statement_body,
  [14820] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(206), 1,
      sym_newline,
  [14827] = 2,
    ACTIONS(1384), 1,
      sym_arrow,
    ACTIONS(1386), 1,
      sym_colon,
  [14834] = 1,
    ACTIONS(1388), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14839] = 2,
    ACTIONS(1390), 1,
      sym_type_name,
    STATE(591), 1,
      sym_struct_name,
  [14846] = 2,
    ACTIONS(1382), 1,
      sym_call_ref,
    ACTIONS(1392), 1,
      sym_colon,
  [14853] = 1,
    ACTIONS(1394), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14858] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(138), 1,
      sym_flow_inline_statement_body,
  [14865] = 1,
    ACTIONS(1396), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14870] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(103), 1,
      sym_flow_inline_statement_body,
  [14877] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(111), 1,
      sym_flow_inline_statement_body,
  [14884] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(116), 1,
      sym_flow_inline_statement_body,
  [14891] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(77), 1,
      sym_flow_inline_statement_body,
  [14898] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(80), 1,
      sym_flow_inline_statement_body,
  [14905] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(81), 1,
      sym_flow_inline_statement_body,
  [14912] = 2,
    ACTIONS(1117), 1,
      sym_colon,
    STATE(84), 1,
      sym_flow_inline_statement_body,
  [14919] = 1,
    ACTIONS(1398), 2,
      sym_rparen,
      sym_comma,
  [14924] = 1,
    ACTIONS(1400), 2,
      sym_arrow,
      sym_colon,
  [14929] = 2,
    ACTIONS(1402), 1,
      sym_flow_bare_raw_text,
    STATE(87), 1,
      sym_flow_bare_content_line,
  [14936] = 2,
    ACTIONS(1404), 1,
      sym_arrow,
    ACTIONS(1406), 1,
      sym_colon,
  [14943] = 1,
    ACTIONS(1408), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14948] = 1,
    ACTIONS(1410), 2,
      sym_rparen,
      sym_comma,
  [14953] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(131), 1,
      sym_flow_inline_statement_body,
  [14960] = 1,
    ACTIONS(1412), 2,
      sym_arrow,
      sym_colon,
  [14965] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(145), 1,
      sym_flow_inline_statement_body,
  [14972] = 2,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    STATE(235), 1,
      sym_newline,
  [14979] = 2,
    ACTIONS(1414), 1,
      aux_sym_newline_token1,
    STATE(104), 1,
      sym_newline,
  [14986] = 2,
    ACTIONS(1250), 1,
      aux_sym_newline_token1,
    STATE(425), 1,
      sym_newline,
  [14993] = 2,
    ACTIONS(1416), 1,
      aux_sym_newline_token1,
    STATE(72), 1,
      sym_newline,
  [15000] = 2,
    ACTIONS(1187), 1,
      aux_sym_newline_token1,
    STATE(227), 1,
      sym_newline,
  [15007] = 2,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    STATE(465), 1,
      sym_newline,
  [15014] = 2,
    ACTIONS(1274), 1,
      aux_sym_newline_token1,
    STATE(200), 1,
      sym_newline,
  [15021] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(219), 1,
      sym_newline,
  [15028] = 2,
    ACTIONS(1418), 1,
      aux_sym_newline_token1,
    STATE(564), 1,
      sym_newline,
  [15035] = 2,
    ACTIONS(410), 1,
      aux_sym_newline_token1,
    STATE(300), 1,
      sym_newline,
  [15042] = 2,
    ACTIONS(764), 1,
      aux_sym_newline_token1,
    STATE(229), 1,
      sym_newline,
  [15049] = 2,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    STATE(114), 1,
      sym_newline,
  [15056] = 2,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    STATE(88), 1,
      sym_newline,
  [15063] = 1,
    ACTIONS(1420), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15068] = 2,
    ACTIONS(1380), 1,
      sym_bare_value,
    STATE(372), 1,
      sym_directive_csv,
  [15075] = 1,
    ACTIONS(1422), 2,
      sym_rparen,
      sym_comma,
  [15080] = 2,
    ACTIONS(1092), 1,
      aux_sym_newline_token1,
    STATE(231), 1,
      sym_newline,
  [15087] = 1,
    ACTIONS(470), 1,
      sym_indented_raw_text,
  [15091] = 1,
    ACTIONS(1424), 1,
      sym_call_ref,
  [15095] = 1,
    ACTIONS(1426), 1,
      sym_colon,
  [15099] = 1,
    ACTIONS(1428), 1,
      anon_sym_EQ,
  [15103] = 1,
    ACTIONS(1430), 1,
      sym_colon,
  [15107] = 1,
    ACTIONS(1432), 1,
      sym_colon,
  [15111] = 1,
    ACTIONS(1434), 1,
      sym_colon,
  [15115] = 1,
    ACTIONS(1436), 1,
      sym_colon,
  [15119] = 1,
    ACTIONS(1438), 1,
      sym_colon,
  [15123] = 1,
    ACTIONS(1440), 1,
      sym_colon,
  [15127] = 1,
    ACTIONS(1442), 1,
      sym_colon,
  [15131] = 1,
    ACTIONS(450), 1,
      sym_flow_bare_raw_text,
  [15135] = 1,
    ACTIONS(1444), 1,
      ts_builtin_sym_end,
  [15139] = 1,
    ACTIONS(1446), 1,
      aux_sym_newline_token1,
  [15143] = 1,
    ACTIONS(462), 1,
      sym_indented_raw_text,
  [15147] = 1,
    ACTIONS(458), 1,
      sym_indented_raw_text,
  [15151] = 1,
    ACTIONS(1448), 1,
      sym_colon,
  [15155] = 1,
    ACTIONS(1450), 1,
      sym_bare_value,
  [15159] = 1,
    ACTIONS(1452), 1,
      sym_colon,
  [15163] = 1,
    ACTIONS(1454), 1,
      sym_colon,
  [15167] = 1,
    ACTIONS(1456), 1,
      sym_colon,
  [15171] = 1,
    ACTIONS(1458), 1,
      sym_colon,
  [15175] = 1,
    ACTIONS(1460), 1,
      sym_colon,
  [15179] = 1,
    ACTIONS(1462), 1,
      sym_colon,
  [15183] = 1,
    ACTIONS(1464), 1,
      sym_colon,
  [15187] = 1,
    ACTIONS(1466), 1,
      sym_colon,
  [15191] = 1,
    ACTIONS(1468), 1,
      sym_colon,
  [15195] = 1,
    ACTIONS(1470), 1,
      sym_colon,
  [15199] = 1,
    ACTIONS(1472), 1,
      sym_colon,
  [15203] = 1,
    ACTIONS(1474), 1,
      sym_bare_value,
  [15207] = 1,
    ACTIONS(1476), 1,
      sym_colon,
  [15211] = 1,
    ACTIONS(1478), 1,
      aux_sym_flow_inline_text_token1,
  [15215] = 1,
    ACTIONS(1480), 1,
      sym_call_ref,
  [15219] = 1,
    ACTIONS(470), 1,
      sym_flow_bare_raw_text,
  [15223] = 1,
    ACTIONS(1482), 1,
      sym_colon,
  [15227] = 1,
    ACTIONS(1484), 1,
      sym_cap_kind,
  [15231] = 1,
    ACTIONS(1486), 1,
      sym_colon,
  [15235] = 1,
    ACTIONS(1488), 1,
      sym_integer_literal,
  [15239] = 1,
    ACTIONS(1490), 1,
      sym_colon,
  [15243] = 1,
    ACTIONS(1492), 1,
      sym_colon,
  [15247] = 1,
    ACTIONS(1494), 1,
      sym_call_ref,
  [15251] = 1,
    ACTIONS(1496), 1,
      sym_colon,
  [15255] = 1,
    ACTIONS(1498), 1,
      sym_colon,
  [15259] = 1,
    ACTIONS(1500), 1,
      sym_colon,
  [15263] = 1,
    ACTIONS(1502), 1,
      sym_colon,
  [15267] = 1,
    ACTIONS(1504), 1,
      sym_colon,
  [15271] = 1,
    ACTIONS(1506), 1,
      sym_colon,
  [15275] = 1,
    ACTIONS(1508), 1,
      aux_sym_newline_token1,
  [15279] = 1,
    ACTIONS(1510), 1,
      sym_colon,
  [15283] = 1,
    ACTIONS(1512), 1,
      sym_colon,
  [15287] = 1,
    ACTIONS(1514), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 309,
  [SMALL_STATE(6)] = 408,
  [SMALL_STATE(7)] = 507,
  [SMALL_STATE(8)] = 606,
  [SMALL_STATE(9)] = 705,
  [SMALL_STATE(10)] = 804,
  [SMALL_STATE(11)] = 903,
  [SMALL_STATE(12)] = 1002,
  [SMALL_STATE(13)] = 1092,
  [SMALL_STATE(14)] = 1182,
  [SMALL_STATE(15)] = 1272,
  [SMALL_STATE(16)] = 1362,
  [SMALL_STATE(17)] = 1452,
  [SMALL_STATE(18)] = 1542,
  [SMALL_STATE(19)] = 1632,
  [SMALL_STATE(20)] = 1722,
  [SMALL_STATE(21)] = 1811,
  [SMALL_STATE(22)] = 1900,
  [SMALL_STATE(23)] = 1989,
  [SMALL_STATE(24)] = 2074,
  [SMALL_STATE(25)] = 2163,
  [SMALL_STATE(26)] = 2263,
  [SMALL_STATE(27)] = 2347,
  [SMALL_STATE(28)] = 2447,
  [SMALL_STATE(29)] = 2547,
  [SMALL_STATE(30)] = 2647,
  [SMALL_STATE(31)] = 2747,
  [SMALL_STATE(32)] = 2847,
  [SMALL_STATE(33)] = 2947,
  [SMALL_STATE(34)] = 3047,
  [SMALL_STATE(35)] = 3144,
  [SMALL_STATE(36)] = 3196,
  [SMALL_STATE(37)] = 3274,
  [SMALL_STATE(38)] = 3346,
  [SMALL_STATE(39)] = 3418,
  [SMALL_STATE(40)] = 3490,
  [SMALL_STATE(41)] = 3562,
  [SMALL_STATE(42)] = 3640,
  [SMALL_STATE(43)] = 3712,
  [SMALL_STATE(44)] = 3784,
  [SMALL_STATE(45)] = 3831,
  [SMALL_STATE(46)] = 3878,
  [SMALL_STATE(47)] = 3925,
  [SMALL_STATE(48)] = 3973,
  [SMALL_STATE(49)] = 4021,
  [SMALL_STATE(50)] = 4067,
  [SMALL_STATE(51)] = 4113,
  [SMALL_STATE(52)] = 4161,
  [SMALL_STATE(53)] = 4207,
  [SMALL_STATE(54)] = 4284,
  [SMALL_STATE(55)] = 4331,
  [SMALL_STATE(56)] = 4378,
  [SMALL_STATE(57)] = 4425,
  [SMALL_STATE(58)] = 4499,
  [SMALL_STATE(59)] = 4557,
  [SMALL_STATE(60)] = 4615,
  [SMALL_STATE(61)] = 4689,
  [SMALL_STATE(62)] = 4763,
  [SMALL_STATE(63)] = 4837,
  [SMALL_STATE(64)] = 4895,
  [SMALL_STATE(65)] = 4930,
  [SMALL_STATE(66)] = 4965,
  [SMALL_STATE(67)] = 5004,
  [SMALL_STATE(68)] = 5039,
  [SMALL_STATE(69)] = 5074,
  [SMALL_STATE(70)] = 5113,
  [SMALL_STATE(71)] = 5148,
  [SMALL_STATE(72)] = 5219,
  [SMALL_STATE(73)] = 5254,
  [SMALL_STATE(74)] = 5289,
  [SMALL_STATE(75)] = 5360,
  [SMALL_STATE(76)] = 5395,
  [SMALL_STATE(77)] = 5429,
  [SMALL_STATE(78)] = 5463,
  [SMALL_STATE(79)] = 5497,
  [SMALL_STATE(80)] = 5531,
  [SMALL_STATE(81)] = 5565,
  [SMALL_STATE(82)] = 5599,
  [SMALL_STATE(83)] = 5633,
  [SMALL_STATE(84)] = 5667,
  [SMALL_STATE(85)] = 5701,
  [SMALL_STATE(86)] = 5735,
  [SMALL_STATE(87)] = 5769,
  [SMALL_STATE(88)] = 5803,
  [SMALL_STATE(89)] = 5837,
  [SMALL_STATE(90)] = 5875,
  [SMALL_STATE(91)] = 5909,
  [SMALL_STATE(92)] = 5943,
  [SMALL_STATE(93)] = 5977,
  [SMALL_STATE(94)] = 6011,
  [SMALL_STATE(95)] = 6045,
  [SMALL_STATE(96)] = 6079,
  [SMALL_STATE(97)] = 6113,
  [SMALL_STATE(98)] = 6147,
  [SMALL_STATE(99)] = 6181,
  [SMALL_STATE(100)] = 6215,
  [SMALL_STATE(101)] = 6249,
  [SMALL_STATE(102)] = 6283,
  [SMALL_STATE(103)] = 6317,
  [SMALL_STATE(104)] = 6351,
  [SMALL_STATE(105)] = 6385,
  [SMALL_STATE(106)] = 6419,
  [SMALL_STATE(107)] = 6453,
  [SMALL_STATE(108)] = 6487,
  [SMALL_STATE(109)] = 6521,
  [SMALL_STATE(110)] = 6555,
  [SMALL_STATE(111)] = 6589,
  [SMALL_STATE(112)] = 6623,
  [SMALL_STATE(113)] = 6657,
  [SMALL_STATE(114)] = 6691,
  [SMALL_STATE(115)] = 6725,
  [SMALL_STATE(116)] = 6759,
  [SMALL_STATE(117)] = 6793,
  [SMALL_STATE(118)] = 6827,
  [SMALL_STATE(119)] = 6861,
  [SMALL_STATE(120)] = 6899,
  [SMALL_STATE(121)] = 6933,
  [SMALL_STATE(122)] = 6967,
  [SMALL_STATE(123)] = 7001,
  [SMALL_STATE(124)] = 7035,
  [SMALL_STATE(125)] = 7069,
  [SMALL_STATE(126)] = 7103,
  [SMALL_STATE(127)] = 7136,
  [SMALL_STATE(128)] = 7169,
  [SMALL_STATE(129)] = 7202,
  [SMALL_STATE(130)] = 7235,
  [SMALL_STATE(131)] = 7268,
  [SMALL_STATE(132)] = 7301,
  [SMALL_STATE(133)] = 7334,
  [SMALL_STATE(134)] = 7367,
  [SMALL_STATE(135)] = 7400,
  [SMALL_STATE(136)] = 7433,
  [SMALL_STATE(137)] = 7466,
  [SMALL_STATE(138)] = 7499,
  [SMALL_STATE(139)] = 7532,
  [SMALL_STATE(140)] = 7565,
  [SMALL_STATE(141)] = 7598,
  [SMALL_STATE(142)] = 7631,
  [SMALL_STATE(143)] = 7664,
  [SMALL_STATE(144)] = 7697,
  [SMALL_STATE(145)] = 7730,
  [SMALL_STATE(146)] = 7763,
  [SMALL_STATE(147)] = 7796,
  [SMALL_STATE(148)] = 7829,
  [SMALL_STATE(149)] = 7862,
  [SMALL_STATE(150)] = 7895,
  [SMALL_STATE(151)] = 7928,
  [SMALL_STATE(152)] = 7961,
  [SMALL_STATE(153)] = 7994,
  [SMALL_STATE(154)] = 8027,
  [SMALL_STATE(155)] = 8060,
  [SMALL_STATE(156)] = 8093,
  [SMALL_STATE(157)] = 8126,
  [SMALL_STATE(158)] = 8159,
  [SMALL_STATE(159)] = 8192,
  [SMALL_STATE(160)] = 8225,
  [SMALL_STATE(161)] = 8258,
  [SMALL_STATE(162)] = 8291,
  [SMALL_STATE(163)] = 8324,
  [SMALL_STATE(164)] = 8357,
  [SMALL_STATE(165)] = 8390,
  [SMALL_STATE(166)] = 8423,
  [SMALL_STATE(167)] = 8456,
  [SMALL_STATE(168)] = 8489,
  [SMALL_STATE(169)] = 8522,
  [SMALL_STATE(170)] = 8555,
  [SMALL_STATE(171)] = 8588,
  [SMALL_STATE(172)] = 8634,
  [SMALL_STATE(173)] = 8680,
  [SMALL_STATE(174)] = 8726,
  [SMALL_STATE(175)] = 8772,
  [SMALL_STATE(176)] = 8810,
  [SMALL_STATE(177)] = 8854,
  [SMALL_STATE(178)] = 8898,
  [SMALL_STATE(179)] = 8936,
  [SMALL_STATE(180)] = 8980,
  [SMALL_STATE(181)] = 9024,
  [SMALL_STATE(182)] = 9060,
  [SMALL_STATE(183)] = 9098,
  [SMALL_STATE(184)] = 9142,
  [SMALL_STATE(185)] = 9180,
  [SMALL_STATE(186)] = 9218,
  [SMALL_STATE(187)] = 9262,
  [SMALL_STATE(188)] = 9300,
  [SMALL_STATE(189)] = 9340,
  [SMALL_STATE(190)] = 9380,
  [SMALL_STATE(191)] = 9407,
  [SMALL_STATE(192)] = 9442,
  [SMALL_STATE(193)] = 9469,
  [SMALL_STATE(194)] = 9496,
  [SMALL_STATE(195)] = 9523,
  [SMALL_STATE(196)] = 9550,
  [SMALL_STATE(197)] = 9585,
  [SMALL_STATE(198)] = 9612,
  [SMALL_STATE(199)] = 9639,
  [SMALL_STATE(200)] = 9666,
  [SMALL_STATE(201)] = 9693,
  [SMALL_STATE(202)] = 9728,
  [SMALL_STATE(203)] = 9755,
  [SMALL_STATE(204)] = 9782,
  [SMALL_STATE(205)] = 9809,
  [SMALL_STATE(206)] = 9835,
  [SMALL_STATE(207)] = 9861,
  [SMALL_STATE(208)] = 9887,
  [SMALL_STATE(209)] = 9913,
  [SMALL_STATE(210)] = 9939,
  [SMALL_STATE(211)] = 9965,
  [SMALL_STATE(212)] = 9991,
  [SMALL_STATE(213)] = 10017,
  [SMALL_STATE(214)] = 10043,
  [SMALL_STATE(215)] = 10069,
  [SMALL_STATE(216)] = 10095,
  [SMALL_STATE(217)] = 10121,
  [SMALL_STATE(218)] = 10147,
  [SMALL_STATE(219)] = 10173,
  [SMALL_STATE(220)] = 10199,
  [SMALL_STATE(221)] = 10225,
  [SMALL_STATE(222)] = 10251,
  [SMALL_STATE(223)] = 10275,
  [SMALL_STATE(224)] = 10299,
  [SMALL_STATE(225)] = 10323,
  [SMALL_STATE(226)] = 10347,
  [SMALL_STATE(227)] = 10371,
  [SMALL_STATE(228)] = 10395,
  [SMALL_STATE(229)] = 10419,
  [SMALL_STATE(230)] = 10442,
  [SMALL_STATE(231)] = 10465,
  [SMALL_STATE(232)] = 10488,
  [SMALL_STATE(233)] = 10511,
  [SMALL_STATE(234)] = 10534,
  [SMALL_STATE(235)] = 10557,
  [SMALL_STATE(236)] = 10580,
  [SMALL_STATE(237)] = 10603,
  [SMALL_STATE(238)] = 10626,
  [SMALL_STATE(239)] = 10649,
  [SMALL_STATE(240)] = 10672,
  [SMALL_STATE(241)] = 10694,
  [SMALL_STATE(242)] = 10716,
  [SMALL_STATE(243)] = 10738,
  [SMALL_STATE(244)] = 10760,
  [SMALL_STATE(245)] = 10782,
  [SMALL_STATE(246)] = 10804,
  [SMALL_STATE(247)] = 10826,
  [SMALL_STATE(248)] = 10848,
  [SMALL_STATE(249)] = 10870,
  [SMALL_STATE(250)] = 10892,
  [SMALL_STATE(251)] = 10914,
  [SMALL_STATE(252)] = 10936,
  [SMALL_STATE(253)] = 10958,
  [SMALL_STATE(254)] = 10980,
  [SMALL_STATE(255)] = 11002,
  [SMALL_STATE(256)] = 11024,
  [SMALL_STATE(257)] = 11046,
  [SMALL_STATE(258)] = 11068,
  [SMALL_STATE(259)] = 11090,
  [SMALL_STATE(260)] = 11112,
  [SMALL_STATE(261)] = 11134,
  [SMALL_STATE(262)] = 11156,
  [SMALL_STATE(263)] = 11178,
  [SMALL_STATE(264)] = 11200,
  [SMALL_STATE(265)] = 11222,
  [SMALL_STATE(266)] = 11244,
  [SMALL_STATE(267)] = 11266,
  [SMALL_STATE(268)] = 11288,
  [SMALL_STATE(269)] = 11310,
  [SMALL_STATE(270)] = 11332,
  [SMALL_STATE(271)] = 11354,
  [SMALL_STATE(272)] = 11398,
  [SMALL_STATE(273)] = 11420,
  [SMALL_STATE(274)] = 11442,
  [SMALL_STATE(275)] = 11464,
  [SMALL_STATE(276)] = 11486,
  [SMALL_STATE(277)] = 11508,
  [SMALL_STATE(278)] = 11530,
  [SMALL_STATE(279)] = 11552,
  [SMALL_STATE(280)] = 11574,
  [SMALL_STATE(281)] = 11596,
  [SMALL_STATE(282)] = 11618,
  [SMALL_STATE(283)] = 11640,
  [SMALL_STATE(284)] = 11662,
  [SMALL_STATE(285)] = 11684,
  [SMALL_STATE(286)] = 11706,
  [SMALL_STATE(287)] = 11728,
  [SMALL_STATE(288)] = 11750,
  [SMALL_STATE(289)] = 11772,
  [SMALL_STATE(290)] = 11794,
  [SMALL_STATE(291)] = 11816,
  [SMALL_STATE(292)] = 11838,
  [SMALL_STATE(293)] = 11870,
  [SMALL_STATE(294)] = 11892,
  [SMALL_STATE(295)] = 11914,
  [SMALL_STATE(296)] = 11936,
  [SMALL_STATE(297)] = 11967,
  [SMALL_STATE(298)] = 11986,
  [SMALL_STATE(299)] = 12005,
  [SMALL_STATE(300)] = 12023,
  [SMALL_STATE(301)] = 12041,
  [SMALL_STATE(302)] = 12059,
  [SMALL_STATE(303)] = 12077,
  [SMALL_STATE(304)] = 12099,
  [SMALL_STATE(305)] = 12121,
  [SMALL_STATE(306)] = 12143,
  [SMALL_STATE(307)] = 12165,
  [SMALL_STATE(308)] = 12187,
  [SMALL_STATE(309)] = 12209,
  [SMALL_STATE(310)] = 12231,
  [SMALL_STATE(311)] = 12253,
  [SMALL_STATE(312)] = 12275,
  [SMALL_STATE(313)] = 12297,
  [SMALL_STATE(314)] = 12319,
  [SMALL_STATE(315)] = 12341,
  [SMALL_STATE(316)] = 12363,
  [SMALL_STATE(317)] = 12390,
  [SMALL_STATE(318)] = 12416,
  [SMALL_STATE(319)] = 12434,
  [SMALL_STATE(320)] = 12460,
  [SMALL_STATE(321)] = 12486,
  [SMALL_STATE(322)] = 12514,
  [SMALL_STATE(323)] = 12532,
  [SMALL_STATE(324)] = 12558,
  [SMALL_STATE(325)] = 12576,
  [SMALL_STATE(326)] = 12604,
  [SMALL_STATE(327)] = 12626,
  [SMALL_STATE(328)] = 12636,
  [SMALL_STATE(329)] = 12656,
  [SMALL_STATE(330)] = 12678,
  [SMALL_STATE(331)] = 12688,
  [SMALL_STATE(332)] = 12698,
  [SMALL_STATE(333)] = 12720,
  [SMALL_STATE(334)] = 12730,
  [SMALL_STATE(335)] = 12752,
  [SMALL_STATE(336)] = 12772,
  [SMALL_STATE(337)] = 12792,
  [SMALL_STATE(338)] = 12814,
  [SMALL_STATE(339)] = 12836,
  [SMALL_STATE(340)] = 12858,
  [SMALL_STATE(341)] = 12878,
  [SMALL_STATE(342)] = 12900,
  [SMALL_STATE(343)] = 12920,
  [SMALL_STATE(344)] = 12940,
  [SMALL_STATE(345)] = 12950,
  [SMALL_STATE(346)] = 12972,
  [SMALL_STATE(347)] = 12992,
  [SMALL_STATE(348)] = 13014,
  [SMALL_STATE(349)] = 13036,
  [SMALL_STATE(350)] = 13058,
  [SMALL_STATE(351)] = 13078,
  [SMALL_STATE(352)] = 13097,
  [SMALL_STATE(353)] = 13116,
  [SMALL_STATE(354)] = 13135,
  [SMALL_STATE(355)] = 13154,
  [SMALL_STATE(356)] = 13173,
  [SMALL_STATE(357)] = 13192,
  [SMALL_STATE(358)] = 13209,
  [SMALL_STATE(359)] = 13228,
  [SMALL_STATE(360)] = 13247,
  [SMALL_STATE(361)] = 13263,
  [SMALL_STATE(362)] = 13279,
  [SMALL_STATE(363)] = 13295,
  [SMALL_STATE(364)] = 13311,
  [SMALL_STATE(365)] = 13327,
  [SMALL_STATE(366)] = 13343,
  [SMALL_STATE(367)] = 13359,
  [SMALL_STATE(368)] = 13375,
  [SMALL_STATE(369)] = 13391,
  [SMALL_STATE(370)] = 13407,
  [SMALL_STATE(371)] = 13423,
  [SMALL_STATE(372)] = 13439,
  [SMALL_STATE(373)] = 13452,
  [SMALL_STATE(374)] = 13465,
  [SMALL_STATE(375)] = 13476,
  [SMALL_STATE(376)] = 13489,
  [SMALL_STATE(377)] = 13502,
  [SMALL_STATE(378)] = 13515,
  [SMALL_STATE(379)] = 13528,
  [SMALL_STATE(380)] = 13539,
  [SMALL_STATE(381)] = 13550,
  [SMALL_STATE(382)] = 13563,
  [SMALL_STATE(383)] = 13576,
  [SMALL_STATE(384)] = 13589,
  [SMALL_STATE(385)] = 13598,
  [SMALL_STATE(386)] = 13611,
  [SMALL_STATE(387)] = 13624,
  [SMALL_STATE(388)] = 13633,
  [SMALL_STATE(389)] = 13640,
  [SMALL_STATE(390)] = 13653,
  [SMALL_STATE(391)] = 13666,
  [SMALL_STATE(392)] = 13679,
  [SMALL_STATE(393)] = 13692,
  [SMALL_STATE(394)] = 13705,
  [SMALL_STATE(395)] = 13718,
  [SMALL_STATE(396)] = 13731,
  [SMALL_STATE(397)] = 13744,
  [SMALL_STATE(398)] = 13757,
  [SMALL_STATE(399)] = 13770,
  [SMALL_STATE(400)] = 13783,
  [SMALL_STATE(401)] = 13796,
  [SMALL_STATE(402)] = 13803,
  [SMALL_STATE(403)] = 13814,
  [SMALL_STATE(404)] = 13827,
  [SMALL_STATE(405)] = 13840,
  [SMALL_STATE(406)] = 13853,
  [SMALL_STATE(407)] = 13866,
  [SMALL_STATE(408)] = 13879,
  [SMALL_STATE(409)] = 13890,
  [SMALL_STATE(410)] = 13903,
  [SMALL_STATE(411)] = 13916,
  [SMALL_STATE(412)] = 13929,
  [SMALL_STATE(413)] = 13942,
  [SMALL_STATE(414)] = 13955,
  [SMALL_STATE(415)] = 13968,
  [SMALL_STATE(416)] = 13981,
  [SMALL_STATE(417)] = 13994,
  [SMALL_STATE(418)] = 14007,
  [SMALL_STATE(419)] = 14020,
  [SMALL_STATE(420)] = 14031,
  [SMALL_STATE(421)] = 14044,
  [SMALL_STATE(422)] = 14057,
  [SMALL_STATE(423)] = 14070,
  [SMALL_STATE(424)] = 14079,
  [SMALL_STATE(425)] = 14088,
  [SMALL_STATE(426)] = 14097,
  [SMALL_STATE(427)] = 14104,
  [SMALL_STATE(428)] = 14117,
  [SMALL_STATE(429)] = 14130,
  [SMALL_STATE(430)] = 14143,
  [SMALL_STATE(431)] = 14156,
  [SMALL_STATE(432)] = 14169,
  [SMALL_STATE(433)] = 14182,
  [SMALL_STATE(434)] = 14195,
  [SMALL_STATE(435)] = 14208,
  [SMALL_STATE(436)] = 14221,
  [SMALL_STATE(437)] = 14234,
  [SMALL_STATE(438)] = 14247,
  [SMALL_STATE(439)] = 14258,
  [SMALL_STATE(440)] = 14271,
  [SMALL_STATE(441)] = 14284,
  [SMALL_STATE(442)] = 14295,
  [SMALL_STATE(443)] = 14304,
  [SMALL_STATE(444)] = 14317,
  [SMALL_STATE(445)] = 14330,
  [SMALL_STATE(446)] = 14343,
  [SMALL_STATE(447)] = 14356,
  [SMALL_STATE(448)] = 14365,
  [SMALL_STATE(449)] = 14378,
  [SMALL_STATE(450)] = 14388,
  [SMALL_STATE(451)] = 14398,
  [SMALL_STATE(452)] = 14408,
  [SMALL_STATE(453)] = 14418,
  [SMALL_STATE(454)] = 14428,
  [SMALL_STATE(455)] = 14434,
  [SMALL_STATE(456)] = 14444,
  [SMALL_STATE(457)] = 14450,
  [SMALL_STATE(458)] = 14456,
  [SMALL_STATE(459)] = 14466,
  [SMALL_STATE(460)] = 14476,
  [SMALL_STATE(461)] = 14486,
  [SMALL_STATE(462)] = 14494,
  [SMALL_STATE(463)] = 14504,
  [SMALL_STATE(464)] = 14510,
  [SMALL_STATE(465)] = 14516,
  [SMALL_STATE(466)] = 14522,
  [SMALL_STATE(467)] = 14528,
  [SMALL_STATE(468)] = 14538,
  [SMALL_STATE(469)] = 14548,
  [SMALL_STATE(470)] = 14554,
  [SMALL_STATE(471)] = 14560,
  [SMALL_STATE(472)] = 14566,
  [SMALL_STATE(473)] = 14572,
  [SMALL_STATE(474)] = 14582,
  [SMALL_STATE(475)] = 14592,
  [SMALL_STATE(476)] = 14602,
  [SMALL_STATE(477)] = 14612,
  [SMALL_STATE(478)] = 14622,
  [SMALL_STATE(479)] = 14628,
  [SMALL_STATE(480)] = 14638,
  [SMALL_STATE(481)] = 14648,
  [SMALL_STATE(482)] = 14654,
  [SMALL_STATE(483)] = 14661,
  [SMALL_STATE(484)] = 14668,
  [SMALL_STATE(485)] = 14675,
  [SMALL_STATE(486)] = 14680,
  [SMALL_STATE(487)] = 14685,
  [SMALL_STATE(488)] = 14690,
  [SMALL_STATE(489)] = 14695,
  [SMALL_STATE(490)] = 14700,
  [SMALL_STATE(491)] = 14705,
  [SMALL_STATE(492)] = 14712,
  [SMALL_STATE(493)] = 14717,
  [SMALL_STATE(494)] = 14724,
  [SMALL_STATE(495)] = 14731,
  [SMALL_STATE(496)] = 14738,
  [SMALL_STATE(497)] = 14745,
  [SMALL_STATE(498)] = 14752,
  [SMALL_STATE(499)] = 14759,
  [SMALL_STATE(500)] = 14766,
  [SMALL_STATE(501)] = 14773,
  [SMALL_STATE(502)] = 14778,
  [SMALL_STATE(503)] = 14785,
  [SMALL_STATE(504)] = 14792,
  [SMALL_STATE(505)] = 14799,
  [SMALL_STATE(506)] = 14806,
  [SMALL_STATE(507)] = 14813,
  [SMALL_STATE(508)] = 14820,
  [SMALL_STATE(509)] = 14827,
  [SMALL_STATE(510)] = 14834,
  [SMALL_STATE(511)] = 14839,
  [SMALL_STATE(512)] = 14846,
  [SMALL_STATE(513)] = 14853,
  [SMALL_STATE(514)] = 14858,
  [SMALL_STATE(515)] = 14865,
  [SMALL_STATE(516)] = 14870,
  [SMALL_STATE(517)] = 14877,
  [SMALL_STATE(518)] = 14884,
  [SMALL_STATE(519)] = 14891,
  [SMALL_STATE(520)] = 14898,
  [SMALL_STATE(521)] = 14905,
  [SMALL_STATE(522)] = 14912,
  [SMALL_STATE(523)] = 14919,
  [SMALL_STATE(524)] = 14924,
  [SMALL_STATE(525)] = 14929,
  [SMALL_STATE(526)] = 14936,
  [SMALL_STATE(527)] = 14943,
  [SMALL_STATE(528)] = 14948,
  [SMALL_STATE(529)] = 14953,
  [SMALL_STATE(530)] = 14960,
  [SMALL_STATE(531)] = 14965,
  [SMALL_STATE(532)] = 14972,
  [SMALL_STATE(533)] = 14979,
  [SMALL_STATE(534)] = 14986,
  [SMALL_STATE(535)] = 14993,
  [SMALL_STATE(536)] = 15000,
  [SMALL_STATE(537)] = 15007,
  [SMALL_STATE(538)] = 15014,
  [SMALL_STATE(539)] = 15021,
  [SMALL_STATE(540)] = 15028,
  [SMALL_STATE(541)] = 15035,
  [SMALL_STATE(542)] = 15042,
  [SMALL_STATE(543)] = 15049,
  [SMALL_STATE(544)] = 15056,
  [SMALL_STATE(545)] = 15063,
  [SMALL_STATE(546)] = 15068,
  [SMALL_STATE(547)] = 15075,
  [SMALL_STATE(548)] = 15080,
  [SMALL_STATE(549)] = 15087,
  [SMALL_STATE(550)] = 15091,
  [SMALL_STATE(551)] = 15095,
  [SMALL_STATE(552)] = 15099,
  [SMALL_STATE(553)] = 15103,
  [SMALL_STATE(554)] = 15107,
  [SMALL_STATE(555)] = 15111,
  [SMALL_STATE(556)] = 15115,
  [SMALL_STATE(557)] = 15119,
  [SMALL_STATE(558)] = 15123,
  [SMALL_STATE(559)] = 15127,
  [SMALL_STATE(560)] = 15131,
  [SMALL_STATE(561)] = 15135,
  [SMALL_STATE(562)] = 15139,
  [SMALL_STATE(563)] = 15143,
  [SMALL_STATE(564)] = 15147,
  [SMALL_STATE(565)] = 15151,
  [SMALL_STATE(566)] = 15155,
  [SMALL_STATE(567)] = 15159,
  [SMALL_STATE(568)] = 15163,
  [SMALL_STATE(569)] = 15167,
  [SMALL_STATE(570)] = 15171,
  [SMALL_STATE(571)] = 15175,
  [SMALL_STATE(572)] = 15179,
  [SMALL_STATE(573)] = 15183,
  [SMALL_STATE(574)] = 15187,
  [SMALL_STATE(575)] = 15191,
  [SMALL_STATE(576)] = 15195,
  [SMALL_STATE(577)] = 15199,
  [SMALL_STATE(578)] = 15203,
  [SMALL_STATE(579)] = 15207,
  [SMALL_STATE(580)] = 15211,
  [SMALL_STATE(581)] = 15215,
  [SMALL_STATE(582)] = 15219,
  [SMALL_STATE(583)] = 15223,
  [SMALL_STATE(584)] = 15227,
  [SMALL_STATE(585)] = 15231,
  [SMALL_STATE(586)] = 15235,
  [SMALL_STATE(587)] = 15239,
  [SMALL_STATE(588)] = 15243,
  [SMALL_STATE(589)] = 15247,
  [SMALL_STATE(590)] = 15251,
  [SMALL_STATE(591)] = 15255,
  [SMALL_STATE(592)] = 15259,
  [SMALL_STATE(593)] = 15263,
  [SMALL_STATE(594)] = 15267,
  [SMALL_STATE(595)] = 15271,
  [SMALL_STATE(596)] = 15275,
  [SMALL_STATE(597)] = 15279,
  [SMALL_STATE(598)] = 15283,
  [SMALL_STATE(599)] = 15287,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 16),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 31),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 31),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 17),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 21),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 45),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 45),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 47),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 47),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 61),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 61),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 3, 0, 76),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 1, 0, 68),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 2, 0, 68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 2, 0, 76),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(117),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(356),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(589),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(367),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(337),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(338),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(352),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(325),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(360),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(436),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(544),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(129),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(358),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(581),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(364),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(332),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(339),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(351),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(321),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(365),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(407),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(495),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 39),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 39),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 10),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 10),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(584),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 25),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 25),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_thunk_body_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_thunk_body_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_thunk_body, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_thunk_body, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_thunk_body, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_thunk_body, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_implicit_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(585),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 59),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 59),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_thunk_body, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_thunk_body, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 24),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 24),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 67),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 67),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 50),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 50),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 54),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 3, 0, 54),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 52),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 52),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 3, 0, 50),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 3, 0, 50),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 50),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 50),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 3, 0, 54),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 3, 0, 54),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 52),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 52),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 3, 0, 50),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 3, 0, 50),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 3, 0, 53),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 3, 0, 53),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fold_statement, 2, 0, 34),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fold_statement, 2, 0, 34),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_content_line, 2, 0, 24),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_content_line, 2, 0, 24),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_statement_body, 3, 0, 65),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_statement_body, 3, 0, 65),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_statement_body, 3, 0, 66),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_statement_body, 3, 0, 66),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank_statement, 2, 0, 34),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rank_statement, 2, 0, 34),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 9),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, 0, 9),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 73),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 73),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 74),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 74),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 2, 0, 75),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_body, 2, 0, 75),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 77),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 77),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 78),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, 0, 78),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 3, 0, 79),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_body, 3, 0, 79),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 2, 0, 34),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 2, 0, 34),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 0, 81),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_until_clause, 3, 0, 81),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 4, 0, 82),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_body, 4, 0, 82),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 50),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 50),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 51),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3, 0, 51),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_statement, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_statement, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 52),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ask_statement, 3, 0, 52),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_statement_entry, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_statement_entry, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 52),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 52),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 3, 0, 50),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 3, 0, 50),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 50),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 50),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_thunk_statement, 1, 0, 18),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_thunk_statement, 1, 0, 18),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 54),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 3, 0, 54),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 2, 0, 34),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 2, 0, 34),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unfold_statement, 2, 0, 34),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unfold_statement, 2, 0, 34),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 34),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keep_statement, 2, 0, 34),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 34),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_statement, 2, 0, 34),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block_body, 3, 0, 80),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block_body, 3, 0, 80),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(202),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_body_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 42),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 42),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 42),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 42),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 24),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 24),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 13),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 13),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 36),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 36),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 43),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 43),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 55),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 55),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 56),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 56),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 69),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 69),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 24),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 24),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 70),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 70),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_indented_content_line, 2, 0, 24),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_indented_content_line, 2, 0, 24),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 44),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 44),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 30),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 30),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 32),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 32),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 20),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 5),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 37),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 37),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 40),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 40),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 41),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 41),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 6),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 6),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 6),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 6),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 62),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 62),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 60),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 60),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 46),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 46),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 9),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 9),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 26),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 26),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 71),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 71),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 37),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 37),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 72),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 72),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 9),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 9),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 12),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 12),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 4),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 4),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 11),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 11),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 12),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 12),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 6),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 6),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 20),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 20),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 6),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 6),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 19),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 19),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 19),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 19),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 20),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 20),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 32),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 32),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 6),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 6),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 72),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 72),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 4),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 4),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 27),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 27),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 62),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 62),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 46),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 46),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 57),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 57),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 58),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 58),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 23),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 23),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [1054] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 6),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 6),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 60),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 60),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 26),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 26),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 22),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 22), SHIFT_REPEAT(330),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [1176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_ref_list, 1, 0, 33),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 1, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_ref_list, 2, 0, 48),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_parallelism, 2, 0, 53),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_ref_list_repeat1, 2, 0, 64),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_ref_list_repeat1, 2, 0, 64), SHIFT_REPEAT(550),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 29),
  [1293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 29), SHIFT_REPEAT(459),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 1, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 15),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 24),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_ref_list_repeat1, 2, 0, 63),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_output_type, 2, 0, 49),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 14),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 2, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_parallel_head, 1, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 14),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 28),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 30),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 44),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 2, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_rank_head, 1, 0, 0),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_limit, 1, 0, 35),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
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
