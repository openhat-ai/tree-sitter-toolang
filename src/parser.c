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
#define STATE_COUNT 658
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 86

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_program_doc_comment = 2,
  sym_doc_comment = 3,
  sym_comment_line = 4,
  sym_inline_comment = 5,
  anon_sym_Text = 6,
  anon_sym_Number = 7,
  anon_sym_Boolean = 8,
  anon_sym_Json = 9,
  anon_sym_Part = 10,
  anon_sym_Pack = 11,
  sym_array_suffix = 12,
  sym_frontmatter_comment = 13,
  sym_block_language = 14,
  sym_flow_target = 15,
  sym_integer_literal = 16,
  aux_sym_flow_inline_text_token1 = 17,
  anon_sym_models = 18,
  anon_sym_tools = 19,
  anon_sym_skills = 20,
  anon_sym_services = 21,
  anon_sym_psyches = 22,
  anon_sym_hands = 23,
  anon_sym_handoffs = 24,
  anon_sym_recall = 25,
  anon_sym_EQ = 26,
  anon_sym_PLUS_EQ = 27,
  anon_sym_DASH_EQ = 28,
  anon_sym_context = 29,
  anon_sym_instruct = 30,
  anon_sym_user = 31,
  anon_sym_assistant = 32,
  anon_sym_tool = 33,
  anon_sym_default = 34,
  anon_sym_none = 35,
  sym_use_keyword = 36,
  sym_struct_keyword = 37,
  sym_psyche_keyword = 38,
  sym_skill_keyword = 39,
  sym_service_keyword = 40,
  sym_prompt_keyword = 41,
  sym_thunk_keyword = 42,
  sym_task_keyword = 43,
  sym_chore_keyword = 44,
  sym_flow_keyword = 45,
  sym_pass_keyword = 46,
  sym_flow_do_keyword = 47,
  sym_flow_ask_keyword = 48,
  sym_flow_unfold_keyword = 49,
  sym_flow_keep_keyword = 50,
  sym_flow_drop_keyword = 51,
  sym_flow_rank_keyword = 52,
  sym_flow_each_keyword = 53,
  sym_flow_fold_keyword = 54,
  sym_flow_repeat_keyword = 55,
  sym_flow_until_keyword = 56,
  sym_flow_to_keyword = 57,
  sym_flow_par_keyword = 58,
  sym_optional_marker = 59,
  sym_arrow = 60,
  sym_colon = 61,
  sym_lparen = 62,
  sym_rparen = 63,
  sym_comma = 64,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 65,
  sym_frontmatter_delimiter = 66,
  sym_cap_kind = 67,
  sym_cap_uri = 68,
  sym_cap_shorthand = 69,
  sym_bare_value = 70,
  sym_type_name = 71,
  sym_value_name = 72,
  sym_indented_raw_text = 73,
  sym_flow_bare_raw_text = 74,
  sym_fenced_raw_text = 75,
  sym_source_file = 76,
  sym_item = 77,
  sym_newline = 78,
  sym_blank_line = 79,
  sym_line_end = 80,
  sym_use = 81,
  sym_type = 82,
  sym_base_type = 83,
  sym_builtin_type = 84,
  sym_user_type = 85,
  sym_type_suffix = 86,
  sym_struct = 87,
  sym_struct_name = 88,
  sym_struct_body = 89,
  sym_field = 90,
  sym_field_name = 91,
  sym_psyche = 92,
  sym_skill = 93,
  sym_service = 94,
  sym_prompt = 95,
  sym_task = 96,
  sym_chore = 97,
  sym_cap_name = 98,
  sym_cap_ref = 99,
  sym_job_name = 100,
  sym_job_body = 101,
  sym_definition_body = 102,
  sym_definition_indented = 103,
  sym_definition_markdown = 104,
  sym_definition_indented_content_line = 105,
  sym_definition_fenced_content_line = 106,
  sym_frontmatter = 107,
  sym_property_eq = 108,
  sym_property_colon = 109,
  sym_property_key = 110,
  sym_property_value = 111,
  sym_instruct = 112,
  sym_instruct_name = 113,
  sym_instruct_body = 114,
  sym_context = 115,
  sym_context_name = 116,
  sym_context_body = 117,
  sym_block_indented = 118,
  sym_block_fenced = 119,
  sym_block_indented_content_line = 120,
  sym_block_fenced_content_line = 121,
  sym_thunk = 122,
  sym_thunk_name = 123,
  sym_thunk_body = 124,
  sym_params = 125,
  sym_param = 126,
  sym_param_name = 127,
  sym_flow = 128,
  sym_flow_name = 129,
  sym_flow_body = 130,
  sym_flow_body_tail = 131,
  sym_flow_body_statement = 132,
  sym_flow_entry = 133,
  sym_flow_bare_thunk_step = 134,
  sym_flow_bare_thunk_body = 135,
  sym_flow_bare_content_line = 136,
  sym_flow_do_step = 137,
  sym_flow_ask_step = 138,
  sym_flow_unfold_step = 139,
  sym_flow_keep_step = 140,
  sym_flow_drop_step = 141,
  sym_flow_rank_step = 142,
  sym_flow_each_step = 143,
  sym_flow_fold_step = 144,
  sym_flow_repeat_step = 145,
  sym_flow_repeat_block_body = 146,
  sym_flow_until_clause = 147,
  sym_flow_condition_body = 148,
  sym_flow_inline_step_body = 149,
  sym_flow_inline_output_type = 150,
  sym_flow_inline_parallel_head = 151,
  sym_flow_inline_rank_head = 152,
  sym_flow_inline_each_head = 153,
  sym_flow_named_parallel_head = 154,
  sym_flow_parallelism = 155,
  sym_flow_rank_limit = 156,
  sym_flow_target_list = 157,
  sym_flow_inline_body = 158,
  sym_flow_repeat_count = 159,
  sym_flow_inline_text = 160,
  sym_directive = 161,
  sym_directive_key = 162,
  sym_directive_op = 163,
  sym_directive_csv = 164,
  sym_instruction_section = 165,
  sym_message_section = 166,
  sym_thunk_tail = 167,
  sym_roled_message = 168,
  sym_unroled_message = 169,
  sym_unroled_message_block = 170,
  sym_block_indented_implicit = 171,
  sym_context_block = 172,
  sym_instruct_block = 173,
  sym_roled_message_block = 174,
  sym_pass_statement = 175,
  sym_context_block_kind = 176,
  sym_instruct_block_kind = 177,
  sym_roled_message_kind = 178,
  sym_block_value = 179,
  sym_block_inline = 180,
  sym_block_name = 181,
  sym_block_content_inline = 182,
  sym_context_keyword = 183,
  sym_instruct_keyword = 184,
  sym_assign_operator = 185,
  sym_fence_open = 186,
  sym_fence_close = 187,
  sym_inline_text = 188,
  aux_sym_source_file_repeat1 = 189,
  aux_sym_type_repeat1 = 190,
  aux_sym_struct_body_repeat1 = 191,
  aux_sym_definition_indented_repeat1 = 192,
  aux_sym_definition_markdown_repeat1 = 193,
  aux_sym_frontmatter_repeat1 = 194,
  aux_sym_block_indented_repeat1 = 195,
  aux_sym_block_fenced_repeat1 = 196,
  aux_sym_thunk_body_repeat1 = 197,
  aux_sym_thunk_body_repeat2 = 198,
  aux_sym_params_repeat1 = 199,
  aux_sym_flow_body_repeat1 = 200,
  aux_sym_flow_body_tail_repeat1 = 201,
  aux_sym_flow_body_tail_repeat2 = 202,
  aux_sym_flow_bare_thunk_body_repeat1 = 203,
  aux_sym_flow_target_list_repeat1 = 204,
  aux_sym_directive_csv_repeat1 = 205,
  aux_sym_message_section_repeat1 = 206,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_program_doc_comment] = "program_doc_comment",
  [sym_doc_comment] = "doc_comment",
  [sym_comment_line] = "comment_line",
  [sym_inline_comment] = "inline_comment",
  [anon_sym_Text] = "Text",
  [anon_sym_Number] = "Number",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Json] = "Json",
  [anon_sym_Part] = "Part",
  [anon_sym_Pack] = "Pack",
  [sym_array_suffix] = "array_suffix",
  [sym_frontmatter_comment] = "frontmatter_comment",
  [sym_block_language] = "block_language",
  [sym_flow_target] = "flow_target",
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
  [sym_frontmatter_delimiter] = "frontmatter_delimiter",
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
  [sym_job_body] = "job_body",
  [sym_definition_body] = "definition_body",
  [sym_definition_indented] = "definition_indented",
  [sym_definition_markdown] = "definition_markdown",
  [sym_definition_indented_content_line] = "definition_indented_content_line",
  [sym_definition_fenced_content_line] = "definition_fenced_content_line",
  [sym_frontmatter] = "frontmatter",
  [sym_property_eq] = "property_eq",
  [sym_property_colon] = "property_colon",
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
  [sym_flow_body_statement] = "flow_body_statement",
  [sym_flow_entry] = "flow_entry",
  [sym_flow_bare_thunk_step] = "step",
  [sym_flow_bare_thunk_body] = "flow_bare_thunk_body",
  [sym_flow_bare_content_line] = "flow_bare_content_line",
  [sym_flow_do_step] = "step",
  [sym_flow_ask_step] = "step",
  [sym_flow_unfold_step] = "step",
  [sym_flow_keep_step] = "step",
  [sym_flow_drop_step] = "step",
  [sym_flow_rank_step] = "step",
  [sym_flow_each_step] = "step",
  [sym_flow_fold_step] = "step",
  [sym_flow_repeat_step] = "step",
  [sym_flow_repeat_block_body] = "flow_repeat_block_body",
  [sym_flow_until_clause] = "flow_until_clause",
  [sym_flow_condition_body] = "flow_condition_body",
  [sym_flow_inline_step_body] = "flow_inline_step_body",
  [sym_flow_inline_output_type] = "flow_inline_output_type",
  [sym_flow_inline_parallel_head] = "flow_inline_parallel_head",
  [sym_flow_inline_rank_head] = "flow_inline_rank_head",
  [sym_flow_inline_each_head] = "flow_inline_each_head",
  [sym_flow_named_parallel_head] = "flow_named_parallel_head",
  [sym_flow_parallelism] = "flow_parallelism",
  [sym_flow_rank_limit] = "flow_rank_limit",
  [sym_flow_target_list] = "flow_target_list",
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
  [sym_inline_text] = "inline_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_definition_indented_repeat1] = "definition_indented_repeat1",
  [aux_sym_definition_markdown_repeat1] = "definition_markdown_repeat1",
  [aux_sym_frontmatter_repeat1] = "frontmatter_repeat1",
  [aux_sym_block_indented_repeat1] = "block_indented_repeat1",
  [aux_sym_block_fenced_repeat1] = "block_fenced_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_flow_body_repeat1] = "flow_body_repeat1",
  [aux_sym_flow_body_tail_repeat1] = "flow_body_tail_repeat1",
  [aux_sym_flow_body_tail_repeat2] = "flow_body_tail_repeat2",
  [aux_sym_flow_bare_thunk_body_repeat1] = "flow_bare_thunk_body_repeat1",
  [aux_sym_flow_target_list_repeat1] = "flow_target_list_repeat1",
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
  [aux_sym_message_section_repeat1] = "message_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [sym_program_doc_comment] = sym_program_doc_comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment_line] = sym_comment_line,
  [sym_inline_comment] = sym_inline_comment,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Json] = anon_sym_Json,
  [anon_sym_Part] = anon_sym_Part,
  [anon_sym_Pack] = anon_sym_Pack,
  [sym_array_suffix] = sym_array_suffix,
  [sym_frontmatter_comment] = sym_frontmatter_comment,
  [sym_block_language] = sym_block_language,
  [sym_flow_target] = sym_flow_target,
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
  [sym_frontmatter_delimiter] = sym_frontmatter_delimiter,
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
  [sym_job_body] = sym_job_body,
  [sym_definition_body] = sym_definition_body,
  [sym_definition_indented] = sym_definition_indented,
  [sym_definition_markdown] = sym_definition_markdown,
  [sym_definition_indented_content_line] = sym_definition_indented_content_line,
  [sym_definition_fenced_content_line] = sym_definition_fenced_content_line,
  [sym_frontmatter] = sym_frontmatter,
  [sym_property_eq] = sym_property_eq,
  [sym_property_colon] = sym_property_colon,
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
  [sym_flow_body_statement] = sym_flow_body_statement,
  [sym_flow_entry] = sym_flow_entry,
  [sym_flow_bare_thunk_step] = sym_flow_bare_thunk_step,
  [sym_flow_bare_thunk_body] = sym_flow_bare_thunk_body,
  [sym_flow_bare_content_line] = sym_flow_bare_content_line,
  [sym_flow_do_step] = sym_flow_bare_thunk_step,
  [sym_flow_ask_step] = sym_flow_bare_thunk_step,
  [sym_flow_unfold_step] = sym_flow_bare_thunk_step,
  [sym_flow_keep_step] = sym_flow_bare_thunk_step,
  [sym_flow_drop_step] = sym_flow_bare_thunk_step,
  [sym_flow_rank_step] = sym_flow_bare_thunk_step,
  [sym_flow_each_step] = sym_flow_bare_thunk_step,
  [sym_flow_fold_step] = sym_flow_bare_thunk_step,
  [sym_flow_repeat_step] = sym_flow_bare_thunk_step,
  [sym_flow_repeat_block_body] = sym_flow_repeat_block_body,
  [sym_flow_until_clause] = sym_flow_until_clause,
  [sym_flow_condition_body] = sym_flow_condition_body,
  [sym_flow_inline_step_body] = sym_flow_inline_step_body,
  [sym_flow_inline_output_type] = sym_flow_inline_output_type,
  [sym_flow_inline_parallel_head] = sym_flow_inline_parallel_head,
  [sym_flow_inline_rank_head] = sym_flow_inline_rank_head,
  [sym_flow_inline_each_head] = sym_flow_inline_each_head,
  [sym_flow_named_parallel_head] = sym_flow_named_parallel_head,
  [sym_flow_parallelism] = sym_flow_parallelism,
  [sym_flow_rank_limit] = sym_flow_rank_limit,
  [sym_flow_target_list] = sym_flow_target_list,
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
  [sym_inline_text] = sym_inline_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_definition_indented_repeat1] = aux_sym_definition_indented_repeat1,
  [aux_sym_definition_markdown_repeat1] = aux_sym_definition_markdown_repeat1,
  [aux_sym_frontmatter_repeat1] = aux_sym_frontmatter_repeat1,
  [aux_sym_block_indented_repeat1] = aux_sym_block_indented_repeat1,
  [aux_sym_block_fenced_repeat1] = aux_sym_block_fenced_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_flow_body_repeat1] = aux_sym_flow_body_repeat1,
  [aux_sym_flow_body_tail_repeat1] = aux_sym_flow_body_tail_repeat1,
  [aux_sym_flow_body_tail_repeat2] = aux_sym_flow_body_tail_repeat2,
  [aux_sym_flow_bare_thunk_body_repeat1] = aux_sym_flow_bare_thunk_body_repeat1,
  [aux_sym_flow_target_list_repeat1] = aux_sym_flow_target_list_repeat1,
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
  [sym_program_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
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
  [sym_frontmatter_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_target] = {
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
  [sym_frontmatter_delimiter] = {
    .visible = true,
    .named = true,
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
  [sym_job_body] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_indented] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_indented_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_fenced_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_property_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_property_colon] = {
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
  [sym_flow_body_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bare_thunk_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bare_thunk_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bare_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_do_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_ask_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_unfold_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_keep_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_drop_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_rank_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_each_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_fold_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_block_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_until_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_condition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_step_body] = {
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
  [sym_flow_target_list] = {
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
  [aux_sym_definition_indented_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_markdown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frontmatter_repeat1] = {
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
  [aux_sym_flow_bare_thunk_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_target_list_repeat1] = {
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
  field_frontmatter = 11,
  field_head = 12,
  field_instruction = 13,
  field_key = 14,
  field_keyword = 15,
  field_kind = 16,
  field_language = 17,
  field_messages = 18,
  field_name = 19,
  field_operator = 20,
  field_optional = 21,
  field_output = 22,
  field_param = 23,
  field_params = 24,
  field_reference = 25,
  field_suffix = 26,
  field_tail = 27,
  field_target = 28,
  field_targets = 29,
  field_text = 30,
  field_type = 31,
  field_value = 32,
  field_values = 33,
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
  [field_frontmatter] = "frontmatter",
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
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 4},
  [6] = {.index = 13, .length = 1},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 3},
  [9] = {.index = 19, .length = 1},
  [10] = {.index = 20, .length = 1},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 1},
  [17] = {.index = 31, .length = 4},
  [18] = {.index = 35, .length = 4},
  [19] = {.index = 39, .length = 4},
  [20] = {.index = 43, .length = 2},
  [21] = {.index = 45, .length = 1},
  [22] = {.index = 46, .length = 1},
  [23] = {.index = 47, .length = 1},
  [24] = {.index = 48, .length = 1},
  [25] = {.index = 49, .length = 2},
  [26] = {.index = 51, .length = 2},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 4},
  [30] = {.index = 62, .length = 4},
  [31] = {.index = 66, .length = 1},
  [32] = {.index = 67, .length = 2},
  [33] = {.index = 69, .length = 1},
  [34] = {.index = 70, .length = 1},
  [35] = {.index = 71, .length = 5},
  [36] = {.index = 76, .length = 2},
  [37] = {.index = 78, .length = 1},
  [38] = {.index = 79, .length = 1},
  [39] = {.index = 80, .length = 2},
  [40] = {.index = 82, .length = 3},
  [41] = {.index = 85, .length = 4},
  [42] = {.index = 89, .length = 5},
  [43] = {.index = 94, .length = 5},
  [44] = {.index = 99, .length = 5},
  [45] = {.index = 104, .length = 2},
  [46] = {.index = 106, .length = 2},
  [47] = {.index = 108, .length = 3},
  [48] = {.index = 111, .length = 2},
  [49] = {.index = 113, .length = 2},
  [50] = {.index = 115, .length = 2},
  [51] = {.index = 117, .length = 2},
  [52] = {.index = 119, .length = 2},
  [53] = {.index = 121, .length = 1},
  [54] = {.index = 122, .length = 2},
  [55] = {.index = 124, .length = 2},
  [56] = {.index = 126, .length = 2},
  [57] = {.index = 128, .length = 3},
  [58] = {.index = 131, .length = 1},
  [59] = {.index = 132, .length = 6},
  [60] = {.index = 138, .length = 6},
  [61] = {.index = 144, .length = 6},
  [62] = {.index = 150, .length = 1},
  [63] = {.index = 151, .length = 2},
  [64] = {.index = 153, .length = 2},
  [65] = {.index = 155, .length = 2},
  [66] = {.index = 157, .length = 4},
  [67] = {.index = 161, .length = 1},
  [68] = {.index = 162, .length = 2},
  [69] = {.index = 164, .length = 3},
  [70] = {.index = 167, .length = 3},
  [71] = {.index = 170, .length = 2},
  [72] = {.index = 172, .length = 2},
  [73] = {.index = 174, .length = 7},
  [74] = {.index = 181, .length = 1},
  [75] = {.index = 182, .length = 1},
  [76] = {.index = 183, .length = 2},
  [77] = {.index = 185, .length = 1},
  [78] = {.index = 186, .length = 5},
  [79] = {.index = 191, .length = 4},
  [80] = {.index = 195, .length = 3},
  [81] = {.index = 198, .length = 2},
  [82] = {.index = 200, .length = 2},
  [83] = {.index = 202, .length = 3},
  [84] = {.index = 205, .length = 2},
  [85] = {.index = 207, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
  [1] =
    {field_colon, 1},
    {field_keyword, 0},
  [3] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [6] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [9] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [13] =
    {field_suffix, 0},
  [14] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [16] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [19] =
    {field_instruction, 0},
  [20] =
    {field_messages, 0},
  [21] =
    {field_tail, 0},
  [22] =
    {field_value, 0},
  [23] =
    {field_param, 1},
  [24] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [27] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [30] =
    {field_body, 0},
  [31] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [35] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [39] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [43] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [45] =
    {field_keyword, 0},
  [46] =
    {field_content, 0},
  [47] =
    {field_instruction, 1},
  [48] =
    {field_tail, 1},
  [49] =
    {field_instruction, 0},
    {field_tail, 1},
  [51] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [53] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [55] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [58] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [62] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [66] =
    {field_target, 0},
  [67] =
    {field_body, 1},
    {field_keyword, 0},
  [69] =
    {field_count, 0},
  [70] =
    {field_close, 2},
  [71] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [76] =
    {field_instruction, 1},
    {field_tail, 2},
  [78] =
    {field_instruction, 2},
  [79] =
    {field_tail, 2},
  [80] =
    {field_instruction, 0},
    {field_tail, 2},
  [82] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [85] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [89] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [94] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [99] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [104] =
    {field_target, 0},
    {field_target, 1, .inherited = true},
  [106] =
    {field_keyword, 0},
    {field_type, 1},
  [108] =
    {field_body, 2},
    {field_head, 1},
    {field_keyword, 0},
  [111] =
    {field_keyword, 0},
    {field_targets, 1},
  [113] =
    {field_keyword, 0},
    {field_target, 1},
  [115] =
    {field_count, 1},
    {field_keyword, 0},
  [117] =
    {field_head, 1},
    {field_keyword, 0},
  [119] =
    {field_close, 3},
    {field_language, 1},
  [121] =
    {field_close, 3},
  [122] =
    {field_close, 3},
    {field_frontmatter, 2},
  [124] =
    {field_instruction, 1},
    {field_tail, 3},
  [126] =
    {field_instruction, 2},
    {field_tail, 3},
  [128] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [131] =
    {field_name, 0},
  [132] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [138] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [144] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [150] =
    {field_target, 1},
  [151] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [153] =
    {field_colon, 0},
    {field_value, 2},
  [155] =
    {field_colon, 0},
    {field_value, 1},
  [157] =
    {field_colon, 2},
    {field_condition, 3},
    {field_condition_keyword, 1},
    {field_keyword, 0},
  [161] =
    {field_entry, 0},
  [162] =
    {field_close, 4},
    {field_language, 1},
  [164] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [167] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [170] =
    {field_close, 4},
    {field_frontmatter, 2},
  [172] =
    {field_instruction, 2},
    {field_tail, 4},
  [174] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [181] =
    {field_text, 1},
  [182] =
    {field_text, 0},
  [183] =
    {field_condition, 1},
    {field_entry, 0},
  [185] =
    {field_entry, 1},
  [186] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [191] =
    {field_body, 4},
    {field_colon, 2},
    {field_count, 1},
    {field_keyword, 0},
  [195] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [198] =
    {field_condition, 2},
    {field_entry, 0},
  [200] =
    {field_condition, 2},
    {field_entry, 1},
  [202] =
    {field_colon, 1},
    {field_condition, 2},
    {field_keyword, 0},
  [205] =
    {field_condition, 3},
    {field_entry, 1},
  [207] =
    {field_colon, 1},
    {field_key, 0},
    {field_value, 2},
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
  [15] = 12,
  [16] = 14,
  [17] = 17,
  [18] = 13,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
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
  [47] = 46,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 44,
  [53] = 50,
  [54] = 54,
  [55] = 48,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 65,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 64,
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
  [104] = 73,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 64,
  [111] = 111,
  [112] = 64,
  [113] = 70,
  [114] = 68,
  [115] = 65,
  [116] = 116,
  [117] = 65,
  [118] = 69,
  [119] = 66,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 109,
  [127] = 65,
  [128] = 87,
  [129] = 88,
  [130] = 102,
  [131] = 103,
  [132] = 106,
  [133] = 108,
  [134] = 111,
  [135] = 116,
  [136] = 77,
  [137] = 78,
  [138] = 79,
  [139] = 80,
  [140] = 81,
  [141] = 82,
  [142] = 83,
  [143] = 84,
  [144] = 86,
  [145] = 120,
  [146] = 121,
  [147] = 122,
  [148] = 64,
  [149] = 124,
  [150] = 92,
  [151] = 89,
  [152] = 90,
  [153] = 91,
  [154] = 100,
  [155] = 76,
  [156] = 85,
  [157] = 70,
  [158] = 68,
  [159] = 93,
  [160] = 94,
  [161] = 95,
  [162] = 96,
  [163] = 97,
  [164] = 98,
  [165] = 99,
  [166] = 125,
  [167] = 101,
  [168] = 105,
  [169] = 107,
  [170] = 123,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 44,
  [176] = 176,
  [177] = 177,
  [178] = 176,
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 45,
  [184] = 184,
  [185] = 44,
  [186] = 186,
  [187] = 46,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 64,
  [195] = 70,
  [196] = 68,
  [197] = 197,
  [198] = 67,
  [199] = 65,
  [200] = 200,
  [201] = 73,
  [202] = 176,
  [203] = 203,
  [204] = 204,
  [205] = 70,
  [206] = 206,
  [207] = 65,
  [208] = 44,
  [209] = 68,
  [210] = 177,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 70,
  [215] = 215,
  [216] = 216,
  [217] = 200,
  [218] = 218,
  [219] = 73,
  [220] = 212,
  [221] = 192,
  [222] = 203,
  [223] = 213,
  [224] = 191,
  [225] = 197,
  [226] = 204,
  [227] = 64,
  [228] = 68,
  [229] = 65,
  [230] = 230,
  [231] = 64,
  [232] = 232,
  [233] = 70,
  [234] = 68,
  [235] = 65,
  [236] = 236,
  [237] = 237,
  [238] = 65,
  [239] = 64,
  [240] = 73,
  [241] = 65,
  [242] = 68,
  [243] = 64,
  [244] = 70,
  [245] = 68,
  [246] = 246,
  [247] = 70,
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
  [272] = 272,
  [273] = 213,
  [274] = 191,
  [275] = 197,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 203,
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
  [306] = 204,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 278,
  [317] = 64,
  [318] = 65,
  [319] = 68,
  [320] = 64,
  [321] = 65,
  [322] = 70,
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
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 347,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 354,
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
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 372,
  [376] = 373,
  [377] = 377,
  [378] = 363,
  [379] = 365,
  [380] = 366,
  [381] = 374,
  [382] = 377,
  [383] = 359,
  [384] = 364,
  [385] = 377,
  [386] = 365,
  [387] = 366,
  [388] = 354,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 390,
  [398] = 398,
  [399] = 396,
  [400] = 400,
  [401] = 391,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 403,
  [407] = 402,
  [408] = 405,
  [409] = 405,
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
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 416,
  [426] = 418,
  [427] = 419,
  [428] = 421,
  [429] = 429,
  [430] = 422,
  [431] = 423,
  [432] = 432,
  [433] = 429,
  [434] = 432,
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
  [454] = 410,
  [455] = 455,
  [456] = 456,
  [457] = 65,
  [458] = 70,
  [459] = 68,
  [460] = 460,
  [461] = 439,
  [462] = 462,
  [463] = 70,
  [464] = 68,
  [465] = 465,
  [466] = 65,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 445,
  [472] = 472,
  [473] = 473,
  [474] = 462,
  [475] = 450,
  [476] = 453,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 477,
  [482] = 438,
  [483] = 470,
  [484] = 484,
  [485] = 477,
  [486] = 440,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 65,
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
  [507] = 506,
  [508] = 508,
  [509] = 509,
  [510] = 508,
  [511] = 511,
  [512] = 512,
  [513] = 70,
  [514] = 68,
  [515] = 65,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 519,
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
  [533] = 519,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 531,
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
  [556] = 519,
  [557] = 552,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 539,
  [563] = 563,
  [564] = 525,
  [565] = 534,
  [566] = 548,
  [567] = 567,
  [568] = 529,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 563,
  [573] = 573,
  [574] = 574,
  [575] = 567,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 561,
  [581] = 519,
  [582] = 552,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 519,
  [587] = 552,
  [588] = 519,
  [589] = 552,
  [590] = 519,
  [591] = 519,
  [592] = 519,
  [593] = 519,
  [594] = 594,
  [595] = 519,
  [596] = 519,
  [597] = 519,
  [598] = 598,
  [599] = 532,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 64,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 70,
  [613] = 68,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 65,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 609,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 609,
  [631] = 65,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 635,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 603,
  [649] = 649,
  [650] = 627,
  [651] = 651,
  [652] = 652,
  [653] = 602,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(0);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == 'B') ADVANCE(377);
      if (lookahead == 'J') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(382);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(384);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == 'B') ADVANCE(377);
      if (lookahead == 'J') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(382);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(384);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == '+') ADVANCE(591);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == 'B') ADVANCE(377);
      if (lookahead == 'J') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(382);
      if (lookahead == 'P') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(592);
      if (lookahead == '`') ADVANCE(594);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(617);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead == 'p') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(693);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead == 'k') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == 'u') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(739);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 258,
        '\r', 1,
        '#', 262,
        ')', 350,
        ',', 351,
        ':', 348,
        '[', 48,
        '`', 50,
        'm', 82,
        'p', 59,
        's', 109,
        'u', 169,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 258,
        '\r', 1,
        '#', 262,
        '`', 280,
        'd', 397,
        'n', 418,
        '\t', 277,
        '\f', 277,
        ' ', 277,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == ')') ADVANCE(350);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(384);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(740);
      if (lookahead != 0) ADVANCE(746);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(741);
      if (lookahead != 0) ADVANCE(746);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(260);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\f') SKIP(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 33:
      if (lookahead == '\f') SKIP(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\f') SKIP(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(739);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(246);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(41);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(42);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(43);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(292);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 49:
      if (lookahead == '`') ADVANCE(352);
      END_STATE();
    case 50:
      if (lookahead == '`') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'k') ADVANCE(121);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(332);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(332);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(324);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(322);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 233:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 235:
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 237:
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(245);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 246:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(356);
      END_STATE();
    case 247:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(247);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 248:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(248);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(446);
      END_STATE();
    case 249:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(249);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(447);
      END_STATE();
    case 250:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(250);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == 'f') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(423);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 251:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(251);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      END_STATE();
    case 252:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(252);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 253:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(253);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(451);
      END_STATE();
    case 254:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(254);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(444);
      END_STATE();
    case 255:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\f') SKIP(255);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 256:
      if (eof) ADVANCE(257);
      ADVANCE_MAP(
        '\n', 258,
        '\r', 1,
        '#', 22,
        '(', 349,
        ')', 350,
        '+', 45,
        ',', 351,
        '-', 46,
        ':', 348,
        '=', 291,
        '?', 346,
        'B', 377,
        'J', 379,
        'N', 382,
        'P', 363,
        'T', 367,
        'c', 400,
        'f', 407,
        'i', 412,
        'p', 423,
        's', 391,
        't', 385,
        'u', 425,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(384);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'a') ADVANCE(274);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'o') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'r') ADVANCE(345);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_flow_target);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 258,
        '\r', 1,
        '#', 262,
        '`', 280,
        'd', 397,
        'n', 418,
        '\t', 277,
        '\f', 277,
        ' ', 277,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_task_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_chore_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
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
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(360);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(358);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(356);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'h') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'k') ADVANCE(402);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        0x0b, 588,
        '\f', 448,
        '\r', 1,
        '#', 453,
        'a', 567,
        'c', 502,
        'd', 538,
        'e', 464,
        'f', 521,
        'i', 535,
        'k', 495,
        'p', 468,
        'r', 465,
        's', 496,
        't', 462,
        'u', 531,
        '\t', 444,
        ' ', 444,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        0x0b, 588,
        '\f', 452,
        '\r', 1,
        '#', 453,
        'a', 567,
        'c', 502,
        'd', 538,
        'e', 464,
        'f', 521,
        'i', 535,
        'k', 495,
        'p', 468,
        'r', 465,
        's', 496,
        't', 462,
        'u', 534,
        '\t', 445,
        ' ', 445,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 446,
        '\r', 1,
        '#', 453,
        'a', 565,
        'c', 502,
        'f', 522,
        'h', 459,
        'i', 535,
        'm', 539,
        'p', 467,
        'r', 487,
        's', 488,
        't', 460,
        'u', 562,
        '\t', 446,
        ' ', 446,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 447,
        '\r', 1,
        '#', 453,
        'a', 565,
        'c', 502,
        'f', 522,
        'i', 535,
        'p', 468,
        's', 496,
        't', 461,
        'u', 562,
        '\t', 447,
        ' ', 447,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 448,
        '\r', 1,
        '#', 453,
        'a', 567,
        'c', 502,
        'd', 538,
        'e', 464,
        'f', 521,
        'i', 535,
        'k', 495,
        'p', 468,
        'r', 465,
        's', 496,
        't', 462,
        'u', 531,
        '\t', 444,
        ' ', 444,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 449,
        '\r', 1,
        '#', 453,
        'c', 400,
        'f', 407,
        'i', 412,
        'p', 423,
        's', 391,
        't', 385,
        'u', 425,
        '\t', 449,
        ' ', 449,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 450,
        '\r', 1,
        '#', 453,
        'c', 502,
        'f', 522,
        'i', 535,
        'p', 554,
        's', 496,
        't', 462,
        'u', 569,
        '\t', 450,
        ' ', 450,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 451,
        '\r', 1,
        '#', 453,
        'a', 565,
        'c', 502,
        'f', 522,
        'i', 535,
        'p', 554,
        's', 496,
        't', 461,
        'u', 562,
        '\t', 451,
        ' ', 451,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 258,
        '\f', 452,
        '\r', 1,
        '#', 453,
        'a', 567,
        'c', 502,
        'd', 538,
        'e', 464,
        'f', 521,
        'i', 535,
        'k', 495,
        'p', 468,
        'r', 465,
        's', 496,
        't', 462,
        'u', 534,
        '\t', 445,
        ' ', 445,
      );
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(457);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'k') ADVANCE(505);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'k') ADVANCE(510);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '>') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == ']') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(715);
      if (lookahead == 'h') ADVANCE(730);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(715);
      if (lookahead == 'h') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 's') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'k') ADVANCE(647);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == 'k') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(694);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(691);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(332);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'm') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(639);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'w') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'x') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead == '`') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(740);
      if (lookahead != 0) ADVANCE(746);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(741);
      if (lookahead != 0) ADVANCE(746);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(746);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(746);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(746);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(746);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(746);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 247},
  [2] = {.lex_state = 248},
  [3] = {.lex_state = 248},
  [4] = {.lex_state = 248},
  [5] = {.lex_state = 248},
  [6] = {.lex_state = 248},
  [7] = {.lex_state = 248},
  [8] = {.lex_state = 248},
  [9] = {.lex_state = 248},
  [10] = {.lex_state = 248},
  [11] = {.lex_state = 248},
  [12] = {.lex_state = 247},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 247},
  [18] = {.lex_state = 247},
  [19] = {.lex_state = 247},
  [20] = {.lex_state = 252},
  [21] = {.lex_state = 252},
  [22] = {.lex_state = 252},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 252},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 247},
  [36] = {.lex_state = 249},
  [37] = {.lex_state = 249},
  [38] = {.lex_state = 249},
  [39] = {.lex_state = 248},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 247},
  [44] = {.lex_state = 254},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 254},
  [47] = {.lex_state = 255},
  [48] = {.lex_state = 247},
  [49] = {.lex_state = 255},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 247},
  [52] = {.lex_state = 255},
  [53] = {.lex_state = 252},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 252},
  [56] = {.lex_state = 252},
  [57] = {.lex_state = 253},
  [58] = {.lex_state = 253},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 253},
  [64] = {.lex_state = 248},
  [65] = {.lex_state = 254},
  [66] = {.lex_state = 247},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 248},
  [69] = {.lex_state = 247},
  [70] = {.lex_state = 248},
  [71] = {.lex_state = 248},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 254},
  [76] = {.lex_state = 247},
  [77] = {.lex_state = 247},
  [78] = {.lex_state = 247},
  [79] = {.lex_state = 247},
  [80] = {.lex_state = 247},
  [81] = {.lex_state = 247},
  [82] = {.lex_state = 247},
  [83] = {.lex_state = 247},
  [84] = {.lex_state = 247},
  [85] = {.lex_state = 247},
  [86] = {.lex_state = 247},
  [87] = {.lex_state = 247},
  [88] = {.lex_state = 247},
  [89] = {.lex_state = 247},
  [90] = {.lex_state = 247},
  [91] = {.lex_state = 247},
  [92] = {.lex_state = 247},
  [93] = {.lex_state = 247},
  [94] = {.lex_state = 247},
  [95] = {.lex_state = 247},
  [96] = {.lex_state = 247},
  [97] = {.lex_state = 247},
  [98] = {.lex_state = 247},
  [99] = {.lex_state = 247},
  [100] = {.lex_state = 247},
  [101] = {.lex_state = 247},
  [102] = {.lex_state = 247},
  [103] = {.lex_state = 247},
  [104] = {.lex_state = 255},
  [105] = {.lex_state = 247},
  [106] = {.lex_state = 247},
  [107] = {.lex_state = 247},
  [108] = {.lex_state = 247},
  [109] = {.lex_state = 247},
  [110] = {.lex_state = 255},
  [111] = {.lex_state = 247},
  [112] = {.lex_state = 247},
  [113] = {.lex_state = 247},
  [114] = {.lex_state = 247},
  [115] = {.lex_state = 255},
  [116] = {.lex_state = 247},
  [117] = {.lex_state = 247},
  [118] = {.lex_state = 252},
  [119] = {.lex_state = 252},
  [120] = {.lex_state = 247},
  [121] = {.lex_state = 247},
  [122] = {.lex_state = 247},
  [123] = {.lex_state = 247},
  [124] = {.lex_state = 247},
  [125] = {.lex_state = 247},
  [126] = {.lex_state = 252},
  [127] = {.lex_state = 252},
  [128] = {.lex_state = 252},
  [129] = {.lex_state = 252},
  [130] = {.lex_state = 252},
  [131] = {.lex_state = 252},
  [132] = {.lex_state = 252},
  [133] = {.lex_state = 252},
  [134] = {.lex_state = 252},
  [135] = {.lex_state = 252},
  [136] = {.lex_state = 252},
  [137] = {.lex_state = 252},
  [138] = {.lex_state = 252},
  [139] = {.lex_state = 252},
  [140] = {.lex_state = 252},
  [141] = {.lex_state = 252},
  [142] = {.lex_state = 252},
  [143] = {.lex_state = 252},
  [144] = {.lex_state = 252},
  [145] = {.lex_state = 252},
  [146] = {.lex_state = 252},
  [147] = {.lex_state = 252},
  [148] = {.lex_state = 252},
  [149] = {.lex_state = 252},
  [150] = {.lex_state = 252},
  [151] = {.lex_state = 252},
  [152] = {.lex_state = 252},
  [153] = {.lex_state = 252},
  [154] = {.lex_state = 252},
  [155] = {.lex_state = 252},
  [156] = {.lex_state = 252},
  [157] = {.lex_state = 252},
  [158] = {.lex_state = 252},
  [159] = {.lex_state = 252},
  [160] = {.lex_state = 252},
  [161] = {.lex_state = 252},
  [162] = {.lex_state = 252},
  [163] = {.lex_state = 252},
  [164] = {.lex_state = 252},
  [165] = {.lex_state = 252},
  [166] = {.lex_state = 252},
  [167] = {.lex_state = 252},
  [168] = {.lex_state = 252},
  [169] = {.lex_state = 252},
  [170] = {.lex_state = 252},
  [171] = {.lex_state = 249},
  [172] = {.lex_state = 249},
  [173] = {.lex_state = 249},
  [174] = {.lex_state = 249},
  [175] = {.lex_state = 249},
  [176] = {.lex_state = 249},
  [177] = {.lex_state = 249},
  [178] = {.lex_state = 253},
  [179] = {.lex_state = 253},
  [180] = {.lex_state = 250},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 249},
  [183] = {.lex_state = 253},
  [184] = {.lex_state = 250},
  [185] = {.lex_state = 253},
  [186] = {.lex_state = 250},
  [187] = {.lex_state = 253},
  [188] = {.lex_state = 256},
  [189] = {.lex_state = 256},
  [190] = {.lex_state = 249},
  [191] = {.lex_state = 249},
  [192] = {.lex_state = 249},
  [193] = {.lex_state = 249},
  [194] = {.lex_state = 249},
  [195] = {.lex_state = 249},
  [196] = {.lex_state = 249},
  [197] = {.lex_state = 249},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 249},
  [200] = {.lex_state = 249},
  [201] = {.lex_state = 249},
  [202] = {.lex_state = 251},
  [203] = {.lex_state = 249},
  [204] = {.lex_state = 249},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 249},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 251},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 251},
  [211] = {.lex_state = 249},
  [212] = {.lex_state = 249},
  [213] = {.lex_state = 249},
  [214] = {.lex_state = 253},
  [215] = {.lex_state = 253},
  [216] = {.lex_state = 253},
  [217] = {.lex_state = 253},
  [218] = {.lex_state = 253},
  [219] = {.lex_state = 253},
  [220] = {.lex_state = 253},
  [221] = {.lex_state = 253},
  [222] = {.lex_state = 253},
  [223] = {.lex_state = 253},
  [224] = {.lex_state = 253},
  [225] = {.lex_state = 253},
  [226] = {.lex_state = 253},
  [227] = {.lex_state = 253},
  [228] = {.lex_state = 253},
  [229] = {.lex_state = 253},
  [230] = {.lex_state = 253},
  [231] = {.lex_state = 250},
  [232] = {.lex_state = 250},
  [233] = {.lex_state = 250},
  [234] = {.lex_state = 250},
  [235] = {.lex_state = 250},
  [236] = {.lex_state = 250},
  [237] = {.lex_state = 256},
  [238] = {.lex_state = 251},
  [239] = {.lex_state = 256},
  [240] = {.lex_state = 251},
  [241] = {.lex_state = 256},
  [242] = {.lex_state = 251},
  [243] = {.lex_state = 251},
  [244] = {.lex_state = 256},
  [245] = {.lex_state = 256},
  [246] = {.lex_state = 256},
  [247] = {.lex_state = 251},
  [248] = {.lex_state = 247},
  [249] = {.lex_state = 247},
  [250] = {.lex_state = 247},
  [251] = {.lex_state = 247},
  [252] = {.lex_state = 247},
  [253] = {.lex_state = 247},
  [254] = {.lex_state = 247},
  [255] = {.lex_state = 247},
  [256] = {.lex_state = 247},
  [257] = {.lex_state = 247},
  [258] = {.lex_state = 247},
  [259] = {.lex_state = 247},
  [260] = {.lex_state = 247},
  [261] = {.lex_state = 247},
  [262] = {.lex_state = 247},
  [263] = {.lex_state = 247},
  [264] = {.lex_state = 247},
  [265] = {.lex_state = 247},
  [266] = {.lex_state = 247},
  [267] = {.lex_state = 247},
  [268] = {.lex_state = 247},
  [269] = {.lex_state = 247},
  [270] = {.lex_state = 247},
  [271] = {.lex_state = 247},
  [272] = {.lex_state = 247},
  [273] = {.lex_state = 247},
  [274] = {.lex_state = 247},
  [275] = {.lex_state = 247},
  [276] = {.lex_state = 247},
  [277] = {.lex_state = 247},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 247},
  [280] = {.lex_state = 247},
  [281] = {.lex_state = 247},
  [282] = {.lex_state = 247},
  [283] = {.lex_state = 247},
  [284] = {.lex_state = 247},
  [285] = {.lex_state = 247},
  [286] = {.lex_state = 247},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 247},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 247},
  [291] = {.lex_state = 247},
  [292] = {.lex_state = 247},
  [293] = {.lex_state = 247},
  [294] = {.lex_state = 247},
  [295] = {.lex_state = 247},
  [296] = {.lex_state = 247},
  [297] = {.lex_state = 247},
  [298] = {.lex_state = 247},
  [299] = {.lex_state = 247},
  [300] = {.lex_state = 247},
  [301] = {.lex_state = 247},
  [302] = {.lex_state = 247},
  [303] = {.lex_state = 247},
  [304] = {.lex_state = 247},
  [305] = {.lex_state = 247},
  [306] = {.lex_state = 247},
  [307] = {.lex_state = 247},
  [308] = {.lex_state = 247},
  [309] = {.lex_state = 247},
  [310] = {.lex_state = 247},
  [311] = {.lex_state = 247},
  [312] = {.lex_state = 247},
  [313] = {.lex_state = 247},
  [314] = {.lex_state = 247},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 256},
  [324] = {.lex_state = 256},
  [325] = {.lex_state = 256},
  [326] = {.lex_state = 256},
  [327] = {.lex_state = 256},
  [328] = {.lex_state = 256},
  [329] = {.lex_state = 256},
  [330] = {.lex_state = 256},
  [331] = {.lex_state = 256},
  [332] = {.lex_state = 256},
  [333] = {.lex_state = 256},
  [334] = {.lex_state = 256},
  [335] = {.lex_state = 256},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 19},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 14},
  [343] = {.lex_state = 14},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 14},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 14},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 14},
  [353] = {.lex_state = 14},
  [354] = {.lex_state = 20},
  [355] = {.lex_state = 20},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 20},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 14},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 20},
  [367] = {.lex_state = 20},
  [368] = {.lex_state = 20},
  [369] = {.lex_state = 14},
  [370] = {.lex_state = 14},
  [371] = {.lex_state = 14},
  [372] = {.lex_state = 42},
  [373] = {.lex_state = 42},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 42},
  [376] = {.lex_state = 42},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 20},
  [380] = {.lex_state = 20},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 20},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 20},
  [387] = {.lex_state = 20},
  [388] = {.lex_state = 20},
  [389] = {.lex_state = 20},
  [390] = {.lex_state = 43},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 35},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 14},
  [397] = {.lex_state = 43},
  [398] = {.lex_state = 35},
  [399] = {.lex_state = 14},
  [400] = {.lex_state = 18},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 43},
  [403] = {.lex_state = 43},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 14},
  [406] = {.lex_state = 43},
  [407] = {.lex_state = 43},
  [408] = {.lex_state = 14},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 14},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 14},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 256},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 14},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 256},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 14},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 14},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 18},
  [458] = {.lex_state = 18},
  [459] = {.lex_state = 18},
  [460] = {.lex_state = 14},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 14},
  [463] = {.lex_state = 19},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 19},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 256},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 14},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 256},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 256},
  [489] = {.lex_state = 256},
  [490] = {.lex_state = 18},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 18},
  [493] = {.lex_state = 256},
  [494] = {.lex_state = 14},
  [495] = {.lex_state = 35},
  [496] = {.lex_state = 14},
  [497] = {.lex_state = 243},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 256},
  [500] = {.lex_state = 244},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 256},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 14},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 32},
  [507] = {.lex_state = 32},
  [508] = {.lex_state = 32},
  [509] = {.lex_state = 35},
  [510] = {.lex_state = 32},
  [511] = {.lex_state = 256},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 20},
  [514] = {.lex_state = 20},
  [515] = {.lex_state = 20},
  [516] = {.lex_state = 244},
  [517] = {.lex_state = 14},
  [518] = {.lex_state = 20},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 18},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 18},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 256},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 15},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 256},
  [530] = {.lex_state = 256},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 245},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 256},
  [535] = {.lex_state = 256},
  [536] = {.lex_state = 18},
  [537] = {.lex_state = 14},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 256},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 18},
  [542] = {.lex_state = 18},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 18},
  [546] = {.lex_state = 18},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 256},
  [549] = {.lex_state = 256},
  [550] = {.lex_state = 256},
  [551] = {.lex_state = 256},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 256},
  [554] = {.lex_state = 18},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 256},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 256},
  [561] = {.lex_state = 33},
  [562] = {.lex_state = 256},
  [563] = {.lex_state = 256},
  [564] = {.lex_state = 256},
  [565] = {.lex_state = 256},
  [566] = {.lex_state = 256},
  [567] = {.lex_state = 256},
  [568] = {.lex_state = 256},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 256},
  [571] = {.lex_state = 256},
  [572] = {.lex_state = 256},
  [573] = {.lex_state = 18},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 256},
  [576] = {.lex_state = 256},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 256},
  [579] = {.lex_state = 256},
  [580] = {.lex_state = 33},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 256},
  [585] = {.lex_state = 256},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 256},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 245},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 256},
  [602] = {.lex_state = 256},
  [603] = {.lex_state = 256},
  [604] = {.lex_state = 33},
  [605] = {.lex_state = 256},
  [606] = {.lex_state = 245},
  [607] = {.lex_state = 256},
  [608] = {.lex_state = 244},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 256},
  [611] = {.lex_state = 256},
  [612] = {.lex_state = 32},
  [613] = {.lex_state = 32},
  [614] = {.lex_state = 256},
  [615] = {.lex_state = 256},
  [616] = {.lex_state = 256},
  [617] = {.lex_state = 256},
  [618] = {.lex_state = 256},
  [619] = {.lex_state = 32},
  [620] = {.lex_state = 256},
  [621] = {.lex_state = 256},
  [622] = {.lex_state = 256},
  [623] = {.lex_state = 256},
  [624] = {.lex_state = 256},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 256},
  [627] = {.lex_state = 256},
  [628] = {.lex_state = 256},
  [629] = {.lex_state = 256},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 33},
  [632] = {.lex_state = 256},
  [633] = {.lex_state = 14},
  [634] = {.lex_state = 256},
  [635] = {.lex_state = 15},
  [636] = {.lex_state = 15},
  [637] = {.lex_state = 245},
  [638] = {.lex_state = 15},
  [639] = {.lex_state = 256},
  [640] = {.lex_state = 256},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 256},
  [643] = {.lex_state = 256},
  [644] = {.lex_state = 256},
  [645] = {.lex_state = 256},
  [646] = {.lex_state = 256},
  [647] = {.lex_state = 256},
  [648] = {.lex_state = 256},
  [649] = {.lex_state = 256},
  [650] = {.lex_state = 256},
  [651] = {.lex_state = 256},
  [652] = {.lex_state = 256},
  [653] = {.lex_state = 256},
  [654] = {.lex_state = 256},
  [655] = {.lex_state = 256},
  [656] = {.lex_state = 256},
  [657] = {.lex_state = 256},
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
    [sym_frontmatter_delimiter] = ACTIONS(1),
    [sym_cap_kind] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
    [sym_flow_bare_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(641),
    [sym_item] = STATE(43),
    [sym_newline] = STATE(148),
    [sym_blank_line] = STATE(43),
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
    [sym_context_keyword] = STATE(490),
    [sym_instruct_keyword] = STATE(492),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_program_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment_line] = ACTIONS(9),
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
      sym_comment_line,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    STATE(40), 1,
      sym_instruction_section,
    STATE(64), 1,
      sym_newline,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(305), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(39), 3,
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
      sym_program_doc_comment,
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
      sym_comment_line,
    STATE(42), 1,
      sym_instruction_section,
    STATE(64), 1,
      sym_newline,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(266), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(2), 3,
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
      sym_program_doc_comment,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(295), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(300), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(297), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(296), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(249), 1,
      sym_thunk_body,
    STATE(263), 1,
      sym_pass_statement,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(288), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(291), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(3), 1,
      sym_directive,
    STATE(41), 1,
      sym_instruction_section,
    STATE(171), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(312), 1,
      sym_thunk_body,
    STATE(313), 1,
      sym_message_section,
    STATE(314), 1,
      sym_thunk_tail,
    STATE(440), 1,
      sym_directive_key,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
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
    STATE(101), 1,
      sym_flow_until_clause,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(123), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    STATE(164), 1,
      sym_flow_until_clause,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(123), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    STATE(161), 1,
      sym_flow_until_clause,
    ACTIONS(127), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(13), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(123), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    STATE(167), 1,
      sym_flow_until_clause,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(95), 1,
      sym_flow_until_clause,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    ACTIONS(129), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(18), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    ACTIONS(123), 1,
      sym_flow_until_keyword,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    STATE(165), 1,
      sym_flow_until_clause,
    ACTIONS(133), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(15), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(131), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(117), 1,
      sym_flow_until_keyword,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(98), 1,
      sym_flow_until_clause,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    ACTIONS(97), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    STATE(99), 1,
      sym_flow_until_clause,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    ACTIONS(135), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(12), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(131), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_flow_entry,
    STATE(264), 1,
      sym_pass_statement,
    ACTIONS(139), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(28), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(137), 14,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_flow_entry,
    STATE(301), 1,
      sym_pass_statement,
    ACTIONS(139), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(28), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_flow_entry,
    STATE(264), 1,
      sym_pass_statement,
    ACTIONS(165), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(137), 14,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [1989] = 21,
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
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_flow_entry,
    STATE(290), 1,
      sym_pass_statement,
    ACTIONS(169), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(20), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(167), 14,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [2078] = 19,
    ACTIONS(173), 1,
      aux_sym_newline_token1,
    ACTIONS(179), 1,
      sym_flow_do_keyword,
    ACTIONS(182), 1,
      sym_flow_ask_keyword,
    ACTIONS(185), 1,
      sym_flow_unfold_keyword,
    ACTIONS(188), 1,
      sym_flow_keep_keyword,
    ACTIONS(191), 1,
      sym_flow_drop_keyword,
    ACTIONS(194), 1,
      sym_flow_rank_keyword,
    ACTIONS(197), 1,
      sym_flow_each_keyword,
    ACTIONS(200), 1,
      sym_flow_fold_keyword,
    ACTIONS(203), 1,
      sym_flow_repeat_keyword,
    ACTIONS(206), 1,
      sym_flow_bare_raw_text,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_newline,
    ACTIONS(176), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(311), 1,
      sym_flow_body,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [2263] = 27,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(251), 1,
      sym_flow_body,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [2363] = 27,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(272), 1,
      sym_flow_body,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [2463] = 19,
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
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_flow_entry,
    ACTIONS(220), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(28), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(171), 15,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(284), 1,
      sym_flow_body,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(302), 1,
      sym_flow_body,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(303), 1,
      sym_flow_body,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_flow_body,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(283), 1,
      sym_flow_body,
    STATE(286), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(34), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(250), 1,
      sym_pass_statement,
    STATE(262), 1,
      sym_flow_body_tail,
    STATE(317), 1,
      sym_newline,
    STATE(486), 1,
      sym_directive_key,
    STATE(54), 2,
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
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [3144] = 21,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      aux_sym_newline_token1,
    ACTIONS(258), 1,
      sym_program_doc_comment,
    ACTIONS(264), 1,
      anon_sym_context,
    ACTIONS(267), 1,
      anon_sym_instruct,
    ACTIONS(270), 1,
      sym_use_keyword,
    ACTIONS(273), 1,
      sym_struct_keyword,
    ACTIONS(276), 1,
      sym_psyche_keyword,
    ACTIONS(279), 1,
      sym_skill_keyword,
    ACTIONS(282), 1,
      sym_service_keyword,
    ACTIONS(285), 1,
      sym_prompt_keyword,
    ACTIONS(288), 1,
      sym_thunk_keyword,
    ACTIONS(291), 1,
      sym_task_keyword,
    ACTIONS(294), 1,
      sym_chore_keyword,
    ACTIONS(297), 1,
      sym_flow_keyword,
    STATE(148), 1,
      sym_newline,
    STATE(490), 1,
      sym_context_keyword,
    STATE(492), 1,
      sym_instruct_keyword,
    ACTIONS(261), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(35), 3,
      sym_item,
      sym_blank_line,
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
  [3222] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(306), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(280), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(304), 14,
      sym_program_doc_comment,
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
  [3294] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(306), 1,
      sym_comment_line,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(307), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(310), 14,
      sym_program_doc_comment,
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
  [3366] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(306), 1,
      sym_comment_line,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(248), 1,
      sym_thunk_tail,
    STATE(263), 1,
      sym_pass_statement,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(314), 14,
      sym_program_doc_comment,
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
  [3438] = 8,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_comment_line,
    STATE(64), 1,
      sym_newline,
    STATE(440), 1,
      sym_directive_key,
    STATE(39), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(326), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(321), 19,
      sym_program_doc_comment,
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
  [3490] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(281), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(38), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(331), 14,
      sym_program_doc_comment,
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
  [3562] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(268), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(37), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(337), 14,
      sym_program_doc_comment,
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
  [3634] = 18,
    ACTIONS(51), 1,
      sym_pass_keyword,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(263), 1,
      sym_pass_statement,
    STATE(298), 1,
      sym_thunk_tail,
    STATE(313), 1,
      sym_message_section,
    STATE(643), 1,
      sym_roled_message_kind,
    STATE(36), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(63), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(343), 14,
      sym_program_doc_comment,
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
  [3706] = 21,
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
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      sym_program_doc_comment,
    STATE(148), 1,
      sym_newline,
    STATE(490), 1,
      sym_context_keyword,
    STATE(492), 1,
      sym_instruct_keyword,
    ACTIONS(351), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(35), 3,
      sym_item,
      sym_blank_line,
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
  [3784] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      aux_sym_newline_token1,
    ACTIONS(360), 1,
      sym_indented_raw_text,
    STATE(75), 1,
      sym_newline,
    STATE(44), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(358), 27,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      aux_sym_newline_token1,
    ACTIONS(369), 1,
      sym_indented_raw_text,
    STATE(75), 1,
      sym_newline,
    STATE(46), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(367), 27,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
      aux_sym_newline_token1,
    ACTIONS(369), 1,
      sym_indented_raw_text,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_newline,
    STATE(44), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(373), 27,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [3925] = 6,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      aux_sym_newline_token1,
    ACTIONS(377), 1,
      sym_indented_raw_text,
    STATE(110), 1,
      sym_newline,
    STATE(52), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(373), 26,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [3971] = 7,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(66), 1,
      sym_blank_line,
    STATE(112), 1,
      sym_newline,
    ACTIONS(381), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(50), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(379), 25,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [4019] = 6,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      aux_sym_newline_token1,
    ACTIONS(377), 1,
      sym_indented_raw_text,
    STATE(110), 1,
      sym_newline,
    STATE(47), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(367), 26,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [4065] = 7,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(69), 1,
      sym_blank_line,
    STATE(112), 1,
      sym_newline,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(51), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(383), 25,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [4113] = 7,
    ACTIONS(389), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      sym_flow_bare_raw_text,
    STATE(580), 1,
      sym_blank_line,
    STATE(604), 1,
      sym_newline,
    ACTIONS(392), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(51), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(387), 25,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(353), 1,
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
    ACTIONS(358), 26,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [4207] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(118), 1,
      sym_blank_line,
    STATE(148), 1,
      sym_newline,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(56), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(383), 24,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [4254] = 22,
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
      sym_comment_line,
    STATE(22), 1,
      sym_flow_body_statement,
    STATE(55), 1,
      sym_flow_bare_content_line,
    STATE(126), 1,
      sym_flow_bare_thunk_body,
    STATE(168), 1,
      sym_flow_entry,
    STATE(290), 1,
      sym_pass_statement,
    STATE(317), 1,
      sym_newline,
    STATE(278), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(169), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [4331] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(119), 1,
      sym_blank_line,
    STATE(148), 1,
      sym_newline,
    ACTIONS(381), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(53), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(379), 24,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
    ACTIONS(389), 1,
      aux_sym_newline_token1,
    ACTIONS(407), 1,
      sym_flow_bare_raw_text,
    STATE(561), 1,
      sym_blank_line,
    STATE(604), 1,
      sym_newline,
    ACTIONS(392), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(56), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(387), 24,
      ts_builtin_sym_end,
      sym_program_doc_comment,
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
  [4425] = 13,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(227), 1,
      sym_newline,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(643), 1,
      sym_roled_message_kind,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(58), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(414), 14,
      sym_program_doc_comment,
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
  [4483] = 13,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym_newline_token1,
    ACTIONS(425), 1,
      sym_comment_line,
    ACTIONS(431), 1,
      sym_indented_raw_text,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(227), 1,
      sym_newline,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(643), 1,
      sym_roled_message_kind,
    ACTIONS(428), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(58), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(423), 14,
      sym_program_doc_comment,
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
  [4541] = 21,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(436), 1,
      sym_doc_comment,
    ACTIONS(438), 1,
      sym_comment_line,
    STATE(14), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(163), 1,
      sym_flow_repeat_block_body,
    STATE(320), 1,
      sym_newline,
    STATE(72), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(440), 1,
      sym_doc_comment,
    ACTIONS(442), 1,
      sym_comment_line,
    STATE(16), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(76), 1,
      sym_flow_repeat_block_body,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(320), 1,
      sym_newline,
    STATE(74), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(440), 1,
      sym_doc_comment,
    ACTIONS(442), 1,
      sym_comment_line,
    STATE(16), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(97), 1,
      sym_flow_repeat_block_body,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(320), 1,
      sym_newline,
    STATE(74), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(436), 1,
      sym_doc_comment,
    ACTIONS(438), 1,
      sym_comment_line,
    STATE(14), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(155), 1,
      sym_flow_repeat_block_body,
    STATE(320), 1,
      sym_newline,
    STATE(72), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [4837] = 13,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 1,
      sym_comment_line,
    STATE(183), 1,
      sym_block_indented_content_line,
    STATE(215), 1,
      sym_unroled_message_block,
    STATE(216), 1,
      sym_roled_message_block,
    STATE(227), 1,
      sym_newline,
    STATE(230), 1,
      sym_block_indented_implicit,
    STATE(643), 1,
      sym_roled_message_kind,
    ACTIONS(49), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(57), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(446), 14,
      sym_program_doc_comment,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [4930] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 29,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [4965] = 4,
    ACTIONS(119), 1,
      sym_flow_bare_raw_text,
    STATE(86), 1,
      sym_flow_bare_content_line,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(383), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
    STATE(86), 1,
      sym_flow_bare_content_line,
    ACTIONS(468), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(466), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [5148] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 29,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [5183] = 20,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(474), 1,
      sym_doc_comment,
    ACTIONS(476), 1,
      sym_comment_line,
    STATE(17), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(320), 1,
      sym_newline,
    STATE(316), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [5254] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 29,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(474), 1,
      sym_doc_comment,
    ACTIONS(476), 1,
      sym_comment_line,
    STATE(19), 1,
      sym_flow_body_statement,
    STATE(48), 1,
      sym_flow_bare_content_line,
    STATE(105), 1,
      sym_flow_entry,
    STATE(109), 1,
      sym_flow_bare_thunk_body,
    STATE(320), 1,
      sym_newline,
    STATE(316), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(107), 10,
      sym_flow_bare_thunk_step,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [5360] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 29,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(482), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(486), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(490), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(494), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(498), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(502), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(506), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(510), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(514), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(518), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(392), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(387), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(524), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(522), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(526), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [5837] = 2,
    ACTIONS(532), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(530), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [5871] = 2,
    ACTIONS(536), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(534), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [5905] = 2,
    ACTIONS(540), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(538), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [5939] = 2,
    ACTIONS(544), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(542), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [5973] = 2,
    ACTIONS(548), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(546), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6007] = 2,
    ACTIONS(552), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(550), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6041] = 2,
    ACTIONS(556), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(554), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6075] = 2,
    ACTIONS(560), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(558), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6109] = 2,
    ACTIONS(564), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(562), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6143] = 2,
    ACTIONS(568), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(566), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6177] = 2,
    ACTIONS(572), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(570), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6211] = 2,
    ACTIONS(576), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(574), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6245] = 2,
    ACTIONS(580), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(578), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6279] = 2,
    ACTIONS(584), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(582), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6313] = 2,
    ACTIONS(588), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(586), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6347] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 28,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [6381] = 2,
    ACTIONS(592), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(590), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6415] = 2,
    ACTIONS(596), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(594), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6449] = 2,
    ACTIONS(600), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(598), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6483] = 2,
    ACTIONS(604), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(602), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6517] = 2,
    ACTIONS(608), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(606), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6551] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 28,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [6585] = 2,
    ACTIONS(612), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(610), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6619] = 2,
    ACTIONS(452), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(450), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6653] = 2,
    ACTIONS(472), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(470), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6687] = 2,
    ACTIONS(464), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(462), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6721] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 28,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [6755] = 2,
    ACTIONS(616), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(614), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6789] = 2,
    ACTIONS(456), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(454), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6823] = 4,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(144), 1,
      sym_flow_bare_content_line,
    ACTIONS(468), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(466), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [6861] = 4,
    ACTIONS(161), 1,
      sym_flow_bare_raw_text,
    STATE(144), 1,
      sym_flow_bare_content_line,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(383), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(618), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(622), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(626), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(630), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(634), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(638), 26,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(608), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(606), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(456), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(454), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(524), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(522), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(528), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(526), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(584), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(582), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(588), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(586), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(596), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(594), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(604), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(602), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(612), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(610), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(616), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(614), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(488), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(486), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(492), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(490), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(496), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(494), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(500), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(498), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(504), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(502), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(508), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(506), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(512), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(510), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(516), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(514), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(392), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(387), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(620), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(618), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(624), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(622), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(628), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(626), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(452), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(450), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(636), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(634), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(544), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(542), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(532), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(530), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(536), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(534), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(540), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(538), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(576), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(574), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(482), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(520), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(518), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(472), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(470), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(464), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(462), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(548), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(546), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(552), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(550), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(556), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(554), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(560), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(558), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(564), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(562), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(568), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(566), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(572), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(570), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(640), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(638), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(580), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(578), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(592), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(590), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(600), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(598), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(632), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(630), 25,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(646), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(211), 1,
      sym_instruct_block,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(172), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(644), 18,
      sym_program_doc_comment,
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
    ACTIONS(47), 1,
      anon_sym_instruct,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(306), 1,
      sym_comment_line,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      sym_instruct_block,
    STATE(194), 1,
      sym_newline,
    STATE(640), 1,
      sym_instruct_block_kind,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(650), 18,
      sym_program_doc_comment,
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
  [8680] = 9,
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(306), 1,
      sym_comment_line,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(190), 1,
      sym_context_block,
    STATE(194), 1,
      sym_newline,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(650), 18,
      sym_program_doc_comment,
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
    ACTIONS(45), 1,
      anon_sym_context,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(211), 1,
      sym_context_block,
    STATE(634), 1,
      sym_context_block_kind,
    STATE(173), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(644), 18,
      sym_program_doc_comment,
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
  [8772] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 1,
      aux_sym_newline_token1,
    ACTIONS(657), 1,
      sym_indented_raw_text,
    STATE(194), 1,
      sym_newline,
    STATE(175), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(358), 19,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [8811] = 6,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 1,
      sym_indented_raw_text,
    STATE(194), 1,
      sym_newline,
    STATE(175), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(662), 19,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [8850] = 6,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(664), 1,
      sym_indented_raw_text,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_newline,
    STATE(176), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(668), 19,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [8889] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_newline,
    STATE(185), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(662), 18,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [8927] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_newline,
    STATE(178), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(668), 18,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [8965] = 8,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 1,
      aux_sym_newline_token1,
    ACTIONS(676), 1,
      sym_value_name,
    ACTIONS(678), 1,
      sym_indented_raw_text,
    STATE(231), 1,
      sym_newline,
    STATE(584), 1,
      sym_property_key,
    STATE(184), 4,
      sym_blank_line,
      sym_definition_indented_content_line,
      sym_property_eq,
      aux_sym_definition_indented_repeat1,
    ACTIONS(674), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9007] = 5,
    STATE(486), 1,
      sym_directive_key,
    ACTIONS(682), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    STATE(181), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(684), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(680), 12,
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
  [9043] = 6,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    ACTIONS(689), 1,
      aux_sym_newline_token1,
    ACTIONS(694), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(182), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(692), 19,
      sym_program_doc_comment,
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
  [9081] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    STATE(227), 1,
      sym_newline,
    STATE(187), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(367), 18,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9119] = 8,
    ACTIONS(672), 1,
      aux_sym_newline_token1,
    ACTIONS(676), 1,
      sym_value_name,
    ACTIONS(678), 1,
      sym_indented_raw_text,
    ACTIONS(697), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_newline,
    STATE(584), 1,
      sym_property_key,
    STATE(186), 4,
      sym_blank_line,
      sym_definition_indented_content_line,
      sym_property_eq,
      aux_sym_definition_indented_repeat1,
    ACTIONS(699), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9161] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(701), 1,
      aux_sym_newline_token1,
    ACTIONS(704), 1,
      sym_indented_raw_text,
    STATE(227), 1,
      sym_newline,
    STATE(185), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(358), 18,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9199] = 8,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    ACTIONS(709), 1,
      aux_sym_newline_token1,
    ACTIONS(714), 1,
      sym_value_name,
    ACTIONS(717), 1,
      sym_indented_raw_text,
    STATE(231), 1,
      sym_newline,
    STATE(584), 1,
      sym_property_key,
    STATE(186), 4,
      sym_blank_line,
      sym_definition_indented_content_line,
      sym_property_eq,
      aux_sym_definition_indented_repeat1,
    ACTIONS(712), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9241] = 6,
    ACTIONS(53), 1,
      sym_indented_raw_text,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    STATE(227), 1,
      sym_newline,
    STATE(185), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(373), 18,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9279] = 8,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    ACTIONS(728), 1,
      sym_value_name,
    STATE(239), 1,
      sym_newline,
    STATE(571), 1,
      sym_field_name,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(724), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(189), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(726), 12,
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
  [9319] = 8,
    ACTIONS(732), 1,
      aux_sym_newline_token1,
    ACTIONS(740), 1,
      sym_value_name,
    STATE(239), 1,
      sym_newline,
    STATE(571), 1,
      sym_field_name,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(735), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(189), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(738), 12,
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
  [9359] = 2,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9386] = 2,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    ACTIONS(749), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9413] = 2,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(753), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9440] = 2,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9467] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9494] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9521] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9548] = 2,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9575] = 2,
    ACTIONS(460), 2,
      sym_comment_line,
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
  [9602] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9629] = 2,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9656] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9683] = 6,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(767), 1,
      aux_sym_newline_token1,
    ACTIONS(769), 1,
      sym_indented_raw_text,
    STATE(243), 1,
      sym_newline,
    STATE(208), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(662), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9718] = 2,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9745] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9772] = 2,
    ACTIONS(472), 2,
      sym_comment_line,
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
  [9799] = 2,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    ACTIONS(781), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9826] = 2,
    ACTIONS(456), 2,
      sym_comment_line,
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
  [9853] = 6,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(783), 1,
      aux_sym_newline_token1,
    ACTIONS(786), 1,
      sym_indented_raw_text,
    STATE(243), 1,
      sym_newline,
    STATE(208), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(358), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9888] = 2,
    ACTIONS(464), 2,
      sym_comment_line,
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
  [9915] = 6,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(767), 1,
      aux_sym_newline_token1,
    ACTIONS(769), 1,
      sym_indented_raw_text,
    STATE(243), 1,
      sym_newline,
    STATE(202), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(668), 15,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9950] = 2,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [9977] = 2,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10004] = 2,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    ACTIONS(795), 21,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10031] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10057] = 2,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    ACTIONS(799), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10083] = 2,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    ACTIONS(803), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10109] = 2,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10135] = 2,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(807), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10161] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10187] = 2,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10213] = 2,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(753), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10239] = 2,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10265] = 2,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    ACTIONS(795), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10291] = 2,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    ACTIONS(749), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10317] = 2,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10343] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10369] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10395] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10421] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10447] = 2,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 20,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10473] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10497] = 2,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(815), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10521] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10545] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10569] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10593] = 2,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
    ACTIONS(819), 18,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10617] = 2,
    ACTIONS(821), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(823), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10640] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 17,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10663] = 2,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(452), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10686] = 2,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 17,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10709] = 2,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(456), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10732] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 17,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10755] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 17,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10778] = 2,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(472), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10801] = 2,
    ACTIONS(462), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(464), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10824] = 2,
    ACTIONS(825), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(827), 15,
      sym_doc_comment,
      sym_comment_line,
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
  [10847] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 17,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
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
  [10870] = 2,
    ACTIONS(831), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(829), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(835), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(833), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(837), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(167), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(841), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(839), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(845), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(843), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(849), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(847), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(853), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(851), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(857), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(855), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(861), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(859), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(865), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(863), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(869), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(867), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(873), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(871), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(877), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(875), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(881), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(879), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(885), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(883), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(889), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(887), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(891), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(163), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(895), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(893), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(899), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(897), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(903), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(901), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(907), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(905), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(911), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(909), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11354] = 2,
    ACTIONS(915), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(913), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11376] = 2,
    ACTIONS(919), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(917), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11398] = 2,
    ACTIONS(923), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(921), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(795), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(793), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(749), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(747), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(761), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(759), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(927), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(925), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(931), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(929), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11530] = 7,
    ACTIONS(933), 1,
      aux_sym_newline_token1,
    ACTIONS(936), 1,
      sym_doc_comment,
    ACTIONS(939), 1,
      sym_comment_line,
    ACTIONS(944), 1,
      sym_flow_bare_raw_text,
    STATE(317), 1,
      sym_newline,
    STATE(278), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(942), 10,
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
  [11562] = 2,
    ACTIONS(948), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(946), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11584] = 2,
    ACTIONS(952), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(950), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11606] = 2,
    ACTIONS(956), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(954), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11628] = 2,
    ACTIONS(960), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(958), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11650] = 2,
    ACTIONS(964), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(962), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11672] = 2,
    ACTIONS(968), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(966), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11694] = 2,
    ACTIONS(773), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(771), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11716] = 2,
    ACTIONS(972), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(970), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11738] = 13,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_inline_comment,
    ACTIONS(976), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(980), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(177), 1,
      sym_line_end,
    STATE(195), 1,
      sym_newline,
    STATE(206), 1,
      sym_block_value,
    STATE(408), 1,
      sym_fence_open,
    STATE(453), 1,
      sym_block_name,
    STATE(454), 1,
      sym_block_content_inline,
    STATE(528), 1,
      sym_inline_text,
    ACTIONS(978), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(200), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [11782] = 2,
    ACTIONS(984), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(982), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11804] = 13,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(976), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(980), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_line_end,
    STATE(214), 1,
      sym_newline,
    STATE(218), 1,
      sym_block_value,
    STATE(409), 1,
      sym_fence_open,
    STATE(410), 1,
      sym_block_content_inline,
    STATE(476), 1,
      sym_block_name,
    STATE(528), 1,
      sym_inline_text,
    ACTIONS(978), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(217), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [11848] = 2,
    ACTIONS(988), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11870] = 2,
    ACTIONS(992), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(990), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(996), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(994), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
    ACTIONS(1000), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(998), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11936] = 2,
    ACTIONS(1004), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1002), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11958] = 2,
    ACTIONS(1008), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1006), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [11980] = 2,
    ACTIONS(1012), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1010), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12002] = 2,
    ACTIONS(1016), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1014), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12024] = 2,
    ACTIONS(1020), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1018), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12046] = 2,
    ACTIONS(1024), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1022), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12068] = 2,
    ACTIONS(1028), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1026), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12090] = 2,
    ACTIONS(1032), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1030), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12112] = 2,
    ACTIONS(1036), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1034), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12134] = 2,
    ACTIONS(1040), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1038), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12156] = 2,
    ACTIONS(1044), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1042), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12178] = 2,
    ACTIONS(1048), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1046), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12200] = 2,
    ACTIONS(777), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(775), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12222] = 2,
    ACTIONS(1052), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1050), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12244] = 2,
    ACTIONS(1056), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1054), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12266] = 2,
    ACTIONS(1060), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1058), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12288] = 2,
    ACTIONS(1064), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1062), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12310] = 2,
    ACTIONS(1068), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1066), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12332] = 2,
    ACTIONS(1072), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1070), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12354] = 2,
    ACTIONS(1076), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1074), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12376] = 2,
    ACTIONS(1080), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1078), 15,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
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
  [12398] = 13,
    ACTIONS(302), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_inline_comment,
    ACTIONS(976), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(980), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(177), 1,
      sym_line_end,
    STATE(193), 1,
      sym_block_value,
    STATE(195), 1,
      sym_newline,
    STATE(408), 1,
      sym_fence_open,
    STATE(453), 1,
      sym_block_name,
    STATE(454), 1,
      sym_block_content_inline,
    STATE(528), 1,
      sym_inline_text,
    ACTIONS(978), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(200), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [12442] = 7,
    ACTIONS(944), 1,
      sym_flow_bare_raw_text,
    ACTIONS(1082), 1,
      aux_sym_newline_token1,
    ACTIONS(1085), 1,
      sym_doc_comment,
    ACTIONS(1088), 1,
      sym_comment_line,
    STATE(320), 1,
      sym_newline,
    STATE(316), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(942), 9,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [12473] = 2,
    ACTIONS(452), 2,
      sym_comment_line,
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
  [12492] = 2,
    ACTIONS(456), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(454), 12,
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
  [12511] = 2,
    ACTIONS(464), 2,
      sym_comment_line,
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
  [12529] = 2,
    ACTIONS(452), 2,
      sym_comment_line,
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
  [12547] = 2,
    ACTIONS(456), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(454), 11,
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
  [12565] = 2,
    ACTIONS(472), 2,
      sym_comment_line,
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
  [12583] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(436), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12605] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(537), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12627] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12649] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(605), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12671] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(652), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12693] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(623), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12715] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(478), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12737] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(614), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12759] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(585), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12781] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(618), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12803] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(626), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12825] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(530), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12847] = 5,
    ACTIONS(1093), 1,
      sym_type_name,
    STATE(353), 1,
      sym_base_type,
    STATE(616), 1,
      sym_type,
    STATE(371), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1091), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12869] = 8,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    ACTIONS(1095), 1,
      sym_doc_comment,
    ACTIONS(1097), 1,
      sym_comment_line,
    ACTIONS(1099), 1,
      sym_value_name,
    STATE(239), 1,
      sym_newline,
    STATE(257), 1,
      sym_struct_body,
    STATE(571), 1,
      sym_field_name,
    STATE(188), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [12896] = 9,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(299), 1,
      sym_definition_body,
    STATE(304), 1,
      sym_job_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [12925] = 9,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(293), 1,
      sym_job_body,
    STATE(299), 1,
      sym_definition_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [12954] = 8,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    ACTIONS(1109), 1,
      sym_inline_comment,
    STATE(210), 1,
      sym_line_end,
    STATE(247), 1,
      sym_newline,
    STATE(256), 1,
      sym_instruct_body,
    STATE(405), 1,
      sym_fence_open,
    STATE(258), 2,
      sym_block_indented,
      sym_block_fenced,
  [12980] = 8,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1115), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(294), 1,
      sym_fence_close,
    STATE(367), 1,
      sym_frontmatter,
    STATE(505), 1,
      sym_newline,
    STATE(368), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13006] = 8,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(270), 1,
      sym_definition_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [13032] = 4,
    ACTIONS(1121), 1,
      sym_array_suffix,
    STATE(342), 1,
      aux_sym_type_repeat1,
    STATE(362), 1,
      sym_type_suffix,
    ACTIONS(1119), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13050] = 8,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    ACTIONS(1109), 1,
      sym_inline_comment,
    STATE(210), 1,
      sym_line_end,
    STATE(247), 1,
      sym_newline,
    STATE(252), 1,
      sym_context_body,
    STATE(405), 1,
      sym_fence_open,
    STATE(253), 2,
      sym_block_indented,
      sym_block_fenced,
  [13076] = 4,
    ACTIONS(1126), 1,
      sym_array_suffix,
    STATE(342), 1,
      aux_sym_type_repeat1,
    STATE(362), 1,
      sym_type_suffix,
    ACTIONS(1124), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13094] = 8,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    ACTIONS(1109), 1,
      sym_inline_comment,
    STATE(210), 1,
      sym_line_end,
    STATE(247), 1,
      sym_newline,
    STATE(254), 1,
      sym_instruct_body,
    STATE(405), 1,
      sym_fence_open,
    STATE(258), 2,
      sym_block_indented,
      sym_block_fenced,
  [13120] = 8,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    ACTIONS(1109), 1,
      sym_inline_comment,
    STATE(210), 1,
      sym_line_end,
    STATE(247), 1,
      sym_newline,
    STATE(255), 1,
      sym_context_body,
    STATE(405), 1,
      sym_fence_open,
    STATE(253), 2,
      sym_block_indented,
      sym_block_fenced,
  [13146] = 9,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(92), 1,
      sym_flow_inline_step_body,
    STATE(433), 1,
      sym_flow_named_parallel_head,
    STATE(504), 1,
      sym_flow_inline_output_type,
    STATE(521), 1,
      sym_flow_parallelism,
    STATE(567), 1,
      sym_flow_inline_each_head,
  [13174] = 9,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(150), 1,
      sym_flow_inline_step_body,
    STATE(429), 1,
      sym_flow_named_parallel_head,
    STATE(504), 1,
      sym_flow_inline_output_type,
    STATE(521), 1,
      sym_flow_parallelism,
    STATE(575), 1,
      sym_flow_inline_each_head,
  [13202] = 8,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(271), 1,
      sym_definition_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [13228] = 8,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1115), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(276), 1,
      sym_fence_close,
    STATE(356), 1,
      sym_frontmatter,
    STATE(505), 1,
      sym_newline,
    STATE(357), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13254] = 8,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(282), 1,
      sym_definition_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [13280] = 8,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(180), 1,
      sym_line_end,
    STATE(233), 1,
      sym_newline,
    STATE(267), 1,
      sym_definition_body,
    STATE(404), 1,
      sym_fence_open,
    STATE(269), 2,
      sym_definition_indented,
      sym_definition_markdown,
  [13306] = 4,
    ACTIONS(1126), 1,
      sym_array_suffix,
    STATE(344), 1,
      aux_sym_type_repeat1,
    STATE(362), 1,
      sym_type_suffix,
    ACTIONS(1138), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13324] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1140), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(204), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13344] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    ACTIONS(1144), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(226), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13364] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(308), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(360), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13384] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(309), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(395), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13404] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(310), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(395), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13424] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(162), 1,
      sym_flow_condition_body,
    STATE(471), 1,
      sym_flow_inline_text,
    STATE(510), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13446] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(292), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(395), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13466] = 1,
    ACTIONS(1152), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13476] = 1,
    ACTIONS(1154), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13486] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(461), 1,
      sym_flow_inline_body,
    STATE(507), 1,
      sym_line_end,
    STATE(540), 1,
      sym_flow_inline_text,
    STATE(612), 1,
      sym_newline,
  [13508] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(166), 1,
      sym_flow_condition_body,
    STATE(471), 1,
      sym_flow_inline_text,
    STATE(510), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13530] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(273), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(388), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13550] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(275), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13570] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(277), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(358), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13590] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1117), 1,
      sym_fenced_raw_text,
    STATE(279), 1,
      sym_fence_close,
    STATE(505), 1,
      sym_newline,
    STATE(395), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [13610] = 1,
    ACTIONS(1156), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13620] = 1,
    ACTIONS(1158), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13630] = 1,
    ACTIONS(1160), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [13640] = 7,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(147), 1,
      sym_flow_inline_step_body,
    STATE(421), 1,
      sym_flow_named_parallel_head,
    STATE(525), 1,
      sym_flow_inline_parallel_head,
    STATE(527), 1,
      sym_flow_parallelism,
  [13662] = 7,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(170), 1,
      sym_flow_inline_step_body,
    STATE(422), 1,
      sym_flow_named_parallel_head,
    STATE(527), 1,
      sym_flow_parallelism,
    STATE(534), 1,
      sym_flow_inline_parallel_head,
  [13684] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(153), 1,
      sym_flow_condition_body,
    STATE(471), 1,
      sym_flow_inline_text,
    STATE(510), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13706] = 7,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(122), 1,
      sym_flow_inline_step_body,
    STATE(428), 1,
      sym_flow_named_parallel_head,
    STATE(527), 1,
      sym_flow_parallelism,
    STATE(564), 1,
      sym_flow_inline_parallel_head,
  [13728] = 7,
    ACTIONS(1128), 1,
      sym_flow_target,
    ACTIONS(1132), 1,
      sym_flow_par_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(123), 1,
      sym_flow_inline_step_body,
    STATE(430), 1,
      sym_flow_named_parallel_head,
    STATE(527), 1,
      sym_flow_parallelism,
    STATE(565), 1,
      sym_flow_inline_parallel_head,
  [13750] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1140), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(203), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(380), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13770] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(439), 1,
      sym_flow_inline_body,
    STATE(506), 1,
      sym_line_end,
    STATE(540), 1,
      sym_flow_inline_text,
    STATE(612), 1,
      sym_newline,
  [13792] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1140), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(213), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(354), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13812] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1140), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(197), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13832] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(91), 1,
      sym_flow_condition_body,
    STATE(445), 1,
      sym_flow_inline_text,
    STATE(508), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13854] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(285), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(366), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13874] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(96), 1,
      sym_flow_condition_body,
    STATE(445), 1,
      sym_flow_inline_text,
    STATE(508), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13896] = 7,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1148), 1,
      sym_inline_comment,
    ACTIONS(1150), 1,
      aux_sym_flow_inline_text_token1,
    STATE(125), 1,
      sym_flow_condition_body,
    STATE(445), 1,
      sym_flow_inline_text,
    STATE(508), 1,
      sym_line_end,
    STATE(612), 1,
      sym_newline,
  [13918] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    ACTIONS(1144), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(222), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(387), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13938] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    ACTIONS(1144), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(223), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(355), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13958] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    ACTIONS(1144), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(225), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13978] = 6,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1142), 1,
      sym_fenced_raw_text,
    STATE(306), 1,
      sym_fence_close,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13998] = 5,
    ACTIONS(1162), 1,
      aux_sym_newline_token1,
    ACTIONS(1165), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1167), 1,
      sym_fenced_raw_text,
    STATE(498), 1,
      sym_newline,
    STATE(389), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [14015] = 6,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    ACTIONS(1170), 1,
      sym_flow_target,
    STATE(120), 1,
      sym_flow_inline_step_body,
    STATE(425), 1,
      sym_flow_target_list,
    STATE(562), 1,
      sym_flow_inline_output_type,
  [14034] = 6,
    ACTIONS(1134), 1,
      sym_colon,
    ACTIONS(1172), 1,
      sym_flow_target,
    ACTIONS(1174), 1,
      sym_integer_literal,
    STATE(124), 1,
      sym_flow_inline_step_body,
    STATE(566), 1,
      sym_flow_inline_rank_head,
    STATE(607), 1,
      sym_flow_rank_limit,
  [14053] = 6,
    ACTIONS(1176), 1,
      sym_arrow,
    ACTIONS(1178), 1,
      sym_colon,
    ACTIONS(1180), 1,
      sym_lparen,
    ACTIONS(1182), 1,
      sym_value_name,
    STATE(435), 1,
      sym_flow_name,
    STATE(570), 1,
      sym_params,
  [14072] = 5,
    ACTIONS(1184), 1,
      sym_frontmatter_comment,
    ACTIONS(1186), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1188), 1,
      sym_value_name,
    STATE(654), 1,
      sym_property_key,
    STATE(398), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [14089] = 5,
    ACTIONS(1190), 1,
      sym_frontmatter_comment,
    ACTIONS(1193), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1195), 1,
      sym_value_name,
    STATE(654), 1,
      sym_property_key,
    STATE(394), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [14106] = 5,
    ACTIONS(1198), 1,
      aux_sym_newline_token1,
    ACTIONS(1201), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1203), 1,
      sym_fenced_raw_text,
    STATE(505), 1,
      sym_newline,
    STATE(395), 2,
      sym_definition_fenced_content_line,
      aux_sym_definition_markdown_repeat1,
  [14123] = 6,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    ACTIONS(1208), 1,
      sym_flow_until_keyword,
    ACTIONS(1210), 1,
      sym_colon,
    STATE(84), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14142] = 6,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    ACTIONS(1170), 1,
      sym_flow_target,
    STATE(145), 1,
      sym_flow_inline_step_body,
    STATE(416), 1,
      sym_flow_target_list,
    STATE(539), 1,
      sym_flow_inline_output_type,
  [14161] = 5,
    ACTIONS(1188), 1,
      sym_value_name,
    ACTIONS(1212), 1,
      sym_frontmatter_comment,
    ACTIONS(1214), 1,
      sym_frontmatter_delimiter,
    STATE(654), 1,
      sym_property_key,
    STATE(394), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [14178] = 6,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    ACTIONS(1218), 1,
      sym_flow_until_keyword,
    ACTIONS(1220), 1,
      sym_colon,
    STATE(143), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14197] = 6,
    ACTIONS(1180), 1,
      sym_lparen,
    ACTIONS(1222), 1,
      sym_arrow,
    ACTIONS(1224), 1,
      sym_colon,
    ACTIONS(1226), 1,
      sym_value_name,
    STATE(472), 1,
      sym_thunk_name,
    STATE(558), 1,
      sym_params,
  [14216] = 6,
    ACTIONS(1136), 1,
      sym_colon,
    ACTIONS(1174), 1,
      sym_integer_literal,
    ACTIONS(1228), 1,
      sym_flow_target,
    STATE(149), 1,
      sym_flow_inline_step_body,
    STATE(548), 1,
      sym_flow_inline_rank_head,
    STATE(607), 1,
      sym_flow_rank_limit,
  [14235] = 5,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    ACTIONS(1230), 1,
      sym_flow_target,
    STATE(121), 1,
      sym_flow_inline_step_body,
    STATE(563), 1,
      sym_flow_inline_output_type,
  [14251] = 5,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1134), 1,
      sym_colon,
    ACTIONS(1232), 1,
      sym_flow_target,
    STATE(100), 1,
      sym_flow_inline_step_body,
    STATE(568), 1,
      sym_flow_inline_output_type,
  [14267] = 5,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    ACTIONS(1238), 1,
      sym_block_language,
    STATE(340), 1,
      sym_line_end,
    STATE(463), 1,
      sym_newline,
  [14283] = 5,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    ACTIONS(1244), 1,
      sym_block_language,
    STATE(382), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [14299] = 5,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    ACTIONS(1246), 1,
      sym_flow_target,
    STATE(154), 1,
      sym_flow_inline_step_body,
    STATE(529), 1,
      sym_flow_inline_output_type,
  [14315] = 5,
    ACTIONS(1130), 1,
      sym_flow_to_keyword,
    ACTIONS(1136), 1,
      sym_colon,
    ACTIONS(1248), 1,
      sym_flow_target,
    STATE(146), 1,
      sym_flow_inline_step_body,
    STATE(572), 1,
      sym_flow_inline_output_type,
  [14331] = 5,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    ACTIONS(1250), 1,
      sym_block_language,
    STATE(377), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [14347] = 5,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    ACTIONS(1252), 1,
      sym_block_language,
    STATE(385), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [14363] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(214), 1,
      sym_newline,
    STATE(221), 1,
      sym_line_end,
  [14376] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14389] = 3,
    ACTIONS(1264), 1,
      sym_comma,
    STATE(412), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1262), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14400] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14413] = 3,
    ACTIONS(1269), 1,
      sym_comma,
    STATE(460), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1267), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14424] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [14437] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14450] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(350), 1,
      sym_line_end,
    STATE(463), 1,
      sym_newline,
  [14463] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(130), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14476] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(131), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14489] = 3,
    ACTIONS(1277), 1,
      sym_flow_par_keyword,
    STATE(547), 1,
      sym_flow_parallelism,
    ACTIONS(1275), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14500] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14513] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14526] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14539] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_newline,
    STATE(260), 1,
      sym_line_end,
  [14552] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(88), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14565] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(102), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14578] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(103), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14591] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14604] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14617] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14630] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14643] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [14656] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(81), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14669] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(82), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14682] = 4,
    ACTIONS(1180), 1,
      sym_lparen,
    ACTIONS(1279), 1,
      sym_arrow,
    ACTIONS(1281), 1,
      sym_colon,
    STATE(535), 1,
      sym_params,
  [14695] = 4,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    ACTIONS(1283), 1,
      sym_inline_comment,
    STATE(244), 1,
      sym_newline,
    STATE(246), 1,
      sym_line_end,
  [14708] = 1,
    ACTIONS(1285), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [14715] = 4,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_line_end,
    STATE(322), 1,
      sym_newline,
  [14728] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14741] = 2,
    STATE(532), 1,
      sym_directive_op,
    ACTIONS(1289), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14750] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [14763] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_newline,
    STATE(259), 1,
      sym_line_end,
  [14776] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [14789] = 4,
    ACTIONS(1291), 1,
      aux_sym_newline_token1,
    ACTIONS(1293), 1,
      sym_inline_comment,
    STATE(336), 1,
      sym_line_end,
    STATE(458), 1,
      sym_newline,
  [14802] = 4,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    ACTIONS(1206), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [14815] = 3,
    ACTIONS(1297), 1,
      sym_comma,
    STATE(412), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1295), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14826] = 4,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    ACTIONS(1103), 1,
      sym_inline_comment,
    STATE(233), 1,
      sym_newline,
    STATE(236), 1,
      sym_line_end,
  [14839] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14852] = 3,
    ACTIONS(1297), 1,
      sym_comma,
    STATE(446), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1299), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14863] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(67), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14876] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14889] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14902] = 4,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    ACTIONS(1303), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_newline,
    STATE(212), 1,
      sym_line_end,
  [14915] = 4,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    ACTIONS(1303), 1,
      sym_inline_comment,
    STATE(192), 1,
      sym_line_end,
    STATE(195), 1,
      sym_newline,
  [14928] = 3,
    ACTIONS(1307), 1,
      sym_comma,
    STATE(455), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1305), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14939] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [14952] = 2,
    ACTIONS(456), 1,
      sym_comment_line,
    ACTIONS(454), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14961] = 2,
    ACTIONS(472), 1,
      sym_comment_line,
    ACTIONS(470), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14970] = 2,
    ACTIONS(464), 1,
      sym_comment_line,
    ACTIONS(462), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14979] = 3,
    ACTIONS(1269), 1,
      sym_comma,
    STATE(455), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1310), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14990] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(152), 1,
      sym_line_end,
    STATE(157), 1,
      sym_newline,
  [15003] = 4,
    ACTIONS(1312), 1,
      sym_integer_literal,
    ACTIONS(1314), 1,
      sym_flow_until_keyword,
    ACTIONS(1316), 1,
      sym_colon,
    STATE(399), 1,
      sym_flow_repeat_count,
  [15016] = 1,
    ACTIONS(472), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [15023] = 1,
    ACTIONS(464), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [15030] = 1,
    ACTIONS(1318), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [15037] = 1,
    ACTIONS(456), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [15044] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [15057] = 4,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    ACTIONS(1260), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(70), 1,
      sym_newline,
  [15070] = 4,
    ACTIONS(1320), 1,
      sym_rparen,
    ACTIONS(1322), 1,
      sym_value_name,
    STATE(489), 1,
      sym_param,
    STATE(551), 1,
      sym_param_name,
  [15083] = 4,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(59), 1,
      sym_line_end,
    STATE(322), 1,
      sym_newline,
  [15096] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(157), 1,
      sym_newline,
    STATE(160), 1,
      sym_line_end,
  [15109] = 4,
    ACTIONS(1180), 1,
      sym_lparen,
    ACTIONS(1324), 1,
      sym_arrow,
    ACTIONS(1326), 1,
      sym_colon,
    STATE(553), 1,
      sym_params,
  [15122] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15135] = 4,
    ACTIONS(1312), 1,
      sym_integer_literal,
    ACTIONS(1328), 1,
      sym_flow_until_keyword,
    ACTIONS(1330), 1,
      sym_colon,
    STATE(396), 1,
      sym_flow_repeat_count,
  [15148] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(198), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15161] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(214), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [15174] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(365), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [15187] = 4,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    ACTIONS(1283), 1,
      sym_inline_comment,
    STATE(237), 1,
      sym_line_end,
    STATE(244), 1,
      sym_newline,
  [15200] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15213] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15226] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(379), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [15239] = 4,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(60), 1,
      sym_line_end,
    STATE(322), 1,
      sym_newline,
  [15252] = 4,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(1287), 1,
      sym_inline_comment,
    STATE(61), 1,
      sym_line_end,
    STATE(322), 1,
      sym_newline,
  [15265] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15278] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(386), 1,
      sym_line_end,
    STATE(513), 1,
      sym_newline,
  [15291] = 2,
    STATE(599), 1,
      sym_directive_op,
    ACTIONS(1289), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [15300] = 4,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    ACTIONS(1273), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
    STATE(205), 1,
      sym_newline,
  [15313] = 1,
    ACTIONS(1332), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [15319] = 3,
    ACTIONS(1334), 1,
      sym_rparen,
    ACTIONS(1336), 1,
      sym_comma,
    STATE(502), 1,
      aux_sym_params_repeat1,
  [15329] = 3,
    ACTIONS(1338), 1,
      sym_colon,
    ACTIONS(1340), 1,
      sym_value_name,
    STATE(615), 1,
      sym_context_name,
  [15339] = 1,
    ACTIONS(1342), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15345] = 3,
    ACTIONS(1344), 1,
      sym_colon,
    ACTIONS(1346), 1,
      sym_value_name,
    STATE(657), 1,
      sym_instruct_name,
  [15355] = 1,
    ACTIONS(1348), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [15361] = 1,
    ACTIONS(1350), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [15367] = 1,
    ACTIONS(454), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [15373] = 1,
    ACTIONS(1352), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [15379] = 3,
    ACTIONS(1354), 1,
      sym_cap_uri,
    ACTIONS(1356), 1,
      sym_cap_shorthand,
    STATE(442), 1,
      sym_cap_ref,
  [15389] = 1,
    ACTIONS(1358), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15395] = 1,
    ACTIONS(1360), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [15401] = 3,
    ACTIONS(1362), 1,
      aux_sym_flow_inline_text_token1,
    STATE(447), 1,
      sym_property_value,
    STATE(559), 1,
      sym_inline_text,
  [15411] = 3,
    ACTIONS(1322), 1,
      sym_value_name,
    STATE(551), 1,
      sym_param_name,
    STATE(576), 1,
      sym_param,
  [15421] = 3,
    ACTIONS(1336), 1,
      sym_comma,
    ACTIONS(1364), 1,
      sym_rparen,
    STATE(511), 1,
      aux_sym_params_repeat1,
  [15431] = 1,
    ACTIONS(1366), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15437] = 3,
    ACTIONS(1277), 1,
      sym_flow_par_keyword,
    ACTIONS(1368), 1,
      sym_colon,
    STATE(617), 1,
      sym_flow_parallelism,
  [15447] = 1,
    ACTIONS(1370), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15453] = 3,
    ACTIONS(1372), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_block_indented_content_line,
    STATE(89), 1,
      sym_block_indented_implicit,
  [15463] = 3,
    ACTIONS(1374), 1,
      sym_indented_raw_text,
    STATE(49), 1,
      sym_block_indented_content_line,
    STATE(151), 1,
      sym_block_indented_implicit,
  [15473] = 3,
    ACTIONS(1372), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_block_indented_content_line,
    STATE(93), 1,
      sym_block_indented_implicit,
  [15483] = 1,
    ACTIONS(1376), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [15489] = 3,
    ACTIONS(1374), 1,
      sym_indented_raw_text,
    STATE(49), 1,
      sym_block_indented_content_line,
    STATE(159), 1,
      sym_block_indented_implicit,
  [15499] = 3,
    ACTIONS(1378), 1,
      sym_rparen,
    ACTIONS(1380), 1,
      sym_comma,
    STATE(511), 1,
      aux_sym_params_repeat1,
  [15509] = 1,
    ACTIONS(1383), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15515] = 1,
    ACTIONS(472), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15521] = 1,
    ACTIONS(464), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15527] = 1,
    ACTIONS(456), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15533] = 3,
    ACTIONS(1362), 1,
      aux_sym_flow_inline_text_token1,
    STATE(559), 1,
      sym_inline_text,
    STATE(569), 1,
      sym_property_value,
  [15543] = 1,
    ACTIONS(1262), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [15549] = 1,
    ACTIONS(1385), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [15555] = 2,
    ACTIONS(1387), 1,
      aux_sym_newline_token1,
    STATE(613), 1,
      sym_newline,
  [15562] = 2,
    ACTIONS(1389), 1,
      sym_value_name,
    STATE(610), 1,
      sym_job_name,
  [15569] = 2,
    ACTIONS(1368), 1,
      sym_colon,
    ACTIONS(1391), 1,
      sym_flow_target,
  [15576] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(158), 1,
      sym_newline,
  [15583] = 2,
    ACTIONS(1393), 1,
      sym_type_name,
    STATE(622), 1,
      sym_struct_name,
  [15590] = 1,
    ACTIONS(1395), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15595] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(133), 1,
      sym_flow_inline_step_body,
  [15602] = 2,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    STATE(232), 1,
      sym_newline,
  [15609] = 2,
    ACTIONS(1391), 1,
      sym_flow_target,
    ACTIONS(1397), 1,
      sym_colon,
  [15616] = 1,
    ACTIONS(1399), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15621] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(142), 1,
      sym_flow_inline_step_body,
  [15628] = 1,
    ACTIONS(1401), 2,
      sym_rparen,
      sym_comma,
  [15633] = 2,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    STATE(85), 1,
      sym_newline,
  [15640] = 2,
    ACTIONS(1403), 1,
      sym_bare_value,
    STATE(450), 1,
      sym_directive_csv,
  [15647] = 2,
    ACTIONS(1258), 1,
      aux_sym_newline_token1,
    STATE(68), 1,
      sym_newline,
  [15654] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(135), 1,
      sym_flow_inline_step_body,
  [15661] = 2,
    ACTIONS(1405), 1,
      sym_arrow,
    ACTIONS(1407), 1,
      sym_colon,
  [15668] = 2,
    ACTIONS(1409), 1,
      sym_value_name,
    STATE(649), 1,
      sym_cap_name,
  [15675] = 1,
    ACTIONS(1411), 2,
      sym_flow_par_keyword,
      sym_colon,
  [15680] = 1,
    ACTIONS(1413), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15685] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(128), 1,
      sym_flow_inline_step_body,
  [15692] = 1,
    ACTIONS(1415), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15697] = 2,
    ACTIONS(1409), 1,
      sym_value_name,
    STATE(655), 1,
      sym_cap_name,
  [15704] = 2,
    ACTIONS(1409), 1,
      sym_value_name,
    STATE(645), 1,
      sym_cap_name,
  [15711] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(156), 1,
      sym_newline,
  [15718] = 1,
    ACTIONS(1417), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15723] = 1,
    ACTIONS(1419), 2,
      sym_colon,
      sym_value_name,
  [15728] = 1,
    ACTIONS(1421), 2,
      sym_colon,
      sym_value_name,
  [15733] = 1,
    ACTIONS(1423), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15738] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(138), 1,
      sym_flow_inline_step_body,
  [15745] = 1,
    ACTIONS(1425), 2,
      sym_arrow,
      sym_colon,
  [15750] = 1,
    ACTIONS(1427), 2,
      sym_optional_marker,
      sym_colon,
  [15755] = 2,
    ACTIONS(1429), 1,
      sym_optional_marker,
    ACTIONS(1431), 1,
      sym_colon,
  [15762] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(219), 1,
      sym_newline,
  [15769] = 2,
    ACTIONS(1433), 1,
      sym_arrow,
    ACTIONS(1435), 1,
      sym_colon,
  [15776] = 2,
    ACTIONS(1389), 1,
      sym_value_name,
    STATE(651), 1,
      sym_job_name,
  [15783] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(503), 1,
      sym_newline,
  [15790] = 2,
    ACTIONS(1271), 1,
      aux_sym_newline_token1,
    STATE(209), 1,
      sym_newline,
  [15797] = 2,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    STATE(240), 1,
      sym_newline,
  [15804] = 2,
    ACTIONS(1437), 1,
      sym_arrow,
    ACTIONS(1439), 1,
      sym_colon,
  [15811] = 1,
    ACTIONS(1441), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15816] = 1,
    ACTIONS(1443), 2,
      sym_arrow,
      sym_colon,
  [15821] = 2,
    ACTIONS(1445), 1,
      sym_flow_bare_raw_text,
    STATE(144), 1,
      sym_flow_bare_content_line,
  [15828] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(87), 1,
      sym_flow_inline_step_body,
  [15835] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(106), 1,
      sym_flow_inline_step_body,
  [15842] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(108), 1,
      sym_flow_inline_step_body,
  [15849] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(116), 1,
      sym_flow_inline_step_body,
  [15856] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(79), 1,
      sym_flow_inline_step_body,
  [15863] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(80), 1,
      sym_flow_inline_step_body,
  [15870] = 2,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(83), 1,
      sym_flow_inline_step_body,
  [15877] = 2,
    ACTIONS(1447), 1,
      aux_sym_newline_token1,
    STATE(509), 1,
      sym_newline,
  [15884] = 2,
    ACTIONS(1449), 1,
      sym_arrow,
    ACTIONS(1451), 1,
      sym_colon,
  [15891] = 2,
    ACTIONS(1453), 1,
      sym_optional_marker,
    ACTIONS(1455), 1,
      sym_colon,
  [15898] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(132), 1,
      sym_flow_inline_step_body,
  [15905] = 2,
    ACTIONS(1409), 1,
      sym_value_name,
    STATE(624), 1,
      sym_cap_name,
  [15912] = 2,
    ACTIONS(1447), 1,
      aux_sym_newline_token1,
    STATE(393), 1,
      sym_newline,
  [15919] = 2,
    ACTIONS(1136), 1,
      sym_colon,
    STATE(139), 1,
      sym_flow_inline_step_body,
  [15926] = 1,
    ACTIONS(1457), 2,
      sym_rparen,
      sym_comma,
  [15931] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(518), 1,
      sym_newline,
  [15938] = 1,
    ACTIONS(1459), 2,
      sym_optional_marker,
      sym_colon,
  [15943] = 1,
    ACTIONS(1461), 2,
      sym_arrow,
      sym_colon,
  [15948] = 2,
    ACTIONS(1463), 1,
      sym_flow_bare_raw_text,
    STATE(86), 1,
      sym_flow_bare_content_line,
  [15955] = 2,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    STATE(242), 1,
      sym_newline,
  [15962] = 2,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    STATE(201), 1,
      sym_newline,
  [15969] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(491), 1,
      sym_newline,
  [15976] = 2,
    ACTIONS(1465), 1,
      anon_sym_EQ,
    STATE(500), 1,
      sym_assign_operator,
  [15983] = 1,
    ACTIONS(1467), 2,
      sym_rparen,
      sym_comma,
  [15988] = 2,
    ACTIONS(1291), 1,
      aux_sym_newline_token1,
    STATE(459), 1,
      sym_newline,
  [15995] = 2,
    ACTIONS(1469), 1,
      aux_sym_newline_token1,
    STATE(104), 1,
      sym_newline,
  [16002] = 2,
    ACTIONS(1101), 1,
      aux_sym_newline_token1,
    STATE(234), 1,
      sym_newline,
  [16009] = 2,
    ACTIONS(1471), 1,
      aux_sym_newline_token1,
    STATE(73), 1,
      sym_newline,
  [16016] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(514), 1,
      sym_newline,
  [16023] = 2,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    STATE(464), 1,
      sym_newline,
  [16030] = 2,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    STATE(196), 1,
      sym_newline,
  [16037] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(228), 1,
      sym_newline,
  [16044] = 1,
    ACTIONS(1473), 2,
      anon_sym_EQ,
      sym_colon,
  [16049] = 2,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    STATE(319), 1,
      sym_newline,
  [16056] = 2,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    STATE(245), 1,
      sym_newline,
  [16063] = 2,
    ACTIONS(95), 1,
      aux_sym_newline_token1,
    STATE(114), 1,
      sym_newline,
  [16070] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(512), 1,
      sym_newline,
  [16077] = 2,
    ACTIONS(1403), 1,
      sym_bare_value,
    STATE(475), 1,
      sym_directive_csv,
  [16084] = 1,
    ACTIONS(1475), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [16089] = 1,
    ACTIONS(1477), 1,
      sym_colon,
  [16093] = 1,
    ACTIONS(1479), 1,
      sym_colon,
  [16097] = 1,
    ACTIONS(1481), 1,
      sym_colon,
  [16101] = 1,
    ACTIONS(450), 1,
      sym_flow_bare_raw_text,
  [16105] = 1,
    ACTIONS(1483), 1,
      sym_colon,
  [16109] = 1,
    ACTIONS(1485), 1,
      sym_bare_value,
  [16113] = 1,
    ACTIONS(1487), 1,
      sym_colon,
  [16117] = 1,
    ACTIONS(1489), 1,
      aux_sym_flow_inline_text_token1,
  [16121] = 1,
    ACTIONS(1491), 1,
      aux_sym_newline_token1,
  [16125] = 1,
    ACTIONS(1493), 1,
      sym_colon,
  [16129] = 1,
    ACTIONS(1495), 1,
      sym_colon,
  [16133] = 1,
    ACTIONS(470), 1,
      sym_indented_raw_text,
  [16137] = 1,
    ACTIONS(462), 1,
      sym_indented_raw_text,
  [16141] = 1,
    ACTIONS(1497), 1,
      sym_colon,
  [16145] = 1,
    ACTIONS(1499), 1,
      sym_colon,
  [16149] = 1,
    ACTIONS(1501), 1,
      sym_colon,
  [16153] = 1,
    ACTIONS(1503), 1,
      sym_colon,
  [16157] = 1,
    ACTIONS(1505), 1,
      sym_colon,
  [16161] = 1,
    ACTIONS(454), 1,
      sym_indented_raw_text,
  [16165] = 1,
    ACTIONS(1507), 1,
      sym_colon,
  [16169] = 1,
    ACTIONS(1509), 1,
      sym_colon,
  [16173] = 1,
    ACTIONS(1511), 1,
      sym_colon,
  [16177] = 1,
    ACTIONS(1513), 1,
      sym_colon,
  [16181] = 1,
    ACTIONS(1515), 1,
      sym_colon,
  [16185] = 1,
    ACTIONS(1517), 1,
      aux_sym_newline_token1,
  [16189] = 1,
    ACTIONS(1519), 1,
      sym_colon,
  [16193] = 1,
    ACTIONS(1521), 1,
      sym_colon,
  [16197] = 1,
    ACTIONS(1523), 1,
      sym_colon,
  [16201] = 1,
    ACTIONS(1525), 1,
      sym_colon,
  [16205] = 1,
    ACTIONS(1527), 1,
      aux_sym_newline_token1,
  [16209] = 1,
    ACTIONS(454), 1,
      sym_flow_bare_raw_text,
  [16213] = 1,
    ACTIONS(1529), 1,
      sym_colon,
  [16217] = 1,
    ACTIONS(1531), 1,
      sym_cap_kind,
  [16221] = 1,
    ACTIONS(1533), 1,
      sym_colon,
  [16225] = 1,
    ACTIONS(1535), 1,
      sym_flow_target,
  [16229] = 1,
    ACTIONS(1537), 1,
      sym_flow_target,
  [16233] = 1,
    ACTIONS(1539), 1,
      sym_bare_value,
  [16237] = 1,
    ACTIONS(1541), 1,
      sym_flow_target,
  [16241] = 1,
    ACTIONS(1543), 1,
      sym_colon,
  [16245] = 1,
    ACTIONS(1545), 1,
      sym_colon,
  [16249] = 1,
    ACTIONS(1547), 1,
      ts_builtin_sym_end,
  [16253] = 1,
    ACTIONS(1549), 1,
      sym_colon,
  [16257] = 1,
    ACTIONS(1551), 1,
      sym_colon,
  [16261] = 1,
    ACTIONS(1553), 1,
      sym_colon,
  [16265] = 1,
    ACTIONS(1555), 1,
      sym_colon,
  [16269] = 1,
    ACTIONS(1557), 1,
      sym_colon,
  [16273] = 1,
    ACTIONS(1559), 1,
      sym_colon,
  [16277] = 1,
    ACTIONS(1561), 1,
      sym_colon,
  [16281] = 1,
    ACTIONS(1563), 1,
      sym_colon,
  [16285] = 1,
    ACTIONS(1565), 1,
      sym_colon,
  [16289] = 1,
    ACTIONS(1567), 1,
      sym_colon,
  [16293] = 1,
    ACTIONS(1569), 1,
      sym_colon,
  [16297] = 1,
    ACTIONS(1571), 1,
      sym_colon,
  [16301] = 1,
    ACTIONS(1573), 1,
      sym_colon,
  [16305] = 1,
    ACTIONS(1575), 1,
      sym_colon,
  [16309] = 1,
    ACTIONS(1577), 1,
      sym_integer_literal,
  [16313] = 1,
    ACTIONS(1579), 1,
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
  [SMALL_STATE(24)] = 2078,
  [SMALL_STATE(25)] = 2163,
  [SMALL_STATE(26)] = 2263,
  [SMALL_STATE(27)] = 2363,
  [SMALL_STATE(28)] = 2463,
  [SMALL_STATE(29)] = 2547,
  [SMALL_STATE(30)] = 2647,
  [SMALL_STATE(31)] = 2747,
  [SMALL_STATE(32)] = 2847,
  [SMALL_STATE(33)] = 2947,
  [SMALL_STATE(34)] = 3047,
  [SMALL_STATE(35)] = 3144,
  [SMALL_STATE(36)] = 3222,
  [SMALL_STATE(37)] = 3294,
  [SMALL_STATE(38)] = 3366,
  [SMALL_STATE(39)] = 3438,
  [SMALL_STATE(40)] = 3490,
  [SMALL_STATE(41)] = 3562,
  [SMALL_STATE(42)] = 3634,
  [SMALL_STATE(43)] = 3706,
  [SMALL_STATE(44)] = 3784,
  [SMALL_STATE(45)] = 3831,
  [SMALL_STATE(46)] = 3878,
  [SMALL_STATE(47)] = 3925,
  [SMALL_STATE(48)] = 3971,
  [SMALL_STATE(49)] = 4019,
  [SMALL_STATE(50)] = 4065,
  [SMALL_STATE(51)] = 4113,
  [SMALL_STATE(52)] = 4161,
  [SMALL_STATE(53)] = 4207,
  [SMALL_STATE(54)] = 4254,
  [SMALL_STATE(55)] = 4331,
  [SMALL_STATE(56)] = 4378,
  [SMALL_STATE(57)] = 4425,
  [SMALL_STATE(58)] = 4483,
  [SMALL_STATE(59)] = 4541,
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
  [SMALL_STATE(72)] = 5183,
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
  [SMALL_STATE(90)] = 5871,
  [SMALL_STATE(91)] = 5905,
  [SMALL_STATE(92)] = 5939,
  [SMALL_STATE(93)] = 5973,
  [SMALL_STATE(94)] = 6007,
  [SMALL_STATE(95)] = 6041,
  [SMALL_STATE(96)] = 6075,
  [SMALL_STATE(97)] = 6109,
  [SMALL_STATE(98)] = 6143,
  [SMALL_STATE(99)] = 6177,
  [SMALL_STATE(100)] = 6211,
  [SMALL_STATE(101)] = 6245,
  [SMALL_STATE(102)] = 6279,
  [SMALL_STATE(103)] = 6313,
  [SMALL_STATE(104)] = 6347,
  [SMALL_STATE(105)] = 6381,
  [SMALL_STATE(106)] = 6415,
  [SMALL_STATE(107)] = 6449,
  [SMALL_STATE(108)] = 6483,
  [SMALL_STATE(109)] = 6517,
  [SMALL_STATE(110)] = 6551,
  [SMALL_STATE(111)] = 6585,
  [SMALL_STATE(112)] = 6619,
  [SMALL_STATE(113)] = 6653,
  [SMALL_STATE(114)] = 6687,
  [SMALL_STATE(115)] = 6721,
  [SMALL_STATE(116)] = 6755,
  [SMALL_STATE(117)] = 6789,
  [SMALL_STATE(118)] = 6823,
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
  [SMALL_STATE(176)] = 8811,
  [SMALL_STATE(177)] = 8850,
  [SMALL_STATE(178)] = 8889,
  [SMALL_STATE(179)] = 8927,
  [SMALL_STATE(180)] = 8965,
  [SMALL_STATE(181)] = 9007,
  [SMALL_STATE(182)] = 9043,
  [SMALL_STATE(183)] = 9081,
  [SMALL_STATE(184)] = 9119,
  [SMALL_STATE(185)] = 9161,
  [SMALL_STATE(186)] = 9199,
  [SMALL_STATE(187)] = 9241,
  [SMALL_STATE(188)] = 9279,
  [SMALL_STATE(189)] = 9319,
  [SMALL_STATE(190)] = 9359,
  [SMALL_STATE(191)] = 9386,
  [SMALL_STATE(192)] = 9413,
  [SMALL_STATE(193)] = 9440,
  [SMALL_STATE(194)] = 9467,
  [SMALL_STATE(195)] = 9494,
  [SMALL_STATE(196)] = 9521,
  [SMALL_STATE(197)] = 9548,
  [SMALL_STATE(198)] = 9575,
  [SMALL_STATE(199)] = 9602,
  [SMALL_STATE(200)] = 9629,
  [SMALL_STATE(201)] = 9656,
  [SMALL_STATE(202)] = 9683,
  [SMALL_STATE(203)] = 9718,
  [SMALL_STATE(204)] = 9745,
  [SMALL_STATE(205)] = 9772,
  [SMALL_STATE(206)] = 9799,
  [SMALL_STATE(207)] = 9826,
  [SMALL_STATE(208)] = 9853,
  [SMALL_STATE(209)] = 9888,
  [SMALL_STATE(210)] = 9915,
  [SMALL_STATE(211)] = 9950,
  [SMALL_STATE(212)] = 9977,
  [SMALL_STATE(213)] = 10004,
  [SMALL_STATE(214)] = 10031,
  [SMALL_STATE(215)] = 10057,
  [SMALL_STATE(216)] = 10083,
  [SMALL_STATE(217)] = 10109,
  [SMALL_STATE(218)] = 10135,
  [SMALL_STATE(219)] = 10161,
  [SMALL_STATE(220)] = 10187,
  [SMALL_STATE(221)] = 10213,
  [SMALL_STATE(222)] = 10239,
  [SMALL_STATE(223)] = 10265,
  [SMALL_STATE(224)] = 10291,
  [SMALL_STATE(225)] = 10317,
  [SMALL_STATE(226)] = 10343,
  [SMALL_STATE(227)] = 10369,
  [SMALL_STATE(228)] = 10395,
  [SMALL_STATE(229)] = 10421,
  [SMALL_STATE(230)] = 10447,
  [SMALL_STATE(231)] = 10473,
  [SMALL_STATE(232)] = 10497,
  [SMALL_STATE(233)] = 10521,
  [SMALL_STATE(234)] = 10545,
  [SMALL_STATE(235)] = 10569,
  [SMALL_STATE(236)] = 10593,
  [SMALL_STATE(237)] = 10617,
  [SMALL_STATE(238)] = 10640,
  [SMALL_STATE(239)] = 10663,
  [SMALL_STATE(240)] = 10686,
  [SMALL_STATE(241)] = 10709,
  [SMALL_STATE(242)] = 10732,
  [SMALL_STATE(243)] = 10755,
  [SMALL_STATE(244)] = 10778,
  [SMALL_STATE(245)] = 10801,
  [SMALL_STATE(246)] = 10824,
  [SMALL_STATE(247)] = 10847,
  [SMALL_STATE(248)] = 10870,
  [SMALL_STATE(249)] = 10892,
  [SMALL_STATE(250)] = 10914,
  [SMALL_STATE(251)] = 10936,
  [SMALL_STATE(252)] = 10958,
  [SMALL_STATE(253)] = 10980,
  [SMALL_STATE(254)] = 11002,
  [SMALL_STATE(255)] = 11024,
  [SMALL_STATE(256)] = 11046,
  [SMALL_STATE(257)] = 11068,
  [SMALL_STATE(258)] = 11090,
  [SMALL_STATE(259)] = 11112,
  [SMALL_STATE(260)] = 11134,
  [SMALL_STATE(261)] = 11156,
  [SMALL_STATE(262)] = 11178,
  [SMALL_STATE(263)] = 11200,
  [SMALL_STATE(264)] = 11222,
  [SMALL_STATE(265)] = 11244,
  [SMALL_STATE(266)] = 11266,
  [SMALL_STATE(267)] = 11288,
  [SMALL_STATE(268)] = 11310,
  [SMALL_STATE(269)] = 11332,
  [SMALL_STATE(270)] = 11354,
  [SMALL_STATE(271)] = 11376,
  [SMALL_STATE(272)] = 11398,
  [SMALL_STATE(273)] = 11420,
  [SMALL_STATE(274)] = 11442,
  [SMALL_STATE(275)] = 11464,
  [SMALL_STATE(276)] = 11486,
  [SMALL_STATE(277)] = 11508,
  [SMALL_STATE(278)] = 11530,
  [SMALL_STATE(279)] = 11562,
  [SMALL_STATE(280)] = 11584,
  [SMALL_STATE(281)] = 11606,
  [SMALL_STATE(282)] = 11628,
  [SMALL_STATE(283)] = 11650,
  [SMALL_STATE(284)] = 11672,
  [SMALL_STATE(285)] = 11694,
  [SMALL_STATE(286)] = 11716,
  [SMALL_STATE(287)] = 11738,
  [SMALL_STATE(288)] = 11782,
  [SMALL_STATE(289)] = 11804,
  [SMALL_STATE(290)] = 11848,
  [SMALL_STATE(291)] = 11870,
  [SMALL_STATE(292)] = 11892,
  [SMALL_STATE(293)] = 11914,
  [SMALL_STATE(294)] = 11936,
  [SMALL_STATE(295)] = 11958,
  [SMALL_STATE(296)] = 11980,
  [SMALL_STATE(297)] = 12002,
  [SMALL_STATE(298)] = 12024,
  [SMALL_STATE(299)] = 12046,
  [SMALL_STATE(300)] = 12068,
  [SMALL_STATE(301)] = 12090,
  [SMALL_STATE(302)] = 12112,
  [SMALL_STATE(303)] = 12134,
  [SMALL_STATE(304)] = 12156,
  [SMALL_STATE(305)] = 12178,
  [SMALL_STATE(306)] = 12200,
  [SMALL_STATE(307)] = 12222,
  [SMALL_STATE(308)] = 12244,
  [SMALL_STATE(309)] = 12266,
  [SMALL_STATE(310)] = 12288,
  [SMALL_STATE(311)] = 12310,
  [SMALL_STATE(312)] = 12332,
  [SMALL_STATE(313)] = 12354,
  [SMALL_STATE(314)] = 12376,
  [SMALL_STATE(315)] = 12398,
  [SMALL_STATE(316)] = 12442,
  [SMALL_STATE(317)] = 12473,
  [SMALL_STATE(318)] = 12492,
  [SMALL_STATE(319)] = 12511,
  [SMALL_STATE(320)] = 12529,
  [SMALL_STATE(321)] = 12547,
  [SMALL_STATE(322)] = 12565,
  [SMALL_STATE(323)] = 12583,
  [SMALL_STATE(324)] = 12605,
  [SMALL_STATE(325)] = 12627,
  [SMALL_STATE(326)] = 12649,
  [SMALL_STATE(327)] = 12671,
  [SMALL_STATE(328)] = 12693,
  [SMALL_STATE(329)] = 12715,
  [SMALL_STATE(330)] = 12737,
  [SMALL_STATE(331)] = 12759,
  [SMALL_STATE(332)] = 12781,
  [SMALL_STATE(333)] = 12803,
  [SMALL_STATE(334)] = 12825,
  [SMALL_STATE(335)] = 12847,
  [SMALL_STATE(336)] = 12869,
  [SMALL_STATE(337)] = 12896,
  [SMALL_STATE(338)] = 12925,
  [SMALL_STATE(339)] = 12954,
  [SMALL_STATE(340)] = 12980,
  [SMALL_STATE(341)] = 13006,
  [SMALL_STATE(342)] = 13032,
  [SMALL_STATE(343)] = 13050,
  [SMALL_STATE(344)] = 13076,
  [SMALL_STATE(345)] = 13094,
  [SMALL_STATE(346)] = 13120,
  [SMALL_STATE(347)] = 13146,
  [SMALL_STATE(348)] = 13174,
  [SMALL_STATE(349)] = 13202,
  [SMALL_STATE(350)] = 13228,
  [SMALL_STATE(351)] = 13254,
  [SMALL_STATE(352)] = 13280,
  [SMALL_STATE(353)] = 13306,
  [SMALL_STATE(354)] = 13324,
  [SMALL_STATE(355)] = 13344,
  [SMALL_STATE(356)] = 13364,
  [SMALL_STATE(357)] = 13384,
  [SMALL_STATE(358)] = 13404,
  [SMALL_STATE(359)] = 13424,
  [SMALL_STATE(360)] = 13446,
  [SMALL_STATE(361)] = 13466,
  [SMALL_STATE(362)] = 13476,
  [SMALL_STATE(363)] = 13486,
  [SMALL_STATE(364)] = 13508,
  [SMALL_STATE(365)] = 13530,
  [SMALL_STATE(366)] = 13550,
  [SMALL_STATE(367)] = 13570,
  [SMALL_STATE(368)] = 13590,
  [SMALL_STATE(369)] = 13610,
  [SMALL_STATE(370)] = 13620,
  [SMALL_STATE(371)] = 13630,
  [SMALL_STATE(372)] = 13640,
  [SMALL_STATE(373)] = 13662,
  [SMALL_STATE(374)] = 13684,
  [SMALL_STATE(375)] = 13706,
  [SMALL_STATE(376)] = 13728,
  [SMALL_STATE(377)] = 13750,
  [SMALL_STATE(378)] = 13770,
  [SMALL_STATE(379)] = 13792,
  [SMALL_STATE(380)] = 13812,
  [SMALL_STATE(381)] = 13832,
  [SMALL_STATE(382)] = 13854,
  [SMALL_STATE(383)] = 13874,
  [SMALL_STATE(384)] = 13896,
  [SMALL_STATE(385)] = 13918,
  [SMALL_STATE(386)] = 13938,
  [SMALL_STATE(387)] = 13958,
  [SMALL_STATE(388)] = 13978,
  [SMALL_STATE(389)] = 13998,
  [SMALL_STATE(390)] = 14015,
  [SMALL_STATE(391)] = 14034,
  [SMALL_STATE(392)] = 14053,
  [SMALL_STATE(393)] = 14072,
  [SMALL_STATE(394)] = 14089,
  [SMALL_STATE(395)] = 14106,
  [SMALL_STATE(396)] = 14123,
  [SMALL_STATE(397)] = 14142,
  [SMALL_STATE(398)] = 14161,
  [SMALL_STATE(399)] = 14178,
  [SMALL_STATE(400)] = 14197,
  [SMALL_STATE(401)] = 14216,
  [SMALL_STATE(402)] = 14235,
  [SMALL_STATE(403)] = 14251,
  [SMALL_STATE(404)] = 14267,
  [SMALL_STATE(405)] = 14283,
  [SMALL_STATE(406)] = 14299,
  [SMALL_STATE(407)] = 14315,
  [SMALL_STATE(408)] = 14331,
  [SMALL_STATE(409)] = 14347,
  [SMALL_STATE(410)] = 14363,
  [SMALL_STATE(411)] = 14376,
  [SMALL_STATE(412)] = 14389,
  [SMALL_STATE(413)] = 14400,
  [SMALL_STATE(414)] = 14413,
  [SMALL_STATE(415)] = 14424,
  [SMALL_STATE(416)] = 14437,
  [SMALL_STATE(417)] = 14450,
  [SMALL_STATE(418)] = 14463,
  [SMALL_STATE(419)] = 14476,
  [SMALL_STATE(420)] = 14489,
  [SMALL_STATE(421)] = 14500,
  [SMALL_STATE(422)] = 14513,
  [SMALL_STATE(423)] = 14526,
  [SMALL_STATE(424)] = 14539,
  [SMALL_STATE(425)] = 14552,
  [SMALL_STATE(426)] = 14565,
  [SMALL_STATE(427)] = 14578,
  [SMALL_STATE(428)] = 14591,
  [SMALL_STATE(429)] = 14604,
  [SMALL_STATE(430)] = 14617,
  [SMALL_STATE(431)] = 14630,
  [SMALL_STATE(432)] = 14643,
  [SMALL_STATE(433)] = 14656,
  [SMALL_STATE(434)] = 14669,
  [SMALL_STATE(435)] = 14682,
  [SMALL_STATE(436)] = 14695,
  [SMALL_STATE(437)] = 14708,
  [SMALL_STATE(438)] = 14715,
  [SMALL_STATE(439)] = 14728,
  [SMALL_STATE(440)] = 14741,
  [SMALL_STATE(441)] = 14750,
  [SMALL_STATE(442)] = 14763,
  [SMALL_STATE(443)] = 14776,
  [SMALL_STATE(444)] = 14789,
  [SMALL_STATE(445)] = 14802,
  [SMALL_STATE(446)] = 14815,
  [SMALL_STATE(447)] = 14826,
  [SMALL_STATE(448)] = 14839,
  [SMALL_STATE(449)] = 14852,
  [SMALL_STATE(450)] = 14863,
  [SMALL_STATE(451)] = 14876,
  [SMALL_STATE(452)] = 14889,
  [SMALL_STATE(453)] = 14902,
  [SMALL_STATE(454)] = 14915,
  [SMALL_STATE(455)] = 14928,
  [SMALL_STATE(456)] = 14939,
  [SMALL_STATE(457)] = 14952,
  [SMALL_STATE(458)] = 14961,
  [SMALL_STATE(459)] = 14970,
  [SMALL_STATE(460)] = 14979,
  [SMALL_STATE(461)] = 14990,
  [SMALL_STATE(462)] = 15003,
  [SMALL_STATE(463)] = 15016,
  [SMALL_STATE(464)] = 15023,
  [SMALL_STATE(465)] = 15030,
  [SMALL_STATE(466)] = 15037,
  [SMALL_STATE(467)] = 15044,
  [SMALL_STATE(468)] = 15057,
  [SMALL_STATE(469)] = 15070,
  [SMALL_STATE(470)] = 15083,
  [SMALL_STATE(471)] = 15096,
  [SMALL_STATE(472)] = 15109,
  [SMALL_STATE(473)] = 15122,
  [SMALL_STATE(474)] = 15135,
  [SMALL_STATE(475)] = 15148,
  [SMALL_STATE(476)] = 15161,
  [SMALL_STATE(477)] = 15174,
  [SMALL_STATE(478)] = 15187,
  [SMALL_STATE(479)] = 15200,
  [SMALL_STATE(480)] = 15213,
  [SMALL_STATE(481)] = 15226,
  [SMALL_STATE(482)] = 15239,
  [SMALL_STATE(483)] = 15252,
  [SMALL_STATE(484)] = 15265,
  [SMALL_STATE(485)] = 15278,
  [SMALL_STATE(486)] = 15291,
  [SMALL_STATE(487)] = 15300,
  [SMALL_STATE(488)] = 15313,
  [SMALL_STATE(489)] = 15319,
  [SMALL_STATE(490)] = 15329,
  [SMALL_STATE(491)] = 15339,
  [SMALL_STATE(492)] = 15345,
  [SMALL_STATE(493)] = 15355,
  [SMALL_STATE(494)] = 15361,
  [SMALL_STATE(495)] = 15367,
  [SMALL_STATE(496)] = 15373,
  [SMALL_STATE(497)] = 15379,
  [SMALL_STATE(498)] = 15389,
  [SMALL_STATE(499)] = 15395,
  [SMALL_STATE(500)] = 15401,
  [SMALL_STATE(501)] = 15411,
  [SMALL_STATE(502)] = 15421,
  [SMALL_STATE(503)] = 15431,
  [SMALL_STATE(504)] = 15437,
  [SMALL_STATE(505)] = 15447,
  [SMALL_STATE(506)] = 15453,
  [SMALL_STATE(507)] = 15463,
  [SMALL_STATE(508)] = 15473,
  [SMALL_STATE(509)] = 15483,
  [SMALL_STATE(510)] = 15489,
  [SMALL_STATE(511)] = 15499,
  [SMALL_STATE(512)] = 15509,
  [SMALL_STATE(513)] = 15515,
  [SMALL_STATE(514)] = 15521,
  [SMALL_STATE(515)] = 15527,
  [SMALL_STATE(516)] = 15533,
  [SMALL_STATE(517)] = 15543,
  [SMALL_STATE(518)] = 15549,
  [SMALL_STATE(519)] = 15555,
  [SMALL_STATE(520)] = 15562,
  [SMALL_STATE(521)] = 15569,
  [SMALL_STATE(522)] = 15576,
  [SMALL_STATE(523)] = 15583,
  [SMALL_STATE(524)] = 15590,
  [SMALL_STATE(525)] = 15595,
  [SMALL_STATE(526)] = 15602,
  [SMALL_STATE(527)] = 15609,
  [SMALL_STATE(528)] = 15616,
  [SMALL_STATE(529)] = 15621,
  [SMALL_STATE(530)] = 15628,
  [SMALL_STATE(531)] = 15633,
  [SMALL_STATE(532)] = 15640,
  [SMALL_STATE(533)] = 15647,
  [SMALL_STATE(534)] = 15654,
  [SMALL_STATE(535)] = 15661,
  [SMALL_STATE(536)] = 15668,
  [SMALL_STATE(537)] = 15675,
  [SMALL_STATE(538)] = 15680,
  [SMALL_STATE(539)] = 15685,
  [SMALL_STATE(540)] = 15692,
  [SMALL_STATE(541)] = 15697,
  [SMALL_STATE(542)] = 15704,
  [SMALL_STATE(543)] = 15711,
  [SMALL_STATE(544)] = 15718,
  [SMALL_STATE(545)] = 15723,
  [SMALL_STATE(546)] = 15728,
  [SMALL_STATE(547)] = 15733,
  [SMALL_STATE(548)] = 15738,
  [SMALL_STATE(549)] = 15745,
  [SMALL_STATE(550)] = 15750,
  [SMALL_STATE(551)] = 15755,
  [SMALL_STATE(552)] = 15762,
  [SMALL_STATE(553)] = 15769,
  [SMALL_STATE(554)] = 15776,
  [SMALL_STATE(555)] = 15783,
  [SMALL_STATE(556)] = 15790,
  [SMALL_STATE(557)] = 15797,
  [SMALL_STATE(558)] = 15804,
  [SMALL_STATE(559)] = 15811,
  [SMALL_STATE(560)] = 15816,
  [SMALL_STATE(561)] = 15821,
  [SMALL_STATE(562)] = 15828,
  [SMALL_STATE(563)] = 15835,
  [SMALL_STATE(564)] = 15842,
  [SMALL_STATE(565)] = 15849,
  [SMALL_STATE(566)] = 15856,
  [SMALL_STATE(567)] = 15863,
  [SMALL_STATE(568)] = 15870,
  [SMALL_STATE(569)] = 15877,
  [SMALL_STATE(570)] = 15884,
  [SMALL_STATE(571)] = 15891,
  [SMALL_STATE(572)] = 15898,
  [SMALL_STATE(573)] = 15905,
  [SMALL_STATE(574)] = 15912,
  [SMALL_STATE(575)] = 15919,
  [SMALL_STATE(576)] = 15926,
  [SMALL_STATE(577)] = 15931,
  [SMALL_STATE(578)] = 15938,
  [SMALL_STATE(579)] = 15943,
  [SMALL_STATE(580)] = 15948,
  [SMALL_STATE(581)] = 15955,
  [SMALL_STATE(582)] = 15962,
  [SMALL_STATE(583)] = 15969,
  [SMALL_STATE(584)] = 15976,
  [SMALL_STATE(585)] = 15983,
  [SMALL_STATE(586)] = 15988,
  [SMALL_STATE(587)] = 15995,
  [SMALL_STATE(588)] = 16002,
  [SMALL_STATE(589)] = 16009,
  [SMALL_STATE(590)] = 16016,
  [SMALL_STATE(591)] = 16023,
  [SMALL_STATE(592)] = 16030,
  [SMALL_STATE(593)] = 16037,
  [SMALL_STATE(594)] = 16044,
  [SMALL_STATE(595)] = 16049,
  [SMALL_STATE(596)] = 16056,
  [SMALL_STATE(597)] = 16063,
  [SMALL_STATE(598)] = 16070,
  [SMALL_STATE(599)] = 16077,
  [SMALL_STATE(600)] = 16084,
  [SMALL_STATE(601)] = 16089,
  [SMALL_STATE(602)] = 16093,
  [SMALL_STATE(603)] = 16097,
  [SMALL_STATE(604)] = 16101,
  [SMALL_STATE(605)] = 16105,
  [SMALL_STATE(606)] = 16109,
  [SMALL_STATE(607)] = 16113,
  [SMALL_STATE(608)] = 16117,
  [SMALL_STATE(609)] = 16121,
  [SMALL_STATE(610)] = 16125,
  [SMALL_STATE(611)] = 16129,
  [SMALL_STATE(612)] = 16133,
  [SMALL_STATE(613)] = 16137,
  [SMALL_STATE(614)] = 16141,
  [SMALL_STATE(615)] = 16145,
  [SMALL_STATE(616)] = 16149,
  [SMALL_STATE(617)] = 16153,
  [SMALL_STATE(618)] = 16157,
  [SMALL_STATE(619)] = 16161,
  [SMALL_STATE(620)] = 16165,
  [SMALL_STATE(621)] = 16169,
  [SMALL_STATE(622)] = 16173,
  [SMALL_STATE(623)] = 16177,
  [SMALL_STATE(624)] = 16181,
  [SMALL_STATE(625)] = 16185,
  [SMALL_STATE(626)] = 16189,
  [SMALL_STATE(627)] = 16193,
  [SMALL_STATE(628)] = 16197,
  [SMALL_STATE(629)] = 16201,
  [SMALL_STATE(630)] = 16205,
  [SMALL_STATE(631)] = 16209,
  [SMALL_STATE(632)] = 16213,
  [SMALL_STATE(633)] = 16217,
  [SMALL_STATE(634)] = 16221,
  [SMALL_STATE(635)] = 16225,
  [SMALL_STATE(636)] = 16229,
  [SMALL_STATE(637)] = 16233,
  [SMALL_STATE(638)] = 16237,
  [SMALL_STATE(639)] = 16241,
  [SMALL_STATE(640)] = 16245,
  [SMALL_STATE(641)] = 16249,
  [SMALL_STATE(642)] = 16253,
  [SMALL_STATE(643)] = 16257,
  [SMALL_STATE(644)] = 16261,
  [SMALL_STATE(645)] = 16265,
  [SMALL_STATE(646)] = 16269,
  [SMALL_STATE(647)] = 16273,
  [SMALL_STATE(648)] = 16277,
  [SMALL_STATE(649)] = 16281,
  [SMALL_STATE(650)] = 16285,
  [SMALL_STATE(651)] = 16289,
  [SMALL_STATE(652)] = 16293,
  [SMALL_STATE(653)] = 16297,
  [SMALL_STATE(654)] = 16301,
  [SMALL_STATE(655)] = 16305,
  [SMALL_STATE(656)] = 16309,
  [SMALL_STATE(657)] = 16313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 15),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 15),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 44),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 60),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 60),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 77),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 67),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 1, 0, 67),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 77),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(117),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(24),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(390),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(638),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(375),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(376),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(391),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(474),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(531),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(28),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(397),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(635),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(407),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(372),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(373),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(401),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(348),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(406),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(462),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(543),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(633),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(541),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 9),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 9),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 9),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 9),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(589),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(631),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(587),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(611),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 57),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 57),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 8),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 8),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 65),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 65),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 66),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 66),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 74),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 74),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 75),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 75),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 76),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 76),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 78),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 78),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 79),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 79),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 81),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 81),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 82),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 82),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 4, 0, 84),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 4, 0, 84),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 16),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 16),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_until_clause, 3, 0, 83),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_until_clause, 3, 0, 83),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_indented, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_indented, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_indented, 2, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_indented, 2, 0, 0),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_indented_repeat1, 2, 0, 0),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definition_indented_repeat1, 2, 0, 0),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(594),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 22),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 22),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 40),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 40),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 68),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 68),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 58),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 58),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 12),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 12),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_indented_content_line, 2, 0, 22),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_indented_content_line, 2, 0, 22),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 69),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 69),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 41),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 41),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 28),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 28),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 72),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 72),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 43),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 43),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 35),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 35),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 17),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 17),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 17),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 17),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 18),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 18),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 73),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 73),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 24),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 24),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 5),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_body, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_body, 1, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 5),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 5),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 43),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 43),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 4, 0, 52),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 4, 0, 52),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 4, 0, 54),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 4, 0, 54),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 4, 0, 53),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 4, 0, 53),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 56),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 56),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 5),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 30),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 30),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 11),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 11),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 59),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 59),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 61),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 61),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 6, 0, 80),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 6, 0, 80),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 5),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 3, 0, 34),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 3, 0, 34),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 35),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 35),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 30),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 30),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_job_body, 1, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 8),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 8),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 61),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 61),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 59),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 59),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 5),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chore, 4, 0, 5),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 5, 0, 70),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 5, 0, 70),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 5, 0, 68),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 5, 0, 68),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_markdown, 5, 0, 71),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_markdown, 5, 0, 71),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 8),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 8),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 73),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 73),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 10),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 10),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 11),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 11),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [1088] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20),
  [1121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20), SHIFT_REPEAT(361),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 7),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 6),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(594),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definition_markdown_repeat1, 2, 0, 0),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(637),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 1, 0, 31),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 1, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 63),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 63), SHIFT_REPEAT(636),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 2, 0, 45),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_parallelism, 2, 0, 50),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 62),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 22),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 1, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_fenced_content_line, 1, 0, 0),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 85),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27), SHIFT_REPEAT(501),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_fenced_content_line, 2, 0, 22),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_parallel_head, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 41),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_output_type, 2, 0, 46),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 2, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 13),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 26),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 28),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_rank_head, 1, 0, 0),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 2, 0, 0),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_limit, 1, 0, 33),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
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
